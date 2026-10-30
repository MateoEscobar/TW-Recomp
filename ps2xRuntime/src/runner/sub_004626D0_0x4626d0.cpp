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

// Function: sub_004626D0
// Address: 0x4626d0 - 0x462850
void sub_004626D0_0x4626d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004626D0_0x4626d0");
#endif

    switch (ctx->pc) {
        case 0x4626d0u: goto label_4626d0;
        case 0x4626d4u: goto label_4626d4;
        case 0x4626d8u: goto label_4626d8;
        case 0x4626dcu: goto label_4626dc;
        case 0x4626e0u: goto label_4626e0;
        case 0x4626e4u: goto label_4626e4;
        case 0x4626e8u: goto label_4626e8;
        case 0x4626ecu: goto label_4626ec;
        case 0x4626f0u: goto label_4626f0;
        case 0x4626f4u: goto label_4626f4;
        case 0x4626f8u: goto label_4626f8;
        case 0x4626fcu: goto label_4626fc;
        case 0x462700u: goto label_462700;
        case 0x462704u: goto label_462704;
        case 0x462708u: goto label_462708;
        case 0x46270cu: goto label_46270c;
        case 0x462710u: goto label_462710;
        case 0x462714u: goto label_462714;
        case 0x462718u: goto label_462718;
        case 0x46271cu: goto label_46271c;
        case 0x462720u: goto label_462720;
        case 0x462724u: goto label_462724;
        case 0x462728u: goto label_462728;
        case 0x46272cu: goto label_46272c;
        case 0x462730u: goto label_462730;
        case 0x462734u: goto label_462734;
        case 0x462738u: goto label_462738;
        case 0x46273cu: goto label_46273c;
        case 0x462740u: goto label_462740;
        case 0x462744u: goto label_462744;
        case 0x462748u: goto label_462748;
        case 0x46274cu: goto label_46274c;
        case 0x462750u: goto label_462750;
        case 0x462754u: goto label_462754;
        case 0x462758u: goto label_462758;
        case 0x46275cu: goto label_46275c;
        case 0x462760u: goto label_462760;
        case 0x462764u: goto label_462764;
        case 0x462768u: goto label_462768;
        case 0x46276cu: goto label_46276c;
        case 0x462770u: goto label_462770;
        case 0x462774u: goto label_462774;
        case 0x462778u: goto label_462778;
        case 0x46277cu: goto label_46277c;
        case 0x462780u: goto label_462780;
        case 0x462784u: goto label_462784;
        case 0x462788u: goto label_462788;
        case 0x46278cu: goto label_46278c;
        case 0x462790u: goto label_462790;
        case 0x462794u: goto label_462794;
        case 0x462798u: goto label_462798;
        case 0x46279cu: goto label_46279c;
        case 0x4627a0u: goto label_4627a0;
        case 0x4627a4u: goto label_4627a4;
        case 0x4627a8u: goto label_4627a8;
        case 0x4627acu: goto label_4627ac;
        case 0x4627b0u: goto label_4627b0;
        case 0x4627b4u: goto label_4627b4;
        case 0x4627b8u: goto label_4627b8;
        case 0x4627bcu: goto label_4627bc;
        case 0x4627c0u: goto label_4627c0;
        case 0x4627c4u: goto label_4627c4;
        case 0x4627c8u: goto label_4627c8;
        case 0x4627ccu: goto label_4627cc;
        case 0x4627d0u: goto label_4627d0;
        case 0x4627d4u: goto label_4627d4;
        case 0x4627d8u: goto label_4627d8;
        case 0x4627dcu: goto label_4627dc;
        case 0x4627e0u: goto label_4627e0;
        case 0x4627e4u: goto label_4627e4;
        case 0x4627e8u: goto label_4627e8;
        case 0x4627ecu: goto label_4627ec;
        case 0x4627f0u: goto label_4627f0;
        case 0x4627f4u: goto label_4627f4;
        case 0x4627f8u: goto label_4627f8;
        case 0x4627fcu: goto label_4627fc;
        case 0x462800u: goto label_462800;
        case 0x462804u: goto label_462804;
        case 0x462808u: goto label_462808;
        case 0x46280cu: goto label_46280c;
        case 0x462810u: goto label_462810;
        case 0x462814u: goto label_462814;
        case 0x462818u: goto label_462818;
        case 0x46281cu: goto label_46281c;
        case 0x462820u: goto label_462820;
        case 0x462824u: goto label_462824;
        case 0x462828u: goto label_462828;
        case 0x46282cu: goto label_46282c;
        case 0x462830u: goto label_462830;
        case 0x462834u: goto label_462834;
        case 0x462838u: goto label_462838;
        case 0x46283cu: goto label_46283c;
        case 0x462840u: goto label_462840;
        case 0x462844u: goto label_462844;
        case 0x462848u: goto label_462848;
        case 0x46284cu: goto label_46284c;
        default: break;
    }

    ctx->pc = 0x4626d0u;

