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

// Function: sub_0043CEA0
// Address: 0x43cea0 - 0x43cec0
void sub_0043CEA0_0x43cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043CEA0_0x43cea0");
#endif

    switch (ctx->pc) {
        case 0x43cea8u: goto label_43cea8;
        case 0x43ceb8u: goto label_43ceb8;
        default: break;
    }

    ctx->pc = 0x43cea0u;

    // 0x43cea0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x43cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x43cea4: 0xc  syscall     0
    ctx->pc = 0x43cea4u;
    ctx->pc = 0x43CEA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cea8:
    // 0x43cea8: 0x3e00008  jr          $ra
    ctx->pc = 0x43CEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CEB0u;
    // 0x43ceb0: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x43ceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x43ceb4: 0xc  syscall     0
    ctx->pc = 0x43ceb4u;
    ctx->pc = 0x43CEB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ceb8:
    // 0x43ceb8: 0x3e00008  jr          $ra
    ctx->pc = 0x43CEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CEC0u;
}
