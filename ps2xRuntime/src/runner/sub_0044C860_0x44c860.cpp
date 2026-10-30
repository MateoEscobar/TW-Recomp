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

// Function: sub_0044C860
// Address: 0x44c860 - 0x44c868
void sub_0044C860_0x44c860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C860_0x44c860");
#endif

    ctx->pc = 0x44c860u;

    // 0x44c860: 0x8112998  j           func_44A660
    ctx->pc = 0x44C860u;
    ctx->pc = 0x44A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A660u, 0x44C860u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x44C868u;
}
