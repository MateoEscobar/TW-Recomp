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

// Function: sub_004DB250
// Address: 0x4db250 - 0x4db258
void sub_004DB250_0x4db250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB250_0x4db250");
#endif

    ctx->pc = 0x4db250u;

    // 0x4db250: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB250u;
        // 0x4db254: 0xa08501d6  sb          $a1, 0x1D6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 470), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB258u;
}
