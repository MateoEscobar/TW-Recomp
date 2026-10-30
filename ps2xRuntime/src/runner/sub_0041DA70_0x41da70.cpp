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

// Function: sub_0041DA70
// Address: 0x41da70 - 0x41da80
void sub_0041DA70_0x41da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DA70_0x41da70");
#endif

    ctx->pc = 0x41da70u;

    // 0x41da70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41da70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41da74: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41da74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41da78: 0x3e00008  jr          $ra
    ctx->pc = 0x41DA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DA78u;
        // 0x41da7c: 0xa06456e5  sb          $a0, 0x56E5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22245), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DA80u;
}
