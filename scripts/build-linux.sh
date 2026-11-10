#!/usr/bin/env bash
# scripts/build-linux.sh — compila The Warriors sobre PS2Recomp + la pila de parches de god-of-war-recomp.
#
# [TWR-27 decisión 23] Misma estructura que god-of-war-recomp (scripts/compilar.ps1):
#   1. PS2Recomp upstream en el commit fijado (PS2RECOMP_COMMIT), clonado en ./PS2Recomp (ignorado por git).
#   2. Parches en el orden de patches/series: primero los de god-of-war-recomp (copiados tal cual, ps2recomp-*),
#      después los propios de Warriors (twr-*). Cada parche se genera contra el árbol con los anteriores aplicados.
#   3. Recompilador -> C++ de SLUS_212.15 (games/warriors/warriors.toml) -> PS2Recomp/ps2xRuntime/src/runner.
#      Guardias: tools/check_function_bounds.py, check_libm_stubs.py y check_override_addresses.py.
#   4. ps2EntryRunner sin LTO, con register_functions.cpp a -O0 y fuera del unity build: con LTO el enlazado se come
#      >31 GB de RAM y cuelga la máquina; a -O3 ese archivo tarda >45 min. El build corre con tope de memoria.
#
# Requisitos: git, cmake 3.21+, ninja, gcc/clang, python3, libSDL2/OpenGL/EGL, FFmpeg y ALSA de desarrollo.
#
# Uso:
#   scripts/build-linux.sh              # todo
#   scripts/build-linux.sh --runner     # solo recompila ps2EntryRunner (overrides/runner ya copiados)
# Variables: PS2RECOMP_URL (clon local para no bajarlo de nuevo), PS2RECOMP_DEPS (_deps ya bajados), JOBS (por defecto 20), MEMMAX (22G).

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PS2RECOMP_URL="${PS2RECOMP_URL:-https://github.com/ran-j/PS2Recomp.git}"
PS2RECOMP_COMMIT="c5a9d02573410a2085a4b4b831b0b68ba3515440"
REC="$ROOT/PS2Recomp"
BLD="$ROOT/build/ps2recomp"
GEN="$ROOT/build/gen"
JOBS="${JOBS:-20}"
MEMMAX="${MEMMAX:-22G}"
ONLY_RUNNER=0
[[ "${1:-}" == "--runner" ]] && ONLY_RUNNER=1

step() { printf '\n== %s\n' "$*"; }

limited() {
    # Tope de memoria si systemd de usuario está disponible; si no, solo baja la prioridad.
    if command -v systemd-run >/dev/null 2>&1 && systemd-run --user --scope -q true 2>/dev/null; then
        systemd-run --user --scope -q -p "MemoryMax=$MEMMAX" -p MemorySwapMax=0 nice -n 10 "$@"
    else
        nice -n 10 "$@"
    fi
}

