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

// Function: sub_0041D890
// Address: 0x41d890 - 0x41d8a0
void sub_0041D890_0x41d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D890_0x41d890");
#endif

    ctx->pc = 0x41d890u;

    // 0x41d890: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d894: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41d894u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41d898: 0x3e00008  jr          $ra
    ctx->pc = 0x41D898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D898u;
        // 0x41d89c: 0xa0640155  sb          $a0, 0x155($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 341), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D8A0u;
}
