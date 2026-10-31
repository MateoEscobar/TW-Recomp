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

// Function: sub_004EE390
// Address: 0x4ee390 - 0x4ee3a0
void sub_004EE390_0x4ee390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE390_0x4ee390");
#endif

    ctx->pc = 0x4ee390u;

    // 0x4ee390: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee394: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE394u;
        // 0x4ee398: 0x24423888  addiu       $v0, $v0, 0x3888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14472));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE39Cu;
    // 0x4ee39c: 0x0  nop
    ctx->pc = 0x4ee39cu;
    // NOP
    ctx->pc = 0x4ee3a0u;
}
