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

// Function: sub_004DAE60
// Address: 0x4dae60 - 0x4dae90
void sub_004DAE60_0x4dae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAE60_0x4dae60");
#endif

    switch (ctx->pc) {
        case 0x4dae68u: goto label_4dae68;
        default: break;
    }

    ctx->pc = 0x4dae60u;

    // 0x4dae60: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4dae60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dae64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4dae64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dae68:
    // 0x4dae68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4dae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4dae6c: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DAE6Cu;
    {
        const bool branch_taken_0x4dae6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4dae6c) {
            ctx->pc = 0x4DAE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DAE6Cu;
            // 0x4dae70: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DAE7Cu;
            goto label_4dae7c;
        }
    }
    ctx->pc = 0x4DAE74u;
    // 0x4dae74: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAE74u;
        // 0x4dae78: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAE7Cu;
label_4dae7c:
    // 0x4dae7c: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x4dae7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4dae80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4DAE80u;
    {
        const bool branch_taken_0x4dae80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAE80u;
        // 0x4dae84: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dae80) {
            ctx->pc = 0x4DAE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dae68;
        }
    }
    ctx->pc = 0x4DAE88u;
    // 0x4dae88: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAE88u;
        // 0x4dae8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAE90u;
}
