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

// Function: sub_0041B888
// Address: 0x41b888 - 0x41b8a0
void sub_0041B888_0x41b888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B888_0x41b888");
#endif

    ctx->pc = 0x41b888u;

    // 0x41b888: 0xa08802a6  sb          $t0, 0x2A6($a0)
    ctx->pc = 0x41b888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 678), (uint8_t)GPR_U32(ctx, 8));
    // 0x41b88c: 0xa08502a3  sb          $a1, 0x2A3($a0)
    ctx->pc = 0x41b88cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 675), (uint8_t)GPR_U32(ctx, 5));
    // 0x41b890: 0xa08602a4  sb          $a2, 0x2A4($a0)
    ctx->pc = 0x41b890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 676), (uint8_t)GPR_U32(ctx, 6));
    // 0x41b894: 0x3e00008  jr          $ra
    ctx->pc = 0x41B894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B894u;
        // 0x41b898: 0xa08702a5  sb          $a3, 0x2A5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 677), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B89Cu;
    // 0x41b89c: 0x0  nop
    ctx->pc = 0x41b89cu;
    // NOP
    ctx->pc = 0x41b8a0u;
}
