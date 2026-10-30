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

// Function: sub_002EF2C0
// Address: 0x2ef2c0 - 0x2ef7a8
void sub_002EF2C0_0x2ef2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF2C0_0x2ef2c0");
#endif

    switch (ctx->pc) {
        case 0x2ef2c0u: goto label_2ef2c0;
        case 0x2ef2c4u: goto label_2ef2c4;
        case 0x2ef2c8u: goto label_2ef2c8;
        case 0x2ef2ccu: goto label_2ef2cc;
        case 0x2ef2d0u: goto label_2ef2d0;
        case 0x2ef2d4u: goto label_2ef2d4;
        case 0x2ef2d8u: goto label_2ef2d8;
        case 0x2ef2dcu: goto label_2ef2dc;
        case 0x2ef2e0u: goto label_2ef2e0;
        case 0x2ef2e4u: goto label_2ef2e4;
        case 0x2ef2e8u: goto label_2ef2e8;
        case 0x2ef2ecu: goto label_2ef2ec;
        case 0x2ef2f0u: goto label_2ef2f0;
        case 0x2ef2f4u: goto label_2ef2f4;
        case 0x2ef2f8u: goto label_2ef2f8;
        case 0x2ef2fcu: goto label_2ef2fc;
        case 0x2ef300u: goto label_2ef300;
        case 0x2ef304u: goto label_2ef304;
        case 0x2ef308u: goto label_2ef308;
        case 0x2ef30cu: goto label_2ef30c;
        case 0x2ef310u: goto label_2ef310;
        case 0x2ef314u: goto label_2ef314;
        case 0x2ef318u: goto label_2ef318;
        case 0x2ef31cu: goto label_2ef31c;
        case 0x2ef320u: goto label_2ef320;
        case 0x2ef324u: goto label_2ef324;
        case 0x2ef328u: goto label_2ef328;
        case 0x2ef32cu: goto label_2ef32c;
        case 0x2ef330u: goto label_2ef330;
        case 0x2ef334u: goto label_2ef334;
        case 0x2ef338u: goto label_2ef338;
        case 0x2ef33cu: goto label_2ef33c;
        case 0x2ef340u: goto label_2ef340;
        case 0x2ef344u: goto label_2ef344;
        case 0x2ef348u: goto label_2ef348;
        case 0x2ef34cu: goto label_2ef34c;
        case 0x2ef350u: goto label_2ef350;
        case 0x2ef354u: goto label_2ef354;
        case 0x2ef358u: goto label_2ef358;
        case 0x2ef35cu: goto label_2ef35c;
        case 0x2ef360u: goto label_2ef360;
        case 0x2ef364u: goto label_2ef364;
        case 0x2ef368u: goto label_2ef368;
        case 0x2ef36cu: goto label_2ef36c;
        case 0x2ef370u: goto label_2ef370;
        case 0x2ef374u: goto label_2ef374;
        case 0x2ef378u: goto label_2ef378;
        case 0x2ef37cu: goto label_2ef37c;
        case 0x2ef380u: goto label_2ef380;
        case 0x2ef384u: goto label_2ef384;
        case 0x2ef388u: goto label_2ef388;
        case 0x2ef38cu: goto label_2ef38c;
        case 0x2ef390u: goto label_2ef390;
        case 0x2ef394u: goto label_2ef394;
        case 0x2ef398u: goto label_2ef398;
        case 0x2ef39cu: goto label_2ef39c;
        case 0x2ef3a0u: goto label_2ef3a0;
        case 0x2ef3a4u: goto label_2ef3a4;
        case 0x2ef3a8u: goto label_2ef3a8;
        case 0x2ef3acu: goto label_2ef3ac;
        case 0x2ef3b0u: goto label_2ef3b0;
        case 0x2ef3b4u: goto label_2ef3b4;
        case 0x2ef3b8u: goto label_2ef3b8;
        case 0x2ef3bcu: goto label_2ef3bc;
        case 0x2ef3c0u: goto label_2ef3c0;
        case 0x2ef3c4u: goto label_2ef3c4;
        case 0x2ef3c8u: goto label_2ef3c8;
        case 0x2ef3ccu: goto label_2ef3cc;
        case 0x2ef3d0u: goto label_2ef3d0;
        case 0x2ef3d4u: goto label_2ef3d4;
        case 0x2ef3d8u: goto label_2ef3d8;
        case 0x2ef3dcu: goto label_2ef3dc;
        case 0x2ef3e0u: goto label_2ef3e0;
        case 0x2ef3e4u: goto label_2ef3e4;
        case 0x2ef3e8u: goto label_2ef3e8;
        case 0x2ef3ecu: goto label_2ef3ec;
        case 0x2ef3f0u: goto label_2ef3f0;
        case 0x2ef3f4u: goto label_2ef3f4;
        case 0x2ef3f8u: goto label_2ef3f8;
        case 0x2ef3fcu: goto label_2ef3fc;
        case 0x2ef400u: goto label_2ef400;
        case 0x2ef404u: goto label_2ef404;
        case 0x2ef408u: goto label_2ef408;
        case 0x2ef40cu: goto label_2ef40c;
        case 0x2ef410u: goto label_2ef410;
        case 0x2ef414u: goto label_2ef414;
        case 0x2ef418u: goto label_2ef418;
        case 0x2ef41cu: goto label_2ef41c;
        case 0x2ef420u: goto label_2ef420;
        case 0x2ef424u: goto label_2ef424;
        case 0x2ef428u: goto label_2ef428;
        case 0x2ef42cu: goto label_2ef42c;
        case 0x2ef430u: goto label_2ef430;
        case 0x2ef434u: goto label_2ef434;
        case 0x2ef438u: goto label_2ef438;
        case 0x2ef43cu: goto label_2ef43c;
        case 0x2ef440u: goto label_2ef440;
        case 0x2ef444u: goto label_2ef444;
        case 0x2ef448u: goto label_2ef448;
        case 0x2ef44cu: goto label_2ef44c;
        case 0x2ef450u: goto label_2ef450;
        case 0x2ef454u: goto label_2ef454;
        case 0x2ef458u: goto label_2ef458;
        case 0x2ef45cu: goto label_2ef45c;
        case 0x2ef460u: goto label_2ef460;
        case 0x2ef464u: goto label_2ef464;
        case 0x2ef468u: goto label_2ef468;
        case 0x2ef46cu: goto label_2ef46c;
        case 0x2ef470u: goto label_2ef470;
        case 0x2ef474u: goto label_2ef474;
        case 0x2ef478u: goto label_2ef478;
        case 0x2ef47cu: goto label_2ef47c;
        case 0x2ef480u: goto label_2ef480;
        case 0x2ef484u: goto label_2ef484;
        case 0x2ef488u: goto label_2ef488;
        case 0x2ef48cu: goto label_2ef48c;
        case 0x2ef490u: goto label_2ef490;
        case 0x2ef494u: goto label_2ef494;
        case 0x2ef498u: goto label_2ef498;
        case 0x2ef49cu: goto label_2ef49c;
        case 0x2ef4a0u: goto label_2ef4a0;
        case 0x2ef4a4u: goto label_2ef4a4;
        case 0x2ef4a8u: goto label_2ef4a8;
        case 0x2ef4acu: goto label_2ef4ac;
        case 0x2ef4b0u: goto label_2ef4b0;
        case 0x2ef4b4u: goto label_2ef4b4;
        case 0x2ef4b8u: goto label_2ef4b8;
        case 0x2ef4bcu: goto label_2ef4bc;
        case 0x2ef4c0u: goto label_2ef4c0;
        case 0x2ef4c4u: goto label_2ef4c4;
        case 0x2ef4c8u: goto label_2ef4c8;
        case 0x2ef4ccu: goto label_2ef4cc;
        case 0x2ef4d0u: goto label_2ef4d0;
        case 0x2ef4d4u: goto label_2ef4d4;
        case 0x2ef4d8u: goto label_2ef4d8;
        case 0x2ef4dcu: goto label_2ef4dc;
        case 0x2ef4e0u: goto label_2ef4e0;
        case 0x2ef4e4u: goto label_2ef4e4;
        case 0x2ef4e8u: goto label_2ef4e8;
        case 0x2ef4ecu: goto label_2ef4ec;
        case 0x2ef4f0u: goto label_2ef4f0;
        case 0x2ef4f4u: goto label_2ef4f4;
        case 0x2ef4f8u: goto label_2ef4f8;
        case 0x2ef4fcu: goto label_2ef4fc;
        case 0x2ef500u: goto label_2ef500;
        case 0x2ef504u: goto label_2ef504;
        case 0x2ef508u: goto label_2ef508;
        case 0x2ef50cu: goto label_2ef50c;
        case 0x2ef510u: goto label_2ef510;
        case 0x2ef514u: goto label_2ef514;
        case 0x2ef518u: goto label_2ef518;
        case 0x2ef51cu: goto label_2ef51c;
        case 0x2ef520u: goto label_2ef520;
        case 0x2ef524u: goto label_2ef524;
        case 0x2ef528u: goto label_2ef528;
        case 0x2ef52cu: goto label_2ef52c;
        case 0x2ef530u: goto label_2ef530;
        case 0x2ef534u: goto label_2ef534;
        case 0x2ef538u: goto label_2ef538;
        case 0x2ef53cu: goto label_2ef53c;
        case 0x2ef540u: goto label_2ef540;
        case 0x2ef544u: goto label_2ef544;
        case 0x2ef548u: goto label_2ef548;
        case 0x2ef54cu: goto label_2ef54c;
        case 0x2ef550u: goto label_2ef550;
        case 0x2ef554u: goto label_2ef554;
        case 0x2ef558u: goto label_2ef558;
        case 0x2ef55cu: goto label_2ef55c;
        case 0x2ef560u: goto label_2ef560;
        case 0x2ef564u: goto label_2ef564;
        case 0x2ef568u: goto label_2ef568;
        case 0x2ef56cu: goto label_2ef56c;
        case 0x2ef570u: goto label_2ef570;
        case 0x2ef574u: goto label_2ef574;
        case 0x2ef578u: goto label_2ef578;
        case 0x2ef57cu: goto label_2ef57c;
        case 0x2ef580u: goto label_2ef580;
        case 0x2ef584u: goto label_2ef584;
        case 0x2ef588u: goto label_2ef588;
        case 0x2ef58cu: goto label_2ef58c;
        case 0x2ef590u: goto label_2ef590;
        case 0x2ef594u: goto label_2ef594;
        case 0x2ef598u: goto label_2ef598;
        case 0x2ef59cu: goto label_2ef59c;
        case 0x2ef5a0u: goto label_2ef5a0;
        case 0x2ef5a4u: goto label_2ef5a4;
        case 0x2ef5a8u: goto label_2ef5a8;
        case 0x2ef5acu: goto label_2ef5ac;
        case 0x2ef5b0u: goto label_2ef5b0;
        case 0x2ef5b4u: goto label_2ef5b4;
        case 0x2ef5b8u: goto label_2ef5b8;
        case 0x2ef5bcu: goto label_2ef5bc;
        case 0x2ef5c0u: goto label_2ef5c0;
        case 0x2ef5c4u: goto label_2ef5c4;
        case 0x2ef5c8u: goto label_2ef5c8;
        case 0x2ef5ccu: goto label_2ef5cc;
        case 0x2ef5d0u: goto label_2ef5d0;
        case 0x2ef5d4u: goto label_2ef5d4;
        case 0x2ef5d8u: goto label_2ef5d8;
        case 0x2ef5dcu: goto label_2ef5dc;
        case 0x2ef5e0u: goto label_2ef5e0;
        case 0x2ef5e4u: goto label_2ef5e4;
        case 0x2ef5e8u: goto label_2ef5e8;
        case 0x2ef5ecu: goto label_2ef5ec;
        case 0x2ef5f0u: goto label_2ef5f0;
        case 0x2ef5f4u: goto label_2ef5f4;
        case 0x2ef5f8u: goto label_2ef5f8;
        case 0x2ef5fcu: goto label_2ef5fc;
        case 0x2ef600u: goto label_2ef600;
        case 0x2ef604u: goto label_2ef604;
        case 0x2ef608u: goto label_2ef608;
        case 0x2ef60cu: goto label_2ef60c;
        case 0x2ef610u: goto label_2ef610;
        case 0x2ef614u: goto label_2ef614;
        case 0x2ef618u: goto label_2ef618;
        case 0x2ef61cu: goto label_2ef61c;
        case 0x2ef620u: goto label_2ef620;
        case 0x2ef624u: goto label_2ef624;
        case 0x2ef628u: goto label_2ef628;
        case 0x2ef62cu: goto label_2ef62c;
        case 0x2ef630u: goto label_2ef630;
        case 0x2ef634u: goto label_2ef634;
        case 0x2ef638u: goto label_2ef638;
        case 0x2ef63cu: goto label_2ef63c;
        case 0x2ef640u: goto label_2ef640;
        case 0x2ef644u: goto label_2ef644;
        case 0x2ef648u: goto label_2ef648;
        case 0x2ef64cu: goto label_2ef64c;
        case 0x2ef650u: goto label_2ef650;
        case 0x2ef654u: goto label_2ef654;
        case 0x2ef658u: goto label_2ef658;
        case 0x2ef65cu: goto label_2ef65c;
        case 0x2ef660u: goto label_2ef660;
        case 0x2ef664u: goto label_2ef664;
        case 0x2ef668u: goto label_2ef668;
        case 0x2ef66cu: goto label_2ef66c;
        case 0x2ef670u: goto label_2ef670;
        case 0x2ef674u: goto label_2ef674;
        case 0x2ef678u: goto label_2ef678;
        case 0x2ef67cu: goto label_2ef67c;
        case 0x2ef680u: goto label_2ef680;
        case 0x2ef684u: goto label_2ef684;
        case 0x2ef688u: goto label_2ef688;
        case 0x2ef68cu: goto label_2ef68c;
        case 0x2ef690u: goto label_2ef690;
        case 0x2ef694u: goto label_2ef694;
        case 0x2ef698u: goto label_2ef698;
        case 0x2ef69cu: goto label_2ef69c;
        case 0x2ef6a0u: goto label_2ef6a0;
        case 0x2ef6a4u: goto label_2ef6a4;
        case 0x2ef6a8u: goto label_2ef6a8;
        case 0x2ef6acu: goto label_2ef6ac;
        case 0x2ef6b0u: goto label_2ef6b0;
        case 0x2ef6b4u: goto label_2ef6b4;
        case 0x2ef6b8u: goto label_2ef6b8;
        case 0x2ef6bcu: goto label_2ef6bc;
        case 0x2ef6c0u: goto label_2ef6c0;
        case 0x2ef6c4u: goto label_2ef6c4;
        case 0x2ef6c8u: goto label_2ef6c8;
        case 0x2ef6ccu: goto label_2ef6cc;
        case 0x2ef6d0u: goto label_2ef6d0;
        case 0x2ef6d4u: goto label_2ef6d4;
        case 0x2ef6d8u: goto label_2ef6d8;
        case 0x2ef6dcu: goto label_2ef6dc;
        case 0x2ef6e0u: goto label_2ef6e0;
        case 0x2ef6e4u: goto label_2ef6e4;
        case 0x2ef6e8u: goto label_2ef6e8;
        case 0x2ef6ecu: goto label_2ef6ec;
        case 0x2ef6f0u: goto label_2ef6f0;
        case 0x2ef6f4u: goto label_2ef6f4;
        case 0x2ef6f8u: goto label_2ef6f8;
        case 0x2ef6fcu: goto label_2ef6fc;
        case 0x2ef700u: goto label_2ef700;
        case 0x2ef704u: goto label_2ef704;
        case 0x2ef708u: goto label_2ef708;
        case 0x2ef70cu: goto label_2ef70c;
        case 0x2ef710u: goto label_2ef710;
        case 0x2ef714u: goto label_2ef714;
        case 0x2ef718u: goto label_2ef718;
        case 0x2ef71cu: goto label_2ef71c;
        case 0x2ef720u: goto label_2ef720;
        case 0x2ef724u: goto label_2ef724;
        case 0x2ef728u: goto label_2ef728;
        case 0x2ef72cu: goto label_2ef72c;
        case 0x2ef730u: goto label_2ef730;
        case 0x2ef734u: goto label_2ef734;
        case 0x2ef738u: goto label_2ef738;
        case 0x2ef73cu: goto label_2ef73c;
        case 0x2ef740u: goto label_2ef740;
        case 0x2ef744u: goto label_2ef744;
        case 0x2ef748u: goto label_2ef748;
        case 0x2ef74cu: goto label_2ef74c;
        case 0x2ef750u: goto label_2ef750;
        case 0x2ef754u: goto label_2ef754;
        case 0x2ef758u: goto label_2ef758;
        case 0x2ef75cu: goto label_2ef75c;
        case 0x2ef760u: goto label_2ef760;
        case 0x2ef764u: goto label_2ef764;
        case 0x2ef768u: goto label_2ef768;
        case 0x2ef76cu: goto label_2ef76c;
        case 0x2ef770u: goto label_2ef770;
        case 0x2ef774u: goto label_2ef774;
        case 0x2ef778u: goto label_2ef778;
        case 0x2ef77cu: goto label_2ef77c;
        case 0x2ef780u: goto label_2ef780;
        case 0x2ef784u: goto label_2ef784;
        case 0x2ef788u: goto label_2ef788;
        case 0x2ef78cu: goto label_2ef78c;
        case 0x2ef790u: goto label_2ef790;
        case 0x2ef794u: goto label_2ef794;
        case 0x2ef798u: goto label_2ef798;
        case 0x2ef79cu: goto label_2ef79c;
        case 0x2ef7a0u: goto label_2ef7a0;
        case 0x2ef7a4u: goto label_2ef7a4;
        default: break;
    }

    ctx->pc = 0x2ef2c0u;

