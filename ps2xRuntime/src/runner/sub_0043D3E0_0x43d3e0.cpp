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

// Function: sub_0043D3E0
// Address: 0x43d3e0 - 0x43d410
void sub_0043D3E0_0x43d3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D3E0_0x43d3e0");
#endif

    switch (ctx->pc) {
        case 0x43d3e8u: goto label_43d3e8;
        case 0x43d3f8u: goto label_43d3f8;
        case 0x43d408u: goto label_43d408;
        default: break;
    }

    ctx->pc = 0x43d3e0u;

    // 0x43d3e0: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x43d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x43d3e4: 0xc  syscall     0
    ctx->pc = 0x43d3e4u;
    ctx->pc = 0x43D3E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d3e8:
    // 0x43d3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D3F0u;
    // 0x43d3f0: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x43d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x43d3f4: 0xc  syscall     0
    ctx->pc = 0x43d3f4u;
    ctx->pc = 0x43D3F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d3f8:
    // 0x43d3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D400u;
    // 0x43d400: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x43d400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x43d404: 0xc  syscall     0
    ctx->pc = 0x43d404u;
    ctx->pc = 0x43D408u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d408:
    // 0x43d408: 0x3e00008  jr          $ra
    ctx->pc = 0x43D408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D410u;
}
