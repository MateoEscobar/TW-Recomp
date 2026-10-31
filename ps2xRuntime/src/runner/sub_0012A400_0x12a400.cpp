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

// Function: sub_0012A400
// Address: 0x12a400 - 0x12a7d8
void sub_0012A400_0x12a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A400_0x12a400");
#endif

    switch (ctx->pc) {
        case 0x12a400u: goto label_12a400;
        case 0x12a404u: goto label_12a404;
        case 0x12a408u: goto label_12a408;
        case 0x12a40cu: goto label_12a40c;
        case 0x12a410u: goto label_12a410;
        case 0x12a414u: goto label_12a414;
        case 0x12a418u: goto label_12a418;
        case 0x12a41cu: goto label_12a41c;
        case 0x12a420u: goto label_12a420;
        case 0x12a424u: goto label_12a424;
        case 0x12a428u: goto label_12a428;
        case 0x12a42cu: goto label_12a42c;
        case 0x12a430u: goto label_12a430;
        case 0x12a434u: goto label_12a434;
        case 0x12a438u: goto label_12a438;
        case 0x12a43cu: goto label_12a43c;
        case 0x12a440u: goto label_12a440;
        case 0x12a444u: goto label_12a444;
        case 0x12a448u: goto label_12a448;
        case 0x12a44cu: goto label_12a44c;
        case 0x12a450u: goto label_12a450;
        case 0x12a454u: goto label_12a454;
        case 0x12a458u: goto label_12a458;
        case 0x12a45cu: goto label_12a45c;
        case 0x12a460u: goto label_12a460;
        case 0x12a464u: goto label_12a464;
        case 0x12a468u: goto label_12a468;
        case 0x12a46cu: goto label_12a46c;
        case 0x12a470u: goto label_12a470;
        case 0x12a474u: goto label_12a474;
        case 0x12a478u: goto label_12a478;
        case 0x12a47cu: goto label_12a47c;
        case 0x12a480u: goto label_12a480;
        case 0x12a484u: goto label_12a484;
        case 0x12a488u: goto label_12a488;
        case 0x12a48cu: goto label_12a48c;
        case 0x12a490u: goto label_12a490;
        case 0x12a494u: goto label_12a494;
        case 0x12a498u: goto label_12a498;
        case 0x12a49cu: goto label_12a49c;
        case 0x12a4a0u: goto label_12a4a0;
        case 0x12a4a4u: goto label_12a4a4;
        case 0x12a4a8u: goto label_12a4a8;
        case 0x12a4acu: goto label_12a4ac;
        case 0x12a4b0u: goto label_12a4b0;
        case 0x12a4b4u: goto label_12a4b4;
        case 0x12a4b8u: goto label_12a4b8;
        case 0x12a4bcu: goto label_12a4bc;
        case 0x12a4c0u: goto label_12a4c0;
        case 0x12a4c4u: goto label_12a4c4;
        case 0x12a4c8u: goto label_12a4c8;
        case 0x12a4ccu: goto label_12a4cc;
        case 0x12a4d0u: goto label_12a4d0;
        case 0x12a4d4u: goto label_12a4d4;
        case 0x12a4d8u: goto label_12a4d8;
        case 0x12a4dcu: goto label_12a4dc;
        case 0x12a4e0u: goto label_12a4e0;
        case 0x12a4e4u: goto label_12a4e4;
        case 0x12a4e8u: goto label_12a4e8;
        case 0x12a4ecu: goto label_12a4ec;
        case 0x12a4f0u: goto label_12a4f0;
        case 0x12a4f4u: goto label_12a4f4;
        case 0x12a4f8u: goto label_12a4f8;
        case 0x12a4fcu: goto label_12a4fc;
        case 0x12a500u: goto label_12a500;
        case 0x12a504u: goto label_12a504;
        case 0x12a508u: goto label_12a508;
        case 0x12a50cu: goto label_12a50c;
        case 0x12a510u: goto label_12a510;
        case 0x12a514u: goto label_12a514;
        case 0x12a518u: goto label_12a518;
        case 0x12a51cu: goto label_12a51c;
        case 0x12a520u: goto label_12a520;
        case 0x12a524u: goto label_12a524;
        case 0x12a528u: goto label_12a528;
        case 0x12a52cu: goto label_12a52c;
        case 0x12a530u: goto label_12a530;
        case 0x12a534u: goto label_12a534;
        case 0x12a538u: goto label_12a538;
        case 0x12a53cu: goto label_12a53c;
        case 0x12a540u: goto label_12a540;
        case 0x12a544u: goto label_12a544;
        case 0x12a548u: goto label_12a548;
        case 0x12a54cu: goto label_12a54c;
        case 0x12a550u: goto label_12a550;
        case 0x12a554u: goto label_12a554;
        case 0x12a558u: goto label_12a558;
        case 0x12a55cu: goto label_12a55c;
        case 0x12a560u: goto label_12a560;
        case 0x12a564u: goto label_12a564;
        case 0x12a568u: goto label_12a568;
        case 0x12a56cu: goto label_12a56c;
        case 0x12a570u: goto label_12a570;
        case 0x12a574u: goto label_12a574;
        case 0x12a578u: goto label_12a578;
        case 0x12a57cu: goto label_12a57c;
        case 0x12a580u: goto label_12a580;
        case 0x12a584u: goto label_12a584;
        case 0x12a588u: goto label_12a588;
        case 0x12a58cu: goto label_12a58c;
        case 0x12a590u: goto label_12a590;
        case 0x12a594u: goto label_12a594;
        case 0x12a598u: goto label_12a598;
        case 0x12a59cu: goto label_12a59c;
        case 0x12a5a0u: goto label_12a5a0;
        case 0x12a5a4u: goto label_12a5a4;
        case 0x12a5a8u: goto label_12a5a8;
        case 0x12a5acu: goto label_12a5ac;
        case 0x12a5b0u: goto label_12a5b0;
        case 0x12a5b4u: goto label_12a5b4;
        case 0x12a5b8u: goto label_12a5b8;
        case 0x12a5bcu: goto label_12a5bc;
        case 0x12a5c0u: goto label_12a5c0;
        case 0x12a5c4u: goto label_12a5c4;
        case 0x12a5c8u: goto label_12a5c8;
        case 0x12a5ccu: goto label_12a5cc;
        case 0x12a5d0u: goto label_12a5d0;
        case 0x12a5d4u: goto label_12a5d4;
        case 0x12a5d8u: goto label_12a5d8;
        case 0x12a5dcu: goto label_12a5dc;
        case 0x12a5e0u: goto label_12a5e0;
        case 0x12a5e4u: goto label_12a5e4;
        case 0x12a5e8u: goto label_12a5e8;
        case 0x12a5ecu: goto label_12a5ec;
        case 0x12a5f0u: goto label_12a5f0;
        case 0x12a5f4u: goto label_12a5f4;
        case 0x12a5f8u: goto label_12a5f8;
        case 0x12a5fcu: goto label_12a5fc;
        case 0x12a600u: goto label_12a600;
        case 0x12a604u: goto label_12a604;
        case 0x12a608u: goto label_12a608;
        case 0x12a60cu: goto label_12a60c;
        case 0x12a610u: goto label_12a610;
        case 0x12a614u: goto label_12a614;
        case 0x12a618u: goto label_12a618;
        case 0x12a61cu: goto label_12a61c;
        case 0x12a620u: goto label_12a620;
        case 0x12a624u: goto label_12a624;
        case 0x12a628u: goto label_12a628;
        case 0x12a62cu: goto label_12a62c;
        case 0x12a630u: goto label_12a630;
        case 0x12a634u: goto label_12a634;
        case 0x12a638u: goto label_12a638;
        case 0x12a63cu: goto label_12a63c;
        case 0x12a640u: goto label_12a640;
        case 0x12a644u: goto label_12a644;
        case 0x12a648u: goto label_12a648;
        case 0x12a64cu: goto label_12a64c;
        case 0x12a650u: goto label_12a650;
        case 0x12a654u: goto label_12a654;
        case 0x12a658u: goto label_12a658;
        case 0x12a65cu: goto label_12a65c;
        case 0x12a660u: goto label_12a660;
        case 0x12a664u: goto label_12a664;
        case 0x12a668u: goto label_12a668;
        case 0x12a66cu: goto label_12a66c;
        case 0x12a670u: goto label_12a670;
        case 0x12a674u: goto label_12a674;
        case 0x12a678u: goto label_12a678;
        case 0x12a67cu: goto label_12a67c;
        case 0x12a680u: goto label_12a680;
        case 0x12a684u: goto label_12a684;
        case 0x12a688u: goto label_12a688;
        case 0x12a68cu: goto label_12a68c;
        case 0x12a690u: goto label_12a690;
        case 0x12a694u: goto label_12a694;
        case 0x12a698u: goto label_12a698;
        case 0x12a69cu: goto label_12a69c;
        case 0x12a6a0u: goto label_12a6a0;
        case 0x12a6a4u: goto label_12a6a4;
        case 0x12a6a8u: goto label_12a6a8;
        case 0x12a6acu: goto label_12a6ac;
        case 0x12a6b0u: goto label_12a6b0;
        case 0x12a6b4u: goto label_12a6b4;
        case 0x12a6b8u: goto label_12a6b8;
        case 0x12a6bcu: goto label_12a6bc;
        case 0x12a6c0u: goto label_12a6c0;
        case 0x12a6c4u: goto label_12a6c4;
        case 0x12a6c8u: goto label_12a6c8;
        case 0x12a6ccu: goto label_12a6cc;
        case 0x12a6d0u: goto label_12a6d0;
        case 0x12a6d4u: goto label_12a6d4;
        case 0x12a6d8u: goto label_12a6d8;
        case 0x12a6dcu: goto label_12a6dc;
        case 0x12a6e0u: goto label_12a6e0;
        case 0x12a6e4u: goto label_12a6e4;
        case 0x12a6e8u: goto label_12a6e8;
        case 0x12a6ecu: goto label_12a6ec;
        case 0x12a6f0u: goto label_12a6f0;
        case 0x12a6f4u: goto label_12a6f4;
        case 0x12a6f8u: goto label_12a6f8;
        case 0x12a6fcu: goto label_12a6fc;
        case 0x12a700u: goto label_12a700;
        case 0x12a704u: goto label_12a704;
        case 0x12a708u: goto label_12a708;
        case 0x12a70cu: goto label_12a70c;
        case 0x12a710u: goto label_12a710;
        case 0x12a714u: goto label_12a714;
        case 0x12a718u: goto label_12a718;
        case 0x12a71cu: goto label_12a71c;
        case 0x12a720u: goto label_12a720;
        case 0x12a724u: goto label_12a724;
        case 0x12a728u: goto label_12a728;
        case 0x12a72cu: goto label_12a72c;
        case 0x12a730u: goto label_12a730;
        case 0x12a734u: goto label_12a734;
        case 0x12a738u: goto label_12a738;
        case 0x12a73cu: goto label_12a73c;
        case 0x12a740u: goto label_12a740;
        case 0x12a744u: goto label_12a744;
        case 0x12a748u: goto label_12a748;
        case 0x12a74cu: goto label_12a74c;
        case 0x12a750u: goto label_12a750;
        case 0x12a754u: goto label_12a754;
        case 0x12a758u: goto label_12a758;
        case 0x12a75cu: goto label_12a75c;
        case 0x12a760u: goto label_12a760;
        case 0x12a764u: goto label_12a764;
        case 0x12a768u: goto label_12a768;
        case 0x12a76cu: goto label_12a76c;
        case 0x12a770u: goto label_12a770;
        case 0x12a774u: goto label_12a774;
        case 0x12a778u: goto label_12a778;
        case 0x12a77cu: goto label_12a77c;
        case 0x12a780u: goto label_12a780;
        case 0x12a784u: goto label_12a784;
        case 0x12a788u: goto label_12a788;
        case 0x12a78cu: goto label_12a78c;
        case 0x12a790u: goto label_12a790;
        case 0x12a794u: goto label_12a794;
        case 0x12a798u: goto label_12a798;
        case 0x12a79cu: goto label_12a79c;
        case 0x12a7a0u: goto label_12a7a0;
        case 0x12a7a4u: goto label_12a7a4;
        case 0x12a7a8u: goto label_12a7a8;
        case 0x12a7acu: goto label_12a7ac;
        case 0x12a7b0u: goto label_12a7b0;
        case 0x12a7b4u: goto label_12a7b4;
        case 0x12a7b8u: goto label_12a7b8;
        case 0x12a7bcu: goto label_12a7bc;
        case 0x12a7c0u: goto label_12a7c0;
        case 0x12a7c4u: goto label_12a7c4;
        case 0x12a7c8u: goto label_12a7c8;
        case 0x12a7ccu: goto label_12a7cc;
        case 0x12a7d0u: goto label_12a7d0;
        case 0x12a7d4u: goto label_12a7d4;
        default: break;
    }

    ctx->pc = 0x12a400u;

