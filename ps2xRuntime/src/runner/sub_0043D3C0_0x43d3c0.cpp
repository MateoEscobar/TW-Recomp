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

// Function: sub_0043D3C0
// Address: 0x43d3c0 - 0x43d3e0
void sub_0043D3C0_0x43d3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D3C0_0x43d3c0");
#endif

    switch (ctx->pc) {
        case 0x43d3c8u: goto label_43d3c8;
        case 0x43d3d8u: goto label_43d3d8;
        default: break;
    }

    ctx->pc = 0x43d3c0u;

    // 0x43d3c0: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x43d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x43d3c4: 0xc  syscall     0
    ctx->pc = 0x43d3c4u;
    ctx->pc = 0x43D3C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d3c8:
    // 0x43d3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D3D0u;
    // 0x43d3d0: 0x2403ff90  addiu       $v1, $zero, -0x70
    ctx->pc = 0x43d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967184));
    // 0x43d3d4: 0xc  syscall     0
    ctx->pc = 0x43d3d4u;
    ctx->pc = 0x43D3D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d3d8:
    // 0x43d3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D3E0u;
}
