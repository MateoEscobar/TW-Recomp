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

// Function: sub_004AEFB8
// Address: 0x4aefb8 - 0x4af140
void sub_004AEFB8_0x4aefb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEFB8_0x4aefb8");
#endif

    switch (ctx->pc) {
        case 0x4af04cu: goto label_4af04c;
        case 0x4af07cu: goto label_4af07c;
        case 0x4af090u: goto label_4af090;
        case 0x4af0e8u: goto label_4af0e8;
        default: break;
    }

    ctx->pc = 0x4aefb8u;

    // 0x4aefb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4aefb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4aefbc: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x4aefbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x4aefc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4aefc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4aefc4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4aefc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4aefc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aefc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aefcc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4aefccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4aefd0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4aefd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aefd4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4aefd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4aefd8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4aefd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aefdc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4aefdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4aefe0: 0x78e03  sra         $s1, $a3, 24
    ctx->pc = 0x4aefe0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 24));
    // 0x4aefe4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x4aefe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x4aefe8: 0x1e400007  bgtz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AEFE8u;
    {
        const bool branch_taken_0x4aefe8 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x4AEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEFE8u;
        // 0x4aefec: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aefe8) {
            ctx->pc = 0x4AF008u;
            goto label_4af008;
        }
    }
    ctx->pc = 0x4AEFF0u;
    // 0x4aeff0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4aeff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aeff4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4aeff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aeff8: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x4aeff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4aeffc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4aeffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4af000: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x4AF000u;
    {
        const bool branch_taken_0x4af000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF000u;
        // 0x4af004: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af000) {
            ctx->pc = 0x4AF120u;
            goto label_4af120;
        }
    }
    ctx->pc = 0x4AF008u;
label_4af008:
    // 0x4af008: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4af008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af00c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4af00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4af010: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AF010u;
    {
        const bool branch_taken_0x4af010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF010u;
        // 0x4af014: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af010) {
            ctx->pc = 0x4AF024u;
            goto label_4af024;
        }
    }
    ctx->pc = 0x4AF018u;
    // 0x4af018: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4af018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af01c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4AF01Cu;
    {
        const bool branch_taken_0x4af01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF01Cu;
        // 0x4af020: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af01c) {
            ctx->pc = 0x4AF050u;
            goto label_4af050;
        }
    }
    ctx->pc = 0x4AF024u;
label_4af024:
    // 0x4af024: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4af024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4af028: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AF028u;
    {
        const bool branch_taken_0x4af028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF028u;
        // 0x4af02c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af028) {
            ctx->pc = 0x4AF050u;
            goto label_4af050;
        }
    }
    ctx->pc = 0x4AF030u;
    // 0x4af030: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4af030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4af034: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4af034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4af038: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4af038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4af03c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AF03Cu;
    {
        const bool branch_taken_0x4af03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4AF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF03Cu;
        // 0x4af040: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af03c) {
            ctx->pc = 0x4AF050u;
            goto label_4af050;
        }
    }
    ctx->pc = 0x4AF044u;
    // 0x4af044: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AF044u;
    SET_GPR_U32(ctx, 31, 0x4AF04Cu);
    ctx->pc = 0x4AF048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF044u;
    // 0x4af048: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AF044u, 0x4AF04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF04Cu;
label_4af04c:
    // 0x4af04c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4af04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4af050:
    // 0x4af050: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4AF050u;
    {
        const bool branch_taken_0x4af050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF050u;
        // 0x4af054: 0x2646ffff  addiu       $a2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af050) {
            ctx->pc = 0x4AF0F0u;
            goto label_4af0f0;
        }
    }
    ctx->pc = 0x4AF058u;
    // 0x4af058: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4af058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af05c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4af05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af060: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4af060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af064: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4af064u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4af068: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4af068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4af06c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x4af06cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af070: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x4af070u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4af074: 0xc12ca4e  jal         func_4B2938
    ctx->pc = 0x4AF074u;
    SET_GPR_U32(ctx, 31, 0x4AF07Cu);
    ctx->pc = 0x4AF078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF074u;
    // 0x4af078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2938u, 0x4AF074u, 0x4AF07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF07Cu;
