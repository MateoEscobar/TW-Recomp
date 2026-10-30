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

// Function: sub_0025A3E0
// Address: 0x25a3e0 - 0x25a8b8
void sub_0025A3E0_0x25a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A3E0_0x25a3e0");
#endif

    switch (ctx->pc) {
        case 0x25a3e0u: goto label_25a3e0;
        case 0x25a3e4u: goto label_25a3e4;
        case 0x25a3e8u: goto label_25a3e8;
        case 0x25a3ecu: goto label_25a3ec;
        case 0x25a3f0u: goto label_25a3f0;
        case 0x25a3f4u: goto label_25a3f4;
        case 0x25a3f8u: goto label_25a3f8;
        case 0x25a3fcu: goto label_25a3fc;
        case 0x25a400u: goto label_25a400;
        case 0x25a404u: goto label_25a404;
        case 0x25a408u: goto label_25a408;
        case 0x25a40cu: goto label_25a40c;
        case 0x25a410u: goto label_25a410;
        case 0x25a414u: goto label_25a414;
        case 0x25a418u: goto label_25a418;
        case 0x25a41cu: goto label_25a41c;
        case 0x25a420u: goto label_25a420;
        case 0x25a424u: goto label_25a424;
        case 0x25a428u: goto label_25a428;
        case 0x25a42cu: goto label_25a42c;
        case 0x25a430u: goto label_25a430;
        case 0x25a434u: goto label_25a434;
        case 0x25a438u: goto label_25a438;
        case 0x25a43cu: goto label_25a43c;
        case 0x25a440u: goto label_25a440;
        case 0x25a444u: goto label_25a444;
        case 0x25a448u: goto label_25a448;
        case 0x25a44cu: goto label_25a44c;
        case 0x25a450u: goto label_25a450;
        case 0x25a454u: goto label_25a454;
        case 0x25a458u: goto label_25a458;
        case 0x25a45cu: goto label_25a45c;
        case 0x25a460u: goto label_25a460;
        case 0x25a464u: goto label_25a464;
        case 0x25a468u: goto label_25a468;
        case 0x25a46cu: goto label_25a46c;
        case 0x25a470u: goto label_25a470;
        case 0x25a474u: goto label_25a474;
        case 0x25a478u: goto label_25a478;
        case 0x25a47cu: goto label_25a47c;
        case 0x25a480u: goto label_25a480;
        case 0x25a484u: goto label_25a484;
        case 0x25a488u: goto label_25a488;
        case 0x25a48cu: goto label_25a48c;
        case 0x25a490u: goto label_25a490;
        case 0x25a494u: goto label_25a494;
        case 0x25a498u: goto label_25a498;
        case 0x25a49cu: goto label_25a49c;
        case 0x25a4a0u: goto label_25a4a0;
        case 0x25a4a4u: goto label_25a4a4;
        case 0x25a4a8u: goto label_25a4a8;
        case 0x25a4acu: goto label_25a4ac;
        case 0x25a4b0u: goto label_25a4b0;
        case 0x25a4b4u: goto label_25a4b4;
        case 0x25a4b8u: goto label_25a4b8;
        case 0x25a4bcu: goto label_25a4bc;
        case 0x25a4c0u: goto label_25a4c0;
        case 0x25a4c4u: goto label_25a4c4;
        case 0x25a4c8u: goto label_25a4c8;
        case 0x25a4ccu: goto label_25a4cc;
        case 0x25a4d0u: goto label_25a4d0;
        case 0x25a4d4u: goto label_25a4d4;
        case 0x25a4d8u: goto label_25a4d8;
        case 0x25a4dcu: goto label_25a4dc;
        case 0x25a4e0u: goto label_25a4e0;
        case 0x25a4e4u: goto label_25a4e4;
        case 0x25a4e8u: goto label_25a4e8;
        case 0x25a4ecu: goto label_25a4ec;
        case 0x25a4f0u: goto label_25a4f0;
        case 0x25a4f4u: goto label_25a4f4;
        case 0x25a4f8u: goto label_25a4f8;
        case 0x25a4fcu: goto label_25a4fc;
        case 0x25a500u: goto label_25a500;
        case 0x25a504u: goto label_25a504;
        case 0x25a508u: goto label_25a508;
        case 0x25a50cu: goto label_25a50c;
        case 0x25a510u: goto label_25a510;
        case 0x25a514u: goto label_25a514;
        case 0x25a518u: goto label_25a518;
        case 0x25a51cu: goto label_25a51c;
        case 0x25a520u: goto label_25a520;
        case 0x25a524u: goto label_25a524;
        case 0x25a528u: goto label_25a528;
        case 0x25a52cu: goto label_25a52c;
        case 0x25a530u: goto label_25a530;
        case 0x25a534u: goto label_25a534;
        case 0x25a538u: goto label_25a538;
        case 0x25a53cu: goto label_25a53c;
        case 0x25a540u: goto label_25a540;
        case 0x25a544u: goto label_25a544;
        case 0x25a548u: goto label_25a548;
        case 0x25a54cu: goto label_25a54c;
        case 0x25a550u: goto label_25a550;
        case 0x25a554u: goto label_25a554;
        case 0x25a558u: goto label_25a558;
        case 0x25a55cu: goto label_25a55c;
        case 0x25a560u: goto label_25a560;
        case 0x25a564u: goto label_25a564;
        case 0x25a568u: goto label_25a568;
        case 0x25a56cu: goto label_25a56c;
        case 0x25a570u: goto label_25a570;
        case 0x25a574u: goto label_25a574;
        case 0x25a578u: goto label_25a578;
        case 0x25a57cu: goto label_25a57c;
        case 0x25a580u: goto label_25a580;
        case 0x25a584u: goto label_25a584;
        case 0x25a588u: goto label_25a588;
        case 0x25a58cu: goto label_25a58c;
        case 0x25a590u: goto label_25a590;
        case 0x25a594u: goto label_25a594;
        case 0x25a598u: goto label_25a598;
        case 0x25a59cu: goto label_25a59c;
        case 0x25a5a0u: goto label_25a5a0;
        case 0x25a5a4u: goto label_25a5a4;
        case 0x25a5a8u: goto label_25a5a8;
        case 0x25a5acu: goto label_25a5ac;
        case 0x25a5b0u: goto label_25a5b0;
        case 0x25a5b4u: goto label_25a5b4;
        case 0x25a5b8u: goto label_25a5b8;
        case 0x25a5bcu: goto label_25a5bc;
        case 0x25a5c0u: goto label_25a5c0;
        case 0x25a5c4u: goto label_25a5c4;
        case 0x25a5c8u: goto label_25a5c8;
        case 0x25a5ccu: goto label_25a5cc;
        case 0x25a5d0u: goto label_25a5d0;
        case 0x25a5d4u: goto label_25a5d4;
        case 0x25a5d8u: goto label_25a5d8;
        case 0x25a5dcu: goto label_25a5dc;
        case 0x25a5e0u: goto label_25a5e0;
        case 0x25a5e4u: goto label_25a5e4;
        case 0x25a5e8u: goto label_25a5e8;
        case 0x25a5ecu: goto label_25a5ec;
        case 0x25a5f0u: goto label_25a5f0;
        case 0x25a5f4u: goto label_25a5f4;
        case 0x25a5f8u: goto label_25a5f8;
        case 0x25a5fcu: goto label_25a5fc;
        case 0x25a600u: goto label_25a600;
        case 0x25a604u: goto label_25a604;
        case 0x25a608u: goto label_25a608;
        case 0x25a60cu: goto label_25a60c;
        case 0x25a610u: goto label_25a610;
        case 0x25a614u: goto label_25a614;
        case 0x25a618u: goto label_25a618;
        case 0x25a61cu: goto label_25a61c;
        case 0x25a620u: goto label_25a620;
        case 0x25a624u: goto label_25a624;
        case 0x25a628u: goto label_25a628;
        case 0x25a62cu: goto label_25a62c;
        case 0x25a630u: goto label_25a630;
        case 0x25a634u: goto label_25a634;
        case 0x25a638u: goto label_25a638;
        case 0x25a63cu: goto label_25a63c;
        case 0x25a640u: goto label_25a640;
        case 0x25a644u: goto label_25a644;
        case 0x25a648u: goto label_25a648;
        case 0x25a64cu: goto label_25a64c;
        case 0x25a650u: goto label_25a650;
        case 0x25a654u: goto label_25a654;
        case 0x25a658u: goto label_25a658;
        case 0x25a65cu: goto label_25a65c;
        case 0x25a660u: goto label_25a660;
        case 0x25a664u: goto label_25a664;
        case 0x25a668u: goto label_25a668;
        case 0x25a66cu: goto label_25a66c;
        case 0x25a670u: goto label_25a670;
        case 0x25a674u: goto label_25a674;
        case 0x25a678u: goto label_25a678;
        case 0x25a67cu: goto label_25a67c;
        case 0x25a680u: goto label_25a680;
        case 0x25a684u: goto label_25a684;
        case 0x25a688u: goto label_25a688;
        case 0x25a68cu: goto label_25a68c;
        case 0x25a690u: goto label_25a690;
        case 0x25a694u: goto label_25a694;
        case 0x25a698u: goto label_25a698;
        case 0x25a69cu: goto label_25a69c;
        case 0x25a6a0u: goto label_25a6a0;
        case 0x25a6a4u: goto label_25a6a4;
        case 0x25a6a8u: goto label_25a6a8;
        case 0x25a6acu: goto label_25a6ac;
        case 0x25a6b0u: goto label_25a6b0;
        case 0x25a6b4u: goto label_25a6b4;
        case 0x25a6b8u: goto label_25a6b8;
        case 0x25a6bcu: goto label_25a6bc;
        case 0x25a6c0u: goto label_25a6c0;
        case 0x25a6c4u: goto label_25a6c4;
        case 0x25a6c8u: goto label_25a6c8;
        case 0x25a6ccu: goto label_25a6cc;
        case 0x25a6d0u: goto label_25a6d0;
        case 0x25a6d4u: goto label_25a6d4;
        case 0x25a6d8u: goto label_25a6d8;
        case 0x25a6dcu: goto label_25a6dc;
        case 0x25a6e0u: goto label_25a6e0;
        case 0x25a6e4u: goto label_25a6e4;
        case 0x25a6e8u: goto label_25a6e8;
        case 0x25a6ecu: goto label_25a6ec;
        case 0x25a6f0u: goto label_25a6f0;
        case 0x25a6f4u: goto label_25a6f4;
        case 0x25a6f8u: goto label_25a6f8;
        case 0x25a6fcu: goto label_25a6fc;
        case 0x25a700u: goto label_25a700;
        case 0x25a704u: goto label_25a704;
        case 0x25a708u: goto label_25a708;
        case 0x25a70cu: goto label_25a70c;
        case 0x25a710u: goto label_25a710;
        case 0x25a714u: goto label_25a714;
        case 0x25a718u: goto label_25a718;
        case 0x25a71cu: goto label_25a71c;
        case 0x25a720u: goto label_25a720;
        case 0x25a724u: goto label_25a724;
        case 0x25a728u: goto label_25a728;
        case 0x25a72cu: goto label_25a72c;
        case 0x25a730u: goto label_25a730;
        case 0x25a734u: goto label_25a734;
        case 0x25a738u: goto label_25a738;
        case 0x25a73cu: goto label_25a73c;
        case 0x25a740u: goto label_25a740;
        case 0x25a744u: goto label_25a744;
        case 0x25a748u: goto label_25a748;
        case 0x25a74cu: goto label_25a74c;
        case 0x25a750u: goto label_25a750;
        case 0x25a754u: goto label_25a754;
        case 0x25a758u: goto label_25a758;
        case 0x25a75cu: goto label_25a75c;
        case 0x25a760u: goto label_25a760;
        case 0x25a764u: goto label_25a764;
        case 0x25a768u: goto label_25a768;
        case 0x25a76cu: goto label_25a76c;
        case 0x25a770u: goto label_25a770;
        case 0x25a774u: goto label_25a774;
        case 0x25a778u: goto label_25a778;
        case 0x25a77cu: goto label_25a77c;
        case 0x25a780u: goto label_25a780;
        case 0x25a784u: goto label_25a784;
        case 0x25a788u: goto label_25a788;
        case 0x25a78cu: goto label_25a78c;
        case 0x25a790u: goto label_25a790;
        case 0x25a794u: goto label_25a794;
        case 0x25a798u: goto label_25a798;
        case 0x25a79cu: goto label_25a79c;
        case 0x25a7a0u: goto label_25a7a0;
        case 0x25a7a4u: goto label_25a7a4;
        case 0x25a7a8u: goto label_25a7a8;
        case 0x25a7acu: goto label_25a7ac;
        case 0x25a7b0u: goto label_25a7b0;
        case 0x25a7b4u: goto label_25a7b4;
        case 0x25a7b8u: goto label_25a7b8;
        case 0x25a7bcu: goto label_25a7bc;
        case 0x25a7c0u: goto label_25a7c0;
        case 0x25a7c4u: goto label_25a7c4;
        case 0x25a7c8u: goto label_25a7c8;
        case 0x25a7ccu: goto label_25a7cc;
        case 0x25a7d0u: goto label_25a7d0;
        case 0x25a7d4u: goto label_25a7d4;
        case 0x25a7d8u: goto label_25a7d8;
        case 0x25a7dcu: goto label_25a7dc;
        case 0x25a7e0u: goto label_25a7e0;
        case 0x25a7e4u: goto label_25a7e4;
        case 0x25a7e8u: goto label_25a7e8;
        case 0x25a7ecu: goto label_25a7ec;
        case 0x25a7f0u: goto label_25a7f0;
        case 0x25a7f4u: goto label_25a7f4;
        case 0x25a7f8u: goto label_25a7f8;
        case 0x25a7fcu: goto label_25a7fc;
        case 0x25a800u: goto label_25a800;
        case 0x25a804u: goto label_25a804;
        case 0x25a808u: goto label_25a808;
        case 0x25a80cu: goto label_25a80c;
        case 0x25a810u: goto label_25a810;
        case 0x25a814u: goto label_25a814;
        case 0x25a818u: goto label_25a818;
        case 0x25a81cu: goto label_25a81c;
        case 0x25a820u: goto label_25a820;
        case 0x25a824u: goto label_25a824;
        case 0x25a828u: goto label_25a828;
        case 0x25a82cu: goto label_25a82c;
        case 0x25a830u: goto label_25a830;
        case 0x25a834u: goto label_25a834;
        case 0x25a838u: goto label_25a838;
        case 0x25a83cu: goto label_25a83c;
        case 0x25a840u: goto label_25a840;
        case 0x25a844u: goto label_25a844;
        case 0x25a848u: goto label_25a848;
        case 0x25a84cu: goto label_25a84c;
        case 0x25a850u: goto label_25a850;
        case 0x25a854u: goto label_25a854;
        case 0x25a858u: goto label_25a858;
        case 0x25a85cu: goto label_25a85c;
        case 0x25a860u: goto label_25a860;
        case 0x25a864u: goto label_25a864;
        case 0x25a868u: goto label_25a868;
        case 0x25a86cu: goto label_25a86c;
        case 0x25a870u: goto label_25a870;
        case 0x25a874u: goto label_25a874;
        case 0x25a878u: goto label_25a878;
        case 0x25a87cu: goto label_25a87c;
        case 0x25a880u: goto label_25a880;
        case 0x25a884u: goto label_25a884;
        case 0x25a888u: goto label_25a888;
        case 0x25a88cu: goto label_25a88c;
        case 0x25a890u: goto label_25a890;
        case 0x25a894u: goto label_25a894;
        case 0x25a898u: goto label_25a898;
        case 0x25a89cu: goto label_25a89c;
        case 0x25a8a0u: goto label_25a8a0;
        case 0x25a8a4u: goto label_25a8a4;
        case 0x25a8a8u: goto label_25a8a8;
        case 0x25a8acu: goto label_25a8ac;
        case 0x25a8b0u: goto label_25a8b0;
        case 0x25a8b4u: goto label_25a8b4;
        default: break;
    }

    ctx->pc = 0x25a3e0u;

