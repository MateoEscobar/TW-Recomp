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

// Function: sub_0043D4B0
// Address: 0x43d4b0 - 0x43d4d0
void sub_0043D4B0_0x43d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D4B0_0x43d4b0");
#endif

    switch (ctx->pc) {
        case 0x43d4b8u: goto label_43d4b8;
        case 0x43d4c8u: goto label_43d4c8;
        default: break;
    }

    ctx->pc = 0x43d4b0u;

    // 0x43d4b0: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x43d4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x43d4b4: 0xc  syscall     0
    ctx->pc = 0x43d4b4u;
    ctx->pc = 0x43D4B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d4b8:
    // 0x43d4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D4C0u;
    // 0x43d4c0: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x43d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x43d4c4: 0xc  syscall     0
    ctx->pc = 0x43d4c4u;
    ctx->pc = 0x43D4C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d4c8:
    // 0x43d4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D4D0u;
}
