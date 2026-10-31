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

// Function: sub_00228F08
// Address: 0x228f08 - 0x228f40
void sub_00228F08_0x228f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228F08_0x228f08");
#endif

    switch (ctx->pc) {
        case 0x228f18u: goto label_228f18;
        default: break;
    }

    ctx->pc = 0x228f08u;

    // 0x228f08: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x228f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x228f0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f10: 0x24422b70  addiu       $v0, $v0, 0x2B70
    ctx->pc = 0x228f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11120));
    // 0x228f14: 0x24430a80  addiu       $v1, $v0, 0xA80
    ctx->pc = 0x228f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2688));
label_228f18:
    // 0x228f18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x228f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228f1c: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x228F1Cu;
    {
        const bool branch_taken_0x228f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x228F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F1Cu;
        // 0x228f20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f1c) {
            ctx->pc = 0x228F2Cu;
            goto label_228f2c;
        }
    }
    ctx->pc = 0x228F24u;
    // 0x228f24: 0x3e00008  jr          $ra
    ctx->pc = 0x228F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F24u;
        // 0x228f28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228F2Cu;
label_228f2c:
    // 0x228f2c: 0x28a20033  slti        $v0, $a1, 0x33
    ctx->pc = 0x228f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x228f30: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x228F30u;
    {
        const bool branch_taken_0x228f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F30u;
        // 0x228f34: 0x24630a90  addiu       $v1, $v1, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f30) {
            ctx->pc = 0x228F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228f18;
        }
    }
    ctx->pc = 0x228F38u;
    // 0x228f38: 0x3e00008  jr          $ra
    ctx->pc = 0x228F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F38u;
        // 0x228f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228F40u;
}
