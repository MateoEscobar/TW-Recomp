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

// Function: sub_004EE2A0
// Address: 0x4ee2a0 - 0x4ee2b0
void sub_004EE2A0_0x4ee2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE2A0_0x4ee2a0");
#endif

    ctx->pc = 0x4ee2a0u;

    // 0x4ee2a0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE2A4u;
        // 0x4ee2a8: 0x24423800  addiu       $v0, $v0, 0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE2ACu;
    // 0x4ee2ac: 0x0  nop
    ctx->pc = 0x4ee2acu;
    // NOP
    ctx->pc = 0x4ee2b0u;
}
