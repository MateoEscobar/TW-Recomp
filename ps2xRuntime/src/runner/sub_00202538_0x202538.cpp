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

// Function: sub_00202538
// Address: 0x202538 - 0x2028e0
void sub_00202538_0x202538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202538_0x202538");
#endif

    switch (ctx->pc) {
        case 0x202538u: goto label_202538;
        case 0x20253cu: goto label_20253c;
        case 0x202540u: goto label_202540;
        case 0x202544u: goto label_202544;
        case 0x202548u: goto label_202548;
        case 0x20254cu: goto label_20254c;
        case 0x202550u: goto label_202550;
        case 0x202554u: goto label_202554;
        case 0x202558u: goto label_202558;
        case 0x20255cu: goto label_20255c;
        case 0x202560u: goto label_202560;
        case 0x202564u: goto label_202564;
        case 0x202568u: goto label_202568;
        case 0x20256cu: goto label_20256c;
        case 0x202570u: goto label_202570;
        case 0x202574u: goto label_202574;
        case 0x202578u: goto label_202578;
        case 0x20257cu: goto label_20257c;
        case 0x202580u: goto label_202580;
        case 0x202584u: goto label_202584;
        case 0x202588u: goto label_202588;
        case 0x20258cu: goto label_20258c;
        case 0x202590u: goto label_202590;
        case 0x202594u: goto label_202594;
        case 0x202598u: goto label_202598;
        case 0x20259cu: goto label_20259c;
        case 0x2025a0u: goto label_2025a0;
        case 0x2025a4u: goto label_2025a4;
        case 0x2025a8u: goto label_2025a8;
        case 0x2025acu: goto label_2025ac;
        case 0x2025b0u: goto label_2025b0;
        case 0x2025b4u: goto label_2025b4;
        case 0x2025b8u: goto label_2025b8;
        case 0x2025bcu: goto label_2025bc;
        case 0x2025c0u: goto label_2025c0;
        case 0x2025c4u: goto label_2025c4;
        case 0x2025c8u: goto label_2025c8;
        case 0x2025ccu: goto label_2025cc;
        case 0x2025d0u: goto label_2025d0;
        case 0x2025d4u: goto label_2025d4;
        case 0x2025d8u: goto label_2025d8;
        case 0x2025dcu: goto label_2025dc;
        case 0x2025e0u: goto label_2025e0;
        case 0x2025e4u: goto label_2025e4;
        case 0x2025e8u: goto label_2025e8;
        case 0x2025ecu: goto label_2025ec;
        case 0x2025f0u: goto label_2025f0;
        case 0x2025f4u: goto label_2025f4;
        case 0x2025f8u: goto label_2025f8;
        case 0x2025fcu: goto label_2025fc;
        case 0x202600u: goto label_202600;
        case 0x202604u: goto label_202604;
        case 0x202608u: goto label_202608;
        case 0x20260cu: goto label_20260c;
        case 0x202610u: goto label_202610;
        case 0x202614u: goto label_202614;
        case 0x202618u: goto label_202618;
        case 0x20261cu: goto label_20261c;
        case 0x202620u: goto label_202620;
        case 0x202624u: goto label_202624;
        case 0x202628u: goto label_202628;
        case 0x20262cu: goto label_20262c;
        case 0x202630u: goto label_202630;
        case 0x202634u: goto label_202634;
        case 0x202638u: goto label_202638;
        case 0x20263cu: goto label_20263c;
        case 0x202640u: goto label_202640;
        case 0x202644u: goto label_202644;
        case 0x202648u: goto label_202648;
        case 0x20264cu: goto label_20264c;
        case 0x202650u: goto label_202650;
        case 0x202654u: goto label_202654;
        case 0x202658u: goto label_202658;
        case 0x20265cu: goto label_20265c;
        case 0x202660u: goto label_202660;
        case 0x202664u: goto label_202664;
        case 0x202668u: goto label_202668;
        case 0x20266cu: goto label_20266c;
        case 0x202670u: goto label_202670;
        case 0x202674u: goto label_202674;
        case 0x202678u: goto label_202678;
        case 0x20267cu: goto label_20267c;
        case 0x202680u: goto label_202680;
        case 0x202684u: goto label_202684;
        case 0x202688u: goto label_202688;
        case 0x20268cu: goto label_20268c;
        case 0x202690u: goto label_202690;
        case 0x202694u: goto label_202694;
        case 0x202698u: goto label_202698;
        case 0x20269cu: goto label_20269c;
        case 0x2026a0u: goto label_2026a0;
        case 0x2026a4u: goto label_2026a4;
        case 0x2026a8u: goto label_2026a8;
        case 0x2026acu: goto label_2026ac;
        case 0x2026b0u: goto label_2026b0;
        case 0x2026b4u: goto label_2026b4;
        case 0x2026b8u: goto label_2026b8;
        case 0x2026bcu: goto label_2026bc;
        case 0x2026c0u: goto label_2026c0;
        case 0x2026c4u: goto label_2026c4;
        case 0x2026c8u: goto label_2026c8;
        case 0x2026ccu: goto label_2026cc;
        case 0x2026d0u: goto label_2026d0;
        case 0x2026d4u: goto label_2026d4;
        case 0x2026d8u: goto label_2026d8;
        case 0x2026dcu: goto label_2026dc;
        case 0x2026e0u: goto label_2026e0;
        case 0x2026e4u: goto label_2026e4;
        case 0x2026e8u: goto label_2026e8;
        case 0x2026ecu: goto label_2026ec;
        case 0x2026f0u: goto label_2026f0;
        case 0x2026f4u: goto label_2026f4;
        case 0x2026f8u: goto label_2026f8;
        case 0x2026fcu: goto label_2026fc;
        case 0x202700u: goto label_202700;
        case 0x202704u: goto label_202704;
        case 0x202708u: goto label_202708;
        case 0x20270cu: goto label_20270c;
        case 0x202710u: goto label_202710;
        case 0x202714u: goto label_202714;
        case 0x202718u: goto label_202718;
        case 0x20271cu: goto label_20271c;
        case 0x202720u: goto label_202720;
        case 0x202724u: goto label_202724;
        case 0x202728u: goto label_202728;
        case 0x20272cu: goto label_20272c;
        case 0x202730u: goto label_202730;
        case 0x202734u: goto label_202734;
        case 0x202738u: goto label_202738;
        case 0x20273cu: goto label_20273c;
        case 0x202740u: goto label_202740;
        case 0x202744u: goto label_202744;
        case 0x202748u: goto label_202748;
        case 0x20274cu: goto label_20274c;
        case 0x202750u: goto label_202750;
        case 0x202754u: goto label_202754;
        case 0x202758u: goto label_202758;
        case 0x20275cu: goto label_20275c;
        case 0x202760u: goto label_202760;
        case 0x202764u: goto label_202764;
        case 0x202768u: goto label_202768;
        case 0x20276cu: goto label_20276c;
        case 0x202770u: goto label_202770;
        case 0x202774u: goto label_202774;
        case 0x202778u: goto label_202778;
        case 0x20277cu: goto label_20277c;
        case 0x202780u: goto label_202780;
        case 0x202784u: goto label_202784;
        case 0x202788u: goto label_202788;
        case 0x20278cu: goto label_20278c;
        case 0x202790u: goto label_202790;
        case 0x202794u: goto label_202794;
        case 0x202798u: goto label_202798;
        case 0x20279cu: goto label_20279c;
        case 0x2027a0u: goto label_2027a0;
        case 0x2027a4u: goto label_2027a4;
        case 0x2027a8u: goto label_2027a8;
        case 0x2027acu: goto label_2027ac;
        case 0x2027b0u: goto label_2027b0;
        case 0x2027b4u: goto label_2027b4;
        case 0x2027b8u: goto label_2027b8;
        case 0x2027bcu: goto label_2027bc;
        case 0x2027c0u: goto label_2027c0;
        case 0x2027c4u: goto label_2027c4;
        case 0x2027c8u: goto label_2027c8;
        case 0x2027ccu: goto label_2027cc;
        case 0x2027d0u: goto label_2027d0;
        case 0x2027d4u: goto label_2027d4;
        case 0x2027d8u: goto label_2027d8;
        case 0x2027dcu: goto label_2027dc;
        case 0x2027e0u: goto label_2027e0;
        case 0x2027e4u: goto label_2027e4;
        case 0x2027e8u: goto label_2027e8;
        case 0x2027ecu: goto label_2027ec;
        case 0x2027f0u: goto label_2027f0;
        case 0x2027f4u: goto label_2027f4;
        case 0x2027f8u: goto label_2027f8;
        case 0x2027fcu: goto label_2027fc;
        case 0x202800u: goto label_202800;
        case 0x202804u: goto label_202804;
        case 0x202808u: goto label_202808;
        case 0x20280cu: goto label_20280c;
        case 0x202810u: goto label_202810;
        case 0x202814u: goto label_202814;
        case 0x202818u: goto label_202818;
        case 0x20281cu: goto label_20281c;
        case 0x202820u: goto label_202820;
        case 0x202824u: goto label_202824;
        case 0x202828u: goto label_202828;
        case 0x20282cu: goto label_20282c;
        case 0x202830u: goto label_202830;
        case 0x202834u: goto label_202834;
        case 0x202838u: goto label_202838;
        case 0x20283cu: goto label_20283c;
        case 0x202840u: goto label_202840;
        case 0x202844u: goto label_202844;
        case 0x202848u: goto label_202848;
        case 0x20284cu: goto label_20284c;
        case 0x202850u: goto label_202850;
        case 0x202854u: goto label_202854;
        case 0x202858u: goto label_202858;
        case 0x20285cu: goto label_20285c;
        case 0x202860u: goto label_202860;
        case 0x202864u: goto label_202864;
        case 0x202868u: goto label_202868;
        case 0x20286cu: goto label_20286c;
        case 0x202870u: goto label_202870;
        case 0x202874u: goto label_202874;
        case 0x202878u: goto label_202878;
        case 0x20287cu: goto label_20287c;
        case 0x202880u: goto label_202880;
        case 0x202884u: goto label_202884;
        case 0x202888u: goto label_202888;
        case 0x20288cu: goto label_20288c;
        case 0x202890u: goto label_202890;
        case 0x202894u: goto label_202894;
        case 0x202898u: goto label_202898;
        case 0x20289cu: goto label_20289c;
        case 0x2028a0u: goto label_2028a0;
        case 0x2028a4u: goto label_2028a4;
        case 0x2028a8u: goto label_2028a8;
        case 0x2028acu: goto label_2028ac;
        case 0x2028b0u: goto label_2028b0;
        case 0x2028b4u: goto label_2028b4;
        case 0x2028b8u: goto label_2028b8;
        case 0x2028bcu: goto label_2028bc;
        case 0x2028c0u: goto label_2028c0;
        case 0x2028c4u: goto label_2028c4;
        case 0x2028c8u: goto label_2028c8;
        case 0x2028ccu: goto label_2028cc;
        case 0x2028d0u: goto label_2028d0;
        case 0x2028d4u: goto label_2028d4;
        case 0x2028d8u: goto label_2028d8;
        case 0x2028dcu: goto label_2028dc;
        default: break;
    }

    ctx->pc = 0x202538u;

