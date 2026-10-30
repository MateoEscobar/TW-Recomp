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

// Function: sub_0041D8D0
// Address: 0x41d8d0 - 0x41d8e0
void sub_0041D8D0_0x41d8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D8D0_0x41d8d0");
#endif

    ctx->pc = 0x41d8d0u;

    // 0x41d8d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d8d4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41d8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x41D8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D8D8u;
        // 0x41d8dc: 0xac64028c  sw          $a0, 0x28C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 652), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D8E0u;
}
