#!/usr/bin/env python3
"""[TWR-27] Guard: the game's libm must be recompiled, never replaced by a runtime stub.

The Warriors' exp/log/log10/pow/fabs are soft-float double routines ($a0/$a1 in, $v0/$v1 out); the
runtime handlers with those names are float ($f12 in, $f0 out), so a stub returns garbage (same
defect god-of-war-recomp documents in docs/COMPARACION_PCSX2.md for sin/fabs/floor). The float
kernels are recompiled too, to keep the EE FPU rounding.

Reads games/warriors/warriors.toml and fails if any of these names is in the `stubs` list.

Usage: python3 tools/check_libm_stubs.py [repo_root]
Exit code 0 = clean, 1 = libm stubbed, 2 = toml missing.
"""
import os
import re
import sys

LIBM = {
    "exp", "log", "log10", "pow", "fabs", "sqrt", "sin", "cos", "tan", "atan", "atan2", "floor", "ceil",
    "__kernel_sinf", "__kernel_cosf", "__kernel_tanf", "__ieee754_powf", "__ieee754_expf",
}


def main() -> int:
    root = sys.argv[1] if len(sys.argv) > 1 else os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    path = os.path.join(root, "games", "warriors", "warriors.toml")
    if not os.path.isfile(path):
        print(f"[check_libm_stubs] toml not found: {path}")
        return 2
    text = open(path, encoding="utf-8").read()
    match = re.search(r"^stubs\s*=\s*\[(.*?)^\]", text, re.S | re.M)
    if not match:
        print("[check_libm_stubs] OK: no stubs list")
        return 0
    bad = []
    for name in re.findall(r'"([^"@]+)@0x[0-9A-Fa-f]+"', match.group(1)):
        if name in LIBM or name.startswith("__kernel_") or name.startswith("__ieee754_"):
            bad.append(name)
    if bad:
        print("[check_libm_stubs] libm replaced by runtime stubs (recompile them instead): " + ", ".join(bad))
        return 1
    print("[check_libm_stubs] OK")
    return 0


if __name__ == "__main__":
    sys.exit(main())