label_202538:
    // 0x202538: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x202538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_20253c:
    // 0x20253c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x20253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_202540:
    // 0x202540: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x202540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_202544:
    // 0x202544: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x202544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_202548:
    // 0x202548: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x202548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_20254c:
    // 0x20254c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x20254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_202550:
    // 0x202550: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x202550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_202554:
    // 0x202554: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x202554u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_202558:
    // 0x202558: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x202558u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_20255c:
    // 0x20255c: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x20255cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_202560:
    // 0x202560: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x202560u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_202564:
    // 0x202564: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x202564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_202568:
    // 0x202568: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x202568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20256c:
    // 0x20256c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20256cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_202570:
    // 0x202570: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x202570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_202574:
    // 0x202574: 0x40f809  jalr        $v0
label_202578:
    if (ctx->pc == 0x202578u) {
        ctx->pc = 0x202578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202574u;
        // 0x202578: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20257Cu;
        goto label_20257c;
    }
    ctx->pc = 0x202574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20257Cu);
        ctx->pc = 0x202578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202574u;
        // 0x202578: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202574u, 0x20257Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20257Cu;
label_20257c:
    // 0x20257c: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
label_202580:
    if (ctx->pc == 0x202580u) {
        ctx->pc = 0x202580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20257Cu;
        // 0x202580: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202584u;
        goto label_202584;
    }
    ctx->pc = 0x20257Cu;
    {
        const bool branch_taken_0x20257c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20257Cu;
        // 0x202580: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20257c) {
            ctx->pc = 0x2028B0u;
            goto label_2028b0;
        }
    }
    ctx->pc = 0x202584u;
