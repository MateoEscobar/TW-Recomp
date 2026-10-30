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

// Function: sub_00111020
// Address: 0x111020 - 0x111040
void sub_00111020_0x111020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111020_0x111020");
#endif

    switch (ctx->pc) {
        case 0x111030u: goto label_111030;
        default: break;
    }

    ctx->pc = 0x111020u;

    // 0x111020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111028: 0xc0458a8  jal         func_1162A0
    ctx->pc = 0x111028u;
    SET_GPR_U32(ctx, 31, 0x111030u);
    ctx->pc = 0x11102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111028u;
    // 0x11102c: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1162A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1162A0u, 0x111028u, 0x111030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111030u;
label_111030:
    // 0x111030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111034: 0x3e00008  jr          $ra
    ctx->pc = 0x111034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111034u;
        // 0x111038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11103Cu;
    // 0x11103c: 0x0  nop
    ctx->pc = 0x11103cu;
    // NOP
    ctx->pc = 0x111040u;
}
