// [TWR-27] Entry points of subsystems inherited from BT3-Recomp whose state was produced by the
// BT3 override layer (game_overrides.cpp, hooks on BT3 ELF addresses). That layer no longer runs
// for The Warriors, so every function here returns its neutral value. Public names are kept so
// the consumers compile unchanged (ADR TWR-27 D1, cube B rule). Inventory and audit proposal:
// docs/boot.md, "Subsistemas heredados de BT3 inertes".
#include <atomic>
#include <cstdint>
#include <cstdio>
#include <cstdlib>

struct R5900Context;
class PS2Runtime;

extern "C" void *ps2xGuestWaitBegin();
extern "C" void ps2xGuestWaitEnd(void *);
extern "C" void ps2xGuestSleepMs(unsigned ms);

// [netmenu] BT3 net entry (Wii data served over the game's AFS): never active in Warriors.
static std::atomic<int> s_netEntryActive{0};
extern "C" void ps2xNetEntrySetActive(int on) { s_netEntryActive.store(on ? 1 : 0, std::memory_order_relaxed); }
extern "C" int ps2xNetEntryActive() { return s_netEntryActive.load(std::memory_order_relaxed); }
extern "C" int ps2xSeMenuBypassGet() { return 0; }
extern "C" int ps2xNetServeSwapRead(unsigned long long, unsigned long long, unsigned char *, unsigned long long) { return 0; }

// [statesync] BT3 versus-menu jump: never started (0), so never settled.
extern "C" int ps2xNetJumpState() { return 0; }
extern "C" int ps2xNetJumpSettledFor(uint32_t) { return 0; }

// [se] BT3 SE bank capture (SIF.cpp DMA taps). Its only consumer (the BT3 SE HLE) is gone.
void warriorsNoteSeBankBlob(const uint8_t *, uint32_t) {}
void warriorsNoteSeBankHeader(uint32_t, const uint8_t *, uint32_t) {}

// [dispatchpump] The BT3 "CD file-server tick" ran guest code at 0x28a3b0, which is not a function
// start in SLUS_212.15 (mid sub_0028A360). It is never run: nothing is stale, nothing to tick.
extern "C" bool ps2xCdTickStale(unsigned) { return false; }
extern "C" void ps2xCdTickOnly(uint8_t *, R5900Context *, PS2Runtime *) {}

// [spinpump] A guest thread busy-polling at one pc: yield the guest execution token so the thread
// that will satisfy the poll can run (hardware preempts the poller). Generic runtime behaviour; the
// BT3 CD tick it used to run first is gone (see above). PS2X_SPINPUMP=0 disables.
extern "C" void ps2xSpinPump(uint8_t *, R5900Context *, PS2Runtime *)
{
    static const bool s_on = []() { const char *v = std::getenv("PS2X_SPINPUMP"); return !(v && v[0] == '0'); }();
    if (!s_on) return;
    void *scope = ps2xGuestWaitBegin();
    ps2xGuestSleepMs(1u);   // [fibers] park the guest fiber, not the host thread
    ps2xGuestWaitEnd(scope);
}

// [fixupring] ring of BT3 loader fixup calls, filled by a BT3 hook: nothing to dump.
extern "C" void ps2xFixupRingDump() {}