label_4626d0:
    // 0x4626d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4626d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4626d4:
    // 0x4626d4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4626d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4626d8:
    // 0x4626d8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4626d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4626dc:
    // 0x4626dc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4626dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4626e0:
    // 0x4626e0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4626e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4626e4:
    // 0x4626e4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4626e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4626e8:
    // 0x4626e8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4626e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4626ec:
    // 0x4626ec: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4626ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4626f0:
    // 0x4626f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4626f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4626f4:
    // 0x4626f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4626f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4626f8:
    // 0x4626f8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4626f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4626fc:
    // 0x4626fc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4626fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_462700:
    // 0x462700: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x462700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_462704:
    // 0x462704: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x462704u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_462708:
    // 0x462708: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x462708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_46270c:
    // 0x46270c: 0x2456ad18  addiu       $s6, $v0, -0x52E8
    ctx->pc = 0x46270cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_462710:
    // 0x462710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x462710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_462714:
    // 0x462714: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x462714u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_462718:
    // 0x462718: 0x8f848894  lw          $a0, -0x776C($gp)
    ctx->pc = 0x462718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936724)));
label_46271c:
    // 0x46271c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46271cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_462720:
    // 0x462720: 0x8ec20118  lw          $v0, 0x118($s6)
    ctx->pc = 0x462720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 280)));
label_462724:
    // 0x462724: 0x40f809  jalr        $v0
label_462728:
    if (ctx->pc == 0x462728u) {
        ctx->pc = 0x462728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462724u;
        // 0x462728: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46272Cu;
        goto label_46272c;
    }
    ctx->pc = 0x462724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46272Cu);
        ctx->pc = 0x462728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462724u;
        // 0x462728: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462724u, 0x46272Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46272Cu;
label_46272c:
    // 0x46272c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x46272cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_462730:
    // 0x462730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x462730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_462734:
    // 0x462734: 0xc118f6a  jal         func_463DA8
label_462738:
    if (ctx->pc == 0x462738u) {
        ctx->pc = 0x462738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462734u;
        // 0x462738: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46273Cu;
        goto label_46273c;
    }
    ctx->pc = 0x462734u;
    SET_GPR_U32(ctx, 31, 0x46273Cu);
    ctx->pc = 0x462738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462734u;
    // 0x462738: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x463DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x463DA8u, 0x462734u, 0x46273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46273Cu;
label_46273c:
    // 0x46273c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x46273cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_462740:
    // 0x462740: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x462740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_462744:
    // 0x462744: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x462744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_462748:
    // 0x462748: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x462748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_46274c:
    // 0x46274c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_462750:
    if (ctx->pc == 0x462750u) {
        ctx->pc = 0x462750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46274Cu;
        // 0x462750: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462754u;
        goto label_462754;
    }
    ctx->pc = 0x46274Cu;
    {
        const bool branch_taken_0x46274c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x462750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46274Cu;
        // 0x462750: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46274c) {
            ctx->pc = 0x462788u;
            goto label_462788;
        }
    }
    ctx->pc = 0x462754u;
label_462754:
    // 0x462754: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x462754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_462758:
    // 0x462758: 0x132180  sll         $a0, $s3, 6
    ctx->pc = 0x462758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_46275c:
    // 0x46275c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46275cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_462760:
    // 0x462760: 0x3484000f  ori         $a0, $a0, 0xF
    ctx->pc = 0x462760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
label_462764:
    // 0x462764: 0x40f809  jalr        $v0
label_462768:
    if (ctx->pc == 0x462768u) {
        ctx->pc = 0x462768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462764u;
        // 0x462768: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46276Cu;
        goto label_46276c;
    }
    ctx->pc = 0x462764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46276Cu);
        ctx->pc = 0x462768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462764u;
        // 0x462768: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462764u, 0x46276Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46276Cu;
label_46276c:
    // 0x46276c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x46276cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_462770:
    // 0x462770: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x462770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_462774:
    // 0x462774: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x462774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_462778:
    // 0x462778: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x462778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_46277c:
    // 0x46277c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x46277cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_462780:
    // 0x462780: 0x10000003  b           . + 4 + (0x3 << 2)
label_462784:
    if (ctx->pc == 0x462784u) {
        ctx->pc = 0x462784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462780u;
        // 0x462784: 0xae440008  sw          $a0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462788u;
        goto label_462788;
    }
    ctx->pc = 0x462780u;
    {
        const bool branch_taken_0x462780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x462784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462780u;
        // 0x462784: 0xae440008  sw          $a0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462780) {
            ctx->pc = 0x462790u;
            goto label_462790;
        }
    }
    ctx->pc = 0x462788u;
label_462788:
    // 0x462788: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x462788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_46278c:
    // 0x46278c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x46278cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_462790:
    // 0x462790: 0x26e3ad18  addiu       $v1, $s7, -0x52E8
    ctx->pc = 0x462790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946072));
label_462794:
    // 0x462794: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x462794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_462798:
    // 0x462798: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x462798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_46279c:
    // 0x46279c: 0x34a5011e  ori         $a1, $a1, 0x11E
    ctx->pc = 0x46279cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
