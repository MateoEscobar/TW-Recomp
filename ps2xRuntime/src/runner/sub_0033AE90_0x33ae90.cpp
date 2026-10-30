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

// Function: sub_0033AE90
// Address: 0x33ae90 - 0x33aed0
void sub_0033AE90_0x33ae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AE90_0x33ae90");
#endif

    switch (ctx->pc) {
        case 0x33aeacu: goto label_33aeac;
        case 0x33aeb8u: goto label_33aeb8;
        default: break;
    }

    ctx->pc = 0x33ae90u;

    // 0x33ae90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33ae90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33ae94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33ae94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33ae98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33ae98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33ae9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33ae9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33aea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33aea4: 0xc0ce990  jal         func_33A640
    ctx->pc = 0x33AEA4u;
    SET_GPR_U32(ctx, 31, 0x33AEACu);
    ctx->pc = 0x33AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AEA4u;
    // 0x33aea8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A640u, 0x33AEA4u, 0x33AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AEACu;
label_33aeac:
    // 0x33aeac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33aeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aeb0: 0xc0ce200  jal         func_338800
    ctx->pc = 0x33AEB0u;
    SET_GPR_U32(ctx, 31, 0x33AEB8u);
    ctx->pc = 0x33AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AEB0u;
    // 0x33aeb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338800u, 0x33AEB0u, 0x33AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AEB8u;
label_33aeb8:
    // 0x33aeb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33aeb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33aebc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33aebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33aec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33aec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33aec4: 0x3e00008  jr          $ra
    ctx->pc = 0x33AEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AEC4u;
        // 0x33aec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AECCu;
    // 0x33aecc: 0x0  nop
    ctx->pc = 0x33aeccu;
    // NOP
    ctx->pc = 0x33aed0u;
}
