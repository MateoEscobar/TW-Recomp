<div align="center">
  <h1>TW-Recomp</h1>
  <p><strong>The Warriors — Native PC Port via Static Recompilation</strong></p>
  <p>
    <img src="https://img.shields.io/badge/status-early%20dev-orange" alt="Status">
    <img src="https://img.shields.io/badge/platform-Windows%20%7C%20Linux-blue" alt="Platforms">
    <img src="https://img.shields.io/badge/engine-RenderWare%203.x-lightgrey" alt="Engine">
    <img src="https://img.shields.io/badge/disc-SLUS--21472-green" alt="Disc">
  </p>
</div>

# TW-Recomp — The Warriors on PC

A statically recompiled, native PC port of *The Warriors*
(PS2, USA, SLUS-21472), built on [PS2Recomp](https://github.com/ran-j/PS2Recomp).
The game's MIPS R5900 code is translated to C++ **at build time, from your own disc
image** — this repository contains no game code, assets, or media.

> This is not an emulator: the game's executable is recompiled into a native,
> portable binary with an OpenGL renderer. Ships with its own front-end
> (ImGui on SDL2, gamepad support) for Windows and Linux.

*The Warriors* (2005) is a beat 'em up / action game developed by Rockstar Leeds
and published by Rockstar Games, based on the 1979 cult classic film. It runs on
the **RenderWare 3.x** engine — the same engine used by GTA III, Vice City, and
San Andreas on PS2 — and uses **Miles Sound System** for audio.

## Screenshots

<!-- Drop PNGs into docs/screenshots/ and uncomment:
![Front-end](docs/screenshots/launcher.png)
![Gameplay](docs/screenshots/gameplay.png)
![Install wizard](docs/screenshots/wizard.png)
-->

_Screenshots coming once the renderer is functional._

## Contents

- [For players](#for-players) — requirements, download & run
- [For developers](#for-developers) — build from source, project structure & docs
- [Features](#features) — widescreen, resolution, mods
- [Status & known issues](#status--known-issues)
- [Repository layout](#repository-layout)
- [Credits & license](#credits--license)

---

## For players

> **Note:** The project is in early development. There is no playable release yet.
> This section will be updated when the first alpha build is available.

### Requirements (target)

|  | **Minimum** | **Recommended** |
|---|---|---|
| **OS** | Windows 10 64-bit · Linux | Windows 10/11 64-bit · Linux |
| **CPU (AMD)** | Ryzen 3 3200G | Ryzen 5 3600 |
| **CPU (Intel)** | Core i3-8100 | Core i5-10400 |
| **RAM** | 8 GB | 16 GB |
| **GPU (AMD)** | Radeon Vega 8 (iGPU) | Radeon RX 570 4 GB |
| **GPU (NVIDIA)** | GeForce GT 1030 (or Intel UHD 630) | GeForce GTX 1650 4 GB |
| **Graphics API** | OpenGL 3.3 | OpenGL 4.x |
| **Storage** | ~3 GB | ~4 GB |
| **Target** | 30 fps @ 1x | 60 fps @ 2x–3x |

- x86-64 CPU with **SSE4.1**.
- **Your own The Warriors USA disc dump (SLUS-21472).** Other regions are
  not supported at this stage. The front-end's install wizard extracts game
  files from your ISO on first run; no game data is distributed.

---

## For developers

### Engine notes

The Warriors uses **RenderWare 3.x** (Criterion Software), the same engine that
powers GTA III, Vice City, and San Andreas on PS2. The re3/reVC decompilation
projects are the primary reference for RenderWare internals on PS2:

- [re3](https://github.com/halpz/re3) — GTA III (PS2, RenderWare 3.4)
- [reVC](https://github.com/halpz/re3) — Vice City (PS2, RenderWare 3.5)

Audio is handled by **Miles Sound System** (Rad Game Tools), which requires its
own stub/implementation layer separate from the PS2 BIOS audio stubs.

### Build requirements

- Linux or Windows, x86-64 with SSE4.1
- ~16 GB RAM and ~10 GB free disk for the recompilation step
- CMake >= 3.21, Ninja, Python 3 (>= 3.10), Git

**Linux**:
```sh
# Debian / Ubuntu
sudo apt install build-essential cmake git python3 rsync libarchive-tools \
    pkg-config libavcodec-dev libavformat-dev libavutil-dev \
    libswresample-dev libswscale-dev xorg-dev libgl1-mesa-dev

# Arch
sudo pacman -S --needed base-devel cmake git python rsync libarchive ffmpeg
```

**Windows** — VS Build Tools 2022 with Clang for Windows + CMake + Ninja + Python 3.

### Build from source

> Build scripts are being developed. This section will be updated in TWR-17/TWR-18.

```sh
git clone https://github.com/MateoEscobar/TW-Recomp.git
cd TW-Recomp
git submodule update --init --recursive
# ./scripts/build-linux.sh --iso /path/to/warriors-usa.iso --output ./deploy
```

---

## Features

Planned features (to be implemented ticket by ticket):

- [x] Repo structure and PS2Recomp integration (TWR-3)
- [ ] ELF extraction and function map (TWR-5, TWR-6)
- [ ] MIPS → C++ recompilation (TWR-7)
- [ ] RenderWare renderer — OpenGL (TWR-9)
- [ ] Widescreen 16:9 patch (TWR-10)
- [ ] Resolution scaling 1x–4x (TWR-11)
- [ ] Miles Sound System audio layer (TWR-13)
- [ ] DualShock 2 input mapping (TWR-14)
- [ ] Memory card save/load (TWR-15)
- [ ] Video cutscene playback — PSS format (TWR-12)
- [ ] Front-end launcher — ImGui/SDL2 (TWR-16)
- [ ] Install wizard (ISO extraction) (TWR-17)
- [ ] 60fps patch (TWR-23)
- [ ] HD texture pack support (TWR-21)
- [ ] Windows release build (TWR-18)
- [ ] Linux release build (TWR-19)

---

## Status & known issues

| Area | Status |
|---|---|
| Repository setup | ✅ Done |
| PS2Recomp integration | 🔧 In progress (TWR-3) |
| ELF analysis | ⏳ Pending (TWR-5) |
| RenderWare renderer | ⏳ Pending (TWR-9) |
| Audio (MSS) | ⏳ Pending (TWR-13) |
| Playable build | ⏳ Not yet |

**Known challenges:**
- RenderWare 3.x uses PS2-specific VU microcode for geometry transforms. These
  must be emulated or rewritten for the PC renderer.
- Miles Sound System is proprietary and closed-source on PS2; its interface must
  be reverse-engineered from the game binary.
- The game has hardcoded 30fps logic in several gameplay systems (physics,
  animation interpolation). A 60fps patch requires identifying and patching
  those timing constants (similar to GTA re3's 60fps work).

---

## Repository layout

```
TW-Recomp/
├── CMakeLists.txt          # Root CMake — drives the full build
├── docs/                   # Design docs, build notes, screenshots
│   └── screenshots/
├── games/
│   └── warriors/           # Warriors-specific config, patches, function map
│       ├── config.ini      # ps2xRecomp config (SLUS-21472)
│       └── patches/        # Game-specific ASM patches (60fps, widescreen, etc.)
├── ps2xRecomp/             # MIPS→C++ recompiler (submodule: PS2Recomp)
├── ps2xRuntime/            # PC runtime: renderer, audio, input, front-end
├── ps2xAnalyzer/           # ELF analyzer + function-map generator
├── scripts/                # Build automation (Linux + Windows)
│   ├── build-linux.sh
│   └── build-windows.ps1
└── textures/               # Optional HD texture packs (not shipped)
```

---

## Credits & license

- **PS2Recomp** by [ran-j](https://github.com/ran-j/PS2Recomp) — PS2 static recompiler
  and runtime. Licensed under MIT.
- **re3 / reVC** by the re3 team — RenderWare PS2 reference implementation.
- *The Warriors* (2005) — © Rockstar Games / Rockstar Leeds. Game data is **not**
  distributed. You must supply your own legally obtained disc dump.

This project (tools, scripts, runtime code) is released under the **MIT License**.
See [LICENSE](LICENSE) for details.

---

> **BYOD — Bring Your Own Disc.** This repository contains no copyrighted game
> data. Any build of TW-Recomp requires the user to supply their own legally
> obtained disc image of *The Warriors* (NTSC-U/C, SLUS-21472).
