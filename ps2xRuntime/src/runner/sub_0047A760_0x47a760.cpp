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

// Function: sub_0047A760
// Address: 0x47a760 - 0x47aa30
void sub_0047A760_0x47a760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A760_0x47a760");
#endif

    switch (ctx->pc) {
        case 0x47a7c4u: goto label_47a7c4;
        case 0x47a890u: goto label_47a890;
        case 0x47a9fcu: goto label_47a9fc;
        case 0x47aa0cu: goto label_47aa0c;
        default: break;
    }

    ctx->pc = 0x47a760u;

    // 0x47a760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47a760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x47a764: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x47a764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x47a768: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x47a76c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47a76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a770: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47a770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x47a774: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x47a774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x47a778: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x47a778u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x47a77c: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x47a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x47a780: 0x8f828918  lw          $v0, -0x76E8($gp)
    ctx->pc = 0x47a780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x47a784: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x47a784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x47a788: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x47a788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x47a78c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x47a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x47a790: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x47A790u;
    {
        const bool branch_taken_0x47a790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A790u;
        // 0x47a794: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a790) {
            ctx->pc = 0x47A7B0u;
            goto label_47a7b0;
        }
    }
    ctx->pc = 0x47A798u;
    // 0x47a798: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x47a798u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x47a79c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47a7a0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x47A7A0u;
    {
        const bool branch_taken_0x47a7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x47a7a0) {
            ctx->pc = 0x47A7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47A7A0u;
            // 0x47a7a4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47A7B4u;
            goto label_47a7b4;
        }
    }
    ctx->pc = 0x47A7A8u;
    // 0x47a7a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x47A7A8u;
    {
        const bool branch_taken_0x47a7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A7A8u;
        // 0x47a7ac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a7a8) {
            ctx->pc = 0x47A7C4u;
            goto label_47a7c4;
        }
    }
    ctx->pc = 0x47A7B0u;
label_47a7b0:
    // 0x47a7b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x47a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_47a7b4:
    // 0x47a7b4: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x47a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x47a7b8: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x47a7b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47a7bc: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x47A7BCu;
    SET_GPR_U32(ctx, 31, 0x47A7C4u);
    ctx->pc = 0x47A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A7BCu;
    // 0x47a7c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x47A7BCu, 0x47A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A7C4u;
label_47a7c4:
    // 0x47a7c4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x47a7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47a7c8: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x47a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x47a7cc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x47a7d0: 0x2462ad18  addiu       $v0, $v1, -0x52E8
    ctx->pc = 0x47a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x47a7d4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x47a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x47a7d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x47a7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x70AD1Cu));
    // 0x47a7dc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x47a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x47a7e0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x47a7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x47a7e4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x47A7E4u;
    {
        const bool branch_taken_0x47a7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A7E4u;
        // 0x47a7e8: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a7e4) {
            ctx->pc = 0x47A84Cu;
            goto label_47a84c;
        }
    }
    ctx->pc = 0x47A7ECu;
    // 0x47a7ec: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x47a7ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x47a7f0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x47a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x47a7f4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x47a7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x47a7f8: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x47a7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x47a7fc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x47a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x47a800: 0x3042009d  andi        $v0, $v0, 0x9D
    ctx->pc = 0x47a800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)157);
    // 0x47a804: 0x94c50006  lhu         $a1, 0x6($a2)
    ctx->pc = 0x47a804u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x47a808: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x47a808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x47a80c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x47a80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x47a810: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x47a810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x47a814: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x47a814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x47a818: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x47a818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x47a81c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x47a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x47a820: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x47A820u;
    {
        const bool branch_taken_0x47a820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a820) {
            ctx->pc = 0x47A824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47A820u;
            // 0x47a824: 0x8d22ad18  lw          $v0, -0x52E8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294946072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47A850u;
            goto label_47a850;
        }
    }
    ctx->pc = 0x47A828u;
    // 0x47a828: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x47a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x47a82c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x47A82Cu;
    {
        const bool branch_taken_0x47a82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x47A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A82Cu;
        // 0x47a830: 0x21402  srl         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a82c) {
            ctx->pc = 0x47A84Cu;
            goto label_47a84c;
        }
    }
    ctx->pc = 0x47A834u;
    // 0x47a834: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x47a834u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x47a838: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47a838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x47a83c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x47A83Cu;
    {
        const bool branch_taken_0x47a83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x47A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A83Cu;
        // 0x47a840: 0x34820008  ori         $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a83c) {
            ctx->pc = 0x47A848u;
            goto label_47a848;
        }
    }
    ctx->pc = 0x47A844u;
    // 0x47a844: 0x34820004  ori         $v0, $a0, 0x4
    ctx->pc = 0x47a844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_47a848:
    // 0x47a848: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x47a848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_47a84c:
    // 0x47a84c: 0x8d22ad18  lw          $v0, -0x52E8($t1)
    ctx->pc = 0x47a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294946072)));
