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

// Function: sub_0040C648
// Address: 0x40c648 - 0x40c668
void sub_0040C648_0x40c648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C648_0x40c648");
#endif

    switch (ctx->pc) {
        case 0x40c658u: goto label_40c658;
        default: break;
    }

    ctx->pc = 0x40c648u;

    // 0x40c648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40c648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x40c64c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40c650: 0xc05242e  jal         func_1490B8
    ctx->pc = 0x40C650u;
    SET_GPR_U32(ctx, 31, 0x40C658u);
    ctx->pc = 0x40C654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C650u;
    // 0x40c654: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490B8u, 0x40C650u, 0x40C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C658u;
label_40c658:
    // 0x40c658: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x40c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x40c65c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40c660: 0x3e00008  jr          $ra
    ctx->pc = 0x40C660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C660u;
        // 0x40c664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C668u;
}
