# Boot de The Warriors — cadena de bloqueos y método de diagnóstico

> **[TWR-27 decisión 23] Nota sobre rutas.** Este documento recoge la cadena de bloqueos desde la base BT3 (sesiones 1-17) y
> la migración a PS2Recomp + parches (sesión 18). Las rutas `ps2xRuntime/` y `ps2xRecomp/` de las secciones antiguas
> se refieren al runtime de BT3 y su fork, retirados del repo; hoy el equivalente es `PS2Recomp/` (clonado y parcheado
> por `scripts/build-linux.sh`) y `patches/`. Rendimiento y VU1: [`vu1-nativa.md`](vu1-nativa.md).


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
(cd games/warriors && ../../build/ps2recomp/ps2xRuntime/ps2EntryRunner SLUS_212.15)
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
     (`*` = `jalr`). Mapear cada dirección a su `PS2Recomp/ps2xRuntime/src/runner/sub_*` (generado por build-linux.sh) da la cadena real.
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
| 5 | Pantalla negra de verdad con ~30 flips/s: el juego pasa la memcard y entra en carga; el IOP lee ~19 MB del WAD en ~10 s y luego nada, mientras MultiStream sondea sin fin el NAX de las voces SPU2 | **Resuelto** (sesión 7) | SIF/IOP (b): `ps2xIOP` no emulaba el SPU2; MultiStream sondea el NAX de sus voces para saber cuánto consumió de cada anillo y pedir más datos, y NAX valía siempre 0 | SPU2 fase 1 portado de god-of-war-recomp al fork `ps2xIOP` (`feature/TWR-27-spu2-phase1` `115cf21`), avanzado también dentro de `runCpu` (sondeo desde RPC síncronas) |
| 6 | Con el SPU2 la música se transmite pero la pantalla sigue negra: `prims/sec≈180`, `Mpix/sec=0`. Los ~6 prims/frame son POINT con XYZ=0 y RGBA=0 por PATH2; nada por PATH1 | **Resuelto** (sesión 8) | GS/VIF (d) + runtime EE (a): RenderWare arma sus paquetes GIF en el scratchpad y los copia a la lista DMA de RAM con DMA **fromSPR** (canal 8, modo normal, ~350/s). El runtime heredado de BT3 no implementaba los canales 8/9 → la lista que leía VIF1 (`cnt qwc=72; DIRECT 72` en `0x7acc80`/`0x87c880`) solo tenía las etiquetas escritas por la CPU y ceros en lugar de los datos GIF (ver detalle) | `PS2Memory::tryProcessScratchpadDma` portado de upstream (canales 8/9 en modo normal, `D_STAT.CIS8/9`, aviso único `[sprdma]` en modos cadena/intercalado). Resultado: borrado de pantalla real de RW (franjas de 32 px) y sprites texturizados por PATH1 (VU1) |
| 7 | Con datos GIF reales el hilo principal se queda para siempre en `0x48c5f0` (flush DMA de RW) a los ~3-5 s: `cnt=[gp-0x7608]=1`, `q0=[gp-0x7600]` **pasado** de `q1=[gp-0x75FC]` (q0 = q1 + 8), VIF1/GIF ociosos | **Resuelto** (sesión 9) | Runtime EE (a): los handlers de interrupción corrían en el worker de vblank en paralelo con el hilo guest que interrumpen; el handler DMAC `sub_0048B708` y el hilo principal (`sub_0048E048`, `handler(-1)` sin `di`) procesaban la misma entrada de la cola | Decisión 17: entrega de INTC/DMAC en checkpoints del hilo con el token (`eeCheckpointDue`, `dispatchGuestBranch`, despachadores, `Store32`); el worker solo marca causas y entrega él únicamente con la CPU ociosa (ver detalle) |
| 8 | Sin atasco, `flips` sube y `prims/sec` llega a ~40 000, pero la pantalla sigue negra (`Mpix/sec=0`) y la RSS crece ~1 GB/s hasta agotar la RAM | **Resuelto** (sesión 9) | Render (d): el camino GPU estaba activo por defecto (`uiFlag("PS2X_GPU", true)` + `renderer = opengl` del overlay, que además pisaba `PS2X_GPU=0`). Su única publicación de frame era el kick de render de BT3 (`0x100ab8`), retirado en 3a: todo se grababa en `m_building`, nadie lo consumía, y el rasterizador SW no corría | Decisión 15 completada: software por defecto (`kRendererDefault = 1`, `PS2X_GPU` opt-in), `syncFromRuntime` coherente con el flag. Más: accesores VRAM por PSM a 64 entradas (índice `0x3F` fuera de rango → SIGSEGV en `sampleTexture`) |
| 9 | Con el rasterizador SW hay imagen, pero incorrecta (rellenos de color sólido, diagonales, una franja de texto con texturas/CLUT mal decodificadas) y ~1-2 flips/s: el hilo principal pasa ~100 % en `0x48BB00` rasterizando dentro del kick síncrono de RW (en `di`) | **Resuelto** (sesión 10) | VIF/DMA (d) + VU1 (d), dos causas encadenadas (ver detalle): (9a) el DMA en cadena heredado no enviaba al VIF la mitad alta de las etiquetas `REF/REFS/REFE` con `CHCR.TTE=1`, así que el `UNPACK` que RW pone en esas etiquetas se perdía y los vértices se leían como VIFcodes; (9b) el intérprete VU1 heredado de BT3 diverge del VU1 exacto de upstream en todos los microprogramas de Warriors | (9a) tag-transfer para toda etiqueta VIF con `TTE` (como upstream); (9b) decisión 20: VU1 exacto de upstream vía adaptador (`ps2_vu1_upstream`) + fixes VU1 de GoW en el fork (`7b4abbe`). Resultado: aviso de autoguardado y pantalla de título, ~30 flips/s estables |
| 10 | Pantalla de título visible pero con defectos: (10a) aviso de autoguardado y "PRESS THE START BUTTON" rotados 180°; (10b) 1 de cada ~4 glifos de "PRESS START" con ruido; (10c) falta la noria *Wonder Wheel* animada a la derecha (referencia: vídeos de la PS2 original) | 10a/10b **resueltos** (sesión 10), 10c **causa raíz resuelta** (sesión 11); 10d **diagnosticado** (sesión 12: distancia de dibujado adaptativa por FPS bajo, ver detalle) | Render (d): (10a) `drawSprite` SW intercambiaba posiciones sin UV; (10b) el GS aplicaba al vértice la Q de un ST PACKED al instante, cuando en el hardware solo la fija en el registro Q interno y la copia el siguiente RGBAQ. Los sprites de la fuente 2D llevan `ST RGBAQ XYZ2 ST XYZ2` y el segundo ST trae Q con memoria VU rancia; (10c) la geometría 3D de la noria (tiras texturizadas color 29,0,29, programa VU1 3D, entradas `0x0`/`0xf70`) llega al GS **colapsada**: casi todos los vértices en el centro de pantalla (320,224) → transformación 3D con matriz nula o incorrecta | (10a) UV intercambiadas junto con las posiciones; (10b) registro Q interno `m_stqQ` como PCSX2 (`0 → FLT_MIN`, `NaN → FLT_MAX`, reinicio por GIFtag) + Q plana del segundo vértice en sprites; (10c) pendiente: rastrear la matriz que recibe el programa 3D (sube por VIF desde el EE; revisar el cálculo en el EE con VU0/COP2) |
| 11 | Título a ~11 flips/s: la noria desaparece (distancia de dibujado adaptativa por FPS, bloqueo 10d) | **Resuelto** (sesión 13) | VU1 (d): el VU1 exacto ocupaba ~80 % del hilo | Decisión 22: intérprete VU1 rápido + VU1 nativa de god-of-war-recomp |
| 12 | VU1 nativa y exacta difieren en memoria/paquetes en ~4,5 % de los lanzamientos | **Resuelto** (sesión 14) | VU1 (d): flags MADD/MSUB con producto sin redondear (exacto) y latencia de Q (nativa) | `fmacProductTerm` + `qb<j>` en `vu1n_gen.py` |
| — | "Rendimiento ~17 flips/s" abierto en la sesión 14 | **Descartado** (sesión 15) | Entorno: portátil en batería, perfil `balanced` (~1,1 GHz) | Con cargador y perfil `performance`: ~29-30 flips/s (tope del juego) y noria visible. Sin cambios de código |
| 13 | Al confirmar las bandas en Rumble, bucle `No exact recompiled function for guest PC 0x1ef004` y `flips` congelado | **Resuelto** (sesión 15) | Recompilador: frontera de función en el delay slot del `JAL` de `0x1eeffc` (una constante `lui/ori` 0x1EF000 tomada por callback) | Fork `feature/TWR-27-function-bounds` (`55f7e10`): misma regla de delay slot que los punteros en datos; runner regenerado; guardia `tools/check_function_bounds.py` en CI |
| 14 | Pelea Rumble: texturas del escenario y de los personajes con ruido de colores; ~8 flips/s | **Resuelto** (sesión 16; queda el rendimiento, ~11 flips/s) | GIF/VIF (d): PATH3 enmascarado se soltaba **entero** en el primer `MSKPATH3 0`. RW encola en el canal 2 las ~232 subidas del frame (un solo paquete DMA de ~69 000 qw) y por malla hace `FLUSHA / MSKPATH3 0 / MSKPATH3 1`: en el hardware pasa **un** paquete GIF (hasta EOP) por ventana. 58 huecos de VRAM se rellenan varias veces por frame → cada draw veía la última textura de su hueco (a veces otro PSM) | `releaseOneMaskedPath3Packet` (un paquete por ventana), `FLUSHA` con PATH3 abierto vacía la cola, continuación hasta EOP entre envíos DMA. `PS2X_P3_EOPMASK=0` = viejo. Además: caché multi-entrada de CLUT heredada de BT3 pasa a opt-in (`PS2X_CLUTMULTI=1`): servía una paleta rancia al logo "vs" |
| 15 | Pelea Rumble: el personaje del jugador no se dibuja en ~50 % de los frames (su anillo sí); en algunos frames toda la geometría sale como polígonos gigantes | **Abierto** (sesión 17) | Sin aislar. Descartado: distancia de dibujado adaptativa (FPS forzado a 30), VU1 nativa (0 discrepancias de memoria/paquetes en la pelea) y el arreglo PATH3 de la sesión 16 (con `PS2X_P3_EOPMASK=0` también pasa). Sospecha: entrada de la VU1 (paquete o matrices pisadas en ese frame) | — |
| — | Imagen que "salta arriba/abajo" (reporte del dev jugando a mano) | **No reproducido** (sesión 16) | `sceGsPutDispEnv` del stub escribía los dos circuitos y pisaba el DISPFB1/DISPLAY1 del juego cada frame (DBY 0↔1, DH 446↔447). Corregido, pero en capturas y vídeo a 60 fps (título, menú, presentación de la pelea; A/B) el salto es 0 con y sin el arreglo | Stub = rama real del ELF (`0x4AA748`): solo circuito 2 salvo `GParam.version == 1`. `PS2X_DISPENV_BOTH=1` = viejo. Pendiente: que el dev diga dónde lo ve |

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

