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

// Function: sub_0041D770
// Address: 0x41d770 - 0x41d788
void sub_0041D770_0x41d770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D770_0x41d770");
#endif

    ctx->pc = 0x41d770u;

    // 0x41d770: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d774: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41d774u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41d778: 0x3e00008  jr          $ra
    ctx->pc = 0x41D778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D778u;
        // 0x41d77c: 0xac645704  sw          $a0, 0x5704($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22276), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D780u;
    // 0x41d780: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x41d780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x41d784: 0x0  nop
    ctx->pc = 0x41d784u;
    // NOP
    ctx->pc = 0x41d788u;
}
