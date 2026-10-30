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

// Function: sub_0043D080
// Address: 0x43d080 - 0x43d0a0
void sub_0043D080_0x43d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D080_0x43d080");
#endif

    switch (ctx->pc) {
        case 0x43d088u: goto label_43d088;
        case 0x43d098u: goto label_43d098;
        default: break;
    }

    ctx->pc = 0x43d080u;

    // 0x43d080: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x43d080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x43d084: 0xc  syscall     0
    ctx->pc = 0x43d084u;
    ctx->pc = 0x43D088u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d088:
    // 0x43d088: 0x3e00008  jr          $ra
    ctx->pc = 0x43D088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D090u;
    // 0x43d090: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x43d090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x43d094: 0xc  syscall     0
    ctx->pc = 0x43d094u;
    ctx->pc = 0x43D098u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d098:
    // 0x43d098: 0x3e00008  jr          $ra
    ctx->pc = 0x43D098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D0A0u;
}