label_12a400:
    // 0x12a400: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12a400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_12a404:
    // 0x12a404: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x12a404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_12a408:
    // 0x12a408: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12a408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_12a40c:
    // 0x12a40c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12a40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12a410:
    // 0x12a410: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12a410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_12a414:
    // 0x12a414: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12a414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12a418:
    // 0x12a418: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x12a418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_12a41c:
    // 0x12a41c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12a41cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12a420:
    // 0x12a420: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12a420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_12a424:
    // 0x12a424: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x12a424u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_12a428:
    // 0x12a428: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x12a428u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_12a42c:
    // 0x12a42c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12a430:
    // 0x12a430: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x12a430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_12a434:
    // 0x12a434: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x12a434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_12a438:
    // 0x12a438: 0x40f809  jalr        $v0
label_12a43c:
    if (ctx->pc == 0x12A43Cu) {
        ctx->pc = 0x12A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A438u;
        // 0x12a43c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A440u;
        goto label_12a440;
    }
    ctx->pc = 0x12A438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12A440u);
        ctx->pc = 0x12A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A438u;
        // 0x12a43c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A438u, 0x12A440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12A440u;
label_12a440:
    // 0x12a440: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a444:
    // 0x12a444: 0xc0cd8ec  jal         func_3363B0
label_12a448:
    if (ctx->pc == 0x12A448u) {
        ctx->pc = 0x12A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A444u;
        // 0x12a448: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A44Cu;
        goto label_12a44c;
    }
    ctx->pc = 0x12A444u;
    SET_GPR_U32(ctx, 31, 0x12A44Cu);
    ctx->pc = 0x12A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A444u;
    // 0x12a448: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x12A444u, 0x12A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A44Cu;