label_2ef2c0:
    // 0x2ef2c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ef2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2ef2c4:
    // 0x2ef2c4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2ef2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2ef2c8:
    // 0x2ef2c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ef2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2ef2cc:
    // 0x2ef2cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ef2ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef2d0:
    // 0x2ef2d0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2ef2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2ef2d4:
    // 0x2ef2d4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2ef2d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef2d8:
    // 0x2ef2d8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2ef2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2ef2dc:
    // 0x2ef2dc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2ef2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2ef2e0:
    // 0x2ef2e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ef2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2ef2e4:
    // 0x2ef2e4: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2ef2e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2ef2e8:
    // 0x2ef2e8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2ef2e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2ef2ec:
    // 0x2ef2ec: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2ef2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2ef2f0:
    // 0x2ef2f0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2ef2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef2f4:
    // 0x2ef2f4: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x2ef2f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_2ef2f8:
    // 0x2ef2f8: 0x1c40011c  bgtz        $v0, . + 4 + (0x11C << 2)
label_2ef2fc:
    if (ctx->pc == 0x2EF2FCu) {
        ctx->pc = 0x2EF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2F8u;
        // 0x2ef2fc: 0x8e130000  lw          $s3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF300u;
        goto label_2ef300;
    }
    ctx->pc = 0x2EF2F8u;
    {
        const bool branch_taken_0x2ef2f8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2EF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2F8u;
        // 0x2ef2fc: 0x8e130000  lw          $s3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef2f8) {
            ctx->pc = 0x2EF76Cu;
            goto label_2ef76c;
        }
    }
    ctx->pc = 0x2EF300u;
