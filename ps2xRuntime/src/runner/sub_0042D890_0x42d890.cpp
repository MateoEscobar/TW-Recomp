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

// Function: sub_0042D890
// Address: 0x42d890 - 0x42d8a0
void sub_0042D890_0x42d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042D890_0x42d890");
#endif

    ctx->pc = 0x42d890u;

    // 0x42d890: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42d890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x42d894: 0x8c6254c4  lw          $v0, 0x54C4($v1)
    ctx->pc = 0x42d894u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5154C4u));
    // 0x42d898: 0x3e00008  jr          $ra
    ctx->pc = 0x42D898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D898u;
        // 0x42d89c: 0xac6454c4  sw          $a0, 0x54C4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 21700), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42D8A0u;
}
