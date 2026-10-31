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

// Function: sub_002D5630
// Address: 0x2d5630 - 0x2d5648
void sub_002D5630_0x2d5630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5630_0x2d5630");
#endif

    ctx->pc = 0x2d5630u;

    // 0x2d5630: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x2d5630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d5634: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5634u;
    {
        const bool branch_taken_0x2d5634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5634u;
        // 0x2d5638: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5634) {
            ctx->pc = 0x2D5640u;
            goto label_2d5640;
        }
    }
    ctx->pc = 0x2D563Cu;
    // 0x2d563c: 0xa082001d  sb          $v0, 0x1D($a0)
    ctx->pc = 0x2d563cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 2));
label_2d5640:
    // 0x2d5640: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5648u;
}
