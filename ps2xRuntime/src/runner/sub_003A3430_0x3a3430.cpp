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

// Function: sub_003A3430
// Address: 0x3a3430 - 0x3a3478
void sub_003A3430_0x3a3430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3430_0x3a3430");
#endif

    switch (ctx->pc) {
        case 0x3a3438u: goto label_3a3438;
        case 0x3a3448u: goto label_3a3448;
        default: break;
    }

    ctx->pc = 0x3a3430u;

    // 0x3a3430: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a3430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a3434: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3a3434u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3438:
    // 0x3a3438: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a3438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a343c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A343Cu;
    {
        const bool branch_taken_0x3a343c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a343c) {
            ctx->pc = 0x3A3440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A343Cu;
            // 0x3a3440: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3464u;
            goto label_3a3464;
        }
    }
    ctx->pc = 0x3A3444u;
    // 0x3a3444: 0x0  nop
    ctx->pc = 0x3a3444u;
    // NOP
label_3a3448:
    // 0x3a3448: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A3448u;
    {
        const bool branch_taken_0x3a3448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3a3448) {
            ctx->pc = 0x3A344Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3448u;
            // 0x3a344c: 0x8c42005c  lw          $v0, 0x5C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3458u;
            goto label_3a3458;
        }
    }
    ctx->pc = 0x3A3450u;
    // 0x3a3450: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3450u;
        // 0x3a3454: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3458u;
label_3a3458:
    // 0x3a3458: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A3458u;
    {
        const bool branch_taken_0x3a3458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3458) {
            ctx->pc = 0x3A3448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3448;
        }
    }
    ctx->pc = 0x3A3460u;
    // 0x3a3460: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a3460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a3464:
    // 0x3a3464: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x3a3464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3a3468: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3A3468u;
    {
        const bool branch_taken_0x3a3468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3468u;
        // 0x3a346c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3468) {
            ctx->pc = 0x3A3438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3438;
        }
    }
    ctx->pc = 0x3A3470u;
    // 0x3a3470: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3470u;
        // 0x3a3474: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3478u;
}
