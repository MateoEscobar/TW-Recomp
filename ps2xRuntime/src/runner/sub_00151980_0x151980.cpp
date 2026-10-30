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

// Function: sub_00151980
// Address: 0x151980 - 0x151990
void sub_00151980_0x151980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151980_0x151980");
#endif

    ctx->pc = 0x151980u;

    // 0x151980: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x151980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x151984: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x151984u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50BD30u));
    // 0x151988: 0x3e00008  jr          $ra
    ctx->pc = 0x151988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151990u;
}
