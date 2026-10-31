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

// Function: sub_0049EFC8
// Address: 0x49efc8 - 0x49f428
void sub_0049EFC8_0x49efc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EFC8_0x49efc8");
#endif

    switch (ctx->pc) {
        case 0x49f048u: goto label_49f048;
        case 0x49f098u: goto label_49f098;
        case 0x49f118u: goto label_49f118;
        case 0x49f1a0u: goto label_49f1a0;
        case 0x49f208u: goto label_49f208;
        case 0x49f248u: goto label_49f248;
        case 0x49f298u: goto label_49f298;
        case 0x49f310u: goto label_49f310;
        case 0x49f390u: goto label_49f390;
        default: break;
    }

    ctx->pc = 0x49efc8u;

    // 0x49efc8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x49efc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x49efcc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x49efccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49efd0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x49efd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x49efd4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x49efd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x49efd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49efd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49efdc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x49efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x49efe0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x49efe0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49efe4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x49efe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x49efe8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x49efec: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x49efecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x49eff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49eff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49eff4: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x49eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x49eff8: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x49eff8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x49effc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x49EFFCu;
    {
        const bool branch_taken_0x49effc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EFFCu;
        // 0x49f000: 0x8eb30014  lw          $s3, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49effc) {
            ctx->pc = 0x49F034u;
            goto label_49f034;
        }
    }
    ctx->pc = 0x49F004u;
    // 0x49f004: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x49f004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x49f008: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49F008u;
    {
        const bool branch_taken_0x49f008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F008u;
        // 0x49f00c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f008) {
            ctx->pc = 0x49F020u;
            goto label_49f020;
        }
    }
    ctx->pc = 0x49F010u;
    // 0x49f010: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x49F010u;
    {
        const bool branch_taken_0x49f010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F010u;
        // 0x49f014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f010) {
            ctx->pc = 0x49F034u;
            goto label_49f034;
        }
    }
    ctx->pc = 0x49F018u;
    // 0x49f018: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x49F018u;
    {
        const bool branch_taken_0x49f018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F018u;
        // 0x49f01c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f018) {
            ctx->pc = 0x49F408u;
            goto label_49f408;
        }
    }
    ctx->pc = 0x49F020u;
label_49f020:
    // 0x49f020: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x49f020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x49f024: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x49F024u;
    {
        const bool branch_taken_0x49f024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F024u;
        // 0x49f028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f024) {
            ctx->pc = 0x49F230u;
            goto label_49f230;
        }
    }
    ctx->pc = 0x49F02Cu;
    // 0x49f02c: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x49F02Cu;
    {
        const bool branch_taken_0x49f02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F02Cu;
        // 0x49f030: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f02c) {
            ctx->pc = 0x49F408u;
            goto label_49f408;
        }
    }
    ctx->pc = 0x49F034u;
label_49f034:
    // 0x49f034: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x49f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x49f038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49f038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f03c: 0x184000f0  blez        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x49F03Cu;
    {
        const bool branch_taken_0x49f03c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F03Cu;
        // 0x49f040: 0x8eb40018  lw          $s4, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f03c) {
            ctx->pc = 0x49F400u;
            goto label_49f400;
        }
    }
    ctx->pc = 0x49F044u;
    // 0x49f044: 0x0  nop
    ctx->pc = 0x49f044u;
    // NOP
label_49f048:
    // 0x49f048: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x49f048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x49f04c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x49f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x49f050: 0x3044006f  andi        $a0, $v0, 0x6F
    ctx->pc = 0x49f050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)111);
    // 0x49f054: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x49F054u;
    {
        const bool branch_taken_0x49f054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x49F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F054u;
        // 0x49f058: 0x28820006  slti        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f054) {
            ctx->pc = 0x49F180u;
            goto label_49f180;
        }
    }
    ctx->pc = 0x49F05Cu;
    // 0x49f05c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x49F05Cu;
    {
        const bool branch_taken_0x49f05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F05Cu;
        // 0x49f060: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f05c) {
            ctx->pc = 0x49F078u;
            goto label_49f078;
        }
    }
    ctx->pc = 0x49F064u;
    // 0x49f064: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x49f064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49f068: 0x10820025  beq         $a0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x49F068u;
    {
        const bool branch_taken_0x49f068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F068u;
        // 0x49f06c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f068) {
            ctx->pc = 0x49F100u;
            goto label_49f100;
        }
    }
    ctx->pc = 0x49F070u;
    // 0x49f070: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x49F070u;
    {
        const bool branch_taken_0x49f070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F070u;
        // 0x49f074: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f070) {
            ctx->pc = 0x49F408u;
            goto label_49f408;
        }
    }
    ctx->pc = 0x49F078u;