label_202584:
    // 0x202584: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x202584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_202588:
    // 0x202588: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x202588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20258c:
    // 0x20258c: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x20258cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_202590:
    // 0x202590: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x202590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_202594:
    // 0x202594: 0x60f809  jalr        $v1
label_202598:
    if (ctx->pc == 0x202598u) {
        ctx->pc = 0x202598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202594u;
        // 0x202598: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20259Cu;
        goto label_20259c;
    }
    ctx->pc = 0x202594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20259Cu);
        ctx->pc = 0x202598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202594u;
        // 0x202598: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202594u, 0x20259Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20259Cu;
label_20259c:
    // 0x20259c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x20259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2025a0:
    // 0x2025a0: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2025a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2025a4:
    // 0x2025a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2025a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2025a8:
    // 0x2025a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2025a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2025ac:
    // 0x2025ac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2025acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2025b0:
    // 0x2025b0: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x2025b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2025b4:
    // 0x2025b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2025b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2025b8:
    // 0x2025b8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2025b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2025bc:
    // 0x2025bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2025bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2025c0:
    // 0x2025c0: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x2025c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_2025c4:
    // 0x2025c4: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x2025c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_2025c8:
    // 0x2025c8: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x2025c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_2025cc:
    // 0x2025cc: 0x40f809  jalr        $v0
