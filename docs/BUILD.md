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

# 2. Aportar el ISO (BYOD) y extraer el ELF + el árbol del disco (~4 GB)
python3 scripts/extract_iso.py "/ruta/al/Warriors, The (USA).iso" --all
# → games/warriors/SLUS_212.15, WARRIORS.DIR/.WAD, IOP/, MODULES/, PSS/ (ignorados por git)
# Tras esto el ISO ya no se necesita para jugar.

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

## IOP emulado (ps2xIOP) y sus tests

`ps2_runtime` enlaza `ps2x::iop` (`ps2xRecomp/ps2xIOP`, añadido con `add_subdirectory` desde el
CMake raíz): el intérprete R3000A que ejecuta los IRX reales del disco. Arquitectura, rutas de módulos
y variables de entorno en [`docs/iop.md`](iop.md). Para correr su suite de tests (4 ejecutables, ctest):

```bash
cmake -S ps2xRecomp/ps2xIOP -B build-iop-tests -G Ninja -DCMAKE_BUILD_TYPE=Release -DPS2X_IOP_BUILD_TESTS=ON
cmake --build build-iop-tests --parallel
ctest --test-dir build-iop-tests --output-on-failure
```

El submodule apunta al fork `MateoEscobar/PS2Recomp` (rama `feature/iop-sifcmd-ee-rpc`: RPC IOP→EE,
formateo de `printf`, `sceCdSearchFile` sobre la imagen, arena de sysmem de 1,5 MB).

---

## Notas técnicas

### Stubs de RenderWare y sonido

Las funciones `rwXxx`/`rpXxx` (RenderWare) y la librería de sonido del EE (`SOUND_*`, Sony
MultiStream — no Miles, ver TWR-28) están **completamente stripped** del ELF — no aparecen en el
mapa de funciones. ps2xRecomp las recompila como funciones normales del juego. El renderer nativo
es el Epic TWR-3; el sonido corre en el IOP emulado (`docs/iop.md`) y el audio audible es TWR-30.

### Fallbacks indirectos (JR/JALR)

8.622 funciones tienen saltos indirectos (`JR`/`JALR` a registro) que no se pueden
resolver estáticamente. En runtime, `ps2_runtime::lookupFunction(addr)` hace dispatch
dinámico. Es comportamiento normal para juegos stripped sin tabla de símbolos.

### Config de ps2xRecomp (`games/warriors/warriors.toml`)

- `input`: ELF del juego (BYOD, no incluido en el repo)
- `output`: `ps2xRuntime/src/runner/` (pick up automático por CMake GLOB)
- `single_file_output: false` — un `.cpp` por función (requerido para compilar correctamente)
- `stubs`: 122 funciones SDK identificadas por ps2xAnalyzer (TWR-11)