label_2ef300:
    // 0x2ef300: 0x8e020284  lw          $v0, 0x284($s0)
    ctx->pc = 0x2ef300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
label_2ef304:
    // 0x2ef304: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2ef308:
    if (ctx->pc == 0x2EF308u) {
        ctx->pc = 0x2EF30Cu;
        goto label_2ef30c;
    }
    ctx->pc = 0x2EF304u;
    {
        const bool branch_taken_0x2ef304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef304) {
            ctx->pc = 0x2EF330u;
            goto label_2ef330;
        }
    }
    ctx->pc = 0x2EF30Cu;
label_2ef30c:
    // 0x2ef30c: 0x92420035  lbu         $v0, 0x35($s2)
    ctx->pc = 0x2ef30cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_2ef310:
    // 0x2ef310: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ef310u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef314:
    // 0x2ef314: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ef314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ef318:
    // 0x2ef318: 0x2c63001e  sltiu       $v1, $v1, 0x1E
    ctx->pc = 0x2ef318u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_2ef31c:
    // 0x2ef31c: 0x14600113  bnez        $v1, . + 4 + (0x113 << 2)
label_2ef320:
    if (ctx->pc == 0x2EF320u) {
        ctx->pc = 0x2EF320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF31Cu;
        // 0x2ef320: 0xa2420035  sb          $v0, 0x35($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 53), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF324u;
        goto label_2ef324;
    }
    ctx->pc = 0x2EF31Cu;
    {
        const bool branch_taken_0x2ef31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF31Cu;
        // 0x2ef320: 0xa2420035  sb          $v0, 0x35($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 53), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef31c) {
            ctx->pc = 0x2EF76Cu;
            goto label_2ef76c;
        }
    }
    ctx->pc = 0x2EF324u;
label_2ef324:
    // 0x2ef324: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x2ef324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
label_2ef328:
    // 0x2ef328: 0x10000110  b           . + 4 + (0x110 << 2)
label_2ef32c:
    if (ctx->pc == 0x2EF32Cu) {
        ctx->pc = 0x2EF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF328u;
        // 0x2ef32c: 0xa2400035  sb          $zero, 0x35($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 53), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF330u;
        goto label_2ef330;
    }
    ctx->pc = 0x2EF328u;
    {
        const bool branch_taken_0x2ef328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF328u;
        // 0x2ef32c: 0xa2400035  sb          $zero, 0x35($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 53), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef328) {
            ctx->pc = 0x2EF76Cu;
            goto label_2ef76c;
        }
    }
    ctx->pc = 0x2EF330u;
label_2ef330:
    // 0x2ef330: 0xc0e409a  jal         func_390268
label_2ef334:
    if (ctx->pc == 0x2EF334u) {
        ctx->pc = 0x2EF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF330u;
        // 0x2ef334: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF338u;
        goto label_2ef338;
    }
    ctx->pc = 0x2EF330u;
    SET_GPR_U32(ctx, 31, 0x2EF338u);
    ctx->pc = 0x2EF334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF330u;
    // 0x2ef334: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2EF330u, 0x2EF338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF338u;
label_2ef338:
    // 0x2ef338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef33c:
    // 0x2ef33c: 0xc0a34d6  jal         func_28D358
label_2ef340:
    if (ctx->pc == 0x2EF340u) {
        ctx->pc = 0x2EF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF33Cu;
        // 0x2ef340: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF344u;
        goto label_2ef344;
    }
    ctx->pc = 0x2EF33Cu;
    SET_GPR_U32(ctx, 31, 0x2EF344u);
    ctx->pc = 0x2EF340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF33Cu;
    // 0x2ef340: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2EF33Cu, 0x2EF344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF344u;
label_2ef344:
    // 0x2ef344: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ef344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef348:
    // 0x2ef348: 0x56200019  bnel        $s1, $zero, . + 4 + (0x19 << 2)
label_2ef34c:
    if (ctx->pc == 0x2EF34Cu) {
        ctx->pc = 0x2EF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF348u;
        // 0x2ef34c: 0x8e500020  lw          $s0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF350u;
        goto label_2ef350;
    }
    ctx->pc = 0x2EF348u;
    {
        const bool branch_taken_0x2ef348 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef348) {
            ctx->pc = 0x2EF34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF348u;
            // 0x2ef34c: 0x8e500020  lw          $s0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF3B0u;
            goto label_2ef3b0;
        }
    }
    ctx->pc = 0x2EF350u;
label_2ef350:
    // 0x2ef350: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ef350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ef354:
    // 0x2ef354: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ef354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef358:
    // 0x2ef358: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2ef35c:
    if (ctx->pc == 0x2EF35Cu) {
        ctx->pc = 0x2EF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF358u;
        // 0x2ef35c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF360u;
        goto label_2ef360;
    }
    ctx->pc = 0x2EF358u;
    {
        const bool branch_taken_0x2ef358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef358) {
            ctx->pc = 0x2EF35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF358u;
            // 0x2ef35c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF360u;
            goto label_2ef360;
        }
    }
    ctx->pc = 0x2EF360u;
label_2ef360:
    // 0x2ef360: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2ef360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2ef364:
    // 0x2ef364: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2ef364u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2ef368:
    // 0x2ef368: 0x2010  mfhi        $a0
    ctx->pc = 0x2ef368u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2ef36c:
    // 0x2ef36c: 0x14800100  bnez        $a0, . + 4 + (0x100 << 2)
label_2ef370:
    if (ctx->pc == 0x2EF370u) {
        ctx->pc = 0x2EF370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF36Cu;
        // 0x2ef370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF374u;
        goto label_2ef374;
    }
    ctx->pc = 0x2EF36Cu;
    {
        const bool branch_taken_0x2ef36c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF36Cu;
        // 0x2ef370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef36c) {
            ctx->pc = 0x2EF770u;
            goto label_2ef770;
        }
    }
    ctx->pc = 0x2EF374u;
label_2ef374:
    // 0x2ef374: 0xc0a2fc0  jal         func_28BF00
label_2ef378:
    if (ctx->pc == 0x2EF378u) {
        ctx->pc = 0x2EF378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF374u;
        // 0x2ef378: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF37Cu;
        goto label_2ef37c;
    }
    ctx->pc = 0x2EF374u;
    SET_GPR_U32(ctx, 31, 0x2EF37Cu);
    ctx->pc = 0x2EF378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF374u;
    // 0x2ef378: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2EF374u, 0x2EF37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF37Cu;
label_2ef37c:
    // 0x2ef37c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2ef37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2ef380:
    // 0x2ef380: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ef380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ef384:
    // 0x2ef384: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2ef384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2ef388:
    // 0x2ef388: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ef388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ef38c:
    // 0x2ef38c: 0x24a5c0d8  addiu       $a1, $a1, -0x3F28
    ctx->pc = 0x2ef38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951128));
label_2ef390:
    // 0x2ef390: 0xc0a72ee  jal         func_29CBB8
