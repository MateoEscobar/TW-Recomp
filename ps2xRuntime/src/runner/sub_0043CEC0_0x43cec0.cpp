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

// Function: sub_0043CEC0
// Address: 0x43cec0 - 0x43cf30
void sub_0043CEC0_0x43cec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043CEC0_0x43cec0");
#endif

    switch (ctx->pc) {
        case 0x43cec8u: goto label_43cec8;
        case 0x43ced8u: goto label_43ced8;
        case 0x43cee8u: goto label_43cee8;
        case 0x43cef8u: goto label_43cef8;
        case 0x43cf08u: goto label_43cf08;
        case 0x43cf18u: goto label_43cf18;
        case 0x43cf28u: goto label_43cf28;
        default: break;
    }

    ctx->pc = 0x43cec0u;

    // 0x43cec0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x43cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x43cec4: 0xc  syscall     0
    ctx->pc = 0x43cec4u;
    ctx->pc = 0x43CEC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cec8:
    // 0x43cec8: 0x3e00008  jr          $ra
    ctx->pc = 0x43CEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CED0u;
    // 0x43ced0: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x43ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x43ced4: 0xc  syscall     0
    ctx->pc = 0x43ced4u;
    ctx->pc = 0x43CED8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43ced8:
    // 0x43ced8: 0x3e00008  jr          $ra
    ctx->pc = 0x43CED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CEE0u;
    // 0x43cee0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x43cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x43cee4: 0xc  syscall     0
    ctx->pc = 0x43cee4u;
    ctx->pc = 0x43CEE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cee8:
    // 0x43cee8: 0x3e00008  jr          $ra
    ctx->pc = 0x43CEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CEF0u;
    // 0x43cef0: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x43cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x43cef4: 0xc  syscall     0
    ctx->pc = 0x43cef4u;
    ctx->pc = 0x43CEF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cef8:
    // 0x43cef8: 0x3e00008  jr          $ra
    ctx->pc = 0x43CEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CF00u;
    // 0x43cf00: 0x2403ffda  addiu       $v1, $zero, -0x26
    ctx->pc = 0x43cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
    // 0x43cf04: 0xc  syscall     0
    ctx->pc = 0x43cf04u;
    ctx->pc = 0x43CF08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cf08:
    // 0x43cf08: 0x3e00008  jr          $ra
    ctx->pc = 0x43CF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CF10u;
    // 0x43cf10: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x43cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x43cf14: 0xc  syscall     0
    ctx->pc = 0x43cf14u;
    ctx->pc = 0x43CF18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cf18:
    // 0x43cf18: 0x3e00008  jr          $ra
    ctx->pc = 0x43CF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CF20u;
    // 0x43cf20: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x43cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x43cf24: 0xc  syscall     0
    ctx->pc = 0x43cf24u;
    ctx->pc = 0x43CF28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cf28:
    // 0x43cf28: 0x3e00008  jr          $ra
    ctx->pc = 0x43CF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CF30u;
}
