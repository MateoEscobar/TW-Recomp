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

// Function: sub_0041D728
// Address: 0x41d728 - 0x41d738
void sub_0041D728_0x41d728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D728_0x41d728");
#endif

    ctx->pc = 0x41d728u;

    // 0x41d728: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d72c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41d730: 0x3e00008  jr          $ra
    ctx->pc = 0x41D730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D730u;
        // 0x41d734: 0xac6403e4  sw          $a0, 0x3E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 996), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D738u;
}
