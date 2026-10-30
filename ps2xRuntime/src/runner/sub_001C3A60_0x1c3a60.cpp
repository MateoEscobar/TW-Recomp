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

// Function: sub_001C3A60
// Address: 0x1c3a60 - 0x1c3ae0
void sub_001C3A60_0x1c3a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3A60_0x1c3a60");
#endif

    switch (ctx->pc) {
        case 0x1c3a88u: goto label_1c3a88;
        case 0x1c3aa0u: goto label_1c3aa0;
        case 0x1c3aacu: goto label_1c3aac;
        case 0x1c3ab8u: goto label_1c3ab8;
        case 0x1c3ac4u: goto label_1c3ac4;
        default: break;
    }

    ctx->pc = 0x1c3a60u;

    // 0x1c3a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3a64: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1c3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1c3a68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c3a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c3a6c: 0x2442a7c0  addiu       $v0, $v0, -0x5840
    ctx->pc = 0x1c3a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944704));
    // 0x1c3a70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c3a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3a7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c3a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a80: 0xc06db7c  jal         func_1B6DF0
    ctx->pc = 0x1C3A80u;
    SET_GPR_U32(ctx, 31, 0x1C3A88u);
    ctx->pc = 0x1C3A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A80u;
    // 0x1c3a84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6DF0u, 0x1C3A80u, 0x1C3A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A88u;
label_1c3a88:
    // 0x1c3a88: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1c3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1c3a8c: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x1c3a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x1c3a90: 0x24429fd0  addiu       $v0, $v0, -0x6030
    ctx->pc = 0x1c3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942672));
    // 0x1c3a94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c3a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3a98: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1C3A98u;
    SET_GPR_U32(ctx, 31, 0x1C3AA0u);
    ctx->pc = 0x1C3A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A98u;
    // 0x1c3a9c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1C3A98u, 0x1C3AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AA0u;
label_1c3aa0:
    // 0x1c3aa0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1c3aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1c3aa4: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1C3AA4u;
    SET_GPR_U32(ctx, 31, 0x1C3AACu);
    ctx->pc = 0x1C3AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AA4u;
    // 0x1c3aa8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1C3AA4u, 0x1C3AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AACu;
label_1c3aac:
    // 0x1c3aac: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c3aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c3ab0: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x1C3AB0u;
    SET_GPR_U32(ctx, 31, 0x1C3AB8u);
    ctx->pc = 0x1C3AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AB0u;
    // 0x1c3ab4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1C3AB0u, 0x1C3AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AB8u;
label_1c3ab8:
    // 0x1c3ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3abc: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1C3ABCu;
    SET_GPR_U32(ctx, 31, 0x1C3AC4u);
    ctx->pc = 0x1C3AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3ABCu;
    // 0x1c3ac0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1C3ABCu, 0x1C3AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AC4u;
label_1c3ac4:
    // 0x1c3ac4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c3ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3AD0u;
        // 0x1c3ad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3AD8u;
    // 0x1c3ad8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c3ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c3adc: 0x0  nop
    ctx->pc = 0x1c3adcu;
    // NOP
    ctx->pc = 0x1c3ae0u;
}
