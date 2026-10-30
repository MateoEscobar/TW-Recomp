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

// Function: sub_001E52F8
// Address: 0x1e52f8 - 0x1e5300
void sub_001E52F8_0x1e52f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E52F8_0x1e52f8");
#endif

    ctx->pc = 0x1e52f8u;

    // 0x1e52f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E52F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52F8u;
        // 0x1e52fc: 0xa0850954  sb          $a1, 0x954($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2388), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E52F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5300u;
}
