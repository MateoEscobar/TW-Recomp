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

// Function: sub_002B9720
// Address: 0x2b9720 - 0x2b9730
void sub_002B9720_0x2b9720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9720_0x2b9720");
#endif

    ctx->pc = 0x2b9720u;

    // 0x2b9720: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2b9720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2b9724: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b9724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9728: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9728u;
        // 0x2b972c: 0xac43021c  sw          $v1, 0x21C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9730u;
}
