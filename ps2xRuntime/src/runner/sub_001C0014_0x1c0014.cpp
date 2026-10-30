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

// Function: sub_001C0014
// Address: 0x1c0014 - 0x1c0018
void sub_001C0014_0x1c0014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0014_0x1c0014");
#endif

    ctx->pc = 0x1c0014u;

    // 0x1c0014: 0x3c01be38  lui         $at, 0xBE38
    ctx->pc = 0x1c0014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48696 << 16));
    ctx->pc = 0x1c0018u;
}
