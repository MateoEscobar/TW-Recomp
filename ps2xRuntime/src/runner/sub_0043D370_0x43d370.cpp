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

// Function: sub_0043D370
// Address: 0x43d370 - 0x43d3c0
void sub_0043D370_0x43d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D370_0x43d370");
#endif

    switch (ctx->pc) {
        case 0x43d378u: goto label_43d378;
        case 0x43d388u: goto label_43d388;
        case 0x43d398u: goto label_43d398;
        case 0x43d3a8u: goto label_43d3a8;
        case 0x43d3b8u: goto label_43d3b8;
        default: break;
    }

    ctx->pc = 0x43d370u;

    // 0x43d370: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x43d370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x43d374: 0xc  syscall     0
    ctx->pc = 0x43d374u;
    ctx->pc = 0x43D378u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d378:
    // 0x43d378: 0x3e00008  jr          $ra
    ctx->pc = 0x43D378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D380u;
    // 0x43d380: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x43d380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x43d384: 0xc  syscall     0
    ctx->pc = 0x43d384u;
    ctx->pc = 0x43D388u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d388:
    // 0x43d388: 0x3e00008  jr          $ra
    ctx->pc = 0x43D388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D390u;
    // 0x43d390: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x43d390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x43d394: 0xc  syscall     0
    ctx->pc = 0x43d394u;
    ctx->pc = 0x43D398u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d398:
    // 0x43d398: 0x3e00008  jr          $ra
    ctx->pc = 0x43D398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D3A0u;
    // 0x43d3a0: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x43d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x43d3a4: 0xc  syscall     0
    ctx->pc = 0x43d3a4u;
    ctx->pc = 0x43D3A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d3a8:
    // 0x43d3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D3B0u;
    // 0x43d3b0: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x43d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x43d3b4: 0xc  syscall     0
    ctx->pc = 0x43d3b4u;
    ctx->pc = 0x43D3B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d3b8:
    // 0x43d3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D3C0u;
}