label_25a3e0:
    // 0x25a3e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x25a3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_25a3e4:
    // 0x25a3e4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x25a3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_25a3e8:
    // 0x25a3e8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x25a3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_25a3ec:
    // 0x25a3ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25a3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25a3f0:
    // 0x25a3f0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x25a3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_25a3f4:
    // 0x25a3f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25a3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25a3f8:
    // 0x25a3f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_25a3fc:
    // 0x25a3fc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x25a3fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25a400:
    // 0x25a400: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x25a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_25a404:
    // 0x25a404: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x25a404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_25a408:
    // 0x25a408: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x25a408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_25a40c:
    // 0x25a40c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25a40cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25a410:
    // 0x25a410: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x25a410u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_25a414:
    // 0x25a414: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x25a414u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_25a418:
    // 0x25a418: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x25a418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_25a41c:
    // 0x25a41c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x25a41cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_25a420:
    // 0x25a420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25a424:
    // 0x25a424: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x25a424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_25a428:
    // 0x25a428: 0x8e3600d8  lw          $s6, 0xD8($s1)
    ctx->pc = 0x25a428u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25a42c:
    // 0x25a42c: 0x12c000eb  beqz        $s6, . + 4 + (0xEB << 2)
label_25a430:
    if (ctx->pc == 0x25A430u) {
        ctx->pc = 0x25A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A42Cu;
        // 0x25a430: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A434u;
        goto label_25a434;
    }
    ctx->pc = 0x25A42Cu;
    {
        const bool branch_taken_0x25a42c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A42Cu;
        // 0x25a430: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a42c) {
            ctx->pc = 0x25A7DCu;
            goto label_25a7dc;
        }
    }
    ctx->pc = 0x25A434u;
