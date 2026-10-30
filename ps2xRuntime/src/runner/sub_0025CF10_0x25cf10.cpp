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

// Function: sub_0025CF10
// Address: 0x25cf10 - 0x25cf30
void sub_0025CF10_0x25cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CF10_0x25cf10");
#endif

    switch (ctx->pc) {
        case 0x25cf20u: goto label_25cf20;
        default: break;
    }

    ctx->pc = 0x25cf10u;

    // 0x25cf10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25cf14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cf18: 0xc0885fc  jal         func_2217F0
    ctx->pc = 0x25CF18u;
    SET_GPR_U32(ctx, 31, 0x25CF20u);
    ctx->pc = 0x2217F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2217F0u, 0x25CF18u, 0x25CF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF20u;
label_25cf20:
    // 0x25cf20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cf24: 0x3e00008  jr          $ra
    ctx->pc = 0x25CF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF24u;
        // 0x25cf28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CF2Cu;
    // 0x25cf2c: 0x0  nop
    ctx->pc = 0x25cf2cu;
    // NOP
    ctx->pc = 0x25cf30u;
}
