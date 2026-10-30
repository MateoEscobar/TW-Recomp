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

// Function: sub_00111130
// Address: 0x111130 - 0x111150
void sub_00111130_0x111130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111130_0x111130");
#endif

    switch (ctx->pc) {
        case 0x111140u: goto label_111140;
        default: break;
    }

    ctx->pc = 0x111130u;

    // 0x111130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111138: 0xc045a0a  jal         func_116828
    ctx->pc = 0x111138u;
    SET_GPR_U32(ctx, 31, 0x111140u);
    ctx->pc = 0x11113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111138u;
    // 0x11113c: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116828u, 0x111138u, 0x111140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111140u;
label_111140:
    // 0x111140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111144: 0x3e00008  jr          $ra
    ctx->pc = 0x111144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111144u;
        // 0x111148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11114Cu;
    // 0x11114c: 0x0  nop
    ctx->pc = 0x11114cu;
    // NOP
    ctx->pc = 0x111150u;
}
