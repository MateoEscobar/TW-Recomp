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

// Function: sub_001C3AE0
// Address: 0x1c3ae0 - 0x1c3ae8
void sub_001C3AE0_0x1c3ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3AE0_0x1c3ae0");
#endif

    ctx->pc = 0x1c3ae0u;

    // 0x1c3ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3AE0u;
        // 0x1c3ae4: 0xac850428  sw          $a1, 0x428($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1064), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3AE8u;
}
