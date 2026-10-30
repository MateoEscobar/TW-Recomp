# TW-Recomp — Guía de Build

## Requisitos

| Herramienta | Versión mínima |
|-------------|----------------|
| CMake       | 3.21+          |
| Ninja       | cualquier      |
| GCC / Clang | C++20 (GCC 11+, Clang 13+) |
| MSVC        | VS 2022 17.x (C++20, x64) |
| RAM         | 8 GB mínimo; 16 GB recomendado (unity build de ~16 k TUs) |

---

## Build rápido (Linux)

```bash
# 1. Clonar con submodules
git clone --recurse-submodules git@github.com:MateoEscobar/TW-Recomp.git
cd TW-Recomp

# 2. Aportar el ISO (BYOD) y extraer el ELF
python3 scripts/extract_iso.py "/ruta/al/Warriors, The (USA).iso"
# → games/warriors/SLUS_212.15

# 3. Configurar y compilar
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build --parallel

# Binario resultante:
# build/ps2xRuntime/ps2EntryRunner
```

---

## Regenerar las fuentes C++ (ps2xRecomp)

Las fuentes en `ps2xRuntime/src/runner/` son generadas por `ps2_recomp` y se commitean
al repositorio. Solo es necesario regenerarlas si se modifica `games/warriors/warriors.toml`
(stubs, patches) o al actualizar el submodule `ps2xRecomp`.

```bash
# Compilar ps2_recomp si no existe el binario
cmake -B build -G Ninja && cmake --build build --target ps2_recomp --parallel

# Ejecutar la recompilación
./build/ps2xRecomp/ps2xRecomp/ps2_recomp games/warriors/warriors.toml

# Volver a compilar el proyecto completo
cmake --build build --parallel
```

### Stats de recompilación (TWR-12 — 2026-10-30)

| Métrica | Valor |
|---------|-------|
| ELF analizado | SLUS_212.15 (NTSC 1.03, 5.2 MB) |
| Funciones extraídas | 16.257 |
| Funciones recompiladas | 16.138 |
| Stubs con handler | 119 |
| Fallos de decodificación | 0 |
| Instrucciones no manejadas | 0 |
| Entry points adicionales | 590.972 |
| Funciones generadas | 16.259 |
| Fallbacks indirectos (JR/JALR) | 8.622 funciones |
| Warnings | 8.623 (todos de JR/JALR indirecto — normal en juegos stripped) |
| Errores | 0 |

### Archivos generados

| Archivo | Descripción |
|---------|-------------|
| `ps2xRuntime/src/runner/sub_XXXXXXXX_0xXXXXXXXX.cpp` | ~16.138 archivos — un `.cpp` por función recompilada |
| `ps2xRuntime/src/runner/register_functions.cpp` | Tabla de registro de los ~590 k entry points |
| `ps2xRuntime/src/runner/ps2_recompiled_functions.h` | Declaraciones forward de todas las funciones (1,4 MB) |
| `ps2xRuntime/src/runner/ps2_recompiled_stubs.h` | Declaraciones de stubs SDK (9,9 KB) |

> **Nota sobre `single_file_output`:** se usa `false` (un `.cpp` por función). El modo `true`
> genera un único TU de 272 MB que `register_functions.cpp` no puede compilar porque las
> ~590 k funciones de entry extra no tienen declaraciones visibles en ese scope.
> Con `false` + unity build (`PS2X_ENABLE_RUNNER_UNITY_BUILD`, batch=8) el compilador
> agrupa los ~16 k TUs en ~2 k batches y completa en ~15 min.

---

## Notas técnicas

### Stubs de RenderWare y Miles Sound System

Las funciones `rwXxx`/`rpXxx` (RenderWare) y `AIL_xxx` (Miles Sound System) están
**completamente stripped** del ELF — no aparecen en el mapa de funciones. ps2xRecomp
las recompila como funciones normales del juego. Las implementaciones nativas reales
se agregarán en TWR-13 (stubs SDK+RW) y TWR-17 (audio MSS).

### Fallbacks indirectos (JR/JALR)

8.622 funciones tienen saltos indirectos (`JR`/`JALR` a registro) que no se pueden
resolver estáticamente. En runtime, `ps2_runtime::lookupFunction(addr)` hace dispatch
dinámico. Es comportamiento normal para juegos stripped sin tabla de símbolos.

### Config de ps2xRecomp (`games/warriors/warriors.toml`)

- `input`: ELF del juego (BYOD, no incluido en el repo)
- `output`: `ps2xRuntime/src/runner/` (pick up automático por CMake GLOB)
- `single_file_output: false` — un `.cpp` por función (requerido para compilar correctamente)
- `stubs`: 122 funciones SDK identificadas por ps2xAnalyzer (TWR-11)
