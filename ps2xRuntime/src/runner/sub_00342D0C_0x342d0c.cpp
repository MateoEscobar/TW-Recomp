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

// Function: sub_00342D0C
// Address: 0x342d0c - 0x342d18
void sub_00342D0C_0x342d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342D0C_0x342d0c");
#endif

    ctx->pc = 0x342d0cu;

    // 0x342d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x342D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D0Cu;
        // 0x342d10: 0x7c820050  sq          $v0, 0x50($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342D14u;
    // 0x342d14: 0x0  nop
    ctx->pc = 0x342d14u;
    // NOP
    ctx->pc = 0x342d18u;
}
