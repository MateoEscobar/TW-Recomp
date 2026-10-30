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

// Function: sub_003531A8
// Address: 0x3531a8 - 0x3531c8
void sub_003531A8_0x3531a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003531A8_0x3531a8");
#endif

    ctx->pc = 0x3531a8u;

    // 0x3531a8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x3531a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3531ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3531acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3531b0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3531B0u;
    {
        const bool branch_taken_0x3531b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3531B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3531B0u;
        // 0x3531b4: 0xac820034  sw          $v0, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3531b0) {
            ctx->pc = 0x3531BCu;
            goto label_3531bc;
        }
    }
    ctx->pc = 0x3531B8u;
    // 0x3531b8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x3531b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_3531bc:
    // 0x3531bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3531BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3531BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3531C4u;
    // 0x3531c4: 0x0  nop
    ctx->pc = 0x3531c4u;
    // NOP
    ctx->pc = 0x3531c8u;
}
