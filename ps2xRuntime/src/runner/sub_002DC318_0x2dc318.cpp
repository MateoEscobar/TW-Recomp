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

// Function: sub_002DC318
// Address: 0x2dc318 - 0x2dc338
void sub_002DC318_0x2dc318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC318_0x2dc318");
#endif

    switch (ctx->pc) {
        case 0x2dc328u: goto label_2dc328;
        default: break;
    }

    ctx->pc = 0x2dc318u;

    // 0x2dc318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc320: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2DC320u;
    SET_GPR_U32(ctx, 31, 0x2DC328u);
    ctx->pc = 0x2DC324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC320u;
    // 0x2dc324: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2DC320u, 0x2DC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC328u;
label_2dc328:
    // 0x2dc328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc32c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC32Cu;
        // 0x2dc330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC334u;
    // 0x2dc334: 0x0  nop
    ctx->pc = 0x2dc334u;
    // NOP
    ctx->pc = 0x2dc338u;
}
