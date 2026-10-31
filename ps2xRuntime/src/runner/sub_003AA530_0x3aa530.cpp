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

// Function: sub_003AA530
// Address: 0x3aa530 - 0x3aa6a0
void sub_003AA530_0x3aa530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA530_0x3aa530");
#endif

    switch (ctx->pc) {
        case 0x3aa530u: goto label_3aa530;
        case 0x3aa534u: goto label_3aa534;
        case 0x3aa538u: goto label_3aa538;
        case 0x3aa53cu: goto label_3aa53c;
        case 0x3aa540u: goto label_3aa540;
        case 0x3aa544u: goto label_3aa544;
        case 0x3aa548u: goto label_3aa548;
        case 0x3aa54cu: goto label_3aa54c;
        case 0x3aa550u: goto label_3aa550;
        case 0x3aa554u: goto label_3aa554;
        case 0x3aa558u: goto label_3aa558;
        case 0x3aa55cu: goto label_3aa55c;
        case 0x3aa560u: goto label_3aa560;
        case 0x3aa564u: goto label_3aa564;
        case 0x3aa568u: goto label_3aa568;
        case 0x3aa56cu: goto label_3aa56c;
        case 0x3aa570u: goto label_3aa570;
        case 0x3aa574u: goto label_3aa574;
        case 0x3aa578u: goto label_3aa578;
        case 0x3aa57cu: goto label_3aa57c;
        case 0x3aa580u: goto label_3aa580;
        case 0x3aa584u: goto label_3aa584;
        case 0x3aa588u: goto label_3aa588;
        case 0x3aa58cu: goto label_3aa58c;
        case 0x3aa590u: goto label_3aa590;
        case 0x3aa594u: goto label_3aa594;
        case 0x3aa598u: goto label_3aa598;
        case 0x3aa59cu: goto label_3aa59c;
        case 0x3aa5a0u: goto label_3aa5a0;
        case 0x3aa5a4u: goto label_3aa5a4;
        case 0x3aa5a8u: goto label_3aa5a8;
        case 0x3aa5acu: goto label_3aa5ac;
        case 0x3aa5b0u: goto label_3aa5b0;
        case 0x3aa5b4u: goto label_3aa5b4;
        case 0x3aa5b8u: goto label_3aa5b8;
        case 0x3aa5bcu: goto label_3aa5bc;
        case 0x3aa5c0u: goto label_3aa5c0;
        case 0x3aa5c4u: goto label_3aa5c4;
        case 0x3aa5c8u: goto label_3aa5c8;
        case 0x3aa5ccu: goto label_3aa5cc;
        case 0x3aa5d0u: goto label_3aa5d0;
        case 0x3aa5d4u: goto label_3aa5d4;
        case 0x3aa5d8u: goto label_3aa5d8;
        case 0x3aa5dcu: goto label_3aa5dc;
        case 0x3aa5e0u: goto label_3aa5e0;
        case 0x3aa5e4u: goto label_3aa5e4;
        case 0x3aa5e8u: goto label_3aa5e8;
        case 0x3aa5ecu: goto label_3aa5ec;
        case 0x3aa5f0u: goto label_3aa5f0;
        case 0x3aa5f4u: goto label_3aa5f4;
        case 0x3aa5f8u: goto label_3aa5f8;
        case 0x3aa5fcu: goto label_3aa5fc;
        case 0x3aa600u: goto label_3aa600;
        case 0x3aa604u: goto label_3aa604;
        case 0x3aa608u: goto label_3aa608;
        case 0x3aa60cu: goto label_3aa60c;
        case 0x3aa610u: goto label_3aa610;
        case 0x3aa614u: goto label_3aa614;
        case 0x3aa618u: goto label_3aa618;
        case 0x3aa61cu: goto label_3aa61c;
        case 0x3aa620u: goto label_3aa620;
        case 0x3aa624u: goto label_3aa624;
        case 0x3aa628u: goto label_3aa628;
        case 0x3aa62cu: goto label_3aa62c;
        case 0x3aa630u: goto label_3aa630;
        case 0x3aa634u: goto label_3aa634;
        case 0x3aa638u: goto label_3aa638;
        case 0x3aa63cu: goto label_3aa63c;
        case 0x3aa640u: goto label_3aa640;
        case 0x3aa644u: goto label_3aa644;
        case 0x3aa648u: goto label_3aa648;
        case 0x3aa64cu: goto label_3aa64c;
        case 0x3aa650u: goto label_3aa650;
        case 0x3aa654u: goto label_3aa654;
        case 0x3aa658u: goto label_3aa658;
        case 0x3aa65cu: goto label_3aa65c;
        case 0x3aa660u: goto label_3aa660;
        case 0x3aa664u: goto label_3aa664;
        case 0x3aa668u: goto label_3aa668;
        case 0x3aa66cu: goto label_3aa66c;
        case 0x3aa670u: goto label_3aa670;
        case 0x3aa674u: goto label_3aa674;
        case 0x3aa678u: goto label_3aa678;
        case 0x3aa67cu: goto label_3aa67c;
        case 0x3aa680u: goto label_3aa680;
        case 0x3aa684u: goto label_3aa684;
        case 0x3aa688u: goto label_3aa688;
        case 0x3aa68cu: goto label_3aa68c;
        case 0x3aa690u: goto label_3aa690;
        case 0x3aa694u: goto label_3aa694;
        case 0x3aa698u: goto label_3aa698;
        case 0x3aa69cu: goto label_3aa69c;
        default: break;
    }

    ctx->pc = 0x3aa530u;

