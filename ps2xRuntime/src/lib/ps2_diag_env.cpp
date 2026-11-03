// [TWR-27] Generic, game-independent diagnostics armed from the environment for ANY ELF.
// They used to be armed inside applyBt3SoundInitBypass (game_overrides.cpp), i.e. only when the
// BT3-derived override layer was registered. Called once from PS2Runtime::initialize().
//
//   PS2X_STEPCENSUS=<out.csv>   store-site census (ps2_stepcensus.cpp)
//   PS2X_ADDRWATCH=<hex,...>    log changing stores to up to 3 addresses (PS2X_ADDRWATCH_ALL=1: from boot)
//   PS2X_STORETRACE=<lo:hi,...> log every store from a pc range after the trigger
//   PS2X_HALFSTEP=<sites.txt>   half-step experiment
#include "ps2_runtime.h"

#include <cstdlib>

void ps2AddrWatchEnable(const char *hex);    // ps2_stepcensus.cpp
void ps2StoreTraceEnable(const char *spec);  // ps2_stepcensus.cpp

void ps2DiagEnvApply()
{
    static bool s_applied = false;
    if (s_applied) return;
    s_applied = true;
    if (const char *sc = std::getenv("PS2X_STEPCENSUS"); sc && sc[0]) ps2StepCensusEnable(sc);   // [stepcensus]
    if (const char *aw = std::getenv("PS2X_ADDRWATCH"); aw && aw[0]) ps2AddrWatchEnable(aw);     // [addrwatch]
    if (const char *st = std::getenv("PS2X_STORETRACE"); st && st[0]) ps2StoreTraceEnable(st);   // [storetrace]
    if (const char *hs = std::getenv("PS2X_HALFSTEP"); hs && hs[0]) ps2HalfStepEnable(hs);       // [halfstep]
}
