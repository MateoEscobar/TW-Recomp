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

// Function: sub_0029A3F0
// Address: 0x29a3f0 - 0x29a6c8
void sub_0029A3F0_0x29a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A3F0_0x29a3f0");
#endif

    switch (ctx->pc) {
        case 0x29a3f0u: goto label_29a3f0;
        case 0x29a3f4u: goto label_29a3f4;
        case 0x29a3f8u: goto label_29a3f8;
        case 0x29a3fcu: goto label_29a3fc;
        case 0x29a400u: goto label_29a400;
        case 0x29a404u: goto label_29a404;
        case 0x29a408u: goto label_29a408;
        case 0x29a40cu: goto label_29a40c;
        case 0x29a410u: goto label_29a410;
        case 0x29a414u: goto label_29a414;
        case 0x29a418u: goto label_29a418;
        case 0x29a41cu: goto label_29a41c;
        case 0x29a420u: goto label_29a420;
        case 0x29a424u: goto label_29a424;
        case 0x29a428u: goto label_29a428;
        case 0x29a42cu: goto label_29a42c;
        case 0x29a430u: goto label_29a430;
        case 0x29a434u: goto label_29a434;
        case 0x29a438u: goto label_29a438;
        case 0x29a43cu: goto label_29a43c;
        case 0x29a440u: goto label_29a440;
        case 0x29a444u: goto label_29a444;
        case 0x29a448u: goto label_29a448;
        case 0x29a44cu: goto label_29a44c;
        case 0x29a450u: goto label_29a450;
        case 0x29a454u: goto label_29a454;
        case 0x29a458u: goto label_29a458;
        case 0x29a45cu: goto label_29a45c;
        case 0x29a460u: goto label_29a460;
        case 0x29a464u: goto label_29a464;
        case 0x29a468u: goto label_29a468;
        case 0x29a46cu: goto label_29a46c;
        case 0x29a470u: goto label_29a470;
        case 0x29a474u: goto label_29a474;
        case 0x29a478u: goto label_29a478;
        case 0x29a47cu: goto label_29a47c;
        case 0x29a480u: goto label_29a480;
        case 0x29a484u: goto label_29a484;
        case 0x29a488u: goto label_29a488;
        case 0x29a48cu: goto label_29a48c;
        case 0x29a490u: goto label_29a490;
        case 0x29a494u: goto label_29a494;
        case 0x29a498u: goto label_29a498;
        case 0x29a49cu: goto label_29a49c;
        case 0x29a4a0u: goto label_29a4a0;
        case 0x29a4a4u: goto label_29a4a4;
        case 0x29a4a8u: goto label_29a4a8;
        case 0x29a4acu: goto label_29a4ac;
        case 0x29a4b0u: goto label_29a4b0;
        case 0x29a4b4u: goto label_29a4b4;
        case 0x29a4b8u: goto label_29a4b8;
        case 0x29a4bcu: goto label_29a4bc;
        case 0x29a4c0u: goto label_29a4c0;
        case 0x29a4c4u: goto label_29a4c4;
        case 0x29a4c8u: goto label_29a4c8;
        case 0x29a4ccu: goto label_29a4cc;
        case 0x29a4d0u: goto label_29a4d0;
        case 0x29a4d4u: goto label_29a4d4;
        case 0x29a4d8u: goto label_29a4d8;
        case 0x29a4dcu: goto label_29a4dc;
        case 0x29a4e0u: goto label_29a4e0;
        case 0x29a4e4u: goto label_29a4e4;
        case 0x29a4e8u: goto label_29a4e8;
        case 0x29a4ecu: goto label_29a4ec;
        case 0x29a4f0u: goto label_29a4f0;
        case 0x29a4f4u: goto label_29a4f4;
        case 0x29a4f8u: goto label_29a4f8;
        case 0x29a4fcu: goto label_29a4fc;
        case 0x29a500u: goto label_29a500;
        case 0x29a504u: goto label_29a504;
        case 0x29a508u: goto label_29a508;
        case 0x29a50cu: goto label_29a50c;
        case 0x29a510u: goto label_29a510;
        case 0x29a514u: goto label_29a514;
        case 0x29a518u: goto label_29a518;
        case 0x29a51cu: goto label_29a51c;
        case 0x29a520u: goto label_29a520;
        case 0x29a524u: goto label_29a524;
        case 0x29a528u: goto label_29a528;
        case 0x29a52cu: goto label_29a52c;
        case 0x29a530u: goto label_29a530;
        case 0x29a534u: goto label_29a534;
        case 0x29a538u: goto label_29a538;
        case 0x29a53cu: goto label_29a53c;
        case 0x29a540u: goto label_29a540;
        case 0x29a544u: goto label_29a544;
        case 0x29a548u: goto label_29a548;
        case 0x29a54cu: goto label_29a54c;
        case 0x29a550u: goto label_29a550;
        case 0x29a554u: goto label_29a554;
        case 0x29a558u: goto label_29a558;
        case 0x29a55cu: goto label_29a55c;
        case 0x29a560u: goto label_29a560;
        case 0x29a564u: goto label_29a564;
        case 0x29a568u: goto label_29a568;
        case 0x29a56cu: goto label_29a56c;
        case 0x29a570u: goto label_29a570;
        case 0x29a574u: goto label_29a574;
        case 0x29a578u: goto label_29a578;
        case 0x29a57cu: goto label_29a57c;
        case 0x29a580u: goto label_29a580;
        case 0x29a584u: goto label_29a584;
        case 0x29a588u: goto label_29a588;
        case 0x29a58cu: goto label_29a58c;
        case 0x29a590u: goto label_29a590;
        case 0x29a594u: goto label_29a594;
        case 0x29a598u: goto label_29a598;
        case 0x29a59cu: goto label_29a59c;
        case 0x29a5a0u: goto label_29a5a0;
        case 0x29a5a4u: goto label_29a5a4;
        case 0x29a5a8u: goto label_29a5a8;
        case 0x29a5acu: goto label_29a5ac;
        case 0x29a5b0u: goto label_29a5b0;
        case 0x29a5b4u: goto label_29a5b4;
        case 0x29a5b8u: goto label_29a5b8;
        case 0x29a5bcu: goto label_29a5bc;
        case 0x29a5c0u: goto label_29a5c0;
        case 0x29a5c4u: goto label_29a5c4;
        case 0x29a5c8u: goto label_29a5c8;
        case 0x29a5ccu: goto label_29a5cc;
        case 0x29a5d0u: goto label_29a5d0;
        case 0x29a5d4u: goto label_29a5d4;
        case 0x29a5d8u: goto label_29a5d8;
        case 0x29a5dcu: goto label_29a5dc;
        case 0x29a5e0u: goto label_29a5e0;
        case 0x29a5e4u: goto label_29a5e4;
        case 0x29a5e8u: goto label_29a5e8;
        case 0x29a5ecu: goto label_29a5ec;
        case 0x29a5f0u: goto label_29a5f0;
        case 0x29a5f4u: goto label_29a5f4;
        case 0x29a5f8u: goto label_29a5f8;
        case 0x29a5fcu: goto label_29a5fc;
        case 0x29a600u: goto label_29a600;
        case 0x29a604u: goto label_29a604;
        case 0x29a608u: goto label_29a608;
        case 0x29a60cu: goto label_29a60c;
        case 0x29a610u: goto label_29a610;
        case 0x29a614u: goto label_29a614;
        case 0x29a618u: goto label_29a618;
        case 0x29a61cu: goto label_29a61c;
        case 0x29a620u: goto label_29a620;
        case 0x29a624u: goto label_29a624;
        case 0x29a628u: goto label_29a628;
        case 0x29a62cu: goto label_29a62c;
        case 0x29a630u: goto label_29a630;
        case 0x29a634u: goto label_29a634;
        case 0x29a638u: goto label_29a638;
        case 0x29a63cu: goto label_29a63c;
        case 0x29a640u: goto label_29a640;
        case 0x29a644u: goto label_29a644;
        case 0x29a648u: goto label_29a648;
        case 0x29a64cu: goto label_29a64c;
        case 0x29a650u: goto label_29a650;
        case 0x29a654u: goto label_29a654;
        case 0x29a658u: goto label_29a658;
        case 0x29a65cu: goto label_29a65c;
        case 0x29a660u: goto label_29a660;
        case 0x29a664u: goto label_29a664;
        case 0x29a668u: goto label_29a668;
        case 0x29a66cu: goto label_29a66c;
        case 0x29a670u: goto label_29a670;
        case 0x29a674u: goto label_29a674;
        case 0x29a678u: goto label_29a678;
        case 0x29a67cu: goto label_29a67c;
        case 0x29a680u: goto label_29a680;
        case 0x29a684u: goto label_29a684;
        case 0x29a688u: goto label_29a688;
        case 0x29a68cu: goto label_29a68c;
        case 0x29a690u: goto label_29a690;
        case 0x29a694u: goto label_29a694;
        case 0x29a698u: goto label_29a698;
        case 0x29a69cu: goto label_29a69c;
        case 0x29a6a0u: goto label_29a6a0;
        case 0x29a6a4u: goto label_29a6a4;
        case 0x29a6a8u: goto label_29a6a8;
        case 0x29a6acu: goto label_29a6ac;
        case 0x29a6b0u: goto label_29a6b0;
        case 0x29a6b4u: goto label_29a6b4;
        case 0x29a6b8u: goto label_29a6b8;
        case 0x29a6bcu: goto label_29a6bc;
        case 0x29a6c0u: goto label_29a6c0;
        case 0x29a6c4u: goto label_29a6c4;
        default: break;
    }

    ctx->pc = 0x29a3f0u;

