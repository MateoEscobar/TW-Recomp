# TW-Recomp — Guía de Build

> **[TWR-27 decisión 23]** El port se construye sobre **PS2Recomp upstream en un commit fijado + una pila de
> parches** (`patches/series`), la misma estructura que god-of-war-recomp. El runtime bifurcado de BT3
> (`ps2xRuntime/`, `ps2xAnalyzer/`, submódulo `ps2xRecomp`) y el CMake raíz se retiraron. Ahora no se versiona
> ningún runtime ni C++ generado: se clona, se parchea y se genera en local.

## Requisitos

| Herramienta | Versión mínima |
|-------------|----------------|
| CMake       | 3.21+          |
| Ninja       | cualquier      |
| GCC / Clang | C++20 (probado con GCC 13) |
| Python      | 3.10+ (scripts y generador VU1) |
| Librerías   | SDL2/OpenGL/EGL, FFmpeg (avcodec/avformat/avutil/swresample/swscale) y ALSA, versiones de desarrollo |
| RAM         | 32 GB recomendados: el enlazado con LTO se comía >31 GB y colgaba la máquina; el script lo desactiva y limita la memoria (`MEMMAX`, 22G por defecto) |

Linux es la plataforma soportada hoy. **Windows** queda pendiente (TWR-21): `build-windows.ps1` y el CMake raíz
eran del runtime de BT3 y se retiraron; el script nuevo debe seguir `scripts/compilar.ps1` de god-of-war-recomp.

---

## Build (Linux)

```bash
git clone git@github.com:MateoEscobar/TW-Recomp.git && cd TW-Recomp

# 1. Aportar el ISO (BYOD): ELF + árbol del disco (~4 GB) + .disc_layout/.disc_meta
python3 scripts/extract_iso.py "/ruta/al/Warriors, The (USA).iso" --all
# → games/warriors/SLUS_212.15, WARRIORS.DIR/.WAD, IOP/, MODULES/, PSS/, .disc_layout (ignorados por git)
# Tras esto el ISO ya no se necesita para jugar.

# 2. Compilar (tarda; usa tope de memoria)
scripts/build-linux.sh              # todo
scripts/build-linux.sh --runner     # solo recompila ps2EntryRunner (overrides/runner ya copiados)

# Binario: build/ps2recomp/ps2xRuntime/ps2EntryRunner
```

`scripts/build-linux.sh` hace, en orden:

1. Clona **PS2Recomp** en `PS2RECOMP_COMMIT` (`./PS2Recomp`, ignorado por git).
2. Aplica `patches/series`: primero los `ps2recomp-*` (copiados tal cual de god-of-war-recomp, sincronizables) y
   después los `twr-*` (propios de Warriors, uno por tema).
3. Configura con CMake; compila el recompilador, genera el C++ de `SLUS_212.15` con `games/warriors/warriors.toml`
   y lo copia a `PS2Recomp/ps2xRuntime/src/runner/`.
4. **Guardias**: `tools/check_function_bounds.py`, `check_libm_stubs.py`, `check_override_addresses.py`.
5. Copia `src/*.cpp` (overrides de Warriors) al runner y compila `ps2EntryRunner` (sin LTO; `register_functions.cpp`
   a `-O0` y fuera del unity build).

Variables: `PS2RECOMP_URL` (clon local, evita bajarlo), `PS2RECOMP_DEPS` (`_deps` ya bajados), `JOBS` (20),
`MEMMAX` (22G), `TWR_VU1N=1` (backend VU1 "lean", opt-in — ver [`vu1-nativa.md`](vu1-nativa.md)).

### Rendimiento: microcódigo de VU1

El rendimiento de la pelea depende de que el build tenga las micromemorias de VU1 del juego
(`games/warriors/vu1_micro/*.bin`, datos del juego: ignoradas por git). Sin ellas la VU1 corre por el camino
lento (~10 imágenes/s); con las 39 capturadas en la pelea, ~47. Cómo capturarlas y por qué el backend "lean"
queda apagado: [`vu1-nativa.md`](vu1-nativa.md).

### GPU en Linux

