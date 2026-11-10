#!/usr/bin/env bash
# scripts/run-linux.sh — arranca The Warriors con el runner de la base PS2Recomp + parches (TWR-27).
#
# Uso:  scripts/run-linux.sh [argumentos para el runner]
#
# Hace lo que hay que hacer a mano: ejecutar desde games/warriors (el runtime resuelve cdrom0: contra la carpeta del
# ELF), usar el runner NUEVO (build/ps2recomp/...; el de build/ps2xRuntime/ es del runtime viejo de BT3, lento y con el
# jugador invisible) y elegir la GPU NVIDIA para el GS si está disponible (EGL elige la Intel por defecto).
# Variables: TWR_GPU=intel fuerza la integrada; GOW_FPS=0 oculta el contador de la esquina.
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
RUNNER="$ROOT/build/ps2recomp/ps2xRuntime/ps2EntryRunner"
GAME="$ROOT/games/warriors"

[[ -x "$RUNNER" ]] || { echo "Falta $RUNNER: compila primero con scripts/build-linux.sh" >&2; exit 1; }
[[ -f "$GAME/SLUS_212.15" && -f "$GAME/WARRIORS.WAD" ]] || {
    echo "Falta el juego en $GAME: python3 scripts/extract_iso.py <iso> --all" >&2; exit 1; }

if ! compgen -G "$GAME/vu1_micro/*.bin" >/dev/null; then
    echo "AVISO: no hay micromemorias en games/warriors/vu1_micro/; la pelea irá a ~10 imágenes/s (docs/vu1-nativa.md)." >&2
fi

NVIDIA_EGL=/usr/share/glvnd/egl_vendor.d/10_nvidia.json
if [[ "${TWR_GPU:-nvidia}" != "intel" && -z "${__EGL_VENDOR_LIBRARY_FILENAMES:-}" && -f "$NVIDIA_EGL" ]]; then
    export __EGL_VENDOR_LIBRARY_FILENAMES="$NVIDIA_EGL"
fi

# En portátil, con batería o en perfil "balanced" el rendimiento cae a la mitad.
if command -v powerprofilesctl >/dev/null 2>&1 && [[ "$(powerprofilesctl get 2>/dev/null)" != "performance" ]]; then
    echo "AVISO: perfil de energía '$(powerprofilesctl get)'. Para ir fluido: powerprofilesctl set performance (y con el cargador)." >&2
fi

export GOW_FPS="${GOW_FPS:-1}"
cd "$GAME"
exec "$RUNNER" SLUS_212.15 "$@"