label_25a434:
    // 0x25a434: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x25a434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
label_25a438:
    // 0x25a438: 0xc089998  jal         func_226660
label_25a43c:
    if (ctx->pc == 0x25A43Cu) {
        ctx->pc = 0x25A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A438u;
        // 0x25a43c: 0x34a56a40  ori         $a1, $a1, 0x6A40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A440u;
        goto label_25a440;
    }
    ctx->pc = 0x25A438u;
    SET_GPR_U32(ctx, 31, 0x25A440u);
    ctx->pc = 0x25A43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A438u;
    // 0x25a43c: 0x34a56a40  ori         $a1, $a1, 0x6A40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x25A438u, 0x25A440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A440u;
label_25a440:
    // 0x25a440: 0x14400110  bnez        $v0, . + 4 + (0x110 << 2)
label_25a444:
    if (ctx->pc == 0x25A444u) {
        ctx->pc = 0x25A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A440u;
        // 0x25a444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A448u;
        goto label_25a448;
    }
    ctx->pc = 0x25A440u;
    {
        const bool branch_taken_0x25a440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A440u;
        // 0x25a444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a440) {
            ctx->pc = 0x25A884u;
            goto label_25a884;
        }
    }
    ctx->pc = 0x25A448u;
label_25a448:
    // 0x25a448: 0x2402029f  addiu       $v0, $zero, 0x29F
    ctx->pc = 0x25a448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
label_25a44c:
    // 0x25a44c: 0x16820049  bne         $s4, $v0, . + 4 + (0x49 << 2)
label_25a450:
    if (ctx->pc == 0x25A450u) {
        ctx->pc = 0x25A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A44Cu;
        // 0x25a450: 0xae3003c4  sw          $s0, 0x3C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 964), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A454u;
        goto label_25a454;
    }
    ctx->pc = 0x25A44Cu;
    {
        const bool branch_taken_0x25a44c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x25A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A44Cu;
        // 0x25a450: 0xae3003c4  sw          $s0, 0x3C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 964), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a44c) {
            ctx->pc = 0x25A574u;
            goto label_25a574;
        }
    }
    ctx->pc = 0x25A454u;
label_25a454:
    // 0x25a454: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25a454u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25a458:
    // 0x25a458: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25a458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25a45c:
    // 0x25a45c: 0xc041532  jal         func_1054C8
label_25a460:
    if (ctx->pc == 0x25A460u) {
        ctx->pc = 0x25A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A45Cu;
        // 0x25a460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A464u;
        goto label_25a464;
    }
    ctx->pc = 0x25A45Cu;
    SET_GPR_U32(ctx, 31, 0x25A464u);
    ctx->pc = 0x25A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A45Cu;
    // 0x25a460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A45Cu, 0x25A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A464u;
label_25a464:
    // 0x25a464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a468:
    // 0x25a468: 0xc041532  jal         func_1054C8
label_25a46c:
    if (ctx->pc == 0x25A46Cu) {
        ctx->pc = 0x25A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A468u;
        // 0x25a46c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A470u;
        goto label_25a470;
    }
    ctx->pc = 0x25A468u;
    SET_GPR_U32(ctx, 31, 0x25A470u);
    ctx->pc = 0x25A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A468u;
    // 0x25a46c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A468u, 0x25A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A470u;
label_25a470:
    // 0x25a470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a474:
    // 0x25a474: 0xc041532  jal         func_1054C8
label_25a478:
    if (ctx->pc == 0x25A478u) {
        ctx->pc = 0x25A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A474u;
        // 0x25a478: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A47Cu;
        goto label_25a47c;
    }
    ctx->pc = 0x25A474u;
    SET_GPR_U32(ctx, 31, 0x25A47Cu);
    ctx->pc = 0x25A478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A474u;
    // 0x25a478: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A474u, 0x25A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A47Cu;
label_25a47c:
    // 0x25a47c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_25a480:
    if (ctx->pc == 0x25A480u) {
        ctx->pc = 0x25A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A47Cu;
        // 0x25a480: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A484u;
        goto label_25a484;
    }
    ctx->pc = 0x25A47Cu;
    {
        const bool branch_taken_0x25a47c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A47Cu;
        // 0x25a480: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a47c) {
            ctx->pc = 0x25A4A0u;
            goto label_25a4a0;
        }
    }
    ctx->pc = 0x25A484u;
label_25a484:
    // 0x25a484: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x25a484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_25a488:
    // 0x25a488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a48c:
    // 0x25a48c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25a48cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25a490:
    // 0x25a490: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25a490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25a494:
    // 0x25a494: 0x2406029f  addiu       $a2, $zero, 0x29F
    ctx->pc = 0x25a494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
label_25a498:
    // 0x25a498: 0xc04159e  jal         func_105678
label_25a49c:
    if (ctx->pc == 0x25A49Cu) {
        ctx->pc = 0x25A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A498u;
        // 0x25a49c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A4A0u;
        goto label_25a4a0;
    }
    ctx->pc = 0x25A498u;
    SET_GPR_U32(ctx, 31, 0x25A4A0u);
    ctx->pc = 0x25A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A498u;
    // 0x25a49c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25A498u, 0x25A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A4A0u;
label_25a4a0:
    // 0x25a4a0: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_25a4a4:
    if (ctx->pc == 0x25A4A4u) {
        ctx->pc = 0x25A4A8u;
        goto label_25a4a8;
    }
    ctx->pc = 0x25A4A0u;
    {
        const bool branch_taken_0x25a4a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a4a0) {
            ctx->pc = 0x25A4E0u;
            goto label_25a4e0;
        }
    }
    ctx->pc = 0x25A4A8u;
label_25a4a8:
    // 0x25a4a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a4ac:
    // 0x25a4ac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25a4acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25a4b0:
    // 0x25a4b0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25a4b4:
    // 0x25a4b4: 0x40f809  jalr        $v0
label_25a4b8:
    if (ctx->pc == 0x25A4B8u) {
        ctx->pc = 0x25A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4B4u;
        // 0x25a4b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A4BCu;
        goto label_25a4bc;
    }
    ctx->pc = 0x25A4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A4BCu);
        ctx->pc = 0x25A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4B4u;
        // 0x25a4b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A4B4u, 0x25A4BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A4BCu;
label_25a4bc:
    // 0x25a4bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25a4bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25a4c0:
    // 0x25a4c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x25a4c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a4c4:
    // 0x25a4c4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25a4c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a4c8:
    // 0x25a4c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25a4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25a4cc:
    // 0x25a4cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25a4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25a4d0:
    // 0x25a4d0: 0x240602a0  addiu       $a2, $zero, 0x2A0
    ctx->pc = 0x25a4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