### Detalle del bloqueo 10c — noria colapsada al centro (sesión 11)

Cadena verificada con sondas temporales y un arnés offline del VU1 upstream sobre volcados de la memoria VU1:

1. La noria la dibuja el programa VU1 3D grande (MPG `0x0..0x2630`, `MSCAL 0`). Sus vértices son enteros
   (UNPACK V4-16/V2-16/V4-8). El programa elige en `0xc8` (`FMAND vi07, vi07` sobre **Zw** de
   `ADDx.w vf06, vf05, vf00x`) entre el camino estático (`0xd8`: ITOF0 × escala de `qw956`) y el de morph
   (`0x1b0`), que mezcla dos keyframes con el peso `qw1020.w`.
2. `qw1020.w` llegaba con `0x6c0103fc`, es decir, el VIFcode del propio UNPACK (6e26 como float). El VU1 tomaba
   el morph con ese peso → `Q≈0` → todos los vértices en (2048,2048)+0 = centro, con ST = 0. Si se fuerza el camino
   estático en el arnés, el mismo volcado da la noria repartida en pantalla.
3. La qword viene así de la RAM: la arma RenderWare en `sub_00477858` (`0x477b38`: `mfc1 → pexew → mfc1 → ppacw`).
   `PPACW` toma la palabra 2 de un registro de 128 bits que debía poner `PEXEW`. Nuestro `PS2_PEXEW` intercambiaba
   las palabras por parejas (0↔1, 2↔3) en lugar de 0↔2, así que la palabra 2 recibía la palabra 3 anterior del
   registro: el VIFcode que acababa de escribir el mismo código.

**Corrección:** permutaciones MMI del R5900 como PCSX2 (`MMI.cpp`). Se porta `ps2recomp-mmi.patch` de
god-of-war-recomp: macros de `ps2_runtime_macros.h` (`PEXEW`, `PROT3W`, `PEXEH`, `PEXCW`, `PEXCH`, `PREVH`,
`PINTH`, `PINTEH`), generador del recompilador y tests en el fork (`feature/TWR-27-mmi-permutations`). Las 36
`pexcw` y 4 `prevh` del runner que se emitían en línea se reescriben a las macros, con un comentario de guarda.
Upstream tiene el mismo fallo.

**También (sesión 11):**
- `R5900Context()` deja `vf0 = (0,0,0,1)` en todos los contextos: IRQ, alarmas, callbacks y RPC IOP→EE. Antes solo
  lo hacían el hilo principal y `CreateThread`. RenderWare suma la traslación con `vmaddw …, $vf0w`. No era la causa
  de 10c.
- Hallazgo lateral: la cámara del título se mueve al origen dos veces por frame (`sub_0040D0A8`: `0x40d234`,
  `0x40d3c8`) y se restaura después (`0x40d494`). Es diseño del juego, el patrón skybox, y no es un fallo.

### Detalle del bloqueo 10d — la noria desaparece tras 5 frames (diagnosticado, sesión 12)

**No es un fallo de píxeles.** La rueda solo se dibuja en ~5 flips (154–158) y después el juego deja de mandarla.
Cadena verificada con sondas temporales y volcados de RAM (flip 157 frente al 210):

1. La rueda son 3 clumps concéntricos (radios 21.3 / 16 / 10.8; átomos `0xb0a370`, `0xb0a410`, `0xb0a4b0`).
   Su callback de render es `0x17fbf0` (del juego). Tras el flip ~158, el puntero `world` de los tres átomos pasa a 0 y
   sus *ties* quedan vacíos: los clumps salen del `RpWorld` (`RpWorldRemoveClump` en `0x472ec0`).
2. Los quita `sub_0017F9E8(obj, enMundo=0)`, llamado desde el update de entidad `sub_00395720` → `sub_003956C0` →
   `sub_0018A5F0`. Es **culling por distancia** del juego: dentro del mundo solo si
   `d² < (alcance + radio)²`, con `d² = min |pos − observador|²` (`func_120230`) y `alcance = cam+0x58`
   (cámara `0xc05c00`).
3. `d` es constante (~75.2). El alcance baja **150 → 123 → 94 → 66 → 50** en 5 frames y se queda en 50.
4. Lo baja `sub_0040E8D8` (`0x40eb8c`…`0x40ec28`): **distancia de dibujado adaptativa por FPS**. Lee el FPS medido
   `[0x50C680]` y lo compara con el objetivo 29.5 (24.5 con flag). Por encima, sube el alcance hasta 300; por debajo,
   lo baja `(objetivo − fps)·10.5·dt` con mínimo 50. Con el SW a ~10 flips/s el juego recorta el alcance al mínimo y
   la rueda (a 75 unidades) queda fuera.