label_29a3f0:
    // 0x29a3f0: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x29a3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
label_29a3f4:
    // 0x29a3f4: 0x7fb00320  sq          $s0, 0x320($sp)
    ctx->pc = 0x29a3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 16));
label_29a3f8:
    // 0x29a3f8: 0x7fb20300  sq          $s2, 0x300($sp)
    ctx->pc = 0x29a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 18));
label_29a3fc:
    // 0x29a3fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29a3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29a400:
    // 0x29a400: 0x7fb602c0  sq          $s6, 0x2C0($sp)
    ctx->pc = 0x29a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 22));
label_29a404:
    // 0x29a404: 0x27b201e0  addiu       $s2, $sp, 0x1E0
    ctx->pc = 0x29a404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_29a408:
    // 0x29a408: 0xafa60280  sw          $a2, 0x280($sp)
    ctx->pc = 0x29a408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 6));
label_29a40c:
    // 0x29a40c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29a40cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29a410:
    // 0x29a410: 0x7fb10310  sq          $s1, 0x310($sp)
    ctx->pc = 0x29a410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 17));
label_29a414:
    // 0x29a414: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x29a414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_29a418:
    // 0x29a418: 0x7fb402e0  sq          $s4, 0x2E0($sp)
    ctx->pc = 0x29a418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 20));
