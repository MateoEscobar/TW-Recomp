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

// Function: sub_00114018
// Address: 0x114018 - 0x114028
void sub_00114018_0x114018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114018_0x114018");
#endif

    ctx->pc = 0x114018u;

    // 0x114018: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x114018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11401c: 0x8c43aa84  lw          $v1, -0x557C($v0)
    ctx->pc = 0x11401cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50AA84u));
    // 0x114020: 0x3e00008  jr          $ra
    ctx->pc = 0x114020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114020u;
        // 0x114024: 0xac640060  sw          $a0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114028u;
}
