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

// Function: sub_00299D80
// Address: 0x299d80 - 0x299db0
void sub_00299D80_0x299d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299D80_0x299d80");
#endif

    switch (ctx->pc) {
        case 0x299d88u: goto label_299d88;
        default: break;
    }

    ctx->pc = 0x299d80u;

    // 0x299d80: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x299d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x299d84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x299d84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299d88:
    // 0x299d88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x299d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299d8c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x299D8Cu;
    {
        const bool branch_taken_0x299d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x299D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D8Cu;
        // 0x299d90: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d8c) {
            ctx->pc = 0x299D9Cu;
            goto label_299d9c;
        }
    }
    ctx->pc = 0x299D94u;
    // 0x299d94: 0x3e00008  jr          $ra
    ctx->pc = 0x299D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D94u;
        // 0x299d98: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299D9Cu;
label_299d9c:
    // 0x299d9c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x299d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x299da0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x299DA0u;
    {
        const bool branch_taken_0x299da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DA0u;
        // 0x299da4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299da0) {
            ctx->pc = 0x299D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299d88;
        }
    }
    ctx->pc = 0x299DA8u;
    // 0x299da8: 0x3e00008  jr          $ra
    ctx->pc = 0x299DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299DB0u;
}
