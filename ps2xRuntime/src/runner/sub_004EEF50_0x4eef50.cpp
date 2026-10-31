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

// Function: sub_004EEF50
// Address: 0x4eef50 - 0x4eef68
void sub_004EEF50_0x4eef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEF50_0x4eef50");
#endif

    ctx->pc = 0x4eef50u;

    // 0x4eef50: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4eef50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4eef54: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEF54u;
        // 0x4eef58: 0x24428428  addiu       $v0, $v0, -0x7BD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EEF5Cu;
    // 0x4eef5c: 0x0  nop
    ctx->pc = 0x4eef5cu;
    // NOP
    // 0x4eef60: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4eef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4eef64: 0x0  nop
    ctx->pc = 0x4eef64u;
    // NOP
    ctx->pc = 0x4eef68u;
}