label_29a41c:
    // 0x29a41c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29a41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29a420:
    // 0x29a420: 0x7fb502d0  sq          $s5, 0x2D0($sp)
    ctx->pc = 0x29a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 21));
label_29a424:
    // 0x29a424: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29a424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29a428:
    // 0x29a428: 0x7fb702b0  sq          $s7, 0x2B0($sp)
    ctx->pc = 0x29a428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 23));
label_29a42c:
    // 0x29a42c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x29a42cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a430:
    // 0x29a430: 0x7fb302f0  sq          $s3, 0x2F0($sp)
    ctx->pc = 0x29a430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 19));
label_29a434:
    // 0x29a434: 0x7fbe02a0  sq          $fp, 0x2A0($sp)
    ctx->pc = 0x29a434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 30));
label_29a438:
    // 0x29a438: 0xffbf0290  sd          $ra, 0x290($sp)
    ctx->pc = 0x29a438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 31));
label_29a43c:
    // 0x29a43c: 0xe7b50338  swc1        $f21, 0x338($sp)
    ctx->pc = 0x29a43cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 824), bits); }
label_29a440:
    // 0x29a440: 0xc0a6cae  jal         func_29B2B8
label_29a444:
    if (ctx->pc == 0x29A444u) {
        ctx->pc = 0x29A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A440u;
        // 0x29a444: 0xe7b40330  swc1        $f20, 0x330($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A448u;
        goto label_29a448;
    }
    ctx->pc = 0x29A440u;
    SET_GPR_U32(ctx, 31, 0x29A448u);
    ctx->pc = 0x29A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A440u;
    // 0x29a444: 0xe7b40330  swc1        $f20, 0x330($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B2B8u, 0x29A440u, 0x29A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A448u;
label_29a448:
    // 0x29a448: 0x27b101f0  addiu       $s1, $sp, 0x1F0
    ctx->pc = 0x29a448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_29a44c:
    // 0x29a44c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29a44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29a450:
    // 0x29a450: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29a450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29a454:
    // 0x29a454: 0xc0a6cae  jal         func_29B2B8