label_2025d0:
    if (ctx->pc == 0x2025D0u) {
        ctx->pc = 0x2025D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025CCu;
        // 0x2025d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2025D4u;
        goto label_2025d4;
    }
    ctx->pc = 0x2025CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2025D4u);
        ctx->pc = 0x2025D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025CCu;
        // 0x2025d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2025CCu, 0x2025D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2025D4u;
label_2025d4:
    // 0x2025d4: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x2025d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
label_2025d8:
    // 0x2025d8: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x2025d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_2025dc:
    // 0x2025dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2025dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2025e0:
    // 0x2025e0: 0x0  nop
    ctx->pc = 0x2025e0u;
    // NOP
label_2025e4:
    // 0x2025e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2025e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2025e8:
    // 0x2025e8: 0x0  nop
    ctx->pc = 0x2025e8u;
    // NOP
label_2025ec:
    // 0x2025ec: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_2025f0:
    if (ctx->pc == 0x2025F0u) {
        ctx->pc = 0x2025F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025ECu;
        // 0x2025f0: 0x26500070  addiu       $s0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2025F4u;
        goto label_2025f4;
    }
    ctx->pc = 0x2025ECu;
    {
        const bool branch_taken_0x2025ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2025F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025ECu;
        // 0x2025f0: 0x26500070  addiu       $s0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025ec) {
            ctx->pc = 0x20264Cu;
            goto label_20264c;
        }
    }
    ctx->pc = 0x2025F4u;
label_2025f4:
    // 0x2025f4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x2025f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_2025f8:
    // 0x2025f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2025f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2025fc:
    // 0x2025fc: 0xc068818  jal         func_1A2060
label_202600:
    if (ctx->pc == 0x202600u) {
        ctx->pc = 0x202600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025FCu;
        // 0x202600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202604u;
        goto label_202604;
    }
    ctx->pc = 0x2025FCu;
    SET_GPR_U32(ctx, 31, 0x202604u);
    ctx->pc = 0x202600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2025FCu;
    // 0x202600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x2025FCu, 0x202604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202604u;
label_202604:
    // 0x202604: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x202604u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202608:
    // 0x202608: 0xc06886e  jal         func_1A21B8
label_20260c:
    if (ctx->pc == 0x20260Cu) {
        ctx->pc = 0x20260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202608u;
        // 0x20260c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202610u;
        goto label_202610;
    }
    ctx->pc = 0x202608u;
    SET_GPR_U32(ctx, 31, 0x202610u);
    ctx->pc = 0x20260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202608u;
    // 0x20260c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x202608u, 0x202610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202610u;
label_202610:
    // 0x202610: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x202610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202614:
    // 0x202614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202618:
    // 0x202618: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x202618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20261c:
    // 0x20261c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20261cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202620:
    // 0x202620: 0x3c013f83  lui         $at, 0x3F83
    ctx->pc = 0x202620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16259 << 16));
label_202624:
    // 0x202624: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x202624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_202628:
    // 0x202628: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x202628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20262c:
    // 0x20262c: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x20262cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_202630:
    // 0x202630: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x202630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_202634:
    // 0x202634: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x202634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_202638:
    // 0x202638: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x202638u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_20263c:
    // 0x20263c: 0xc068848  jal         func_1A2120
label_202640:
    if (ctx->pc == 0x202640u) {
        ctx->pc = 0x202640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20263Cu;
        // 0x202640: 0x460d0342  mul.s       $f13, $f0, $f13 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x202644u;
        goto label_202644;
    }
    ctx->pc = 0x20263Cu;
    SET_GPR_U32(ctx, 31, 0x202644u);
    ctx->pc = 0x202640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20263Cu;
    // 0x202640: 0x460d0342  mul.s       $f13, $f0, $f13 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x20263Cu, 0x202644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202644u;
