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

// Function: sub_0027B778
// Address: 0x27b778 - 0x27b7a0
void sub_0027B778_0x27b778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B778_0x27b778");
#endif

    switch (ctx->pc) {
        case 0x27b788u: goto label_27b788;
        default: break;
    }

    ctx->pc = 0x27b778u;

    // 0x27b778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b77c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b780: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27B780u;
    SET_GPR_U32(ctx, 31, 0x27B788u);
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27B780u, 0x27B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B788u;
label_27b788:
    // 0x27b788: 0x38420017  xori        $v0, $v0, 0x17
    ctx->pc = 0x27b788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)23);
    // 0x27b78c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b790: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27b790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27b794: 0x3e00008  jr          $ra
    ctx->pc = 0x27B794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B794u;
        // 0x27b798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B79Cu;
    // 0x27b79c: 0x0  nop
    ctx->pc = 0x27b79cu;
    // NOP
    ctx->pc = 0x27b7a0u;
}