label_29a458:
    if (ctx->pc == 0x29A458u) {
        ctx->pc = 0x29A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A454u;
        // 0x29a458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A45Cu;
        goto label_29a45c;
    }
    ctx->pc = 0x29A454u;
    SET_GPR_U32(ctx, 31, 0x29A45Cu);
    ctx->pc = 0x29A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A454u;
    // 0x29a458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B2B8u, 0x29A454u, 0x29A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A45Cu;
label_29a45c:
    // 0x29a45c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x29a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_29a460:
    // 0x29a460: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29a460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_29a464:
    // 0x29a464: 0x24504b00  addiu       $s0, $v0, 0x4B00
    ctx->pc = 0x29a464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_29a468:
    // 0x29a468: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x29a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_29a46c:
    // 0x29a46c: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x29a46cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29a470:
    // 0x29a470: 0x26e60090  addiu       $a2, $s7, 0x90
    ctx->pc = 0x29a470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
label_29a474:
    // 0x29a474: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x29a474u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_29a478:
    // 0x29a478: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x29a478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29a47c:
    // 0x29a47c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_29a480:
    // 0x29a480: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29a480u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_29a484:
    // 0x29a484: 0x7fa30200  sq          $v1, 0x200($sp)
    ctx->pc = 0x29a484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 3));
label_29a488:
    // 0x29a488: 0x84c50002  lh          $a1, 0x2($a2)
    ctx->pc = 0x29a488u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_29a48c:
    // 0x29a48c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x29a48cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_29a490:
    // 0x29a490: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x29a490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_29a494:
    // 0x29a494: 0xc0cd8ec  jal         func_3363B0
label_29a498:
    if (ctx->pc == 0x29A498u) {
        ctx->pc = 0x29A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A494u;
        // 0x29a498: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A49Cu;
        goto label_29a49c;
    }
    ctx->pc = 0x29A494u;
    SET_GPR_U32(ctx, 31, 0x29A49Cu);
    ctx->pc = 0x29A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A494u;
    // 0x29a498: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x29A494u, 0x29A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A49Cu;
label_29a49c:
    // 0x29a49c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29a49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_29a4a0:
    // 0x29a4a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29a4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29a4a4:
    // 0x29a4a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x29a4a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29a4a8:
    // 0x29a4a8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x29a4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_29a4ac:
    // 0x29a4ac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x29a4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_29a4b0:
    // 0x29a4b0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x29a4b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29a4b4:
    // 0x29a4b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29a4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29a4b8:
    // 0x29a4b8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x29a4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_29a4bc:
    // 0x29a4bc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x29a4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29a4c0:
    // 0x29a4c0: 0xc089e2a  jal         func_2278A8
label_29a4c4:
    if (ctx->pc == 0x29A4C4u) {
        ctx->pc = 0x29A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A4C0u;
        // 0x29a4c4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A4C8u;
        goto label_29a4c8;
    }
    ctx->pc = 0x29A4C0u;
    SET_GPR_U32(ctx, 31, 0x29A4C8u);
    ctx->pc = 0x29A4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A4C0u;
    // 0x29a4c4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2278A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2278A8u, 0x29A4C0u, 0x29A4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A4C8u;
label_29a4c8:
    // 0x29a4c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29a4c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a4cc:
    // 0x29a4cc: 0x1280006f  beqz        $s4, . + 4 + (0x6F << 2)
label_29a4d0:
    if (ctx->pc == 0x29A4D0u) {
        ctx->pc = 0x29A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A4CCu;
        // 0x29a4d0: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A4D4u;
        goto label_29a4d4;
    }
    ctx->pc = 0x29A4CCu;
    {
        const bool branch_taken_0x29a4cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A4CCu;
        // 0x29a4d0: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a4cc) {
            ctx->pc = 0x29A68Cu;
            goto label_29a68c;
        }
    }
    ctx->pc = 0x29A4D4u;
label_29a4d4:
    // 0x29a4d4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x29a4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_29a4d8:
    // 0x29a4d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29a4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_29a4dc:
    // 0x29a4dc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x29a4dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a4e0:
    // 0x29a4e0: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x29a4e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29a4e4:
    // 0x29a4e4: 0x0  nop
    ctx->pc = 0x29a4e4u;
    // NOP