label_202644:
    // 0x202644: 0x1000001c  b           . + 4 + (0x1C << 2)
label_202648:
    if (ctx->pc == 0x202648u) {
        ctx->pc = 0x202648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202644u;
        // 0x202648: 0x26510114  addiu       $s1, $s2, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20264Cu;
        goto label_20264c;
    }
    ctx->pc = 0x202644u;
    {
        const bool branch_taken_0x202644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202644u;
        // 0x202648: 0x26510114  addiu       $s1, $s2, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202644) {
            ctx->pc = 0x2026B8u;
            goto label_2026b8;
        }
    }
    ctx->pc = 0x20264Cu;
label_20264c:
    // 0x20264c: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x20264cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_202650:
    // 0x202650: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x202650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_202654:
    // 0x202654: 0xc441f570  lwc1        $f1, -0xA90($v0)
    ctx->pc = 0x202654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202658:
    // 0x202658: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x202658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_20265c:
    // 0x20265c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x20265cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_202660:
    // 0x202660: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202664:
    // 0x202664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202668:
    // 0x202668: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x202668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20266c:
    // 0x20266c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x20266cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202670:
    // 0x202670: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x202670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_202674:
    // 0x202674: 0xc068818  jal         func_1A2060
label_202678:
    if (ctx->pc == 0x202678u) {
        ctx->pc = 0x202678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202674u;
        // 0x202678: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20267Cu;
        goto label_20267c;
    }
    ctx->pc = 0x202674u;
    SET_GPR_U32(ctx, 31, 0x20267Cu);
    ctx->pc = 0x202678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202674u;
    // 0x202678: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x202674u, 0x20267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20267Cu;
label_20267c:
    // 0x20267c: 0xc06886e  jal         func_1A21B8
label_202680:
    if (ctx->pc == 0x202680u) {
        ctx->pc = 0x202680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20267Cu;
        // 0x202680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202684u;
        goto label_202684;
    }
    ctx->pc = 0x20267Cu;
    SET_GPR_U32(ctx, 31, 0x202684u);
    ctx->pc = 0x202680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20267Cu;
    // 0x202680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x20267Cu, 0x202684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202684u;
label_202684:
    // 0x202684: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x202684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_202688:
    // 0x202688: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x202688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20268c:
    // 0x20268c: 0xc440f574  lwc1        $f0, -0xA8C($v0)
    ctx->pc = 0x20268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202690:
    // 0x202690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202694:
    // 0x202694: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x202694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_202698:
    // 0x202698: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x202698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20269c:
    // 0x20269c: 0x3c013f83  lui         $at, 0x3F83
    ctx->pc = 0x20269cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16259 << 16));
label_2026a0:
    // 0x2026a0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2026a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2026a4:
    // 0x2026a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2026a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2026a8:
    // 0x2026a8: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x2026a8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_2026ac:
    // 0x2026ac: 0xc068848  jal         func_1A2120
label_2026b0:
    if (ctx->pc == 0x2026B0u) {
        ctx->pc = 0x2026B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026ACu;
        // 0x2026b0: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2026B4u;
        goto label_2026b4;
    }
    ctx->pc = 0x2026ACu;
    SET_GPR_U32(ctx, 31, 0x2026B4u);
    ctx->pc = 0x2026B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026ACu;
    // 0x2026b0: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x2026ACu, 0x2026B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026B4u;
label_2026b4:
    // 0x2026b4: 0x26510114  addiu       $s1, $s2, 0x114
    ctx->pc = 0x2026b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 276));
label_2026b8:
    // 0x2026b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2026b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2026bc:
    // 0x2026bc: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2026bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2026c0:
    // 0x2026c0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2026c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2026c4:
    // 0x2026c4: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x2026c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_2026c8:
    // 0x2026c8: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x2026c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_2026cc:
    // 0x2026cc: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x2026ccu;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2026d0:
    // 0x2026d0: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x2026d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2026d4:
    // 0x2026d4: 0x40f809  jalr        $v0
label_2026d8:
    if (ctx->pc == 0x2026D8u) {
        ctx->pc = 0x2026D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026D4u;
        // 0x2026d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2026DCu;
        goto label_2026dc;
    }
    ctx->pc = 0x2026D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2026DCu);
        ctx->pc = 0x2026D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026D4u;
        // 0x2026d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2026D4u, 0x2026DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2026DCu;
