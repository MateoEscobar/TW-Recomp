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

// Function: sub_00337788
// Address: 0x337788 - 0x3377c0
void sub_00337788_0x337788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337788_0x337788");
#endif

    switch (ctx->pc) {
        case 0x3377a8u: goto label_3377a8;
        default: break;
    }

    ctx->pc = 0x337788u;

    // 0x337788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x337788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33778c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33778cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x337790: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x337794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337798: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x337798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33779c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33779cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3377a0: 0xc0cddb0  jal         func_3376C0
    ctx->pc = 0x3377A0u;
    SET_GPR_U32(ctx, 31, 0x3377A8u);
    ctx->pc = 0x3377A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3377A0u;
    // 0x3377a4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3376C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3376C0u, 0x3377A0u, 0x3377A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3377A8u;
label_3377a8:
    // 0x3377a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3377a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3377ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3377acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3377b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3377b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3377b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3377B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3377B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377B4u;
        // 0x3377b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3377B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3377BCu;
    // 0x3377bc: 0x0  nop
    ctx->pc = 0x3377bcu;
    // NOP
    ctx->pc = 0x3377c0u;
}
