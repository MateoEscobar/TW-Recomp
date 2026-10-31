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

// Function: sub_0029C3F8
// Address: 0x29c3f8 - 0x29c428
void sub_0029C3F8_0x29c3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C3F8_0x29c3f8");
#endif

    switch (ctx->pc) {
        case 0x29c408u: goto label_29c408;
        default: break;
    }

    ctx->pc = 0x29c3f8u;

    // 0x29c3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c3fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c400: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x29C400u;
    SET_GPR_U32(ctx, 31, 0x29C408u);
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x29C400u, 0x29C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C408u;
label_29c408:
    // 0x29c408: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29c408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29c40c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c410: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x29c410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x29c414: 0x3e00008  jr          $ra
    ctx->pc = 0x29C414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C414u;
        // 0x29c418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C41Cu;
    // 0x29c41c: 0x0  nop
    ctx->pc = 0x29c41cu;
    // NOP
    // 0x29c420: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x29c420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29c424: 0x0  nop
    ctx->pc = 0x29c424u;
    // NOP
    ctx->pc = 0x29c428u;
}
