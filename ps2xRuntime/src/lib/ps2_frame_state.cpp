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