El GS usa OpenGL por EGL. Con varias GPU (Intel + NVIDIA) EGL elige Mesa/Intel por defecto; para la NVIDIA hace
falta `libnvidia-gl-<versión>` y `__EGL_VENDOR_LIBRARY_FILENAMES=/usr/share/glvnd/egl_vendor.d/10_nvidia.json`.
En esta base la GPU no es el cuello de botella (Intel y RTX dan lo mismo).

---

## CI (`.github/workflows/build.yml`)

La CI no tiene el juego. Comprueba lo que no lo necesita:

- **guardias**: `check_override_addresses.py` (usa `games/warriors/function_starts.txt`, versionado),
  `check_libm_stubs.py`, sintaxis de scripts.
- **runtime**: clona PS2Recomp en el commit fijado, aplica la serie de parches (si uno no aplica, falla), compila
  `ps2x_tests` y las pruebas del IOP, compila `src/` contra las cabeceras parcheadas y ejecuta ctest del IOP
  (4 ejecutables) y la suite del runtime (463 pruebas).

`check_function_bounds.py` necesita el runner generado, por eso corre en `build-linux.sh`, no en la CI.
Regenerar `function_starts.txt` tras cambiar el recompilador:
`python3 tools/check_override_addresses.py --write-starts PS2Recomp/ps2xRuntime/src/runner`.

### Reproducir la CI en local

```bash
S=$(mktemp -d) && git init -q $S/PS2Recomp && cd $S/PS2Recomp
git fetch -q --depth 1 https://github.com/ran-j/PS2Recomp.git <PS2RECOMP_COMMIT> && git checkout -q FETCH_HEAD
while read -r p; do [[ -z $p || $p == \#* ]] || git apply --ignore-whitespace <repo>/patches/$p; done < <repo>/patches/series
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DPS2X_BUILD_STUDIO=OFF -DPS2X_IOP_BUILD_TESTS=ON \
  -DCMAKE_C_FLAGS=-march=x86-64-v2 -DCMAKE_CXX_FLAGS=-march=x86-64-v2
ninja -C build ps2x_tests ps2_iop_emulator_tests ps2_iop_import_tests ps2_iop_compatibility_tests ps2_iop_import_version_tests
ctest --test-dir build/ps2xIOP --output-on-failure && ./build/ps2xTest/ps2x_tests
```

> Si añades o cambias código en el árbol `PS2Recomp/` de trabajo, **regenera el parche correspondiente**: una
> compilación local puede funcionar con cambios que `patches/` no reproduce (pasó en TWR-27: faltaba un hunk de
> `iop_native.h` en `twr-iop-rpc-hilo-servidor.patch` y un clon limpio no compilaba). Comprueba con
> `diff -rq` entre tu árbol y un clon limpio parcheado (las únicas diferencias esperadas son `mc0/mc1` y las dos
> ediciones que `build-linux.sh` hace a `ps2xRuntime/CMakeLists.txt` y `cmake/ReleaseMode.cmake`).

---

## IOP emulado (ps2xIOP)

El IOP emulado viene de PS2Recomp (`ps2xIOP/`) más los parches `ps2recomp-iop-*` y `twr-iop-*`. Arquitectura,
rutas de módulos y variables de entorno en [`iop.md`](iop.md). Sus pruebas se compilan con
`-DPS2X_IOP_BUILD_TESTS=ON` (ver "Reproducir la CI").

---

## Recompilación (histórico TWR-12, base BT3)

| Métrica | Valor |
|---------|-------|
| ELF analizado | SLUS_212.15 (NTSC 1.03, 5.2 MB) |
| Funciones recompiladas (base actual) | 16.284 inicios de función (`games/warriors/function_starts.txt`) |
| Fallbacks indirectos (JR/JALR) | ~8.600 funciones: `lookupFunction(addr)` hace dispatch dinámico |

`games/warriors/warriors.toml`: `input` = ELF del juego (BYOD), `output` = carpeta de generación
(`build-linux.sh` la sustituye por `build/gen/`), `single_file_output: false` (un `.cpp` por función),
`stubs` = funciones SDK identificadas en TWR-11. Las funciones de RenderWare y del SDK de sonido (MultiStream, no
Miles — TWR-28) están stripped del ELF y se recompilan como funciones normales del juego.
