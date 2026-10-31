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

// Function: sub_004CE7D0
// Address: 0x4ce7d0 - 0x4ce7f8
void sub_004CE7D0_0x4ce7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CE7D0_0x4ce7d0");
#endif

    ctx->pc = 0x4ce7d0u;

    // 0x4ce7d0: 0x0  nop
    ctx->pc = 0x4ce7d0u;
    // NOP
    // 0x4ce7d4: 0x0  nop
    ctx->pc = 0x4ce7d4u;
    // NOP
    // 0x4ce7d8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x4ce7d8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x4ce7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE7E4u;
    // 0x4ce7e4: 0x0  nop
    ctx->pc = 0x4ce7e4u;
    // NOP
    // 0x4ce7e8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x4ce7e8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x4ce7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE7F4u;
    // 0x4ce7f4: 0x0  nop
    ctx->pc = 0x4ce7f4u;
    // NOP
    ctx->pc = 0x4ce7f8u;
}
