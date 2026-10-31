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

// Function: sub_0041D690
// Address: 0x41d690 - 0x41d6a8
void sub_0041D690_0x41d690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D690_0x41d690");
#endif

    ctx->pc = 0x41d690u;

    // 0x41d690: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d694: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41d694u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41d698: 0x3e00008  jr          $ra
    ctx->pc = 0x41D698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D698u;
        // 0x41d69c: 0x8c6256d8  lw          $v0, 0x56D8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22232)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D6A0u;
    // 0x41d6a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x41d6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x41d6a4: 0x0  nop
    ctx->pc = 0x41d6a4u;
    // NOP
    ctx->pc = 0x41d6a8u;
}
