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

// Function: sub_0043D0F0
// Address: 0x43d0f0 - 0x43d140
void sub_0043D0F0_0x43d0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D0F0_0x43d0f0");
#endif

    switch (ctx->pc) {
        case 0x43d0f8u: goto label_43d0f8;
        case 0x43d108u: goto label_43d108;
        case 0x43d118u: goto label_43d118;
        case 0x43d128u: goto label_43d128;
        case 0x43d138u: goto label_43d138;
        default: break;
    }

    ctx->pc = 0x43d0f0u;

    // 0x43d0f0: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x43d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x43d0f4: 0xc  syscall     0
    ctx->pc = 0x43d0f4u;
    ctx->pc = 0x43D0F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d0f8:
    // 0x43d0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D100u;
    // 0x43d100: 0x2403ffba  addiu       $v1, $zero, -0x46
    ctx->pc = 0x43d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967226));
    // 0x43d104: 0xc  syscall     0
    ctx->pc = 0x43d104u;
    ctx->pc = 0x43D108u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d108:
    // 0x43d108: 0x3e00008  jr          $ra
    ctx->pc = 0x43D108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D110u;
    // 0x43d110: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x43d110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x43d114: 0xc  syscall     0
    ctx->pc = 0x43d114u;
    ctx->pc = 0x43D118u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d118:
    // 0x43d118: 0x3e00008  jr          $ra
    ctx->pc = 0x43D118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D120u;
    // 0x43d120: 0x2403ffb8  addiu       $v1, $zero, -0x48
    ctx->pc = 0x43d120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967224));
    // 0x43d124: 0xc  syscall     0
    ctx->pc = 0x43d124u;
    ctx->pc = 0x43D128u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d128:
    // 0x43d128: 0x3e00008  jr          $ra
    ctx->pc = 0x43D128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D130u;
    // 0x43d130: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x43d130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x43d134: 0xc  syscall     0
    ctx->pc = 0x43d134u;
    ctx->pc = 0x43D138u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d138:
    // 0x43d138: 0x3e00008  jr          $ra
    ctx->pc = 0x43D138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D140u;
}
