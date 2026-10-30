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

// Function: sub_0043D140
// Address: 0x43d140 - 0x43d150
void sub_0043D140_0x43d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D140_0x43d140");
#endif

    switch (ctx->pc) {
        case 0x43d148u: goto label_43d148;
        default: break;
    }

    ctx->pc = 0x43d140u;

    // 0x43d140: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x43d140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x43d144: 0xc  syscall     0
    ctx->pc = 0x43d144u;
    ctx->pc = 0x43D148u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d148:
    // 0x43d148: 0x3e00008  jr          $ra
    ctx->pc = 0x43D148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D150u;
}