label_3aa530:
    // 0x3aa530: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x3aa530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
label_3aa534:
    // 0x3aa534: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x3aa534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
label_3aa538:
    // 0x3aa538: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x3aa538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
label_3aa53c:
    // 0x3aa53c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3aa53cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aa540:
    // 0x3aa540: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x3aa540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
label_3aa544:
    // 0x3aa544: 0x7fb50470  sq          $s5, 0x470($sp)
    ctx->pc = 0x3aa544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 21));
label_3aa548:
    // 0x3aa548: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x3aa548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
label_3aa54c:
    // 0x3aa54c: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x3aa54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
label_3aa550:
    // 0x3aa550: 0xffbf0460  sd          $ra, 0x460($sp)
    ctx->pc = 0x3aa550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 31));
label_3aa554:
    // 0x3aa554: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3aa554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3aa558:
    // 0x3aa558: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3aa558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3aa55c:
    // 0x3aa55c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3aa55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3aa560:
    // 0x3aa560: 0x40f809  jalr        $v0
label_3aa564:
    if (ctx->pc == 0x3AA564u) {
        ctx->pc = 0x3AA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA560u;
        // 0x3aa564: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA568u;
        goto label_3aa568;
    }
    ctx->pc = 0x3AA560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA568u);
        ctx->pc = 0x3AA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA560u;
        // 0x3aa564: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA560u, 0x3AA568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA568u;
label_3aa568:
    // 0x3aa568: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3aa568u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa56c:
    // 0x3aa56c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3aa56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3aa570:
    // 0x3aa570: 0x27b40430  addiu       $s4, $sp, 0x430
    ctx->pc = 0x3aa570u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3aa574:
    // 0x3aa574: 0x27b50410  addiu       $s5, $sp, 0x410
    ctx->pc = 0x3aa574u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3aa578:
    // 0x3aa578: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3aa578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3aa57c:
    // 0x3aa57c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3aa57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3aa580:
    // 0x3aa580: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3aa580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3aa584:
    // 0x3aa584: 0x0  nop
    ctx->pc = 0x3aa584u;
    // NOP
label_3aa588:
    // 0x3aa588: 0x0  nop
    ctx->pc = 0x3aa588u;
    // NOP
label_3aa58c:
    // 0x3aa58c: 0x0  nop
    ctx->pc = 0x3aa58cu;
    // NOP
label_3aa590:
    // 0x3aa590: 0x0  nop
    ctx->pc = 0x3aa590u;
    // NOP
label_3aa594:
    // 0x3aa594: 0x0  nop
    ctx->pc = 0x3aa594u;
    // NOP
label_3aa598:
    // 0x3aa598: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3aa59c:
    if (ctx->pc == 0x3AA59Cu) {
        ctx->pc = 0x3AA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA598u;
        // 0x3aa59c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA5A0u;
        goto label_3aa5a0;
    }
    ctx->pc = 0x3AA598u;
    {
        const bool branch_taken_0x3aa598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA598u;
        // 0x3aa59c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa598) {
            ctx->pc = 0x3AA588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aa588;
        }
    }
    ctx->pc = 0x3AA5A0u;
