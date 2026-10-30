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

// Function: sub_00299CC0
// Address: 0x299cc0 - 0x299cf0
void sub_00299CC0_0x299cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299CC0_0x299cc0");
#endif

    switch (ctx->pc) {
        case 0x299cc8u: goto label_299cc8;
        default: break;
    }

    ctx->pc = 0x299cc0u;

    // 0x299cc0: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x299cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x299cc4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x299cc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299cc8:
    // 0x299cc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x299cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299ccc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299CCCu;
    {
        const bool branch_taken_0x299ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CCCu;
        // 0x299cd0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ccc) {
            ctx->pc = 0x299CDCu;
            goto label_299cdc;
        }
    }
    ctx->pc = 0x299CD4u;
    // 0x299cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x299CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CD4u;
        // 0x299cd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299CDCu;
label_299cdc:
    // 0x299cdc: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x299cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x299ce0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x299CE0u;
    {
        const bool branch_taken_0x299ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CE0u;
        // 0x299ce4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ce0) {
            ctx->pc = 0x299CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299cc8;
        }
    }
    ctx->pc = 0x299CE8u;
    // 0x299ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x299CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CE8u;
        // 0x299cec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299CF0u;
}