label_25a4d4:
    // 0x25a4d4: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x25a4d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
label_25a4d8:
    // 0x25a4d8: 0xc041664  jal         func_105990
label_25a4dc:
    if (ctx->pc == 0x25A4DCu) {
        ctx->pc = 0x25A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4D8u;
        // 0x25a4dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A4E0u;
        goto label_25a4e0;
    }
    ctx->pc = 0x25A4D8u;
    SET_GPR_U32(ctx, 31, 0x25A4E0u);
    ctx->pc = 0x25A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A4D8u;
    // 0x25a4dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25A4D8u, 0x25A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A4E0u;
label_25a4e0:
    // 0x25a4e0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_25a4e4:
    if (ctx->pc == 0x25A4E4u) {
        ctx->pc = 0x25A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4E0u;
        // 0x25a4e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A4E8u;
        goto label_25a4e8;
    }
    ctx->pc = 0x25A4E0u;
    {
        const bool branch_taken_0x25a4e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4E0u;
        // 0x25a4e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4e0) {
            ctx->pc = 0x25A500u;
            goto label_25a500;
        }
    }
    ctx->pc = 0x25A4E8u;
label_25a4e8:
    // 0x25a4e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x25a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_25a4ec:
    // 0x25a4ec: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25a4f0:
    // 0x25a4f0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25a4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25a4f4:
    // 0x25a4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a4f8:
    // 0x25a4f8: 0xc041b20  jal         func_106C80
label_25a4fc:
    if (ctx->pc == 0x25A4FCu) {
        ctx->pc = 0x25A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4F8u;
        // 0x25a4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A500u;
        goto label_25a500;
    }
    ctx->pc = 0x25A4F8u;
    SET_GPR_U32(ctx, 31, 0x25A500u);
    ctx->pc = 0x25A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A4F8u;
    // 0x25a4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25A4F8u, 0x25A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A500u;
label_25a500:
    // 0x25a500: 0xc05d484  jal         func_175210
label_25a504:
    if (ctx->pc == 0x25A504u) {
        ctx->pc = 0x25A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A500u;
        // 0x25a504: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A508u;
        goto label_25a508;
    }
    ctx->pc = 0x25A500u;
    SET_GPR_U32(ctx, 31, 0x25A508u);
    ctx->pc = 0x25A504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A500u;
    // 0x25a504: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25A500u, 0x25A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A508u;
label_25a508:
    // 0x25a508: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25a508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a50c:
    // 0x25a50c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25a50cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25a510:
    // 0x25a510: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25a510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25a514:
    // 0x25a514: 0xa0f809  jalr        $a1
label_25a518:
    if (ctx->pc == 0x25A518u) {
        ctx->pc = 0x25A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A514u;
        // 0x25a518: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A51Cu;
        goto label_25a51c;
    }
    ctx->pc = 0x25A514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25A51Cu);
        ctx->pc = 0x25A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A514u;
        // 0x25a518: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A514u, 0x25A51Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A51Cu;
label_25a51c:
    // 0x25a51c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a520:
    // 0x25a520: 0xc087016  jal         func_21C058
label_25a524:
    if (ctx->pc == 0x25A524u) {
        ctx->pc = 0x25A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A520u;
        // 0x25a524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A528u;
        goto label_25a528;
    }
    ctx->pc = 0x25A520u;
    SET_GPR_U32(ctx, 31, 0x25A528u);
    ctx->pc = 0x25A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A520u;
    // 0x25a524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25A520u, 0x25A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A528u;
label_25a528:
    // 0x25a528: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25a528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25a52c:
    // 0x25a52c: 0xc05d53a  jal         func_1754E8
label_25a530:
    if (ctx->pc == 0x25A530u) {
        ctx->pc = 0x25A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A52Cu;
        // 0x25a530: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A534u;
        goto label_25a534;
    }
    ctx->pc = 0x25A52Cu;
    SET_GPR_U32(ctx, 31, 0x25A534u);
    ctx->pc = 0x25A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A52Cu;
    // 0x25a530: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25A52Cu, 0x25A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A534u;
label_25a534:
    // 0x25a534: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25a534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25a538:
    // 0x25a538: 0xc05d4f6  jal         func_1753D8
label_25a53c:
    if (ctx->pc == 0x25A53Cu) {
        ctx->pc = 0x25A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A538u;
        // 0x25a53c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A540u;
        goto label_25a540;
    }
    ctx->pc = 0x25A538u;
    SET_GPR_U32(ctx, 31, 0x25A540u);
    ctx->pc = 0x25A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A538u;
    // 0x25a53c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25A538u, 0x25A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A540u;
label_25a540:
    // 0x25a540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a544:
    // 0x25a544: 0xc089990  jal         func_226640
label_25a548:
    if (ctx->pc == 0x25A548u) {
        ctx->pc = 0x25A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A544u;
        // 0x25a548: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A54Cu;
        goto label_25a54c;
    }
    ctx->pc = 0x25A544u;
    SET_GPR_U32(ctx, 31, 0x25A54Cu);
    ctx->pc = 0x25A548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A544u;
    // 0x25a548: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25A544u, 0x25A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A54Cu;
label_25a54c:
    // 0x25a54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a550:
    // 0x25a550: 0xc0899aa  jal         func_2266A8
label_25a554:
    if (ctx->pc == 0x25A554u) {
        ctx->pc = 0x25A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A550u;
        // 0x25a554: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A558u;
        goto label_25a558;
    }
    ctx->pc = 0x25A550u;
    SET_GPR_U32(ctx, 31, 0x25A558u);
    ctx->pc = 0x25A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A550u;
    // 0x25a554: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25A550u, 0x25A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A558u;
label_25a558:
    // 0x25a558: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25a55c:
    // 0x25a55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a560:
    // 0x25a560: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x25a560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_25a564:
    // 0x25a564: 0xc089988  jal         func_226620
label_25a568:
    if (ctx->pc == 0x25A568u) {
        ctx->pc = 0x25A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A564u;
        // 0x25a568: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A56Cu;
        goto label_25a56c;
    }
    ctx->pc = 0x25A564u;
    SET_GPR_U32(ctx, 31, 0x25A56Cu);
    ctx->pc = 0x25A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A564u;
    // 0x25a568: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x25A564u, 0x25A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A56Cu;
label_25a56c:
    // 0x25a56c: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_25a570:
    if (ctx->pc == 0x25A570u) {
        ctx->pc = 0x25A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A56Cu;
        // 0x25a570: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A574u;
        goto label_25a574;
    }
    ctx->pc = 0x25A56Cu;
    {
        const bool branch_taken_0x25a56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A56Cu;
        // 0x25a570: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a56c) {
            ctx->pc = 0x25A884u;
            goto label_25a884;
        }
    }
    ctx->pc = 0x25A574u;
label_25a574:
    // 0x25a574: 0x240202a1  addiu       $v0, $zero, 0x2A1
    ctx->pc = 0x25a574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
label_25a578:
    // 0x25a578: 0x16820042  bne         $s4, $v0, . + 4 + (0x42 << 2)
label_25a57c:
    if (ctx->pc == 0x25A57Cu) {
        ctx->pc = 0x25A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A578u;
        // 0x25a57c: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A580u;
        goto label_25a580;
    }
    ctx->pc = 0x25A578u;
    {
        const bool branch_taken_0x25a578 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x25A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A578u;
        // 0x25a57c: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a578) {
            ctx->pc = 0x25A684u;
            goto label_25a684;
        }
    }
    ctx->pc = 0x25A580u;
label_25a580:
    // 0x25a580: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25a580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25a584:
    // 0x25a584: 0xc041532  jal         func_1054C8
label_25a588:
    if (ctx->pc == 0x25A588u) {
        ctx->pc = 0x25A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A584u;
        // 0x25a588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A58Cu;
        goto label_25a58c;
    }
    ctx->pc = 0x25A584u;
    SET_GPR_U32(ctx, 31, 0x25A58Cu);
    ctx->pc = 0x25A588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A584u;
    // 0x25a588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A584u, 0x25A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A58Cu;
label_25a58c:
    // 0x25a58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a590:
    // 0x25a590: 0xc041532  jal         func_1054C8