label_12a44c:
    // 0x12a44c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x12a44cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12a450:
    // 0x12a450: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x12a450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_12a454:
    // 0x12a454: 0x8e060314  lw          $a2, 0x314($s0)
    ctx->pc = 0x12a454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
label_12a458:
    // 0x12a458: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12a458u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12a45c:
    // 0x12a45c: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x12a45cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12a460:
    // 0x12a460: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12a460u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12a464:
    // 0x12a464: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x12a464u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_12a468:
    // 0x12a468: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x12a468u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_12a46c:
    // 0x12a46c: 0x4a0003bf  vwaitq
    ctx->pc = 0x12a46cu;
    // VWAITQ (Q already resolved in this runtime)
label_12a470:
    // 0x12a470: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x12a470u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12a474:
    // 0x12a474: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12a474u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_12a478:
    // 0x12a478: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x12a478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_12a47c:
    // 0x12a47c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x12a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_12a480:
    // 0x12a480: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12a480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_12a484:
    // 0x12a484: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12a488:
    // 0x12a488: 0x84c50092  lh          $a1, 0x92($a2)
    ctx->pc = 0x12a488u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
label_12a48c:
    // 0x12a48c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x12a48cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_12a490:
    // 0x12a490: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x12a490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_12a494:
    // 0x12a494: 0xc0cd8ec  jal         func_3363B0
