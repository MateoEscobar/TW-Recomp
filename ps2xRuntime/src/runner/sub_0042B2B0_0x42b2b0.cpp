#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042B2B0
// Address: 0x42b2b0 - 0x42b2b8
void sub_0042B2B0_0x42b2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042B2B0_0x42b2b0");
#endif

    ctx->pc = 0x42b2b0u;

    // 0x42b2b0: 0x810b22a  j           func_42C8A8
    ctx->pc = 0x42B2B0u;
    ctx->pc = 0x42C8A8u;
    sub_0042C8A8_0x42c8a8(rdram, ctx, runtime); return;
    ctx->pc = 0x42B2B8u;
}