label_47a850:
    // 0x47a850: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x47a850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x47a854: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x47a854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x47a858: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x47a858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x47a85c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x47a85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47a860: 0x8f838a24  lw          $v1, -0x75DC($gp)
    ctx->pc = 0x47a860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937124)));
    // 0x47a864: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x47a864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x47a868: 0x8d22ad18  lw          $v0, -0x52E8($t1)
    ctx->pc = 0x47a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294946072)));
    // 0x47a86c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47a86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47a870: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47a870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47a874: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x47a874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x47a878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47a87c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x47a87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x47a880: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x47a880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x47a884: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x47a884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x47a888: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x47a888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x47a88c: 0x0  nop
    ctx->pc = 0x47a88cu;
    // NOP
label_47a890:
    // 0x47a890: 0x90620010  lbu         $v0, 0x10($v1)
    ctx->pc = 0x47a890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x47a894: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x47a894u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x47a898: 0x475018  mult        $t2, $v0, $a3
    ctx->pc = 0x47a898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x47a89c: 0x1511021  addu        $v0, $t2, $s1
    ctx->pc = 0x47a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x47a8a0: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x47a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47a8a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x47a8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x47a8a8: 0x90620011  lbu         $v0, 0x11($v1)
    ctx->pc = 0x47a8a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x47a8ac: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x47a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x47a8b0: 0x475018  mult        $t2, $v0, $a3
    ctx->pc = 0x47a8b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x47a8b4: 0x1511021  addu        $v0, $t2, $s1
    ctx->pc = 0x47a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x47a8b8: 0xc4450064  lwc1        $f5, 0x64($v0)
    ctx->pc = 0x47a8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x47a8bc: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x47a8bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x47a8c0: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x47a8c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x47a8c4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x47a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x47a8c8: 0x475018  mult        $t2, $v0, $a3
    ctx->pc = 0x47a8c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x47a8cc: 0x1511021  addu        $v0, $t2, $s1
    ctx->pc = 0x47a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x47a8d0: 0xc4420068  lwc1        $f2, 0x68($v0)
    ctx->pc = 0x47a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47a8d4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x47a8d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x47a8d8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x47a8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47a8dc: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x47a8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47a8e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47a8e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x47a8e4: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x47a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x47a8e8: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x47a8e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x47a8ec: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x47a8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47a8f0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x47a8f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x47a8f4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x47a8f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x47a8f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x47a8f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x47a8fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x47a8fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x47a900: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x47a900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47a904: 0x0  nop
    ctx->pc = 0x47a904u;
    // NOP
    // 0x47a908: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x47A908u;
    {
        const bool branch_taken_0x47a908 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x47A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A908u;
        // 0x47a90c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a908) {
            ctx->pc = 0x47A918u;
            goto label_47a918;
        }
    }
    ctx->pc = 0x47A910u;
    // 0x47a910: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x47A910u;
    {
        const bool branch_taken_0x47a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A910u;
        // 0x47a914: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a910) {
            ctx->pc = 0x47A920u;
            goto label_47a920;
        }
    }
    ctx->pc = 0x47A918u;
label_47a918:
    // 0x47a918: 0x1485ffdd  bne         $a0, $a1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x47A918u;
    {
        const bool branch_taken_0x47a918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x47A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A918u;
        // 0x47a91c: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a918) {
            ctx->pc = 0x47A890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a890;
        }
    }
    ctx->pc = 0x47A920u;
label_47a920:
    // 0x47a920: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x47a920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x47a924: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x47a924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47a928: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x47a928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x47a92c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x47A92Cu;
    {
        const bool branch_taken_0x47a92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A92Cu;
        // 0x47a930: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a92c) {
            ctx->pc = 0x47A968u;
            goto label_47a968;
        }
    }
    ctx->pc = 0x47A934u;
    // 0x47a934: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x47a934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x47a938: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x47A938u;
    {
        const bool branch_taken_0x47a938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a938) {
            ctx->pc = 0x47A93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47A938u;
            // 0x47a93c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47A950u;
            goto label_47a950;
        }
    }
    ctx->pc = 0x47A940u;
    // 0x47a940: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x47a940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x47a944: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x47A944u;
    {
        const bool branch_taken_0x47a944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a944) {
            ctx->pc = 0x47A948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47A944u;
            // 0x47a948: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x47A960u;
            goto label_47a960;
        }
    }
    ctx->pc = 0x47A94Cu;
    // 0x47a94c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x47a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47a950:
    // 0x47a950: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x47a950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x47a954: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x47a954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x47a958: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x47A958u;
    {
        const bool branch_taken_0x47a958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A958u;
        // 0x47a95c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a958) {
            ctx->pc = 0x47A9A4u;
            goto label_47a9a4;
        }
    }
    ctx->pc = 0x47A960u;
