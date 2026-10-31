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

// Function: sub_00225500
// Address: 0x225500 - 0x225520
void sub_00225500_0x225500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225500_0x225500");
#endif

    switch (ctx->pc) {
        case 0x225510u: goto label_225510;
        default: break;
    }

    ctx->pc = 0x225500u;

    // 0x225500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225508: 0xc088ed2  jal         func_223B48
    ctx->pc = 0x225508u;
    SET_GPR_U32(ctx, 31, 0x225510u);
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x225508u, 0x225510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225510u;
label_225510:
    // 0x225510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225514: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x225514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x225518: 0x3e00008  jr          $ra
    ctx->pc = 0x225518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225518u;
        // 0x22551c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225520u;
}
