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

// Function: sub_00422270
// Address: 0x422270 - 0x4222a0
void sub_00422270_0x422270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422270_0x422270");
#endif

    switch (ctx->pc) {
        case 0x422278u: goto label_422278;
        default: break;
    }

    ctx->pc = 0x422270u;

    // 0x422270: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x422270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x422274: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x422274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422278:
    // 0x422278: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x422278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42227c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42227Cu;
    {
        const bool branch_taken_0x42227c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x422280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42227Cu;
        // 0x422280: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42227c) {
            ctx->pc = 0x42228Cu;
            goto label_42228c;
        }
    }
    ctx->pc = 0x422284u;
    // 0x422284: 0x3e00008  jr          $ra
    ctx->pc = 0x422284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422284u;
        // 0x422288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42228Cu;
label_42228c:
    // 0x42228c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x42228cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x422290: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x422290u;
    {
        const bool branch_taken_0x422290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422290u;
        // 0x422294: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422290) {
            ctx->pc = 0x422278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422278;
        }
    }
    ctx->pc = 0x422298u;
    // 0x422298: 0x3e00008  jr          $ra
    ctx->pc = 0x422298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422298u;
        // 0x42229c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4222A0u;
}
