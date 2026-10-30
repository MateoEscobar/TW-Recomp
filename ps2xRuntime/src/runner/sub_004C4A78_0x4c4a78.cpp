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

// Function: sub_004C4A78
// Address: 0x4c4a78 - 0x4c4a88
void sub_004C4A78_0x4c4a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4A78_0x4c4a78");
#endif

    ctx->pc = 0x4c4a78u;

    // 0x4c4a78: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4c4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4c4a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4A7Cu;
        // 0x4c4a80: 0x24424258  addiu       $v0, $v0, 0x4258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16984));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4A84u;
    // 0x4c4a84: 0x0  nop
    ctx->pc = 0x4c4a84u;
    // NOP
    ctx->pc = 0x4c4a88u;
}
