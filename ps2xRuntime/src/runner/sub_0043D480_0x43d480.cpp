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

// Function: sub_0043D480
// Address: 0x43d480 - 0x43d490
void sub_0043D480_0x43d480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D480_0x43d480");
#endif

    switch (ctx->pc) {
        case 0x43d488u: goto label_43d488;
        default: break;
    }

    ctx->pc = 0x43d480u;

    // 0x43d480: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x43d480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x43d484: 0xc  syscall     0
    ctx->pc = 0x43d484u;
    ctx->pc = 0x43D488u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43d488:
    // 0x43d488: 0x3e00008  jr          $ra
    ctx->pc = 0x43D488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D490u;
}
