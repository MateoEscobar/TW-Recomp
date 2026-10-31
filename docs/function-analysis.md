# Function Analysis — The Warriors (SLUS_212.15)

**Generado:** 2026-10-30  
**Herramienta:** ps2xAnalyzer (JAL scanner + SCE symbol DB embebida)  
**Ticket:** TWR-11  

> **Nota:** Ghidra no está disponible en esta máquina. Este análisis usa el
> JAL scanner con la base de datos SCE embebida. Para un mapa completo con
> nombres de funciones del juego se recomienda Ghidra + ExportPS2Functions.java
> en el futuro (ver TWR-12 y posteriores).

---

## Resumen ejecutivo

| Métrica | Valor |
|---------|-------|
| Total funciones extraídas | **16,257** |
| Matches SDK SCE identificados | **395** (359 renombradas + 36 añadidas) |
| Stubs con handler de runtime | **122** |
| Stubs sin handler (untracked) | **273** |
| Registros MMIO detectados | **697** |
| Funciones de juego (sub_XXXXXXXX) | **~15,862** |
| Funciones críticas de rendimiento | **1,058** |
| Jump tables detectadas | **1** |
| Punto de entrada ELF | `0x100008` (`sub_00100008`) |

---

## Breakdown por módulo

### 1. SDK PS2 / sceXxx — 95 funciones identificadas

Funciones del PS2 SDK de Sony identificadas por la base de datos SCE embebida.
Todas están en la sección `stubs` o `untracked_stubs` de `warriors.toml`.

**Subsistemas presentes:**

| Subsistema | Descripción |
|-----------|-------------|
| `sceCd*` | CD/DVD (sceCdInit, sceCdSyncS, sceCdMmode, sceCdReadClock) |
| `sceDma*` | DMA controller (sceDmaSend, sceDmaPause, sceDmaReset, etc.) |
| `sceGs*` | Graphics Synthesizer (sceGsPutDispEnv, sceGsPutDrawEnv, sceGsResetGraph) |
| `sceSif*` | SIF bus IOP←→EE (sceSifInitCmd, sceSifCallRpc, sceSifBindRpc) |
| `sceFs*` / `sceFsSifCallRpc` | File system |
| `sceDeci2*` | Debug interface (DECI2 protocol) |
| `sceMpeg*` / `_sceMpeg*` | MPEG2 decoder (IPU) — confirma cutscenes via IPU/BIK |
| `sceTty*` | TTY debug console |
| `sceOpen/sceClose/sceLseek/sceRead/sceWrite` | I/O primitivos |
| `sceSifInitIopHeap` / `sceSifAllocIopHeap` | Heap IOP |
| `sceSifLoadModule` / `sceSifResetIop` | Módulos IOP |

**Observación clave:** La presencia de `sceMpeg*` confirma que las cutscenes
de The Warriors usan el decoder IPU de PS2 (formato MPEG2/BIK). Esto es
relevante para TWR-16 (reproducción de cutscenes).

---

### 2. RenderWare 3.x (rwXxx / rpXxx / RwXxx) — 0 identificadas automáticamente

**El JAL scanner no encontró ninguna función con prefijo RenderWare.**  
Esto es esperado: RenderWare en PS2 era una librería propietaria compilada
con símbolos completamente stripped. Sus funciones aparecen como `sub_XXXXXXXX`
en el binario.

**Acción requerida (TWR-13):** identificación manual de funciones RenderWare
mediante análisis de patrones de código vs. la referencia re3/reVC
(`https://github.com/halpz/re3`). Las estructuras de datos RW (RpWorld,
RwCamera, RpAtomic, RwFrame, etc.) deberán buscarse por pattern matching
contra el código desensamblado.

**Referencia local:** `/var/www/html/ports/ps2/BT3-Recomp/ps2xRuntime/src/gfx/`
(implementación RW de BT3 — mismo engine, copiar y adaptar para TWR-14).

---

### 3. Miles Sound System (AIL_xxx) — 0 identificadas automáticamente

**El JAL scanner no encontró ninguna función con prefijo MSS/AIL.**  
Mismo motivo que RenderWare: librería propietaria, símbolos stripped.

**Formato de audio del disco:**
- `IOP/BFW.SND` — efectos (~1.31 GB, formato Miles Sound System propietario)
- `IOP/MUSIC.SND` — música (~0.89 GB, formato Miles Sound System propietario)

