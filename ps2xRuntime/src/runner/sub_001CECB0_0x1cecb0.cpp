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

// Function: sub_001CECB0
// Address: 0x1cecb0 - 0x1cecd0
void sub_001CECB0_0x1cecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CECB0_0x1cecb0");
#endif

    switch (ctx->pc) {
        case 0x1cecc0u: goto label_1cecc0;
        default: break;
    }

    ctx->pc = 0x1cecb0u;

    // 0x1cecb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cecb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cecb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cecb8: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1CECB8u;
    SET_GPR_U32(ctx, 31, 0x1CECC0u);
    ctx->pc = 0x1CECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CECB8u;
    // 0x1cecbc: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1CECB8u, 0x1CECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CECC0u;
label_1cecc0:
    // 0x1cecc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cecc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cecc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CECC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECC4u;
        // 0x1cecc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CECC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CECCCu;
    // 0x1ceccc: 0x0  nop
    ctx->pc = 0x1cecccu;
    // NOP
    ctx->pc = 0x1cecd0u;
}
