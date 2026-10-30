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

// Function: sub_0041CF20
// Address: 0x41cf20 - 0x41cf30
void sub_0041CF20_0x41cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CF20_0x41cf20");
#endif

    ctx->pc = 0x41cf20u;

    // 0x41cf20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x41cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x41cf24: 0x3e00008  jr          $ra
    ctx->pc = 0x41CF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CF24u;
        // 0x41cf28: 0xa08603e8  sb          $a2, 0x3E8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1000), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CF2Cu;
    // 0x41cf2c: 0x0  nop
    ctx->pc = 0x41cf2cu;
    // NOP
    ctx->pc = 0x41cf30u;
}
