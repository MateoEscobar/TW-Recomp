// [TWR-27] Frame/state counters of the runtime that do not depend on hooking the game.
//
// g_ps2DisplayFlips counts every effective change of the GS DISPFB1 register (the game swapping
// its display buffers = one presented frame), whether it arrives as a bus store (ps2_memory.cpp,
// [displatch]) or through a sceGs stub. It is the progress metric of the boot (ADR TWR-27 D2):
// unlike g_warriorsFrameCount (advanced by a BT3 hook that never runs in Warriors) it needs no
// game-specific address.
#include <atomic>
#include <cstdint>

std::atomic<uint64_t> g_ps2DisplayFlips{0};

// ── Moved from game_overrides.cpp (TWR-27, ADR D1 cube B) ─────────────────────────────────────
// Public names are unchanged so their consumers keep compiling. Several of them were advanced
// only by hooks of the BT3-derived override layer, which no longer runs for Warriors: they now
// stay at their neutral value (inventory in docs/boot.md).

// Game-frame counter read by the [fps] line and ~20 runtime files. Advanced only by the BT3
// hook at 0x100ab8 (not a Warriors function): it stays 0 in Warriors. Use g_ps2DisplayFlips.
std::atomic<uint64_t> g_warriorsFrameCount{0};

// [syncrelax] true while the (BT3) frame gate is engaged; never engaged in Warriors.
std::atomic<bool> g_ps2xFrameGateHeavy{false};
extern "C" bool ps2xFrameGateHeavy() { return g_ps2xFrameGateHeavy.load(std::memory_order_relaxed); }

// [netjump] display hold / overlay curtain target of the BT3 versus-menu jump (inert: 0).
std::atomic<int> g_netJumpHold{0};
std::atomic<int> g_netCurtainWant{0};

// [rayhook] armed by the [raysrc] probe in ps2_memory.cpp.
std::atomic<int> g_rayHookArm{0};

// [rumble] launcher setting pushed by PS2SettingsOverlay::applySettings.
std::atomic<bool> g_ps2xRumbleOn{true};
std::atomic<int> g_ps2xRumbleStrength{100};
