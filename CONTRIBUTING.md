# Contributing

Thanks for your interest in TW-Recomp! This is a statically recompiled, native
PC port of *The Warriors* (PS2, USA, SLUS-21472 — Rockstar Leeds, 2005). It ships
**no game content** — the game is recompiled at build time from the user's own
disc dump.

## Before you start

- Read the [README](README.md) for the build/deploy flow and the
  [repository layout](README.md#repository-layout).
- You need **your own legally obtained The Warriors USA disc dump** (SLUS-21472)
  to build and run.
- The project is **MIT-licensed**; by contributing you agree your work is
  licensed under the same terms (see [`LICENSE`](LICENSE)).

## Building

```bash
# Linux / macOS
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build --parallel

# Windows (x64 Native Tools Command Prompt for VS)
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build --parallel
```

For a quick rebuild after a source change you can reuse an existing `build/`
tree — just re-run `cmake --build build --parallel`.

## Where things live

| Area | Path |
| --- | --- |
| Static recompiler | `ps2xRecomp/` |
| Runtime (EE/GS/VU1/scheduler, gfx, iop stubs) | `ps2xRuntime/src/` |
| GS/GPU renderer (RenderWare 3.x stubs) | `ps2xRuntime/src/gfx/` |
| In-runtime front-end (ImGui launcher, settings) | `ps2xRuntime/src/frontend/` |
| Game-specific config and analysis | `games/warriors/` |
| Build scripts | `scripts/` |
| Texture packs | `textures/` |

## Making a change

1. Branch from `develop`:
   `feature/TWR-XX-descripcion`, `bugfix/TWR-XX-descripcion`,
   `config/TWR-XX-descripcion`, `docs/TWR-XX-descripcion`.
2. Keep the change focused; one topic per PR.
3. Match the surrounding style. Comments in this tree explain *why* with a
   measurement and a date when relevant — follow that convention for non-obvious
   changes.
4. Build and, when possible, run the affected path before opening the PR.
   CI will catch build failures but not runtime regressions.
5. Open the PR against `develop` and describe: what changed, why, how it was
   tested, and any platform notes (Windows vs Linux behaviour can differ).

## Commit messages

Prefix the subject with an area, then a concise summary:

```
build: <what changed>
runtime: <what changed>
gfx: <what changed>
iop: <what changed>
frontend: <what changed>
recomp: <what changed>
docs: <what changed>
```

Add a body when the change is non-obvious.

## Game data

- **NEVER** commit game content (ISO, ELF, PAK, VAG, textures, saves).
- The `.gitignore` excludes all known game-data patterns; if you add a new
  format, add it there too before committing.
- Do **not** attach game content to issues or PRs.

## Debugging & logs

- The runner writes `logs/warriors.log` (and `warriors.prev.log`) next to the
  deploy.
- Windows crash reports are written to `logs/wincrash.txt`.
- Useful env knobs are documented inline where they are read (grep for `TW_`);
  most are opt-in and default off.

## Reporting issues

Include: your OS, CPU/GPU, the deploy `logs/`, and the exact steps to reproduce.
Do **not** attach game content or your disc dump.

## License

MIT (see [`LICENSE`](LICENSE)).
