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

// Function: sub_00418AC8
// Address: 0x418ac8 - 0x418ad8
void sub_00418AC8_0x418ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418AC8_0x418ac8");
#endif

    ctx->pc = 0x418ac8u;

    // 0x418ac8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x418ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x418acc: 0xac850450  sw          $a1, 0x450($a0)
    ctx->pc = 0x418accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1104), GPR_U32(ctx, 5));
    // 0x418ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x418AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418AD0u;
        // 0x418ad4: 0xac45b1c4  sw          $a1, -0x4E3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947268), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418AD8u;
}