label_2ef394:
    if (ctx->pc == 0x2EF394u) {
        ctx->pc = 0x2EF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF390u;
        // 0x2ef394: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF398u;
        goto label_2ef398;
    }
    ctx->pc = 0x2EF390u;
    SET_GPR_U32(ctx, 31, 0x2EF398u);
    ctx->pc = 0x2EF394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF390u;
    // 0x2ef394: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CBB8u, 0x2EF390u, 0x2EF398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF398u;
label_2ef398:
    // 0x2ef398: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ef398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef39c:
    // 0x2ef39c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ef39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef3a0:
    // 0x2ef3a0: 0xc0a33f8  jal         func_28CFE0
label_2ef3a4:
    if (ctx->pc == 0x2EF3A4u) {
        ctx->pc = 0x2EF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3A0u;
        // 0x2ef3a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3A8u;
        goto label_2ef3a8;
    }
    ctx->pc = 0x2EF3A0u;
    SET_GPR_U32(ctx, 31, 0x2EF3A8u);
    ctx->pc = 0x2EF3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF3A0u;
    // 0x2ef3a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2EF3A0u, 0x2EF3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF3A8u;
label_2ef3a8:
    // 0x2ef3a8: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_2ef3ac:
    if (ctx->pc == 0x2EF3ACu) {
        ctx->pc = 0x2EF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3A8u;
        // 0x2ef3ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3B0u;
        goto label_2ef3b0;
    }
    ctx->pc = 0x2EF3A8u;
    {
        const bool branch_taken_0x2ef3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3A8u;
        // 0x2ef3ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3a8) {
            ctx->pc = 0x2EF770u;
            goto label_2ef770;
        }
    }
    ctx->pc = 0x2EF3B0u;
label_2ef3b0:
    // 0x2ef3b0: 0x1600003a  bnez        $s0, . + 4 + (0x3A << 2)
label_2ef3b4:
    if (ctx->pc == 0x2EF3B4u) {
        ctx->pc = 0x2EF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3B0u;
        // 0x2ef3b4: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3B8u;
        goto label_2ef3b8;
    }
    ctx->pc = 0x2EF3B0u;
    {
        const bool branch_taken_0x2ef3b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3B0u;
        // 0x2ef3b4: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3b0) {
            ctx->pc = 0x2EF49Cu;
            goto label_2ef49c;
        }
    }
    ctx->pc = 0x2EF3B8u;
label_2ef3b8:
    // 0x2ef3b8: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2ef3b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2ef3bc:
    // 0x2ef3bc: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2ef3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2ef3c0:
    // 0x2ef3c0: 0x26540010  addiu       $s4, $s2, 0x10
    ctx->pc = 0x2ef3c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2ef3c4:
    // 0x2ef3c4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ef3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2ef3c8:
    // 0x2ef3c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ef3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ef3cc:
    // 0x2ef3cc: 0xc0cdb38  jal         func_336CE0
label_2ef3d0:
    if (ctx->pc == 0x2EF3D0u) {
        ctx->pc = 0x2EF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3CCu;
        // 0x2ef3d0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3D4u;
        goto label_2ef3d4;
    }
    ctx->pc = 0x2EF3CCu;
    SET_GPR_U32(ctx, 31, 0x2EF3D4u);
    ctx->pc = 0x2EF3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF3CCu;
    // 0x2ef3d0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2EF3CCu, 0x2EF3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF3D4u;
label_2ef3d4:
    // 0x2ef3d4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2ef3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2ef3d8:
    // 0x2ef3d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ef3d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ef3dc:
    // 0x2ef3dc: 0x0  nop
    ctx->pc = 0x2ef3dcu;
    // NOP
label_2ef3e0:
    // 0x2ef3e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ef3e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ef3e4:
    // 0x2ef3e4: 0x0  nop
    ctx->pc = 0x2ef3e4u;
    // NOP
label_2ef3e8:
    // 0x2ef3e8: 0x450200e0  bc1fl       . + 4 + (0xE0 << 2)
label_2ef3ec:
    if (ctx->pc == 0x2EF3ECu) {
        ctx->pc = 0x2EF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3E8u;
        // 0x2ef3ec: 0xae550020  sw          $s5, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3F0u;
        goto label_2ef3f0;
    }
    ctx->pc = 0x2EF3E8u;
    {
        const bool branch_taken_0x2ef3e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ef3e8) {
            ctx->pc = 0x2EF3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF3E8u;
            // 0x2ef3ec: 0xae550020  sw          $s5, 0x20($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF76Cu;
            goto label_2ef76c;
        }
    }
    ctx->pc = 0x2EF3F0u;
label_2ef3f0:
    // 0x2ef3f0: 0xc08bfa0  jal         func_22FE80
label_2ef3f4:
    if (ctx->pc == 0x2EF3F4u) {
        ctx->pc = 0x2EF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3F0u;
        // 0x2ef3f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF3F8u;
        goto label_2ef3f8;
    }
    ctx->pc = 0x2EF3F0u;
    SET_GPR_U32(ctx, 31, 0x2EF3F8u);
    ctx->pc = 0x2EF3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF3F0u;
    // 0x2ef3f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2EF3F0u, 0x2EF3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF3F8u;
label_2ef3f8:
    // 0x2ef3f8: 0x92620333  lbu         $v0, 0x333($s3)
    ctx->pc = 0x2ef3f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 819)));
label_2ef3fc:
    // 0x2ef3fc: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2ef400:
    if (ctx->pc == 0x2EF400u) {
        ctx->pc = 0x2EF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3FCu;
        // 0x2ef400: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF404u;
        goto label_2ef404;
    }
    ctx->pc = 0x2EF3FCu;
    {
        const bool branch_taken_0x2ef3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef3fc) {
            ctx->pc = 0x2EF400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF3FCu;
            // 0x2ef400: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF460u;
            goto label_2ef460;
        }
    }
    ctx->pc = 0x2EF404u;
label_2ef404:
    // 0x2ef404: 0xc0a367c  jal         func_28D9F0
label_2ef408:
    if (ctx->pc == 0x2EF408u) {
        ctx->pc = 0x2EF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF404u;
        // 0x2ef408: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF40Cu;
        goto label_2ef40c;
    }
    ctx->pc = 0x2EF404u;
    SET_GPR_U32(ctx, 31, 0x2EF40Cu);
    ctx->pc = 0x2EF408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF404u;
    // 0x2ef408: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EF404u, 0x2EF40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF40Cu;
label_2ef40c:
    // 0x2ef40c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ef40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef410:
    // 0x2ef410: 0x120000d7  beqz        $s0, . + 4 + (0xD7 << 2)
label_2ef414:
    if (ctx->pc == 0x2EF414u) {
        ctx->pc = 0x2EF414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF410u;
        // 0x2ef414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF418u;
        goto label_2ef418;
    }
    ctx->pc = 0x2EF410u;
    {
        const bool branch_taken_0x2ef410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF410u;
        // 0x2ef414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef410) {
            ctx->pc = 0x2EF770u;
            goto label_2ef770;
        }
    }
    ctx->pc = 0x2EF418u;
label_2ef418:
    // 0x2ef418: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ef418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef41c:
    // 0x2ef41c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ef41cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ef420:
    // 0x2ef420: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ef420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ef424:
    // 0x2ef424: 0x40f809  jalr        $v0
label_2ef428:
    if (ctx->pc == 0x2EF428u) {
        ctx->pc = 0x2EF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF424u;
        // 0x2ef428: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF42Cu;
        goto label_2ef42c;
    }
    ctx->pc = 0x2EF424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EF42Cu);
        ctx->pc = 0x2EF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF424u;
        // 0x2ef428: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF424u, 0x2EF42Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF42Cu;
label_2ef42c:
    // 0x2ef42c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ef42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef430:
    // 0x2ef430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef434:
    // 0x2ef434: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ef434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2ef438:
    // 0x2ef438: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ef438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ef43c:
    // 0x2ef43c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ef43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ef440:
    // 0x2ef440: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2ef440u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef444:
    // 0x2ef444: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ef444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ef448:
    // 0x2ef448: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ef448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef44c:
    // 0x2ef44c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ef44cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef450:
    // 0x2ef450: 0xc0bee7a  jal         func_2FB9E8
label_2ef454:
    if (ctx->pc == 0x2EF454u) {
        ctx->pc = 0x2EF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF450u;
        // 0x2ef454: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF458u;
        goto label_2ef458;
    }
    ctx->pc = 0x2EF450u;
    SET_GPR_U32(ctx, 31, 0x2EF458u);
    ctx->pc = 0x2EF454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF450u;
    // 0x2ef454: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2EF450u, 0x2EF458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF458u;
