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

// Function: sub_0043CF30
// Address: 0x43cf30 - 0x43cf50
void sub_0043CF30_0x43cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043CF30_0x43cf30");
#endif

    switch (ctx->pc) {
        case 0x43cf38u: goto label_43cf38;
        case 0x43cf48u: goto label_43cf48;
        default: break;
    }

    ctx->pc = 0x43cf30u;

    // 0x43cf30: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x43cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x43cf34: 0xc  syscall     0
    ctx->pc = 0x43cf34u;
    ctx->pc = 0x43CF38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cf38:
    // 0x43cf38: 0x3e00008  jr          $ra
    ctx->pc = 0x43CF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CF40u;
    // 0x43cf40: 0x2403ffd6  addiu       $v1, $zero, -0x2A
    ctx->pc = 0x43cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
    // 0x43cf44: 0xc  syscall     0
    ctx->pc = 0x43cf44u;
    ctx->pc = 0x43CF48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_43cf48:
    // 0x43cf48: 0x3e00008  jr          $ra
    ctx->pc = 0x43CF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43CF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43CF50u;
}
