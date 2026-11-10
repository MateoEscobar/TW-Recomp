#!/usr/bin/env python3
"""[TWR-27] Guard: every guest address the port hooks or runs must be a Warriors function start.

Base GoW (decisión 23): el código propio del port es `src/*.cpp` y los parches `patches/twr-*.patch`. Se
escanean las direcciones de guest literales pasadas a replaceFunction / bindAddressHandler / lookupFunction /
hasFunction, asignadas a un pc de contexto (`.pc = 0x...`) o a WakeThreadByEntry, y falla si alguna no es el
inicio de una función recompilada de SLUS_212.15. Así no se cuelan direcciones de otros juegos (BT3-Recomp,
God of War): TWR-13/16/17/18 y los pumps de BT3 retirados en TWR-27. Ver products/twr/project-context.md,
"Direcciones enganchadas".

Los inicios de función salen, por orden de preferencia, de:
  1. un runner generado (argumento --runner <dir>, o PS2Recomp/ps2xRuntime/src/runner si existe): ficheros
     `*_0x<addr>.cpp`, uno por función;
  2. `games/warriors/function_starts.txt` (versionado; es lo que usa la CI, que no tiene el ELF).

Uso:
  python3 tools/check_override_addresses.py [--root <repo>] [--runner <dir>]
  python3 tools/check_override_addresses.py --write-starts <runner_dir>   # regenera function_starts.txt
Código de salida: 0 = limpio, 1 = dirección sin verificar, 2 = no hay lista de funciones.
"""
import argparse
import os
import re
import sys

# Lista de excepciones explícita (dirección -> motivo). Debe seguir vacía salvo aprobación del dev.
ALLOWLIST = {}

PATTERNS = [
    re.compile(r"\b(?:replaceFunction|bindAddressHandler|lookupFunction|hasFunction|lookupGeneratedFunction)\s*\(\s*(?:[A-Za-z_][\w.\->]*\s*,\s*)?(0x[0-9A-Fa-f]+)[uUlL]*\s*[,)]"),
    re.compile(r"\.pc\s*=\s*(0x[0-9A-Fa-f]{5,8})[uU]?\s*;"),
    re.compile(r"\bWakeThreadByEntry\s*\(\s*(0x[0-9A-Fa-f]+)"),
]
SOURCE_EXT = (".cpp", ".cc", ".c", ".h", ".hpp")
RUNNER_RE = re.compile(r"_0x([0-9a-f]+)\.cpp$")
STARTS_FILE = os.path.join("games", "warriors", "function_starts.txt")


def starts_from_runner(runner):
    return {int(m.group(1), 16) for name in os.listdir(runner) for m in [RUNNER_RE.search(name)] if m}


def starts_from_file(path):
    out = set()
    with open(path, encoding="utf-8") as handle:
        for line in handle:
            line = line.strip()
            if line and not line.startswith("#"):
                out.add(int(line, 16))
    return out


def scan_lines(root):
    """(ruta relativa, nº de línea, texto) de src/*.cpp y de las líneas añadidas por patches/twr-*.patch."""
    src = os.path.join(root, "src")
    if os.path.isdir(src):
        for dirpath, _dirs, files in os.walk(src):
            for fn in sorted(files):
                if fn.endswith(SOURCE_EXT):
                    path = os.path.join(dirpath, fn)
                    with open(path, encoding="utf-8", errors="replace") as handle:
                        for lineno, line in enumerate(handle, 1):
                            yield os.path.relpath(path, root), lineno, line
    patches = os.path.join(root, "patches")
    if os.path.isdir(patches):
        for fn in sorted(os.listdir(patches)):
            if fn.startswith("twr-") and fn.endswith(".patch"):
                path = os.path.join(patches, fn)
                with open(path, encoding="utf-8", errors="replace") as handle:
                    for lineno, line in enumerate(handle, 1):
                        if line.startswith("+") and not line.startswith("+++"):
                            yield os.path.relpath(path, root), lineno, line[1:]


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--root", default=os.path.join(os.path.dirname(os.path.abspath(__file__)), ".."))
    parser.add_argument("--runner", help="carpeta del runner generado (por defecto PS2Recomp/ps2xRuntime/src/runner si existe)")
    parser.add_argument("--write-starts", metavar="RUNNER_DIR", help="escribe games/warriors/function_starts.txt desde un runner")
    args = parser.parse_args()
    root = os.path.abspath(args.root)

    if args.write_starts:
        starts = sorted(starts_from_runner(args.write_starts))
        if not starts:
            print(f"[check_override_addresses] sin funciones en {args.write_starts}")
            return 2
        target = os.path.join(root, STARTS_FILE)
        with open(target, encoding="utf-8") as handle:
            header = [line for line in handle if line.startswith("#")]
        with open(target, "w", encoding="utf-8", newline="\n") as handle:
            handle.writelines(header)
            handle.writelines(f"{a:08x}\n" for a in starts)
        print(f"[check_override_addresses] {len(starts)} inicios de función escritos en {STARTS_FILE}")
        return 0

    runner = args.runner or os.path.join(root, "PS2Recomp", "ps2xRuntime", "src", "runner")
    starts_path = os.path.join(root, STARTS_FILE)
    if os.path.isdir(runner) and starts_from_runner(runner):
        starts, origin = starts_from_runner(runner), runner
    elif os.path.isfile(starts_path):
        starts, origin = starts_from_file(starts_path), STARTS_FILE
    else:
        print(f"[check_override_addresses] ni runner ({runner}) ni {STARTS_FILE}")
        return 2

    bad, checked = [], 0
    for path, lineno, line in scan_lines(root):
        code = line.split("//", 1)[0]
        for pat in PATTERNS:
            for m in pat.finditer(code):
                addr = int(m.group(1), 16)
                if addr == 0:
                    continue
                checked += 1
                if addr in starts or addr in ALLOWLIST:
                    continue
                bad.append((path, lineno, addr, line.strip()))
    print(f"[check_override_addresses] {len(starts)} inicios de función de Warriors ({origin}); "
          f"{checked} dirección(es) literal(es) comprobada(s)")
    for path, lineno, addr, text in bad:
        print(f"{path}:{lineno}: 0x{addr:x} no es inicio de función de SLUS_212.15: {text[:160]}")
    if bad:
        print(f"[check_override_addresses] FAIL: {len(bad)} dirección(es) sin verificar. Engancha solo funciones "
              "verificadas de Warriors; nunca reutilices direcciones de BT3-Recomp ni de God of War.")
        return 1
    print("[check_override_addresses] OK")
    return 0


if __name__ == "__main__":
    sys.exit(main())