label_2ef458:
    // 0x2ef458: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_2ef45c:
    if (ctx->pc == 0x2EF45Cu) {
        ctx->pc = 0x2EF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF458u;
        // 0x2ef45c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF460u;
        goto label_2ef460;
    }
    ctx->pc = 0x2EF458u;
    {
        const bool branch_taken_0x2ef458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF458u;
        // 0x2ef45c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef458) {
            ctx->pc = 0x2EF770u;
            goto label_2ef770;
        }
    }
    ctx->pc = 0x2EF460u;
label_2ef460:
    // 0x2ef460: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ef460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ef464:
    // 0x2ef464: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2ef464u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2ef468:
    // 0x2ef468: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2ef468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2ef46c:
    // 0x2ef46c: 0x60f809  jalr        $v1
label_2ef470:
    if (ctx->pc == 0x2EF470u) {
        ctx->pc = 0x2EF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF46Cu;
        // 0x2ef470: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF474u;
        goto label_2ef474;
    }
    ctx->pc = 0x2EF46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF474u);
        ctx->pc = 0x2EF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF46Cu;
        // 0x2ef470: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF46Cu, 0x2EF474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF474u;
label_2ef474:
    // 0x2ef474: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x2ef474u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_2ef478:
    // 0x2ef478: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ef478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ef47c:
    // 0x2ef47c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2ef47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2ef480:
    // 0x2ef480: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ef480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ef484:
    // 0x2ef484: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2ef484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2ef488:
    // 0x2ef488: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2ef488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2ef48c:
    // 0x2ef48c: 0x40f809  jalr        $v0
label_2ef490:
    if (ctx->pc == 0x2EF490u) {
        ctx->pc = 0x2EF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF48Cu;
        // 0x2ef490: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF494u;
        goto label_2ef494;
    }
    ctx->pc = 0x2EF48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EF494u);
        ctx->pc = 0x2EF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF48Cu;
        // 0x2ef490: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF48Cu, 0x2EF494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF494u;
label_2ef494:
    // 0x2ef494: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_2ef498:
    if (ctx->pc == 0x2EF498u) {
        ctx->pc = 0x2EF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF494u;
        // 0x2ef498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF49Cu;
        goto label_2ef49c;
    }
    ctx->pc = 0x2EF494u;
    {
        const bool branch_taken_0x2ef494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF494u;
        // 0x2ef498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef494) {
            ctx->pc = 0x2EF770u;
            goto label_2ef770;
        }
    }
    ctx->pc = 0x2EF49Cu;
label_2ef49c:
    // 0x2ef49c: 0x16150053  bne         $s0, $s5, . + 4 + (0x53 << 2)
label_2ef4a0:
    if (ctx->pc == 0x2EF4A0u) {
        ctx->pc = 0x2EF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF49Cu;
        // 0x2ef4a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4A4u;
        goto label_2ef4a4;
    }
    ctx->pc = 0x2EF49Cu;
    {
        const bool branch_taken_0x2ef49c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x2EF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF49Cu;
        // 0x2ef4a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef49c) {
            ctx->pc = 0x2EF5ECu;
            goto label_2ef5ec;
        }
    }
    ctx->pc = 0x2EF4A4u;
label_2ef4a4:
    // 0x2ef4a4: 0xc089018  jal         func_224060
label_2ef4a8:
    if (ctx->pc == 0x2EF4A8u) {
        ctx->pc = 0x2EF4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4A4u;
        // 0x2ef4a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4ACu;
        goto label_2ef4ac;
    }
    ctx->pc = 0x2EF4A4u;
    SET_GPR_U32(ctx, 31, 0x2EF4ACu);
    ctx->pc = 0x2EF4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF4A4u;
    // 0x2ef4a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2EF4A4u, 0x2EF4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF4ACu;
label_2ef4ac:
    // 0x2ef4ac: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
label_2ef4b0:
    if (ctx->pc == 0x2EF4B0u) {
        ctx->pc = 0x2EF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4ACu;
        // 0x2ef4b0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4B4u;
        goto label_2ef4b4;
    }
    ctx->pc = 0x2EF4ACu;
    {
        const bool branch_taken_0x2ef4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2EF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4ACu;
        // 0x2ef4b0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4ac) {
            ctx->pc = 0x2EF4C0u;
            goto label_2ef4c0;
        }
    }
    ctx->pc = 0x2EF4B4u;
label_2ef4b4:
    // 0x2ef4b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ef4b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef4b8:
    // 0x2ef4b8: 0x100000ad  b           . + 4 + (0xAD << 2)
label_2ef4bc:
    if (ctx->pc == 0x2EF4BCu) {
        ctx->pc = 0x2EF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4B8u;
        // 0x2ef4bc: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4C0u;
        goto label_2ef4c0;
    }
    ctx->pc = 0x2EF4B8u;
    {
        const bool branch_taken_0x2ef4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4B8u;
        // 0x2ef4bc: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4b8) {
            ctx->pc = 0x2EF770u;
            goto label_2ef770;
        }
    }
    ctx->pc = 0x2EF4C0u;
label_2ef4c0:
    // 0x2ef4c0: 0xc047e6c  jal         func_11F9B0
label_2ef4c4:
    if (ctx->pc == 0x2EF4C4u) {
        ctx->pc = 0x2EF4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4C0u;
        // 0x2ef4c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4C8u;
        goto label_2ef4c8;
    }
    ctx->pc = 0x2EF4C0u;
    SET_GPR_U32(ctx, 31, 0x2EF4C8u);
    ctx->pc = 0x2EF4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF4C0u;
    // 0x2ef4c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x2EF4C0u, 0x2EF4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF4C8u;
label_2ef4c8:
    // 0x2ef4c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ef4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef4cc:
    // 0x2ef4cc: 0x122000a7  beqz        $s1, . + 4 + (0xA7 << 2)
label_2ef4d0:
    if (ctx->pc == 0x2EF4D0u) {
        ctx->pc = 0x2EF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4CCu;
        // 0x2ef4d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4D4u;
        goto label_2ef4d4;
    }
    ctx->pc = 0x2EF4CCu;
    {
        const bool branch_taken_0x2ef4cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4CCu;
        // 0x2ef4d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4cc) {
            ctx->pc = 0x2EF76Cu;
            goto label_2ef76c;
        }
    }
    ctx->pc = 0x2EF4D4u;
label_2ef4d4:
    // 0x2ef4d4: 0xc088680  jal         func_221A00
label_2ef4d8:
    if (ctx->pc == 0x2EF4D8u) {
        ctx->pc = 0x2EF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4D4u;
        // 0x2ef4d8: 0x24050225  addiu       $a1, $zero, 0x225 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4DCu;
        goto label_2ef4dc;
    }
    ctx->pc = 0x2EF4D4u;
    SET_GPR_U32(ctx, 31, 0x2EF4DCu);
    ctx->pc = 0x2EF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF4D4u;
    // 0x2ef4d8: 0x24050225  addiu       $a1, $zero, 0x225 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221A00u, 0x2EF4D4u, 0x2EF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF4DCu;
label_2ef4dc:
    // 0x2ef4dc: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
label_2ef4e0:
    if (ctx->pc == 0x2EF4E0u) {
        ctx->pc = 0x2EF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4DCu;
        // 0x2ef4e0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF4E4u;
        goto label_2ef4e4;
    }
    ctx->pc = 0x2EF4DCu;
    {
        const bool branch_taken_0x2ef4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4DCu;
        // 0x2ef4e0: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4dc) {
            ctx->pc = 0x2EF76Cu;
            goto label_2ef76c;
        }
    }
    ctx->pc = 0x2EF4E4u;
label_2ef4e4:
    // 0x2ef4e4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ef4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef4e8:
    // 0x2ef4e8: 0x86700092  lh          $s0, 0x92($s3)
    ctx->pc = 0x2ef4e8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2ef4ec:
    // 0x2ef4ec: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2ef4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2ef4f0:
    // 0x2ef4f0: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x2ef4f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_2ef4f4:
    // 0x2ef4f4: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2ef4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2ef4f8:
    // 0x2ef4f8: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x2ef4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_2ef4fc:
    // 0x2ef4fc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2ef4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2ef500:
    // 0x2ef500: 0x40f809  jalr        $v0
label_2ef504:
    if (ctx->pc == 0x2EF504u) {
        ctx->pc = 0x2EF504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF500u;
        // 0x2ef504: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF508u;
        goto label_2ef508;
    }
    ctx->pc = 0x2EF500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EF508u);
        ctx->pc = 0x2EF504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF500u;
        // 0x2ef504: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF500u, 0x2EF508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF508u;
