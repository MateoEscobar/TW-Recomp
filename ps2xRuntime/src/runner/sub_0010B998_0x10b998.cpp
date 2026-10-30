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

// Function: sub_0010B998
// Address: 0x10b998 - 0x10b9a8
void sub_0010B998_0x10b998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B998_0x10b998");
#endif

    ctx->pc = 0x10b998u;

    // 0x10b998: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x10b998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x10b99c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B99Cu;
        // 0x10b9a0: 0x24426a18  addiu       $v0, $v0, 0x6A18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B9A4u;
    // 0x10b9a4: 0x0  nop
    ctx->pc = 0x10b9a4u;
    // NOP
    ctx->pc = 0x10b9a8u;
}
