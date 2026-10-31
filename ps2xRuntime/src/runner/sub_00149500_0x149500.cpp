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

// Function: sub_00149500
// Address: 0x149500 - 0x149520
void sub_00149500_0x149500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149500_0x149500");
#endif

    switch (ctx->pc) {
        case 0x149510u: goto label_149510;
        default: break;
    }

    ctx->pc = 0x149500u;

    // 0x149500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149508: 0xc10c366  jal         func_430D98
    ctx->pc = 0x149508u;
    SET_GPR_U32(ctx, 31, 0x149510u);
    ctx->pc = 0x430D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430D98u, 0x149508u, 0x149510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149510u;
label_149510:
    // 0x149510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149514: 0x3e00008  jr          $ra
    ctx->pc = 0x149514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149514u;
        // 0x149518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14951Cu;
    // 0x14951c: 0x0  nop
    ctx->pc = 0x14951cu;
    // NOP
    ctx->pc = 0x149520u;
}
