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

// Function: sub_004EEB98
// Address: 0x4eeb98 - 0x4eeba8
void sub_004EEB98_0x4eeb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEB98_0x4eeb98");
#endif

    ctx->pc = 0x4eeb98u;

    // 0x4eeb98: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4eeb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4eeb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEB9Cu;
        // 0x4eeba0: 0x244265b0  addiu       $v0, $v0, 0x65B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26032));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EEBA4u;
    // 0x4eeba4: 0x0  nop
    ctx->pc = 0x4eeba4u;
    // NOP
    ctx->pc = 0x4eeba8u;
}