label_25a594:
    if (ctx->pc == 0x25A594u) {
        ctx->pc = 0x25A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A590u;
        // 0x25a594: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A598u;
        goto label_25a598;
    }
    ctx->pc = 0x25A590u;
    SET_GPR_U32(ctx, 31, 0x25A598u);
    ctx->pc = 0x25A594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A590u;
    // 0x25a594: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A590u, 0x25A598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A598u;
label_25a598:
    // 0x25a598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a59c:
    // 0x25a59c: 0xc041532  jal         func_1054C8
label_25a5a0:
    if (ctx->pc == 0x25A5A0u) {
        ctx->pc = 0x25A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A59Cu;
        // 0x25a5a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A5A4u;
        goto label_25a5a4;
    }
    ctx->pc = 0x25A59Cu;
    SET_GPR_U32(ctx, 31, 0x25A5A4u);
    ctx->pc = 0x25A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A59Cu;
    // 0x25a5a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A59Cu, 0x25A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A5A4u;
label_25a5a4:
    // 0x25a5a4: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_25a5a8:
    if (ctx->pc == 0x25A5A8u) {
        ctx->pc = 0x25A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5A4u;
        // 0x25a5a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A5ACu;
        goto label_25a5ac;
    }
    ctx->pc = 0x25A5A4u;
    {
        const bool branch_taken_0x25a5a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5A4u;
        // 0x25a5a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5a4) {
            ctx->pc = 0x25A5CCu;
            goto label_25a5cc;
        }
    }
    ctx->pc = 0x25A5ACu;
label_25a5ac:
    // 0x25a5ac: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25a5b0:
    // 0x25a5b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x25a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_25a5b4:
    // 0x25a5b4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25a5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25a5b8:
    // 0x25a5b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a5bc:
    // 0x25a5bc: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x25a5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_25a5c0:
    // 0x25a5c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a5c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a5c4:
    // 0x25a5c4: 0xc04159e  jal         func_105678
label_25a5c8:
    if (ctx->pc == 0x25A5C8u) {
        ctx->pc = 0x25A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5C4u;
        // 0x25a5c8: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A5CCu;
        goto label_25a5cc;
    }
    ctx->pc = 0x25A5C4u;
    SET_GPR_U32(ctx, 31, 0x25A5CCu);
    ctx->pc = 0x25A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A5C4u;
    // 0x25a5c8: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25A5C4u, 0x25A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A5CCu;
label_25a5cc:
    // 0x25a5cc: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25a5d0:
    // 0x25a5d0: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_25a5d4:
    if (ctx->pc == 0x25A5D4u) {
        ctx->pc = 0x25A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5D0u;
        // 0x25a5d4: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A5D8u;
        goto label_25a5d8;
    }
    ctx->pc = 0x25A5D0u;
    {
        const bool branch_taken_0x25a5d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5D0u;
        // 0x25a5d4: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5d0) {
            ctx->pc = 0x25A610u;
            goto label_25a610;
        }
    }
    ctx->pc = 0x25A5D8u;
label_25a5d8:
    // 0x25a5d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a5dc:
    // 0x25a5dc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25a5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25a5e0:
    // 0x25a5e0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25a5e4:
    // 0x25a5e4: 0x40f809  jalr        $v0
label_25a5e8:
    if (ctx->pc == 0x25A5E8u) {
        ctx->pc = 0x25A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5E4u;
        // 0x25a5e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A5ECu;
        goto label_25a5ec;
    }
    ctx->pc = 0x25A5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A5ECu);
        ctx->pc = 0x25A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5E4u;
        // 0x25a5e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A5E4u, 0x25A5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A5ECu;
label_25a5ec:
    // 0x25a5ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25a5ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25a5f0:
    // 0x25a5f0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x25a5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a5f4:
    // 0x25a5f4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25a5f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a5f8:
    // 0x25a5f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25a5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25a5fc:
    // 0x25a5fc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25a5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25a600:
    // 0x25a600: 0x240602a1  addiu       $a2, $zero, 0x2A1
    ctx->pc = 0x25a600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
label_25a604:
    // 0x25a604: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x25a604u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
label_25a608:
    // 0x25a608: 0xc041664  jal         func_105990
label_25a60c:
    if (ctx->pc == 0x25A60Cu) {
        ctx->pc = 0x25A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A608u;
        // 0x25a60c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A610u;
        goto label_25a610;
    }
    ctx->pc = 0x25A608u;
    SET_GPR_U32(ctx, 31, 0x25A610u);
    ctx->pc = 0x25A60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A608u;
    // 0x25a60c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25A608u, 0x25A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A610u;
label_25a610:
    // 0x25a610: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_25a614:
    if (ctx->pc == 0x25A614u) {
        ctx->pc = 0x25A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A610u;
        // 0x25a614: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A618u;
        goto label_25a618;
    }
    ctx->pc = 0x25A610u;
    {
        const bool branch_taken_0x25a610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A610u;
        // 0x25a614: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a610) {
            ctx->pc = 0x25A630u;
            goto label_25a630;
        }
    }
    ctx->pc = 0x25A618u;
label_25a618:
    // 0x25a618: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x25a618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_25a61c:
    // 0x25a61c: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25a61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25a620:
    // 0x25a620: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25a620u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25a624:
    // 0x25a624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a628:
    // 0x25a628: 0xc041b20  jal         func_106C80
label_25a62c:
    if (ctx->pc == 0x25A62Cu) {
        ctx->pc = 0x25A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A628u;
        // 0x25a62c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A630u;
        goto label_25a630;
    }
    ctx->pc = 0x25A628u;
    SET_GPR_U32(ctx, 31, 0x25A630u);
    ctx->pc = 0x25A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A628u;
    // 0x25a62c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25A628u, 0x25A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A630u;
label_25a630:
    // 0x25a630: 0xc05d484  jal         func_175210
label_25a634:
    if (ctx->pc == 0x25A634u) {
        ctx->pc = 0x25A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A630u;
        // 0x25a634: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A638u;
        goto label_25a638;
    }
    ctx->pc = 0x25A630u;
    SET_GPR_U32(ctx, 31, 0x25A638u);
    ctx->pc = 0x25A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A630u;
    // 0x25a634: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25A630u, 0x25A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A638u;
label_25a638:
    // 0x25a638: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25a638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a63c:
    // 0x25a63c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25a63cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25a640:
    // 0x25a640: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25a640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25a644:
    // 0x25a644: 0xa0f809  jalr        $a1
label_25a648:
    if (ctx->pc == 0x25A648u) {
        ctx->pc = 0x25A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A644u;
        // 0x25a648: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A64Cu;
        goto label_25a64c;
    }
    ctx->pc = 0x25A644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25A64Cu);
        ctx->pc = 0x25A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A644u;
        // 0x25a648: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A644u, 0x25A64Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A64Cu;
label_25a64c:
    // 0x25a64c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a650:
    // 0x25a650: 0xc087016  jal         func_21C058
label_25a654:
    if (ctx->pc == 0x25A654u) {
        ctx->pc = 0x25A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A650u;
        // 0x25a654: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A658u;
        goto label_25a658;
    }
    ctx->pc = 0x25A650u;
    SET_GPR_U32(ctx, 31, 0x25A658u);
    ctx->pc = 0x25A654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A650u;
    // 0x25a654: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25A650u, 0x25A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A658u;
label_25a658:
    // 0x25a658: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25a658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25a65c:
    // 0x25a65c: 0xc05d53a  jal         func_1754E8
label_25a660:
    if (ctx->pc == 0x25A660u) {
        ctx->pc = 0x25A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A65Cu;
        // 0x25a660: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A664u;
        goto label_25a664;
    }
    ctx->pc = 0x25A65Cu;
    SET_GPR_U32(ctx, 31, 0x25A664u);
    ctx->pc = 0x25A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A65Cu;
    // 0x25a660: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25A65Cu, 0x25A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A664u;
label_25a664:
    // 0x25a664: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25a664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25a668:
    // 0x25a668: 0xc05d4f6  jal         func_1753D8
label_25a66c:
    if (ctx->pc == 0x25A66Cu) {
        ctx->pc = 0x25A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A668u;
        // 0x25a66c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A670u;
        goto label_25a670;
    }
    ctx->pc = 0x25A668u;
    SET_GPR_U32(ctx, 31, 0x25A670u);
    ctx->pc = 0x25A66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A668u;
    // 0x25a66c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25A668u, 0x25A670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A670u;
