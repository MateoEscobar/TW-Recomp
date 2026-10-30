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

// Function: sub_00299F78
// Address: 0x299f78 - 0x299f98
void sub_00299F78_0x299f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299F78_0x299f78");
#endif

    ctx->pc = 0x299f78u;

    // 0x299f78: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x299f78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x299f7c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x299f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x299f80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299F80u;
    {
        const bool branch_taken_0x299f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F80u;
        // 0x299f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f80) {
            ctx->pc = 0x299F90u;
            goto label_299f90;
        }
    }
    ctx->pc = 0x299F88u;
    // 0x299f88: 0x3e00008  jr          $ra
    ctx->pc = 0x299F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F88u;
        // 0x299f8c: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299F90u;
label_299f90:
    // 0x299f90: 0x3e00008  jr          $ra
    ctx->pc = 0x299F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299F98u;
}
