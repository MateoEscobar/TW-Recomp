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

// Function: sub_003A33D8
// Address: 0x3a33d8 - 0x3a3408
void sub_003A33D8_0x3a33d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A33D8_0x3a33d8");
#endif

    switch (ctx->pc) {
        case 0x3a33e0u: goto label_3a33e0;
        default: break;
    }

    ctx->pc = 0x3a33d8u;

    // 0x3a33d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a33d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a33dc: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x3a33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3a33e0:
    // 0x3a33e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3a33e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3a33e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a33e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a33e8: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x3a33e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3a33ec: 0x0  nop
    ctx->pc = 0x3a33ecu;
    // NOP
    // 0x3a33f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A33F0u;
    {
        const bool branch_taken_0x3a33f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A33F0u;
        // 0x3a33f4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a33f0) {
            ctx->pc = 0x3A33E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a33e0;
        }
    }
    ctx->pc = 0x3A33F8u;
    // 0x3a33f8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3a33f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3a33fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A33FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A33FCu;
        // 0x3a3400: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A33FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3404u;
    // 0x3a3404: 0x0  nop
    ctx->pc = 0x3a3404u;
    // NOP
    ctx->pc = 0x3a3408u;
}
