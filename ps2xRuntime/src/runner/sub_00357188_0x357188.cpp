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

// Function: sub_00357188
// Address: 0x357188 - 0x3571b8
void sub_00357188_0x357188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357188_0x357188");
#endif

    switch (ctx->pc) {
        case 0x3571a8u: goto label_3571a8;
        default: break;
    }

    ctx->pc = 0x357188u;

    // 0x357188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35718c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x35718cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x357190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357194: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x357194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x357198: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x357198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35719c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x35719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3571a0: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x3571A0u;
    SET_GPR_U32(ctx, 31, 0x3571A8u);
    ctx->pc = 0x3571A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3571A0u;
    // 0x3571a4: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x3571A0u, 0x3571A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571A8u;
label_3571a8:
    // 0x3571a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3571a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3571ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3571ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3571B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571ACu;
        // 0x3571b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3571ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3571B4u;
    // 0x3571b4: 0x0  nop
    ctx->pc = 0x3571b4u;
    // NOP
    ctx->pc = 0x3571b8u;
}