label_25a670:
    // 0x25a670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a674:
    // 0x25a674: 0xc089990  jal         func_226640
label_25a678:
    if (ctx->pc == 0x25A678u) {
        ctx->pc = 0x25A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A674u;
        // 0x25a678: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A67Cu;
        goto label_25a67c;
    }
    ctx->pc = 0x25A674u;
    SET_GPR_U32(ctx, 31, 0x25A67Cu);
    ctx->pc = 0x25A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A674u;
    // 0x25a678: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25A674u, 0x25A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A67Cu;
label_25a67c:
    // 0x25a67c: 0x10000081  b           . + 4 + (0x81 << 2)
label_25a680:
    if (ctx->pc == 0x25A680u) {
        ctx->pc = 0x25A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A67Cu;
        // 0x25a680: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A684u;
        goto label_25a684;
    }
    ctx->pc = 0x25A67Cu;
    {
        const bool branch_taken_0x25a67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A67Cu;
        // 0x25a680: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a67c) {
            ctx->pc = 0x25A884u;
            goto label_25a884;
        }
    }
    ctx->pc = 0x25A684u;
label_25a684:
    // 0x25a684: 0x12400032  beqz        $s2, . + 4 + (0x32 << 2)
label_25a688:
    if (ctx->pc == 0x25A688u) {
        ctx->pc = 0x25A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A684u;
        // 0x25a688: 0x2610d9f0  addiu       $s0, $s0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A68Cu;
        goto label_25a68c;
    }
    ctx->pc = 0x25A684u;
    {
        const bool branch_taken_0x25a684 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A684u;
        // 0x25a688: 0x2610d9f0  addiu       $s0, $s0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a684) {
            ctx->pc = 0x25A750u;
            goto label_25a750;
        }
    }
    ctx->pc = 0x25A68Cu;
label_25a68c:
    // 0x25a68c: 0xc041532  jal         func_1054C8
label_25a690:
    if (ctx->pc == 0x25A690u) {
        ctx->pc = 0x25A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A68Cu;
        // 0x25a690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A694u;
        goto label_25a694;
    }
    ctx->pc = 0x25A68Cu;
    SET_GPR_U32(ctx, 31, 0x25A694u);
    ctx->pc = 0x25A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A68Cu;
    // 0x25a690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A68Cu, 0x25A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A694u;
label_25a694:
    // 0x25a694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a698:
    // 0x25a698: 0xc041532  jal         func_1054C8
label_25a69c:
    if (ctx->pc == 0x25A69Cu) {
        ctx->pc = 0x25A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A698u;
        // 0x25a69c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A6A0u;
        goto label_25a6a0;
    }
    ctx->pc = 0x25A698u;
    SET_GPR_U32(ctx, 31, 0x25A6A0u);
    ctx->pc = 0x25A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A698u;
    // 0x25a69c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A698u, 0x25A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A6A0u;
label_25a6a0:
    // 0x25a6a0: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_25a6a4:
    if (ctx->pc == 0x25A6A4u) {
        ctx->pc = 0x25A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6A0u;
        // 0x25a6a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A6A8u;
        goto label_25a6a8;
    }
    ctx->pc = 0x25A6A0u;
    {
        const bool branch_taken_0x25a6a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6A0u;
        // 0x25a6a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6a0) {
            ctx->pc = 0x25A6C4u;
            goto label_25a6c4;
        }
    }
    ctx->pc = 0x25A6A8u;
label_25a6a8:
    // 0x25a6a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x25a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_25a6ac:
    // 0x25a6ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x25a6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25a6b0:
    // 0x25a6b0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25a6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25a6b4:
    // 0x25a6b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a6b8:
    // 0x25a6b8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25a6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25a6bc:
    // 0x25a6bc: 0xc04159e  jal         func_105678
label_25a6c0:
    if (ctx->pc == 0x25A6C0u) {
        ctx->pc = 0x25A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6BCu;
        // 0x25a6c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A6C4u;
        goto label_25a6c4;
    }
    ctx->pc = 0x25A6BCu;
    SET_GPR_U32(ctx, 31, 0x25A6C4u);
    ctx->pc = 0x25A6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A6BCu;
    // 0x25a6c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25A6BCu, 0x25A6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A6C4u;
label_25a6c4:
    // 0x25a6c4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_25a6c8:
    if (ctx->pc == 0x25A6C8u) {
        ctx->pc = 0x25A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6C4u;
        // 0x25a6c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A6CCu;
        goto label_25a6cc;
    }
    ctx->pc = 0x25A6C4u;
    {
        const bool branch_taken_0x25a6c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6C4u;
        // 0x25a6c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6c4) {
            ctx->pc = 0x25A6E4u;
            goto label_25a6e4;
        }
    }
    ctx->pc = 0x25A6CCu;
label_25a6cc:
    // 0x25a6cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x25a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_25a6d0:
    // 0x25a6d0: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25a6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25a6d4:
    // 0x25a6d4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25a6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25a6d8:
    // 0x25a6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a6dc:
    // 0x25a6dc: 0xc041b20  jal         func_106C80
label_25a6e0:
    if (ctx->pc == 0x25A6E0u) {
        ctx->pc = 0x25A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6DCu;
        // 0x25a6e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A6E4u;
        goto label_25a6e4;
    }
    ctx->pc = 0x25A6DCu;
    SET_GPR_U32(ctx, 31, 0x25A6E4u);
    ctx->pc = 0x25A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A6DCu;
    // 0x25a6e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25A6DCu, 0x25A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A6E4u;
label_25a6e4:
    // 0x25a6e4: 0xc05d484  jal         func_175210
label_25a6e8:
    if (ctx->pc == 0x25A6E8u) {
        ctx->pc = 0x25A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6E4u;
        // 0x25a6e8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A6ECu;
        goto label_25a6ec;
    }
    ctx->pc = 0x25A6E4u;
    SET_GPR_U32(ctx, 31, 0x25A6ECu);
    ctx->pc = 0x25A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A6E4u;
    // 0x25a6e8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25A6E4u, 0x25A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A6ECu;
label_25a6ec:
    // 0x25a6ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a6f0:
    // 0x25a6f0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25a6f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25a6f4:
    // 0x25a6f4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25a6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25a6f8:
    // 0x25a6f8: 0xa0f809  jalr        $a1
label_25a6fc:
    if (ctx->pc == 0x25A6FCu) {
        ctx->pc = 0x25A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6F8u;
        // 0x25a6fc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A700u;
        goto label_25a700;
    }
    ctx->pc = 0x25A6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25A700u);
        ctx->pc = 0x25A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6F8u;
        // 0x25a6fc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A6F8u, 0x25A700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A700u;
label_25a700:
    // 0x25a700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a704:
    // 0x25a704: 0xc087016  jal         func_21C058
label_25a708:
    if (ctx->pc == 0x25A708u) {
        ctx->pc = 0x25A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A704u;
        // 0x25a708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A70Cu;
        goto label_25a70c;
    }
    ctx->pc = 0x25A704u;
    SET_GPR_U32(ctx, 31, 0x25A70Cu);
    ctx->pc = 0x25A708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A704u;
    // 0x25a708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25A704u, 0x25A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A70Cu;
label_25a70c:
    // 0x25a70c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a710:
    // 0x25a710: 0xc0899aa  jal         func_2266A8
label_25a714:
    if (ctx->pc == 0x25A714u) {
        ctx->pc = 0x25A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A710u;
        // 0x25a714: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A718u;
        goto label_25a718;
    }
    ctx->pc = 0x25A710u;
    SET_GPR_U32(ctx, 31, 0x25A718u);
    ctx->pc = 0x25A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A710u;
    // 0x25a714: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25A710u, 0x25A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A718u;
label_25a718:
    // 0x25a718: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25a718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25a71c:
    // 0x25a71c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a720:
    // 0x25a720: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x25a720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_25a724:
    // 0x25a724: 0xc089988  jal         func_226620
