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

// Function: sub_00299DB0
// Address: 0x299db0 - 0x299df0
void sub_00299DB0_0x299db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299DB0_0x299db0");
#endif

    switch (ctx->pc) {
        case 0x299dc0u: goto label_299dc0;
        default: break;
    }

    ctx->pc = 0x299db0u;

    // 0x299db0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x299db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299db4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x299db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299db8: 0x24830068  addiu       $v1, $a0, 0x68
    ctx->pc = 0x299db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x299dbc: 0x0  nop
    ctx->pc = 0x299dbcu;
    // NOP
label_299dc0:
    // 0x299dc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x299dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x299dc4: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x299DC4u;
    {
        const bool branch_taken_0x299dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x299DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DC4u;
        // 0x299dc8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299dc4) {
            ctx->pc = 0x299DD4u;
            goto label_299dd4;
        }
    }
    ctx->pc = 0x299DCCu;
    // 0x299dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x299DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DCCu;
        // 0x299dd0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299DD4u;
label_299dd4:
    // 0x299dd4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x299dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x299dd8: 0x2ce20006  sltiu       $v0, $a3, 0x6
    ctx->pc = 0x299dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x299ddc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x299DDCu;
    {
        const bool branch_taken_0x299ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DDCu;
        // 0x299de0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ddc) {
            ctx->pc = 0x299DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299dc0;
        }
    }
    ctx->pc = 0x299DE4u;
    // 0x299de4: 0x3e00008  jr          $ra
    ctx->pc = 0x299DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DE4u;
        // 0x299de8: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299DECu;
    // 0x299dec: 0x0  nop
    ctx->pc = 0x299decu;
    // NOP
    ctx->pc = 0x299df0u;
}
