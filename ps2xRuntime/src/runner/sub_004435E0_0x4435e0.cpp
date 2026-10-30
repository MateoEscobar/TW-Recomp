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

// Function: sub_004435E0
// Address: 0x4435e0 - 0x4435f0
void sub_004435E0_0x4435e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004435E0_0x4435e0");
#endif

    switch (ctx->pc) {
        case 0x4435e8u: goto label_4435e8;
        default: break;
    }

    ctx->pc = 0x4435e0u;

    // 0x4435e0: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x4435e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x4435e4: 0xc  syscall     0
    ctx->pc = 0x4435e4u;
    ctx->pc = 0x4435E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_4435e8:
    // 0x4435e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4435E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4435E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4435F0u;
}
