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

// Function: sub_0043D440
// Address: 0x43d440 - 0x43d460
void sub_0043D440_0x43d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D440_0x43d440");
#endif

    switch (ctx->pc) {
        case 0x43d448u: goto label_43d448;
        case 0x43d458u: goto label_43d458;
        default: break;
    }

    ctx->pc = 0x43d440u;

    // 0x43d440: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x43d440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x43d444: 0xc  syscall     0
    ctx->pc = 0x43d444u;
    ctx->pc = 0x43D448u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d448:
    // 0x43d448: 0x3e00008  jr          $ra
    ctx->pc = 0x43D448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D450u;
    // 0x43d450: 0x2403ff8a  addiu       $v1, $zero, -0x76
    ctx->pc = 0x43d450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967178));
    // 0x43d454: 0xc  syscall     0
    ctx->pc = 0x43d454u;
    ctx->pc = 0x43D458u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d458:
    // 0x43d458: 0x3e00008  jr          $ra
    ctx->pc = 0x43D458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D460u;
}
