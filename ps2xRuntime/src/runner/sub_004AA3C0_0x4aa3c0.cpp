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

// Function: sub_004AA3C0
// Address: 0x4aa3c0 - 0x4aa3d0
void sub_004AA3C0_0x4aa3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA3C0_0x4aa3c0");
#endif

    switch (ctx->pc) {
        case 0x4aa3c8u: goto label_4aa3c8;
        default: break;
    }

    ctx->pc = 0x4aa3c0u;

    // 0x4aa3c0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x4aa3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4aa3c4: 0xc  syscall     0
    ctx->pc = 0x4aa3c4u;
    ctx->pc = 0x4AA3C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_4aa3c8:
    // 0x4aa3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA3D0u;
}