label_2ef508:
    // 0x2ef508: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ef508u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef50c:
    // 0x2ef50c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2ef50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ef510:
    // 0x2ef510: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2ef510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2ef514:
    // 0x2ef514: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2ef514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2ef518:
    // 0x2ef518: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2ef518u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2ef51c:
    // 0x2ef51c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2ef51cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef520:
    // 0x2ef520: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ef520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef524:
    // 0x2ef524: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2ef524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2ef528:
    // 0x2ef528: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ef528u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2ef52c:
    // 0x2ef52c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2ef52cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2ef530:
    // 0x2ef530: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2ef530u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2ef534:
    // 0x2ef534: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2ef534u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2ef538:
    // 0x2ef538: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2ef538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2ef53c:
    // 0x2ef53c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ef53cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2ef540:
    // 0x2ef540: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2ef540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2ef544:
    // 0x2ef544: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2ef544u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2ef548:
    // 0x2ef548: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2ef548u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2ef54c:
    // 0x2ef54c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2ef54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2ef550:
    // 0x2ef550: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2ef550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2ef554:
    // 0x2ef554: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2ef554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2ef558:
    // 0x2ef558: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2ef558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2ef55c:
    // 0x2ef55c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2ef55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2ef560:
    // 0x2ef560: 0xc0a367c  jal         func_28D9F0
label_2ef564:
    if (ctx->pc == 0x2EF564u) {
        ctx->pc = 0x2EF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF560u;
        // 0x2ef564: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF568u;
        goto label_2ef568;
    }
    ctx->pc = 0x2EF560u;
    SET_GPR_U32(ctx, 31, 0x2EF568u);
    ctx->pc = 0x2EF564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF560u;
    // 0x2ef564: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EF560u, 0x2EF568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF568u;
label_2ef568:
    // 0x2ef568: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ef568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef56c:
    // 0x2ef56c: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_2ef570:
    if (ctx->pc == 0x2EF570u) {
        ctx->pc = 0x2EF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF56Cu;
        // 0x2ef570: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF574u;
        goto label_2ef574;
    }
    ctx->pc = 0x2EF56Cu;
    {
        const bool branch_taken_0x2ef56c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF56Cu;
        // 0x2ef570: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef56c) {
            ctx->pc = 0x2EF5ACu;
            goto label_2ef5ac;
        }
    }
    ctx->pc = 0x2EF574u;
label_2ef574:
    // 0x2ef574: 0xc0884f6  jal         func_2213D8
label_2ef578:
    if (ctx->pc == 0x2EF578u) {
        ctx->pc = 0x2EF578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF574u;
        // 0x2ef578: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF57Cu;
        goto label_2ef57c;
    }
    ctx->pc = 0x2EF574u;
    SET_GPR_U32(ctx, 31, 0x2EF57Cu);
    ctx->pc = 0x2EF578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF574u;
    // 0x2ef578: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2EF574u, 0x2EF57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF57Cu;
label_2ef57c:
    // 0x2ef57c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2ef57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2ef580:
    // 0x2ef580: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ef580u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2ef584:
    // 0x2ef584: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2ef584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2ef588:
    // 0x2ef588: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x2ef588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_2ef58c:
    // 0x2ef58c: 0xc0cd4fc  jal         func_3353F0
label_2ef590:
    if (ctx->pc == 0x2EF590u) {
        ctx->pc = 0x2EF590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF58Cu;
        // 0x2ef590: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF594u;
        goto label_2ef594;
    }
    ctx->pc = 0x2EF58Cu;
    SET_GPR_U32(ctx, 31, 0x2EF594u);
    ctx->pc = 0x2EF590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF58Cu;
    // 0x2ef590: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2EF58Cu, 0x2EF594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF594u;
label_2ef594:
    // 0x2ef594: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ef594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef598:
    // 0x2ef598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef59c:
    // 0x2ef59c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ef59cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef5a0:
    // 0x2ef5a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ef5a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ef5a4:
    // 0x2ef5a4: 0xc0bf800  jal         func_2FE000
label_2ef5a8:
    if (ctx->pc == 0x2EF5A8u) {
        ctx->pc = 0x2EF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5A4u;
        // 0x2ef5a8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5ACu;
        goto label_2ef5ac;
    }
    ctx->pc = 0x2EF5A4u;
    SET_GPR_U32(ctx, 31, 0x2EF5ACu);
    ctx->pc = 0x2EF5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF5A4u;
    // 0x2ef5a8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2EF5A4u, 0x2EF5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF5ACu;
label_2ef5ac:
    // 0x2ef5ac: 0xc0a367c  jal         func_28D9F0
label_2ef5b0:
    if (ctx->pc == 0x2EF5B0u) {
        ctx->pc = 0x2EF5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5ACu;
        // 0x2ef5b0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5B4u;
        goto label_2ef5b4;
    }
    ctx->pc = 0x2EF5ACu;
    SET_GPR_U32(ctx, 31, 0x2EF5B4u);
    ctx->pc = 0x2EF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF5ACu;
    // 0x2ef5b0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EF5ACu, 0x2EF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF5B4u;
label_2ef5b4:
    // 0x2ef5b4: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_2ef5b8:
    if (ctx->pc == 0x2EF5B8u) {
        ctx->pc = 0x2EF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5B4u;
        // 0x2ef5b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5BCu;
        goto label_2ef5bc;
    }
    ctx->pc = 0x2EF5B4u;
    {
        const bool branch_taken_0x2ef5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5B4u;
        // 0x2ef5b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5b4) {
            ctx->pc = 0x2EF76Cu;
            goto label_2ef76c;
        }
    }
    ctx->pc = 0x2EF5BCu;
label_2ef5bc:
    // 0x2ef5bc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2ef5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2ef5c0:
    // 0x2ef5c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ef5c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2ef5c4:
    // 0x2ef5c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ef5c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ef5c8:
    // 0x2ef5c8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ef5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef5cc:
    // 0x2ef5cc: 0x24060225  addiu       $a2, $zero, 0x225
    ctx->pc = 0x2ef5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
label_2ef5d0:
    // 0x2ef5d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ef5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef5d4:
    // 0x2ef5d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ef5d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2ef5d8:
    // 0x2ef5d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ef5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef5dc:
    // 0x2ef5dc: 0xc0be968  jal         func_2FA5A0
label_2ef5e0:
    if (ctx->pc == 0x2EF5E0u) {
        ctx->pc = 0x2EF5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5DCu;
        // 0x2ef5e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5E4u;
        goto label_2ef5e4;
    }
    ctx->pc = 0x2EF5DCu;
    SET_GPR_U32(ctx, 31, 0x2EF5E4u);
    ctx->pc = 0x2EF5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF5DCu;
    // 0x2ef5e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2EF5DCu, 0x2EF5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF5E4u;
label_2ef5e4:
    // 0x2ef5e4: 0x10000062  b           . + 4 + (0x62 << 2)
label_2ef5e8:
    if (ctx->pc == 0x2EF5E8u) {
        ctx->pc = 0x2EF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5E4u;
        // 0x2ef5e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5ECu;
        goto label_2ef5ec;
    }
    ctx->pc = 0x2EF5E4u;
    {
        const bool branch_taken_0x2ef5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5E4u;
        // 0x2ef5e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5e4) {
            ctx->pc = 0x2EF770u;
            goto label_2ef770;
        }
    }
    ctx->pc = 0x2EF5ECu;
label_2ef5ec:
    // 0x2ef5ec: 0x16020060  bne         $s0, $v0, . + 4 + (0x60 << 2)
label_2ef5f0:
    if (ctx->pc == 0x2EF5F0u) {
        ctx->pc = 0x2EF5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5ECu;
        // 0x2ef5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5F4u;
        goto label_2ef5f4;
    }
    ctx->pc = 0x2EF5ECu;
    {
        const bool branch_taken_0x2ef5ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EF5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5ECu;
        // 0x2ef5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5ec) {
            ctx->pc = 0x2EF770u;
            goto label_2ef770;
        }
    }
    ctx->pc = 0x2EF5F4u;
label_2ef5f4:
    // 0x2ef5f4: 0xc089018  jal         func_224060
label_2ef5f8:
    if (ctx->pc == 0x2EF5F8u) {
        ctx->pc = 0x2EF5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5F4u;
        // 0x2ef5f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF5FCu;
        goto label_2ef5fc;
    }
    ctx->pc = 0x2EF5F4u;
    SET_GPR_U32(ctx, 31, 0x2EF5FCu);
    ctx->pc = 0x2EF5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF5F4u;
    // 0x2ef5f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2EF5F4u, 0x2EF5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF5FCu;
label_2ef5fc:
    // 0x2ef5fc: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_2ef600:
    if (ctx->pc == 0x2EF600u) {
        ctx->pc = 0x2EF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5FCu;
        // 0x2ef600: 0x86700092  lh          $s0, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF604u;
        goto label_2ef604;
    }
    ctx->pc = 0x2EF5FCu;
    {
        const bool branch_taken_0x2ef5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef5fc) {
            ctx->pc = 0x2EF600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF5FCu;
            // 0x2ef600: 0x86700092  lh          $s0, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF6A4u;
            goto label_2ef6a4;
        }
    }
    ctx->pc = 0x2EF604u;
