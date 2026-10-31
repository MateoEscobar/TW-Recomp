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

// Function: sub_004EE438
// Address: 0x4ee438 - 0x4ee448
void sub_004EE438_0x4ee438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE438_0x4ee438");
#endif

    ctx->pc = 0x4ee438u;

    // 0x4ee438: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee43c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE43Cu;
        // 0x4ee440: 0x244238d8  addiu       $v0, $v0, 0x38D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14552));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE444u;
    // 0x4ee444: 0x0  nop
    ctx->pc = 0x4ee444u;
    // NOP
    ctx->pc = 0x4ee448u;
}
