# Save System — Memory Card PS2 Emulation

## Overview

The Warriors uses the standard PS2 Memory Card API (`libmc` / `sceMcXxx`). TW-Recomp
implements a full HLE (High-Level Emulation) of this API: every `sceMcXxx` call is
intercepted and mapped to ordinary host file I/O instead of a real Memory Card.

The save directory is created automatically on first launch. No setup required.

## Save File Location

| Platform | Path |
|---|---|
| Windows | `%APPDATA%\TW-Recomp\saves\` |
| Linux | `$XDG_DATA_HOME/TW-Recomp/saves/` (falls back to `~/.local/share/TW-Recomp/saves/`) |

The env var `PS2X_MC_ROOT` overrides the path (useful for portable installs or CI):

```bash
# Linux example — store saves beside the binary
PS2X_MC_ROOT=/path/to/portable/saves ./tw-recomp
```

## Directory Structure

The game creates one subdirectory per save slot:

```
saves/
└── WARRIORS-00/          ← save slot directory (created by sceMcMkdir)
    ├── WARRIORS.ico       ← PS2 memory card icon (written by the game)
    └── WARRIORS.bin       ← save data (raw PS2 binary format)
```

Actual directory and file names depend on what the game requests via `sceMcOpen`.
Port 0 (mc0) maps to `saves/`. Port 1 (mc1) maps to `saves_slot1/` in the same
parent directory (Warriors only uses port 0).

## Importing a Real PS2 Save

A save extracted from a physical PS2 Memory Card with tools such as **mymc-plus**
or **ps2-save-builder** can be placed directly in the save directory:

```bash
# Extract a .psu save from a real card (mymc-plus):
mymc export WARRIORS-00.psu

# Place the extracted directory in the save folder:
cp -r WARRIORS-00 ~/.local/share/TW-Recomp/saves/
```

The raw save data (`WARRIORS.bin`) is identical between the real card and the
host file — no conversion needed.

## Implemented sceMcXxx API

All functions used by The Warriors are fully implemented:

| Function | Status | Notes |
|---|---|---|
| `sceMcInit` | ✅ | Creates save directory, resets state |
| `sceMcOpen` | ✅ | Maps PS2 path to host file |
| `sceMcRead` | ✅ | `fread` from mapped file |
| `sceMcWrite` | ✅ | `fwrite` + immediate `fflush` |
| `sceMcClose` | ✅ | `fclose` + fd release |
| `sceMcSeek` | ✅ | `fseek` / `ftell` |
| `sceMcFlush` | ✅ | `fflush` |
| `sceMcGetInfo` | ✅ | Reports PS2-type card, formatted, 0x2000 free clusters |
| `sceMcSync` | ✅ | Returns last command + result (immediate model) |
| `sceMcGetDir` | ✅ | Directory listing with wildcard support |
| `sceMcMkdir` | ✅ | `create_directory` |
| `sceMcDelete` | ✅ | `remove` |
| `sceMcChdir` | ✅ | Updates current directory per port |
| `sceMcFormat` | ✅ | Wipes save directory, marks formatted |
| `sceMcRename` | ✅ | `rename` |
| `sceMcSetFileInfo` | ✅ | No-op (attributes not applicable on host) |

## Debug Tracing

Set `PS2X_MCLOG=1` to trace every Memory Card call to stderr:

```bash
PS2X_MCLOG=1 ./tw-recomp 2>mc.log
```

Increase the log cap with `PS2X_MCLOGMAX=N` (default 4000 entries; 0 = unlimited).

## State Serialization (Netplay / Savestates)

The Memory Card HLE state (open file descriptors, port state, last command/result)
is fully serializable for savestates and netplay via:

- `ps2xMcStateCapture()` / `ps2xMcStateRestore()` — in-memory snapshot
- `ps2xMcStateSerialize()` / `ps2xMcStateDeserialize()` — binary format tag `MCA1`

These are called automatically by the savestate and netplay subsystems; no manual
intervention is needed.
