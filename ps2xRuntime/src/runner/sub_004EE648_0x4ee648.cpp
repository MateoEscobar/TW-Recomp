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

// Function: sub_004EE648
// Address: 0x4ee648 - 0x4ee658
void sub_004EE648_0x4ee648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE648_0x4ee648");
#endif

    ctx->pc = 0x4ee648u;

    // 0x4ee648: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee64c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE64Cu;
        // 0x4ee650: 0x24424b88  addiu       $v0, $v0, 0x4B88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE654u;
    // 0x4ee654: 0x0  nop
    ctx->pc = 0x4ee654u;
    // NOP
    ctx->pc = 0x4ee658u;
}
