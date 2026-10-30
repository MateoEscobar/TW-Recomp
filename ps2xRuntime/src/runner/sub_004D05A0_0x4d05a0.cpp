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

// Function: sub_004D05A0
// Address: 0x4d05a0 - 0x4d0900
void sub_004D05A0_0x4d05a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D05A0_0x4d05a0");
#endif

    switch (ctx->pc) {
        case 0x4d0618u: goto label_4d0618;
        case 0x4d0658u: goto label_4d0658;
        case 0x4d0754u: goto label_4d0754;
        case 0x4d0780u: goto label_4d0780;
        case 0x4d07e0u: goto label_4d07e0;
        default: break;
    }

    ctx->pc = 0x4d05a0u;

    // 0x4d05a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4d05a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4d05a4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x4d05a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d05a8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4d05a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4d05ac: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x4d05acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d05b0: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x4d05b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x4d05b4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4d05b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d05b8: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x4d05b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x4d05bc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4d05bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d05c0: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x4d05c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x4d05c4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x4d05c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d05c8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x4d05c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x4d05cc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4d05ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4d05d0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x4d05d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x4d05d4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4d05d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x4d05d8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x4d05d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x4d05dc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4d05dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4d05e0: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x4d05e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x4d05e4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x4d05e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x4d05e8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x4d05e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4d05ec: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4d05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d05f0: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x4d05f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x4d05f4: 0x8d720004  lw          $s2, 0x4($t3)
    ctx->pc = 0x4d05f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x4d05f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d05f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d05fc: 0x8d710000  lw          $s1, 0x0($t3)
    ctx->pc = 0x4d05fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d0600: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4d0600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d0604: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4D0604u;
    {
        const bool branch_taken_0x4d0604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0604u;
        // 0x4d0608: 0x8d700008  lw          $s0, 0x8($t3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0604) {
            ctx->pc = 0x4D063Cu;
            goto label_4d063c;
        }
    }
    ctx->pc = 0x4D060Cu;
    // 0x4d060c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4d060cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0610: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x4d0610u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0614: 0x0  nop
    ctx->pc = 0x4d0614u;
    // NOP
label_4d0618:
    // 0x4d0618: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4d0618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4d061c: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x4d061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d0620: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d0620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d0624: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4d0624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4d0628: 0x4600a547  neg.s       $f21, $f20
    ctx->pc = 0x4d0628u;
    ctx->f[21] = FPU_NEG_S(ctx->f[20]);
    // 0x4d062c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d062cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d0630: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4d0630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d0634: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4D0634u;
    {
        const bool branch_taken_0x4d0634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0634u;
        // 0x4d0638: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0634) {
            ctx->pc = 0x4D0618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d0618;
        }
    }
    ctx->pc = 0x4D063Cu;
label_4d063c:
    // 0x4d063c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x4d063cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d0640: 0x137102b  sltu        $v0, $t1, $s7
    ctx->pc = 0x4d0640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x4d0644: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x4D0644u;
    {
        const bool branch_taken_0x4d0644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0644u;
        // 0x4d0648: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0644) {
            ctx->pc = 0x4D08BCu;
            goto label_4d08bc;
        }
    }
    ctx->pc = 0x4D064Cu;
    // 0x4d064c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x4d064cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x4d0650: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x4d0650u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d0654: 0x7ea821  addu        $s5, $v1, $fp
    ctx->pc = 0x4d0654u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_4d0658:
    // 0x4d0658: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D0658u;
    {
        const bool branch_taken_0x4d0658 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0658u;
        // 0x4d065c: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0658) {
            ctx->pc = 0x4D0674u;
            goto label_4d0674;
        }
    }
    ctx->pc = 0x4D0660u;
    // 0x4d0660: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4d0660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4d0664: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D0664u;
    {
        const bool branch_taken_0x4d0664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0664u;
        // 0x4d0668: 0x118842  srl         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0664) {
            ctx->pc = 0x4D068Cu;
            goto label_4d068c;
        }
    }
    ctx->pc = 0x4D066Cu;
    // 0x4d066c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4D066Cu;
    {
        const bool branch_taken_0x4d066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D066Cu;
        // 0x4d0670: 0x25330008  addiu       $s3, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d066c) {
            ctx->pc = 0x4D06E4u;
            goto label_4d06e4;
        }
    }
    ctx->pc = 0x4D0674u;
label_4d0674:
    // 0x4d0674: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d0674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d0678: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x4d0678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d067c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d067cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d0680: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d0680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d0684: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4D0684u;
    {
        const bool branch_taken_0x4d0684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0684u;
        // 0x4d0688: 0x38842  srl         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0684) {
            ctx->pc = 0x4D06E0u;
            goto label_4d06e0;
        }
    }
    ctx->pc = 0x4D068Cu;