label_29a4e8:
    // 0x29a4e8: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x29a4e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29a4ec:
    // 0x29a4ec: 0x7ba40200  lq          $a0, 0x200($sp)
    ctx->pc = 0x29a4ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_29a4f0:
    // 0x29a4f0: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x29a4f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_29a4f4:
    // 0x29a4f4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x29a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29a4f8:
    // 0x29a4f8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x29a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_29a4fc:
    // 0x29a4fc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29a4fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_29a500:
    // 0x29a500: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29a500u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_29a504:
    // 0x29a504: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x29a504u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_29a508:
    // 0x29a508: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29a508u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29a50c:
    // 0x29a50c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29a50cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_29a510:
    // 0x29a510: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x29a510u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_29a514:
    // 0x29a514: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x29a514u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_29a518:
    // 0x29a518: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x29a518u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_29a51c:
    // 0x29a51c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29a51cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_29a520:
    // 0x29a520: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x29a520u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_29a524:
    // 0x29a524: 0x7fa30220  sq          $v1, 0x220($sp)
    ctx->pc = 0x29a524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 3));
label_29a528:
    // 0x29a528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29a52c:
    // 0x29a52c: 0x7fa40250  sq          $a0, 0x250($sp)
    ctx->pc = 0x29a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 4));
label_29a530:
    // 0x29a530: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x29a530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29a534:
    // 0x29a534: 0x7fa40240  sq          $a0, 0x240($sp)
    ctx->pc = 0x29a534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 4));
label_29a538:
    // 0x29a538: 0x45010050  bc1t        . + 4 + (0x50 << 2)
label_29a53c:
    if (ctx->pc == 0x29A53Cu) {
        ctx->pc = 0x29A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A538u;
        // 0x29a53c: 0x7fa40230  sq          $a0, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A540u;
        goto label_29a540;
    }
    ctx->pc = 0x29A538u;
    {
        const bool branch_taken_0x29a538 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A538u;
        // 0x29a53c: 0x7fa40230  sq          $a0, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a538) {
            ctx->pc = 0x29A67Cu;
            goto label_29a67c;
        }
    }
    ctx->pc = 0x29A540u;
label_29a540:
    // 0x29a540: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x29a540u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_29a544:
    // 0x29a544: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29a544u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29a548:
    // 0x29a548: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x29a548u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_29a54c:
    // 0x29a54c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x29a54cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_29a550:
    // 0x29a550: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29a550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_29a554:
    // 0x29a554: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x29a554u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_29a558:
    // 0x29a558: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x29a558u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_29a55c:
    // 0x29a55c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x29a55cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_29a560:
    // 0x29a560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29a560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29a564:
    // 0x29a564: 0x0  nop
    ctx->pc = 0x29a564u;
    // NOP
label_29a568:
    // 0x29a568: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x29a568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29a56c:
    // 0x29a56c: 0x0  nop
    ctx->pc = 0x29a56cu;
    // NOP
label_29a570:
    // 0x29a570: 0x45030043  bc1tl       . + 4 + (0x43 << 2)
label_29a574:
    if (ctx->pc == 0x29A574u) {
        ctx->pc = 0x29A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A570u;
        // 0x29a574: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A578u;
        goto label_29a578;
    }
    ctx->pc = 0x29A570u;
    {
        const bool branch_taken_0x29a570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a570) {
            ctx->pc = 0x29A574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A570u;
            // 0x29a574: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A680u;
            goto label_29a680;
        }
    }
    ctx->pc = 0x29A578u;
label_29a578:
    // 0x29a578: 0xc087502  jal         func_21D408
label_29a57c:
    if (ctx->pc == 0x29A57Cu) {
        ctx->pc = 0x29A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A578u;
        // 0x29a57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A580u;
        goto label_29a580;
    }
    ctx->pc = 0x29A578u;
    SET_GPR_U32(ctx, 31, 0x29A580u);
    ctx->pc = 0x29A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A578u;
    // 0x29a57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29A578u, 0x29A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A580u;
label_29a580:
    // 0x29a580: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a584:
    // 0x29a584: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x29a584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_29a588:
    // 0x29a588: 0xc0a408c  jal         func_290230
label_29a58c:
    if (ctx->pc == 0x29A58Cu) {
        ctx->pc = 0x29A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A588u;
        // 0x29a58c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A590u;
        goto label_29a590;
    }
    ctx->pc = 0x29A588u;
    SET_GPR_U32(ctx, 31, 0x29A590u);
    ctx->pc = 0x29A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A588u;
    // 0x29a58c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x29A588u, 0x29A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A590u;
