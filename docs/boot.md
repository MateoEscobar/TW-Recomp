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
python3 scripts/extract_iso.py "<ruta al ISO>" --all   # una vez: árbol del disco junto al ELF
./build/ps2xRuntime/ps2EntryRunner games/warriors/SLUS_212.15
```

El runtime resuelve `cdrom0:` (EE y IOP) contra la carpeta del ELF, como BT3-Recomp con su `work/`. El
ISO ya no hace falta para arrancar; `PS2X_CD_IMAGE` sigue siendo opcional (ver `docs/iop.md`).

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
| 3b | Mismo bucle con el reloj ya en marcha: el callback de frame `[0x50B728]` sigue en NULL, `flips=0` | **Resuelto** (3b) | Instalación (c): el init (`sub_00160DF8` → `0x3535E8`) encola cargas en el objeto de streaming `[0x5E5340]` y espera con `0x154AE0`; la primera es `sceOpen("cdrom0:\WARRIORS.DIR")`, que el EE resuelve contra la carpeta del ELF, donde solo estaba el ELF → `fopen` falla y la carga nunca termina | `scripts/extract_iso.py --all` extrae el árbol del disco junto al ELF (decisión del dev: lo hace el wizard de instalación, el ISO se borra después) |
| 3c | Tras abrir `WARRIORS.DIR` y subir bancos MultiStream al IOP (`Free IOP ram` 1 484 416 → 464 512), el bucle sigue: `hot=0x148D10`, RPC `0x12345` rpcNum 0 cada frame desde `0x14DA24`, callback de frame NULL, `flips=0` | **Resuelto** (3c) | SIF/IOP (b): el handler RPC de MultiStream enlaza el servidor EE `0x12344321` en un bucle sin tope; el EE lo registra desde otro hilo, que nunca corría porque el hilo llamador retenía el token del planificador durante toda la RPC síncrona → el handler se abortaba a los 2 M instrucciones de `ps2xIOP` y MultiStream quedaba sin canal de callbacks IOP→EE (ver detalle) | Hook `IopHost::awaitGuestRpcServer` en `ps2xIOP` (fork) + `PS2Runtime::yieldToOtherGuestThreads` en el adapter |
| 3c-bis | Con el canal IOP→EE vivo el juego arranca el render: *core dump* por recursión infinita `Store32` → `drainCompletedDmacHandlers` → handler DMAC `sub_0048B708` → `Store32`… | **Resuelto** (3c) | Runtime EE (a): los handlers DMAC se despachaban reentrantes desde el `Store32` que lanza el siguiente DMA, y además reutilizaban la misma pila asíncrona del handler interrumpido. En el EE un handler corre con las interrupciones enmascaradas | `drainCompletedDmacHandlers` no reentra: las completaciones que llegan durante un handler quedan en cola y las entrega el drenaje exterior al volver |
| 4 | **Primer `flips=1`**. Hilo principal en la espera de flush DMA de RenderWare (`sub_0048C508`, `pc=0x48c5f0`, `ra=0x48c628`): `[gp-0x7600]=0x7acc18 ≠ [gp-0x75FC]=0x7acc10`, contador de completaciones pendientes `[gp-0x7608]=1` | **Resuelto** (sesión 5) | Runtime EE (a) + GS/VIF (d), tres huecos encadenados: (4a) completaciones DMAC entregadas dentro de una sección `di` y desde otro hilo host mientras corría un handler → la cola de paquetes de RW se pasaba del final; (4b) `GIF_STAT` sin modelar y escrituras a `VIF1_FIFO` ignoradas → el paquete `0x21` esperaba `M3P` para siempre en el hilo de vblank; (4c) un kick de cadena vacía no levantaba la interrupción DMAC → `cnt=1` perpetuo | (4a) enmascarado EE: `Status.EIE` por contexto (hilos arrancan con EIE=1, handlers con EXL), entrega diferida en el despachador/tras el handler, profundidad de interrupción y drenaje globales; (4b) `VIF0/VIF1_FIFO` → intérprete VIF (vía worker asíncrono) y `GIF_STAT` con `M3R/M3P/IMT/PSE/FQC` como upstream; (4c) todo canal iniciado con `STR` completa aunque no traiga datos |
| 5 | ~30 flips/s y `prims/sec≈180` durante 20–50 s (varía por ejecución); después cae a ~1 flip/s, otra vez en `pc=0x48c5f0` con otra cadena (`0x48e118 ← 0x48fd28 ← 0x482814* ← 0x198b4c ← 0x19596c* …`). La ventana se ve en negro en `xwd` (sin confirmar si es la captura o el render) | **Abierto** | Sin diagnosticar | — |

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

### Detalle del bloqueo 3c — bind IOP→EE de MultiStream que no podía terminar

Cadena verificada con trazas: `sub_00160DF8` (init) → `0x3535E8` → `0x154A28`/`0x154D50` encolan
`scene_list.cnk` (dentro de `WARRIORS.WAD`; `WARRIORS.DIR` = 10 701 entradas de 12 bytes `{offset en el
WAD, tamaño, hash}`) → `0x154AE0` espera → `0x1549F8` corre el bucle principal `0x148C90` hasta que
`isDone` (`0x148C38` → `0x1494D8` → `0x150838`) ve el estado del canal 0 del cargador (`0x5E3AC8[0]`) en
0 o 3. El estado quedaba en **1** y el IOP no hacía ninguna lectura de CD.

Causa (traza de importaciones del IOP): el primer RPC `0x12345` (bloqueante, `mode=0`) lleva el comando
de init de MultiStream; su handler (`0x275c0`, ejecutado por `ps2xIOP` dentro de `callFunction`) crea el
hilo de streaming y llama `0x309e8(0)`, que hace `do { sceSifBindRpc(&cd, 0x12344321, 0); } while
(cd.server == 0);` sin tope. `0x12344321` es el servidor de callbacks que registra el hilo EE 2
(`entry 0x151360`, prio 9), creado justo antes. En hardware el hilo principal está bloqueado en
`sceSifCallRpc` y el EE corre el hilo 2, que registra el servidor; aquí el hilo 1 retenía el token del
planificador cooperativo durante toda la llamada síncrona (`[sched] tid 2 ACQUIRE-wait (cur=1)`), el bind
giraba ~180 000 veces y `ps2xIOP` cortaba el handler al agotar `kMaxCallInstructions` (2 M). MultiStream
seguía sin cliente EE: nunca notificaba el fin de las peticiones FILE y el canal 0 se quedaba en 1.

Corrección (sin tocar el juego):
- `ps2xIOP` (fork): `sceSifBindRpc` llama al hook nuevo `IopHost::awaitGuestRpcServer(sid)` cuando el
  servidor EE todavía no existe (por defecto no hace nada). Test en `iop_emulator_tests.cpp`.
- `ps2xRuntime`: el adapter, si la llamada viene de una RPC síncrona del EE, cede el turno a los otros
  hilos guest (`PS2Runtime::yieldToOtherGuestThreads` → `schedYield`) y vuelve a consultar.

Resultado: el bind se resuelve al segundo intento, `ee-rpc sid=0x12344321 … ok=1` en cada callback,
`scene_list.cnk` termina de cargar y el juego llega al render.

Riesgo conocido: durante la cesión, si otro hilo EE hiciera una RPC al IOP se bloquearía en
`g_sif_call_rpc_mutex` con el token tomado. No ocurre en Warriors (el hilo 2 solo registra su servidor y
entra en su bucle); si aparece, el volcado del planificador lo muestra.

### Detalle del bloqueo 3c-bis — handlers DMAC reentrantes

`sub_0048B708` es el handler DMAC de RenderWare (causas 1 VIF1 / 2 GIF y llamada directa con `a0=-1`
para lanzar): consume la cola de paquetes `[gp-0x7600]..[gp-0x75FC]` y escribe el `CHCR` del siguiente.
El runtime completa el DMA dentro de ese `Store32` y despachaba los handlers en el acto, dentro del
handler en curso: recursión sin fin (y cada nivel reusaba la pila asíncrona del anterior). Ahora
`drainCompletedDmacHandlers` no reentra y el drenaje exterior entrega las completaciones pendientes en
bucle hasta vaciar la cola.

### Detalle del bloqueo 4 — espera de flush DMA de RenderWare (resuelto, sesión 5)

`sub_0048B708` es el handler DMAC de RenderWare (causas 1 = VIF1 y 2 = GIF) y también se llama con
`a0=-1` para "kick manual": desde `sub_0048C508` (hilo principal, dentro de `di`) y desde el handler de
VBLANK_START `sub_0048BDB0` (registrado con `AddIntcHandler(2, 0x48bdb0)`). Recorre una cola de
paquetes `[gp-0x7600]..[gp-0x75FC]` (8 bytes: tipo en el byte bajo + dato) y cuenta en `[gp-0x7608]`
las completaciones que espera. Tipos vistos: `0x01` kick VIF1 (`CHCR=0x145`, +1), `0x21` kick GIF+VIF1
con sincronía PATH3 (+2), `0x41`/`0x40` espera de vblank (`[gp-0x7665]=1`, la limpia `0x48BDB0`),
`0x42`, `0x4F` callback `[q+4](a0)`.

Tres huecos del runtime, en el orden en que aparecieron:

1. **(4a) Interrupciones sin enmascarar.** El DMA se completa síncrono en el `Store32` a `CHCR` y el
   runtime ejecutaba en ese momento el handler DMAC anidado, aunque el llamador estuviera en `di`. El
   `handler(1)` anidado veía `cnt=0`, re-lanzaba el mismo paquete y avanzaba la cola; al volver, el
   `handler(-1)` exterior releía `q0` y le sumaba 8 → `q0` quedaba **después** de `end` y la espera de
   `0x48c5f0` (`q0==end && cnt==0`) no se cumplía nunca. Después apareció la variante entre hilos: el
   handler de vblank corre en el hilo host de interrupciones y el hilo principal entregaba en su
   despachador la completación que ese handler acababa de provocar. Corrección: `R5900Context` arranca
   con `Status.EIE` (los `di`/`ei` generados solo tocan ese bit), los contextos de handler llevan `EXL`
   y `EIE=0`, `Store32` solo entrega si el contexto tiene interrupciones habilitadas, el despachador de
   cada hilo entrega las pendientes en cuanto vuelve a tener `EIE` (tras `ei`, vía checkpoint), y al
   terminar los handlers INTC se entregan las que provocaron. Profundidad de interrupción y guardia de
   drenaje globales: ningún hilo entrega mientras corre un handler y dos handlers DMAC no se solapan.
2. **(4b) PATH3 sin modelar.** El paquete `0x21` espera que todo esté inactivo, escribe
   `MSKPATH3 (0x06008000)` en `VIF1_FIFO` (`0x10005000`), espera `GIF_STAT.M3P`, lanza GIF, espera
   `GIF_STAT.FQC != 0` y lanza VIF1. El runtime ignoraba las escrituras a la FIFO y devolvía en
   `GIF_STAT` lo último escrito (0): el handler giraba para siempre en el hilo de vblank y los vblanks
   se paraban. Corrección (portada de upstream `ps2xRuntime`): `VIF0/VIF1_FIFO` alimentan al
   intérprete VIF (VIF1 vía worker asíncrono, en orden con los kicks) y `GIF_STAT` sintetiza
   `M3R/IMT` (`GIF_MODE`), `PSE` (`GIF_CTRL`), `M3P` (`MSKPATH3`) y `FQC` (qwords PATH3 aparcados
   mientras está enmascarado, tope 16).
3. **(4c) Cadena vacía sin interrupción.** La completación se encolaba solo si el kick había producido
   datos. Un kick cuya cadena es un único tag `END`/`REFE` con `QWC=0` terminaba sin `CIS` ni
   interrupción y `cnt` quedaba en 1. Corrección: todo canal iniciado con `STR` completa.

Resultado: `flips` pasa de 1 a ~1 500 en 50 s (~30/s) con `prims/sec ≈ 180` → Escenario 4 cumplido por
log. Siguiente: bloqueo 5.

## Detalle del bloqueo 5 — la carga se para con pantalla negra (TWR-27 sesión 6)

**Síntomas.** ~30 flips/s y `prims/sec≈180` (unos 6 prims por frame: limpiar la pantalla), pero
`Mpix/sec=0` y la ventana es negra de verdad: la captura nativa (`PS2X_SHOT_DIR=<dir>` + `touch
<dir>/shot.req`, PNG de la ventana compuesta, sirve en Wayland) da 921 600 píxeles `(0,0,0)`.
La caída a ~1 flip/s es intermitente: apareció en 1 de 2 corridas con los defaults de render de
`main.cpp` y en ninguna de 4 con `PS2X_NODEFAULTS=1 PS2X_SCHED=1` (ver "Defaults de render
heredados", abajo). Esa caída es secundaria. El bloqueo de fondo es el mismo en todas las corridas.

**Qué hace el juego.** Pasa la comprobación de memory card: puerto 0 formateado, sin
`BASLUS-21215/BASLUS-21215`, resultado -4. Después el hilo principal vive en el gestor de
streaming/MultiStream del EE: `sub_00154D50` encola un comando de 0x54 bytes en `[obj+0x10]`
y llama `0x154AE0` (el caliente `0x154e00` es su bucle de copia).

**Qué hace el IOP.** `/proc/<pid>/io` muestra unos 19 MB leídos en los primeros ~10 s y **cero**
después. `strace` lo confirma: las lecturas de `WARRIORS.WAD` van en bloques de 4 KB y se cortan.
Las peticiones `cdvdman` de `IOP.IRX` son `sceCdSync` + `sceCdRead` de 0x13 sectores al búfer
del canal 0 (`0x8d980`) y de 1 sector a `0x39180`. Cada una recibe su callback `0x221c8`.
La última es siempre `sceCdRead(lsn=0x1fd8ea, 1)` (ISO virtual) y no hay excepción en el IOP.
Mientras tanto el IOP lee sin parar los registros de dirección de voz del **SPU2**: unos 4 M de
lecturas en 45 s, repartidas por igual con paso 0xC sobre `0x1F9001C0..` (core 0) y
`0x1F9005C0..0x1F900740` (core 1), y siempre valen 0. MultiStream sondea la posición de
reproducción (NAX) de las voces para saber cuánto consumió el SPU2 de cada búfer en anillo y
pedir más datos. Sin SPU2 esa posición nunca avanza, el stream nunca se rellena ni termina y el
EE espera la carga para siempre.

**Clasificación (ADR D4/D5).** Subsistema (b) SIF/IOP, motivo **SPU2 ausente**. Es el punto de
parada D5: hace falta un modelo mínimo de voces SPU2 (KON/KOFF, avance de NAX por bloques ADPCM
según el pitch, flags de loop/end, ENDX e IRQ de dirección), sin mezcla ni salida de audio. Se
construye en el fork `ps2xIOP` y TWR-30 lo extiende. **Pendiente de decisión del dev.**

**Bug lateral corregido (fork `326683a`).** `ps2xIOP` cortaba **sin aviso** toda llamada
síncrona al guest a los 2 M de instrucciones. El registro de SFX de MultiStream (handler RPC
`0x275c0` → `GetSFXSlot` `0x2d0b4` → búsqueda en `0x2d020` sobre 512 SpotFX, O(n²)) lo
superaba y quedaba a medias. Ahora el tope es 128 M (~3,5 s de IOP real) y llegar a él se
registra como error `[IOP] guest call … cut after …`. Hay test (handler de ~9 M instrucciones).

### Defaults de render heredados de BT3 (`main.cpp`, sin `PS2X_NODEFAULTS`)

`main.cpp` activa por defecto unas 30 variables "validadas" para BT3: `PS2X_SCENESKIP`,
`F336SKIP`, `SHCOMPSKIP` (índices de shaders de BT3), `MASKBUILDSKIP`, `BARGATE`, `IDXONLY`…,
`PS2X_Warriors_CDTICK` y `PS2X_ASYNC_KICK=1`. Según su propio comentario, este último tiene
carreras sin resolver. Ninguno está verificado contra Warriors. Para diagnosticar, arrancar
con `PS2X_NODEFAULTS=1 PS2X_SCHED=1`. Retirarlos está pendiente de decisión del dev.

### Herramientas de esta sesión

- Captura de la ventana: `PS2X_SHOT_DIR` + `shot.req` (lo hace `ps2_runtime.cpp` `[shotreq]`).
- E/S real: muestrear `/proc/<pid>/io` (`rchar`) y `strace -f -y -e trace=read,lseek,openat`.
- Trazas temporales en el fork (no commiteadas): `cdvdman` en `dispatchImport`, entrega de
  `servicePendingGuestCallbacks`, histograma de `IopMemory::readHardware32`. IRX: base de carga
  `0x20700`; los offsets `lui 0x1 / lw 0x7474` del archivo se reubican a `0x30000 + 0x7b74`.

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
