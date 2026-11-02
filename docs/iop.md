# IOP emulado (ps2xIOP) — arquitectura e integración

> Introducido en TWR-29 (ADR en `arkenovix-dev-agent/products/twr/planning-artifacts/TWR-29/adr.md`).
> Decisión de motor: ADR TWR-28.

## Por qué

The Warriors arranca su sonido en el IOP: el EE carga `MODULES/IOP.IRX` (Sony **MultiStream 7.1**,
librería `SOUND_*` del lado EE) y le habla por el servidor RPC `0x12345`. Sin un IOP que ejecute ese
módulo, las nueve RPC del boot las respondía un servidor dummy y el juego nunca salía de la
inicialización. Ningún HLE por juego ni la recompilación estática r3000 heredada de BT3 (`src/iop_native`,
borrada en este ticket) resolvían eso de forma escalable.

## Arquitectura

```
 EE (código recompilado)                         IOP emulado (ps2xRecomp/ps2xIOP, ps2x::iop)
 ───────────────────────                         ─────────────────────────────────────────
 sceSifLoadModule ─┐                             IopSubsystem
 sceSifBindRpc     │  Kernel/Syscalls/RPC.cpp    ├─ intérprete R3000A
 sceSifCallRpc     ├─ Kernel/Stubs/SIF.cpp  ──►  ├─ kernel IOP virtual (sysmem, thbase, sifcmd,
 sceSifSetDma      │        │                    │   timrman, cdvdman, ioman, ...)
 sceSifAllocIopHeap┘        ▼                    ├─ RAM IOP propia (2 MB)
                     PS2IopTransport  ──────►     └─ módulos IRX reales del disco
                            │                                 ▲
                            ▼                                 │ IopHost
                  PS2Runtime (wrappers, m_iopMutex)   PS2IopHostAdapter (ps2_iop_host.cpp)
                            ▲                         - memoria guest EE (getMemPtr)
                            │ bombeo                  - cdrom0:/host0: → ISO / games/warriors
          eeCheckpointDue + pumpIopForVsync          - memory card → sceMc* del EE
                                                      - IOP→EE: dispatchSifCommand / rpcInvokeFunction
```

- **`PS2Runtime`** posee `PS2IopHostAdapter` + `ps2x::iop::IopSubsystem`. Todos los wrappers
  (`loadIopModule`, `handleIopRpc`, `advanceIopEeCycles`, `readIopMemory`, …) toman `m_iopMutex`
  (recursivo): el subsistema no es thread-safe y lo tocan hilos guest, el worker de vblank y el hilo GL.
- **`PS2IopTransport`** (`ps2_iop_transport.h`) es la única puerta de stubs/syscalls al subsistema.
- **RAM IOP única:** la del subsistema. `sceSifSetDma`, `sceSifGetOtherData`, `sceSifAllocIopHeap`,
  `sceSifAllocSysMemory` y `sceSifSendCmd` operan sobre ella (`writeIopMemory`/`readIopMemory`/
  `allocateIopMemory`). El antiguo heap falso del lado EE desapareció.
- **Política de despacho en `SifCallRpc`:** si el IOP provee el SID (`canBindRpc`), la llamada va al
  IRX real **antes** del HLE heredado (`ps2_iop::handleRPC`, que mapea `0x12345` al driver de LotR) y de
  la capa DTX (inerte para Warriors: `applyBt3DtxCompat` ya no se registra). El HLE solo responde SIDs
  sin proveedor.
- **`SifBindRpc`:** descriptor `iopBacked` (handle en RAM guest, `func = 0`) cuando el IOP tiene el SID;
  antes de decidir bombea hasta ~50 ms de IOP para que el hilo del IRX registre el servidor. Para un SID
  sin proveedor se conserva el dummy con el aviso `[bind] no IOP provider sid=…`.

## Bombeo de ciclos EE→IOP

- `PS2Runtime::eeCheckpointDue` (cada 65 536 ciclos EE, en cada backward edge del código generado)
  llama `advanceIopEeCycles(65536)`: hilos, timers y cdvd del IOP avanzan mientras el EE corre.
- `signalVSyncFlag` (worker de vblank) llama `pumpIopForVsync()`: paga la **deuda** hasta 4 915 200
  ciclos EE por campo (NTSC) que los checkpoints no bombearon. Así el IOP progresa aunque todos los hilos
  EE duerman esperando al IOP. Solo corre si puede tomar el guest lock con `try_lock` (evita la inversión
  de orden de locks con un IRX que llame de vuelta al EE).
- Guarda de reentrada `m_iopCallDepth`: nunca se interpreta desde dentro de una llamada IOP en curso.

## IOP → EE

- **Comandos SIF** (`sceSifSendCmd` del IOP): `IopHost::sendSifCommand` → `ps2_stubs::dispatchSifCommand`
  → handler registrado por el EE con `sceSifAddCmdHandler(cid, func, arg)` (síncrono, `rpcInvokeFunction`).
