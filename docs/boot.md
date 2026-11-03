# Boot de The Warriors — cadena de bloqueos y método de diagnóstico

> TWR-27 (ADR en el meta-repo: `products/twr/planning-artifacts/TWR-27/adr.md`). Este documento
> registra **cada** bloqueo real del boot que se encuentre, con su causa y su corrección. Regla:
> ninguna corrección stubea, acorta o fuerza el retorno de una función del juego, ni escribe
> valores en la RAM guest; se corrige el **productor** en el runtime o en el IOP.

## Cómo medir el progreso

- `[fps] ... flips=<total> flips/sec=<n> ... prims/sec=<n>` — `flips` cuenta los cambios efectivos
  de `DISPFB1` (store del bus o pseudo-registro `0x59` de los stubs `sceGs*`). Es la métrica del
  boot: `flips > 0` y creciente = el juego presenta frames.
- `gframe=` se conserva en la línea por compatibilidad con scripts viejos, pero **no** es criterio:
  lo avanzaba un hook de BT3 en `0x100ab8` (no es función de Warriors), así que en Warriors vale 0.
- `[stallprobe] pc=<pc> x<n> main ra=<ra> | ...` — el hilo principal re-despachó `n` veces el mismo
  pc (umbrales 2 000 / 20 000 / 200 000 / 2 000 000).

```bash
cd /var/www/html/ports/ps2/TW-Recomp
PS2X_CD_IMAGE="<ruta al ISO>" ./build/ps2xRuntime/ps2EntryRunner games/warriors/SLUS_212.15
```

## Método de diagnóstico (ADR TWR-27 D4)

1. **Localizar el productor** de lo que la espera compara:
   - `PS2X_ADDRWATCH=<hex>[,<hex>,<hex>]` + `PS2X_ADDRWATCH_ALL=1` (desde el boot; sin `_ALL` solo
     registra durante una pelea): imprime cada store que cambia esas direcciones con pc/ra/valores.
   - `PS2X_STORETRACE=<lo>:<hi>[;frames]` y `PS2X_STORETRACE_ADDR=<lo>:<hi>`.
   - `PS2X_STEPCENSUS=<out.csv>` (agrupa por frame lógico; hoy su enganche por frame dependía de la
     capa BT3 retirada, ver Inventario).
   Los cuatro se activan para cualquier ELF desde `PS2Runtime::initialize()` (`ps2_diag_env.cpp`).
2. **Clasificar la causa** en el subsistema del productor: (a) runtime EE (hilos, semáforos,
   alarmas, interrupciones, DMA), (b) SIF/IOP (`ps2xIOP`, host adapter), (c) CD, (d) GS/VIF/VU,
   (e) input.
3. **Corregir en el subsistema**, con traza o test que lo demuestre, y anotarlo abajo.
4. `tools/check_override_addresses.py` (CI) rechaza cualquier dirección enganchada que no sea
   inicio de función de `SLUS_212.15`.

## Cadena de bloqueos

| # | Síntoma | Estado | Causa | Corrección |
|---|---|---|---|---|
| 1 | Hilo principal en `0x154b50` (`sub_00154AE0`, `ra=0x154d1c`) x200 000 | **Desaparece** al desregistrar la capa BT3 (commit `55da112b`) | Pendiente de aislar qué override BT3 lo producía (bisección de los 12 registros retirados, sub-fase 3b) | Retiro de la capa BT3 |
| 2 | Hilo principal en `0x47dd70` (`ra=0x47dd90`, `a1=a2=0x2000010`), `flips=0` | **Abierto** (3b) | — | — |

## Capa BT3 retirada en TWR-27

- `game_overrides.cpp`: 12 registros (sound init bypass con los `ret1` de TWR-13 y el Fix A/B de
  TWR-17, `PS2X_SNDNOSTOP`, pad HLE `warriorsPad*`, stubs `sceMpeg`, guards NULL packet / CD
  state / demo / versus / cámara / clip, IOP boot bypass `ret0` en `0x339A20`, RECVX, LotR) y
  ~7 800 líneas de su lógica. Solo queda `applyTwWarriorsRenderer`.
- `ps2_runtime.cpp` (dispatcher): pumps activos por defecto que ejecutaban código guest en
  `0x28a3b0`/`0x28a530` (CD tick / CRI ADX de BT3) y `PS2X_GSBUSYCLR`, que borraba un bit de
  `*(*(0x2ff10c)+0x14)` cada 64 branches; más los opt-in `SNDACK/SNDWAKE/SNDDISP/SNDKICK` y las
  sondas `SNDGATE/ADXLOG/SNDLOG/SNDAUDIT/SNDTRACE`. `Interrupt.cpp`: `warriorsPumpCdTick`.

## Inventario: subsistemas heredados de BT3 que quedan inertes

Siguen compilando, pero en Warriors no hacen nada porque su estado lo producía la capa retirada.
Su auditoría o retiro es deuda declarada (ADR TWR-27, Consecuencias) y se propone como ticket
aparte al cerrar TWR-27.

| Subsistema | Dónde | Por qué es inerte |
|---|---|---|
| Netplay / rollback / state sync | `ps2_netplay.cpp`, `Ps2xRollback` en `ps2_runtime.cpp`, `ps2_simsnap.cpp`, `runtime/ps2_statesync.h` | La frontera de frame (`ps2xFrameGateWait`) la llamaba `warriorsFrameKick` (hook BT3). El snapshot quedó reducido a la parte genérica (RAM, dispositivos) |
| Frame-gate / pacing de pelea, half-step 60 fps | `ps2_stepcensus.cpp` (`ps2HalfStep*`, `ps2FightTicks`), `g_ps2xFrameGateHeavy` | La lógica de pelea la notificaban hooks BT3; `g_warriorsFrameCount` vale 0 |
| Menú "net entry", serve-swap AFS, net jump | `ps2_bt3_inert.cpp`, `ps2_texreplace.cpp`, `ps2_settings_overlay.cpp`, `ps2x_net_texdump.cpp` | Puntos de entrada con valor neutro |
| Captura de bancos SE / SE HLE | `ps2_bt3_inert.cpp` (`warriorsNoteSeBank*`), taps en `Kernel/Stubs/SIF.cpp` | El consumidor (SE HLE de BT3) se borró |
| Capa DTX / `PS2X_SNDPLAY` | `Kernel/Syscalls/RPC.cpp`, `Kernel/Stubs/SIF.cpp` | Inerte desde TWR-29 (`dtxCompat.isConfigured() == false`); retiro asignado a TWR-30/31 |
| Achievements, mods ("Tag Team"), Duel dump/fields, main-menu probe | `ps2x_achieve.cpp`, `ps2x_mods.cpp`, `ps2x_dueldump.cpp`, `ps2x_duel_fields.cpp`, `ps2x_mainmenu*.cpp` | Mapas de memoria y eventos de BT3; `ps2xModsFrame` lo llamaba el hook BT3 de frame |
| Estado de juego `g_warriorsStateLive` | `ps2x_netplay_probe.cpp` | Lo alimentaba una sonda BT3 |
| Sondas de solo lectura con direcciones BT3 | `RPC.cpp` (`[rpclog]` lee `0x2c9f14`), `ps2_runtime.cpp` (`PS2X_DUMP_OVERLAY` 0x334c00, sonda de bucle 0x100628/0x336a90) | Solo imprimen; opt-in |
| Nombres `warriors*` / `g_warriors*` | varios | Eran de BT3 renombrados; se conservan para no tocar 30 consumidores en TWR-27 |