if [[ $ONLY_RUNNER -eq 0 ]]; then
    step "PS2Recomp $PS2RECOMP_COMMIT"
    [[ -d "$REC/.git" ]] || git clone -q "$PS2RECOMP_URL" "$REC"
    git -C "$REC" cat-file -e "$PS2RECOMP_COMMIT^{commit}" 2>/dev/null || git -C "$REC" fetch -q origin "$PS2RECOMP_COMMIT"
    git -C "$REC" checkout -qf "$PS2RECOMP_COMMIT"
    git -C "$REC" clean -fdq
    git -C "$REC" submodule update -q --init --recursive

    step "Parches (patches/series)"
    while IFS= read -r patch; do
        [[ -z "$patch" || "$patch" == \#* ]] && continue
        git -C "$REC" apply --ignore-whitespace "$ROOT/patches/$patch"
        echo "  $patch"
    done < "$ROOT/patches/series"

    # Ajustes de compilación (los mismos que hace god-of-war-recomp en su script, más -O0 en la tabla de funciones).
    cat >> "$REC/ps2xRuntime/CMakeLists.txt" <<'EOF'

# TWR: el código generado incluye <ps2_recompiled_functions.h> desde src/runner
target_include_directories(ps2EntryRunner PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/runner)
# TWR: la tabla de ~590k funciones compila en minutos a -O0 y en >45 min a -O3; no aporta rendimiento.
set_source_files_properties("${CMAKE_CURRENT_SOURCE_DIR}/src/runner/register_functions.cpp" PROPERTIES
    SKIP_UNITY_BUILD_INCLUSION TRUE SKIP_PRECOMPILE_HEADERS TRUE COMPILE_OPTIONS "-O0")
EOF
    sed -i 's/set_property(TARGET ${TargetName} PROPERTY INTERPROCEDURAL_OPTIMIZATION_RELEASE TRUE)/# IPO desactivado (TWR)/' \
        "$REC/ps2xRuntime/cmake/ReleaseMode.cmake"

    step "CMake"
    # PS2RECOMP_DEPS=<build>/_deps de otro árbol: reutiliza las fuentes ya bajadas (FetchContent sin red).
    DEPS_ARGS=()
    if [[ -n "${PS2RECOMP_DEPS:-}" ]]; then
        for src in "$PS2RECOMP_DEPS"/*-src; do
            name="$(basename "$src" -src)"
            DEPS_ARGS+=("-DFETCHCONTENT_SOURCE_DIR_${name^^}=$src")
        done
    fi
    # VU1 nativa (decisión 22): micromemorias capturadas con GOW_VU1_CAPTURA + generadores de tools/vu1.
    # Son datos del juego (games/warriors/vu1_micro, gitignorado); sin ellas el runner usa solo el intérprete.
    VU1_ARGS=()
    if compgen -G "$ROOT/games/warriors/vu1_micro/*.bin" >/dev/null; then
        VU1_ARGS+=("-DPS2X_VU1_MICROCODE_DIR=$ROOT/games/warriors/vu1_micro"
                   "-DPS2X_VU1_GENERATOR_SOURCE=$ROOT/tools/vu1/generar_vu1.cpp")
    # Backend VU1 "nativo lean" (vu1n_gen.py): OPT-IN con TWR_VU1N=1. Con las 39 micromemorias da ~+25 % pero la
    # pelea muestra polígonos gigantes/pantalla negra (4 de 40 capturas, 0 de 40 sin él; GOW_VU1N_VERIFY: 602/2000
    # ejecuciones con MAC final distinto). Sin él, el microcódigo compilado por pares ya da ~40-55 imágenes/s.
    # El CMake de GoW busca vu1n_gen.py en ../../../tools/vu1 (su disposición): hay que indicarlo con el override.
    if [[ "${TWR_VU1N:-0}" == "1" ]]; then
        VU1_ARGS+=("-DPS2X_VU1N_GEN_OVERRIDE=$ROOT/tools/vu1/vu1n_gen.py")
    fi
    fi
    cmake -S "$REC" -B "$BLD" -G Ninja "${DEPS_ARGS[@]}" "${VU1_ARGS[@]}" -DCMAKE_BUILD_TYPE=Release -DCMAKE_INTERPROCEDURAL_OPTIMIZATION=OFF \
        -DCMAKE_C_FLAGS=-march=x86-64-v2 -DCMAKE_CXX_FLAGS=-march=x86-64-v2 \
        -DPS2X_ENABLE_RUNNER_UNITY_BUILD=ON -DPS2X_ENABLE_RUNNER_PCH=ON >/dev/null

    step "Recompilador"
    limited ninja -C "$BLD" -j "$JOBS" ps2_recomp

    step "C++ de SLUS_212.15"
    [[ -f "$ROOT/games/warriors/SLUS_212.15" ]] || { echo "Falta games/warriors/SLUS_212.15 (scripts/extract_iso.py)" >&2; exit 1; }
    rm -rf "$GEN" && mkdir -p "$GEN"
    sed -e "s#^input = .*#input = \"$ROOT/games/warriors/SLUS_212.15\"#" \
        -e "s#^output = .*#output = \"$GEN/\"#" \
        "$ROOT/games/warriors/warriors.toml" > "$BLD/warriors.toml"
    "$(find "$BLD" -type f -name ps2_recomp -perm -u+x | head -1)" "$BLD/warriors.toml" | tail -3
    echo "  $(find "$GEN" -type f | wc -l) archivos"

    step "Runner"
    RUNNER="$REC/ps2xRuntime/src/runner"
    find "$RUNNER" -maxdepth 1 -type f -delete
    cp "$GEN"/* "$RUNNER"/

    # Guardias (ADR TWR-27 D3/D4): necesitan el runner generado, por eso corren aquí y no en la CI (sin ELF).
    step "Guardias"
    python3 "$ROOT/tools/check_function_bounds.py" --runner "$RUNNER"
    python3 "$ROOT/tools/check_libm_stubs.py"
fi
# Esta sí corre siempre: src/*.cpp puede haber cambiado aunque solo se recompile el runner (--runner).
python3 "$ROOT/tools/check_override_addresses.py" --runner "$REC/ps2xRuntime/src/runner"

# Código propio de Warriors (overrides y cabeceras): también en --runner.
shopt -s nullglob
for f in "$ROOT"/src/*.cpp "$ROOT"/src/*.h; do cp "$f" "$REC/ps2xRuntime/src/runner/"; done

step "ps2EntryRunner (-j$JOBS, MemoryMax=$MEMMAX)"
limited ninja -C "$BLD" -j "$JOBS" ps2EntryRunner
ls -la "$BLD/ps2xRuntime/ps2EntryRunner"