label_12a498:
    if (ctx->pc == 0x12A498u) {
        ctx->pc = 0x12A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A494u;
        // 0x12a498: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A49Cu;
        goto label_12a49c;
    }
    ctx->pc = 0x12A494u;
    SET_GPR_U32(ctx, 31, 0x12A49Cu);
    ctx->pc = 0x12A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A494u;
    // 0x12a498: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x12A494u, 0x12A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A49Cu;
label_12a49c:
    // 0x12a49c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x12a49cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12a4a0:
    // 0x12a4a0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x12a4a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12a4a4:
    // 0x12a4a4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12a4a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12a4a8:
    // 0x12a4a8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12a4a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12a4ac:
    // 0x12a4ac: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x12a4acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12a4b0:
    // 0x12a4b0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12a4b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12a4b4:
    // 0x12a4b4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x12a4b4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_12a4b8:
    // 0x12a4b8: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x12a4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_12a4bc:
    // 0x12a4bc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a4bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a4c0:
    // 0x12a4c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a4c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a4c4:
    // 0x12a4c4: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x12a4c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12a4c8:
    // 0x12a4c8: 0xc12e29c  jal         func_4B8A70
label_12a4cc:
    if (ctx->pc == 0x12A4CCu) {
        ctx->pc = 0x12A4D0u;
        goto label_12a4d0;
    }
    ctx->pc = 0x12A4C8u;
    SET_GPR_U32(ctx, 31, 0x12A4D0u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12A4C8u, 0x12A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A4D0u;
label_12a4d0:
    // 0x12a4d0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12a4d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a4d4:
    // 0x12a4d4: 0x0  nop
    ctx->pc = 0x12a4d4u;
    // NOP
label_12a4d8:
    // 0x12a4d8: 0x450200b7  bc1fl       . + 4 + (0xB7 << 2)
label_12a4dc:
    if (ctx->pc == 0x12A4DCu) {
        ctx->pc = 0x12A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4D8u;
        // 0x12a4dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A4E0u;
        goto label_12a4e0;
    }
    ctx->pc = 0x12A4D8u;
    {
        const bool branch_taken_0x12a4d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a4d8) {
            ctx->pc = 0x12A4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A4D8u;
            // 0x12a4dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A7B8u;
            goto label_12a7b8;
        }
    }
    ctx->pc = 0x12A4E0u;
label_12a4e0:
    // 0x12a4e0: 0x3c01402f  lui         $at, 0x402F
    ctx->pc = 0x12a4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16431 << 16));
label_12a4e4:
    // 0x12a4e4: 0x3421ede0  ori         $at, $at, 0xEDE0
    ctx->pc = 0x12a4e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60896);
label_12a4e8:
    // 0x12a4e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a4ec:
    // 0x12a4ec: 0xc12e29c  jal         func_4B8A70
label_12a4f0:
    if (ctx->pc == 0x12A4F0u) {
        ctx->pc = 0x12A4F4u;
        goto label_12a4f4;
    }
    ctx->pc = 0x12A4ECu;
    SET_GPR_U32(ctx, 31, 0x12A4F4u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12A4ECu, 0x12A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A4F4u;
label_12a4f4:
    // 0x12a4f4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x12a4f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a4f8:
    // 0x12a4f8: 0x0  nop
    ctx->pc = 0x12a4f8u;
    // NOP
label_12a4fc:
    // 0x12a4fc: 0x450200ae  bc1fl       . + 4 + (0xAE << 2)
label_12a500:
    if (ctx->pc == 0x12A500u) {
        ctx->pc = 0x12A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4FCu;
        // 0x12a500: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A504u;
        goto label_12a504;
    }
    ctx->pc = 0x12A4FCu;
    {
        const bool branch_taken_0x12a4fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a4fc) {
            ctx->pc = 0x12A500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A4FCu;
            // 0x12a500: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A7B8u;
            goto label_12a7b8;
        }
    }
    ctx->pc = 0x12A504u;
label_12a504:
    // 0x12a504: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x12a504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_12a508:
    // 0x12a508: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a50c:
    // 0x12a50c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a510:
    // 0x12a510: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x12a510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_12a514:
    // 0x12a514: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x12a514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_12a518:
    // 0x12a518: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x12a518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_12a51c:
    // 0x12a51c: 0xc12e29c  jal         func_4B8A70
