#!/usr/bin/env python3
"""[TWR-27] Guard: every guest address the runtime hooks or runs must be a Warriors function start.

Scans ps2xRuntime/src/lib/** for literal guest addresses passed to
replaceFunction / bindAddressHandler / lookupFunction / hasFunction, assigned to a context pc
(`.pc = 0x...`) or to WakeThreadByEntry, and fails if one of them has no recompiled function
`ps2xRuntime/src/runner/*_0x<addr>.cpp` (the runner is versioned, one file per function start of
SLUS_212.15). This is how BT3-Recomp addresses entered the port unnoticed (TWR-13/16/17/18 and the
BT3 pumps removed in TWR-27). See products/twr/project-context.md, "Direcciones enganchadas".

Usage: python3 tools/check_override_addresses.py [repo_root]
Exit code 0 = clean, 1 = unverified address found, 2 = runner missing.
"""
import os
import re
import sys

# Explicit allow-list (address -> reason). Must stay empty unless the dev approves an entry.
ALLOWLIST = {}

PATTERNS = [
    re.compile(r"\b(?:replaceFunction|bindAddressHandler|lookupFunction|hasFunction|lookupGeneratedFunction)\s*\(\s*(?:[A-Za-z_][\w.\->]*\s*,\s*)?(0x[0-9A-Fa-f]+)[uUlL]*\s*[,)]"),
    re.compile(r"\.pc\s*=\s*(0x[0-9A-Fa-f]{5,8})[uU]?\s*;"),
    re.compile(r"\bWakeThreadByEntry\s*\(\s*(0x[0-9A-Fa-f]+)"),
]
SOURCE_EXT = (".cpp", ".cc", ".c", ".h", ".hpp")
RUNNER_RE = re.compile(r"_0x([0-9a-f]+)\.cpp$")


def main() -> int:
    root = os.path.abspath(sys.argv[1] if len(sys.argv) > 1 else os.path.join(os.path.dirname(__file__), ".."))
    runner = os.path.join(root, "ps2xRuntime", "src", "runner")
    lib = os.path.join(root, "ps2xRuntime", "src", "lib")
    if not os.path.isdir(runner):
        print(f"[check_override_addresses] runner not found: {runner}")
        return 2
    starts = set()
    for name in os.listdir(runner):
        m = RUNNER_RE.search(name)
        if m:
            starts.add(int(m.group(1), 16))
    bad = []
    checked = 0
    for dirpath, _dirs, files in os.walk(lib):
        for fn in files:
            if not fn.endswith(SOURCE_EXT):
                continue
            path = os.path.join(dirpath, fn)
            with open(path, encoding="utf-8", errors="replace") as f:
                for lineno, line in enumerate(f, 1):
                    code = line.split("//", 1)[0]
                    for pat in PATTERNS:
                        for m in pat.finditer(code):
                            addr = int(m.group(1), 16)
                            if addr == 0:
                                continue
                            checked += 1
                            if addr in starts or addr in ALLOWLIST:
                                continue
                            bad.append((os.path.relpath(path, root), lineno, addr, line.strip()))
    print(f"[check_override_addresses] {len(starts)} Warriors function starts; {checked} literal hook address(es) checked")
    for path, lineno, addr, text in bad:
        print(f"{path}:{lineno}: 0x{addr:x} is not a function start of SLUS_212.15: {text[:160]}")
    if bad:
        print(f"[check_override_addresses] FAIL: {len(bad)} unverified address(es). Hook only verified Warriors functions; "
              "never reuse BT3-Recomp addresses.")
        return 1
    print("[check_override_addresses] OK")
    return 0


if __name__ == "__main__":
    sys.exit(main())
