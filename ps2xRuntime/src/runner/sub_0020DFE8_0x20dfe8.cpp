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

// Function: sub_0020DFE8
// Address: 0x20dfe8 - 0x20e008
void sub_0020DFE8_0x20dfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DFE8_0x20dfe8");
#endif

    switch (ctx->pc) {
        case 0x20dff8u: goto label_20dff8;
        default: break;
    }

    ctx->pc = 0x20dfe8u;

    // 0x20dfe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20dfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20dfec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20dfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20dff0: 0xc083816  jal         func_20E058
    ctx->pc = 0x20DFF0u;
    SET_GPR_U32(ctx, 31, 0x20DFF8u);
    ctx->pc = 0x20E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E058u, 0x20DFF0u, 0x20DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DFF8u;
label_20dff8:
    // 0x20dff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20dff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dffc: 0x3e00008  jr          $ra
    ctx->pc = 0x20DFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFFCu;
        // 0x20e000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E004u;
    // 0x20e004: 0x0  nop
    ctx->pc = 0x20e004u;
    // NOP
    ctx->pc = 0x20e008u;
}