**Acción requerida (TWR-17):** reverse engineering de la interfaz `AIL_xxx`
desde el ELF. Buscar patrones de llamada a funciones IOP de audio y crossreferir
con la documentación pública de MSS 6.x (plataforma PS2, 2004-2005).
Backend de reemplazo propuesto: `miniaudio` o `OpenAL`.

---

### 4. Librería C estándar / Runtime — 37 funciones identificadas

Funciones de libc y runtime C++ identificadas como stubs o untracked:

**Libc / matemáticas:**
`memcmp`, `rand`, `atoi`, `sinf`, `cosf`, `expf`, `logf`, `powf`, `sqrtf`,
`floorf`, `ceilf`, `fmodf`, `ldexp`, `rint`, `fmod`

**Runtime C++:**
`__builtin_new`, `__builtin_vec_new`, `__dynamic_cast`, `__throw`,
`__rethrow`, `__terminate`, `__throw_type_match_rtti`,
funciones RTTI (`type_info`, `__si_type_info`, `__class_type_info`),
frame info EH (`__register_frame_info_table`, `find_exception_handler`, etc.)

**Observación:** La presencia de RTTI completo y exception handling confirma
que The Warriors fue compilado con C++ (probablemente CodeWarrior para PS2).
Esto es relevante para TWR-12: el código recompilado tendrá clases C++.

---

### 5. Funciones del juego (sub_XXXXXXXX) — ~15,862

El grueso del código del juego. Sin Ghidra, estas funciones permanecen
sin nombre. Son el objetivo principal de TWR-12 (recompilación).

**Características observadas:**
- **1,058 funciones críticas de rendimiento** — marcadas en `[performance].critical`
  por uso intensivo de MMI (SIMD PS2: PMULTH, PEXTLW, PCPYUD, etc.) o
  bucles pesados. Requerirán revisión manual en la fase de optimización.
- **1 jump table** detectada (control flow complejo).
- **697 registros MMIO** detectados (accesos hardware directo al GS, DMA, etc.).

---

## Instrucciones problemáticas detectadas

Funciones con patrones que requieren atención especial en TWR-12:

| Patrón | Descripción | Acción recomendada |
|--------|-------------|-------------------|
| Hardware I/O signal | Acceso directo a registros de hardware | Revisar y patchear manualmente |
| Loop-heavy | Bucles intensivos sin salida clara | Marcar para optimización |
| Complex MMI | Instrucciones SIMD PS2 (PMULTH, etc.) | Traducción manual de intrinsics |

Funciones específicas con hardware I/O:
- `sub_00101DD8`
- `sub_00151360`
- `sub_001828E0`
- `sub_00185D20`

---

## Configuración generada: `warriors.toml`

El archivo `games/warriors/warriors.toml` contiene:

- **`[general]`:** rutas de entrada/salida, configuración del recompilador
- **`stubs`:** 122 funciones con handlers de runtime (sceXxx, libc, etc.)
- **`untracked_stubs`:** 273 funciones SDK-like sin handler de runtime (informativo)
- **`skip`:** vacío (el analizador no auto-popula este campo — ver README)
- **`[mmio]`:** 697 registros de hardware mapeados en memoria
- **`[jump_tables]`:** 1 tabla detectada
- **`[performance]`:** 1,058 funciones críticas de rendimiento

Este archivo es el input que TWR-12 necesita para ejecutar ps2xRecomp.

---

## Próximos pasos

| Ticket | Dependencia | Descripción |
|--------|-------------|-------------|
| **TWR-12** | `warriors.toml` ✅ | Ejecutar ps2xRecomp → generar árbol C++ base |
| **TWR-13** | TWR-12 | Identificar y stubear funciones RenderWare + SDK manualmente |
| **TWR-17** | TWR-12 | Reverse engineering de AIL_xxx / MSS → capa audio OpenAL |
| **TWR-16** | TWR-12 | Cutscenes BIK via sceMpeg* (IPU decoder confirmado aquí) |

---

## Notas adicionales

- El Disc ID real es **SLUS-21215** (ELF: `SLUS_212.15`), no SLUS-21472 como
  figura en algunos documentos del proyecto. Verificado en TWR-10 por SYSTEM.CNF.
- La descripción de Jira TWR-11 tenía el comando ps2xAnalyzer incorrecto
  (`--elf`/`--output` no existen — la sintaxis real es `ps2_analyzer <elf> <toml>`).
  Corregido en esta sesión.
