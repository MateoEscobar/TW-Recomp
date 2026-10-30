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

// Function: sub_004DE208
// Address: 0x4de208 - 0x4de238
void sub_004DE208_0x4de208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE208_0x4de208");
#endif

    switch (ctx->pc) {
        case 0x4de210u: goto label_4de210;
        default: break;
    }

    ctx->pc = 0x4de208u;

    // 0x4de208: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4de208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4de20c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4de20cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4de210:
    // 0x4de210: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4de210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4de214: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DE214u;
    {
        const bool branch_taken_0x4de214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4de214) {
            ctx->pc = 0x4DE218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DE214u;
            // 0x4de218: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DE224u;
            goto label_4de224;
        }
    }
    ctx->pc = 0x4DE21Cu;
    // 0x4de21c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DE21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE21Cu;
        // 0x4de220: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE224u;
label_4de224:
    // 0x4de224: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x4de224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4de228: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4DE228u;
    {
        const bool branch_taken_0x4de228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE228u;
        // 0x4de22c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de228) {
            ctx->pc = 0x4DE210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4de210;
        }
    }
    ctx->pc = 0x4DE230u;
    // 0x4de230: 0x3e00008  jr          $ra
    ctx->pc = 0x4DE230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE230u;
        // 0x4de234: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE238u;
}