label_25a728:
    if (ctx->pc == 0x25A728u) {
        ctx->pc = 0x25A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A724u;
        // 0x25a728: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A72Cu;
        goto label_25a72c;
    }
    ctx->pc = 0x25A724u;
    SET_GPR_U32(ctx, 31, 0x25A72Cu);
    ctx->pc = 0x25A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A724u;
    // 0x25a728: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x25A724u, 0x25A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A72Cu;
label_25a72c:
    // 0x25a72c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25a72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a730:
    // 0x25a730: 0xc05d53a  jal         func_1754E8
label_25a734:
    if (ctx->pc == 0x25A734u) {
        ctx->pc = 0x25A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A730u;
        // 0x25a734: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A738u;
        goto label_25a738;
    }
    ctx->pc = 0x25A730u;
    SET_GPR_U32(ctx, 31, 0x25A738u);
    ctx->pc = 0x25A734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A730u;
    // 0x25a734: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25A730u, 0x25A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A738u;
label_25a738:
    // 0x25a738: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25a738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25a73c:
    // 0x25a73c: 0xc05d4f6  jal         func_1753D8
label_25a740:
    if (ctx->pc == 0x25A740u) {
        ctx->pc = 0x25A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A73Cu;
        // 0x25a740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A744u;
        goto label_25a744;
    }
    ctx->pc = 0x25A73Cu;
    SET_GPR_U32(ctx, 31, 0x25A744u);
    ctx->pc = 0x25A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A73Cu;
    // 0x25a740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25A73Cu, 0x25A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A744u;
label_25a744:
    // 0x25a744: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25a744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_25a748:
    // 0x25a748: 0x1000004e  b           . + 4 + (0x4E << 2)
label_25a74c:
    if (ctx->pc == 0x25A74Cu) {
        ctx->pc = 0x25A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A748u;
        // 0x25a74c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A750u;
        goto label_25a750;
    }
    ctx->pc = 0x25A748u;
    {
        const bool branch_taken_0x25a748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A748u;
        // 0x25a74c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a748) {
            ctx->pc = 0x25A884u;
            goto label_25a884;
        }
    }
    ctx->pc = 0x25A750u;
label_25a750:
    // 0x25a750: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x25a750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_25a754:
    // 0x25a754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a758:
    // 0x25a758: 0xc089998  jal         func_226660
label_25a75c:
    if (ctx->pc == 0x25A75Cu) {
        ctx->pc = 0x25A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A758u;
        // 0x25a75c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A760u;
        goto label_25a760;
    }
    ctx->pc = 0x25A758u;
    SET_GPR_U32(ctx, 31, 0x25A760u);
    ctx->pc = 0x25A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A758u;
    // 0x25a75c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x25A758u, 0x25A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A760u;
label_25a760:
    // 0x25a760: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_25a764:
    if (ctx->pc == 0x25A764u) {
        ctx->pc = 0x25A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A760u;
        // 0x25a764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A768u;
        goto label_25a768;
    }
    ctx->pc = 0x25A760u;
    {
        const bool branch_taken_0x25a760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A760u;
        // 0x25a764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a760) {
            ctx->pc = 0x25A884u;
            goto label_25a884;
        }
    }
    ctx->pc = 0x25A768u;
label_25a768:
    // 0x25a768: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25a768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a76c:
    // 0x25a76c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x25a76cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_25a770:
    // 0x25a770: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x25a770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_25a774:
    // 0x25a774: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x25a774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_25a778:
    // 0x25a778: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x25a778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_25a77c:
    // 0x25a77c: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x25a77cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_25a780:
    // 0x25a780: 0xc08997c  jal         func_2265F0
label_25a784:
    if (ctx->pc == 0x25A784u) {
        ctx->pc = 0x25A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A780u;
        // 0x25a784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A788u;
        goto label_25a788;
    }
    ctx->pc = 0x25A780u;
    SET_GPR_U32(ctx, 31, 0x25A788u);
    ctx->pc = 0x25A784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A780u;
    // 0x25a784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25A780u, 0x25A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A788u;
label_25a788:
    // 0x25a788: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25a78c:
    if (ctx->pc == 0x25A78Cu) {
        ctx->pc = 0x25A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A788u;
        // 0x25a78c: 0x3a82029c  xori        $v0, $s4, 0x29C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)668);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A790u;
        goto label_25a790;
    }
    ctx->pc = 0x25A788u;
    {
        const bool branch_taken_0x25a788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A788u;
        // 0x25a78c: 0x3a82029c  xori        $v0, $s4, 0x29C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)668);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a788) {
            ctx->pc = 0x25A79Cu;
            goto label_25a79c;
        }
    }
    ctx->pc = 0x25A790u;
label_25a790:
    // 0x25a790: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_25a794:
    if (ctx->pc == 0x25A794u) {
        ctx->pc = 0x25A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A790u;
        // 0x25a794: 0x3a82029d  xori        $v0, $s4, 0x29D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)669);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A798u;
        goto label_25a798;
    }
    ctx->pc = 0x25A790u;
    {
        const bool branch_taken_0x25a790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A790u;
        // 0x25a794: 0x3a82029d  xori        $v0, $s4, 0x29D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)669);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a790) {
            ctx->pc = 0x25A79Cu;
            goto label_25a79c;
        }
    }
    ctx->pc = 0x25A798u;
label_25a798:
    // 0x25a798: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x25a798u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_25a79c:
    // 0x25a79c: 0x16000039  bnez        $s0, . + 4 + (0x39 << 2)
label_25a7a0:
    if (ctx->pc == 0x25A7A0u) {
        ctx->pc = 0x25A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A79Cu;
        // 0x25a7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A7A4u;
        goto label_25a7a4;
    }
    ctx->pc = 0x25A79Cu;
    {
        const bool branch_taken_0x25a79c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A79Cu;
        // 0x25a7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a79c) {
            ctx->pc = 0x25A884u;
            goto label_25a884;
        }
    }
    ctx->pc = 0x25A7A4u;
label_25a7a4:
    // 0x25a7a4: 0x2683fdad  addiu       $v1, $s4, -0x253
    ctx->pc = 0x25a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966701));
label_25a7a8:
    // 0x25a7a8: 0x2c62004b  sltiu       $v0, $v1, 0x4B
    ctx->pc = 0x25a7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)75) ? 1 : 0);
label_25a7ac:
    // 0x25a7ac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_25a7b0:
    if (ctx->pc == 0x25A7B0u) {
        ctx->pc = 0x25A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7ACu;
        // 0x25a7b0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A7B4u;
        goto label_25a7b4;
    }
    ctx->pc = 0x25A7ACu;
    {
        const bool branch_taken_0x25a7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7ACu;
        // 0x25a7b0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7ac) {
            ctx->pc = 0x25A7FCu;
            goto label_25a7fc;
        }
    }
    ctx->pc = 0x25A7B4u;
label_25a7b4:
    // 0x25a7b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25a7b8:
    // 0x25a7b8: 0x2442da00  addiu       $v0, $v0, -0x2600
    ctx->pc = 0x25a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957568));
label_25a7bc:
    // 0x25a7bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25a7c0:
    // 0x25a7c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25a7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25a7c4:
    // 0x25a7c4: 0x800008  jr          $a0
label_25a7c8:
    if (ctx->pc == 0x25A7C8u) {
        ctx->pc = 0x25A7CCu;
        goto label_25a7cc;
    }
    ctx->pc = 0x25A7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A7CCu: goto label_25a7cc;
            case 0x25A7E4u: goto label_25a7e4;
            case 0x25A7ECu: goto label_25a7ec;
            case 0x25A7FCu: goto label_25a7fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A7C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25A7CCu;
label_25a7cc:
    // 0x25a7cc: 0xc088f4e  jal         func_223D38
label_25a7d0:
    if (ctx->pc == 0x25A7D0u) {
        ctx->pc = 0x25A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7CCu;
        // 0x25a7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A7D4u;
        goto label_25a7d4;
    }
    ctx->pc = 0x25A7CCu;
    SET_GPR_U32(ctx, 31, 0x25A7D4u);
    ctx->pc = 0x25A7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A7CCu;
    // 0x25a7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223D38u, 0x25A7CCu, 0x25A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A7D4u;
