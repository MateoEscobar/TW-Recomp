# Input System — DualShock 2 via SDL2

## Overview

The Warriors uses a proprietary DBC (Direct Bus Controller) subsystem instead of
the standard PS2 `libpad`. The game never calls `scePadRead`; instead it calls six
DBC-specific functions whose addresses were resolved from the ELF (SLUS-21215):

| Function | Address | Purpose |
|---|---|---|
| `warriorsPadConnect` | `0x00295160` | Declares controller present |
| `warriorsPadStatus` | `0x00296160` | Returns ready status (1) |
| `warriorsPadCreateSocket` | `0x00295e58` | Maps player index to socket |
| `warriorsPadRead` | `0x00296090` | Reads current pad state |
| `warriorsPadGetState` | `0x00295fb8` | Reads pad state (alternate entry) |
| `warriorsPadSendRumble` | `0x00122f10` | Sends haptic to the DualShock motors |

All six are replaced at runtime via `runtime.replaceFunction()` inside
`game_overrides.cpp`. The replacement functions build a 6-byte PS2 pad packet
(active-low buttons + rx/ry/lx/ly bytes) by calling `ps2_stubs::ps2xLivePadButtons`.

## Architecture

```
game_overrides.cpp          pad_config.cpp           ps2_host_pad.cpp
warriorsPadRead/GetState ──► writeNeutralPadPacket ──► PadConfig::poll(player)
                                                         │
                                                         ├─ SDL2 GameController (primary)
                                                         └─ raylib keyboard (fallback)
```

### Socket → Player routing

`warriorsPadCreateSocket` reads the player index from the IOP descriptor byte
(`a0 + 4`) and returns it as the socket number. Both `warriorsPadRead` and
`warriorsPadGetState` pass `a0` (socket) as the player index into
`writeNeutralPadPacket` → `PadConfig::poll(player)`.

Result: socket 0 → player 0, socket 1 → player 1. No per-player state is shared.

## Button Mapping

### Gamepad (SDL2 GameController — default)

| PS2 Button | SDL2 Mapping |
|---|---|
| Cross (×) | `GAMEPAD_BUTTON_RIGHT_FACE_DOWN` |
| Circle (○) | `GAMEPAD_BUTTON_RIGHT_FACE_RIGHT` |
| Square (□) | `GAMEPAD_BUTTON_RIGHT_FACE_LEFT` |
| Triangle (△) | `GAMEPAD_BUTTON_RIGHT_FACE_UP` |
| D-Up | `GAMEPAD_BUTTON_LEFT_FACE_UP` |
| D-Down | `GAMEPAD_BUTTON_LEFT_FACE_DOWN` |
| D-Left | `GAMEPAD_BUTTON_LEFT_FACE_LEFT` |
| D-Right | `GAMEPAD_BUTTON_LEFT_FACE_RIGHT` |
| L1 | `GAMEPAD_BUTTON_LEFT_TRIGGER_1` |
| R1 | `GAMEPAD_BUTTON_RIGHT_TRIGGER_1` |
| L2 | `GAMEPAD_BUTTON_LEFT_TRIGGER_2` |
| R2 | `GAMEPAD_BUTTON_RIGHT_TRIGGER_2` |
| L3 | `GAMEPAD_BUTTON_LEFT_THUMB` |
| R3 | `GAMEPAD_BUTTON_RIGHT_THUMB` |
| SELECT | `GAMEPAD_BUTTON_MIDDLE_LEFT` |
| START | `GAMEPAD_BUTTON_MIDDLE_RIGHT` |
| L-Stick X | `GAMEPAD_AXIS_LEFT_X` |
| L-Stick Y | `GAMEPAD_AXIS_LEFT_Y` |
| R-Stick X | `GAMEPAD_AXIS_RIGHT_X` |
| R-Stick Y | `GAMEPAD_AXIS_RIGHT_Y` |

### Keyboard (default fallback)

| PS2 Button | Key |
|---|---|
| Cross (×) | `X` |
| Circle (○) | `C` |
| Square (□) | `Z` |
| Triangle (△) | `V` |
| D-Up | `↑` |
| D-Down | `↓` |
| D-Left | `←` |
| D-Right | `→` |
| L1 | `Q` |
| R1 | `E` |
| L2 | `1` |
| R2 | `3` |
| L3 | `Left Ctrl` |
| R3 | `Right Ctrl` |
| SELECT | `Right Shift` |
| START | `Enter` |
| L-Stick Left | `A` |
| L-Stick Right | `D` |
| L-Stick Up | `W` |
| L-Stick Down | `S` |

