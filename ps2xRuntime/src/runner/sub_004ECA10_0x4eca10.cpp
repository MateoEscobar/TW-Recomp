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

// Function: sub_004ECA10
// Address: 0x4eca10 - 0x4eca18
void sub_004ECA10_0x4eca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECA10_0x4eca10");
#endif

    ctx->pc = 0x4eca10u;

    // 0x4eca10: 0x3e00008  jr          $ra
    ctx->pc = 0x4ECA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ECA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ECA10u;
        // 0x4eca14: 0xac854130  sw          $a1, 0x4130($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16688), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ECA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ECA18u;
}
