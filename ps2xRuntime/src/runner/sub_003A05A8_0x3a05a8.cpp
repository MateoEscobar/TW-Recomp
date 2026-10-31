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

// Function: sub_003A05A8
// Address: 0x3a05a8 - 0x3a0768
void sub_003A05A8_0x3a05a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A05A8_0x3a05a8");
#endif

    switch (ctx->pc) {
        case 0x3a064cu: goto label_3a064c;
        case 0x3a0714u: goto label_3a0714;
        default: break;
    }

    ctx->pc = 0x3a05a8u;

    // 0x3a05a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a05a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a05ac: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x3a05acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x3a05b0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a05b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3a05b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3a05b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a05b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a05b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3a05bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a05bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3a05c0: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x3a05c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a05c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a05c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a05c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a05c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a05cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a05ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a05d0: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x3a05d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a05d4: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x3a05d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x3a05d8: 0x84720030  lh          $s2, 0x30($v1)
    ctx->pc = 0x3a05d8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x3a05dc: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x3a05dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a05e0: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x3a05e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x3a05e4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3a05e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3a05e8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3A05E8u;
    {
        const bool branch_taken_0x3a05e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A05E8u;
        // 0x3a05ec: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a05e8) {
            ctx->pc = 0x3A06C4u;
            goto label_3a06c4;
        }
    }
    ctx->pc = 0x3A05F0u;
    // 0x3a05f0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3A05F0u;
    {
        const bool branch_taken_0x3a05f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A05F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A05F0u;
        // 0x3a05f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a05f0) {
            ctx->pc = 0x3A0748u;
            goto label_3a0748;
        }
    }
    ctx->pc = 0x3A05F8u;
    // 0x3a05f8: 0x640001e  bltz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A05F8u;
    {
        const bool branch_taken_0x3a05f8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3A05FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A05F8u;
        // 0x3a05fc: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a05f8) {
            ctx->pc = 0x3A0674u;
            goto label_3a0674;
        }
    }
    ctx->pc = 0x3A0600u;
    // 0x3a0600: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A0600u;
    {
        const bool branch_taken_0x3a0600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0600) {
            ctx->pc = 0x3A0604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0600u;
            // 0x3a0604: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0678u;
            goto label_3a0678;
        }
    }
    ctx->pc = 0x3A0608u;
    // 0x3a0608: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x3a0608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x3a060c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3a060cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x3a0610: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a0610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a0614: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x3a0614u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x3a0618: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a0618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a061c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a061cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a0620: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3a0620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a0624: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x3a0624u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a0628: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3a0628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a062c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a062cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a0630: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a0630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a0634: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a0634u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a0638: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3a0638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a063c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a063cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a0640: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x3a0640u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a0644: 0xc0d4be8  jal         func_352FA0
    ctx->pc = 0x3A0644u;
    SET_GPR_U32(ctx, 31, 0x3A064Cu);
    ctx->pc = 0x3A0648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0644u;
    // 0x3a0648: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352FA0u, 0x3A0644u, 0x3A064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A064Cu;
label_3a064c:
    // 0x3a064c: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x3a064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a0650: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x3a0650u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3a0654: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x3a0654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3a0658: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a0658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a065c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3a065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3a0660: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x3a0660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3a0664: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3a0664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3a0668: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a0668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a066c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3A066Cu;
    {
        const bool branch_taken_0x3a066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A066Cu;
        // 0x3a0670: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a066c) {
            ctx->pc = 0x3A06B0u;
            goto label_3a06b0;
        }
    }
    ctx->pc = 0x3A0674u;
label_3a0674:
    // 0x3a0674: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x3a0674u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_3a0678:
    // 0x3a0678: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x3a0678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3a067c: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x3a067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a0680: 0x92250081  lbu         $a1, 0x81($s1)
    ctx->pc = 0x3a0680u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 129)));
    // 0x3a0684: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a0684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a0688: 0x529fa  dsrl        $a1, $a1, 7
    ctx->pc = 0x3a0688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 7);
    // 0x3a068c: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x3a068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x3a0690: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3a0690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a0694: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a0694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a0698: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A0698u;
    {
        const bool branch_taken_0x3a0698 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0698u;
        // 0x3a069c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0698) {
            ctx->pc = 0x3A06B0u;
            goto label_3a06b0;
        }
    }
    ctx->pc = 0x3A06A0u;
    // 0x3a06a0: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x3a06a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a06a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3a06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x3a06a8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3a06a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3a06ac: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x3a06acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_3a06b0:
    // 0x3a06b0: 0x960200f4  lhu         $v0, 0xF4($s0)
    ctx->pc = 0x3a06b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x3a06b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a06b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a06b8: 0xa60200f4  sh          $v0, 0xF4($s0)
    ctx->pc = 0x3a06b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a06bc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3A06BCu;
    {
        const bool branch_taken_0x3a06bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A06C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06BCu;
        // 0x3a06c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06bc) {
            ctx->pc = 0x3A0748u;
            goto label_3a0748;
        }
    }
    ctx->pc = 0x3A06C4u;
label_3a06c4:
    // 0x3a06c4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3A06C4u;
    {
        const bool branch_taken_0x3a06c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A06C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06C4u;
        // 0x3a06c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06c4) {
            ctx->pc = 0x3A0748u;
            goto label_3a0748;
        }
    }
    ctx->pc = 0x3A06CCu;
    // 0x3a06cc: 0x640001e  bltz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A06CCu;
    {
        const bool branch_taken_0x3a06cc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3A06D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A06CCu;
        // 0x3a06d0: 0x26240034  addiu       $a0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06cc) {
            ctx->pc = 0x3A0748u;
            goto label_3a0748;
        }
    }
    ctx->pc = 0x3A06D4u;
    // 0x3a06d4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3a06d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x3a06d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a06d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a06dc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x3a06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x3a06e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a06e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a06e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a06e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a06e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3a06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a06ec: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x3a06ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a06f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3a06f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a06f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a06f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a06f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a06f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a06fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a06fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a0700: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3a0700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a0704: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a0704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a0708: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x3a0708u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a070c: 0xc0d4be8  jal         func_352FA0
    ctx->pc = 0x3A070Cu;
    SET_GPR_U32(ctx, 31, 0x3A0714u);
    ctx->pc = 0x3A0710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A070Cu;
    // 0x3a0710: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352FA0u, 0x3A070Cu, 0x3A0714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0714u;
label_3a0714:
    // 0x3a0714: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x3a0714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a0718: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x3a0718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3a071c: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x3a071cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3a0720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a0720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0724: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3a0724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3a0728: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3a0728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3a072c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x3a072cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3a0730: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3a0730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3a0734: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3a0734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a0738: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x3a0738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x3a073c: 0x960300f4  lhu         $v1, 0xF4($s0)
    ctx->pc = 0x3a073cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x3a0740: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a0740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a0744: 0xa60300f4  sh          $v1, 0xF4($s0)
    ctx->pc = 0x3a0744u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 3));
label_3a0748:
    // 0x3a0748: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a0748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a074c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a074cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0750: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a0750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0754: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a0754u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a0758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a075c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A075Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A075Cu;
        // 0x3a0760: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A075Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0764u;
    // 0x3a0764: 0x0  nop
    ctx->pc = 0x3a0764u;
    // NOP
    ctx->pc = 0x3a0768u;
}