label_29a590:
    // 0x29a590: 0x5453003b  bnel        $v0, $s3, . + 4 + (0x3B << 2)
label_29a594:
    if (ctx->pc == 0x29A594u) {
        ctx->pc = 0x29A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A590u;
        // 0x29a594: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A598u;
        goto label_29a598;
    }
    ctx->pc = 0x29A590u;
    {
        const bool branch_taken_0x29a590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x29a590) {
            ctx->pc = 0x29A594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A590u;
            // 0x29a594: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A680u;
            goto label_29a680;
        }
    }
    ctx->pc = 0x29A598u;
label_29a598:
    // 0x29a598: 0xc088edc  jal         func_223B70
label_29a59c:
    if (ctx->pc == 0x29A59Cu) {
        ctx->pc = 0x29A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A598u;
        // 0x29a59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A5A0u;
        goto label_29a5a0;
    }
    ctx->pc = 0x29A598u;
    SET_GPR_U32(ctx, 31, 0x29A5A0u);
    ctx->pc = 0x29A59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A598u;
    // 0x29a59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x29A598u, 0x29A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5A0u;
label_29a5a0:
    // 0x29a5a0: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
label_29a5a4:
    if (ctx->pc == 0x29A5A4u) {
        ctx->pc = 0x29A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5A0u;
        // 0x29a5a4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A5A8u;
        goto label_29a5a8;
    }
    ctx->pc = 0x29A5A0u;
    {
        const bool branch_taken_0x29a5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a5a0) {
            ctx->pc = 0x29A5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A5A0u;
            // 0x29a5a4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A680u;
            goto label_29a680;
        }
    }
    ctx->pc = 0x29A5A8u;
label_29a5a8:
    // 0x29a5a8: 0xc089f76  jal         func_227DD8
label_29a5ac:
    if (ctx->pc == 0x29A5ACu) {
        ctx->pc = 0x29A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5A8u;
        // 0x29a5ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A5B0u;
        goto label_29a5b0;
    }
    ctx->pc = 0x29A5A8u;
    SET_GPR_U32(ctx, 31, 0x29A5B0u);
    ctx->pc = 0x29A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A5A8u;
    // 0x29a5ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x29A5A8u, 0x29A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5B0u;
label_29a5b0:
    // 0x29a5b0: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
label_29a5b4:
    if (ctx->pc == 0x29A5B4u) {
        ctx->pc = 0x29A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5B0u;
        // 0x29a5b4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A5B8u;
        goto label_29a5b8;
    }
    ctx->pc = 0x29A5B0u;
    {
        const bool branch_taken_0x29a5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a5b0) {
            ctx->pc = 0x29A5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A5B0u;
            // 0x29a5b4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A680u;
            goto label_29a680;
        }
    }
    ctx->pc = 0x29A5B8u;
label_29a5b8:
    // 0x29a5b8: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x29a5b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_29a5bc:
    // 0x29a5bc: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x29a5bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29a5c0:
    // 0x29a5c0: 0x14530010  bne         $v0, $s3, . + 4 + (0x10 << 2)
label_29a5c4:
    if (ctx->pc == 0x29A5C4u) {
        ctx->pc = 0x29A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5C0u;
        // 0x29a5c4: 0x8fa20280  lw          $v0, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A5C8u;
        goto label_29a5c8;
    }
    ctx->pc = 0x29A5C0u;
    {
        const bool branch_taken_0x29a5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x29A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5C0u;
        // 0x29a5c4: 0x8fa20280  lw          $v0, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a5c0) {
            ctx->pc = 0x29A604u;
            goto label_29a604;
        }
    }
    ctx->pc = 0x29A5C8u;
label_29a5c8:
    // 0x29a5c8: 0xc0a36c2  jal         func_28DB08
label_29a5cc:
    if (ctx->pc == 0x29A5CCu) {
        ctx->pc = 0x29A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5C8u;
        // 0x29a5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A5D0u;
        goto label_29a5d0;
    }
    ctx->pc = 0x29A5C8u;
    SET_GPR_U32(ctx, 31, 0x29A5D0u);
    ctx->pc = 0x29A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A5C8u;
    // 0x29a5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x29A5C8u, 0x29A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5D0u;
