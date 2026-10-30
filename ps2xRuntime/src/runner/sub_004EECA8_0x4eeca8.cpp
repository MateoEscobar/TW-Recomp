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

// Function: sub_004EECA8
// Address: 0x4eeca8 - 0x4eecb8
void sub_004EECA8_0x4eeca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EECA8_0x4eeca8");
#endif

    ctx->pc = 0x4eeca8u;

    // 0x4eeca8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4eeca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4eecac: 0x3e00008  jr          $ra
    ctx->pc = 0x4EECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EECACu;
        // 0x4eecb0: 0x24426660  addiu       $v0, $v0, 0x6660 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EECACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EECB4u;
    // 0x4eecb4: 0x0  nop
    ctx->pc = 0x4eecb4u;
    // NOP
    ctx->pc = 0x4eecb8u;
}
