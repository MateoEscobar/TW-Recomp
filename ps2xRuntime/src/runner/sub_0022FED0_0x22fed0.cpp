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

// Function: sub_0022FED0
// Address: 0x22fed0 - 0x22fef0
void sub_0022FED0_0x22fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FED0_0x22fed0");
#endif

    switch (ctx->pc) {
        case 0x22fee0u: goto label_22fee0;
        default: break;
    }

    ctx->pc = 0x22fed0u;

    // 0x22fed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22fed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22fed8: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x22FED8u;
    SET_GPR_U32(ctx, 31, 0x22FEE0u);
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x22FED8u, 0x22FEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FEE0u;
label_22fee0:
    // 0x22fee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fee4: 0x3e00008  jr          $ra
    ctx->pc = 0x22FEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEE4u;
        // 0x22fee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FEECu;
    // 0x22feec: 0x0  nop
    ctx->pc = 0x22feecu;
    // NOP
    ctx->pc = 0x22fef0u;
}
