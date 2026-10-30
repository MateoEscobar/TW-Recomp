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

// Function: sub_0043CD90
// Address: 0x43cd90 - 0x43cda0
void sub_0043CD90_0x43cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043CD90_0x43cd90");
#endif

    switch (ctx->pc) {
        case 0x43cd98u: goto label_43cd98;
        default: break;
    }

    ctx->pc = 0x43cd90u;

    // 0x43cd90: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x43cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x43cd94: 0xc  syscall     0
    ctx->pc = 0x43cd94u;
    ctx->pc = 0x43CD98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cd98:
    // 0x43cd98: 0x3e00008  jr          $ra
    ctx->pc = 0x43CD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CDA0u;
}
