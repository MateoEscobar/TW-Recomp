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

// Function: sub_004C4C38
// Address: 0x4c4c38 - 0x4c4c58
void sub_004C4C38_0x4c4c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4C38_0x4c4c38");
#endif

    ctx->pc = 0x4c4c38u;

    // 0x4c4c38: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x4c4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x4c4c3c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C4C3Cu;
    {
        const bool branch_taken_0x4c4c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4c4c3c) {
            ctx->pc = 0x4C4C4Cu;
            goto label_4c4c4c;
        }
    }
    ctx->pc = 0x4C4C44u;
    // 0x4c4c44: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4C44u;
        // 0x4c4c48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4C4Cu;
label_4c4c4c:
    // 0x4c4c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4C4Cu;
        // 0x4c4c50: 0x21027  nor         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4C54u;
    // 0x4c4c54: 0x0  nop
    ctx->pc = 0x4c4c54u;
    // NOP
    ctx->pc = 0x4c4c58u;
}