label_49f078:
    // 0x49f078: 0x104000e2  beqz        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x49F078u;
    {
        const bool branch_taken_0x49f078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F078u;
        // 0x49f07c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f078) {
            ctx->pc = 0x49F404u;
            goto label_49f404;
        }
    }
    ctx->pc = 0x49F080u;
    // 0x49f080: 0x48000e0  bltz        $a0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x49F080u;
    {
        const bool branch_taken_0x49f080 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x49F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F080u;
        // 0x49f084: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f080) {
            ctx->pc = 0x49F404u;
            goto label_49f404;
        }
    }
    ctx->pc = 0x49F088u;
    // 0x49f088: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x49f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49f08c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x49f08cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f090: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x49F090u;
    {
        const bool branch_taken_0x49f090 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F090u;
        // 0x49f094: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f090) {
            ctx->pc = 0x49F1F4u;
            goto label_49f1f4;
        }
    }
    ctx->pc = 0x49F098u;
label_49f098:
    // 0x49f098: 0x2671021  addu        $v0, $s3, $a3
    ctx->pc = 0x49f098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x49f09c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x49f09cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49f0a0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x49f0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x49f0a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49f0a8: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x49f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x49f0ac: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x49f0acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x49f0b0: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x49f0b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x49f0b4: 0x90660003  lbu         $a2, 0x3($v1)
    ctx->pc = 0x49f0b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x49f0b8: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x49f0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x49f0bc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x49f0bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49f0c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x49f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x49f0c4: 0x30a57c00  andi        $a1, $a1, 0x7C00
    ctx->pc = 0x49f0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
    // 0x49f0c8: 0x308403e0  andi        $a0, $a0, 0x3E0
    ctx->pc = 0x49f0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x49f0cc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x49f0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x49f0d0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x49f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x49f0d4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x49f0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x49f0d8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x49f0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49f0dc: 0x30c68000  andi        $a2, $a2, 0x8000
    ctx->pc = 0x49f0dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x49f0e0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x49f0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49f0e4: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x49f0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49f0e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x49f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49f0ec: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x49f0ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49f0f0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x49F0F0u;
    {
        const bool branch_taken_0x49f0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F0F0u;
        // 0x49f0f4: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f0f0) {
            ctx->pc = 0x49F098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f098;
        }
    }
    ctx->pc = 0x49F0F8u;
    // 0x49f0f8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x49F0F8u;
    {
        const bool branch_taken_0x49f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F0F8u;
        // 0x49f0fc: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f0f8) {
            ctx->pc = 0x49F1F8u;
            goto label_49f1f8;
        }
    }
    ctx->pc = 0x49F100u;
label_49f100:
    // 0x49f100: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x49f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49f104: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x49f104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49f108: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x49f108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f10c: 0x18400039  blez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x49F10Cu;
    {
        const bool branch_taken_0x49f10c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F10Cu;
        // 0x49f110: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f10c) {
            ctx->pc = 0x49F1F4u;
            goto label_49f1f4;
        }
    }
    ctx->pc = 0x49F114u;
    // 0x49f114: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x49f114u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_49f118:
    // 0x49f118: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x49f118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x49f11c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x49f11cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49f120: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x49f120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x49f124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49f124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49f128: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x49f128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x49f12c: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x49f12cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x49f130: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x49f130u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x49f134: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x49f134u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49f138: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x49f138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x49f13c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x49f13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x49f140: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x49f140u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x49f144: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x49f144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x49f148: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x49f148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x49f14c: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x49f14cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x49f150: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x49f150u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x49f154: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x49f154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x49f158: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x49f158u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x49f15c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x49f15cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x49f160: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x49f160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x49f164: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x49f164u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x49f168: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x49f168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49f16c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x49f16cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49f170: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x49F170u;
    {
        const bool branch_taken_0x49f170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F170u;
        // 0x49f174: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f170) {
            ctx->pc = 0x49F118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f118;
        }
    }
    ctx->pc = 0x49F178u;
    // 0x49f178: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x49F178u;
    {
        const bool branch_taken_0x49f178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F178u;
        // 0x49f17c: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f178) {
            ctx->pc = 0x49F1F8u;
            goto label_49f1f8;
        }
    }
    ctx->pc = 0x49F180u;
