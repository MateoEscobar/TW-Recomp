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

// Function: sub_0043CF50
// Address: 0x43cf50 - 0x43cf90
void sub_0043CF50_0x43cf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043CF50_0x43cf50");
#endif

    switch (ctx->pc) {
        case 0x43cf58u: goto label_43cf58;
        case 0x43cf68u: goto label_43cf68;
        case 0x43cf78u: goto label_43cf78;
        case 0x43cf88u: goto label_43cf88;
        default: break;
    }

    ctx->pc = 0x43cf50u;

    // 0x43cf50: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x43cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x43cf54: 0xc  syscall     0
    ctx->pc = 0x43cf54u;
    ctx->pc = 0x43CF58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cf58:
    // 0x43cf58: 0x3e00008  jr          $ra
    ctx->pc = 0x43CF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CF60u;
    // 0x43cf60: 0x2403ffd4  addiu       $v1, $zero, -0x2C
    ctx->pc = 0x43cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
    // 0x43cf64: 0xc  syscall     0
    ctx->pc = 0x43cf64u;
    ctx->pc = 0x43CF68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cf68:
    // 0x43cf68: 0x3e00008  jr          $ra
    ctx->pc = 0x43CF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CF70u;
    // 0x43cf70: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x43cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x43cf74: 0xc  syscall     0
    ctx->pc = 0x43cf74u;
    ctx->pc = 0x43CF78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cf78:
    // 0x43cf78: 0x3e00008  jr          $ra
    ctx->pc = 0x43CF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CF80u;
    // 0x43cf80: 0x2403ffd2  addiu       $v1, $zero, -0x2E
    ctx->pc = 0x43cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x43cf84: 0xc  syscall     0
    ctx->pc = 0x43cf84u;
    ctx->pc = 0x43CF88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cf88:
    // 0x43cf88: 0x3e00008  jr          $ra
    ctx->pc = 0x43CF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CF90u;
}
