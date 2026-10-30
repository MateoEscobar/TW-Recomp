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

// Function: sub_00324A68
// Address: 0x324a68 - 0x324b00
void sub_00324A68_0x324a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324A68_0x324a68");
#endif

    switch (ctx->pc) {
        case 0x324aa0u: goto label_324aa0;
        case 0x324ab8u: goto label_324ab8;
        default: break;
    }

    ctx->pc = 0x324a68u;

    // 0x324a68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x324a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x324a6c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x324a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x324a70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x324a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x324a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324a78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x324a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x324a7c: 0x24d1ffff  addiu       $s1, $a2, -0x1
    ctx->pc = 0x324a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x324a80: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x324a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x324a84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x324a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324a88: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x324a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x324a8c: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x324A8Cu;
    {
        const bool branch_taken_0x324a8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x324A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A8Cu;
        // 0x324a90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324a8c) {
            ctx->pc = 0x324AD8u;
            goto label_324ad8;
        }
    }
    ctx->pc = 0x324A94u;
    // 0x324a94: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x324a94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x324a98: 0x2614040c  addiu       $s4, $s0, 0x40C
    ctx->pc = 0x324a98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1036));
    // 0x324a9c: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x324a9cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_324aa0:
    // 0x324aa0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x324aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x324aa4: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x324aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x324aa8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x324AA8u;
    {
        const bool branch_taken_0x324aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324aa8) {
            ctx->pc = 0x324AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324AA8u;
            // 0x324aac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324ABCu;
            goto label_324abc;
        }
    }
    ctx->pc = 0x324AB0u;
    // 0x324ab0: 0xc0c928c  jal         func_324A30
    ctx->pc = 0x324AB0u;
    SET_GPR_U32(ctx, 31, 0x324AB8u);
    ctx->pc = 0x324AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324AB0u;
    // 0x324ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A30u, 0x324AB0u, 0x324AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324AB8u;
label_324ab8:
    // 0x324ab8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x324ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_324abc:
    // 0x324abc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x324abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x324ac0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x324ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x324ac4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x324ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x324ac8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x324ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x324acc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x324accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x324ad0: 0x1633fff3  bne         $s1, $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x324AD0u;
    {
        const bool branch_taken_0x324ad0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x324AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AD0u;
        // 0x324ad4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ad0) {
            ctx->pc = 0x324AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324aa0;
        }
    }
    ctx->pc = 0x324AD8u;
label_324ad8:
    // 0x324ad8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x324ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x324adc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x324adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324ae0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x324ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324ae4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x324ae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324ae8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x324ae8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324af0: 0x3e00008  jr          $ra
    ctx->pc = 0x324AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AF0u;
        // 0x324af4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324AF8u;
    // 0x324af8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x324af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x324afc: 0x0  nop
    ctx->pc = 0x324afcu;
    // NOP
    ctx->pc = 0x324b00u;
}