label_12a520:
    if (ctx->pc == 0x12A520u) {
        ctx->pc = 0x12A524u;
        goto label_12a524;
    }
    ctx->pc = 0x12A51Cu;
    SET_GPR_U32(ctx, 31, 0x12A524u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12A51Cu, 0x12A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A524u;
label_12a524:
    // 0x12a524: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x12a524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a528:
    // 0x12a528: 0x0  nop
    ctx->pc = 0x12a528u;
    // NOP
label_12a52c:
    // 0x12a52c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_12a530:
    if (ctx->pc == 0x12A530u) {
        ctx->pc = 0x12A534u;
        goto label_12a534;
    }
    ctx->pc = 0x12A52Cu;
    {
        const bool branch_taken_0x12a52c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a52c) {
            ctx->pc = 0x12A5ECu;
            goto label_12a5ec;
        }
    }
    ctx->pc = 0x12A534u;
label_12a534:
    // 0x12a534: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12a538:
    // 0x12a538: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a53c:
    // 0x12a53c: 0x0  nop
    ctx->pc = 0x12a53cu;
    // NOP
label_12a540:
    // 0x12a540: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x12a540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a544:
    // 0x12a544: 0x0  nop
    ctx->pc = 0x12a544u;
    // NOP
label_12a548:
    // 0x12a548: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_12a54c:
    if (ctx->pc == 0x12A54Cu) {
        ctx->pc = 0x12A550u;
        goto label_12a550;
    }
    ctx->pc = 0x12A548u;
    {
        const bool branch_taken_0x12a548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a548) {
            ctx->pc = 0x12A55Cu;
            goto label_12a55c;
        }
    }
    ctx->pc = 0x12A550u;
label_12a550:
    // 0x12a550: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x12a550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12a554:
    // 0x12a554: 0x1000001b  b           . + 4 + (0x1B << 2)
label_12a558:
    if (ctx->pc == 0x12A558u) {
        ctx->pc = 0x12A55Cu;
        goto label_12a55c;
    }
    ctx->pc = 0x12A554u;
    {
        const bool branch_taken_0x12a554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a554) {
            ctx->pc = 0x12A5C4u;
            goto label_12a5c4;
        }
    }
    ctx->pc = 0x12A55Cu;
label_12a55c:
    // 0x12a55c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12a55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12a560:
    // 0x12a560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a564:
    // 0x12a564: 0x0  nop
    ctx->pc = 0x12a564u;
    // NOP
label_12a568:
    // 0x12a568: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12a568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a56c:
    // 0x12a56c: 0x0  nop
    ctx->pc = 0x12a56cu;
    // NOP
label_12a570:
    // 0x12a570: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_12a574:
    if (ctx->pc == 0x12A574u) {
        ctx->pc = 0x12A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A570u;
        // 0x12a574: 0x4614a302  mul.s       $f12, $f20, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A578u;
        goto label_12a578;
    }
    ctx->pc = 0x12A570u;
    {
        const bool branch_taken_0x12a570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a570) {
            ctx->pc = 0x12A574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A570u;
            // 0x12a574: 0x4614a302  mul.s       $f12, $f20, $f20 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A58Cu;
            goto label_12a58c;
        }
    }
    ctx->pc = 0x12A578u;
label_12a578:
    // 0x12a578: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12a578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12a57c:
    // 0x12a57c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a57cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a580:
    // 0x12a580: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12a580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12a584:
    // 0x12a584: 0x1000000f  b           . + 4 + (0xF << 2)
label_12a588:
    if (ctx->pc == 0x12A588u) {
        ctx->pc = 0x12A58Cu;
        goto label_12a58c;
    }
    ctx->pc = 0x12A584u;
    {
        const bool branch_taken_0x12a584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a584) {
            ctx->pc = 0x12A5C4u;
            goto label_12a5c4;
        }
    }
    ctx->pc = 0x12A58Cu;
label_12a58c:
    // 0x12a58c: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x12a58cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_12a590:
    // 0x12a590: 0x0  nop
    ctx->pc = 0x12a590u;
    // NOP
label_12a594:
    // 0x12a594: 0x0  nop
    ctx->pc = 0x12a594u;
    // NOP
label_12a598:
    // 0x12a598: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12a598u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12a59c:
    // 0x12a59c: 0x0  nop
    ctx->pc = 0x12a59cu;
    // NOP
label_12a5a0:
    // 0x12a5a0: 0x0  nop
    ctx->pc = 0x12a5a0u;
    // NOP
label_12a5a4:
    // 0x12a5a4: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x12a5a4u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
label_12a5a8:
    // 0x12a5a8: 0xc0cd5a8  jal         func_3356A0
label_12a5ac:
    if (ctx->pc == 0x12A5ACu) {
        ctx->pc = 0x12A5B0u;
        goto label_12a5b0;
    }
    ctx->pc = 0x12A5A8u;
    SET_GPR_U32(ctx, 31, 0x12A5B0u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12A5A8u, 0x12A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A5B0u;
label_12a5b0:
    // 0x12a5b0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12a5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_12a5b4:
    // 0x12a5b4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a5b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a5b8:
    // 0x12a5b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a5bc:
    // 0x12a5bc: 0x0  nop
    ctx->pc = 0x12a5bcu;
    // NOP
label_12a5c0:
    // 0x12a5c0: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x12a5c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12a5c4:
    // 0x12a5c4: 0x3c014022  lui         $at, 0x4022
    ctx->pc = 0x12a5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16418 << 16));