label_3aa5a0:
    // 0x3aa5a0: 0xc138ddc  jal         func_4E3770
label_3aa5a4:
    if (ctx->pc == 0x3AA5A4u) {
        ctx->pc = 0x3AA5A8u;
        goto label_3aa5a8;
    }
    ctx->pc = 0x3AA5A0u;
    SET_GPR_U32(ctx, 31, 0x3AA5A8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3AA5A0u, 0x3AA5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA5A8u;
label_3aa5a8:
    // 0x3aa5a8: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3aa5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3aa5ac:
    // 0x3aa5ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3aa5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aa5b0:
    // 0x3aa5b0: 0x86300070  lh          $s0, 0x70($s1)
    ctx->pc = 0x3aa5b0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_3aa5b4:
    // 0x3aa5b4: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x3aa5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3aa5b8:
    // 0x3aa5b8: 0xc0e87c0  jal         func_3A1F00
label_3aa5bc:
    if (ctx->pc == 0x3AA5BCu) {
        ctx->pc = 0x3AA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5B8u;
        // 0x3aa5bc: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA5C0u;
        goto label_3aa5c0;
    }
    ctx->pc = 0x3AA5B8u;
    SET_GPR_U32(ctx, 31, 0x3AA5C0u);
    ctx->pc = 0x3AA5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA5B8u;
    // 0x3aa5bc: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3AA5B8u, 0x3AA5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA5C0u;
label_3aa5c0:
    // 0x3aa5c0: 0x3c01bf40  lui         $at, 0xBF40
    ctx->pc = 0x3aa5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48960 << 16));
label_3aa5c4:
    // 0x3aa5c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3aa5c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3aa5c8:
    // 0x3aa5c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aa5cc:
    // 0x3aa5cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aa5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3aa5d0:
    // 0x3aa5d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aa5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aa5d4:
    // 0x3aa5d4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3aa5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3aa5d8:
    // 0x3aa5d8: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x3aa5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
label_3aa5dc:
    // 0x3aa5dc: 0xafa00434  sw          $zero, 0x434($sp)
    ctx->pc = 0x3aa5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 0));
label_3aa5e0:
    // 0x3aa5e0: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x3aa5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3aa5e4:
    // 0x3aa5e4: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x3aa5e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_3aa5e8:
    // 0x3aa5e8: 0x7ba60430  lq          $a2, 0x430($sp)
    ctx->pc = 0x3aa5e8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3aa5ec:
    // 0x3aa5ec: 0x7fa60420  sq          $a2, 0x420($sp)
    ctx->pc = 0x3aa5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 6));
label_3aa5f0:
    // 0x3aa5f0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3aa5f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3aa5f4:
    // 0x3aa5f4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3aa5f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3aa5f8:
    // 0x3aa5f8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3aa5f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3aa5fc:
    // 0x3aa5fc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3aa5fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3aa600:
    // 0x3aa600: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3aa600u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3aa604:
    // 0x3aa604: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3aa604u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3aa608:
    // 0x3aa608: 0x7fa30410  sq          $v1, 0x410($sp)
    ctx->pc = 0x3aa608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
label_3aa60c:
    // 0x3aa60c: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3aa60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3aa610:
    // 0x3aa610: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3aa610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3aa614:
    // 0x3aa614: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3aa614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3aa618:
    // 0x3aa618: 0xc0f809  jalr        $a2
label_3aa61c:
    if (ctx->pc == 0x3AA61Cu) {
        ctx->pc = 0x3AA620u;
        goto label_3aa620;
    }
    ctx->pc = 0x3AA618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3AA620u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA618u, 0x3AA620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA620u;
label_3aa620:
    // 0x3aa620: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3aa620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3aa624:
    // 0x3aa624: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x3aa624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3aa628:
    // 0x3aa628: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3aa62c:
    if (ctx->pc == 0x3AA62Cu) {
        ctx->pc = 0x3AA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA628u;
        // 0x3aa62c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA630u;
        goto label_3aa630;
    }
    ctx->pc = 0x3AA628u;
    {
        const bool branch_taken_0x3aa628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA628u;
        // 0x3aa62c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa628) {
            ctx->pc = 0x3AA678u;
            goto label_3aa678;
        }
    }
    ctx->pc = 0x3AA630u;
label_3aa630:
    // 0x3aa630: 0xc0e9694  jal         func_3A5A50