label_49f180:
    // 0x49f180: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x49f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49f184: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x49f184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49f188: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x49f188u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f18c: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x49F18Cu;
    {
        const bool branch_taken_0x49f18c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F18Cu;
        // 0x49f190: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f18c) {
            ctx->pc = 0x49F1F4u;
            goto label_49f1f4;
        }
    }
    ctx->pc = 0x49F194u;
    // 0x49f194: 0x3c090080  lui         $t1, 0x80
    ctx->pc = 0x49f194u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
    // 0x49f198: 0x3c0aff00  lui         $t2, 0xFF00
    ctx->pc = 0x49f198u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65280 << 16));
    // 0x49f19c: 0x35298081  ori         $t1, $t1, 0x8081
    ctx->pc = 0x49f19cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32897);
label_49f1a0:
    // 0x49f1a0: 0x2671021  addu        $v0, $s3, $a3
    ctx->pc = 0x49f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x49f1a4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x49f1a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49f1a8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x49f1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x49f1ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49f1b0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x49f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x49f1b4: 0x90650003  lbu         $a1, 0x3($v1)
    ctx->pc = 0x49f1b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x49f1b8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x49f1b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x49f1bc: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x49f1bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x49f1c0: 0xa92818  mult        $a1, $a1, $t1
    ctx->pc = 0x49f1c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49f1c4: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x49f1c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49f1c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f1cc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x49f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x49f1d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49f1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49f1d4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x49f1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49f1d8: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x49f1d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x49f1dc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x49f1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49f1e0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x49f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x49f1e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x49f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49f1e8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x49f1e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49f1ec: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x49F1ECu;
    {
        const bool branch_taken_0x49f1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F1ECu;
        // 0x49f1f0: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f1ec) {
            ctx->pc = 0x49F1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f1a0;
        }
    }
    ctx->pc = 0x49F1F4u;
label_49f1f4:
    // 0x49f1f4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x49f1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_49f1f8:
    // 0x49f1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f1fc: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x49f1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x49f200: 0xc10f644  jal         func_43D910
    ctx->pc = 0x49F200u;
    SET_GPR_U32(ctx, 31, 0x49F208u);
    ctx->pc = 0x49F204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F200u;
    // 0x49f204: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x49F200u, 0x49F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F208u;
label_49f208:
    // 0x49f208: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x49f208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x49f20c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x49f20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f210: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x49f210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x49f214: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x49f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x49f218: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x49f218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x49f21c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x49f21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49f220: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x49F220u;
    {
        const bool branch_taken_0x49f220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F220u;
        // 0x49f224: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f220) {
            ctx->pc = 0x49F048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f048;
        }
    }
    ctx->pc = 0x49F228u;
    // 0x49f228: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x49F228u;
    {
        const bool branch_taken_0x49f228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F228u;
        // 0x49f22c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f228) {
            ctx->pc = 0x49F404u;
            goto label_49f404;
        }
    }
    ctx->pc = 0x49F230u;
