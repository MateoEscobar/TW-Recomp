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

// Function: sub_004F5C98
// Address: 0x4f5c98 - 0x4f5cc8
void sub_004F5C98_0x4f5c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5C98_0x4f5c98");
#endif

    switch (ctx->pc) {
        case 0x4f5ca0u: goto label_4f5ca0;
        default: break;
    }

    ctx->pc = 0x4f5c98u;

    // 0x4f5c98: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4f5c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f5c9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4f5c9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f5ca0:
    // 0x4f5ca0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4f5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f5ca4: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F5CA4u;
    {
        const bool branch_taken_0x4f5ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4f5ca4) {
            ctx->pc = 0x4F5CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F5CA4u;
            // 0x4f5ca8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5CB4u;
            goto label_4f5cb4;
        }
    }
    ctx->pc = 0x4F5CACu;
    // 0x4f5cac: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5CACu;
        // 0x4f5cb0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5CB4u;
label_4f5cb4:
    // 0x4f5cb4: 0x2c62003c  sltiu       $v0, $v1, 0x3C
    ctx->pc = 0x4f5cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x4f5cb8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4F5CB8u;
    {
        const bool branch_taken_0x4f5cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5CB8u;
        // 0x4f5cbc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5cb8) {
            ctx->pc = 0x4F5CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f5ca0;
        }
    }
    ctx->pc = 0x4F5CC0u;
    // 0x4f5cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5CC0u;
        // 0x4f5cc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5CC8u;
}
