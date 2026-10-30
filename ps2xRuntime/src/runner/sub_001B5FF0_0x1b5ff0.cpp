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

// Function: sub_001B5FF0
// Address: 0x1b5ff0 - 0x1b6000
void sub_001B5FF0_0x1b5ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5FF0_0x1b5ff0");
#endif

    ctx->pc = 0x1b5ff0u;

    // 0x1b5ff0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b5ff4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1b5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1b5ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FF8u;
        // 0x1b5ffc: 0xa06456e2  sb          $a0, 0x56E2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22242), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6000u;
}
