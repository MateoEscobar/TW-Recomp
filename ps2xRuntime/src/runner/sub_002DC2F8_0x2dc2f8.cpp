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

// Function: sub_002DC2F8
// Address: 0x2dc2f8 - 0x2dc318
void sub_002DC2F8_0x2dc2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC2F8_0x2dc2f8");
#endif

    switch (ctx->pc) {
        case 0x2dc308u: goto label_2dc308;
        default: break;
    }

    ctx->pc = 0x2dc2f8u;

    // 0x2dc2f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc2fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc300: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2DC300u;
    SET_GPR_U32(ctx, 31, 0x2DC308u);
    ctx->pc = 0x2DC304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC300u;
    // 0x2dc304: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2DC300u, 0x2DC308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC308u;
label_2dc308:
    // 0x2dc308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc30c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC30Cu;
        // 0x2dc310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC314u;
    // 0x2dc314: 0x0  nop
    ctx->pc = 0x2dc314u;
    // NOP
    ctx->pc = 0x2dc318u;
}