label_29a5d0:
    // 0x29a5d0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x29a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_29a5d4:
    // 0x29a5d4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x29a5d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_29a5d8:
    // 0x29a5d8: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x29a5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_29a5dc:
    // 0x29a5dc: 0xa0f809  jalr        $a1
label_29a5e0:
    if (ctx->pc == 0x29A5E0u) {
        ctx->pc = 0x29A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5DCu;
        // 0x29a5e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A5E4u;
        goto label_29a5e4;
    }
    ctx->pc = 0x29A5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x29A5E4u);
        ctx->pc = 0x29A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5DCu;
        // 0x29a5e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A5DCu, 0x29A5E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A5E4u;
label_29a5e4:
    // 0x29a5e4: 0x14530007  bne         $v0, $s3, . + 4 + (0x7 << 2)
label_29a5e8:
    if (ctx->pc == 0x29A5E8u) {
        ctx->pc = 0x29A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5E4u;
        // 0x29a5e8: 0x8fa20280  lw          $v0, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A5ECu;
        goto label_29a5ec;
    }
    ctx->pc = 0x29A5E4u;
    {
        const bool branch_taken_0x29a5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x29A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5E4u;
        // 0x29a5e8: 0x8fa20280  lw          $v0, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a5e4) {
            ctx->pc = 0x29A604u;
            goto label_29a604;
        }
    }
    ctx->pc = 0x29A5ECu;
label_29a5ec:
    // 0x29a5ec: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x29a5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29a5f0:
    // 0x29a5f0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x29a5f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29a5f4:
    // 0x29a5f4: 0x0  nop
    ctx->pc = 0x29a5f4u;
    // NOP
label_29a5f8:
    // 0x29a5f8: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_29a5fc:
    if (ctx->pc == 0x29A5FCu) {
        ctx->pc = 0x29A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5F8u;
        // 0x29a5fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A600u;
        goto label_29a600;
    }
    ctx->pc = 0x29A5F8u;
    {
        const bool branch_taken_0x29a5f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5F8u;
        // 0x29a5fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a5f8) {
            ctx->pc = 0x29A690u;
            goto label_29a690;
        }
    }
    ctx->pc = 0x29A600u;
label_29a600:
    // 0x29a600: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x29a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_29a604:
    // 0x29a604: 0x54530022  bnel        $v0, $s3, . + 4 + (0x22 << 2)
label_29a608:
    if (ctx->pc == 0x29A608u) {
        ctx->pc = 0x29A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A604u;
        // 0x29a608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A60Cu;
        goto label_29a60c;
    }
    ctx->pc = 0x29A604u;
    {
        const bool branch_taken_0x29a604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x29a604) {
            ctx->pc = 0x29A608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A604u;
            // 0x29a608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A690u;
            goto label_29a690;
        }
    }
    ctx->pc = 0x29A60Cu;
label_29a60c:
    // 0x29a60c: 0x7ba301e0  lq          $v1, 0x1E0($sp)
    ctx->pc = 0x29a60cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_29a610:
    // 0x29a610: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29a610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29a614:
    // 0x29a614: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x29a614u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_29a618:
    // 0x29a618: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29a618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29a61c:
    // 0x29a61c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29a61cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29a620:
    // 0x29a620: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29a620u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_29a624:
    // 0x29a624: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29a624u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29a628:
    // 0x29a628: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29a628u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_29a62c:
    // 0x29a62c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x29a62cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_29a630:
    // 0x29a630: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x29a630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_29a634:
    // 0x29a634: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29a634u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29a638:
    // 0x29a638: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x29a638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29a63c:
    // 0x29a63c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x29a63cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29a640:
    // 0x29a640: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x29a640u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29a644:
    // 0x29a644: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x29a644u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_29a648:
    // 0x29a648: 0x4a0003bf  vwaitq
    ctx->pc = 0x29a648u;
    // VWAITQ (Q already resolved in this runtime)
label_29a64c:
    // 0x29a64c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x29a64cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_29a650:
    // 0x29a650: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x29a650u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_29a654:
    // 0x29a654: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x29a654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
label_29a658:
    // 0x29a658: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x29a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
label_29a65c:
    // 0x29a65c: 0x27a70240  addiu       $a3, $sp, 0x240
    ctx->pc = 0x29a65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_29a660:
    // 0x29a660: 0x7fa30240  sq          $v1, 0x240($sp)
    ctx->pc = 0x29a660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 3));
