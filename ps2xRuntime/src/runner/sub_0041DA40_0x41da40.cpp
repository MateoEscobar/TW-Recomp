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

// Function: sub_0041DA40
// Address: 0x41da40 - 0x41da50
void sub_0041DA40_0x41da40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DA40_0x41da40");
#endif

    ctx->pc = 0x41da40u;

    // 0x41da40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41da40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41da44: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41da44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41da48: 0x3e00008  jr          $ra
    ctx->pc = 0x41DA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DA48u;
        // 0x41da4c: 0xac640120  sw          $a0, 0x120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DA50u;
}
