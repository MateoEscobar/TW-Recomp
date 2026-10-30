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

// Function: sub_001B6100
// Address: 0x1b6100 - 0x1b6120
void sub_001B6100_0x1b6100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6100_0x1b6100");
#endif

    switch (ctx->pc) {
        case 0x1b6110u: goto label_1b6110;
        default: break;
    }

    ctx->pc = 0x1b6100u;

    // 0x1b6100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6108: 0xc07a6ba  jal         func_1E9AE8
    ctx->pc = 0x1B6108u;
    SET_GPR_U32(ctx, 31, 0x1B6110u);
    ctx->pc = 0x1B610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6108u;
    // 0x1b610c: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AE8u, 0x1B6108u, 0x1B6110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6110u;
label_1b6110:
    // 0x1b6110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6114: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6114u;
        // 0x1b6118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B611Cu;
    // 0x1b611c: 0x0  nop
    ctx->pc = 0x1b611cu;
    // NOP
    ctx->pc = 0x1b6120u;
}
