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

// Function: sub_004EEEF0
// Address: 0x4eeef0 - 0x4eef00
void sub_004EEEF0_0x4eeef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEEF0_0x4eeef0");
#endif

    ctx->pc = 0x4eeef0u;

    // 0x4eeef0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4eeef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4eeef4: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEEF4u;
        // 0x4eeef8: 0x244273b8  addiu       $v0, $v0, 0x73B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EEEFCu;
    // 0x4eeefc: 0x0  nop
    ctx->pc = 0x4eeefcu;
    // NOP
    ctx->pc = 0x4eef00u;
}