label_12a5c8:
    // 0x12a5c8: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x12a5c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63875);
label_12a5cc:
    // 0x12a5cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a5d0:
    // 0x12a5d0: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x12a5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_12a5d4:
    // 0x12a5d4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a5d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a5d8:
    // 0x12a5d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a5d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a5dc:
    // 0x12a5dc: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x12a5dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_12a5e0:
    // 0x12a5e0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x12a5e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_12a5e4:
    // 0x12a5e4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_12a5e8:
    if (ctx->pc == 0x12A5E8u) {
        ctx->pc = 0x12A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5E4u;
        // 0x12a5e8: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A5ECu;
        goto label_12a5ec;
    }
    ctx->pc = 0x12A5E4u;
    {
        const bool branch_taken_0x12a5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5E4u;
        // 0x12a5e8: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5e4) {
            ctx->pc = 0x12A6D8u;
            goto label_12a6d8;
        }
    }
    ctx->pc = 0x12A5ECu;
label_12a5ec:
    // 0x12a5ec: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x12a5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
label_12a5f0:
    // 0x12a5f0: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x12a5f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_12a5f4:
    // 0x12a5f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a5f8:
    // 0x12a5f8: 0xc12e29c  jal         func_4B8A70
label_12a5fc:
    if (ctx->pc == 0x12A5FCu) {
        ctx->pc = 0x12A600u;
        goto label_12a600;
    }
    ctx->pc = 0x12A5F8u;
    SET_GPR_U32(ctx, 31, 0x12A600u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12A5F8u, 0x12A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A600u;
label_12a600:
    // 0x12a600: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12a600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a604:
    // 0x12a604: 0x0  nop
    ctx->pc = 0x12a604u;
    // NOP
label_12a608:
    // 0x12a608: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_12a60c:
    if (ctx->pc == 0x12A60Cu) {
        ctx->pc = 0x12A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A608u;
        // 0x12a60c: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A610u;
        goto label_12a610;
    }
    ctx->pc = 0x12A608u;
    {
        const bool branch_taken_0x12a608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A608u;
        // 0x12a60c: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a608) {
            ctx->pc = 0x12A6DCu;
            goto label_12a6dc;
        }
    }
    ctx->pc = 0x12A610u;
label_12a610:
    // 0x12a610: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12a614:
    // 0x12a614: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a618:
    // 0x12a618: 0x0  nop
    ctx->pc = 0x12a618u;
    // NOP
label_12a61c:
    // 0x12a61c: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x12a61cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a620:
    // 0x12a620: 0x0  nop
    ctx->pc = 0x12a620u;
    // NOP
label_12a624:
    // 0x12a624: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_12a628:
    if (ctx->pc == 0x12A628u) {
        ctx->pc = 0x12A62Cu;
        goto label_12a62c;
    }
    ctx->pc = 0x12A624u;
    {
        const bool branch_taken_0x12a624 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a624) {
            ctx->pc = 0x12A638u;
            goto label_12a638;
        }
    }
    ctx->pc = 0x12A62Cu;
label_12a62c:
    // 0x12a62c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x12a62cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12a630:
    // 0x12a630: 0x1000001b  b           . + 4 + (0x1B << 2)
label_12a634:
    if (ctx->pc == 0x12A634u) {
        ctx->pc = 0x12A638u;
        goto label_12a638;
    }
    ctx->pc = 0x12A630u;
    {
        const bool branch_taken_0x12a630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a630) {
            ctx->pc = 0x12A6A0u;
            goto label_12a6a0;
        }
    }
    ctx->pc = 0x12A638u;
label_12a638:
    // 0x12a638: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12a638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12a63c:
    // 0x12a63c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a640:
    // 0x12a640: 0x0  nop
    ctx->pc = 0x12a640u;
    // NOP
label_12a644:
    // 0x12a644: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12a644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a648:
    // 0x12a648: 0x0  nop
    ctx->pc = 0x12a648u;
    // NOP
label_12a64c:
    // 0x12a64c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_12a650:
    if (ctx->pc == 0x12A650u) {
        ctx->pc = 0x12A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A64Cu;
        // 0x12a650: 0x4614a302  mul.s       $f12, $f20, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A654u;
        goto label_12a654;
    }
    ctx->pc = 0x12A64Cu;
    {
        const bool branch_taken_0x12a64c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a64c) {
            ctx->pc = 0x12A650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A64Cu;
            // 0x12a650: 0x4614a302  mul.s       $f12, $f20, $f20 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A668u;
            goto label_12a668;
        }
    }
    ctx->pc = 0x12A654u;
label_12a654:
    // 0x12a654: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12a654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12a658:
    // 0x12a658: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a65c:
    // 0x12a65c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12a65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12a660:
    // 0x12a660: 0x1000000f  b           . + 4 + (0xF << 2)