label_2026dc:
    // 0x2026dc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2026dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2026e0:
    // 0x2026e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2026e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2026e4:
    // 0x2026e4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2026e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_2026e8:
    // 0x2026e8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2026e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_2026ec:
    // 0x2026ec: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2026ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2026f0:
    // 0x2026f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2026f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2026f4:
    // 0x2026f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2026f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2026f8:
    // 0x2026f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2026f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2026fc:
    // 0x2026fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2026fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_202700:
    // 0x202700: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x202700u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_202704:
    // 0x202704: 0xc068864  jal         func_1A2190
label_202708:
    if (ctx->pc == 0x202708u) {
        ctx->pc = 0x202708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202704u;
        // 0x202708: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20270Cu;
        goto label_20270c;
    }
    ctx->pc = 0x202704u;
    SET_GPR_U32(ctx, 31, 0x20270Cu);
    ctx->pc = 0x202708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202704u;
    // 0x202708: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2190u, 0x202704u, 0x20270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20270Cu;
label_20270c:
    // 0x20270c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_202710:
    // 0x202710: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x202710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_202714:
    // 0x202714: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x202714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_202718:
    // 0x202718: 0x60f809  jalr        $v1
label_20271c:
    if (ctx->pc == 0x20271Cu) {
        ctx->pc = 0x20271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202718u;
        // 0x20271c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202720u;
        goto label_202720;
    }
    ctx->pc = 0x202718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x202720u);
        ctx->pc = 0x20271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202718u;
        // 0x20271c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202718u, 0x202720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x202720u;
label_202720:
    // 0x202720: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x202720u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_202724:
    // 0x202724: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x202724u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_202728:
    // 0x202728: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x202728u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_20272c:
    // 0x20272c: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x20272cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_202730:
    // 0x202730: 0xc0cdd5a  jal         func_337568
label_202734:
    if (ctx->pc == 0x202734u) {
        ctx->pc = 0x202734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202730u;
        // 0x202734: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x202738u;
        goto label_202738;
    }
    ctx->pc = 0x202730u;
    SET_GPR_U32(ctx, 31, 0x202738u);
    ctx->pc = 0x202734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202730u;
    // 0x202734: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x202730u, 0x202738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202738u;
label_202738:
    // 0x202738: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x202738u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_20273c:
    // 0x20273c: 0x4616b836  c.le.s      $f23, $f22
    ctx->pc = 0x20273cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202740:
    // 0x202740: 0x0  nop
    ctx->pc = 0x202740u;
    // NOP
label_202744:
    // 0x202744: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_202748:
    if (ctx->pc == 0x202748u) {
        ctx->pc = 0x202748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202744u;
        // 0x202748: 0x4600b806  mov.s       $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20274Cu;
        goto label_20274c;
    }
    ctx->pc = 0x202744u;
    {
        const bool branch_taken_0x202744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x202748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202744u;
        // 0x202748: 0x4600b806  mov.s       $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202744) {
            ctx->pc = 0x202750u;
            goto label_202750;
        }
    }
    ctx->pc = 0x20274Cu;
label_20274c:
    // 0x20274c: 0x4614b029  min.s       $f0, $f22, $f20
    ctx->pc = 0x20274cu;
    ctx->f[0] = std::min(ctx->f[22], ctx->f[20]);
label_202750:
    // 0x202750: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x202750u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_202754:
    // 0x202754: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x202754u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_202758:
    // 0x202758: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x202758u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_20275c:
    // 0x20275c: 0x26500170  addiu       $s0, $s2, 0x170
    ctx->pc = 0x20275cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
label_202760:
    // 0x202760: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x202760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_202764:
    // 0x202764: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x202764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_202768:
    // 0x202768: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x202768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_20276c:
    // 0x20276c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20276cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202770:
    // 0x202770: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x202770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202774:
    // 0x202774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202778:
    // 0x202778: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x202778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_20277c:
    // 0x20277c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20277cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_202780:
    // 0x202780: 0x26510214  addiu       $s1, $s2, 0x214
    ctx->pc = 0x202780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 532));
label_202784:
    // 0x202784: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x202784u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_202788:
    // 0x202788: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x202788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_20278c:
    // 0x20278c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x20278cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_202790:
    // 0x202790: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x202790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202794:
    // 0x202794: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x202794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_202798:
    // 0x202798: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x202798u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_20279c:
    // 0x20279c: 0x46140882  mul.s       $f2, $f1, $f20
    ctx->pc = 0x20279cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2027a0:
    // 0x2027a0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2027a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2027a4:
    // 0x2027a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2027a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2027a8:
    // 0x2027a8: 0xc068818  jal         func_1A2060
