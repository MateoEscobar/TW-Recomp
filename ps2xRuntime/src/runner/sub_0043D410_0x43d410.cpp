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

// Function: sub_0043D410
// Address: 0x43d410 - 0x43d440
void sub_0043D410_0x43d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D410_0x43d410");
#endif

    switch (ctx->pc) {
        case 0x43d418u: goto label_43d418;
        case 0x43d428u: goto label_43d428;
        case 0x43d438u: goto label_43d438;
        default: break;
    }

    ctx->pc = 0x43d410u;

    // 0x43d410: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x43d410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x43d414: 0xc  syscall     0
    ctx->pc = 0x43d414u;
    ctx->pc = 0x43D418u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d418:
    // 0x43d418: 0x3e00008  jr          $ra
    ctx->pc = 0x43D418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D420u;
    // 0x43d420: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x43d420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x43d424: 0xc  syscall     0
    ctx->pc = 0x43d424u;
    ctx->pc = 0x43D428u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d428:
    // 0x43d428: 0x3e00008  jr          $ra
    ctx->pc = 0x43D428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D430u;
    // 0x43d430: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x43d430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x43d434: 0xc  syscall     0
    ctx->pc = 0x43d434u;
    ctx->pc = 0x43D438u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d438:
    // 0x43d438: 0x3e00008  jr          $ra
    ctx->pc = 0x43D438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D440u;
}
