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

// Function: sub_00299CF0
// Address: 0x299cf0 - 0x299d20
void sub_00299CF0_0x299cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299CF0_0x299cf0");
#endif

    switch (ctx->pc) {
        case 0x299cf8u: goto label_299cf8;
        default: break;
    }

    ctx->pc = 0x299cf0u;

    // 0x299cf0: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x299cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x299cf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x299cf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299cf8:
    // 0x299cf8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x299cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299cfc: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x299CFCu;
    {
        const bool branch_taken_0x299cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x299D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CFCu;
        // 0x299d00: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299cfc) {
            ctx->pc = 0x299D0Cu;
            goto label_299d0c;
        }
    }
    ctx->pc = 0x299D04u;
    // 0x299d04: 0x3e00008  jr          $ra
    ctx->pc = 0x299D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D04u;
        // 0x299d08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299D0Cu;
label_299d0c:
    // 0x299d0c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x299d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x299d10: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x299D10u;
    {
        const bool branch_taken_0x299d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D10u;
        // 0x299d14: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d10) {
            ctx->pc = 0x299CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299cf8;
        }
    }
    ctx->pc = 0x299D18u;
    // 0x299d18: 0x3e00008  jr          $ra
    ctx->pc = 0x299D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D18u;
        // 0x299d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299D20u;
}