label_49f230:
    // 0x49f230: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x49f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x49f234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49f234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f238: 0x18400071  blez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x49F238u;
    {
        const bool branch_taken_0x49f238 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F238u;
        // 0x49f23c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f238) {
            ctx->pc = 0x49F400u;
            goto label_49f400;
        }
    }
    ctx->pc = 0x49F240u;
    // 0x49f240: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x49f240u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x49f244: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x49f244u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_49f248:
    // 0x49f248: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x49f248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x49f24c: 0x3043006f  andi        $v1, $v0, 0x6F
    ctx->pc = 0x49f24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)111);
    // 0x49f250: 0x106c0046  beq         $v1, $t4, . + 4 + (0x46 << 2)
    ctx->pc = 0x49F250u;
    {
        const bool branch_taken_0x49f250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x49F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F250u;
        // 0x49f254: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f250) {
            ctx->pc = 0x49F36Cu;
            goto label_49f36c;
        }
    }
    ctx->pc = 0x49F258u;
    // 0x49f258: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x49f258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x49f25c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49F25Cu;
    {
        const bool branch_taken_0x49f25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F25Cu;
        // 0x49f260: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f25c) {
            ctx->pc = 0x49F274u;
            goto label_49f274;
        }
    }
    ctx->pc = 0x49F264u;
    // 0x49f264: 0x106b0023  beq         $v1, $t3, . + 4 + (0x23 << 2)
    ctx->pc = 0x49F264u;
    {
        const bool branch_taken_0x49f264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x49F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F264u;
        // 0x49f268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f264) {
            ctx->pc = 0x49F2F4u;
            goto label_49f2f4;
        }
    }
    ctx->pc = 0x49F26Cu;
    // 0x49f26c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x49F26Cu;
    {
        const bool branch_taken_0x49f26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F26Cu;
        // 0x49f270: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f26c) {
            ctx->pc = 0x49F408u;
            goto label_49f408;
        }
    }
    ctx->pc = 0x49F274u;
label_49f274:
    // 0x49f274: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x49F274u;
    {
        const bool branch_taken_0x49f274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F274u;
        // 0x49f278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f274) {
            ctx->pc = 0x49F404u;
            goto label_49f404;
        }
    }
    ctx->pc = 0x49F27Cu;
    // 0x49f27c: 0x4600061  bltz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x49F27Cu;
    {
        const bool branch_taken_0x49f27c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x49F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F27Cu;
        // 0x49f280: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f27c) {
            ctx->pc = 0x49F404u;
            goto label_49f404;
        }
    }
    ctx->pc = 0x49F284u;
    // 0x49f284: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x49f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49f288: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x49f288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f28c: 0x18400053  blez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x49F28Cu;
    {
        const bool branch_taken_0x49f28c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F28Cu;
        // 0x49f290: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f28c) {
            ctx->pc = 0x49F3DCu;
            goto label_49f3dc;
        }
    }
    ctx->pc = 0x49F294u;
    // 0x49f294: 0x0  nop
    ctx->pc = 0x49f294u;
    // NOP
label_49f298:
    // 0x49f298: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x49f298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x49f29c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x49f29cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x49f2a0: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x49f2a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x49f2a4: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x49f2a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49f2a8: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x49f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x49f2ac: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x49f2acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x49f2b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49f2b4: 0x304203e0  andi        $v0, $v0, 0x3E0
    ctx->pc = 0x49f2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)992);
    // 0x49f2b8: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x49f2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x49f2bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49f2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49f2c0: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x49f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x49f2c4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x49f2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x49f2c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x49f2c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x49f2cc: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x49f2ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x49f2d0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x49f2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x49f2d4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x49f2d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x49f2d8: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x49f2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x49f2dc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x49f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49f2e0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x49f2e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49f2e4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x49F2E4u;
    {
        const bool branch_taken_0x49f2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F2E4u;
        // 0x49f2e8: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f2e4) {
            ctx->pc = 0x49F298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f298;
        }
    }
    ctx->pc = 0x49F2ECu;
    // 0x49f2ec: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x49F2ECu;
    {
        const bool branch_taken_0x49f2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F2ECu;
        // 0x49f2f0: 0x8e090010  lw          $t1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f2ec) {
            ctx->pc = 0x49F3DCu;
            goto label_49f3dc;
        }
    }
    ctx->pc = 0x49F2F4u;
label_49f2f4:
    // 0x49f2f4: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x49f2f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49f2f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x49f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49f2fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49f2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f300: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x49F300u;
    {
        const bool branch_taken_0x49f300 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F300u;
        // 0x49f304: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f300) {
            ctx->pc = 0x49F3DCu;
            goto label_49f3dc;
        }
    }
    ctx->pc = 0x49F308u;
    // 0x49f308: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x49f308u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x49f30c: 0x0  nop
    ctx->pc = 0x49f30cu;
    // NOP
