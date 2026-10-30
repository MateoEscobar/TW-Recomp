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

// Function: sub_004EEDB0
// Address: 0x4eedb0 - 0x4eedc0
void sub_004EEDB0_0x4eedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEDB0_0x4eedb0");
#endif

    ctx->pc = 0x4eedb0u;

    // 0x4eedb0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4eedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4eedb4: 0x3e00008  jr          $ra
    ctx->pc = 0x4EEDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EEDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEDB4u;
        // 0x4eedb8: 0x244272d0  addiu       $v0, $v0, 0x72D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EEDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EEDBCu;
    // 0x4eedbc: 0x0  nop
    ctx->pc = 0x4eedbcu;
    // NOP
    ctx->pc = 0x4eedc0u;
}
