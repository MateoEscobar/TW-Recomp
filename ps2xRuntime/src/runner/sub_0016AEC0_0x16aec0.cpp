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

// Function: sub_0016AEC0
// Address: 0x16aec0 - 0x16afc8
void sub_0016AEC0_0x16aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AEC0_0x16aec0");
#endif

    switch (ctx->pc) {
        case 0x16af14u: goto label_16af14;
        case 0x16af9cu: goto label_16af9c;
        default: break;
    }

    ctx->pc = 0x16aec0u;

    // 0x16aec0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x16aec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x16aec4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16aec8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x16aec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x16aecc: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x16aeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x16aed0: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x16aed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aed4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x16aed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x16aed8: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x16aed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aedc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x16aedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x16aee0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16aee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aee4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x16aee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x16aee8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16aee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aeec: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x16aeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x16aef0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x16aef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aef4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16aef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16aef8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x16aef8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aefc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16aefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16af00: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x16AF00u;
    {
        const bool branch_taken_0x16af00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF00u;
        // 0x16af04: 0x120b02d  daddu       $s6, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af00) {
            ctx->pc = 0x16AF9Cu;
            goto label_16af9c;
        }
    }
    ctx->pc = 0x16AF08u;
    // 0x16af08: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16af08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16af0c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16AF0Cu;
    SET_GPR_U32(ctx, 31, 0x16AF14u);
    ctx->pc = 0x16AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF0Cu;
    // 0x16af10: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16AF0Cu, 0x16AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF14u;
label_16af14:
    // 0x16af14: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x16af14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16af18: 0x123400  sll         $a2, $s2, 16
    ctx->pc = 0x16af18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x16af1c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x16af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16af20: 0x105400  sll         $t2, $s0, 16
    ctx->pc = 0x16af20u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x16af24: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16af24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16af28: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x16af28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16af2c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16af2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16af30: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x16af30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x16af34: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x16af34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x16af38: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x16af38u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x16af3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16af3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af40: 0x115c00  sll         $t3, $s1, 16
    ctx->pc = 0x16af40u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x16af44: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16af44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16af48: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x16af48u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x16af4c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x16af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x16af50: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x16af50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af54: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x16af54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x16af58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16af58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af5c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16af60: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x16af60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af64: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x16af64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x16af68: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x16af68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af6c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x16af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x16af70: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x16af70u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x16af74: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x16af74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x16af78: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x16af78u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x16af7c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x16af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x16af80: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x16af80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16af84: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x16af84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x16af88: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x16af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x16af8c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x16af8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x16af90: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x16af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16af94: 0xc059bfe  jal         func_166FF8
    ctx->pc = 0x16AF94u;
    SET_GPR_U32(ctx, 31, 0x16AF9Cu);
    ctx->pc = 0x16AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF94u;
    // 0x16af98: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166FF8u, 0x16AF94u, 0x16AF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF9Cu;
label_16af9c:
    // 0x16af9c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x16af9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16afa0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x16afa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16afa4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x16afa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16afa8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x16afa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16afac: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x16afacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16afb0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x16afb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16afb4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16afb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16afb8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16afb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16afbc: 0x3e00008  jr          $ra
    ctx->pc = 0x16AFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFBCu;
        // 0x16afc0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AFC4u;
    // 0x16afc4: 0x0  nop
    ctx->pc = 0x16afc4u;
    // NOP
    ctx->pc = 0x16afc8u;
}
