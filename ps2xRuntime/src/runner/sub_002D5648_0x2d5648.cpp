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

// Function: sub_002D5648
// Address: 0x2d5648 - 0x2d5668
void sub_002D5648_0x2d5648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5648_0x2d5648");
#endif

    switch (ctx->pc) {
        case 0x2d565cu: goto label_2d565c;
        default: break;
    }

    ctx->pc = 0x2d5648u;

    // 0x2d5648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d564c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d564cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5650: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d5650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5654: 0xc08c6d8  jal         func_231B60
    ctx->pc = 0x2D5654u;
    SET_GPR_U32(ctx, 31, 0x2D565Cu);
    ctx->pc = 0x2D5658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5654u;
    // 0x2d5658: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B60u, 0x2D5654u, 0x2D565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D565Cu;
label_2d565c:
    // 0x2d565c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d565cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5660: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5660u;
        // 0x2d5664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5668u;
}
