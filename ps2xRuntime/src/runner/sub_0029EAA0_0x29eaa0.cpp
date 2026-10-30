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

// Function: sub_0029EAA0
// Address: 0x29eaa0 - 0x29ead8
void sub_0029EAA0_0x29eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EAA0_0x29eaa0");
#endif

    switch (ctx->pc) {
        case 0x29eaa8u: goto label_29eaa8;
        default: break;
    }

    ctx->pc = 0x29eaa0u;

    // 0x29eaa0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x29eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x29eaa4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29eaa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29eaa8:
    // 0x29eaa8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x29eaa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29eaac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x29eaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x29eab0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29EAB0u;
    {
        const bool branch_taken_0x29eab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAB0u;
        // 0x29eab4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eab0) {
            ctx->pc = 0x29EAC0u;
            goto label_29eac0;
        }
    }
    ctx->pc = 0x29EAB8u;
    // 0x29eab8: 0x3e00008  jr          $ra
    ctx->pc = 0x29EAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAB8u;
        // 0x29eabc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EAC0u;
label_29eac0:
    // 0x29eac0: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x29eac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x29eac4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29EAC4u;
    {
        const bool branch_taken_0x29eac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAC4u;
        // 0x29eac8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eac4) {
            ctx->pc = 0x29EAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29eaa8;
        }
    }
    ctx->pc = 0x29EACCu;
    // 0x29eacc: 0x3e00008  jr          $ra
    ctx->pc = 0x29EACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EACCu;
        // 0x29ead0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EAD4u;
    // 0x29ead4: 0x0  nop
    ctx->pc = 0x29ead4u;
    // NOP
    ctx->pc = 0x29ead8u;
}