label_2027ac:
    if (ctx->pc == 0x2027ACu) {
        ctx->pc = 0x2027ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027A8u;
        // 0x2027ac: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2027B0u;
        goto label_2027b0;
    }
    ctx->pc = 0x2027A8u;
    SET_GPR_U32(ctx, 31, 0x2027B0u);
    ctx->pc = 0x2027ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027A8u;
    // 0x2027ac: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x2027A8u, 0x2027B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027B0u;
label_2027b0:
    // 0x2027b0: 0xc06886e  jal         func_1A21B8
label_2027b4:
    if (ctx->pc == 0x2027B4u) {
        ctx->pc = 0x2027B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027B0u;
        // 0x2027b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2027B8u;
        goto label_2027b8;
    }
    ctx->pc = 0x2027B0u;
    SET_GPR_U32(ctx, 31, 0x2027B8u);
    ctx->pc = 0x2027B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027B0u;
    // 0x2027b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x2027B0u, 0x2027B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027B8u;
label_2027b8:
    // 0x2027b8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2027b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2027bc:
    // 0x2027bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2027bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2027c0:
    // 0x2027c0: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x2027c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2027c4:
    // 0x2027c4: 0xc068848  jal         func_1A2120
label_2027c8:
    if (ctx->pc == 0x2027C8u) {
        ctx->pc = 0x2027C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027C4u;
        // 0x2027c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2027CCu;
        goto label_2027cc;
    }
    ctx->pc = 0x2027C4u;
    SET_GPR_U32(ctx, 31, 0x2027CCu);
    ctx->pc = 0x2027C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027C4u;
    // 0x2027c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x2027C4u, 0x2027CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027CCu;
label_2027cc:
    // 0x2027cc: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x2027ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2027d0:
    // 0x2027d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2027d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2027d4:
    // 0x2027d4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2027d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2027d8:
    // 0x2027d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2027d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2027dc:
    // 0x2027dc: 0x46001541  sub.s       $f21, $f2, $f0
    ctx->pc = 0x2027dcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2027e0:
    // 0x2027e0: 0x4616a842  mul.s       $f1, $f21, $f22
    ctx->pc = 0x2027e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
label_2027e4:
    // 0x2027e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2027e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2027e8:
    // 0x2027e8: 0xc068864  jal         func_1A2190
label_2027ec:
    if (ctx->pc == 0x2027ECu) {
        ctx->pc = 0x2027ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027E8u;
        // 0x2027ec: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2027F0u;
        goto label_2027f0;
    }
    ctx->pc = 0x2027E8u;
    SET_GPR_U32(ctx, 31, 0x2027F0u);
    ctx->pc = 0x2027ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027E8u;
    // 0x2027ec: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2190u, 0x2027E8u, 0x2027F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027F0u;
label_2027f0:
    // 0x2027f0: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x2027f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_2027f4:
    // 0x2027f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2027f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2027f8:
    // 0x2027f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2027f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2027fc:
    // 0x2027fc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2027fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_202800:
    // 0x202800: 0x84650070  lh          $a1, 0x70($v1)
    ctx->pc = 0x202800u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_202804:
    // 0x202804: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x202804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_202808:
    // 0x202808: 0x40f809  jalr        $v0
label_20280c:
    if (ctx->pc == 0x20280Cu) {
        ctx->pc = 0x20280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202808u;
        // 0x20280c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202810u;
        goto label_202810;
    }
    ctx->pc = 0x202808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202810u);
        ctx->pc = 0x20280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202808u;
        // 0x20280c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202808u, 0x202810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x202810u;
label_202810:
    // 0x202810: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x202810u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_202814:
    // 0x202814: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x202814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_202818:
    // 0x202818: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x202818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20281c:
    // 0x20281c: 0x26450270  addiu       $a1, $s2, 0x270
    ctx->pc = 0x20281cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
