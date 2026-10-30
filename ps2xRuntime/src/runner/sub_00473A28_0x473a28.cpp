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

// Function: sub_00473A28
// Address: 0x473a28 - 0x473a48
void sub_00473A28_0x473a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473A28_0x473a28");
#endif

    switch (ctx->pc) {
        case 0x473a38u: goto label_473a38;
        default: break;
    }

    ctx->pc = 0x473a28u;

    // 0x473a28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x473a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x473a2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x473a30: 0xc11d8e0  jal         func_476380
    ctx->pc = 0x473A30u;
    SET_GPR_U32(ctx, 31, 0x473A38u);
    ctx->pc = 0x476380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476380u, 0x473A30u, 0x473A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473A38u;
label_473a38:
    // 0x473a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x473A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473A3Cu;
        // 0x473a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473A44u;
    // 0x473a44: 0x0  nop
    ctx->pc = 0x473a44u;
    // NOP
    ctx->pc = 0x473a48u;
}
