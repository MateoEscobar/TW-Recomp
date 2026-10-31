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

// Function: sub_0041B0D0
// Address: 0x41b0d0 - 0x41b0f0
void sub_0041B0D0_0x41b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B0D0_0x41b0d0");
#endif

    ctx->pc = 0x41b0d0u;

    // 0x41b0d0: 0x808203a4  lb          $v0, 0x3A4($a0)
    ctx->pc = 0x41b0d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 932)));
    // 0x41b0d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41B0D4u;
    {
        const bool branch_taken_0x41b0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B0D4u;
        // 0x41b0d8: 0x248203a4  addiu       $v0, $a0, 0x3A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 932));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b0d4) {
            ctx->pc = 0x41B0E4u;
            goto label_41b0e4;
        }
    }
    ctx->pc = 0x41B0DCu;
    // 0x41b0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x41B0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B0DCu;
        // 0x41b0e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B0E4u;
label_41b0e4:
    // 0x41b0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x41B0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B0ECu;
    // 0x41b0ec: 0x0  nop
    ctx->pc = 0x41b0ecu;
    // NOP
    ctx->pc = 0x41b0f0u;
}