label_29a664:
    // 0x29a664: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x29a664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
label_29a668:
    // 0x29a668: 0x7fa30270  sq          $v1, 0x270($sp)
    ctx->pc = 0x29a668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 3));
label_29a66c:
    // 0x29a66c: 0xc0a2892  jal         func_28A248
label_29a670:
    if (ctx->pc == 0x29A670u) {
        ctx->pc = 0x29A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A66Cu;
        // 0x29a670: 0x7fa30260  sq          $v1, 0x260($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A674u;
        goto label_29a674;
    }
    ctx->pc = 0x29A66Cu;
    SET_GPR_U32(ctx, 31, 0x29A674u);
    ctx->pc = 0x29A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A66Cu;
    // 0x29a670: 0x7fa30260  sq          $v1, 0x260($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A248u, 0x29A66Cu, 0x29A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A674u;
label_29a674:
    // 0x29a674: 0x10000006  b           . + 4 + (0x6 << 2)
label_29a678:
    if (ctx->pc == 0x29A678u) {
        ctx->pc = 0x29A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A674u;
        // 0x29a678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A67Cu;
        goto label_29a67c;
    }
    ctx->pc = 0x29A674u;
    {
        const bool branch_taken_0x29a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A674u;
        // 0x29a678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a674) {
            ctx->pc = 0x29A690u;
            goto label_29a690;
        }
    }
    ctx->pc = 0x29A67Cu;
label_29a67c:
    // 0x29a67c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x29a67cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_29a680:
    // 0x29a680: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x29a680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_29a684:
    // 0x29a684: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
label_29a688:
    if (ctx->pc == 0x29A688u) {
        ctx->pc = 0x29A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A684u;
        // 0x29a688: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A68Cu;
        goto label_29a68c;
    }
    ctx->pc = 0x29A684u;
    {
        const bool branch_taken_0x29a684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A684u;
        // 0x29a688: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a684) {
            ctx->pc = 0x29A4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a4e8;
        }
    }
    ctx->pc = 0x29A68Cu;
label_29a68c:
    // 0x29a68c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a690:
    // 0x29a690: 0x7bb00320  lq          $s0, 0x320($sp)
    ctx->pc = 0x29a690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_29a694:
    // 0x29a694: 0x7bb10310  lq          $s1, 0x310($sp)
    ctx->pc = 0x29a694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_29a698:
    // 0x29a698: 0x7bb20300  lq          $s2, 0x300($sp)
    ctx->pc = 0x29a698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_29a69c:
    // 0x29a69c: 0x7bb302f0  lq          $s3, 0x2F0($sp)
    ctx->pc = 0x29a69cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_29a6a0:
    // 0x29a6a0: 0x7bb402e0  lq          $s4, 0x2E0($sp)
    ctx->pc = 0x29a6a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_29a6a4:
    // 0x29a6a4: 0x7bb502d0  lq          $s5, 0x2D0($sp)
    ctx->pc = 0x29a6a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_29a6a8:
    // 0x29a6a8: 0x7bb602c0  lq          $s6, 0x2C0($sp)
    ctx->pc = 0x29a6a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_29a6ac:
    // 0x29a6ac: 0x7bb702b0  lq          $s7, 0x2B0($sp)
    ctx->pc = 0x29a6acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_29a6b0:
    // 0x29a6b0: 0x7bbe02a0  lq          $fp, 0x2A0($sp)
    ctx->pc = 0x29a6b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_29a6b4:
    // 0x29a6b4: 0xdfbf0290  ld          $ra, 0x290($sp)
    ctx->pc = 0x29a6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_29a6b8:
    // 0x29a6b8: 0xc7b50338  lwc1        $f21, 0x338($sp)
    ctx->pc = 0x29a6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_29a6bc:
    // 0x29a6bc: 0xc7b40330  lwc1        $f20, 0x330($sp)
    ctx->pc = 0x29a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29a6c0:
    // 0x29a6c0: 0x3e00008  jr          $ra
label_29a6c4:
    if (ctx->pc == 0x29A6C4u) {
        ctx->pc = 0x29A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6C0u;
        // 0x29a6c4: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A6C8u;
        goto label_fallthrough_0x29a6c0;
    }
    ctx->pc = 0x29A6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6C0u;
        // 0x29a6c4: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29a6c0:
    ctx->pc = 0x29A6C8u;
}
