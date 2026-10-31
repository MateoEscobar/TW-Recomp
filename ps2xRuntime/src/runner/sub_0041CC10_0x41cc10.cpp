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

// Function: sub_0041CC10
// Address: 0x41cc10 - 0x41cc40
void sub_0041CC10_0x41cc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CC10_0x41cc10");
#endif

    switch (ctx->pc) {
        case 0x41cc20u: goto label_41cc20;
        default: break;
    }

    ctx->pc = 0x41cc10u;

    // 0x41cc10: 0x2484041d  addiu       $a0, $a0, 0x41D
    ctx->pc = 0x41cc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1053));
    // 0x41cc14: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x41cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x41cc18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41cc1c: 0x0  nop
    ctx->pc = 0x41cc1cu;
    // NOP
label_41cc20:
    // 0x41cc20: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x41cc20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x41cc24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x41cc28: 0x0  nop
    ctx->pc = 0x41cc28u;
    // NOP
    // 0x41cc2c: 0x0  nop
    ctx->pc = 0x41cc2cu;
    // NOP
    // 0x41cc30: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x41CC30u;
    {
        const bool branch_taken_0x41cc30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x41CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CC30u;
        // 0x41cc34: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cc30) {
            ctx->pc = 0x41CC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41cc20;
        }
    }
    ctx->pc = 0x41CC38u;
    // 0x41cc38: 0x3e00008  jr          $ra
    ctx->pc = 0x41CC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CC40u;
}