label_4627a0:
    // 0x4627a0: 0x40f809  jalr        $v0
label_4627a4:
    if (ctx->pc == 0x4627A4u) {
        ctx->pc = 0x4627A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4627A0u;
        // 0x4627a4: 0x132100  sll         $a0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4627A8u;
        goto label_4627a8;
    }
    ctx->pc = 0x4627A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4627A8u);
        ctx->pc = 0x4627A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4627A0u;
        // 0x4627a4: 0x132100  sll         $a0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4627A0u, 0x4627A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4627A8u;
label_4627a8:
    // 0x4627a8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x4627a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_4627ac:
    // 0x4627ac: 0x1a60001a  blez        $s3, . + 4 + (0x1A << 2)
label_4627b0:
    if (ctx->pc == 0x4627B0u) {
        ctx->pc = 0x4627B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4627ACu;
        // 0x4627b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4627B4u;
        goto label_4627b4;
    }
    ctx->pc = 0x4627ACu;
    {
        const bool branch_taken_0x4627ac = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x4627B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4627ACu;
        // 0x4627b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4627ac) {
            ctx->pc = 0x462818u;
            goto label_462818;
        }
    }
    ctx->pc = 0x4627B4u;
label_4627b4:
    // 0x4627b4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x4627b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4627b8:
    // 0x4627b8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4627b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4627bc:
    // 0x4627bc: 0x0  nop
    ctx->pc = 0x4627bcu;
    // NOP
label_4627c0:
    // 0x4627c0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4627c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4627c4:
    // 0x4627c4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x4627c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4627c8:
    // 0x4627c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4627c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4627cc:
    // 0x4627cc: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_4627d0:
    if (ctx->pc == 0x4627D0u) {
        ctx->pc = 0x4627D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4627CCu;
        // 0x4627d0: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4627D4u;
        goto label_4627d4;
    }
    ctx->pc = 0x4627CCu;
    {
        const bool branch_taken_0x4627cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4627D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4627CCu;
        // 0x4627d0: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4627cc) {
            ctx->pc = 0x4627E4u;
            goto label_4627e4;
        }
    }
    ctx->pc = 0x4627D4u;
label_4627d4:
    // 0x4627d4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4627d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4627d8:
    // 0x4627d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4627d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4627dc:
    // 0x4627dc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4627dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4627e0:
    // 0x4627e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4627e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4627e4:
    // 0x4627e4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4627e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4627e8:
    // 0x4627e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4627e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4627ec:
    // 0x4627ec: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_4627f0:
    if (ctx->pc == 0x4627F0u) {
        ctx->pc = 0x4627F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4627ECu;
        // 0x4627f0: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4627F4u;
        goto label_4627f4;
    }
    ctx->pc = 0x4627ECu;
    {
        const bool branch_taken_0x4627ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4627F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4627ECu;
        // 0x4627f0: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4627ec) {
            ctx->pc = 0x462804u;
            goto label_462804;
        }
    }
    ctx->pc = 0x4627F4u;
label_4627f4:
    // 0x4627f4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4627f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4627f8:
    // 0x4627f8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4627f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4627fc:
    // 0x4627fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4627fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_462800:
    // 0x462800: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x462800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_462804:
    // 0x462804: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x462804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_462808:
    // 0x462808: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x462808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_46280c:
    // 0x46280c: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x46280cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_462810:
    // 0x462810: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_462814:
    if (ctx->pc == 0x462814u) {
        ctx->pc = 0x462814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462810u;
        // 0x462814: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x462818u;
        goto label_462818;
    }
    ctx->pc = 0x462810u;
    {
        const bool branch_taken_0x462810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x462814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462810u;
        // 0x462814: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462810) {
            ctx->pc = 0x4627C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4627c0;
        }
    }
    ctx->pc = 0x462818u;
label_462818:
    // 0x462818: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x462818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46281c:
    // 0x46281c: 0xae520018  sw          $s2, 0x18($s2)
    ctx->pc = 0x46281cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 18));
label_462820:
    // 0x462820: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x462820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_462824:
    // 0x462824: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x462824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_462828:
    // 0x462828: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x462828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46282c:
    // 0x46282c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x46282cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_462830:
    // 0x462830: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x462830u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_462834:
    // 0x462834: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x462834u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_462838:
    // 0x462838: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x462838u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46283c:
    // 0x46283c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x46283cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_462840:
    // 0x462840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x462840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_462844:
    // 0x462844: 0x3e00008  jr          $ra
label_462848:
    if (ctx->pc == 0x462848u) {
        ctx->pc = 0x462848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462844u;
        // 0x462848: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46284Cu;
        goto label_46284c;
    }
    ctx->pc = 0x462844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462844u;
        // 0x462848: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46284Cu;
label_46284c:
    // 0x46284c: 0x0  nop
    ctx->pc = 0x46284cu;
    // NOP
    ctx->pc = 0x462850u;
}
