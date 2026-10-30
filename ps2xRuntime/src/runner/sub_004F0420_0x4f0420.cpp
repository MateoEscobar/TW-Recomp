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

// Function: sub_004F0420
// Address: 0x4f0420 - 0x4f0440
void sub_004F0420_0x4f0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0420_0x4f0420");
#endif

    switch (ctx->pc) {
        case 0x4f0434u: goto label_4f0434;
        default: break;
    }

    ctx->pc = 0x4f0420u;

    // 0x4f0420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f0420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f0424: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x4f0424u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x4f0428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f0428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f042c: 0xc13b6ea  jal         func_4EDBA8
    ctx->pc = 0x4F042Cu;
    SET_GPR_U32(ctx, 31, 0x4F0434u);
    ctx->pc = 0x4F0430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F042Cu;
    // 0x4f0430: 0x24c61d80  addiu       $a2, $a2, 0x1D80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDBA8u, 0x4F042Cu, 0x4F0434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0434u;
label_4f0434:
    // 0x4f0434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f0434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0438: 0x3e00008  jr          $ra
    ctx->pc = 0x4F0438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0438u;
        // 0x4f043c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0440u;
}
