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

// Function: sub_00115C80
// Address: 0x115c80 - 0x115cb0
void sub_00115C80_0x115c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115C80_0x115c80");
#endif

    switch (ctx->pc) {
        case 0x115c90u: goto label_115c90;
        default: break;
    }

    ctx->pc = 0x115c80u;

    // 0x115c80: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x115c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x115c84: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x115c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x115c88: 0x34423cc0  ori         $v0, $v0, 0x3CC0
    ctx->pc = 0x115c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15552);
    // 0x115c8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x115c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_115c90:
    // 0x115c90: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x115c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x115c94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x115c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x115c98: 0x0  nop
    ctx->pc = 0x115c98u;
    // NOP
    // 0x115c9c: 0x0  nop
    ctx->pc = 0x115c9cu;
    // NOP
    // 0x115ca0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x115CA0u;
    {
        const bool branch_taken_0x115ca0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x115CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CA0u;
        // 0x115ca4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ca0) {
            ctx->pc = 0x115C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115c90;
        }
    }
    ctx->pc = 0x115CA8u;
    // 0x115ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x115CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115CB0u;
}
