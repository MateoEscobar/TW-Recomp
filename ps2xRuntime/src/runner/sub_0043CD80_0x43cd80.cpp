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

// Function: sub_0043CD80
// Address: 0x43cd80 - 0x43cd90
void sub_0043CD80_0x43cd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043CD80_0x43cd80");
#endif

    switch (ctx->pc) {
        case 0x43cd88u: goto label_43cd88;
        default: break;
    }

    ctx->pc = 0x43cd80u;

    // 0x43cd80: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x43cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x43cd84: 0xc  syscall     0
    ctx->pc = 0x43cd84u;
    ctx->pc = 0x43CD88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cd88:
    // 0x43cd88: 0x3e00008  jr          $ra
    ctx->pc = 0x43CD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CD90u;
}
