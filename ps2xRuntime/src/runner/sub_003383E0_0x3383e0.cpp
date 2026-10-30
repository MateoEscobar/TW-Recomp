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

// Function: sub_003383E0
// Address: 0x3383e0 - 0x338420
void sub_003383E0_0x3383e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003383E0_0x3383e0");
#endif

    switch (ctx->pc) {
        case 0x3383f4u: goto label_3383f4;
        default: break;
    }

    ctx->pc = 0x3383e0u;

    // 0x3383e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3383e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3383e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3383e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3383e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3383e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3383ec: 0xc0ce0c0  jal         func_338300
    ctx->pc = 0x3383ECu;
    SET_GPR_U32(ctx, 31, 0x3383F4u);
    ctx->pc = 0x3383F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3383ECu;
    // 0x3383f0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x338300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338300u, 0x3383ECu, 0x3383F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3383F4u;
label_3383f4:
    // 0x3383f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3383f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3383f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3383F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3383FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383F8u;
        // 0x3383fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3383F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338400u;
    // 0x338400: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x338400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x338404: 0x0  nop
    ctx->pc = 0x338404u;
    // NOP
    // 0x338408: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x338408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x33840c: 0x0  nop
    ctx->pc = 0x33840cu;
    // NOP
    // 0x338410: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x338410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x338414: 0x0  nop
    ctx->pc = 0x338414u;
    // NOP
    // 0x338418: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x338418u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x33841c: 0x0  nop
    ctx->pc = 0x33841cu;
    // NOP
    ctx->pc = 0x338420u;
}
