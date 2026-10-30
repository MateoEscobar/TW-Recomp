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

// Function: sub_00476B60
// Address: 0x476b60 - 0x476b70
void sub_00476B60_0x476b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476B60_0x476b60");
#endif

    ctx->pc = 0x476b60u;

    // 0x476b60: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x476b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x476b64: 0x3e00008  jr          $ra
    ctx->pc = 0x476B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476B64u;
        // 0x476b68: 0x2442e7f0  addiu       $v0, $v0, -0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476B6Cu;
    // 0x476b6c: 0x0  nop
    ctx->pc = 0x476b6cu;
    // NOP
    ctx->pc = 0x476b70u;
}
