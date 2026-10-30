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

// Function: sub_0041B2A8
// Address: 0x41b2a8 - 0x41b2c8
void sub_0041B2A8_0x41b2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B2A8_0x41b2a8");
#endif

    ctx->pc = 0x41b2a8u;

    // 0x41b2a8: 0x808203c4  lb          $v0, 0x3C4($a0)
    ctx->pc = 0x41b2a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 964)));
    // 0x41b2ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41B2ACu;
    {
        const bool branch_taken_0x41b2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2ACu;
        // 0x41b2b0: 0x248203c4  addiu       $v0, $a0, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 964));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b2ac) {
            ctx->pc = 0x41B2BCu;
            goto label_41b2bc;
        }
    }
    ctx->pc = 0x41B2B4u;
    // 0x41b2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x41B2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B2B4u;
        // 0x41b2b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B2BCu;
label_41b2bc:
    // 0x41b2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x41B2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B2C4u;
    // 0x41b2c4: 0x0  nop
    ctx->pc = 0x41b2c4u;
    // NOP
    ctx->pc = 0x41b2c8u;
}