**Prueba (experimento temporal, no commiteado):** con el FPS medido forzado a 30 en `0x40eb8c`, la noria se dibuja en
todos los frames y la captura coincide con la referencia del dev (`home.jpeg`): radios de neón rosa, bombillas,
letrero "WONDER WHEEL" y estructura.

**Descartado por el camino (verificado):**
- Niebla: el SW no aplica `FGE` y descarta `FOGCOL`. Aquí `FOGCOL=0`, así que no influye en este bloqueo, pero es un
  hueco real del GS SW.
- CLUT: la de la estructura (`cbp=15164`) es `80000000` + 15 ceros **tal cual en `WARRIORS.WAD`** (`0x18d0d478`). La
  estructura es una silueta negra, como en la consola.
- La alternancia ocultar/mostrar de las 3 partes (matriz con `pos=−1e10`, `sub_00395720`, bit `0x4` en `entity+0x54`,
  scripts `0x3ef1d0`) es del juego.

**Consecuencia:** el siguiente bloqueo real es **rendimiento** (≥30 flips/s). Cualquier cosa que dependa de la
distancia de dibujado (LOD, entidades, multitudes) se recortará mientras el render vaya lento. No se parchea la
lógica del juego.

### Detalle del bloqueo 11 — rendimiento: el VU1 exacto ocupa el 80 % del hilo (sesión 13, decisión 22)

**Perfil** (`perf` no está disponible: `perf_event_paranoid=4`). Se usa el perfilador por muestreo propio del runtime:
`PS2X_EEPROF=2` (RIP de los hilos guest cada 2 ms; los offsets `rt:ps2EntryRunner+0x…` se resuelven con
`nm -C --defined-only -S`) junto con `PS2X_DMAPROF=1` (`[vifbreak]`, `[gifprof]`, `[drawprim]`). En el título, a ~11
flips/s:

| Dónde | Hilo del juego |
|---|---|
| `UpVu1Interpreter` (VU1 exacto de upstream, decisión 20): `commitReadyPipelines`, `calculateFmacExactResult` (`long double`), `calculatePairReadyCycle`, `updateFmacFlags`, decodificación | **~80 %** |
| EE recompilado | ~8 % |
| Rasterizador SW (`drawTriangle`, `sampleTexture`, `writePixel`, CLUT) | ~6 % |

Optimizar el rasterizador o pasar a GPU no habría servido. god-of-war-recomp tuvo el mismo cuello de botella con el
mismo motor (`docs/RENDIMIENTO.md`) y lo resolvió en dos capas. **Decisión 22 (dev):** portar las dos.

**Capa 1 — intérprete VU1 rápido y exacto.** Es la pila VU1 de la base Waffle565 que usa GoW
(`ps2recomp-waffle-runtime.patch`, solo los archivos de VU), más `vu1n-leak`, `vu1-ranura64`, `vu-redondeo`,
`vu1-invalidacion-rango`, `vu1-captura-nativa`, `vu1-clip-sinsaltos` y `vu1-madd-saturado`. Se portó al fork
`MateoEscobar/PS2Recomp` en la rama `feature/TWR-27-vu1-perf`.

- Incluye escrituras directas de VF/VI/ACC. `PS2X_VU1_QUEUES=1` vuelve al modelo con colas.
- `vu-jump` y `vu-efu` ya estaban portados.
- Resultado: **~11 → ~19-20 flips/s.** Con colas, ~19.
- La base Waffle además corrige la decodificación de la EFU. La base vieja ponía `ERSQRT`/`ESIN`/`EATAN`/`EEXP` en las
  claves `0x77`/`0x79`/`0x7C`/`0x7D`; las de PCSX2 son `0x79`/`0x7C`/`0x7D`/`0x7E`. Los tests del fork se ajustaron:
  `ps2x_tests` da 451/453, con los mismos 2 fallos de la base.

**Capa 2 — VU1 nativa.** Las micromemorias del juego se traducen al compilar a bloques de C++ en línea recta
(`ps2xRecomp/ps2xRuntime/tools/vu1/vu1n_gen.py`, GPLv3, de Waffle565 vía GoW). El motor exacto se queda de respaldo
para todo bloque que no exista y sirve de oráculo. Son datos del juego, así que **no se commitean**:

```bash
# 1) capturar (se puede repetir jugando: solo añade las que falten; carpeta ignorada por git)
GOW_VU1_CAPTURA=$PWD/games/warriors/vu1_micro (cd games/warriors && ../../build/ps2recomp/ps2xRuntime/ps2EntryRunner SLUS_212.15)
# 2) generar y enlazar los bloques
cmake -B build -DPS2X_VU1_MICROCODE_DIR=$PWD/games/warriors/vu1_micro && cmake --build build --parallel
```

- Con `PS2X_VU1_MICROCODE_DIR` vacío (por defecto, y en la CI) solo hay intérprete.
- `GOW_VU1_NATIVE_OFF=1` desactiva la nativa al ejecutar.
- `GOW_VU1N_VERIFY=<n>` ejecuta n lanzamientos por los dos caminos y compara estado, memoria de datos y paquetes GIF.
- Los bloques forman una librería OBJECT enlazada directamente al ejecutable, porque solo se registran desde un
  inicializador estático y un `.a` los descartaría.
- El MPG del VIF1 registra el rango escrito (`ps2xVu1CodeModified`) para la invalidación por rango.
- Captura del título: 10 micromemorias, 366 bloques, 362 generados (4 sin soporte → exacto).
- Resultado: **~30 flips/s**, y la noria vuelve a verse: el alcance ya no cae al mínimo
  (bloqueo 10d).

**Bloqueo 12 (abierto) — la nativa difiere del exacto en el flag de overflow.** `GOW_VU1N_VERIFY=3000` sobre 2000
ejecuciones da 602 discrepancias (GoW obtuvo 0 en su juego). En ~510 la única diferencia es el MAC final (`e020`/`c0`
frente a 0), que no llega al programa siguiente: el MAC de arranque de cada programa tiene la misma distribución con
y sin nativa (`GOW_VU1_STARTMAC=1`). En **~90 hay diferencias reales** de memoria de datos y paquetes GIF.

Se localizó el primer bloque que diverge con la bisección del modo verificación, activada de forma temporal para
discrepancias de memoria (sonda no commiteada):

- **`0xe48`** en 10 de 12 casos; **`0x1760`** en el resto.
- En `0xe48`, `FMAND vi1, vi7` (en `0xea8`) produce el bit ADC del vértice. Va a `MFIR.w vf13` y de ahí al paquete: es
  el descarte de caras traseras por el signo de `MSUBy.x vf00` en `0xe88`.
- La máscara `vi7` sale de otra cadena de `FMAND vi7, vi7` (`0xcd8`, `0xf18`). En el exacto llega a `0x8000`, el bit
  15 del MAC = **O.x**, y en la nativa no.
- Por tanto, el exacto y la nativa calculan distinto el **overflow** de alguna FMAC. Ojo: `vudis.py` imprime mal el
  operando de `FMAND`; hay que decodificarlo a mano.

**Siguiente paso:** comparar el cálculo de O de la FMAC implicada en los dos motores contra PCSX2 (`VUflags.cpp`) y
corregir el que esté mal. Volver a verificar con 0 discrepancias de memoria/paquetes antes de dar la nativa por buena.

### Detalle del bloqueo 12 — resolución (sesión 14)

**Corrección del diagnóstico de la sesión 13:** no era el overflow. En la entrada de `0xe48` vale `vi07 = 0x80`
(máscara **S.x**) y `vi04 = 0xffff8000`. El `0x8000` que se veía es el resultado tras `IAND vi07, vi04`, es decir,
el propio bit ADC. Había **dos causas independientes**, una en cada motor.

