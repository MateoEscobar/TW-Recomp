#!/usr/bin/env python3
"""[TWR-27] Guard: no recompiled function may end on a jump whose delay slot lies outside it.

A MIPS jump/branch executes the next instruction (its delay slot) before transferring. If the
analyzer opens a new function at that delay slot, the owner loses the delay instruction and the
return address after a JAL has no entry, so the dispatcher loops on
"No exact recompiled function for guest PC ...". The Warriors hit it at 0x1EF000 (delay slot of the
JAL at 0x1EEFFC) when loading a fight; the analyzer took a `lui/ori` numeric constant for a callback.
Fixed in the recompiler fork (elf_parser.cpp, IsDelaySlotOfControlTransfer); this guard keeps a
regenerated runner from bringing the defect back.

Scans the generated runner (PS2Recomp/ps2xRuntime/src/runner/sub_*.cpp, or --runner <dir>): reads the `// Address: start - end` header and the
`// 0x<addr>: <word>  <mnemonic>` comments, and fails if the last jump/branch of a function has
its delay slot at or beyond `end`.

The runner is generated from the game ELF (scripts/build-linux.sh), so this guard runs there and not in CI.

Usage: python3 tools/check_function_bounds.py [--runner <dir>] [repo_root]
Exit code 0 = clean, 1 = boundary inside a delay slot, 2 = runner missing.
"""
import glob
import os
import re
import sys

ADDRESS_RE = re.compile(r"^// Address: (0x[0-9a-f]+) - (0x[0-9a-f]+)")
INSN_RE = re.compile(r"^\s*// (0x[0-9a-f]+): 0x[0-9a-f]+\s+(\S+)")
JUMPS = {
    "j", "jal", "jr", "jalr", "b", "bal",
    "beq", "bne", "blez", "bgtz", "bltz", "bgez", "bltzal", "bgezal",
    "beql", "bnel", "blezl", "bgtzl", "bltzl", "bgezl", "bltzall", "bgezall",
    "beqz", "bnez", "beqzl", "bnezl",
    "bc0f", "bc0t", "bc0fl", "bc0tl", "bc1f", "bc1t", "bc1fl", "bc1tl",
}


def main() -> int:
    argv = sys.argv[1:]
    runner = None
    if "--runner" in argv:
        index = argv.index("--runner")
        runner = argv[index + 1]
        del argv[index:index + 2]
    root = argv[0] if argv else os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    if runner is None:
        runner = os.path.join(root, "PS2Recomp", "ps2xRuntime", "src", "runner")
    files = sorted(glob.glob(os.path.join(runner, "sub_*.cpp")))
    if not files:
        print(f"[check_function_bounds] runner not found or empty: {runner}")
        return 2

    bad = []
    for path in files:
        end = None
        last_jump = None
        with open(path, encoding="utf-8", errors="replace") as handle:
            for line in handle:
                match = ADDRESS_RE.match(line)
                if match:
                    end = int(match.group(2), 16)
                    continue
                match = INSN_RE.match(line)
                if match and match.group(2) in JUMPS:
                    addr = int(match.group(1), 16)
                    if last_jump is None or addr > last_jump[0]:
                        last_jump = (addr, match.group(2))
        if end is not None and last_jump is not None and last_jump[0] + 4 >= end:
            bad.append((os.path.basename(path), last_jump[0], last_jump[1], end))

    for name, addr, mnemonic, end in bad:
        print(f"[check_function_bounds] {name}: {mnemonic} at 0x{addr:x} has its delay slot 0x{addr + 4:x} "
              f"outside the function (end 0x{end:x})")
    print(f"[check_function_bounds] {len(files)} functions; {len(bad)} boundary(ies) inside a delay slot")
    if bad:
        return 1
    print("[check_function_bounds] OK")
    return 0


if __name__ == "__main__":
    sys.exit(main())