> **Note:** mouse input is out of scope — The Warriors is exclusively pad/keyboard.

## Co-op Local (2 Players)

With ≥ 2 SDL2 gamepads connected:
- Player 0 → `gamepad[0]`
- Player 1 → `gamepad[1]`

With exactly 1 gamepad:
- Player 0 → `gamepad[0]`
- Player 1 → keyboard

With no gamepad:
- Both players → keyboard (same keys; useful for single-player testing without a pad)

Set `PS2X_NOKB=1` to disable keyboard input entirely (workaround for controllers
that expose themselves as HID keyboards and spam cross/confirm on cutscenes).

## Rumble / Haptic

`warriorsPadSendRumble` (`0x00122f10`) intercepts the game's per-frame DualShock
poll. The game accumulates motor values at `rec+0x160` (big motor, float) and
`rec+0x164` (small motor, uint32) in the fighter record at `0x333800 + player*0x1C0`.

The host side maps these to `SDL_GameControllerRumble`:
- Big motor (0) — impact strength (float 0–1, scaled to uint16)
- Small motor (1) — micro-impacts (on/off)

Rumble is gated by the game's own Vibration option (fighter+`0x15D0`). It can also
be overridden with env vars:

| Variable | Values | Effect |
|---|---|---|
| `PS2X_RUMBLE` | `0` / `1` | Force rumble off / on |
| `PS2X_RUMBLE_SCALE` | float | Scale both motor strengths (default 1.0) |
| `PS2X_RUMBLE_LOG` | `1` | Print rumble requests to stderr |
| `PS2X_RUMBLE_FORCE` | `1` | Force the game's vibration flag on (test without memory card) |

## Configuration (settings.toml)

The `[controllers]` section is written to `settings.toml` in the ELF directory:

```toml
[controllers]
deadzone = 0.15         # stick deadzone radius (0.0 – 0.5)
rumble = true           # enable/disable haptic
rumble_strength = 100   # 0 – 200 (percentage of full motor strength)
```

Per-player button bindings are stored separately in `savedata/pad_p1.conf` and
`savedata/pad_p2.conf`. Legacy single-player `savedata/pad.conf` is migrated
automatically on first load.

## Rebind UI

Press **F1** in-game to open the settings overlay → **Controllers** tab.

- **Device dropdown** — select gamepad index (0/1/…) or Auto
- **Button Bindings…** button — opens the bindings table modal
  - Each `PadAction` row shows the current binding
  - Click **Bind** → "Press key / button / stick…"
  - Press any key, gamepad button, or move a stick axis to capture the new binding
  - Changes persist immediately to `savedata/pad_pN.conf`

## Debug / Diagnostics

| Variable | Effect |
|---|---|
| `PS2X_PADLOG=1` | Log SDL2 pad connect/disconnect and axis values to stdout |
| `PS2X_PADPROBE=1` | Dump a one-shot axis/button snapshot at frame 60 |
| `PS2X_PAD=<n>` | Force a specific SDL2 gamepad index |
| `PS2X_PAD_ALLDEV=1` | Expose all SDL2 joystick slots (including non-gamepad HID) |
| `PS2X_PAD_MAPPINGS=<file>` | Load extra SDL2 controller DB mappings from a file |
| `PS2X_NOKB=1` | Disable keyboard input for pad actions |

## Source Files

| File | Role |
|---|---|
| `ps2xRuntime/src/lib/game_overrides.cpp` | DBC intercepts: `warriorsPad*` + `writeNeutralPadPacket` |
| `ps2xRuntime/src/lib/pad_config.cpp` | `PadConfig`, `PadAction`, `PadBind`, `pollLegacyAuto`, save/load |
| `ps2xRuntime/src/lib/ps2_host_pad.cpp` | SDL2 GameController backend, rumble, hotplug |
| `ps2xRuntime/src/lib/ps2_settings_overlay.cpp` | `drawControllersTab`, `drawBindingsTable`, `drawBindingsPopup` |
| `ps2xRuntime/src/lib/pad_evdev_linux.cpp` | Linux evdev fallback for pads outside the SDL2 DB |
