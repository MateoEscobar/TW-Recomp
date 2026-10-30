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

// Function: sub_00430378
// Address: 0x430378 - 0x430398
void sub_00430378_0x430378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430378_0x430378");
#endif

    switch (ctx->pc) {
        case 0x430388u: goto label_430388;
        default: break;
    }

    ctx->pc = 0x430378u;

    // 0x430378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x430378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x43037c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43037cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x430380: 0xc10bbd2  jal         func_42EF48
    ctx->pc = 0x430380u;
    SET_GPR_U32(ctx, 31, 0x430388u);
    ctx->pc = 0x42EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EF48u, 0x430380u, 0x430388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430388u;
label_430388:
    // 0x430388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x430388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43038c: 0x3e00008  jr          $ra
    ctx->pc = 0x43038Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43038Cu;
        // 0x430390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43038Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430394u;
    // 0x430394: 0x0  nop
    ctx->pc = 0x430394u;
    // NOP
    ctx->pc = 0x430398u;
}