- **RPC** (`sceSifBindRpc`/`sceSifCallRpc` del lado IOP, ordinales `sifcmd` 15/16): implementados en el
  fork `MateoEscobar/PS2Recomp` (rama `feature/iop-sifcmd-ee-rpc`) con dos hooks nuevos de `IopHost`:
  `hasGuestRpcServer(sid)` y `callGuestRpc(...)`. El adapter los resuelve sobre los servidores que el EE
  registró con `SifRegisterRpc` (p. ej. `0x12344321` de MultiStream) y ejecuta `sd->func(fno, buf, size)`.
  Log: `[ps2xIOP] ee-rpc sid=… fn=…`.

## Orden de carga (boot de Warriors)

`SIO2MAN.IRX`, `PADMAN.IRX`, `LIBSD.IRX`, `IOP.IRX` (MultiStream), `MCMAN.IRX`, `MCSERV.IRX` — log
`[SIF module] load-emulated id=1..6`. `IOPRP300.IMG` **no** se carga: el kernel virtual de ps2xIOP provee
los residentes. `IOP.IRX` imprime `Exit MultiStream V7.1 Thread Load` al arrancar.

## Resolución de rutas de módulos (`PS2IopHostAdapter::translateGuestPath`)

Para `cdrom0:\MODULES\X.IRX;1` (y `cdrom:`), en orden:

1. Imagen de disco (`PS2X_CD_IMAGE`): `ps2_iso9660::resolve` → ruta sintética `iso://<lba>/<size>`, que
   `openHostFile` abre como ventana sobre la imagen. Log `[ps2xIOP] module X.IRX from iso lba=… size=…`.
2. `games/warriors/IRX/X.IRX` (extraídos; carpeta ignorada por git).
3. `games/warriors/Modules/X.IRX`.
4. `<cdRoot>/MODULES/X.IRX`.

Si nada existe: `[ps2xIOP:error] module … not found; tried: …`, `loadModule` devuelve `handled=false` y
`SifLoadModule` devuelve `-1` al EE. `host0:`/`host:` resuelven contra `games/warriors/`.

Dentro del IOP, `cdvdman` lee sectores de la imagen por LBA y `sceCdSearchFile` resuelve contra el árbol
ISO9660 de la imagen (fork), con el ISO virtual de `cdRoot` como fallback.

## Variables de entorno

| Variable            | Efecto |
|---------------------|--------|
| `PS2X_CD_IMAGE`     | Ruta al ISO. Origen principal de los IRX y de las lecturas `cdvdman`. |
| `PS2X_IOP_LOADLOG=1`| Lista cada módulo que el juego pide (`[iop-load] …`). |
| `PS2X_IOP_LOG=1`    | Muestra también los mensajes de nivel *debug* del subsistema (`[ps2xIOP:debug]`). |
| `PS2X_SNDPLAY=1`    | (opt-in, antes ON) reenvía DMA EE→IOP como PCM al dispositivo. Camino heredado; sale en TWR-30. |

Desaparecieron: `PS2X_IOP_MODULES`, `PS2X_IOP_IOPRP`, `PS2X_IOP_DIR`, `PS2X_IOP_SCHED`,
`PS2X_IOP_WATCHDOG`, `PS2X_IOP_NOENTRY`, `PS2X_IOP_XCALL_*`, `PS2X_IOP_REGLOG`, `PS2X_IOP_RUN`.

## Pestaña IOP/SIF del panel de debug

- **ps2xIOP (emulated IOP):** ciclos, instrucciones, módulos, hilos, servidores RPC; contadores del host
  (módulos desde ISO/host/faltantes, `ee-rpc`, comandos SIF, invocaciones guest, `audioCommand`); tabla
  de servicios HLE (nombre, SIDs, activo, métricas) y diagnósticos del subsistema.
- **SIF RPC state → servidores:** columna **IOP** = `yes` cuando el SID lo sirve un IRX del IOP emulado
  (`0x12345`, `0x80000100/101`, `0x80000400/480`, `0x80000701`).
- **RPC history:** flags `iop` (atendida por el IOP emulado) y `dummy` (bind sin proveedor).

## Tests

```bash
cmake -S ps2xRecomp/ps2xIOP -B build-iop-tests -G Ninja -DPS2X_IOP_BUILD_TESTS=ON
cmake --build build-iop-tests && ctest --test-dir build-iop-tests --output-on-failure
```

CI (`.github/workflows/build.yml`) los ejecuta en Linux y Windows.

## Limitaciones conocidas

- `ioman` del IOP no abre `host0:` (streaming de `IOP/*.SND` y `warriors.wad` → TWR-31).
- No hay SPU2: `libsd` escribe en registros sin modelo, no hay IRQ de streaming ni audio audible (TWR-30).
- Los snapshots de rollback/netplay (`PS2Memory::getIOPRAM()`) **no** capturan el estado de ps2xIOP.
- La capa DTX y `PS2X_SNDPLAY` siguen en el código, inertes para Warriors; se retiran con el audio del EE.
- Los bypasses a nivel de función del EE (TWR-13/17, `applyBt3SoundInitBypass`) siguen hasta TWR-27.
