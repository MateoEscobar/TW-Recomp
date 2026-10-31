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

// Function: sub_0043D4D0
// Address: 0x43d4d0 - 0x43d500
void sub_0043D4D0_0x43d4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D4D0_0x43d4d0");
#endif

    switch (ctx->pc) {
        case 0x43d4d8u: goto label_43d4d8;
        case 0x43d4e8u: goto label_43d4e8;
        case 0x43d4f8u: goto label_43d4f8;
        default: break;
    }

    ctx->pc = 0x43d4d0u;

    // 0x43d4d0: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x43d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x43d4d4: 0xc  syscall     0
    ctx->pc = 0x43d4d4u;
    ctx->pc = 0x43D4D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d4d8:
    // 0x43d4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D4E0u;
    // 0x43d4e0: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x43d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x43d4e4: 0xc  syscall     0
    ctx->pc = 0x43d4e4u;
    ctx->pc = 0x43D4E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d4e8:
    // 0x43d4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D4F0u;
    // 0x43d4f0: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x43d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x43d4f4: 0xc  syscall     0
    ctx->pc = 0x43d4f4u;
    ctx->pc = 0x43D4F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d4f8:
    // 0x43d4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D500u;
}
