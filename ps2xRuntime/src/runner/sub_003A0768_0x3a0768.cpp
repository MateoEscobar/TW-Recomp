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

// Function: sub_003A0768
// Address: 0x3a0768 - 0x3a0928
void sub_003A0768_0x3a0768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0768_0x3a0768");
#endif

    switch (ctx->pc) {
        case 0x3a080cu: goto label_3a080c;
        case 0x3a08d4u: goto label_3a08d4;
        default: break;
    }

    ctx->pc = 0x3a0768u;

    // 0x3a0768: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a0768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a076c: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x3a076cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x3a0770: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a0770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3a0774: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3a0774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0778: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a0778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3a077c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a077cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3a0780: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x3a0780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a0784: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a0784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a0788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a078c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a078cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a0790: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x3a0790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a0794: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x3a0794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x3a0798: 0x84720030  lh          $s2, 0x30($v1)
    ctx->pc = 0x3a0798u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x3a079c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x3a079cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a07a0: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x3a07a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x3a07a4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3a07a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3a07a8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3A07A8u;
    {
        const bool branch_taken_0x3a07a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A07A8u;
        // 0x3a07ac: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a07a8) {
            ctx->pc = 0x3A0884u;
            goto label_3a0884;
        }
    }
    ctx->pc = 0x3A07B0u;
    // 0x3a07b0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3A07B0u;
    {
        const bool branch_taken_0x3a07b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A07B0u;
        // 0x3a07b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a07b0) {
            ctx->pc = 0x3A0908u;
            goto label_3a0908;
        }
    }
    ctx->pc = 0x3A07B8u;
    // 0x3a07b8: 0x640001e  bltz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A07B8u;
    {
        const bool branch_taken_0x3a07b8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3A07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A07B8u;
        // 0x3a07bc: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a07b8) {
            ctx->pc = 0x3A0834u;
            goto label_3a0834;
        }
    }
    ctx->pc = 0x3A07C0u;
    // 0x3a07c0: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A07C0u;
    {
        const bool branch_taken_0x3a07c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a07c0) {
            ctx->pc = 0x3A07C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A07C0u;
            // 0x3a07c4: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0838u;
            goto label_3a0838;
        }
    }
    ctx->pc = 0x3A07C8u;
    // 0x3a07c8: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x3a07c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x3a07cc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3a07ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x3a07d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a07d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a07d4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x3a07d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x3a07d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a07d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a07dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a07dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a07e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3a07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a07e4: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x3a07e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a07e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3a07e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a07ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a07ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a07f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a07f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a07f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a07f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a07f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3a07f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a07fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a07fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a0800: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x3a0800u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a0804: 0xc0d4be8  jal         func_352FA0
    ctx->pc = 0x3A0804u;
    SET_GPR_U32(ctx, 31, 0x3A080Cu);
    ctx->pc = 0x3A0808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0804u;
    // 0x3a0808: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352FA0u, 0x3A0804u, 0x3A080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A080Cu;
label_3a080c:
    // 0x3a080c: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x3a080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a0810: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x3a0810u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3a0814: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x3a0814u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3a0818: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a0818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a081c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3a081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3a0820: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x3a0820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3a0824: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3a0824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3a0828: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a0828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a082c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3A082Cu;
    {
        const bool branch_taken_0x3a082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A082Cu;
        // 0x3a0830: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a082c) {
            ctx->pc = 0x3A0870u;
            goto label_3a0870;
        }
    }
    ctx->pc = 0x3A0834u;
label_3a0834:
    // 0x3a0834: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x3a0834u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_3a0838:
    // 0x3a0838: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x3a0838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3a083c: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x3a083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a0840: 0x92250081  lbu         $a1, 0x81($s1)
    ctx->pc = 0x3a0840u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 129)));
    // 0x3a0844: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a0844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a0848: 0x529fa  dsrl        $a1, $a1, 7
    ctx->pc = 0x3a0848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 7);
    // 0x3a084c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x3a084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x3a0850: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3a0850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a0854: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a0854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a0858: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A0858u;
    {
        const bool branch_taken_0x3a0858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0858u;
        // 0x3a085c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0858) {
            ctx->pc = 0x3A0870u;
            goto label_3a0870;
        }
    }
    ctx->pc = 0x3A0860u;
    // 0x3a0860: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x3a0860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a0864: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3a0864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x3a0868: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3a0868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3a086c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x3a086cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_3a0870:
    // 0x3a0870: 0x960200f4  lhu         $v0, 0xF4($s0)
    ctx->pc = 0x3a0870u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x3a0874: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a0874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a0878: 0xa60200f4  sh          $v0, 0xF4($s0)
    ctx->pc = 0x3a0878u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a087c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3A087Cu;
    {
        const bool branch_taken_0x3a087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A087Cu;
        // 0x3a0880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a087c) {
            ctx->pc = 0x3A0908u;
            goto label_3a0908;
        }
    }
    ctx->pc = 0x3A0884u;
label_3a0884:
    // 0x3a0884: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3A0884u;
    {
        const bool branch_taken_0x3a0884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0884u;
        // 0x3a0888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0884) {
            ctx->pc = 0x3A0908u;
            goto label_3a0908;
        }
    }
    ctx->pc = 0x3A088Cu;
    // 0x3a088c: 0x640001e  bltz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A088Cu;
    {
        const bool branch_taken_0x3a088c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3A0890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A088Cu;
        // 0x3a0890: 0x26240034  addiu       $a0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a088c) {
            ctx->pc = 0x3A0908u;
            goto label_3a0908;
        }
    }
    ctx->pc = 0x3A0894u;
    // 0x3a0894: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3a0894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x3a0898: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a0898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a089c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x3a089cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x3a08a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a08a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a08a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a08a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a08a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3a08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a08ac: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x3a08acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a08b0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3a08b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a08b4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a08b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a08b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a08b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a08bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a08bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a08c0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3a08c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a08c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a08c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a08c8: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x3a08c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a08cc: 0xc0d4be8  jal         func_352FA0
    ctx->pc = 0x3A08CCu;
    SET_GPR_U32(ctx, 31, 0x3A08D4u);
    ctx->pc = 0x3A08D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A08CCu;
    // 0x3a08d0: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352FA0u, 0x3A08CCu, 0x3A08D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A08D4u;
label_3a08d4:
    // 0x3a08d4: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x3a08d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a08d8: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x3a08d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3a08dc: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x3a08dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3a08e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a08e4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3a08e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3a08e8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3a08e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3a08ec: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x3a08ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3a08f0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3a08f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3a08f4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3a08f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a08f8: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x3a08f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x3a08fc: 0x960300f4  lhu         $v1, 0xF4($s0)
    ctx->pc = 0x3a08fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x3a0900: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a0900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a0904: 0xa60300f4  sh          $v1, 0xF4($s0)
    ctx->pc = 0x3a0904u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 3));
label_3a0908:
    // 0x3a0908: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a0908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a090c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a090cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0910: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a0910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0914: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a0914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a091c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A091Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A091Cu;
        // 0x3a0920: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A091Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0924u;
    // 0x3a0924: 0x0  nop
    ctx->pc = 0x3a0924u;
    // NOP
    ctx->pc = 0x3a0928u;
}
