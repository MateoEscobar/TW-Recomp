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

// Function: sub_00443408
// Address: 0x443408 - 0x443420
void sub_00443408_0x443408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443408_0x443408");
#endif

    switch (ctx->pc) {
        case 0x443410u: goto label_443410;
        default: break;
    }

    ctx->pc = 0x443408u;

    // 0x443408: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x443408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x44340c: 0xc  syscall     0
    ctx->pc = 0x44340cu;
    ctx->pc = 0x443410u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_443410:
    // 0x443410: 0x3e00008  jr          $ra
    ctx->pc = 0x443410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443418u;
    // 0x443418: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x443418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x44341c: 0x0  nop
    ctx->pc = 0x44341cu;
    // NOP
    ctx->pc = 0x443420u;
}