label_4d068c:
    // 0x4d068c: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x4d068cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4d0690: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D0690u;
    {
        const bool branch_taken_0x4d0690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d0690) {
            ctx->pc = 0x4D0694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D0690u;
            // 0x4d0694: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D06A8u;
            goto label_4d06a8;
        }
    }
    ctx->pc = 0x4D0698u;
    // 0x4d0698: 0x3233000f  andi        $s3, $s1, 0xF
    ctx->pc = 0x4d0698u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x4d069c: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x4d069cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x4d06a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4D06A0u;
    {
        const bool branch_taken_0x4d06a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D06A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D06A0u;
        // 0x4d06a4: 0x118902  srl         $s1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d06a0) {
            ctx->pc = 0x4D06C4u;
            goto label_4d06c4;
        }
    }
    ctx->pc = 0x4D06A8u;
label_4d06a8:
    // 0x4d06a8: 0x1b02023  subu        $a0, $t5, $s0
    ctx->pc = 0x4d06a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x4d06ac: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d06acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d06b0: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x4d06b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x4d06b4: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x4d06b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x4d06b8: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x4d06b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x4d06bc: 0x828806  srlv        $s1, $v0, $a0
    ctx->pc = 0x4d06bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4d06c0: 0x3073000f  andi        $s3, $v1, 0xF
    ctx->pc = 0x4d06c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_4d06c4:
    // 0x4d06c4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4d06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4d06c8: 0x244239d8  addiu       $v0, $v0, 0x39D8
    ctx->pc = 0x4d06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14808));
    // 0x4d06cc: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x4d06ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4d06d0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4d06d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d06d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4d06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4d06d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D06D8u;
    {
        const bool branch_taken_0x4d06d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D06D8u;
        // 0x4d06dc: 0x1229821  addu        $s3, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d06d8) {
            ctx->pc = 0x4D06E4u;
            goto label_4d06e4;
        }
    }
    ctx->pc = 0x4D06E0u;
label_4d06e0:
    // 0x4d06e0: 0x25330008  addiu       $s3, $t1, 0x8
    ctx->pc = 0x4d06e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_4d06e4:
    // 0x4d06e4: 0x2f3102b  sltu        $v0, $s7, $s3
    ctx->pc = 0x4d06e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4d06e8: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x4d06e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4d06ec: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D06ECu;
    {
        const bool branch_taken_0x4d06ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D06ECu;
        // 0x4d06f0: 0x2e2980b  movn        $s3, $s7, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d06ec) {
            ctx->pc = 0x4D0704u;
            goto label_4d0704;
        }
    }
    ctx->pc = 0x4D06F4u;
    // 0x4d06f4: 0x3225000f  andi        $a1, $s1, 0xF
    ctx->pc = 0x4d06f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x4d06f8: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x4d06f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x4d06fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4D06FCu;
    {
        const bool branch_taken_0x4d06fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D06FCu;
        // 0x4d0700: 0x118902  srl         $s1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d06fc) {
            ctx->pc = 0x4D0724u;
            goto label_4d0724;
        }
    }
    ctx->pc = 0x4D0704u;
label_4d0704:
    // 0x4d0704: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4d0704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d0708: 0x1b02023  subu        $a0, $t5, $s0
    ctx->pc = 0x4d0708u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x4d070c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d070cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d0710: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x4d0710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x4d0714: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x4d0714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x4d0718: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x4d0718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x4d071c: 0x828806  srlv        $s1, $v0, $a0
    ctx->pc = 0x4d071cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4d0720: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x4d0720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_4d0724:
    // 0x4d0724: 0x14a00022  bnez        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x4D0724u;
    {
        const bool branch_taken_0x4d0724 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0724u;
        // 0x4d0728: 0x133102b  sltu        $v0, $t1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0724) {
            ctx->pc = 0x4D07B0u;
            goto label_4d07b0;
        }
    }
    ctx->pc = 0x4D072Cu;
    // 0x4d072c: 0x2691823  subu        $v1, $s3, $t1
    ctx->pc = 0x4d072cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x4d0730: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d0730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0734: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4d0734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4d0738: 0x7fab0000  sq          $t3, 0x0($sp)
    ctx->pc = 0x4d0738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 11));
    // 0x4d073c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4d073cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0740: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x4d0740u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x4d0744: 0x7fac0010  sq          $t4, 0x10($sp)
    ctx->pc = 0x4d0744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 12));
    // 0x4d0748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d0748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d074c: 0xc13372a  jal         func_4CDCA8
    ctx->pc = 0x4D074Cu;
    SET_GPR_U32(ctx, 31, 0x4D0754u);
    ctx->pc = 0x4D0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D074Cu;
    // 0x4d0750: 0x7fad0020  sq          $t5, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4D074Cu, 0x4D0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0754u;
