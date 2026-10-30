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

// Function: sub_004ED988
// Address: 0x4ed988 - 0x4ed9c8
void sub_004ED988_0x4ed988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED988_0x4ed988");
#endif

    switch (ctx->pc) {
        case 0x4ed9a4u: goto label_4ed9a4;
        case 0x4ed9b4u: goto label_4ed9b4;
        default: break;
    }

    ctx->pc = 0x4ed988u;

    // 0x4ed988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ed988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ed98c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ed98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ed990: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ed994: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4ed994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed99c: 0xc108a28  jal         func_4228A0
    ctx->pc = 0x4ED99Cu;
    SET_GPR_U32(ctx, 31, 0x4ED9A4u);
    ctx->pc = 0x4ED9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED99Cu;
    // 0x4ed9a0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4228A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4228A0u, 0x4ED99Cu, 0x4ED9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED9A4u;
label_4ed9a4:
    // 0x4ed9a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ed9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed9a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ed9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed9ac: 0xc10836c  jal         func_420DB0
    ctx->pc = 0x4ED9ACu;
    SET_GPR_U32(ctx, 31, 0x4ED9B4u);
    ctx->pc = 0x4ED9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED9ACu;
    // 0x4ed9b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420DB0u, 0x4ED9ACu, 0x4ED9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED9B4u;
label_4ed9b4:
    // 0x4ed9b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ed9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed9b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed9bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED9C0u;
        // 0x4ed9c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED9C8u;
}
