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

// Function: sub_002948A0
// Address: 0x2948a0 - 0x2948b0
void sub_002948A0_0x2948a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002948A0_0x2948a0");
#endif

    ctx->pc = 0x2948a0u;

    // 0x2948a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2948a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2948a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2948A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2948A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948A4u;
        // 0x2948a8: 0xac440fcc  sw          $a0, 0xFCC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4044), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2948A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2948ACu;
    // 0x2948ac: 0x0  nop
    ctx->pc = 0x2948acu;
    // NOP
    ctx->pc = 0x2948b0u;
}