label_12a664:
    if (ctx->pc == 0x12A664u) {
        ctx->pc = 0x12A668u;
        goto label_12a668;
    }
    ctx->pc = 0x12A660u;
    {
        const bool branch_taken_0x12a660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a660) {
            ctx->pc = 0x12A6A0u;
            goto label_12a6a0;
        }
    }
    ctx->pc = 0x12A668u;
label_12a668:
    // 0x12a668: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x12a668u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_12a66c:
    // 0x12a66c: 0x0  nop
    ctx->pc = 0x12a66cu;
    // NOP
label_12a670:
    // 0x12a670: 0x0  nop
    ctx->pc = 0x12a670u;
    // NOP
label_12a674:
    // 0x12a674: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12a674u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12a678:
    // 0x12a678: 0x0  nop
    ctx->pc = 0x12a678u;
    // NOP
label_12a67c:
    // 0x12a67c: 0x0  nop
    ctx->pc = 0x12a67cu;
    // NOP
label_12a680:
    // 0x12a680: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x12a680u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
label_12a684:
    // 0x12a684: 0xc0cd5a8  jal         func_3356A0
label_12a688:
    if (ctx->pc == 0x12A688u) {
        ctx->pc = 0x12A68Cu;
        goto label_12a68c;
    }
    ctx->pc = 0x12A684u;
    SET_GPR_U32(ctx, 31, 0x12A68Cu);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12A684u, 0x12A68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A68Cu;
label_12a68c:
    // 0x12a68c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12a68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_12a690:
    // 0x12a690: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a694:
    // 0x12a694: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a698:
    // 0x12a698: 0x0  nop
    ctx->pc = 0x12a698u;
    // NOP
label_12a69c:
    // 0x12a69c: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x12a69cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12a6a0:
    // 0x12a6a0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12a6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12a6a4:
    // 0x12a6a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a6a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a6a8:
    // 0x12a6a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a6ac:
    // 0x12a6ac: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x12a6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_12a6b0:
    // 0x12a6b0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a6b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a6b4:
    // 0x12a6b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a6b8:
    // 0x12a6b8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x12a6b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_12a6bc:
    // 0x12a6bc: 0x3c014022  lui         $at, 0x4022
    ctx->pc = 0x12a6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16418 << 16));
label_12a6c0:
    // 0x12a6c0: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x12a6c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63875);
label_12a6c4:
    // 0x12a6c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12a6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12a6c8:
    // 0x12a6c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12a6c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12a6cc:
    // 0x12a6cc: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x12a6ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_12a6d0:
    // 0x12a6d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12a6d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_12a6d4:
    // 0x12a6d4: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x12a6d4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_12a6d8:
    // 0x12a6d8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x12a6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12a6dc:
    // 0x12a6dc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x12a6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a6e0:
    // 0x12a6e0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x12a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a6e4:
    // 0x12a6e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12a6e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_12a6e8:
    // 0x12a6e8: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x12a6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12a6ec:
    // 0x12a6ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12a6f0:
    // 0x12a6f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12a6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12a6f4:
    // 0x12a6f4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12a6f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12a6f8:
    // 0x12a6f8: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x12a6f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a6fc:
    // 0x12a6fc: 0x0  nop
    ctx->pc = 0x12a6fcu;
    // NOP
label_12a700:
    // 0x12a700: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_12a704:
    if (ctx->pc == 0x12A704u) {
        ctx->pc = 0x12A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A700u;
        // 0x12a704: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A708u;
        goto label_12a708;
    }
    ctx->pc = 0x12A700u;
    {
        const bool branch_taken_0x12a700 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A700u;
        // 0x12a704: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a700) {
            ctx->pc = 0x12A714u;
            goto label_12a714;
        }
    }
    ctx->pc = 0x12A708u;
label_12a708:
    // 0x12a708: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x12a708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12a70c:
    // 0x12a70c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_12a710:
    if (ctx->pc == 0x12A710u) {
        ctx->pc = 0x12A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A70Cu;
        // 0x12a710: 0xc60001a0  lwc1        $f0, 0x1A0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A714u;
        goto label_12a714;
    }
    ctx->pc = 0x12A70Cu;
    {
        const bool branch_taken_0x12a70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A70Cu;
        // 0x12a710: 0xc60001a0  lwc1        $f0, 0x1A0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a70c) {
            ctx->pc = 0x12A780u;
            goto label_12a780;
        }
    }
    ctx->pc = 0x12A714u;
label_12a714:
    // 0x12a714: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12a714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12a718:
    // 0x12a718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a71c:
    // 0x12a71c: 0x0  nop
    ctx->pc = 0x12a71cu;
    // NOP
label_12a720:
    // 0x12a720: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12a720u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a724:
    // 0x12a724: 0x0  nop
    ctx->pc = 0x12a724u;
    // NOP
label_12a728:
    // 0x12a728: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_12a72c:
    if (ctx->pc == 0x12A72Cu) {
        ctx->pc = 0x12A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A728u;
        // 0x12a72c: 0x4614a302  mul.s       $f12, $f20, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A730u;
        goto label_12a730;
    }
    ctx->pc = 0x12A728u;
    {
        const bool branch_taken_0x12a728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a728) {
            ctx->pc = 0x12A72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A728u;
            // 0x12a72c: 0x4614a302  mul.s       $f12, $f20, $f20 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A744u;
            goto label_12a744;
        }
    }
    ctx->pc = 0x12A730u;
