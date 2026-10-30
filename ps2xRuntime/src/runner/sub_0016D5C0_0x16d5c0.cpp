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

// Function: sub_0016D5C0
// Address: 0x16d5c0 - 0x16d5d0
void sub_0016D5C0_0x16d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D5C0_0x16d5c0");
#endif

    ctx->pc = 0x16d5c0u;

    // 0x16d5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x16D5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D5C8u;
    // 0x16d5c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16d5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16d5cc: 0x0  nop
    ctx->pc = 0x16d5ccu;
    // NOP
    ctx->pc = 0x16d5d0u;
}