label_3aa634:
    if (ctx->pc == 0x3AA634u) {
        ctx->pc = 0x3AA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA630u;
        // 0x3aa634: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA638u;
        goto label_3aa638;
    }
    ctx->pc = 0x3AA630u;
    SET_GPR_U32(ctx, 31, 0x3AA638u);
    ctx->pc = 0x3AA634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA630u;
    // 0x3aa634: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3AA630u, 0x3AA638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA638u;
label_3aa638:
    // 0x3aa638: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3aa63c:
    if (ctx->pc == 0x3AA63Cu) {
        ctx->pc = 0x3AA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA638u;
        // 0x3aa63c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA640u;
        goto label_3aa640;
    }
    ctx->pc = 0x3AA638u;
    {
        const bool branch_taken_0x3aa638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA638u;
        // 0x3aa63c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa638) {
            ctx->pc = 0x3AA664u;
            goto label_3aa664;
        }
    }
    ctx->pc = 0x3AA640u;
label_3aa640:
    // 0x3aa640: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3aa640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3aa644:
    // 0x3aa644: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3aa644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3aa648:
    // 0x3aa648: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3aa648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3aa64c:
    // 0x3aa64c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3aa64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3aa650:
    // 0x3aa650: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3aa650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3aa654:
    // 0x3aa654: 0xc0e9f56  jal         func_3A7D58
label_3aa658:
    if (ctx->pc == 0x3AA658u) {
        ctx->pc = 0x3AA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA654u;
        // 0x3aa658: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA65Cu;
        goto label_3aa65c;
    }
    ctx->pc = 0x3AA654u;
    SET_GPR_U32(ctx, 31, 0x3AA65Cu);
    ctx->pc = 0x3AA658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA654u;
    // 0x3aa658: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D58u, 0x3AA654u, 0x3AA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA65Cu;
label_3aa65c:
    // 0x3aa65c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3aa660:
    if (ctx->pc == 0x3AA660u) {
        ctx->pc = 0x3AA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA65Cu;
        // 0x3aa660: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA664u;
        goto label_3aa664;
    }
    ctx->pc = 0x3AA65Cu;
    {
        const bool branch_taken_0x3aa65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa65c) {
            ctx->pc = 0x3AA660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA65Cu;
            // 0x3aa660: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA66Cu;
            goto label_3aa66c;
        }
    }
    ctx->pc = 0x3AA664u;
label_3aa664:
    // 0x3aa664: 0x10000004  b           . + 4 + (0x4 << 2)
label_3aa668:
    if (ctx->pc == 0x3AA668u) {
        ctx->pc = 0x3AA668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA664u;
        // 0x3aa668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA66Cu;
        goto label_3aa66c;
    }
    ctx->pc = 0x3AA664u;
    {
        const bool branch_taken_0x3aa664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA664u;
        // 0x3aa668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa664) {
            ctx->pc = 0x3AA678u;
            goto label_3aa678;
        }
    }
    ctx->pc = 0x3AA66Cu;
label_3aa66c:
    // 0x3aa66c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aa66cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aa670:
    // 0x3aa670: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3aa670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3aa674:
    // 0x3aa674: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3aa674u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3aa678:
    // 0x3aa678: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x3aa678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3aa67c:
    // 0x3aa67c: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x3aa67cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3aa680:
    // 0x3aa680: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x3aa680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3aa684:
    // 0x3aa684: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x3aa684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3aa688:
    // 0x3aa688: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x3aa688u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3aa68c:
    // 0x3aa68c: 0x7bb50470  lq          $s5, 0x470($sp)
    ctx->pc = 0x3aa68cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3aa690:
    // 0x3aa690: 0xdfbf0460  ld          $ra, 0x460($sp)
    ctx->pc = 0x3aa690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
label_3aa694:
    // 0x3aa694: 0x3e00008  jr          $ra
label_3aa698:
    if (ctx->pc == 0x3AA698u) {
        ctx->pc = 0x3AA698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA694u;
        // 0x3aa698: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA69Cu;
        goto label_3aa69c;
    }
    ctx->pc = 0x3AA694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA694u;
        // 0x3aa698: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA69Cu;
label_3aa69c:
    // 0x3aa69c: 0x0  nop
    ctx->pc = 0x3aa69cu;
    // NOP
    ctx->pc = 0x3aa6a0u;
}