label_12a730:
    // 0x12a730: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12a730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12a734:
    // 0x12a734: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a738:
    // 0x12a738: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12a738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12a73c:
    // 0x12a73c: 0x10000010  b           . + 4 + (0x10 << 2)
label_12a740:
    if (ctx->pc == 0x12A740u) {
        ctx->pc = 0x12A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A73Cu;
        // 0x12a740: 0xc60001a0  lwc1        $f0, 0x1A0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A744u;
        goto label_12a744;
    }
    ctx->pc = 0x12A73Cu;
    {
        const bool branch_taken_0x12a73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A73Cu;
        // 0x12a740: 0xc60001a0  lwc1        $f0, 0x1A0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a73c) {
            ctx->pc = 0x12A780u;
            goto label_12a780;
        }
    }
    ctx->pc = 0x12A744u;
label_12a744:
    // 0x12a744: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x12a744u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_12a748:
    // 0x12a748: 0x0  nop
    ctx->pc = 0x12a748u;
    // NOP
label_12a74c:
    // 0x12a74c: 0x0  nop
    ctx->pc = 0x12a74cu;
    // NOP
label_12a750:
    // 0x12a750: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12a750u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12a754:
    // 0x12a754: 0x0  nop
    ctx->pc = 0x12a754u;
    // NOP
label_12a758:
    // 0x12a758: 0x0  nop
    ctx->pc = 0x12a758u;
    // NOP
label_12a75c:
    // 0x12a75c: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x12a75cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
label_12a760:
    // 0x12a760: 0xc0cd5a8  jal         func_3356A0
label_12a764:
    if (ctx->pc == 0x12A764u) {
        ctx->pc = 0x12A768u;
        goto label_12a768;
    }
    ctx->pc = 0x12A760u;
    SET_GPR_U32(ctx, 31, 0x12A768u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12A760u, 0x12A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A768u;
label_12a768:
    // 0x12a768: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12a768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_12a76c:
    // 0x12a76c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a76cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12a770:
    // 0x12a770: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a774:
    // 0x12a774: 0x0  nop
    ctx->pc = 0x12a774u;
    // NOP
label_12a778:
    // 0x12a778: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x12a778u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12a77c:
    // 0x12a77c: 0xc60001a0  lwc1        $f0, 0x1A0($s0)
    ctx->pc = 0x12a77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a780:
    // 0x12a780: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12a780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a784:
    // 0x12a784: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x12a784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_12a788:
    // 0x12a788: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x12a788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a78c:
    // 0x12a78c: 0x46001029  min.s       $f0, $f2, $f0
    ctx->pc = 0x12a78cu;
    ctx->f[0] = std::min(ctx->f[2], ctx->f[0]);
label_12a790:
    // 0x12a790: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_12a794:
    if (ctx->pc == 0x12A794u) {
        ctx->pc = 0x12A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A790u;
        // 0x12a794: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A798u;
        goto label_12a798;
    }
    ctx->pc = 0x12A790u;
    {
        const bool branch_taken_0x12a790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A790u;
        // 0x12a794: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a790) {
            ctx->pc = 0x12A7A0u;
            goto label_12a7a0;
        }
    }
    ctx->pc = 0x12A798u;
label_12a798:
    // 0x12a798: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12a798u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_12a79c:
    // 0x12a79c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x12a79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_12a7a0:
    // 0x12a7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a7a4:
    // 0x12a7a4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x12a7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12a7a8:
    // 0x12a7a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12a7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12a7ac:
    // 0x12a7ac: 0xc04b5a2  jal         func_12D688
label_12a7b0:
    if (ctx->pc == 0x12A7B0u) {
        ctx->pc = 0x12A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7ACu;
        // 0x12a7b0: 0x24860180  addiu       $a2, $a0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A7B4u;
        goto label_12a7b4;
    }
    ctx->pc = 0x12A7ACu;
    SET_GPR_U32(ctx, 31, 0x12A7B4u);
    ctx->pc = 0x12A7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A7ACu;
    // 0x12a7b0: 0x24860180  addiu       $a2, $a0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D688u, 0x12A7ACu, 0x12A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7B4u;
label_12a7b4:
    // 0x12a7b4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x12a7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12a7b8:
    // 0x12a7b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x12a7b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12a7bc:
    // 0x12a7bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12a7bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12a7c0:
    // 0x12a7c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12a7c4:
    // 0x12a7c4: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x12a7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_12a7c8:
    // 0x12a7c8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x12a7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12a7cc:
    // 0x12a7cc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x12a7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12a7d0:
    // 0x12a7d0: 0x3e00008  jr          $ra
label_12a7d4:
    if (ctx->pc == 0x12A7D4u) {
        ctx->pc = 0x12A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7D0u;
        // 0x12a7d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A7D8u;
        goto label_fallthrough_0x12a7d0;
    }
    ctx->pc = 0x12A7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7D0u;
        // 0x12a7d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12a7d0:
    ctx->pc = 0x12A7D8u;
}