**(12a) `0xe48`: el exacto usaba el producto sin redondear para los flags de MADD/MSUB/OPMSUB.**

- El test de caras traseras es `MULAy.x ACC, vf11, vf09y` seguido de `MSUBy.x vf00, vf09, vf11y`, y el flag S.x lo
  lee `FMAND vi01, vi07`.
- Con el estado volcado, el triángulo es degenerado: `vf11.xy = −vf09.xy` exacto, así que el producto cruz vale 0.
- La nativa calcula `acc − float(p)` = 0 (Z, sin S). El exacto calculaba `acc − p` en long double con el **segundo
  producto sin redondear** frente al primero ya redondeado en ACC. Eso deja un residuo de −1,8e-7 (S) y otro ADC.
- PCSX2 (`VUops.cpp`, `_vuOpMSUB`/`_vuOpMADD`: `acc ± float(fs·ft)`) y GoW (`docs/RENDIMIENTO.md`: "redondea el
  producto y la suma por separado, como las FMAC de la PS2 y PCSX2") redondean el producto. GoW lo aplicó a los
  valores, pero el camino de flags seguía sin redondear.
- **Fix (fork):** `fmacProductTerm` en `ps2_vu1.h`. El producto se redondea a float (hacia cero) y un subnormal se
  vacía a ±0. Solo un producto que satura (`|p| = FLT_MAX`) se deja sin redondear, igual que `vu1n::maddWide`. Se
  usa en `normalizeFmacResult` (`ps2_vu1_core.cpp`) y en `fmacLaneT` (`ps2_vu1_compiled.inl`). El exacto también es
  el oráculo, así que la referencia cambia en ese caso límite.

**(12b) `0x1760`: la nativa no modelaba la latencia de Q.**

- `vu1n_gen.py` emitía DIV/SQRT/RSQRT con semántica inmediata: `divOp` escribe `s.q` en el acto.
- En la VU real, y en el exacto (`m_fdiv`, commit al ciclo listo) y PCSX2 (`fdiv.reg` → `VI[REG_Q]` al vaciar), una
  FMAC que lee Q antes de que acabe la DIV (7 ciclos; RSQRT 13) **no se detiene**: para eso está `WAITQ`. Esa FMAC ve la
  Q anterior.
- El bucle de RW en `0x1760` hace `DIV Q` en `0x17e0` y `MULq` en `0x17e8`, un par después. La nativa le daba la Q nueva,
  así que ST·Q y XYZ salían algo distintos (unos píxeles).
- GoW usa el mismo generador ("semántica inmediata") y no lo vio: su microcódigo no lee Q dentro de la latencia.
- **Fix (fork, generador):**
  - Se guarda `qb<j> = s.q` antes de cada FDIV que tenga un lector cercano.
  - Cada lector de Q a menos de la latencia elige entre `s.q` y `qb<j>` con `n.cyc[i] − n.cyc[j] ≥ latencia`. Es el
    mismo mecanismo que ya usan los flags.
  - Esos bloques piden la temporización exacta de entrada (bit 16).
  - Basta un nivel, porque la FDIV es una sola unidad y el exacto detiene una DIV mientras la anterior está ocupada.
  - Lo que queda sin cubrir es una DIV del **bloque anterior** todavía en vuelo al entrar
    (`commitValuesKeepTiming` la aplica en el acto). No se observó ninguna discrepancia por eso.

**Verificación** (`GOW_VU1N_VERIFY=3000`, título, 80 s):

| | Sesión 13 | Tras 12a | Tras 12a + 12b |
|---|---|---|---|
| Discrepancias de memoria/paquetes, corridas 1–2000 | ~90 | **0** | **0** |
| Ídem, corridas 2001–3000 | — | 64 (`0x1690`/`0x1a08` → bloque `0x1760`) | **0** |
| Solo MAC final / clip final | ~510 | 602 | ~630 / 1 |

- El MAC final ("solo cola") no llega al programa siguiente (sesión 13, `GOW_VU1_STARTMAC`). Hay que decidir con el
  dev si se iguala.
- Regresiones: Esc. 1 (1 override) y Esc. 2 (6 IRX `load-emulated`, MultiStream V7.1/V7.2) OK, y `ps2x_tests` del
  fork da 451/453, los mismos 2 fallos de la base.

**Rendimiento (abierto, nuevo):** en el título se miden **~17 flips/s** y la noria vuelve a desaparecer.

- El A/B **sin** los cambios de esta sesión da lo mismo (~15-19 flips/s). Los ~30 de la sesión 13 no se reproducen,
  aunque `settings.toml` (`render_scale = 1`, software) no ha cambiado.
- Perfil con `PS2X_EEPROF=2`: el rasterizador SW se lleva ~35 % (`drawLine`, `sampleTexture`, `GSMem::ReadRow*`,
  CLUT, `writePixel`). Le siguen `schedYield`/`eeCheckpointDue`/`dispatchGuestBranch` con ~18 % y la VU1 exacta con
  ~3 %.
- `GOW_VU1N_DIAG=1`: 246 entradas sin bloque nativo, por micromemorias aún no capturadas.

### Rendimiento de la sesión 14 — era la energía (sesión 15)

Con la build de la sesión 14 sin cambios:

| Condición | CPU media | Título, flips/s |
|---|---|---|
| Batería, perfil `balanced`, governor `powersave` | ~1,1 GHz | ~17 (noria recortada) |
| Cargador, `powerprofilesctl set performance` | ~2,6 GHz | **~29-30** (noria visible) |
| Ídem con `PS2X_GS_NODRAW=1` (sin rasterizar) | — | 29,3 (techo = 30 del juego) |

Antes de medir rendimiento: `cat /sys/class/power_supply/ACAD/online` y `powerprofilesctl get`. Dato lateral: el pool
de raster por scanlines (`PS2X_RASTER_THREADS`, por defecto ncpu−2) escala mal (en batería, 0 hilos = 7 flips/s y 31
hilos = 17). Se ataca si la pelea (bloqueo 14) lo pide.

**Escenario 5 cumplido:** con Start (Enter) se ve el menú principal (STORY : EXTRAS / QUICK RUMBLE) a ~30 flips/s.
La navegación se automatizó con XTest (`libXtst` por ctypes; el teclado por defecto: X = ✕, Enter = Start, flechas =
cruceta).

### Detalle del bloqueo 13 — frontera de función en un delay slot (sesión 15)

**Síntoma.** Menú → Quick Rumble → 1 ON 1 → bandas. Al confirmar, el EE vuelve de `0x4845c0` a `0x1ef004` por el
despachador y entra en bucle: `No exact recompiled function for guest PC 0x1ef004` (~400 000 por minuto), `flips`
congelado y `[stallprobe] pc=0x1ef004`.

**Causa.**

- En `0x1eeffc` hay `jal 0x4306ec` y su delay slot es `0x1ef000: daddu a1, s0, zero`.
- El analizador abría una función en `0x1ef000` (`sub_001EF000`). Por eso `sub_001EECC0` acababa en `0x1ef000`: no
  ejecutaba el delay slot (`a1` llegaba mal a la llamada) y, al volver, dejaba `pc = 0x1ef004`, que no es entrada de
  ninguna función.
- Origen de esa "función": `ScanMaterializedCodeAddresses` (`elf_parser.cpp`). En `0x33b070`/`0x33b088` el juego pasa
  la constante numérica `0x1EF000` a una llamada con `lui a2, 0x1e` y `ori a2, a2, 0xf000` en el delay slot. El
  analizador la toma por un callback. No hay ningún puntero a `0x1ef000` en el ELF.
- Mismo defecto en `0x41a420`: es el delay slot del `jr ra` de `0x41a41c` y la constante viene de `0x256cd4`/`0x256ce0`.
  El `sb` de ese delay slot no se ejecutaba.

**Referencias.**

- Upstream `main` es nuestra base `e563698`, sin cambios.
- god-of-war-recomp evita la heurística con un mapa de funciones de Ghidra (`config/funcmap.csv`).
- El propio `elf_parser.cpp` ya tenía la regla para punteros cargados de datos (Silent Hill `0x325350`, delay slot de
  un JALR), pero no para el camino `lui + addiu/ori`.

**Fix (fork `feature/TWR-27-function-bounds` @ `55f7e10`).**

- `IsDelaySlotOfControlTransfer` se comparte entre los dos caminos.
- Test nuevo: constante `lui/ori` igual al delay slot de un JAL. Da rojo antes del fix y verde después.
- `ps2x_tests` 452/453 antes y después; el fallo `IOP heap DMA…` es previo.

**Runner regenerado** con el recompilador actual.

- Cambian 18 archivos y se eliminan `sub_001EF000` y `sub_0041A420`.
- Además corrige `psubuh` en 3 funciones (`_mm_sub_epi16` → `_mm_subs_epu16`, saturado). El generador ya estaba
  arreglado desde la sesión 11 (MMI), pero solo se habían retocado a mano `pexcw`/`prevh`.
- Se pierden los comentarios `[TWR-27] … do not regenerate` de esos `pexcw`: el recompilador del fork ya los emite
  bien.

**Guardia.** `tools/check_function_bounds.py` (CI, Linux) falla si una función acaba en un salto cuyo delay slot
queda fuera. Con el runner viejo detecta los 2 casos; con el nuevo da 0.

**Resultado:**

- Selección de área → pantalla de carga "1 ON 1" → presentación de las bandas → cuenta atrás → **pelea con HUD
  "PLAYER 1"**.
- ~90 s de pelea sin crash.
- Esc. 1 y 2 OK.

### Bloqueo 14 — texturas con ruido en la pelea (abierto, sesión 15)

- En la pelea, el suelo, las paredes y los personajes se ven con ruido de colores. La geometría y el HUD están bien.
- Los menús 2D y la pantalla de carga (foto) se ven bien. Eso apunta a la subida o decodificación de texturas
  3D (PSMT4/PSMT8 + CLUT, swizzle de VRAM), no a la VU1.
- En la pelea el juego baja a ~8 flips/s.
- Capturas en el handoff de TWR-27 (scratchpad efímero).

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
construye en el fork `ps2xIOP` y TWR-30 lo extiende. **Decidido por el dev (sesión 6) y hecho en la sesión 7:** ver "Detalle del bloqueo 5 — resolución".

**Bug lateral corregido (fork `326683a`).** `ps2xIOP` cortaba **sin aviso** toda llamada
síncrona al guest a los 2 M de instrucciones. El registro de SFX de MultiStream (handler RPC
`0x275c0` → `GetSFXSlot` `0x2d0b4` → búsqueda en `0x2d020` sobre 512 SpotFX, O(n²)) lo
superaba y quedaba a medias. Ahora el tope es 128 M (~3,5 s de IOP real) y llegar a él se
registra como error `[IOP] guest call … cut after …`. Hay test (handler de ~9 M instrucciones).

### Detalle del bloqueo 5 — resolución (sesión 7)

Comparados los tres repos (TW, BT3, GoW): ni upstream PS2Recomp ni BT3-Recomp emulan el SPU2 para
un `LIBSD.IRX` real. god-of-war-recomp sí (GPLv3, igual que el fork): `patches/anteriores/`
`ps2recomp-spu2.patch` (núcleo), `-spu2-output` (salida con mutex, `drainAudio`), `-spu2-perf`
(contadores) y `-spu2-nax` (NAX dentro del bloque que suena, como `NextA` de PCSX2; sin eso un
stream sondeado ve NAX fuera de su anillo y se aborta). Se portaron los cuatro en ese orden al fork
(`ps2xIOP/src/emulator/core/spu2.{h,cpp}`), con las variables renombradas a `PS2X_SPU2_PERF` y
`PS2X_SPU2_IRQ`. No se portó la parte de salida de audio de GoW (raylib): el audio audible es TWR-30.
`ps2recomp-iop-sound.patch` no aplica todavía: `sceSifGetOtherData` (sifcmd 23) no lo importa
`IOP.IRX`, y el `WaitSema` sin hilo actual no se ha observado; se revisa si aparece.

**Diferencia con GoW:** además de en `runCycles`, el SPU2 avanza dentro de `runCpu`. Una RPC
síncrona del EE corre en `callFunction`, donde `runCycles` no está en la pila: si el IRX sondea NAX
ahí, sin esto el tiempo del SPU2 no pasa. Hay test que falla sin ese cambio.

**Verificación.** `ctest` de `ps2xIOP` 5/5 (nuevo `ps2_iop_spu2_tests`, 13 casos; el hash de
referencia de GoW coincide). En el juego: 2 voces activas sostenidas, DMA al SPU2 ~115 KB/s,
`IOP/MUSIC.SND` leído durante toda la corrida (antes no se abría) y 70 s a ~30 flips/s. La pantalla
sigue negra: ver bloqueo 6.

### Defaults de render heredados de BT3 — retirados (sesión 7)

`main.cpp` activaba por defecto unas 30 variables "validadas" para BT3: `PS2X_GPU`,
`PS2X_SCENESKIP`, `F336SKIP`, `SHCOMPSKIP` (índices de shaders de BT3), `MASKBUILDSKIP`,
`BARGATE`, `IDXONLY`…, `PS2X_Warriors_CDTICK`, `PS2X_FORCE_MC` y `PS2X_ASYNC_KICK=1` (con
carreras sin resolver según su propio comentario). Ninguna estaba verificada contra Warriors, y ni
upstream PS2Recomp ni god-of-war-recomp ponen defaults así. **Decisión del dev (15): retirarlas.**
Ahora solo se pone por defecto `PS2X_SCHED=1`, que la cesión de token de las RPC IOP→EE necesita.
Todo lo demás es opt-in desde el entorno. El camino GPU (`PS2X_GPU=1`) sigue opt-in hasta
validarlo contra el render real de Warriors. `PS2X_NODEFAULTS=1` sigue quitando también
`PS2X_SCHED`.

**Corrección del diagnóstico de la sesión 6:** la caída a ~1 flip/s **no** la causaban estos
defaults. Sin ellos también aparece: 30 flips/s hasta ~40 s y después ~1 flip/s, con el hilo
principal en `0x48c5f0` (misma cadena `0x48e118 ← 0x48fd28 ← 0x482814*`). La muestra de 4
corridas de la sesión 6 era corta (las corridas duraban menos que el tiempo hasta la caída).
Sigue abierta como síntoma secundario del bloqueo 5; se revisa después del SPU2.

### Herramientas de esta sesión

- Captura de la ventana: `PS2X_SHOT_DIR` + `shot.req` (lo hace `ps2_runtime.cpp` `[shotreq]`).
- E/S real: muestrear `/proc/<pid>/io` (`rchar`) y `strace -f -y -e trace=read,lseek,openat`.
- Trazas temporales en el fork (no commiteadas): `cdvdman` en `dispatchImport`, entrega de
  `servicePendingGuestCallbacks`, histograma de `IopMemory::readHardware32`. IRX: base de carga
  `0x20700`; los offsets `lui 0x1 / lw 0x7474` del archivo se reubican a `0x30000 + 0x7b74`.

## Detalle del bloqueo 6 — sin DMA del scratchpad (sesión 8)

- **Qué se veía:** traza temporal de `GSRasterizer::drawPrimitive` → 100 % `type=0` (POINT), XYZ=0,
  RGBA=0, `path=2`; `PS2X_GPU=1` daba lo mismo (`glcalls=0`), así que no era el rasterizador SW.
- **Volcado VIF1** (traza temporal en `processVIF1Data`): paquetes de 1 160 B = `NOP; DIRECT 0x48`
  + 72 qw casi todo a cero, con etiquetas DMA **dentro** de los datos (`cnt qwc=0xd; NOP; DIRECT 0xd`,
  `ref qwc=0x21 addr=0x7ac400; FLUSH; FLUSHA`). El GS tomaba esas etiquetas como GIFtags → los POINT.
- **Cadena** (traza en el recorrido de etiquetas): `cnt qwc=72` + `refe`, en doble búfer
  `0x7acc80`/`0x87c880` (cambia con `CSR.FIELD`). Las etiquetas internas las escribe la CPU; el resto
  del bloque lo debía rellenar DMA.
- **`PS2X_DMA_PROBE=1`:** 142 muestras de `0x1000D000` (fromSPR, `mode=0`, `chcr=0x100`) por 14 de
  VIF1: ~64× más arranques. `grep` en el runtime: ningún código para `0x1000D000/0x1000D400`. Upstream
  tiene `PS2Memory::tryProcessScratchpadDma` (`ps2xRecomp/ps2xRuntime/src/lib/ps2_memory.cpp`).
- **Fix:** portado tal cual (normal: copia SPR↔RAM con vuelta a 16 KB, `MADR/SADR/QWC` actualizados,
  `STR` abajo, `D_STAT.CIS8/9` + cola de causas DMAC). Modos cadena/intercalado no se usan hoy: aviso
  único `[sprdma] … mode=N not implemented`.
- **Después del fix:** `type=6` (SPRITE) por PATH2 = borrado de RW en franjas de 32×448, negro
  (`rgba=0x80000000`), y sprites texturizados por PATH1 (`tbp0=14496`, centrados en (320,224), aún de
  tamaño 0: probablemente una animación de entrada). `Mpix/sec` sigue en 0 aunque los sprites son
  visibles: el contador de píxeles no cubre ese camino (pendiente de revisar, no bloquea).

## Detalle del bloqueo 7 — handlers de interrupción en paralelo al hilo (sesión 8)

- **Estado en el atasco** (`[stallprobe]` + volcado temporal): `VIF1 CHCR=0x…45` (sin `STR`),
  `GIF CHCR` sin `STR`, `D_STAT=0x106`, `cnt=1`, `q0=0x87c820`, `q1=0x87c818`, `[q0-8]=00001042 01041810`
  (paquete `0x42`). Los vblank siguen llegando (handler `0x48BDB0` en modo contador, `[gp-0x7958]=1`).
- **Secuencia** (`PS2X_ADDRWATCH=5970e8,5970f0,5970f4 PS2X_ADDRWATCH_ALL=1`, ahora con valores en hex):
  cola `[0x87c800,0x87c818)` con 3 entradas → el principal lanza e0 (`cnt=1`, `ra=0x48c058`) → el
  handler DMAC (`ra=0`) baja `cnt` y procesa e1 y e2 (`0x42`, `ra=0x48bcc0`) hasta `q0=q1` → el principal
  desde `0x48e0e8` (`sub_0048E048`) llama `handler(-1)` y avanza `q0` de `0x87c818` a `0x87c820` con
  `cnt=1`. `sub_0048B708` sí comprueba `cnt` y `q0==q1` al entrar (`0x48b764..0x48b790`), así que el
  único modo de pasarse es que dos instancias corran a la vez.
- **Por qué pasa aquí y no en la PS2:** `dispatchIntcHandlersForCause` corre en el worker de
  interrupciones (`interruptWorkerMain`) y al terminar llama `deliverPendingDmacInterruptsAfterHandler`
  → `drainCompletedDmacHandlers`: el handler DMAC corre en otro hilo host mientras el hilo guest sigue
  ejecutando. El enmascarado de 4a solo evita entregar con el principal en `di`: medido, 0 entregas con
  el principal en `di`. El código del juego no usa `di` aquí porque en hardware no le hace falta.
- **Comparativa:** upstream PS2Recomp y god-of-war-recomp usan `EeScheduler`
  (`ps2xRecomp/ps2xRuntime/include/runtime/ee_scheduler.h`): las IRQ (`dispatchIrq`) se entregan en
  los *checkpoints* del hilo en ejecución (`checkpointDue`, `interruptSafe`, preempción por
  prioridad). Nuestro runner generado ya llama `PS2Runtime::eeCheckpointDue()` en cada salto hacia
  atrás (3 090 archivos), pero hoy esa llamada solo avanza el IOP y cede el token cada 65 536 ciclos.

## Detalle del bloqueo 7 — resolución: interrupciones en checkpoints (sesión 9, decisión 17)

- **Modelo:** con `PS2X_SCHED=1` (hilos, sin fibers) el worker de vblank ya no ejecuta código guest.
  Mantiene en el host `CSR.FIELD`, el flag/espera de vsync y el bombeo del IOP. Marca como
  pendientes (bitmask atómico, como `INTC_STAT`) el callback de `sceGsSyncV`, VBLANK_START/END y
  los timers 9-12. `PS2Runtime::serviceGuestInterrupts` los entrega en el hilo con el token
  cuando su contexto tiene `EIE` y no `EXL`. Lo llaman `eeCheckpointDue` (cada salto hacia atrás,
  con un chequeo atómico), `dispatchGuestBranch`, los dos despachadores y `Store32`; en esos tres
  últimos va a través de `deliverPendingDmacInterrupts`. Primero corren los handlers INTC en orden
  de causa y después el drenaje DMAC, todo en contexto de interrupción (`t_inGuestIrq`: un
  handler no cede el token).
- **CPU ociosa:** si `m_schedCurrent == -1` (todos los hilos guest bloqueados), el worker toma el
  token con el pseudo-tid `-2` (`kSchedIrqTid`), entrega y se lo pasa al siguiente hilo
  ejecutable. `schedAcquire`/`schedRegister` ya solo toman un token libre (`== -1`) y el watchdog
  considera vivo al `-2`.
- **Red de seguridad:** si una IRQ lleva más de 200 ms pendiente y el titular no está en `di`, el
  worker entrega igualmente y lo registra (`[irqdefer] STALE`). Con el hilo principal en `di` no se
  rompe nunca su sección (se cuenta como `masked`). Estadísticas cada ~10 s: `[irqdefer] stats
  checkpoint= idle= stale= masked=`. `PS2X_IRQDEFER=0` vuelve a la entrega en el worker (A/B).
- **Medido (120 s, SW):** sin atasco en `0x48c5f0`, `stale=0`, RSS estable. Las corridas de los
  stale "largos" de la primera versión (titular sin checkpoints 0,2-1 s) eran el kick de RW en `di`
  rasterizando en el `Store32` (gdb: `sub_0048E048 → 0x48C508 → 0x48B708 → Store32 → VIF1 → VU1 →
  GS`), agravado por la fuga del bloqueo 8.
- **Nota:** en la sesión 9 el bloqueo 7 tampoco se reprodujo en 40 s con `PS2X_IRQDEFER=0` (la fuga
  cambia el timing), así que la evidencia de la resolución es el modelo (ninguna ejecución de
  handler en paralelo) más la ausencia del atasco, no un A/B determinista.

## Detalle del bloqueo 9 — VIF que perdía UNPACK y VU1 heredado (sesión 10, decisión 20)

- **Síntoma medido:** ~28 flips/s durante ~30 s y luego ~0-1 flip/s. El hilo principal queda en `di` dentro del
  `Store32` a `D1_CHCR` (`0x48BB04`) rasterizando en SW hasta ~4 000 sprites/s (~500 Mpix/s de área). Esos sprites
  traen `FRAME/TEST/ALPHA/TEX0` llenos de valores tipo float (`fpsm=0x1f`, `psm=0x3f`): el GS lee datos de vértice
  como escrituras A+D, porque algunos `XGKICK` apuntan a datos en vez de a una etiqueta GIF.
- **VU1:** todo el microcódigo de Warriors corría en el intérprete heredado de BT3 (su JIT y sus kernels nativos solo
  cubren programas de BT3). Diferencial sobre ejecuciones capturadas del juego (mismo estado, memoria y código) frente
  al VU1 exacto de upstream (`ps2xRecomp/ps2xRuntime/src/lib/vu`, el que god-of-war-recomp usa de referencia):
  divergen en los 4 microprogramas medidos (p. ej. `0x1700` 0/17 iguales). El heredado no modela la visibilidad de VI
  en los branches, la latencia de `ILW`, el `XGKICK` como transferencia PATH1 ni el pipeline de flags. Además corta
  cada programa a 65 536 ciclos y lo deja a medias; en hardware el VIF espera al bit E.
- **Decisión 20 (dev):** VU1 exacto de upstream. Target `ps2_vu1_upstream`: las fuentes del submódulo compiladas con
  macros de renombrado (`VU1Interpreter`, `VU1State`, `GS`, `PS2Memory`, `GifPathId` → `Up*`) y cabeceras shim
  (`src/lib/vu_upstream/shim`), más la fachada `include/runtime/ps2_vu1_upstream.h`. `VU1Interpreter::execute/resume`
  delega en ella y ejecuta por tramos de 65 536 ciclos hasta el bit E (tope `PS2X_VU1_MAXCYCLES`, 16 M por defecto,
  con aviso `[vu1up] … did not reach E`). Los paquetes PATH1 entran al GS por el mismo `submitGifPacket(Path1)`.
  `PS2X_VU1_UPSTREAM=0` vuelve al intérprete heredado (A/B). Fork `feature/TWR-27-vu1-gow-fixes` (`7b4abbe`): fixes de
  GoW sobre ese VU1 (`JR/JALR` leen el VI actual; errata del coeficiente t^7 del EFU). Upstream `main` = nuestra base
  (`e563698`), sin correcciones VU1 más nuevas.
- **VIF/DMA:** con el VU1 nuevo, el programa de setup/2D (`6e8f…`, `XGKICK vi14`) se desbocaba al reanudar por MSCNT:
  leía el número de vértices del lote en `qw 1005` (`ILW.w vi11, 1005`) y encontraba `0xcff1`. La cabecera del lote
  (`UNPACK V4-32` a `0x3eb..0x3ef`) se pisaba con un `UNPACK V4-5 ×178` a `0x2b2+TOPS` que daba la vuelta a la
  memoria VU1. Ese UNPACK no existe: el programa lee cuatro flujos de 52 qwords desde TOP. Causa: el DMA en cadena
  solo enviaba al VIF la mitad alta de la etiqueta (dos VIFcodes, `CHCR.TTE=1`) para las ids `CNT/NEXT/CALL/RET/END`,
  no para `REF/REFS/REFE`. RenderWare pone en sus `REF` el `UNPACK` que consume los vértices referenciados, así que
  los vértices se parseaban como VIFcodes. Upstream (`transferTagData`) y el hardware lo envían para toda etiqueta.
- **A/B (45 s, SW):** con ambas correcciones, ~30 flips/s estables, aviso de autoguardado y pantalla de título, cero
  errores de la VU1. Solo el arreglo DMA con el VU1 heredado (`PS2X_VU1_UPSTREAM=0`): ~30 flips/s pero imagen casi
  negra (brillo máx. 4/255). Hacen falta las dos.

## Detalle del bloqueo 14 — subidas de textura por PATH3 sin intercalar (sesión 16)

**Síntoma.** En la pelea Rumble, parte de las texturas 3D salían como ruido multicolor o con la paleta de otra
textura, y cambiaban de un frame a otro. Menús y 2D, bien.

**Descartado con pruebas.**
- *Swizzle*: un arnés compila solo `ps2_gs_memory.cpp` y extrae la dirección que leen `ReadCT32/ReadP8/ReadP4`,
  `addrPSMT8/addrPSMT4` y `ReadRowP8/ReadRowP4` (bw 1/2/4) para cada (x, y). Comparado con las tablas de PCSX2
  (`pcsx2/GS/GSTables.cpp`): **0 discrepancias** en todo lo que usa el rasterizador (`ReadRowP8` con bw=1 difiere,
  pero el rasterizador solo lo usa con bw ≥ 2).
- *Decodificaciones rápidas*: con `FASTDECODE/FASTT4/FASTT8/ROWDECODE/CPUCLUT/CLUTMULTI` apagados el ruido sigue.

**Causa.** Volcando cada textura en su primer uso salía ruido; en su uso n.º 40, casi todas limpias. Con
`PS2X_TEXSEQ` (orden real en el GS de subidas, TEX0 y eventos VIF): al empezar cada frame llegaban ~232 subidas por
PATH3 y después todos los draws; 58 huecos de VRAM recibían varias subidas en ese mismo frame (hasta 8 el
`dbp=16352`). El VIF1 de RW repite por malla `FLUSHA → MSKPATH3 0 → MSKPATH3 1 → FLUSH`, y el canal 2 llega como un
único paquete DMA de ~69 000 qw mientras PATH3 está enmascarado. En el hardware (PCSX2 `Vif_Codes`/`Gif_Unit`) la
máscara actúa al final del paquete GIF en curso, así que cada ventana deja pasar **una** subida (hasta EOP). El
runtime (igual que upstream y GoW) soltaba la cola entera en el primer desenmascarado.

**Corrección** (`ps2_memory.cpp`, `ps2_vif1_interpreter.cpp`):
- `MSKPATH3 0` → `releaseOneMaskedPath3Packet()`: suelta el paquete GIF inicial de la cola (etiquetas hasta la
  primera con EOP, con su carga PACKED/REGLIST/IMAGE).
- `FLUSHA` con PATH3 desenmascarado y cola no vacía → vacía la cola (PATH3 corre hasta quedar inactivo).
- Si el paquete soltado sigue en datos que aún no llegaron, la continuación pasa hasta su EOP aunque esté enmascarado.
- `PS2X_P3_EOPMASK=0` vuelve al comportamiento anterior.

Resultado: ruido cromático 0,00 % en las capturas de la pelea (antes 0,16–0,83 %); escenario coherente.

**Efecto secundario corregido.** Con las subidas ya intercaladas, la caché multi-entrada de paletas
(`[clutmulti]`, optimización heredada de BT3; upstream no la tiene) devolvía al logo "vs" una paleta rancia. Pasa a
opt-in (`PS2X_CLUTMULTI=1`). En la pelea, el mismo ~11 flips/s con y sin ella. La ruta exacta de la entrada rancia
no está aislada.

**Herramientas nuevas (diagnóstico, apagadas por defecto).** `PS2X_TEXSEQ=<s>` (0,3 s de orden de subidas/TEX0/VIF
desde el segundo `s`), `PS2X_SWTEXDUMP=1` + `PS2X_SWTEXDUMP_DIR` / `_AFTER=<s>` / `_NTH=<n>` (antes, ruta fija de
BT3), `PS2X_SHOT_VRAM=1` (guarda `shot_vram.bin`, los 4 MB del GS, con cada `shot.req`) y `PS2X_PRIVWRITE=<n>`
(cambios de PMODE/SMODE2/DISPFB/DISPLAY por el bus).

## Display: `sceGsPutDispEnv` escribía los dos circuitos (sesión 16)

Warriors usa los dos circuitos de lectura para el filtro antiparpadeo: PMODE `0x8003` (EN1+EN2, ALP 0x80), DISPFB2
con DBY=1 (desde `sceGsPutDispEnv`) y DISPFB1 con DBY=0 escrito por el propio juego. El `sceGsPutDispEnv` real
(`0x4AA748`, desensamblado del ELF) escribe PMODE, SMODE2, **DISPFB2, DISPLAY2** y BGCOLOR, y solo el circuito 1 si
`sceGsGetGParam()->version == 1`. El stub (como upstream) escribía los dos circuitos y pisaba cada frame el
DISPFB1/DISPLAY1 del juego. Ahora sigue la rama real (`PS2X_DISPENV_BOTH=1` = viejo). Con `PS2X_PRIVWRITE` se ve que
DISPFB1 ya solo alterna el búfer (fbp 0↔140) y DISPLAY1 no cambia. El salto vertical que vio el dev **no** se
reproduce en ráfagas ni en vídeo a 60 fps, con ni sin el arreglo; falta saber en qué pantalla aparece.

## Escenario 6 — pelea Rumble con input (sesión 17)

Ruta por XTest (teclado): Enter (título, t≈46 s) → Abajo (QUICK RUMBLE) → ✕ (Game Mode: 1 ON 1) → ✕ (Game Type: 1P vs CPU)
→ ✕ (Choose Gangs) → ✕ (Choose Area: Fight Pen) → carga (~30 s) → ✕ ("press ✕ to start"). Con poco FPS una pulsación
de 0,12 s puede contar en dos pantallas seguidas, así que el script mira cada pantalla.

- **Input:** el stick (WASD) mueve y gira al personaje, la cámara lo sigue y □ (Z) golpea. Capturas
  `screenshots/boot-08-rumble-choose-gangs.png`, `boot-09-rumble-fight-start.png` y `boot-10-rumble-fight-input.png`.
- **Estabilidad:** más de 4 minutos de pelea sin crash ni cuelgue, RSS estable (~410 MB), ~9-12 flips/s.
- Durante la carga de Rumble (registro de 319 SFX, ~1 flip/s) salen 23 `[irqdefer] STALE` con el principal dentro del
  handler DMAC (`dispPc=0x48b708`, `depth=1`). No aparecen durante la pelea ni causan fallos; queda anotado.

### Bloqueo 15 — jugador invisible y polígonos gigantes en la pelea (abierto, sesión 17)

En 12 capturas cada 1,5 s el personaje del jugador falta en 6 aunque su anillo "1" sí se dibuja
(`screenshots/boot-11-rumble-player-missing-grid.png`). El rival falta a veces. En algunos frames **toda** la escena
sale como polígonos enormes (`boot-12-rumble-exploded-polys.png`). Ya pasaba antes del arreglo PATH3: con
`PS2X_P3_EOPMASK=0` se repite, con el ruido de texturas de antes.

| A/B (mismo recorrido, cargador + `performance`) | Jugador ausente | Polígonos gigantes |
|---|---|---|
| Base | sí | sí |
| FPS medido forzado a 30 en `0x40eb8c` (temporal) | sí | — |
| `GOW_VU1N_VERIFY=3000` desde el segundo 125 (en la pelea) | sí | sí |
| `PS2X_P3_EOPMASK=0` | sí | sí |

- **No es la distancia de dibujado adaptativa** (bloqueo 10d): con el FPS forzado a 30 sigue pasando, y el jugador está
  a pocas unidades, muy por debajo del alcance mínimo de 50.
- **No es la VU1 nativa:** la verificación dentro de la pelea da 2000 lanzamientos con **0 discrepancias de memoria y
  paquetes**. Solo difieren el MAC y el clip finales (31 casos), como en el título.
- **Sospecha:** como la VU1 es exacta, la entrada de esos frames llega mal: un paquete o unas matrices pisados. Encaja
  con una carrera entre el EE que rellena la lista DMA del frame siguiente y el DMA/VIF1 que aún consume la actual.
  Siguiente paso: volcar con `PS2X_SEQ` o `addrwatch` las cabeceras `UNPACK` del modelo del jugador en un frame bueno
  y en uno malo, y compararlas con upstream (`ps2_memory.cpp`, `transferTagData`) y con GoW.
- Visto de paso: la tarjeta giratoria de "Choose Area" sale como un rombo gris plano con una barra negra. Sin revisar.

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

---

## Validación de los escenarios 1-6 sobre la base GoW (TWR-27, sesión 19, 2026-11-09)

Corrida única de 222 s en un Lenovo (RTX 4060, cargador, perfil `performance`; GPU forzada con
`__EGL_VENDOR_LIBRARY_FILENAMES=.../10_nvidia.json`), runner por defecto (`scripts/build-linux.sh`, VU1 por pares con 39
micromemorias, backend "lean" apagado), sin variables `PS2X_*`. Entrada por XTest desde un arnés local fuera del repo
(menús: Enter/Abajo/`x`; pelea: `d`/`a`/`w`/`s` para mover y `z` = Cuadrado para golpear). La pelea duró **79 s**.

| Esc. | Criterio | Resultado |
|---|---|---|
| 1 | Sin overrides heredadas de BT3 | **Cumple, adaptado.** El mensaje `[game_overrides] applied N override(s)` era del runtime de BT3 y ya no existe. En la base nueva `src/warriors_overrides.cpp` solo fija el mapa de memoria (pilas/heap privado), elige el backend de VU1 y activa diagnósticos opcionales. El `grep` de `applyBt3\|warriorsPad\|0x2B8CE0\|0x27B4A0\|0x26e290\|0x26d338\|0x339A20\|PS2X_SNDNOSTOP\|RECVX\|LotR` sobre `src/`, `patches/twr-*` y `tools/` no devuelve nada; el log no contiene `[netjump]` ni `No exact recompiled function`. Los únicos `replaceFunction` son los envoltorios de `scePadRead`/`scePadGetState` bajo `TWR_PAD_DIAG=1` (apagados por defecto). `check_override_addresses.py`: OK |
| 2 | IOP real sano | **Cumple.** Los 6 IRX cargan (`loaded IRX id=1..6`), `IOP.IRX` imprime `Exit MultiStream V7.1 Thread Load`, sin `no IOP provider sid=0x12345` ni `EE and IOP versions do not match`. `ctest` de `ps2xIOP` 4/4 y suite del runtime 463/463 (clon limpio parcheado). El log ya no dice `load-emulated`: dice `loaded IRX` |
| 3 | Sin bucle en `0x154b50` | **Cumple el criterio medible** (0 líneas `[stallprobe]` en 222 s). **Causa no aislada por bisección**: el bucle solo existía con la capa BT3, que se retiró de la base; la hipótesis (override `ret0` de BT3 sobre `0x339A20`, el `Alloc` del gestor de heaps, que dejaba un puntero a 0 como el `JALR` a 0 visto en `0x339a44` al recortar el heap) no se verificó. Pendiente de aprobación del dev como desviación de la spec |
| 4 | El juego produce frames | **Cumple.** `[gow-fps] imagenes` > 0 en las 220 muestras (menús a 60/s, pelea 30-60/s), `[gs-hw] draws=1 162 597`. En la base GoW la métrica es `imagenes` (presentaciones del GS), no `flips`/`prims/sec` |
| 5 | Menú principal visible | **Cumple.** Capturas `base-gow-01..05`: título, menú principal (Story / Extras / Quick Rumble), Game Type, Choose Gangs, Choose Area |
| 6 | Pelea Rumble ≥ 60 s sin crash, input mueve al personaje | **Cumple.** 79 s con el proceso vivo al final, sin `SIGSEGV`/abort en el log. Entre las capturas `base-gow-06..08` el personaje cambia de posición y de pose con las teclas y se ven agarres/golpes. No hay una prueba A/B de desplazamiento (solo comparación visual de 17 capturas) |

Pendientes que esta corrida **no** cierra: `base-gow-09-pelea-primer-plano-dudoso.jpg` es un primer plano de un golpe con un plano
marrón oscuro de borde diagonal a la izquierda que recuerda al defecto de "polígonos gigantes"; no se sabe si es geometría
legítima de la cámara o un caso residual (1 de 17 capturas de pelea, con 0 de 40 en la medición dedicada). Sigue como
defecto visual menor a vigilar (Esc. 7).