label_4d0754:
    // 0x4d0754: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4d0754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d0758: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4d0758u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d075c: 0x7bab0000  lq          $t3, 0x0($sp)
    ctx->pc = 0x4d075cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d0760: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d0760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d0764: 0x7bac0010  lq          $t4, 0x10($sp)
    ctx->pc = 0x4d0764u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d0768: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x4d0768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4d076c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x4D076Cu;
    {
        const bool branch_taken_0x4d076c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D076Cu;
        // 0x4d0770: 0x7bad0020  lq          $t5, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d076c) {
            ctx->pc = 0x4D08B0u;
            goto label_4d08b0;
        }
    }
    ctx->pc = 0x4D0774u;
    // 0x4d0774: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x4d0774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x4d0778: 0x4c2021  addu        $a0, $v0, $t4
    ctx->pc = 0x4d0778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x4d077c: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x4d077cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_4d0780:
    // 0x4d0780: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4d0780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4d0784: 0xc4940000  lwc1        $f20, 0x0($a0)
    ctx->pc = 0x4d0784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d0788: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4d0788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d078c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4d078cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4d0790: 0x4600a547  neg.s       $f21, $f20
    ctx->pc = 0x4d0790u;
    ctx->f[21] = FPU_NEG_S(ctx->f[20]);
    // 0x4d0794: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x4d0794u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x4d0798: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d0798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d079c: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x4d079cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4d07a0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4D07A0u;
    {
        const bool branch_taken_0x4d07a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D07A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D07A0u;
        // 0x4d07a4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d07a0) {
            ctx->pc = 0x4D0780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d0780;
        }
    }
    ctx->pc = 0x4D07A8u;
    // 0x4d07a8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4D07A8u;
    {
        const bool branch_taken_0x4d07a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D07A8u;
        // 0x4d07ac: 0x137102b  sltu        $v0, $t1, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d07a8) {
            ctx->pc = 0x4D08B4u;
            goto label_4d08b4;
        }
    }
    ctx->pc = 0x4D07B0u;
label_4d07b0:
    // 0x4d07b0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x4D07B0u;
    {
        const bool branch_taken_0x4d07b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D07B0u;
        // 0x4d07b4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d07b0) {
            ctx->pc = 0x4D08B0u;
            goto label_4d08b0;
        }
    }
    ctx->pc = 0x4D07B8u;
    // 0x4d07b8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d07b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4d07bc: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x4d07bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x4d07c0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4d07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4d07c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d07c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d07c8: 0x9e3821  addu        $a3, $a0, $fp
    ctx->pc = 0x4d07c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x4d07cc: 0x434006  srlv        $t0, $v1, $v0
    ctx->pc = 0x4d07ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x4d07d0: 0x24aaffe0  addiu       $t2, $a1, -0x20
    ctx->pc = 0x4d07d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x4d07d4: 0x8c3021  addu        $a2, $a0, $t4
    ctx->pc = 0x4d07d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x4d07d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4d07d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d07dc: 0x0  nop
    ctx->pc = 0x4d07dcu;
    // NOP
label_4d07e0:
    // 0x4d07e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d07e4: 0x15220007  bne         $t1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D07E4u;
    {
        const bool branch_taken_0x4d07e4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x4D07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D07E4u;
        // 0x4d07e8: 0x205102b  sltu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d07e4) {
            ctx->pc = 0x4D0804u;
            goto label_4d0804;
        }
    }
    ctx->pc = 0x4D07ECu;
    // 0x4d07ec: 0xc4d40000  lwc1        $f20, 0x0($a2)
    ctx->pc = 0x4d07ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d07f0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4d07f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4d07f4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4d07f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4d07f8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x4d07f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x4d07fc: 0x4600a547  neg.s       $f21, $f20
    ctx->pc = 0x4d07fcu;
    ctx->f[21] = FPU_NEG_S(ctx->f[20]);
    // 0x4d0800: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4d0800u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4d0804:
    // 0x4d0804: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D0804u;
    {
        const bool branch_taken_0x4d0804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d0804) {
            ctx->pc = 0x4D0808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D0804u;
            // 0x4d0808: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D081Cu;
            goto label_4d081c;
        }
    }
    ctx->pc = 0x4D080Cu;
    // 0x4d080c: 0x2281824  and         $v1, $s1, $t0
    ctx->pc = 0x4d080cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 8));
    // 0x4d0810: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x4d0810u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x4d0814: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4D0814u;
    {
        const bool branch_taken_0x4d0814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0814u;
        // 0x4d0818: 0xb18806  srlv        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0814) {
            ctx->pc = 0x4D0838u;
            goto label_4d0838;
        }
    }
    ctx->pc = 0x4D081Cu;
