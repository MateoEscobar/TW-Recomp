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

// Function: sub_0046CEC8
// Address: 0x46cec8 - 0x46ced8
void sub_0046CEC8_0x46cec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CEC8_0x46cec8");
#endif

    ctx->pc = 0x46cec8u;

    // 0x46cec8: 0xaf8484ec  sw          $a0, -0x7B14($gp)
    ctx->pc = 0x46cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935788), GPR_U32(ctx, 4));
    // 0x46cecc: 0x3e00008  jr          $ra
    ctx->pc = 0x46CECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46CECCu;
        // 0x46ced0: 0xaf8584f0  sw          $a1, -0x7B10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935792), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CED4u;
    // 0x46ced4: 0x0  nop
    ctx->pc = 0x46ced4u;
    // NOP
    ctx->pc = 0x46ced8u;
}
