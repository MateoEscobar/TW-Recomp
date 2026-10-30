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

// Function: sub_00222A90
// Address: 0x222a90 - 0x222ad8
void sub_00222A90_0x222a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222A90_0x222a90");
#endif

    switch (ctx->pc) {
        case 0x222aa8u: goto label_222aa8;
        case 0x222ab4u: goto label_222ab4;
        case 0x222ac0u: goto label_222ac0;
        default: break;
    }

    ctx->pc = 0x222a90u;

    // 0x222a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222a94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x222a98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x222a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x222a9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222aa0: 0xc087502  jal         func_21D408
    ctx->pc = 0x222AA0u;
    SET_GPR_U32(ctx, 31, 0x222AA8u);
    ctx->pc = 0x222AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222AA0u;
    // 0x222aa4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x222AA0u, 0x222AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AA8u;
label_222aa8:
    // 0x222aa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222aac: 0xc087502  jal         func_21D408
    ctx->pc = 0x222AACu;
    SET_GPR_U32(ctx, 31, 0x222AB4u);
    ctx->pc = 0x222AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222AACu;
    // 0x222ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x222AACu, 0x222AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AB4u;
label_222ab4:
    // 0x222ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ab8: 0xc0a408c  jal         func_290230
    ctx->pc = 0x222AB8u;
    SET_GPR_U32(ctx, 31, 0x222AC0u);
    ctx->pc = 0x222ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222AB8u;
    // 0x222abc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x222AB8u, 0x222AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AC0u;
label_222ac0:
    // 0x222ac0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x222ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222ac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222acc: 0x3e00008  jr          $ra
    ctx->pc = 0x222ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222ACCu;
        // 0x222ad0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222AD4u;
    // 0x222ad4: 0x0  nop
    ctx->pc = 0x222ad4u;
    // NOP
    ctx->pc = 0x222ad8u;
}