label_4d081c:
    // 0x4d081c: 0xb02023  subu        $a0, $a1, $s0
    ctx->pc = 0x4d081cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4d0820: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d0820u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d0824: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x4d0824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x4d0828: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x4d0828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x4d082c: 0x20a8023  subu        $s0, $s0, $t2
    ctx->pc = 0x4d082cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x4d0830: 0x828806  srlv        $s1, $v0, $a0
    ctx->pc = 0x4d0830u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4d0834: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4d0834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_4d0838:
    // 0x4d0838: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x4D0838u;
    {
        const bool branch_taken_0x4d0838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0838u;
        // 0x4d083c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0838) {
            ctx->pc = 0x4D0898u;
            goto label_4d0898;
        }
    }
    ctx->pc = 0x4D0840u;
    // 0x4d0840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4d0840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d0844: 0x0  nop
    ctx->pc = 0x4d0844u;
    // NOP
    // 0x4d0848: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4d0848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4d084c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D084Cu;
    {
        const bool branch_taken_0x4d084c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D084Cu;
        // 0x4d0850: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d084c) {
            ctx->pc = 0x4D086Cu;
            goto label_4d086c;
        }
    }
    ctx->pc = 0x4D0854u;
    // 0x4d0854: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x4d0854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4d0858: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4d0858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4d085c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D085Cu;
    {
        const bool branch_taken_0x4d085c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D085Cu;
        // 0x4d0860: 0x118842  srl         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d085c) {
            ctx->pc = 0x4D0884u;
            goto label_4d0884;
        }
    }
    ctx->pc = 0x4D0864u;
    // 0x4d0864: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D0864u;
    {
        const bool branch_taken_0x4d0864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0864u;
        // 0x4d0868: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0864) {
            ctx->pc = 0x4D0890u;
            goto label_4d0890;
        }
    }
    ctx->pc = 0x4D086Cu;
label_4d086c:
    // 0x4d086c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d086cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d0870: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x4d0870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d0874: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d0874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d0878: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d0878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d087c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D087Cu;
    {
        const bool branch_taken_0x4d087c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D087Cu;
        // 0x4d0880: 0x38842  srl         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d087c) {
            ctx->pc = 0x4D088Cu;
            goto label_4d088c;
        }
    }
    ctx->pc = 0x4D0884u;
label_4d0884:
    // 0x4d0884: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D0884u;
    {
        const bool branch_taken_0x4d0884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0884u;
        // 0x4d0888: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0884) {
            ctx->pc = 0x4D0890u;
            goto label_4d0890;
        }
    }
    ctx->pc = 0x4D088Cu;
label_4d088c:
    // 0x4d088c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4d088cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4d0890:
    // 0x4d0890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4D0890u;
    {
        const bool branch_taken_0x4d0890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0890u;
        // 0x4d0894: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0890) {
            ctx->pc = 0x4D08A0u;
            goto label_4d08a0;
        }
    }
    ctx->pc = 0x4D0898u;
label_4d0898:
    // 0x4d0898: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x4d0898u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x4d089c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4d089cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_4d08a0:
    // 0x4d08a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4d08a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4d08a4: 0x133102b  sltu        $v0, $t1, $s3
    ctx->pc = 0x4d08a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4d08a8: 0x5440ffcd  bnel        $v0, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x4D08A8u;
    {
        const bool branch_taken_0x4d08a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d08a8) {
            ctx->pc = 0x4D08ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D08A8u;
            // 0x4d08ac: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D07E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d07e0;
        }
    }
    ctx->pc = 0x4D08B0u;
label_4d08b0:
    // 0x4d08b0: 0x137102b  sltu        $v0, $t1, $s7
    ctx->pc = 0x4d08b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4d08b4:
    // 0x4d08b4: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x4D08B4u;
    {
        const bool branch_taken_0x4d08b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d08b4) {
            ctx->pc = 0x4D0658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d0658;
        }
    }
    ctx->pc = 0x4D08BCu;
label_4d08bc:
    // 0x4d08bc: 0xad700008  sw          $s0, 0x8($t3)
    ctx->pc = 0x4d08bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 16));
    // 0x4d08c0: 0xad720004  sw          $s2, 0x4($t3)
    ctx->pc = 0x4d08c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 18));
    // 0x4d08c4: 0xad710000  sw          $s1, 0x0($t3)
    ctx->pc = 0x4d08c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 17));
    // 0x4d08c8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4d08c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d08cc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x4d08ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d08d0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4d08d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d08d4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x4d08d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d08d8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4d08d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d08dc: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x4d08dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d08e0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4d08e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4d08e4: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x4d08e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4d08e8: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x4d08e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4d08ec: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x4d08ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4d08f0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x4d08f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4d08f4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x4d08f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d08f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4D08F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D08F8u;
        // 0x4d08fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D08F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D0900u;
}
