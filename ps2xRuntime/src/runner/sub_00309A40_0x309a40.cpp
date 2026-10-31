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

// Function: sub_00309A40
// Address: 0x309a40 - 0x309b60
void sub_00309A40_0x309a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309A40_0x309a40");
#endif

    switch (ctx->pc) {
        case 0x309a9cu: goto label_309a9c;
        case 0x309ab4u: goto label_309ab4;
        case 0x309b20u: goto label_309b20;
        case 0x309b2cu: goto label_309b2c;
        default: break;
    }

    ctx->pc = 0x309a40u;

    // 0x309a40: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x309a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x309a44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x309a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309a48: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x309a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x309a4c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x309a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x309a50: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x309a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a54: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x309a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x309a58: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x309a58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a5c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x309a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x309a60: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x309a60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a64: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x309a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x309a68: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x309a68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a6c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x309a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x309a70: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x309a70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a74: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x309a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x309a78: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x309a78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a7c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x309a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x309a80: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x309a80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a84: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x309a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x309a88: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x309A88u;
    {
        const bool branch_taken_0x309a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x309A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A88u;
        // 0x309a8c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a88) {
            ctx->pc = 0x309B2Cu;
            goto label_309b2c;
        }
    }
    ctx->pc = 0x309A90u;
    // 0x309a90: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x309a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x309a94: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x309A94u;
    SET_GPR_U32(ctx, 31, 0x309A9Cu);
    ctx->pc = 0x309A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A94u;
    // 0x309a98: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x309A94u, 0x309A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A9Cu;
label_309a9c:
    // 0x309a9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x309a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309aa0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x309aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x309aa4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x309AA4u;
    {
        const bool branch_taken_0x309aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309AA4u;
        // 0x309aa8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309aa4) {
            ctx->pc = 0x309B30u;
            goto label_309b30;
        }
    }
    ctx->pc = 0x309AACu;
    // 0x309aac: 0xc0c1956  jal         func_306558
    ctx->pc = 0x309AACu;
    SET_GPR_U32(ctx, 31, 0x309AB4u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x309AACu, 0x309AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309AB4u;
label_309ab4:
    // 0x309ab4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x309ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ab8: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x309AB8u;
    {
        const bool branch_taken_0x309ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309AB8u;
        // 0x309abc: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ab8) {
            ctx->pc = 0x309B20u;
            goto label_309b20;
        }
    }
    ctx->pc = 0x309AC0u;
    // 0x309ac0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x309ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x309ac4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x309ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x309ac8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x309ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309acc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x309accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x309ad0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x309ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ad4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x309ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x309ad8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x309ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309adc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x309adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x309ae0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x309ae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ae4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x309ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x309ae8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x309ae8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309aec: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x309aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x309af0: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x309af0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309af4: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x309af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x309af8: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x309af8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309afc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x309afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x309b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b04: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x309b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x309b08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x309b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b0c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x309b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x309b10: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x309b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x309b14: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x309b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x309b18: 0xc0c26d8  jal         func_309B60
    ctx->pc = 0x309B18u;
    SET_GPR_U32(ctx, 31, 0x309B20u);
    ctx->pc = 0x309B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B18u;
    // 0x309b1c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309B60u, 0x309B18u, 0x309B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B20u;
label_309b20:
    // 0x309b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x309b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b24: 0xc059590  jal         func_165640
    ctx->pc = 0x309B24u;
    SET_GPR_U32(ctx, 31, 0x309B2Cu);
    ctx->pc = 0x309B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309B24u;
    // 0x309b28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x309B24u, 0x309B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B2Cu;
label_309b2c:
    // 0x309b2c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x309b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_309b30:
    // 0x309b30: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x309b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x309b34: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x309b34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x309b38: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x309b38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x309b3c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x309b3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x309b40: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x309b40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x309b44: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x309b44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x309b48: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x309b48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x309b4c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x309b4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x309b50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x309b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309b54: 0x3e00008  jr          $ra
    ctx->pc = 0x309B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309B54u;
        // 0x309b58: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309B5Cu;
    // 0x309b5c: 0x0  nop
    ctx->pc = 0x309b5cu;
    // NOP
    ctx->pc = 0x309b60u;
}
