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

// Function: sub_001D6A50
// Address: 0x1d6a50 - 0x1d6a60
void sub_001D6A50_0x1d6a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6A50_0x1d6a50");
#endif

    ctx->pc = 0x1d6a50u;

    // 0x1d6a50: 0x8c8204c0  lw          $v0, 0x4C0($a0)
    ctx->pc = 0x1d6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1216)));
    // 0x1d6a54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A54u;
        // 0x1d6a58: 0xac8204cc  sw          $v0, 0x4CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6A5Cu;
    // 0x1d6a5c: 0x0  nop
    ctx->pc = 0x1d6a5cu;
    // NOP
    ctx->pc = 0x1d6a60u;
}
