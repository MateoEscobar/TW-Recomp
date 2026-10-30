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

// Function: sub_004EE330
// Address: 0x4ee330 - 0x4ee340
void sub_004EE330_0x4ee330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE330_0x4ee330");
#endif

    ctx->pc = 0x4ee330u;

    // 0x4ee330: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee334: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE334u;
        // 0x4ee338: 0x24423850  addiu       $v0, $v0, 0x3850 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE33Cu;
    // 0x4ee33c: 0x0  nop
    ctx->pc = 0x4ee33cu;
    // NOP
    ctx->pc = 0x4ee340u;
}
