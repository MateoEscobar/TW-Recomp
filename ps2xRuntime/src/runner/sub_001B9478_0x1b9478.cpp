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

// Function: sub_001B9478
// Address: 0x1b9478 - 0x1b9480
void sub_001B9478_0x1b9478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9478_0x1b9478");
#endif

    ctx->pc = 0x1b9478u;

    // 0x1b9478: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9478u;
        // 0x1b947c: 0xa085017c  sb          $a1, 0x17C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 380), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9480u;
}
