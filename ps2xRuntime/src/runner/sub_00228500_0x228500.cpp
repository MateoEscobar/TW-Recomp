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

// Function: sub_00228500
// Address: 0x228500 - 0x228520
void sub_00228500_0x228500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228500_0x228500");
#endif

    switch (ctx->pc) {
        case 0x228510u: goto label_228510;
        default: break;
    }

    ctx->pc = 0x228500u;

    // 0x228500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228508: 0xc089998  jal         func_226660
    ctx->pc = 0x228508u;
    SET_GPR_U32(ctx, 31, 0x228510u);
    ctx->pc = 0x22850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228508u;
    // 0x22850c: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x228508u, 0x228510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228510u;
label_228510:
    // 0x228510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228514: 0x3e00008  jr          $ra
    ctx->pc = 0x228514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228514u;
        // 0x228518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22851Cu;
    // 0x22851c: 0x0  nop
    ctx->pc = 0x22851cu;
    // NOP
    ctx->pc = 0x228520u;
}
