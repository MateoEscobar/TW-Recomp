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

// Function: sub_00114060
// Address: 0x114060 - 0x114088
void sub_00114060_0x114060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114060_0x114060");
#endif

    switch (ctx->pc) {
        case 0x11407cu: goto label_11407c;
        default: break;
    }

    ctx->pc = 0x114060u;

    // 0x114060: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x114060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114064: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x114064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x114068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11406c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x11406cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x114070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114074: 0xc04443a  jal         func_1110E8
    ctx->pc = 0x114074u;
    SET_GPR_U32(ctx, 31, 0x11407Cu);
    ctx->pc = 0x1110E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110E8u, 0x114074u, 0x11407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11407Cu;
label_11407c:
    // 0x11407c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11407cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114080: 0x3e00008  jr          $ra
    ctx->pc = 0x114080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114080u;
        // 0x114084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114088u;
}