label_2ef604:
    // 0x2ef604: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ef604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef608:
    // 0x2ef608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef60c:
    // 0x2ef60c: 0xc0a33f8  jal         func_28CFE0
label_2ef610:
    if (ctx->pc == 0x2EF610u) {
        ctx->pc = 0x2EF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF60Cu;
        // 0x2ef610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF614u;
        goto label_2ef614;
    }
    ctx->pc = 0x2EF60Cu;
    SET_GPR_U32(ctx, 31, 0x2EF614u);
    ctx->pc = 0x2EF610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF60Cu;
    // 0x2ef610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2EF60Cu, 0x2EF614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF614u;
label_2ef614:
    // 0x2ef614: 0x92450034  lbu         $a1, 0x34($s2)
    ctx->pc = 0x2ef614u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_2ef618:
    // 0x2ef618: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x2ef618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2ef61c:
    // 0x2ef61c: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x2ef61cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_2ef620:
    // 0x2ef620: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2ef620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2ef624:
    // 0x2ef624: 0x2610b880  addiu       $s0, $s0, -0x4780
    ctx->pc = 0x2ef624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948992));
label_2ef628:
    // 0x2ef628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef62c:
    // 0x2ef62c: 0xc0cd4fc  jal         func_3353F0
label_2ef630:
    if (ctx->pc == 0x2EF630u) {
        ctx->pc = 0x2EF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF62Cu;
        // 0x2ef630: 0x24a603e8  addiu       $a2, $a1, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF634u;
        goto label_2ef634;
    }
    ctx->pc = 0x2EF62Cu;
    SET_GPR_U32(ctx, 31, 0x2EF634u);
    ctx->pc = 0x2EF630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF62Cu;
    // 0x2ef630: 0x24a603e8  addiu       $a2, $a1, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2EF62Cu, 0x2EF634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF634u;
label_2ef634:
    // 0x2ef634: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ef634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef638:
    // 0x2ef638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef63c:
    // 0x2ef63c: 0xc0cd4ee  jal         func_3353B8
label_2ef640:
    if (ctx->pc == 0x2EF640u) {
        ctx->pc = 0x2EF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF63Cu;
        // 0x2ef640: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF644u;
        goto label_2ef644;
    }
    ctx->pc = 0x2EF63Cu;
    SET_GPR_U32(ctx, 31, 0x2EF644u);
    ctx->pc = 0x2EF640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF63Cu;
    // 0x2ef640: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2EF63Cu, 0x2EF644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF644u;
label_2ef644:
    // 0x2ef644: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x2ef644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_2ef648:
    // 0x2ef648: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ef64c:
    if (ctx->pc == 0x2EF64Cu) {
        ctx->pc = 0x2EF650u;
        goto label_2ef650;
    }
    ctx->pc = 0x2EF648u;
    {
        const bool branch_taken_0x2ef648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef648) {
            ctx->pc = 0x2EF680u;
            goto label_2ef680;
        }
    }
    ctx->pc = 0x2EF650u;
label_2ef650:
    // 0x2ef650: 0xc0a367c  jal         func_28D9F0
label_2ef654:
    if (ctx->pc == 0x2EF654u) {
        ctx->pc = 0x2EF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF650u;
        // 0x2ef654: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF658u;
        goto label_2ef658;
    }
    ctx->pc = 0x2EF650u;
    SET_GPR_U32(ctx, 31, 0x2EF658u);
    ctx->pc = 0x2EF654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF650u;
    // 0x2ef654: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EF650u, 0x2EF658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF658u;
label_2ef658:
    // 0x2ef658: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2ef65c:
    if (ctx->pc == 0x2EF65Cu) {
        ctx->pc = 0x2EF65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF658u;
        // 0x2ef65c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF660u;
        goto label_2ef660;
    }
    ctx->pc = 0x2EF658u;
    {
        const bool branch_taken_0x2ef658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF658u;
        // 0x2ef65c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef658) {
            ctx->pc = 0x2EF69Cu;
            goto label_2ef69c;
        }
    }
    ctx->pc = 0x2EF660u;
label_2ef660:
    // 0x2ef660: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ef660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef664:
    // 0x2ef664: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2ef664u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef668:
    // 0x2ef668: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2ef668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ef66c:
    // 0x2ef66c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ef66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef670:
    // 0x2ef670: 0xc0bec3c  jal         func_2FB0F0
label_2ef674:
    if (ctx->pc == 0x2EF674u) {
        ctx->pc = 0x2EF674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF670u;
        // 0x2ef674: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF678u;
        goto label_2ef678;
    }
    ctx->pc = 0x2EF670u;
    SET_GPR_U32(ctx, 31, 0x2EF678u);
    ctx->pc = 0x2EF674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF670u;
    // 0x2ef674: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x2EF670u, 0x2EF678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF678u;
label_2ef678:
    // 0x2ef678: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2ef67c:
    if (ctx->pc == 0x2EF67Cu) {
        ctx->pc = 0x2EF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF678u;
        // 0x2ef67c: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF680u;
        goto label_2ef680;
    }
    ctx->pc = 0x2EF678u;
    {
        const bool branch_taken_0x2ef678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF678u;
        // 0x2ef67c: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef678) {
            ctx->pc = 0x2EF76Cu;
            goto label_2ef76c;
        }
    }
    ctx->pc = 0x2EF680u;
label_2ef680:
    // 0x2ef680: 0xc0a367c  jal         func_28D9F0
label_2ef684:
    if (ctx->pc == 0x2EF684u) {
        ctx->pc = 0x2EF684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF680u;
        // 0x2ef684: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF688u;
        goto label_2ef688;
    }
    ctx->pc = 0x2EF680u;
    SET_GPR_U32(ctx, 31, 0x2EF688u);
    ctx->pc = 0x2EF684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF680u;
    // 0x2ef684: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EF680u, 0x2EF688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF688u;
label_2ef688:
    // 0x2ef688: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ef68c:
    if (ctx->pc == 0x2EF68Cu) {
        ctx->pc = 0x2EF68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF688u;
        // 0x2ef68c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF690u;
        goto label_2ef690;
    }
    ctx->pc = 0x2EF688u;
    {
        const bool branch_taken_0x2ef688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF688u;
        // 0x2ef68c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef688) {
            ctx->pc = 0x2EF69Cu;
            goto label_2ef69c;
        }
    }
    ctx->pc = 0x2EF690u;
label_2ef690:
    // 0x2ef690: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ef690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef694:
    // 0x2ef694: 0xc0bebdc  jal         func_2FAF70
label_2ef698:
    if (ctx->pc == 0x2EF698u) {
        ctx->pc = 0x2EF698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF694u;
        // 0x2ef698: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF69Cu;
        goto label_2ef69c;
    }
    ctx->pc = 0x2EF694u;
    SET_GPR_U32(ctx, 31, 0x2EF69Cu);
    ctx->pc = 0x2EF698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF694u;
    // 0x2ef698: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2EF694u, 0x2EF69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF69Cu;
label_2ef69c:
    // 0x2ef69c: 0x10000033  b           . + 4 + (0x33 << 2)
label_2ef6a0:
    if (ctx->pc == 0x2EF6A0u) {
        ctx->pc = 0x2EF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF69Cu;
        // 0x2ef6a0: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6A4u;
        goto label_2ef6a4;
    }
    ctx->pc = 0x2EF69Cu;
    {
        const bool branch_taken_0x2ef69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF69Cu;
        // 0x2ef6a0: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef69c) {
            ctx->pc = 0x2EF76Cu;
            goto label_2ef76c;
        }
    }
    ctx->pc = 0x2EF6A4u;
label_2ef6a4:
    // 0x2ef6a4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ef6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2ef6a8:
    // 0x2ef6a8: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x2ef6a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2ef6ac:
    // 0x2ef6ac: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2ef6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2ef6b0:
    // 0x2ef6b0: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2ef6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2ef6b4:
    // 0x2ef6b4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2ef6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ef6b8:
    // 0x2ef6b8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ef6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2ef6bc:
    // 0x2ef6bc: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2ef6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ef6c0:
    // 0x2ef6c0: 0xc0cd7d2  jal         func_335F48
label_2ef6c4:
    if (ctx->pc == 0x2EF6C4u) {
        ctx->pc = 0x2EF6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6C0u;
        // 0x2ef6c4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6C8u;
        goto label_2ef6c8;
    }
    ctx->pc = 0x2EF6C0u;
    SET_GPR_U32(ctx, 31, 0x2EF6C8u);
    ctx->pc = 0x2EF6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF6C0u;
    // 0x2ef6c4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2EF6C0u, 0x2EF6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF6C8u;
label_2ef6c8:
    // 0x2ef6c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef6cc:
    // 0x2ef6cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ef6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef6d0:
    // 0x2ef6d0: 0xc0cd780  jal         func_335E00
