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

// Function: sub_001488F8
// Address: 0x1488f8 - 0x148920
void sub_001488F8_0x1488f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001488F8_0x1488f8");
#endif

    switch (ctx->pc) {
        case 0x148908u: goto label_148908;
        case 0x148914u: goto label_148914;
        default: break;
    }

    ctx->pc = 0x1488f8u;

    // 0x1488f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1488f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1488fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1488fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148900: 0xc052548  jal         func_149520
    ctx->pc = 0x148900u;
    SET_GPR_U32(ctx, 31, 0x148908u);
    ctx->pc = 0x149520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149520u, 0x148900u, 0x148908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148908u;
label_148908:
    // 0x148908: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x148908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14890c: 0xc043d86  jal         func_10F618
    ctx->pc = 0x14890Cu;
    SET_GPR_U32(ctx, 31, 0x148914u);
    ctx->pc = 0x148910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14890Cu;
    // 0x148910: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F618u, 0x14890Cu, 0x148914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148914u;
label_148914:
    // 0x148914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148918: 0x3e00008  jr          $ra
    ctx->pc = 0x148918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148918u;
        // 0x14891c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148920u;
}