label_202820:
    // 0x202820: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x202820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_202824:
    // 0x202824: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x202824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_202828:
    // 0x202828: 0x46140882  mul.s       $f2, $f1, $f20
    ctx->pc = 0x202828u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_20282c:
    // 0x20282c: 0xc444f56c  lwc1        $f4, -0xA94($v0)
    ctx->pc = 0x20282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_202830:
    // 0x202830: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x202830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_202834:
    // 0x202834: 0x46142142  mul.s       $f5, $f4, $f20
    ctx->pc = 0x202834u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_202838:
    // 0x202838: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x202838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20283c:
    // 0x20283c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x20283cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_202840:
    // 0x202840: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x202840u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_202844:
    // 0x202844: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x202844u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_202848:
    // 0x202848: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x202848u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20284c:
    // 0x20284c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x20284cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_202850:
    // 0x202850: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x202850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_202854:
    // 0x202854: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x202854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_202858:
    // 0x202858: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x202858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_20285c:
    // 0x20285c: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x20285cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
label_202860:
    // 0x202860: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x202860u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_202864:
    // 0x202864: 0xc074494  jal         func_1D1250
label_202868:
    if (ctx->pc == 0x202868u) {
        ctx->pc = 0x202868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202864u;
        // 0x202868: 0x7ca20020  sq          $v0, 0x20($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20286Cu;
        goto label_20286c;
    }
    ctx->pc = 0x202864u;
    SET_GPR_U32(ctx, 31, 0x20286Cu);
    ctx->pc = 0x202868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202864u;
    // 0x202868: 0x7ca20020  sq          $v0, 0x20($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1250u, 0x202864u, 0x20286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20286Cu;
label_20286c:
    // 0x20286c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_202870:
    // 0x202870: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x202870u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_202874:
    // 0x202874: 0x24510040  addiu       $s1, $v0, 0x40
    ctx->pc = 0x202874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_202878:
    // 0x202878: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x202878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_20287c:
    // 0x20287c: 0x8c4500b4  lw          $a1, 0xB4($v0)
    ctx->pc = 0x20287cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_202880:
    // 0x202880: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x202880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_202884:
    // 0x202884: 0xa0f809  jalr        $a1
label_202888:
    if (ctx->pc == 0x202888u) {
        ctx->pc = 0x202888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202884u;
        // 0x202888: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20288Cu;
        goto label_20288c;
    }
    ctx->pc = 0x202884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20288Cu);
        ctx->pc = 0x202888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202884u;
        // 0x202888: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202884u, 0x20288Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20288Cu;
label_20288c:
    // 0x20288c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x20288cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_202890:
    // 0x202890: 0x0  nop
    ctx->pc = 0x202890u;
    // NOP
label_202894:
    // 0x202894: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_202898:
    if (ctx->pc == 0x202898u) {
        ctx->pc = 0x202898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202894u;
        // 0x202898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20289Cu;
        goto label_20289c;
    }
    ctx->pc = 0x202894u;
    {
        const bool branch_taken_0x202894 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x202898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202894u;
        // 0x202898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202894) {
            ctx->pc = 0x2028A0u;
            goto label_2028a0;
        }
    }
    ctx->pc = 0x20289Cu;
label_20289c:
    // 0x20289c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20289cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2028a0:
    // 0x2028a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2028a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2028a4:
    // 0x2028a4: 0x40f809  jalr        $v0
label_2028a8:
    if (ctx->pc == 0x2028A8u) {
        ctx->pc = 0x2028A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028A4u;
        // 0x2028a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2028ACu;
        goto label_2028ac;
    }
    ctx->pc = 0x2028A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2028ACu);
        ctx->pc = 0x2028A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028A4u;
        // 0x2028a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2028A4u, 0x2028ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2028ACu;
label_2028ac:
    // 0x2028ac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2028acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2028b0:
    // 0x2028b0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2028b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2028b4:
    // 0x2028b4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2028b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2028b8:
    // 0x2028b8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2028b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2028bc:
    // 0x2028bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2028bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2028c0:
    // 0x2028c0: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x2028c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2028c4:
    // 0x2028c4: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x2028c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2028c8:
    // 0x2028c8: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x2028c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2028cc:
    // 0x2028cc: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2028ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2028d0:
    // 0x2028d0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2028d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2028d4:
    // 0x2028d4: 0x3e00008  jr          $ra
label_2028d8:
    if (ctx->pc == 0x2028D8u) {
        ctx->pc = 0x2028D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028D4u;
        // 0x2028d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2028DCu;
        goto label_2028dc;
    }
    ctx->pc = 0x2028D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2028D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028D4u;
        // 0x2028d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2028D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2028DCu;
label_2028dc:
    // 0x2028dc: 0x0  nop
    ctx->pc = 0x2028dcu;
    // NOP
    ctx->pc = 0x2028e0u;
}
