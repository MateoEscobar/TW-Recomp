#!/usr/bin/env python3
"""Extract and verify the Warriors PS2 ELF from the game ISO.

Uses Python's stdlib only — no bsdtar, 7z, or other system tools required.

Usage:
    python3 scripts/extract_iso.py <path/to/Warriors.iso>

The ELF is extracted to games/warriors/SLUS_212.15 (git-ignored).
SHA-256 is verified against the known USA 1.03 hash.
"""
from __future__ import annotations

import argparse
import hashlib
import struct
import sys
from pathlib import Path

SECTOR = 2048
ELF_NAME = "SLUS_212.15"
ELF_SHA256 = "1a4e1c3891c930146e39ce340ccb02918cfe917032aafcdbbbe6541f75402369"
REPO_ROOT = Path(__file__).resolve().parent.parent


def _read_dir(f, lba: int, size: int) -> list[tuple[str, bool, int, int]]:
    """Return list of (name, is_dir, lba, size) entries from an ISO9660 directory."""
    f.seek(lba * SECTOR)
    data = f.read(size)
    entries: list[tuple[str, bool, int, int]] = []
    offset = 0
    while offset < len(data):
        dr_len = data[offset]
        if dr_len == 0:
            offset = ((offset // SECTOR) + 1) * SECTOR
            if offset >= len(data):
                break
            continue
        dr = data[offset : offset + dr_len]
        name_len = dr[32]
        name = dr[33 : 33 + name_len].decode("ascii", errors="replace").split(";")[0]
        if name not in (".", ".."):
            is_dir = bool(dr[25] & 2)
            entry_lba = struct.unpack("<I", dr[2:6])[0]
            entry_size = struct.unpack("<I", dr[10:14])[0]
            entries.append((name, is_dir, entry_lba, entry_size))
        offset += dr_len
    return sorted(entries)


def _find_file(f, root_lba: int, root_size: int, target: str) -> tuple[int, int] | None:
    """Locate a file in the root directory; return (lba, size) or None."""
    for name, is_dir, lba, size in _read_dir(f, root_lba, root_size):
        if not is_dir and name.upper() == target.upper():
            return lba, size
    return None


def _sha256(f, lba: int, size: int) -> str:
    h = hashlib.sha256()
    f.seek(lba * SECTOR)
    remaining = size
    while remaining > 0:
        chunk = f.read(min(1 << 20, remaining))
        if not chunk:
            break
        h.update(chunk)
        remaining -= len(chunk)
    return h.hexdigest()


def extract(iso_path: Path, dest: Path) -> None:
    print(f"ISO  : {iso_path}")
    print(f"Dest : {dest}")

    with open(iso_path, "rb") as f:
        f.seek(16 * SECTOR)
        pvd = f.read(SECTOR)
        if pvd[:8] != b"\x01CD001\x01\x00":
            print("ERROR: not a valid ISO9660 image", file=sys.stderr)
            sys.exit(1)

        vol_id = pvd[40:72].decode("ascii", errors="replace").strip()
        print(f"Volume: {vol_id}")

        root_lba = struct.unpack("<I", pvd[158:162])[0]
        root_size = struct.unpack("<I", pvd[166:170])[0]

        result = _find_file(f, root_lba, root_size, ELF_NAME)
        if result is None:
            print(f"ERROR: {ELF_NAME} not found in ISO root directory", file=sys.stderr)
            print("  Is this the correct Warriors USA disc?", file=sys.stderr)
            sys.exit(1)

        elf_lba, elf_size = result
        print(f"\nFound : {ELF_NAME} ({elf_size:,} bytes)")

        print("SHA-256: computing...", end=" ", flush=True)
        actual = _sha256(f, elf_lba, elf_size)
        if actual == ELF_SHA256:
            print(f"OK\n  {actual}")
        else:
            print(f"MISMATCH\n  expected : {ELF_SHA256}\n  got      : {actual}")
            print("WARNING: hash does not match known USA 1.03 ELF.", file=sys.stderr)

        dest.mkdir(parents=True, exist_ok=True)
        out = dest / ELF_NAME
        print(f"\nExtracting to {out} ...", end=" ", flush=True)
        f.seek(elf_lba * SECTOR)
        remaining = elf_size
        with open(out, "wb") as out_f:
            while remaining > 0:
                chunk = f.read(min(1 << 20, remaining))
                if not chunk:
                    break
                out_f.write(chunk)
                remaining -= len(chunk)
        print("done")
        print(f"\n✓ {ELF_NAME} extracted successfully.")
        print(f"  Next step: python3 ps2xAnalyzer/analyze.py games/warriors/{ELF_NAME}")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("iso", help="Path to the Warriors PS2 ISO")
    parser.add_argument("--dest", default=str(REPO_ROOT / "games" / "warriors"),
                        help="Directory to extract the ELF into (default: games/warriors/)")
    args = parser.parse_args()

    iso_path = Path(args.iso).expanduser().resolve()
    if not iso_path.exists():
        print(f"ERROR: ISO not found: {iso_path}", file=sys.stderr)
        sys.exit(1)

    extract(iso_path, Path(args.dest))


if __name__ == "__main__":
    main()