label_4af07c:
    // 0x4af07c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4af07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af080: 0x10730006  beq         $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AF080u;
    {
        const bool branch_taken_0x4af080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x4AF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF080u;
        // 0x4af084: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af080) {
            ctx->pc = 0x4AF09Cu;
            goto label_4af09c;
        }
    }
    ctx->pc = 0x4AF088u;
    // 0x4af088: 0xc12cc70  jal         func_4B31C0
    ctx->pc = 0x4AF088u;
    SET_GPR_U32(ctx, 31, 0x4AF090u);
    ctx->pc = 0x4AF08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF088u;
    // 0x4af08c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4AF088u, 0x4AF090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF090u;
label_4af090:
    // 0x4af090: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4af090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af094: 0x1473000c  bne         $v1, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x4AF094u;
    {
        const bool branch_taken_0x4af094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x4AF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF094u;
        // 0x4af098: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af094) {
            ctx->pc = 0x4AF0C8u;
            goto label_4af0c8;
        }
    }
    ctx->pc = 0x4AF09Cu;
label_4af09c:
    // 0x4af09c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4af09cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af0a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4af0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4af0a4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4af0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4af0a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4af0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4af0ac: 0x90c2001a  lbu         $v0, 0x1A($a2)
    ctx->pc = 0x4af0acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x4af0b0: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x4af0b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x4af0b4: 0x85180a  movz        $v1, $a0, $a1
    ctx->pc = 0x4af0b4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x4af0b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4af0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4af0bc: 0xa0c2001a  sb          $v0, 0x1A($a2)
    ctx->pc = 0x4af0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x4af0c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4AF0C0u;
    {
        const bool branch_taken_0x4af0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF0C0u;
        // 0x4af0c4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af0c0) {
            ctx->pc = 0x4AF100u;
            goto label_4af100;
        }
    }
    ctx->pc = 0x4AF0C8u;
label_4af0c8:
    // 0x4af0c8: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x4af0c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x4af0cc: 0x1071000c  beq         $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x4AF0CCu;
    {
        const bool branch_taken_0x4af0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x4AF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF0CCu;
        // 0x4af0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af0cc) {
            ctx->pc = 0x4AF100u;
            goto label_4af100;
        }
    }
    ctx->pc = 0x4AF0D4u;
    // 0x4af0d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4af0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af0d8: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4af0d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4af0dc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4af0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4af0e0: 0xc12bed8  jal         func_4AFB60
    ctx->pc = 0x4AF0E0u;
    SET_GPR_U32(ctx, 31, 0x4AF0E8u);
    ctx->pc = 0x4AF0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF0E0u;
    // 0x4af0e4: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB60u, 0x4AF0E0u, 0x4AF0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF0E8u;
label_4af0e8:
    // 0x4af0e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF0E8u;
    {
        const bool branch_taken_0x4af0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF0E8u;
        // 0x4af0ec: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af0e8) {
            ctx->pc = 0x4AF100u;
            goto label_4af100;
        }
    }
    ctx->pc = 0x4AF0F0u;
label_4af0f0:
    // 0x4af0f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4af0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4af0f4: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x4af0f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x4af0f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4af0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4af0fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4af0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4af100:
    // 0x4af100: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4af100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4af104: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4af104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x4af108: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AF108u;
    {
        const bool branch_taken_0x4af108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x4AF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF108u;
        // 0x4af10c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af108) {
            ctx->pc = 0x4AF11Cu;
            goto label_4af11c;
        }
    }
    ctx->pc = 0x4AF110u;
    // 0x4af110: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4af110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4af114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4af114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4af118: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4af118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4af11c:
    // 0x4af11c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4af11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4af120:
    // 0x4af120: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4af120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4af124: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4af124u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4af128: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x4af128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4af12c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4af12cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4af130: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4af130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af134: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4af134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af138: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF138u;
        // 0x4af13c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF140u;
}