label_25a7d4:
    // 0x25a7d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_25a7d8:
    if (ctx->pc == 0x25A7D8u) {
        ctx->pc = 0x25A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7D4u;
        // 0x25a7d8: 0x24120100  addiu       $s2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A7DCu;
        goto label_25a7dc;
    }
    ctx->pc = 0x25A7D4u;
    {
        const bool branch_taken_0x25a7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7D4u;
        // 0x25a7d8: 0x24120100  addiu       $s2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7d4) {
            ctx->pc = 0x25A808u;
            goto label_25a808;
        }
    }
    ctx->pc = 0x25A7DCu;
label_25a7dc:
    // 0x25a7dc: 0x10000029  b           . + 4 + (0x29 << 2)
label_25a7e0:
    if (ctx->pc == 0x25A7E0u) {
        ctx->pc = 0x25A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7DCu;
        // 0x25a7e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A7E4u;
        goto label_25a7e4;
    }
    ctx->pc = 0x25A7DCu;
    {
        const bool branch_taken_0x25a7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7DCu;
        // 0x25a7e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7dc) {
            ctx->pc = 0x25A884u;
            goto label_25a884;
        }
    }
    ctx->pc = 0x25A7E4u;
label_25a7e4:
    // 0x25a7e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_25a7e8:
    if (ctx->pc == 0x25A7E8u) {
        ctx->pc = 0x25A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7E4u;
        // 0x25a7e8: 0x3c120002  lui         $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A7ECu;
        goto label_25a7ec;
    }
    ctx->pc = 0x25A7E4u;
    {
        const bool branch_taken_0x25a7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7E4u;
        // 0x25a7e8: 0x3c120002  lui         $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7e4) {
            ctx->pc = 0x25A808u;
            goto label_25a808;
        }
    }
    ctx->pc = 0x25A7ECu;
label_25a7ec:
    // 0x25a7ec: 0x2695fdaa  addiu       $s5, $s4, -0x256
    ctx->pc = 0x25a7ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966698));
label_25a7f0:
    // 0x25a7f0: 0x3c120010  lui         $s2, 0x10
    ctx->pc = 0x25a7f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16 << 16));
label_25a7f4:
    // 0x25a7f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_25a7f8:
    if (ctx->pc == 0x25A7F8u) {
        ctx->pc = 0x25A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7F4u;
        // 0x25a7f8: 0x2eb50002  sltiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A7FCu;
        goto label_25a7fc;
    }
    ctx->pc = 0x25A7F4u;
    {
        const bool branch_taken_0x25a7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7F4u;
        // 0x25a7f8: 0x2eb50002  sltiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7f4) {
            ctx->pc = 0x25A800u;
            goto label_25a800;
        }
    }
    ctx->pc = 0x25A7FCu;
label_25a7fc:
    // 0x25a7fc: 0x3c120010  lui         $s2, 0x10
    ctx->pc = 0x25a7fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16 << 16));
label_25a800:
    // 0x25a800: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x25a800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_25a804:
    // 0x25a804: 0x55900b  movn        $s2, $v0, $s5
    ctx->pc = 0x25a804u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_25a808:
    // 0x25a808: 0x36422000  ori         $v0, $s2, 0x2000
    ctx->pc = 0x25a808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8192);
label_25a80c:
    // 0x25a80c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a810:
    // 0x25a810: 0x53900a  movz        $s2, $v0, $s3
    ctx->pc = 0x25a810u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_25a814:
    // 0x25a814: 0xc089990  jal         func_226640
label_25a818:
    if (ctx->pc == 0x25A818u) {
        ctx->pc = 0x25A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A814u;
        // 0x25a818: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A81Cu;
        goto label_25a81c;
    }
    ctx->pc = 0x25A814u;
    SET_GPR_U32(ctx, 31, 0x25A81Cu);
    ctx->pc = 0x25A818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A814u;
    // 0x25a818: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25A814u, 0x25A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A81Cu;
label_25a81c:
    // 0x25a81c: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x25a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_25a820:
    // 0x25a820: 0xc041532  jal         func_1054C8
label_25a824:
    if (ctx->pc == 0x25A824u) {
        ctx->pc = 0x25A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A820u;
        // 0x25a824: 0x2484d9f0  addiu       $a0, $a0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A828u;
        goto label_25a828;
    }
    ctx->pc = 0x25A820u;
    SET_GPR_U32(ctx, 31, 0x25A828u);
    ctx->pc = 0x25A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A820u;
    // 0x25a824: 0x2484d9f0  addiu       $a0, $a0, -0x2610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A820u, 0x25A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A828u;
label_25a828:
    // 0x25a828: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25a828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a82c:
    // 0x25a82c: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_25a830:
    if (ctx->pc == 0x25A830u) {
        ctx->pc = 0x25A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A82Cu;
        // 0x25a830: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A834u;
        goto label_25a834;
    }
    ctx->pc = 0x25A82Cu;
    {
        const bool branch_taken_0x25a82c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A82Cu;
        // 0x25a830: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a82c) {
            ctx->pc = 0x25A874u;
            goto label_25a874;
        }
    }
    ctx->pc = 0x25A834u;
label_25a834:
    // 0x25a834: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25a834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a838:
    // 0x25a838: 0x15800b  movn        $s0, $zero, $s5
    ctx->pc = 0x25a838u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_25a83c:
    // 0x25a83c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25a83cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25a840:
    // 0x25a840: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25a844:
    // 0x25a844: 0x40f809  jalr        $v0
label_25a848:
    if (ctx->pc == 0x25A848u) {
        ctx->pc = 0x25A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A844u;
        // 0x25a848: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A84Cu;
        goto label_25a84c;
    }
    ctx->pc = 0x25A844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A84Cu);
        ctx->pc = 0x25A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A844u;
        // 0x25a848: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A844u, 0x25A84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A84Cu;
label_25a84c:
    // 0x25a84c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x25a84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25a850:
    // 0x25a850: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25a850u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25a854:
    // 0x25a854: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x25a854u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_25a858:
    // 0x25a858: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x25a858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a85c:
    // 0x25a85c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25a85cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a860:
    // 0x25a860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25a860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25a864:
    // 0x25a864: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25a864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25a868:
    // 0x25a868: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x25a868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a86c:
    // 0x25a86c: 0xc041890  jal         func_106240
label_25a870:
    if (ctx->pc == 0x25A870u) {
        ctx->pc = 0x25A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A86Cu;
        // 0x25a870: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A874u;
        goto label_25a874;
    }
    ctx->pc = 0x25A86Cu;
    SET_GPR_U32(ctx, 31, 0x25A874u);
    ctx->pc = 0x25A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A86Cu;
    // 0x25a870: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106240u, 0x25A86Cu, 0x25A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A874u;
label_25a874:
    // 0x25a874: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25a874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25a878:
    // 0x25a878: 0xc05d4f6  jal         func_1753D8
label_25a87c:
    if (ctx->pc == 0x25A87Cu) {
        ctx->pc = 0x25A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A878u;
        // 0x25a87c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A880u;
        goto label_25a880;
    }
    ctx->pc = 0x25A878u;
    SET_GPR_U32(ctx, 31, 0x25A880u);
    ctx->pc = 0x25A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A878u;
    // 0x25a87c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25A878u, 0x25A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A880u;
label_25a880:
    // 0x25a880: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x25a880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a884:
    // 0x25a884: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x25a884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25a888:
    // 0x25a888: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x25a888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25a88c:
    // 0x25a88c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x25a88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25a890:
    // 0x25a890: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25a890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25a894:
    // 0x25a894: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x25a894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25a898:
    // 0x25a898: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x25a898u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25a89c:
    // 0x25a89c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x25a89cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25a8a0:
    // 0x25a8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25a8a4:
    // 0x25a8a4: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x25a8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_25a8a8:
    // 0x25a8a8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x25a8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25a8ac:
    // 0x25a8ac: 0x3e00008  jr          $ra
label_25a8b0:
    if (ctx->pc == 0x25A8B0u) {
        ctx->pc = 0x25A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8ACu;
        // 0x25a8b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A8B4u;
        goto label_25a8b4;
    }
    ctx->pc = 0x25A8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8ACu;
        // 0x25a8b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A8B4u;
label_25a8b4:
    // 0x25a8b4: 0x0  nop
    ctx->pc = 0x25a8b4u;
    // NOP
    ctx->pc = 0x25a8b8u;
}
