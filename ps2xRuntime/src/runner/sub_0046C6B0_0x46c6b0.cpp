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

// Function: sub_0046C6B0
// Address: 0x46c6b0 - 0x46c6c0
void sub_0046C6B0_0x46c6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C6B0_0x46c6b0");
#endif

    ctx->pc = 0x46c6b0u;

    // 0x46c6b0: 0xaf8484dc  sw          $a0, -0x7B24($gp)
    ctx->pc = 0x46c6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935772), GPR_U32(ctx, 4));
    // 0x46c6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x46C6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C6B4u;
        // 0x46c6b8: 0xaf8584e0  sw          $a1, -0x7B20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935776), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C6BCu;
    // 0x46c6bc: 0x0  nop
    ctx->pc = 0x46c6bcu;
    // NOP
    ctx->pc = 0x46c6c0u;
}
