#!/usr/bin/env bash
# scripts/build-linux.sh
# Compila TW-Recomp para Linux (x64 GCC/Clang + Ninja) y opcionalmente empaqueta
# un tar.gz portable (glibc 2.35, Ubuntu 22.04+).
#
# Requisitos:
#   - CMake 3.21+, Ninja, GCC/Clang, pkg-config
#   - libSDL2-dev, libgl-dev, libavcodec-dev, libavformat-dev, libavutil-dev,
#     libswresample-dev, libswscale-dev, libasound2-dev, xorg-dev
#   - patchelf (solo para --package)
#
# Uso:
#   scripts/build-linux.sh                                         # solo compilar (Release)
#   scripts/build-linux.sh --config Debug                          # compilar en Debug
#   scripts/build-linux.sh --package                               # compilar + empaquetar tar.gz en dist/
#   scripts/build-linux.sh --package --output ~/rel                # idem, directorio personalizado
#   scripts/build-linux.sh --package --skip-build --output <dir>   # solo empaquetar (build ya hecho)

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
CONFIG="Release"
PACKAGE=0
SKIP_BUILD=0
OUTPUT=""

while [[ $# -gt 0 ]]; do
    case "$1" in
        --config)      CONFIG="$2"; shift 2 ;;
        --package)     PACKAGE=1;   shift   ;;
        --skip-build)  SKIP_BUILD=1; shift  ;;
        --output)      OUTPUT="$2"; shift 2 ;;
        *) echo "Opción desconocida: $1" >&2; exit 1 ;;
    esac
done

if [[ $SKIP_BUILD -eq 0 ]]; then
    echo "== Configurando (CMake + Ninja, $CONFIG)..."
    cmake -B "$ROOT/build" -G Ninja "-DCMAKE_BUILD_TYPE=$CONFIG" -DPS2X_ENABLE_SCCACHE=OFF

    echo "== Compilando..."
    cmake --build "$ROOT/build" --parallel
fi

if [[ $PACKAGE -eq 0 ]]; then
    echo "== Build completado. Usa --package para generar el tar.gz portable."
    exit 0
fi

[[ -z "$OUTPUT" ]] && OUTPUT="$ROOT/dist"

STAGING_ROOT="$OUTPUT/TW-Recomp"
STAGING_BIN="$STAGING_ROOT/bin"
STAGING_LIB="$STAGING_ROOT/lib"

echo "== Instalando binarios en $STAGING_BIN..."
cmake --install "$ROOT/build" --prefix "$STAGING_ROOT"

# Renombrar el ejecutable principal al nombre esperado por el usuario final
if [[ -f "$STAGING_BIN/ps2EntryRunner" ]]; then
    mv -f "$STAGING_BIN/ps2EntryRunner" "$STAGING_BIN/TW-Recomp"
fi

echo "== Empaquetando dependencias .so..."
mkdir -p "$STAGING_LIB"

# Libs del sistema que se asumen presentes en cualquier glibc 2.35 (Ubuntu 22.04+)
SYSTEM_LIBS="libm\.so|libc\.so|libpthread\.so|libdl\.so|librt\.so|libstdc\+\+\.so|libgcc_s\.so|ld-linux"

for BINARY in "$STAGING_BIN/TW-Recomp" "$STAGING_BIN/ps2_recomp" "$STAGING_BIN/ps2_analyzer"; do
    [[ -f "$BINARY" ]] || continue
    ldd "$BINARY" 2>/dev/null | grep "=> /" | awk '{print $3}' | while read -r LIB_PATH; do
        LIB_NAME="$(basename "$LIB_PATH")"
        if echo "$LIB_NAME" | grep -qvE "$SYSTEM_LIBS"; then
            [[ -f "$STAGING_LIB/$LIB_NAME" ]] || cp -L "$LIB_PATH" "$STAGING_LIB/$LIB_NAME"
        fi
    done
done

# Ajustar RPATH de los ejecutables para encontrar las libs en ./lib relativo al binario
for BINARY in "$STAGING_BIN/TW-Recomp" "$STAGING_BIN/ps2_recomp" "$STAGING_BIN/ps2_analyzer"; do
    [[ -f "$BINARY" ]] || continue
    patchelf --set-rpath '$ORIGIN/../lib' "$BINARY"
done

# Script de lanzamiento que fuerza LD_LIBRARY_PATH como fallback
cat > "$STAGING_BIN/run.sh" <<'EOF'
#!/usr/bin/env bash
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
export LD_LIBRARY_PATH="$SCRIPT_DIR/../lib:${LD_LIBRARY_PATH:-}"
exec "$SCRIPT_DIR/TW-Recomp" "$@"
EOF
chmod +x "$STAGING_BIN/run.sh"

# Archivos de uso inmediato
cp -f "$ROOT/games/warriors/config.ini.template" "$STAGING_BIN/" 2>/dev/null || true
cp -f "$ROOT/README.md"                          "$STAGING_BIN/" 2>/dev/null || true

VERSION="${GITHUB_REF_NAME:-dev}"
TARBALL_NAME="TW-Recomp-${VERSION}-linux-x64.tar.gz"
TARBALL_PATH="$OUTPUT/$TARBALL_NAME"

echo "== Empaquetando $TARBALL_NAME..."
tar -czf "$TARBALL_PATH" -C "$OUTPUT" TW-Recomp
echo "==> $TARBALL_PATH"
