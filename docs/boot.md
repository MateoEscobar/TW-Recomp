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
   - `[stallprobe]` (siempre activo) imprime, a la 2000.ª repetición del mismo PC, un **backtrace
     heurístico** del hilo: palabras de `[sp, sp+0x800)` que apuntan a código y siguen a un `jal`
     (`*` = `jalr`). Mapear cada dirección a su `ps2xRuntime/src/runner/sub_*` da la cadena real.
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
| 2 | Hilo principal en `0x47dd70` (`ra=0x47dd90`, `a1=a2=0x2000010`), `flips=0` | **Resuelto** (3b) | Runtime EE (a): `SetupHeap` recortaba el heap del kernel a `0x01F00000`; el juego pide `0x715b60..0x1FF0004` y reserva toda la RAM libre con un `malloc` (ver detalle) | Mapa de memoria `[hiarena]` (`ps2_memory.h`) + `SetupHeap`/`EndOfHeap` con semántica de kernel |
| 3a | Bucle de frame en `0x148D10` con `sceGsSyncV` (~60/s), `flips=0`: el reloj del juego no avanza (`now=0`) | **Resuelto** (3b) | Runtime EE (a): `mfc0 Count` se traduce a `ctx->cop0_count` y nada incrementaba ese registro (ni aquí ni en el runtime upstream) | `COP0 Count` global a 294,912 MHz sobre el reloj de los timers EE (`Ps2Cop0CountReg`, `ps2xCop0CountRead/Write`) |
| 3b | Mismo bucle con el reloj ya en marcha: el callback de frame `[0x50B728]` sigue en NULL, `flips=0` | **Abierto** (3b/3c) | Pendiente: `sub_001458D8` (setter) solo lo llaman `0x1612B0`/`0x161378`/`0x40E2D8` desde `sub_0015FE90` (gestor de flujo), que no se ejecuta | — |

### Detalle del bloqueo 2 — heap del kernel recortado

Cadena real (backtrace de `[stallprobe]`): `crt0 0x1001c0` → `0x443670` → `0x144764` → `0x160e2c` →
`0x145820` → `0x17a210` → `0x194df0` → init RenderWare en `sub_00194558` (`0x194b18`) →
`RwEngineTerm` (`0x4836d0`) → `0x47e0f4` → `sub_0047DD28(NULL)`.

1. `sub_00148828` (plataforma) calcula `size = 0x1FFF000 − (_end 0x715b5c + 0x11000) − 0x810 =
   0x18d7c94` y llama `malloc(size)` (newlib real, `0x433B60`): el juego toma **toda** la RAM libre
   hasta su pila para su propio gestor de heaps.
2. `SetupHeap(0x715b5c, 0x18da4a4)` pedía fin `0x1FF0004`, pero el runtime lo recortaba a
   `kDefaultGuestHeapEnd = 0x01F00000` (las pools RPC/TLS, las pilas de callbacks y el heap HLE del
   runtime vivían en `0x01F00000+`). `sbrk` no tenía sitio → `malloc` devolvía 0.
3. Sin arena, el heap de arranque del juego (objeto en pila, vtable `0x544370`) devuelve 0 → el gestor
   (`0x6eb958`, `PushHeap` `0x3395b8`) apila heaps NULL → el `malloc` de RenderWare (`0x192908` →
   `0x339a20`) devuelve basura/0 → `RwFreeListAlloc` del registro de plugins (`0x70acc8`, `blockList =
   {1,1}`) falla → `RwEngineInit` (`0x483530`) sale con `498630 = 0` → `RwEngineOpen`/`RwEngineStart`
   fallan → la ruta de error llama `RwEngineTerm`, que destruye el "objeto actual" `[gp-0x7A24] = NULL`
   y vacía una lista en `0x10` cuyo nodo `0x2000010` se apunta a sí mismo → bucle infinito.

Corrección (runtime, sin tocar el juego): con RAM de respaldo > 32 MB (`PS2X_RAM_MB=128`, por defecto)
las reservas propias del runtime pasan **encima** de los 32 MB nativos (`[hiarena]`: pools RPC/TLS/boot
en `0x2000000`, pilas async `0x2040000..0x2100000`, heap HLE `0x2100000..`) y `SetupHeap`/`EndOfHeap`
devuelven el heap del kernel tal como lo pide el juego (`[start, start+size)`, o hasta la pila principal
con `size = −1`), acotado a 32 MB. Con 32 MB de respaldo se conserva el layout anterior. Resultado:
`[SetupHeap] kernel heap 0x715b60..0x1ff0004`, `RwEngineInit/Open/Start` devuelven 1 y el hilo
principal llega al bucle de frame (bloqueo 3).

### Detalle del bloqueo 3a — `COP0 Count` congelado

`sub_00148C90` es el bucle principal: `isDone` virtual (`0x148C38`) → `update` del gestor global
`[0x50BCE4]` (`0x14C140`) → `sceGsSyncV(0)` (`func_4AA9F0`, `ra=0x148d10`) → lee el reloj del juego
(objeto `[0x50B8B8]`, `vtbl+0x34 = 0x4DCDD8` = ciclos / `0x48000`, es decir ms) y, cuando pasan
`[0x50B720] = 67` ms desde `[0x50B72C]`, llama `0x1454A8` y el callback de frame `[0x50B728]` si no es
NULL. Los ciclos salen de `0x148FD8` → `0x148FC8` = `mfc0 $v0, Count`. El recompilador traduce eso a
`ctx->cop0_count` y ningún código lo incrementaba: `now` valía 0 siempre y el bucle nunca entraba al
frame.

Corrección (runtime, sin tocar el juego): `cop0_count` pasa a ser un `Ps2Cop0CountReg` (mismo layout de
32 bits) cuya lectura devuelve un contador **global** a 294,912 MHz derivado de `steadyClockNs()` (el
mismo reloj de los timers EE, que en modo frame-stepped es el reloj virtual) y cuya escritura (`mtc0
Count`) fija un desplazamiento global, como el registro real. No hace falta regenerar el runner: los 4
lectores (`0x148FC8`, `0x48B708`, `0x48BDB0`, `0x4CD3D0`) usan el campo tal cual. Verificado: `now`
avanza en ms (0 → 58 082 en ~58 s).

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
