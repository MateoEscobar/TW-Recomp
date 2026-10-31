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

// Function: sub_00430228
// Address: 0x430228 - 0x430248
void sub_00430228_0x430228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430228_0x430228");
#endif

    switch (ctx->pc) {
        case 0x430238u: goto label_430238;
        default: break;
    }

    ctx->pc = 0x430228u;

    // 0x430228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x430228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x43022c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43022cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x430230: 0xc10bbd2  jal         func_42EF48
    ctx->pc = 0x430230u;
    SET_GPR_U32(ctx, 31, 0x430238u);
    ctx->pc = 0x42EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EF48u, 0x430230u, 0x430238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430238u;
label_430238:
    // 0x430238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x430238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43023c: 0x3e00008  jr          $ra
    ctx->pc = 0x43023Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43023Cu;
        // 0x430240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43023Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430244u;
    // 0x430244: 0x0  nop
    ctx->pc = 0x430244u;
    // NOP
    ctx->pc = 0x430248u;
}
