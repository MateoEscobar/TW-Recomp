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

// Function: sub_004E85C8
// Address: 0x4e85c8 - 0x4e85d8
void sub_004E85C8_0x4e85c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E85C8_0x4e85c8");
#endif

    ctx->pc = 0x4e85c8u;

    // 0x4e85c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4E85C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E85C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E85D0u;
    // 0x4e85d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4e85d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4e85d4: 0x0  nop
    ctx->pc = 0x4e85d4u;
    // NOP
    ctx->pc = 0x4e85d8u;
}
