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

// Function: sub_0011B330
// Address: 0x11b330 - 0x11b350
void sub_0011B330_0x11b330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B330_0x11b330");
#endif

    ctx->pc = 0x11b330u;

    // 0x11b330: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11b330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11b334: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x11b334u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x11b338: 0xac85004c  sw          $a1, 0x4C($a0)
    ctx->pc = 0x11b338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
    // 0x11b33c: 0xac860044  sw          $a2, 0x44($a0)
    ctx->pc = 0x11b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 6));
    // 0x11b340: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x11b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x11b344: 0x3e00008  jr          $ra
    ctx->pc = 0x11B344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B344u;
        // 0x11b348: 0xac820048  sw          $v0, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B34Cu;
    // 0x11b34c: 0x0  nop
    ctx->pc = 0x11b34cu;
    // NOP
    ctx->pc = 0x11b350u;
}
