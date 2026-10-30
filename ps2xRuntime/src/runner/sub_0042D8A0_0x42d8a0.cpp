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

// Function: sub_0042D8A0
// Address: 0x42d8a0 - 0x42d8b0
void sub_0042D8A0_0x42d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042D8A0_0x42d8a0");
#endif

    ctx->pc = 0x42d8a0u;

    // 0x42d8a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x42d8a4: 0x8c625abc  lw          $v0, 0x5ABC($v1)
    ctx->pc = 0x42d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x515ABCu));
    // 0x42d8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x42D8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D8A8u;
        // 0x42d8ac: 0xac645abc  sw          $a0, 0x5ABC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 23228), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42D8B0u;
}
