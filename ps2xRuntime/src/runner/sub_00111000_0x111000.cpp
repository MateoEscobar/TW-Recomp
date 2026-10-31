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

// Function: sub_00111000
// Address: 0x111000 - 0x111020
void sub_00111000_0x111000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111000_0x111000");
#endif

    switch (ctx->pc) {
        case 0x111010u: goto label_111010;
        default: break;
    }

    ctx->pc = 0x111000u;

    // 0x111000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111008: 0xc045820  jal         func_116080
    ctx->pc = 0x111008u;
    SET_GPR_U32(ctx, 31, 0x111010u);
    ctx->pc = 0x11100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111008u;
    // 0x11100c: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116080u, 0x111008u, 0x111010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111010u;
label_111010:
    // 0x111010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111014: 0x3e00008  jr          $ra
    ctx->pc = 0x111014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111014u;
        // 0x111018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11101Cu;
    // 0x11101c: 0x0  nop
    ctx->pc = 0x11101cu;
    // NOP
    ctx->pc = 0x111020u;
}