label_2ef6d4:
    if (ctx->pc == 0x2EF6D4u) {
        ctx->pc = 0x2EF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6D0u;
        // 0x2ef6d4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6D8u;
        goto label_2ef6d8;
    }
    ctx->pc = 0x2EF6D0u;
    SET_GPR_U32(ctx, 31, 0x2EF6D8u);
    ctx->pc = 0x2EF6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF6D0u;
    // 0x2ef6d4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2EF6D0u, 0x2EF6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF6D8u;
label_2ef6d8:
    // 0x2ef6d8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2ef6d8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2ef6dc:
    // 0x2ef6dc: 0xc0cd742  jal         func_335D08
label_2ef6e0:
    if (ctx->pc == 0x2EF6E0u) {
        ctx->pc = 0x2EF6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6DCu;
        // 0x2ef6e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6E4u;
        goto label_2ef6e4;
    }
    ctx->pc = 0x2EF6DCu;
    SET_GPR_U32(ctx, 31, 0x2EF6E4u);
    ctx->pc = 0x2EF6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF6DCu;
    // 0x2ef6e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2EF6DCu, 0x2EF6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF6E4u;
label_2ef6e4:
    // 0x2ef6e4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ef6e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2ef6e8:
    // 0x2ef6e8: 0xc0cdd2e  jal         func_3374B8
label_2ef6ec:
    if (ctx->pc == 0x2EF6ECu) {
        ctx->pc = 0x2EF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6E8u;
        // 0x2ef6ec: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6F0u;
        goto label_2ef6f0;
    }
    ctx->pc = 0x2EF6E8u;
    SET_GPR_U32(ctx, 31, 0x2EF6F0u);
    ctx->pc = 0x2EF6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF6E8u;
    // 0x2ef6ec: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2EF6E8u, 0x2EF6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF6F0u;
label_2ef6f0:
    // 0x2ef6f0: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2ef6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_2ef6f4:
    // 0x2ef6f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ef6f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2ef6f8:
    // 0x2ef6f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ef6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ef6fc:
    // 0x2ef6fc: 0x0  nop
    ctx->pc = 0x2ef6fcu;
    // NOP
label_2ef700:
    // 0x2ef700: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ef700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ef704:
    // 0x2ef704: 0x0  nop
    ctx->pc = 0x2ef704u;
    // NOP
label_2ef708:
    // 0x2ef708: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_2ef70c:
    if (ctx->pc == 0x2EF70Cu) {
        ctx->pc = 0x2EF710u;
        goto label_2ef710;
    }
    ctx->pc = 0x2EF708u;
    {
        const bool branch_taken_0x2ef708 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ef708) {
            ctx->pc = 0x2EF74Cu;
            goto label_2ef74c;
        }
    }
    ctx->pc = 0x2EF710u;
label_2ef710:
    // 0x2ef710: 0xc0a367c  jal         func_28D9F0
label_2ef714:
    if (ctx->pc == 0x2EF714u) {
        ctx->pc = 0x2EF714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF710u;
        // 0x2ef714: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF718u;
        goto label_2ef718;
    }
    ctx->pc = 0x2EF710u;
    SET_GPR_U32(ctx, 31, 0x2EF718u);
    ctx->pc = 0x2EF714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF710u;
    // 0x2ef714: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EF710u, 0x2EF718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF718u;
label_2ef718:
    // 0x2ef718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ef718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ef71c:
    // 0x2ef71c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_2ef720:
    if (ctx->pc == 0x2EF720u) {
        ctx->pc = 0x2EF720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF71Cu;
        // 0x2ef720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF724u;
        goto label_2ef724;
    }
    ctx->pc = 0x2EF71Cu;
    {
        const bool branch_taken_0x2ef71c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF71Cu;
        // 0x2ef720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef71c) {
            ctx->pc = 0x2EF770u;
            goto label_2ef770;
        }
    }
    ctx->pc = 0x2EF724u;
label_2ef724:
    // 0x2ef724: 0xc0884f6  jal         func_2213D8
label_2ef728:
    if (ctx->pc == 0x2EF728u) {
        ctx->pc = 0x2EF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF724u;
        // 0x2ef728: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF72Cu;
        goto label_2ef72c;
    }
    ctx->pc = 0x2EF724u;
    SET_GPR_U32(ctx, 31, 0x2EF72Cu);
    ctx->pc = 0x2EF728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF724u;
    // 0x2ef728: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2EF724u, 0x2EF72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF72Cu;
label_2ef72c:
    // 0x2ef72c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ef72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef730:
    // 0x2ef730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ef734:
    // 0x2ef734: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ef734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef738:
    // 0x2ef738: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ef738u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2ef73c:
    // 0x2ef73c: 0xc0bf800  jal         func_2FE000
label_2ef740:
    if (ctx->pc == 0x2EF740u) {
        ctx->pc = 0x2EF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF73Cu;
        // 0x2ef740: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF744u;
        goto label_2ef744;
    }
    ctx->pc = 0x2EF73Cu;
    SET_GPR_U32(ctx, 31, 0x2EF744u);
    ctx->pc = 0x2EF740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF73Cu;
    // 0x2ef740: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2EF73Cu, 0x2EF744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF744u;
label_2ef744:
    // 0x2ef744: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ef748:
    if (ctx->pc == 0x2EF748u) {
        ctx->pc = 0x2EF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF744u;
        // 0x2ef748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF74Cu;
        goto label_2ef74c;
    }
    ctx->pc = 0x2EF744u;
    {
        const bool branch_taken_0x2ef744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF744u;
        // 0x2ef748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef744) {
            ctx->pc = 0x2EF770u;
            goto label_2ef770;
        }
    }
    ctx->pc = 0x2EF74Cu;
label_2ef74c:
    // 0x2ef74c: 0xc0a367c  jal         func_28D9F0
label_2ef750:
    if (ctx->pc == 0x2EF750u) {
        ctx->pc = 0x2EF750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF74Cu;
        // 0x2ef750: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF754u;
        goto label_2ef754;
    }
    ctx->pc = 0x2EF74Cu;
    SET_GPR_U32(ctx, 31, 0x2EF754u);
    ctx->pc = 0x2EF750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF74Cu;
    // 0x2ef750: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EF74Cu, 0x2EF754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF754u;
label_2ef754:
    // 0x2ef754: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ef758:
    if (ctx->pc == 0x2EF758u) {
        ctx->pc = 0x2EF758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF754u;
        // 0x2ef758: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF75Cu;
        goto label_2ef75c;
    }
    ctx->pc = 0x2EF754u;
    {
        const bool branch_taken_0x2ef754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF754u;
        // 0x2ef758: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef754) {
            ctx->pc = 0x2EF76Cu;
            goto label_2ef76c;
        }
    }
    ctx->pc = 0x2EF75Cu;
label_2ef75c:
    // 0x2ef75c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ef75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ef760:
    // 0x2ef760: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2ef760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ef764:
    // 0x2ef764: 0xc0bebac  jal         func_2FAEB0
label_2ef768:
    if (ctx->pc == 0x2EF768u) {
        ctx->pc = 0x2EF768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF764u;
        // 0x2ef768: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF76Cu;
        goto label_2ef76c;
    }
    ctx->pc = 0x2EF764u;
    SET_GPR_U32(ctx, 31, 0x2EF76Cu);
    ctx->pc = 0x2EF768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF764u;
    // 0x2ef768: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAEB0u, 0x2EF764u, 0x2EF76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF76Cu;
label_2ef76c:
    // 0x2ef76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ef76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef770:
    // 0x2ef770: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2ef770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2ef774:
    // 0x2ef774: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2ef774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2ef778:
    // 0x2ef778: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2ef778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ef77c:
    // 0x2ef77c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2ef77cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ef780:
    // 0x2ef780: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2ef780u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ef784:
    // 0x2ef784: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ef784u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ef788:
    // 0x2ef788: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ef788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ef78c:
    // 0x2ef78c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2ef78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ef790:
    // 0x2ef790: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2ef790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ef794:
    // 0x2ef794: 0x3e00008  jr          $ra
label_2ef798:
    if (ctx->pc == 0x2EF798u) {
        ctx->pc = 0x2EF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF794u;
        // 0x2ef798: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF79Cu;
        goto label_2ef79c;
    }
    ctx->pc = 0x2EF794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF794u;
        // 0x2ef798: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF79Cu;
label_2ef79c:
    // 0x2ef79c: 0x0  nop
    ctx->pc = 0x2ef79cu;
    // NOP
label_2ef7a0:
    // 0x2ef7a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2ef7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2ef7a4:
    // 0x2ef7a4: 0x0  nop
    ctx->pc = 0x2ef7a4u;
    // NOP
    ctx->pc = 0x2ef7a8u;
}
