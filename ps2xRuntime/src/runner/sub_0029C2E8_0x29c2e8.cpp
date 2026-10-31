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

// Function: sub_0029C2E8
// Address: 0x29c2e8 - 0x29c310
void sub_0029C2E8_0x29c2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C2E8_0x29c2e8");
#endif

    switch (ctx->pc) {
        case 0x29c2f8u: goto label_29c2f8;
        default: break;
    }

    ctx->pc = 0x29c2e8u;

    // 0x29c2e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c2ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c2f0: 0xc087502  jal         func_21D408
    ctx->pc = 0x29C2F0u;
    SET_GPR_U32(ctx, 31, 0x29C2F8u);
    ctx->pc = 0x29C2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C2F0u;
    // 0x29c2f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29C2F0u, 0x29C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2F8u;
label_29c2f8:
    // 0x29c2f8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x29c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29c2fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c300: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29c300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29c304: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x29c304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x29c308: 0x3e00008  jr          $ra
    ctx->pc = 0x29C308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C308u;
        // 0x29c30c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C310u;
}
