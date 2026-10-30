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

// Function: sub_002DD6F8
// Address: 0x2dd6f8 - 0x2dd718
void sub_002DD6F8_0x2dd6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD6F8_0x2dd6f8");
#endif

    switch (ctx->pc) {
        case 0x2dd70cu: goto label_2dd70c;
        default: break;
    }

    ctx->pc = 0x2dd6f8u;

    // 0x2dd6f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dd6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dd6fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd700: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2dd700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dd704: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2DD704u;
    SET_GPR_U32(ctx, 31, 0x2DD70Cu);
    ctx->pc = 0x2DD708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD704u;
    // 0x2dd708: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2DD704u, 0x2DD70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD70Cu;
label_2dd70c:
    // 0x2dd70c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd710: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD710u;
        // 0x2dd714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD718u;
}