label_49f310:
    // 0x49f310: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x49f310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x49f314: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x49f314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x49f318: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x49f318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49f31c: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x49f31cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x49f320: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x49f320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x49f324: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49f324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49f328: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x49f328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x49f32c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49f32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49f330: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x49f330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x49f334: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49f334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49f338: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x49f338u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x49f33c: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x49f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x49f340: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x49f340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49f344: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49f344u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49f348: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x49f348u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x49f34c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x49f34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49f350: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x49f350u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x49f354: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x49f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49f358: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x49f358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49f35c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x49F35Cu;
    {
        const bool branch_taken_0x49f35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F35Cu;
        // 0x49f360: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f35c) {
            ctx->pc = 0x49F310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f310;
        }
    }
    ctx->pc = 0x49F364u;
    // 0x49f364: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x49F364u;
    {
        const bool branch_taken_0x49f364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F364u;
        // 0x49f368: 0x8e090010  lw          $t1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f364) {
            ctx->pc = 0x49F3DCu;
            goto label_49f3dc;
        }
    }
    ctx->pc = 0x49F36Cu;
label_49f36c:
    // 0x49f36c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x49f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49f370: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x49f370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49f374: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x49f374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f378: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x49F378u;
    {
        const bool branch_taken_0x49f378 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x49F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F378u;
        // 0x49f37c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f378) {
            ctx->pc = 0x49F3DCu;
            goto label_49f3dc;
        }
    }
    ctx->pc = 0x49F380u;
    // 0x49f380: 0x3c090080  lui         $t1, 0x80
    ctx->pc = 0x49f380u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
    // 0x49f384: 0x3c0aff00  lui         $t2, 0xFF00
    ctx->pc = 0x49f384u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65280 << 16));
    // 0x49f388: 0x35298081  ori         $t1, $t1, 0x8081
    ctx->pc = 0x49f388u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32897);
    // 0x49f38c: 0x0  nop
    ctx->pc = 0x49f38cu;
    // NOP
label_49f390:
    // 0x49f390: 0x90c40003  lbu         $a0, 0x3($a2)
    ctx->pc = 0x49f390u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x49f394: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x49f394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x49f398: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x49f398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x49f39c: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x49f39cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x49f3a0: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x49f3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49f3a4: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x49f3a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49f3a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f3ac: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x49f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x49f3b0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x49f3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x49f3b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49f3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49f3b8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x49f3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49f3bc: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x49f3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x49f3c0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49f3c4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x49f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x49f3c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x49f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49f3cc: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x49f3ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x49f3d0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x49F3D0u;
    {
        const bool branch_taken_0x49f3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F3D0u;
        // 0x49f3d4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f3d0) {
            ctx->pc = 0x49F390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f390;
        }
    }
    ctx->pc = 0x49F3D8u;
    // 0x49f3d8: 0x8e090010  lw          $t1, 0x10($s0)
    ctx->pc = 0x49f3d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_49f3dc:
    // 0x49f3dc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x49f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x49f3e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x49f3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f3e4: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x49f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x49f3e8: 0xa9202a  slt         $a0, $a1, $t1
    ctx->pc = 0x49f3e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x49f3ec: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x49f3ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x49f3f0: 0x1480ff95  bnez        $a0, . + 4 + (-0x6B << 2)
    ctx->pc = 0x49F3F0u;
    {
        const bool branch_taken_0x49f3f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F3F0u;
        // 0x49f3f4: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f3f0) {
            ctx->pc = 0x49F248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49f248;
        }
    }
    ctx->pc = 0x49F3F8u;
    // 0x49f3f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49F3F8u;
    {
        const bool branch_taken_0x49f3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F3F8u;
        // 0x49f3fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f3f8) {
            ctx->pc = 0x49F404u;
            goto label_49f404;
        }
    }
    ctx->pc = 0x49F400u;
label_49f400:
    // 0x49f400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49f400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49f404:
    // 0x49f404: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x49f404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49f408:
    // 0x49f408: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x49f408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49f40c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x49f40cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49f410: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49f410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49f414: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x49f414u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49f418: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x49f418u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49f41c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49f420: 0x3e00008  jr          $ra
    ctx->pc = 0x49F420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F420u;
        // 0x49f424: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F428u;
}