label_47a960:
    // 0x47a960: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x47A960u;
    {
        const bool branch_taken_0x47a960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A960u;
        // 0x47a964: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a960) {
            ctx->pc = 0x47A97Cu;
            goto label_47a97c;
        }
    }
    ctx->pc = 0x47A968u;
label_47a968:
    // 0x47a968: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x47a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47a96c: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x47a96cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x47a970: 0x93838780  lbu         $v1, -0x7880($gp)
    ctx->pc = 0x47a970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x47a974: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x47A974u;
    {
        const bool branch_taken_0x47a974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A974u;
        // 0x47a978: 0xa2030028  sb          $v1, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a974) {
            ctx->pc = 0x47A9A8u;
            goto label_47a9a8;
        }
    }
    ctx->pc = 0x47A97Cu;
label_47a97c:
    // 0x47a97c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47A97Cu;
    {
        const bool branch_taken_0x47a97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A97Cu;
        // 0x47a980: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a97c) {
            ctx->pc = 0x47A994u;
            goto label_47a994;
        }
    }
    ctx->pc = 0x47A984u;
    // 0x47a984: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x47a984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x47a988: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x47a988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x47a98c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x47A98Cu;
    {
        const bool branch_taken_0x47a98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A98Cu;
        // 0x47a990: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a98c) {
            ctx->pc = 0x47A9A4u;
            goto label_47a9a4;
        }
    }
    ctx->pc = 0x47A994u;
label_47a994:
    // 0x47a994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47a994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47a998: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x47a998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x47a99c: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x47a99cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x47a9a0: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x47a9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_47a9a4:
    // 0x47a9a4: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x47a9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
label_47a9a8:
    // 0x47a9a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x47a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47a9ac: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47A9ACu;
    {
        const bool branch_taken_0x47a9ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x47A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A9ACu;
        // 0x47a9b0: 0x2524ad18  addiu       $a0, $t1, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a9ac) {
            ctx->pc = 0x47A9C0u;
            goto label_47a9c0;
        }
    }
    ctx->pc = 0x47A9B4u;
    // 0x47a9b4: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x47a9b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x47a9b8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x47a9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x47a9bc: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x47a9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
label_47a9c0:
    // 0x47a9c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x47a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x47a9c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x47a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x47a9c8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x47a9c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x47a9cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x47a9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x47a9d0: 0xa202002a  sb          $v0, 0x2A($s0)
    ctx->pc = 0x47a9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x47a9d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x47a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x47a9d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x47a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x47a9dc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x47a9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x47a9e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x47A9E0u;
    {
        const bool branch_taken_0x47a9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A9E0u;
        // 0x47a9e4: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a9e0) {
            ctx->pc = 0x47AA10u;
            goto label_47aa10;
        }
    }
    ctx->pc = 0x47A9E8u;
    // 0x47a9e8: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x47a9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x47a9ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47a9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a9f0: 0x2610b410  addiu       $s0, $s0, -0x4BF0
    ctx->pc = 0x47a9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947856));
    // 0x47a9f4: 0xc11c5f8  jal         func_4717E0
    ctx->pc = 0x47A9F4u;
    SET_GPR_U32(ctx, 31, 0x47A9FCu);
    ctx->pc = 0x47A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A9F4u;
    // 0x47a9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4717E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4717E0u, 0x47A9F4u, 0x47A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A9FCu;
label_47a9fc:
    // 0x47a9fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47a9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47aa00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47aa00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47aa04: 0xc11c618  jal         func_471860
    ctx->pc = 0x47AA04u;
    SET_GPR_U32(ctx, 31, 0x47AA0Cu);
    ctx->pc = 0x47AA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47AA04u;
    // 0x47aa08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471860u, 0x47AA04u, 0x47AA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AA0Cu;
label_47aa0c:
    // 0x47aa0c: 0x0  nop
    ctx->pc = 0x47aa0cu;
    // NOP
label_47aa10:
    // 0x47aa10: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x47aa10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47aa14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47aa18: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x47aa18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47aa1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x47aa1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47aa20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47aa20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47aa24: 0x3e00008  jr          $ra
    ctx->pc = 0x47AA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47AA24u;
        // 0x47aa28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47AA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47AA2Cu;
    // 0x47aa2c: 0x0  nop
    ctx->pc = 0x47aa2cu;
    // NOP
    ctx->pc = 0x47aa30u;
}
