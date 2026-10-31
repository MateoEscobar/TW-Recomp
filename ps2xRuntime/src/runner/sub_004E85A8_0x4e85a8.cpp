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

// Function: sub_004E85A8
// Address: 0x4e85a8 - 0x4e85b8
void sub_004E85A8_0x4e85a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E85A8_0x4e85a8");
#endif

    ctx->pc = 0x4e85a8u;

    // 0x4e85a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4E85A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E85A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E85B0u;
    // 0x4e85b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4e85b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4e85b4: 0x0  nop
    ctx->pc = 0x4e85b4u;
    // NOP
    ctx->pc = 0x4e85b8u;
}
