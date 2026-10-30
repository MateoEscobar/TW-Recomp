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

// Function: sub_001FA170
// Address: 0x1fa170 - 0x1fa740
void sub_001FA170_0x1fa170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA170_0x1fa170");
#endif

    switch (ctx->pc) {
        case 0x1fa170u: goto label_1fa170;
        case 0x1fa174u: goto label_1fa174;
        case 0x1fa178u: goto label_1fa178;
        case 0x1fa17cu: goto label_1fa17c;
        case 0x1fa180u: goto label_1fa180;
        case 0x1fa184u: goto label_1fa184;
        case 0x1fa188u: goto label_1fa188;
        case 0x1fa18cu: goto label_1fa18c;
        case 0x1fa190u: goto label_1fa190;
        case 0x1fa194u: goto label_1fa194;
        case 0x1fa198u: goto label_1fa198;
        case 0x1fa19cu: goto label_1fa19c;
        case 0x1fa1a0u: goto label_1fa1a0;
        case 0x1fa1a4u: goto label_1fa1a4;
        case 0x1fa1a8u: goto label_1fa1a8;
        case 0x1fa1acu: goto label_1fa1ac;
        case 0x1fa1b0u: goto label_1fa1b0;
        case 0x1fa1b4u: goto label_1fa1b4;
        case 0x1fa1b8u: goto label_1fa1b8;
        case 0x1fa1bcu: goto label_1fa1bc;
        case 0x1fa1c0u: goto label_1fa1c0;
        case 0x1fa1c4u: goto label_1fa1c4;
        case 0x1fa1c8u: goto label_1fa1c8;
        case 0x1fa1ccu: goto label_1fa1cc;
        case 0x1fa1d0u: goto label_1fa1d0;
        case 0x1fa1d4u: goto label_1fa1d4;
        case 0x1fa1d8u: goto label_1fa1d8;
        case 0x1fa1dcu: goto label_1fa1dc;
        case 0x1fa1e0u: goto label_1fa1e0;
        case 0x1fa1e4u: goto label_1fa1e4;
        case 0x1fa1e8u: goto label_1fa1e8;
        case 0x1fa1ecu: goto label_1fa1ec;
        case 0x1fa1f0u: goto label_1fa1f0;
        case 0x1fa1f4u: goto label_1fa1f4;
        case 0x1fa1f8u: goto label_1fa1f8;
        case 0x1fa1fcu: goto label_1fa1fc;
        case 0x1fa200u: goto label_1fa200;
        case 0x1fa204u: goto label_1fa204;
        case 0x1fa208u: goto label_1fa208;
        case 0x1fa20cu: goto label_1fa20c;
        case 0x1fa210u: goto label_1fa210;
        case 0x1fa214u: goto label_1fa214;
        case 0x1fa218u: goto label_1fa218;
        case 0x1fa21cu: goto label_1fa21c;
        case 0x1fa220u: goto label_1fa220;
        case 0x1fa224u: goto label_1fa224;
        case 0x1fa228u: goto label_1fa228;
        case 0x1fa22cu: goto label_1fa22c;
        case 0x1fa230u: goto label_1fa230;
        case 0x1fa234u: goto label_1fa234;
        case 0x1fa238u: goto label_1fa238;
        case 0x1fa23cu: goto label_1fa23c;
        case 0x1fa240u: goto label_1fa240;
        case 0x1fa244u: goto label_1fa244;
        case 0x1fa248u: goto label_1fa248;
        case 0x1fa24cu: goto label_1fa24c;
        case 0x1fa250u: goto label_1fa250;
        case 0x1fa254u: goto label_1fa254;
        case 0x1fa258u: goto label_1fa258;
        case 0x1fa25cu: goto label_1fa25c;
        case 0x1fa260u: goto label_1fa260;
        case 0x1fa264u: goto label_1fa264;
        case 0x1fa268u: goto label_1fa268;
        case 0x1fa26cu: goto label_1fa26c;
        case 0x1fa270u: goto label_1fa270;
        case 0x1fa274u: goto label_1fa274;
        case 0x1fa278u: goto label_1fa278;
        case 0x1fa27cu: goto label_1fa27c;
        case 0x1fa280u: goto label_1fa280;
        case 0x1fa284u: goto label_1fa284;
        case 0x1fa288u: goto label_1fa288;
        case 0x1fa28cu: goto label_1fa28c;
        case 0x1fa290u: goto label_1fa290;
        case 0x1fa294u: goto label_1fa294;
        case 0x1fa298u: goto label_1fa298;
        case 0x1fa29cu: goto label_1fa29c;
        case 0x1fa2a0u: goto label_1fa2a0;
        case 0x1fa2a4u: goto label_1fa2a4;
        case 0x1fa2a8u: goto label_1fa2a8;
        case 0x1fa2acu: goto label_1fa2ac;
        case 0x1fa2b0u: goto label_1fa2b0;
        case 0x1fa2b4u: goto label_1fa2b4;
        case 0x1fa2b8u: goto label_1fa2b8;
        case 0x1fa2bcu: goto label_1fa2bc;
        case 0x1fa2c0u: goto label_1fa2c0;
        case 0x1fa2c4u: goto label_1fa2c4;
        case 0x1fa2c8u: goto label_1fa2c8;
        case 0x1fa2ccu: goto label_1fa2cc;
        case 0x1fa2d0u: goto label_1fa2d0;
        case 0x1fa2d4u: goto label_1fa2d4;
        case 0x1fa2d8u: goto label_1fa2d8;
        case 0x1fa2dcu: goto label_1fa2dc;
        case 0x1fa2e0u: goto label_1fa2e0;
        case 0x1fa2e4u: goto label_1fa2e4;
        case 0x1fa2e8u: goto label_1fa2e8;
        case 0x1fa2ecu: goto label_1fa2ec;
        case 0x1fa2f0u: goto label_1fa2f0;
        case 0x1fa2f4u: goto label_1fa2f4;
        case 0x1fa2f8u: goto label_1fa2f8;
        case 0x1fa2fcu: goto label_1fa2fc;
        case 0x1fa300u: goto label_1fa300;
        case 0x1fa304u: goto label_1fa304;
        case 0x1fa308u: goto label_1fa308;
        case 0x1fa30cu: goto label_1fa30c;
        case 0x1fa310u: goto label_1fa310;
        case 0x1fa314u: goto label_1fa314;
        case 0x1fa318u: goto label_1fa318;
        case 0x1fa31cu: goto label_1fa31c;
        case 0x1fa320u: goto label_1fa320;
        case 0x1fa324u: goto label_1fa324;
        case 0x1fa328u: goto label_1fa328;
        case 0x1fa32cu: goto label_1fa32c;
        case 0x1fa330u: goto label_1fa330;
        case 0x1fa334u: goto label_1fa334;
        case 0x1fa338u: goto label_1fa338;
        case 0x1fa33cu: goto label_1fa33c;
        case 0x1fa340u: goto label_1fa340;
        case 0x1fa344u: goto label_1fa344;
        case 0x1fa348u: goto label_1fa348;
        case 0x1fa34cu: goto label_1fa34c;
        case 0x1fa350u: goto label_1fa350;
        case 0x1fa354u: goto label_1fa354;
        case 0x1fa358u: goto label_1fa358;
        case 0x1fa35cu: goto label_1fa35c;
        case 0x1fa360u: goto label_1fa360;
        case 0x1fa364u: goto label_1fa364;
        case 0x1fa368u: goto label_1fa368;
        case 0x1fa36cu: goto label_1fa36c;
        case 0x1fa370u: goto label_1fa370;
        case 0x1fa374u: goto label_1fa374;
        case 0x1fa378u: goto label_1fa378;
        case 0x1fa37cu: goto label_1fa37c;
        case 0x1fa380u: goto label_1fa380;
        case 0x1fa384u: goto label_1fa384;
        case 0x1fa388u: goto label_1fa388;
        case 0x1fa38cu: goto label_1fa38c;
        case 0x1fa390u: goto label_1fa390;
        case 0x1fa394u: goto label_1fa394;
        case 0x1fa398u: goto label_1fa398;
        case 0x1fa39cu: goto label_1fa39c;
        case 0x1fa3a0u: goto label_1fa3a0;
        case 0x1fa3a4u: goto label_1fa3a4;
        case 0x1fa3a8u: goto label_1fa3a8;
        case 0x1fa3acu: goto label_1fa3ac;
        case 0x1fa3b0u: goto label_1fa3b0;
        case 0x1fa3b4u: goto label_1fa3b4;
        case 0x1fa3b8u: goto label_1fa3b8;
        case 0x1fa3bcu: goto label_1fa3bc;
        case 0x1fa3c0u: goto label_1fa3c0;
        case 0x1fa3c4u: goto label_1fa3c4;
        case 0x1fa3c8u: goto label_1fa3c8;
        case 0x1fa3ccu: goto label_1fa3cc;
        case 0x1fa3d0u: goto label_1fa3d0;
        case 0x1fa3d4u: goto label_1fa3d4;
        case 0x1fa3d8u: goto label_1fa3d8;
        case 0x1fa3dcu: goto label_1fa3dc;
        case 0x1fa3e0u: goto label_1fa3e0;
        case 0x1fa3e4u: goto label_1fa3e4;
        case 0x1fa3e8u: goto label_1fa3e8;
        case 0x1fa3ecu: goto label_1fa3ec;
        case 0x1fa3f0u: goto label_1fa3f0;
        case 0x1fa3f4u: goto label_1fa3f4;
        case 0x1fa3f8u: goto label_1fa3f8;
        case 0x1fa3fcu: goto label_1fa3fc;
        case 0x1fa400u: goto label_1fa400;
        case 0x1fa404u: goto label_1fa404;
        case 0x1fa408u: goto label_1fa408;
        case 0x1fa40cu: goto label_1fa40c;
        case 0x1fa410u: goto label_1fa410;
        case 0x1fa414u: goto label_1fa414;
        case 0x1fa418u: goto label_1fa418;
        case 0x1fa41cu: goto label_1fa41c;
        case 0x1fa420u: goto label_1fa420;
        case 0x1fa424u: goto label_1fa424;
        case 0x1fa428u: goto label_1fa428;
        case 0x1fa42cu: goto label_1fa42c;
        case 0x1fa430u: goto label_1fa430;
        case 0x1fa434u: goto label_1fa434;
        case 0x1fa438u: goto label_1fa438;
        case 0x1fa43cu: goto label_1fa43c;
        case 0x1fa440u: goto label_1fa440;
        case 0x1fa444u: goto label_1fa444;
        case 0x1fa448u: goto label_1fa448;
        case 0x1fa44cu: goto label_1fa44c;
        case 0x1fa450u: goto label_1fa450;
        case 0x1fa454u: goto label_1fa454;
        case 0x1fa458u: goto label_1fa458;
        case 0x1fa45cu: goto label_1fa45c;
        case 0x1fa460u: goto label_1fa460;
        case 0x1fa464u: goto label_1fa464;
        case 0x1fa468u: goto label_1fa468;
        case 0x1fa46cu: goto label_1fa46c;
        case 0x1fa470u: goto label_1fa470;
        case 0x1fa474u: goto label_1fa474;
        case 0x1fa478u: goto label_1fa478;
        case 0x1fa47cu: goto label_1fa47c;
        case 0x1fa480u: goto label_1fa480;
        case 0x1fa484u: goto label_1fa484;
        case 0x1fa488u: goto label_1fa488;
        case 0x1fa48cu: goto label_1fa48c;
        case 0x1fa490u: goto label_1fa490;
        case 0x1fa494u: goto label_1fa494;
        case 0x1fa498u: goto label_1fa498;
        case 0x1fa49cu: goto label_1fa49c;
        case 0x1fa4a0u: goto label_1fa4a0;
        case 0x1fa4a4u: goto label_1fa4a4;
        case 0x1fa4a8u: goto label_1fa4a8;
        case 0x1fa4acu: goto label_1fa4ac;
        case 0x1fa4b0u: goto label_1fa4b0;
        case 0x1fa4b4u: goto label_1fa4b4;
        case 0x1fa4b8u: goto label_1fa4b8;
        case 0x1fa4bcu: goto label_1fa4bc;
        case 0x1fa4c0u: goto label_1fa4c0;
        case 0x1fa4c4u: goto label_1fa4c4;
        case 0x1fa4c8u: goto label_1fa4c8;
        case 0x1fa4ccu: goto label_1fa4cc;
        case 0x1fa4d0u: goto label_1fa4d0;
        case 0x1fa4d4u: goto label_1fa4d4;
        case 0x1fa4d8u: goto label_1fa4d8;
        case 0x1fa4dcu: goto label_1fa4dc;
        case 0x1fa4e0u: goto label_1fa4e0;
        case 0x1fa4e4u: goto label_1fa4e4;
        case 0x1fa4e8u: goto label_1fa4e8;
        case 0x1fa4ecu: goto label_1fa4ec;
        case 0x1fa4f0u: goto label_1fa4f0;
        case 0x1fa4f4u: goto label_1fa4f4;
        case 0x1fa4f8u: goto label_1fa4f8;
        case 0x1fa4fcu: goto label_1fa4fc;
        case 0x1fa500u: goto label_1fa500;
        case 0x1fa504u: goto label_1fa504;
        case 0x1fa508u: goto label_1fa508;
        case 0x1fa50cu: goto label_1fa50c;
        case 0x1fa510u: goto label_1fa510;
        case 0x1fa514u: goto label_1fa514;
        case 0x1fa518u: goto label_1fa518;
        case 0x1fa51cu: goto label_1fa51c;
        case 0x1fa520u: goto label_1fa520;
        case 0x1fa524u: goto label_1fa524;
        case 0x1fa528u: goto label_1fa528;
        case 0x1fa52cu: goto label_1fa52c;
        case 0x1fa530u: goto label_1fa530;
        case 0x1fa534u: goto label_1fa534;
        case 0x1fa538u: goto label_1fa538;
        case 0x1fa53cu: goto label_1fa53c;
        case 0x1fa540u: goto label_1fa540;
        case 0x1fa544u: goto label_1fa544;
        case 0x1fa548u: goto label_1fa548;
        case 0x1fa54cu: goto label_1fa54c;
        case 0x1fa550u: goto label_1fa550;
        case 0x1fa554u: goto label_1fa554;
        case 0x1fa558u: goto label_1fa558;
        case 0x1fa55cu: goto label_1fa55c;
        case 0x1fa560u: goto label_1fa560;
        case 0x1fa564u: goto label_1fa564;
        case 0x1fa568u: goto label_1fa568;
        case 0x1fa56cu: goto label_1fa56c;
        case 0x1fa570u: goto label_1fa570;
        case 0x1fa574u: goto label_1fa574;
        case 0x1fa578u: goto label_1fa578;
        case 0x1fa57cu: goto label_1fa57c;
        case 0x1fa580u: goto label_1fa580;
        case 0x1fa584u: goto label_1fa584;
        case 0x1fa588u: goto label_1fa588;
        case 0x1fa58cu: goto label_1fa58c;
        case 0x1fa590u: goto label_1fa590;
        case 0x1fa594u: goto label_1fa594;
        case 0x1fa598u: goto label_1fa598;
        case 0x1fa59cu: goto label_1fa59c;
        case 0x1fa5a0u: goto label_1fa5a0;
        case 0x1fa5a4u: goto label_1fa5a4;
        case 0x1fa5a8u: goto label_1fa5a8;
        case 0x1fa5acu: goto label_1fa5ac;
        case 0x1fa5b0u: goto label_1fa5b0;
        case 0x1fa5b4u: goto label_1fa5b4;
        case 0x1fa5b8u: goto label_1fa5b8;
        case 0x1fa5bcu: goto label_1fa5bc;
        case 0x1fa5c0u: goto label_1fa5c0;
        case 0x1fa5c4u: goto label_1fa5c4;
        case 0x1fa5c8u: goto label_1fa5c8;
        case 0x1fa5ccu: goto label_1fa5cc;
        case 0x1fa5d0u: goto label_1fa5d0;
        case 0x1fa5d4u: goto label_1fa5d4;
        case 0x1fa5d8u: goto label_1fa5d8;
        case 0x1fa5dcu: goto label_1fa5dc;
        case 0x1fa5e0u: goto label_1fa5e0;
        case 0x1fa5e4u: goto label_1fa5e4;
        case 0x1fa5e8u: goto label_1fa5e8;
        case 0x1fa5ecu: goto label_1fa5ec;
        case 0x1fa5f0u: goto label_1fa5f0;
        case 0x1fa5f4u: goto label_1fa5f4;
        case 0x1fa5f8u: goto label_1fa5f8;
        case 0x1fa5fcu: goto label_1fa5fc;
        case 0x1fa600u: goto label_1fa600;
        case 0x1fa604u: goto label_1fa604;
        case 0x1fa608u: goto label_1fa608;
        case 0x1fa60cu: goto label_1fa60c;
        case 0x1fa610u: goto label_1fa610;
        case 0x1fa614u: goto label_1fa614;
        case 0x1fa618u: goto label_1fa618;
        case 0x1fa61cu: goto label_1fa61c;
        case 0x1fa620u: goto label_1fa620;
        case 0x1fa624u: goto label_1fa624;
        case 0x1fa628u: goto label_1fa628;
        case 0x1fa62cu: goto label_1fa62c;
        case 0x1fa630u: goto label_1fa630;
        case 0x1fa634u: goto label_1fa634;
        case 0x1fa638u: goto label_1fa638;
        case 0x1fa63cu: goto label_1fa63c;
        case 0x1fa640u: goto label_1fa640;
        case 0x1fa644u: goto label_1fa644;
        case 0x1fa648u: goto label_1fa648;
        case 0x1fa64cu: goto label_1fa64c;
        case 0x1fa650u: goto label_1fa650;
        case 0x1fa654u: goto label_1fa654;
        case 0x1fa658u: goto label_1fa658;
        case 0x1fa65cu: goto label_1fa65c;
        case 0x1fa660u: goto label_1fa660;
        case 0x1fa664u: goto label_1fa664;
        case 0x1fa668u: goto label_1fa668;
        case 0x1fa66cu: goto label_1fa66c;
        case 0x1fa670u: goto label_1fa670;
        case 0x1fa674u: goto label_1fa674;
        case 0x1fa678u: goto label_1fa678;
        case 0x1fa67cu: goto label_1fa67c;
        case 0x1fa680u: goto label_1fa680;
        case 0x1fa684u: goto label_1fa684;
        case 0x1fa688u: goto label_1fa688;
        case 0x1fa68cu: goto label_1fa68c;
        case 0x1fa690u: goto label_1fa690;
        case 0x1fa694u: goto label_1fa694;
        case 0x1fa698u: goto label_1fa698;
        case 0x1fa69cu: goto label_1fa69c;
        case 0x1fa6a0u: goto label_1fa6a0;
        case 0x1fa6a4u: goto label_1fa6a4;
        case 0x1fa6a8u: goto label_1fa6a8;
        case 0x1fa6acu: goto label_1fa6ac;
        case 0x1fa6b0u: goto label_1fa6b0;
        case 0x1fa6b4u: goto label_1fa6b4;
        case 0x1fa6b8u: goto label_1fa6b8;
        case 0x1fa6bcu: goto label_1fa6bc;
        case 0x1fa6c0u: goto label_1fa6c0;
        case 0x1fa6c4u: goto label_1fa6c4;
        case 0x1fa6c8u: goto label_1fa6c8;
        case 0x1fa6ccu: goto label_1fa6cc;
        case 0x1fa6d0u: goto label_1fa6d0;
        case 0x1fa6d4u: goto label_1fa6d4;
        case 0x1fa6d8u: goto label_1fa6d8;
        case 0x1fa6dcu: goto label_1fa6dc;
        case 0x1fa6e0u: goto label_1fa6e0;
        case 0x1fa6e4u: goto label_1fa6e4;
        case 0x1fa6e8u: goto label_1fa6e8;
        case 0x1fa6ecu: goto label_1fa6ec;
        case 0x1fa6f0u: goto label_1fa6f0;
        case 0x1fa6f4u: goto label_1fa6f4;
        case 0x1fa6f8u: goto label_1fa6f8;
        case 0x1fa6fcu: goto label_1fa6fc;
        case 0x1fa700u: goto label_1fa700;
        case 0x1fa704u: goto label_1fa704;
        case 0x1fa708u: goto label_1fa708;
        case 0x1fa70cu: goto label_1fa70c;
        case 0x1fa710u: goto label_1fa710;
        case 0x1fa714u: goto label_1fa714;
        case 0x1fa718u: goto label_1fa718;
        case 0x1fa71cu: goto label_1fa71c;
        case 0x1fa720u: goto label_1fa720;
        case 0x1fa724u: goto label_1fa724;
        case 0x1fa728u: goto label_1fa728;
        case 0x1fa72cu: goto label_1fa72c;
        case 0x1fa730u: goto label_1fa730;
        case 0x1fa734u: goto label_1fa734;
        case 0x1fa738u: goto label_1fa738;
        case 0x1fa73cu: goto label_1fa73c;
        default: break;
    }

    ctx->pc = 0x1fa170u;

label_1fa170:
    // 0x1fa170: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1fa170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_1fa174:
    // 0x1fa174: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fa174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fa178:
    // 0x1fa178: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x1fa178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_1fa17c:
    // 0x1fa17c: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x1fa17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_1fa180:
    // 0x1fa180: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fa180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa184:
    // 0x1fa184: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x1fa184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_1fa188:
    // 0x1fa188: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x1fa188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_1fa18c:
    // 0x1fa18c: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x1fa18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_1fa190:
    // 0x1fa190: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x1fa190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_1fa194:
    // 0x1fa194: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x1fa194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_1fa198:
    // 0x1fa198: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x1fa198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
label_1fa19c:
    // 0x1fa19c: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x1fa19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
label_1fa1a0:
    // 0x1fa1a0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1fa1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_1fa1a4:
    // 0x1fa1a4: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x1fa1a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_1fa1a8:
    // 0x1fa1a8: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1fa1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1fa1ac:
    // 0x1fa1ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fa1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fa1b0:
    // 0x1fa1b0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fa1b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fa1b4:
    // 0x1fa1b4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1fa1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fa1b8:
    // 0x1fa1b8: 0x40f809  jalr        $v0
label_1fa1bc:
    if (ctx->pc == 0x1FA1BCu) {
        ctx->pc = 0x1FA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1B8u;
        // 0x1fa1bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA1C0u;
        goto label_1fa1c0;
    }
    ctx->pc = 0x1FA1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA1C0u);
        ctx->pc = 0x1FA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1B8u;
        // 0x1fa1bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA1B8u, 0x1FA1C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA1C0u;
label_1fa1c0:
    // 0x1fa1c0: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x1fa1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_1fa1c4:
    // 0x1fa1c4: 0x8e2400ec  lw          $a0, 0xEC($s1)
    ctx->pc = 0x1fa1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_1fa1c8:
    // 0x1fa1c8: 0x14800111  bnez        $a0, . + 4 + (0x111 << 2)
label_1fa1cc:
    if (ctx->pc == 0x1FA1CCu) {
        ctx->pc = 0x1FA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1C8u;
        // 0x1fa1cc: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA1D0u;
        goto label_1fa1d0;
    }
    ctx->pc = 0x1FA1C8u;
    {
        const bool branch_taken_0x1fa1c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1C8u;
        // 0x1fa1cc: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1c8) {
            ctx->pc = 0x1FA610u;
            goto label_1fa610;
        }
    }
    ctx->pc = 0x1FA1D0u;
label_1fa1d0:
    // 0x1fa1d0: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x1fa1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_1fa1d4:
    // 0x1fa1d4: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1fa1d4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1fa1d8:
    // 0x1fa1d8: 0x26350090  addiu       $s5, $s1, 0x90
    ctx->pc = 0x1fa1d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_1fa1dc:
    // 0x1fa1dc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1fa1dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fa1e0:
    // 0x1fa1e0: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
label_1fa1e4:
    if (ctx->pc == 0x1FA1E4u) {
        ctx->pc = 0x1FA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1E0u;
        // 0x1fa1e4: 0x27b40100  addiu       $s4, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA1E8u;
        goto label_1fa1e8;
    }
    ctx->pc = 0x1FA1E0u;
    {
        const bool branch_taken_0x1fa1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1E0u;
        // 0x1fa1e4: 0x27b40100  addiu       $s4, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1e0) {
            ctx->pc = 0x1FA338u;
            goto label_1fa338;
        }
    }
    ctx->pc = 0x1FA1E8u;
label_1fa1e8:
    // 0x1fa1e8: 0x922500e6  lbu         $a1, 0xE6($s1)
    ctx->pc = 0x1fa1e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa1ec:
    // 0x1fa1ec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1fa1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1fa1f0:
    // 0x1fa1f0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1fa1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1fa1f4:
    // 0x1fa1f4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1fa1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fa1f8:
    // 0x1fa1f8: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x1fa1f8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1fa1fc:
    // 0x1fa1fc: 0x2484eec0  addiu       $a0, $a0, -0x1140
    ctx->pc = 0x1fa1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962880));
label_1fa200:
    // 0x1fa200: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fa200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1fa204:
    // 0x1fa204: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1fa204u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1fa208:
    // 0x1fa208: 0x94470000  lhu         $a3, 0x0($v0)
    ctx->pc = 0x1fa208u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa20c:
    // 0x1fa20c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fa20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fa210:
    // 0x1fa210: 0x24c67b60  addiu       $a2, $a2, 0x7B60
    ctx->pc = 0x1fa210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31584));
label_1fa214:
    // 0x1fa214: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1fa214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1fa218:
    // 0x1fa218: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1fa218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1fa21c:
    // 0x1fa21c: 0xc10ca04  jal         func_432810
label_1fa220:
    if (ctx->pc == 0x1FA220u) {
        ctx->pc = 0x1FA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA21Cu;
        // 0x1fa220: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA224u;
        goto label_1fa224;
    }
    ctx->pc = 0x1FA21Cu;
    SET_GPR_U32(ctx, 31, 0x1FA224u);
    ctx->pc = 0x1FA220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA21Cu;
    // 0x1fa220: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1FA21Cu, 0x1FA224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA224u;
label_1fa224:
    // 0x1fa224: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1fa224u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa228:
    // 0x1fa228: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1fa228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1fa22c:
    // 0x1fa22c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fa22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fa230:
    // 0x1fa230: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1fa230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fa234:
    // 0x1fa234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fa234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa238:
    // 0x1fa238: 0xc043f1c  jal         func_10FC70
label_1fa23c:
    if (ctx->pc == 0x1FA23Cu) {
        ctx->pc = 0x1FA23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA238u;
        // 0x1fa23c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA240u;
        goto label_1fa240;
    }
    ctx->pc = 0x1FA238u;
    SET_GPR_U32(ctx, 31, 0x1FA240u);
    ctx->pc = 0x1FA23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA238u;
    // 0x1fa23c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x1FA238u, 0x1FA240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA240u;
label_1fa240:
    // 0x1fa240: 0xae2200f8  sw          $v0, 0xF8($s1)
    ctx->pc = 0x1fa240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
label_1fa244:
    // 0x1fa244: 0xc043d5e  jal         func_10F578
label_1fa248:
    if (ctx->pc == 0x1FA248u) {
        ctx->pc = 0x1FA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA244u;
        // 0x1fa248: 0x262400f8  addiu       $a0, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA24Cu;
        goto label_1fa24c;
    }
    ctx->pc = 0x1FA244u;
    SET_GPR_U32(ctx, 31, 0x1FA24Cu);
    ctx->pc = 0x1FA248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA244u;
    // 0x1fa248: 0x262400f8  addiu       $a0, $s1, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1FA244u, 0x1FA24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA24Cu;
label_1fa24c:
    // 0x1fa24c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_1fa250:
    if (ctx->pc == 0x1FA250u) {
        ctx->pc = 0x1FA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA24Cu;
        // 0x1fa250: 0x922200e6  lbu         $v0, 0xE6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA254u;
        goto label_1fa254;
    }
    ctx->pc = 0x1FA24Cu;
    {
        const bool branch_taken_0x1fa24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa24c) {
            ctx->pc = 0x1FA250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA24Cu;
            // 0x1fa250: 0x922200e6  lbu         $v0, 0xE6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA2ECu;
            goto label_1fa2ec;
        }
    }
    ctx->pc = 0x1FA254u;
label_1fa254:
    // 0x1fa254: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1fa254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1fa258:
    // 0x1fa258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fa258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa25c:
    // 0x1fa25c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa260:
    // 0x1fa260: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1fa260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1fa264:
    // 0x1fa264: 0xc0cd4fc  jal         func_3353F0
label_1fa268:
    if (ctx->pc == 0x1FA268u) {
        ctx->pc = 0x1FA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA264u;
        // 0x1fa268: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA26Cu;
        goto label_1fa26c;
    }
    ctx->pc = 0x1FA264u;
    SET_GPR_U32(ctx, 31, 0x1FA26Cu);
    ctx->pc = 0x1FA268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA264u;
    // 0x1fa268: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x1FA264u, 0x1FA26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA26Cu;
label_1fa26c:
    // 0x1fa26c: 0x922300e6  lbu         $v1, 0xE6($s1)
    ctx->pc = 0x1fa26cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa270:
    // 0x1fa270: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1fa274:
    if (ctx->pc == 0x1FA274u) {
        ctx->pc = 0x1FA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA270u;
        // 0x1fa274: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA278u;
        goto label_1fa278;
    }
    ctx->pc = 0x1FA270u;
    {
        const bool branch_taken_0x1fa270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA270u;
        // 0x1fa274: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa270) {
            ctx->pc = 0x1FA284u;
            goto label_1fa284;
        }
    }
    ctx->pc = 0x1FA278u;
label_1fa278:
    // 0x1fa278: 0xae2700f0  sw          $a3, 0xF0($s1)
    ctx->pc = 0x1fa278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 7));
label_1fa27c:
    // 0x1fa27c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1fa280:
    if (ctx->pc == 0x1FA280u) {
        ctx->pc = 0x1FA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA27Cu;
        // 0x1fa280: 0x3c170055  lui         $s7, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA284u;
        goto label_1fa284;
    }
    ctx->pc = 0x1FA27Cu;
    {
        const bool branch_taken_0x1fa27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA27Cu;
        // 0x1fa280: 0x3c170055  lui         $s7, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa27c) {
            ctx->pc = 0x1FA2BCu;
            goto label_1fa2bc;
        }
    }
    ctx->pc = 0x1FA284u;
label_1fa284:
    // 0x1fa284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa288:
    // 0x1fa288: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_1fa28c:
    if (ctx->pc == 0x1FA28Cu) {
        ctx->pc = 0x1FA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA288u;
        // 0x1fa28c: 0x3c170055  lui         $s7, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA290u;
        goto label_1fa290;
    }
    ctx->pc = 0x1FA288u;
    {
        const bool branch_taken_0x1fa288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA288u;
        // 0x1fa28c: 0x3c170055  lui         $s7, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa288) {
            ctx->pc = 0x1FA2BCu;
            goto label_1fa2bc;
        }
    }
    ctx->pc = 0x1FA290u;
label_1fa290:
    // 0x1fa290: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1fa290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1fa294:
    // 0x1fa294: 0x14e2000a  bne         $a3, $v0, . + 4 + (0xA << 2)
label_1fa298:
    if (ctx->pc == 0x1FA298u) {
        ctx->pc = 0x1FA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA294u;
        // 0x1fa298: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA29Cu;
        goto label_1fa29c;
    }
    ctx->pc = 0x1FA294u;
    {
        const bool branch_taken_0x1fa294 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA294u;
        // 0x1fa298: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa294) {
            ctx->pc = 0x1FA2C0u;
            goto label_1fa2c0;
        }
    }
    ctx->pc = 0x1FA29Cu;
label_1fa29c:
    // 0x1fa29c: 0x2604b8a8  addiu       $a0, $s0, -0x4758
    ctx->pc = 0x1fa29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949032));
label_1fa2a0:
    // 0x1fa2a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fa2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa2a4:
    // 0x1fa2a4: 0xc0cd4fc  jal         func_3353F0
label_1fa2a8:
    if (ctx->pc == 0x1FA2A8u) {
        ctx->pc = 0x1FA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2A4u;
        // 0x1fa2a8: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA2ACu;
        goto label_1fa2ac;
    }
    ctx->pc = 0x1FA2A4u;
    SET_GPR_U32(ctx, 31, 0x1FA2ACu);
    ctx->pc = 0x1FA2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2A4u;
    // 0x1fa2a8: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x1FA2A4u, 0x1FA2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2ACu;
label_1fa2ac:
    // 0x1fa2ac: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1fa2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1fa2b0:
    // 0x1fa2b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1fa2b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fa2b4:
    // 0x1fa2b4: 0x10e3fffa  beq         $a3, $v1, . + 4 + (-0x6 << 2)
label_1fa2b8:
    if (ctx->pc == 0x1FA2B8u) {
        ctx->pc = 0x1FA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2B4u;
        // 0x1fa2b8: 0x2604b8a8  addiu       $a0, $s0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA2BCu;
        goto label_1fa2bc;
    }
    ctx->pc = 0x1FA2B4u;
    {
        const bool branch_taken_0x1fa2b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2B4u;
        // 0x1fa2b8: 0x2604b8a8  addiu       $a0, $s0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2b4) {
            ctx->pc = 0x1FA2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa2a0;
        }
    }
    ctx->pc = 0x1FA2BCu;
label_1fa2bc:
    // 0x1fa2bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fa2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fa2c0:
    // 0x1fa2c0: 0x26e67b90  addiu       $a2, $s7, 0x7B90
    ctx->pc = 0x1fa2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 31632));
label_1fa2c4:
    // 0x1fa2c4: 0xc10ca04  jal         func_432810
label_1fa2c8:
    if (ctx->pc == 0x1FA2C8u) {
        ctx->pc = 0x1FA2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2C4u;
        // 0x1fa2c8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA2CCu;
        goto label_1fa2cc;
    }
    ctx->pc = 0x1FA2C4u;
    SET_GPR_U32(ctx, 31, 0x1FA2CCu);
    ctx->pc = 0x1FA2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2C4u;
    // 0x1fa2c8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1FA2C4u, 0x1FA2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2CCu;
label_1fa2cc:
    // 0x1fa2cc: 0x8ec4aa84  lw          $a0, -0x557C($s6)
    ctx->pc = 0x1fa2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945412)));
label_1fa2d0:
    // 0x1fa2d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fa2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fa2d4:
    // 0x1fa2d4: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1fa2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fa2d8:
    // 0x1fa2d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fa2d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa2dc:
    // 0x1fa2dc: 0xc043f1c  jal         func_10FC70
label_1fa2e0:
    if (ctx->pc == 0x1FA2E0u) {
        ctx->pc = 0x1FA2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2DCu;
        // 0x1fa2e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA2E4u;
        goto label_1fa2e4;
    }
    ctx->pc = 0x1FA2DCu;
    SET_GPR_U32(ctx, 31, 0x1FA2E4u);
    ctx->pc = 0x1FA2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2DCu;
    // 0x1fa2e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x1FA2DCu, 0x1FA2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2E4u;
label_1fa2e4:
    // 0x1fa2e4: 0xae2200f8  sw          $v0, 0xF8($s1)
    ctx->pc = 0x1fa2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
label_1fa2e8:
    // 0x1fa2e8: 0x922200e6  lbu         $v0, 0xE6($s1)
    ctx->pc = 0x1fa2e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa2ec:
    // 0x1fa2ec: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1fa2f0:
    if (ctx->pc == 0x1FA2F0u) {
        ctx->pc = 0x1FA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2ECu;
        // 0x1fa2f0: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA2F4u;
        goto label_1fa2f4;
    }
    ctx->pc = 0x1FA2ECu;
    {
        const bool branch_taken_0x1fa2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa2ec) {
            ctx->pc = 0x1FA2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA2ECu;
            // 0x1fa2f0: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA318u;
            goto label_1fa318;
        }
    }
    ctx->pc = 0x1FA2F4u;
label_1fa2f4:
    // 0x1fa2f4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1fa2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1fa2f8:
    // 0x1fa2f8: 0x8ec4aa84  lw          $a0, -0x557C($s6)
    ctx->pc = 0x1fa2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945412)));
label_1fa2fc:
    // 0x1fa2fc: 0x24a57bc8  addiu       $a1, $a1, 0x7BC8
    ctx->pc = 0x1fa2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31688));
label_1fa300:
    // 0x1fa300: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1fa300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fa304:
    // 0x1fa304: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fa304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa308:
    // 0x1fa308: 0xc043f1c  jal         func_10FC70
label_1fa30c:
    if (ctx->pc == 0x1FA30Cu) {
        ctx->pc = 0x1FA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA308u;
        // 0x1fa30c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA310u;
        goto label_1fa310;
    }
    ctx->pc = 0x1FA308u;
    SET_GPR_U32(ctx, 31, 0x1FA310u);
    ctx->pc = 0x1FA30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA308u;
    // 0x1fa30c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x1FA308u, 0x1FA310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA310u;
label_1fa310:
    // 0x1fa310: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fa314:
    if (ctx->pc == 0x1FA314u) {
        ctx->pc = 0x1FA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA310u;
        // 0x1fa314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA318u;
        goto label_1fa318;
    }
    ctx->pc = 0x1FA310u;
    {
        const bool branch_taken_0x1fa310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA310u;
        // 0x1fa314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa310) {
            ctx->pc = 0x1FA334u;
            goto label_1fa334;
        }
    }
    ctx->pc = 0x1FA318u;
label_1fa318:
    // 0x1fa318: 0x8ec4aa84  lw          $a0, -0x557C($s6)
    ctx->pc = 0x1fa318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945412)));
label_1fa31c:
    // 0x1fa31c: 0x24a57be8  addiu       $a1, $a1, 0x7BE8
    ctx->pc = 0x1fa31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31720));
label_1fa320:
    // 0x1fa320: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1fa320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fa324:
    // 0x1fa324: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fa324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa328:
    // 0x1fa328: 0xc043f1c  jal         func_10FC70
label_1fa32c:
    if (ctx->pc == 0x1FA32Cu) {
        ctx->pc = 0x1FA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA328u;
        // 0x1fa32c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA330u;
        goto label_1fa330;
    }
    ctx->pc = 0x1FA328u;
    SET_GPR_U32(ctx, 31, 0x1FA330u);
    ctx->pc = 0x1FA32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA328u;
    // 0x1fa32c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x1FA328u, 0x1FA330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA330u;
label_1fa330:
    // 0x1fa330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa334:
    // 0x1fa334: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x1fa334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_1fa338:
    // 0x1fa338: 0x922200e6  lbu         $v0, 0xE6($s1)
    ctx->pc = 0x1fa338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa33c:
    // 0x1fa33c: 0x8fc6f47c  lw          $a2, -0xB84($fp)
    ctx->pc = 0x1fa33cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294964348)));
label_1fa340:
    // 0x1fa340: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fa344:
    // 0x1fa344: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fa344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1fa348:
    // 0x1fa348: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fa348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fa34c:
    // 0x1fa34c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1fa34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1fa350:
    // 0x1fa350: 0xd3202b  sltu        $a0, $a2, $s3
    ctx->pc = 0x1fa350u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1fa354:
    // 0x1fa354: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fa354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa358:
    // 0x1fa358: 0xc4980b  movn        $s3, $a2, $a0
    ctx->pc = 0x1fa358u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
label_1fa35c:
    // 0x1fa35c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fa35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fa360:
    // 0x1fa360: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1fa360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1fa364:
    // 0x1fa364: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1fa364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1fa368:
    // 0x1fa368: 0x40f809  jalr        $v0
label_1fa36c:
    if (ctx->pc == 0x1FA36Cu) {
        ctx->pc = 0x1FA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA368u;
        // 0x1fa36c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA370u;
        goto label_1fa370;
    }
    ctx->pc = 0x1FA368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA370u);
        ctx->pc = 0x1FA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA368u;
        // 0x1fa36c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA368u, 0x1FA370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA370u;
label_1fa370:
    // 0x1fa370: 0x922300e6  lbu         $v1, 0xE6($s1)
    ctx->pc = 0x1fa370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa374:
    // 0x1fa374: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fa374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fa378:
    // 0x1fa378: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1fa378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_1fa37c:
    // 0x1fa37c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fa37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fa380:
    // 0x1fa380: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1fa380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1fa384:
    // 0x1fa384: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1fa384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fa388:
    // 0x1fa388: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fa388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fa38c:
    // 0x1fa38c: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1fa38cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1fa390:
    // 0x1fa390: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1fa390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1fa394:
    // 0x1fa394: 0x60f809  jalr        $v1
label_1fa398:
    if (ctx->pc == 0x1FA398u) {
        ctx->pc = 0x1FA398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA394u;
        // 0x1fa398: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA39Cu;
        goto label_1fa39c;
    }
    ctx->pc = 0x1FA394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FA39Cu);
        ctx->pc = 0x1FA398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA394u;
        // 0x1fa398: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA394u, 0x1FA39Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA39Cu;
label_1fa39c:
    // 0x1fa39c: 0x922200e6  lbu         $v0, 0xE6($s1)
    ctx->pc = 0x1fa39cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa3a0:
    // 0x1fa3a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fa3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fa3a4:
    // 0x1fa3a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fa3a8:
    // 0x1fa3a8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1fa3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1fa3ac:
    // 0x1fa3ac: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1fa3acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa3b0:
    // 0x1fa3b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1fa3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fa3b4:
    // 0x1fa3b4: 0x84650070  lh          $a1, 0x70($v1)
    ctx->pc = 0x1fa3b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1fa3b8:
    // 0x1fa3b8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1fa3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1fa3bc:
    // 0x1fa3bc: 0x40f809  jalr        $v0
label_1fa3c0:
    if (ctx->pc == 0x1FA3C0u) {
        ctx->pc = 0x1FA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3BCu;
        // 0x1fa3c0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA3C4u;
        goto label_1fa3c4;
    }
    ctx->pc = 0x1FA3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA3C4u);
        ctx->pc = 0x1FA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3BCu;
        // 0x1fa3c0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA3BCu, 0x1FA3C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA3C4u;
label_1fa3c4:
    // 0x1fa3c4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1fa3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa3c8:
    // 0x1fa3c8: 0x922200e6  lbu         $v0, 0xE6($s1)
    ctx->pc = 0x1fa3c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa3cc:
    // 0x1fa3cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1fa3ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1fa3d0:
    // 0x1fa3d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fa3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1fa3d4:
    // 0x1fa3d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1fa3d8:
    if (ctx->pc == 0x1FA3D8u) {
        ctx->pc = 0x1FA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3D4u;
        // 0x1fa3d8: 0x460003c7  neg.s       $f15, $f0 (Delay Slot)
        ctx->f[15] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA3DCu;
        goto label_1fa3dc;
    }
    ctx->pc = 0x1FA3D4u;
    {
        const bool branch_taken_0x1fa3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3D4u;
        // 0x1fa3d8: 0x460003c7  neg.s       $f15, $f0 (Delay Slot)
        ctx->f[15] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3d4) {
            ctx->pc = 0x1FA418u;
            goto label_1fa418;
        }
    }
    ctx->pc = 0x1FA3DCu;
label_1fa3dc:
    // 0x1fa3dc: 0x922200e6  lbu         $v0, 0xE6($s1)
    ctx->pc = 0x1fa3dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa3e0:
    // 0x1fa3e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fa3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fa3e4:
    // 0x1fa3e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fa3e8:
    // 0x1fa3e8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1fa3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1fa3ec:
    // 0x1fa3ec: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1fa3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa3f0:
    // 0x1fa3f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1fa3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fa3f4:
    // 0x1fa3f4: 0x84650070  lh          $a1, 0x70($v1)
    ctx->pc = 0x1fa3f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1fa3f8:
    // 0x1fa3f8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1fa3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1fa3fc:
    // 0x1fa3fc: 0x40f809  jalr        $v0
label_1fa400:
    if (ctx->pc == 0x1FA400u) {
        ctx->pc = 0x1FA400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3FCu;
        // 0x1fa400: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA404u;
        goto label_1fa404;
    }
    ctx->pc = 0x1FA3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA404u);
        ctx->pc = 0x1FA400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3FCu;
        // 0x1fa400: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA3FCu, 0x1FA404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA404u;
label_1fa404:
    // 0x1fa404: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1fa404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa408:
    // 0x1fa408: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fa408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1fa40c:
    // 0x1fa40c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa410:
    // 0x1fa410: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1fa410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1fa414:
    // 0x1fa414: 0x460103c0  add.s       $f15, $f0, $f1
    ctx->pc = 0x1fa414u;
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fa418:
    // 0x1fa418: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_1fa41c:
    if (ctx->pc == 0x1FA41Cu) {
        ctx->pc = 0x1FA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA418u;
        // 0x1fa41c: 0x8fc2f47c  lw          $v0, -0xB84($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294964348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA420u;
        goto label_1fa420;
    }
    ctx->pc = 0x1FA418u;
    {
        const bool branch_taken_0x1fa418 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1FA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA418u;
        // 0x1fa41c: 0x8fc2f47c  lw          $v0, -0xB84($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294964348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa418) {
            ctx->pc = 0x1FA434u;
            goto label_1fa434;
        }
    }
    ctx->pc = 0x1FA420u;
label_1fa420:
    // 0x1fa420: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x1fa420u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fa424:
    // 0x1fa424: 0x0  nop
    ctx->pc = 0x1fa424u;
    // NOP
label_1fa428:
    // 0x1fa428: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fa428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fa42c:
    // 0x1fa42c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1fa430:
    if (ctx->pc == 0x1FA430u) {
        ctx->pc = 0x1FA434u;
        goto label_1fa434;
    }
    ctx->pc = 0x1FA42Cu;
    {
        const bool branch_taken_0x1fa42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa42c) {
            ctx->pc = 0x1FA454u;
            goto label_1fa454;
        }
    }
    ctx->pc = 0x1FA434u;
label_1fa434:
    // 0x1fa434: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1fa434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_1fa438:
    // 0x1fa438: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x1fa438u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_1fa43c:
    // 0x1fa43c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fa43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fa440:
    // 0x1fa440: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fa440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fa444:
    // 0x1fa444: 0x0  nop
    ctx->pc = 0x1fa444u;
    // NOP
label_1fa448:
    // 0x1fa448: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fa448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fa44c:
    // 0x1fa44c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fa44cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fa450:
    // 0x1fa450: 0x8fc2f47c  lw          $v0, -0xB84($fp)
    ctx->pc = 0x1fa450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294964348)));
label_1fa454:
    // 0x1fa454: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1fa458:
    if (ctx->pc == 0x1FA458u) {
        ctx->pc = 0x1FA458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA454u;
        // 0x1fa458: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA45Cu;
        goto label_1fa45c;
    }
    ctx->pc = 0x1FA454u;
    {
        const bool branch_taken_0x1fa454 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FA458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA454u;
        // 0x1fa458: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa454) {
            ctx->pc = 0x1FA470u;
            goto label_1fa470;
        }
    }
    ctx->pc = 0x1FA45Cu;
label_1fa45c:
    // 0x1fa45c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1fa45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fa460:
    // 0x1fa460: 0x0  nop
    ctx->pc = 0x1fa460u;
    // NOP
label_1fa464:
    // 0x1fa464: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1fa464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1fa468:
    // 0x1fa468: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fa46c:
    if (ctx->pc == 0x1FA46Cu) {
        ctx->pc = 0x1FA470u;
        goto label_1fa470;
    }
    ctx->pc = 0x1FA468u;
    {
        const bool branch_taken_0x1fa468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa468) {
            ctx->pc = 0x1FA488u;
            goto label_1fa488;
        }
    }
    ctx->pc = 0x1FA470u;
label_1fa470:
    // 0x1fa470: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fa470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1fa474:
    // 0x1fa474: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fa474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fa478:
    // 0x1fa478: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1fa478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fa47c:
    // 0x1fa47c: 0x0  nop
    ctx->pc = 0x1fa47cu;
    // NOP
label_1fa480:
    // 0x1fa480: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1fa480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1fa484:
    // 0x1fa484: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x1fa484u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_1fa488:
    // 0x1fa488: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fa488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fa48c:
    // 0x1fa48c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fa48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1fa490:
    // 0x1fa490: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1fa490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1fa494:
    // 0x1fa494: 0xc0cdd5a  jal         func_337568
label_1fa498:
    if (ctx->pc == 0x1FA498u) {
        ctx->pc = 0x1FA49Cu;
        goto label_1fa49c;
    }
    ctx->pc = 0x1FA494u;
    SET_GPR_U32(ctx, 31, 0x1FA49Cu);
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x1FA494u, 0x1FA49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA49Cu;
label_1fa49c:
    // 0x1fa49c: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_1fa4a0:
    if (ctx->pc == 0x1FA4A0u) {
        ctx->pc = 0x1FA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA49Cu;
        // 0x1fa4a0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA4A4u;
        goto label_1fa4a4;
    }
    ctx->pc = 0x1FA49Cu;
    {
        const bool branch_taken_0x1fa49c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1FA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA49Cu;
        // 0x1fa4a0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa49c) {
            ctx->pc = 0x1FA4B8u;
            goto label_1fa4b8;
        }
    }
    ctx->pc = 0x1FA4A4u;
label_1fa4a4:
    // 0x1fa4a4: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x1fa4a4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fa4a8:
    // 0x1fa4a8: 0x0  nop
    ctx->pc = 0x1fa4a8u;
    // NOP
label_1fa4ac:
    // 0x1fa4ac: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fa4acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fa4b0:
    // 0x1fa4b0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1fa4b4:
    if (ctx->pc == 0x1FA4B4u) {
        ctx->pc = 0x1FA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4B0u;
        // 0x1fa4b4: 0x8fc2f47c  lw          $v0, -0xB84($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294964348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA4B8u;
        goto label_1fa4b8;
    }
    ctx->pc = 0x1FA4B0u;
    {
        const bool branch_taken_0x1fa4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4B0u;
        // 0x1fa4b4: 0x8fc2f47c  lw          $v0, -0xB84($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294964348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4b0) {
            ctx->pc = 0x1FA4D8u;
            goto label_1fa4d8;
        }
    }
    ctx->pc = 0x1FA4B8u;
label_1fa4b8:
    // 0x1fa4b8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1fa4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_1fa4bc:
    // 0x1fa4bc: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x1fa4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_1fa4c0:
    // 0x1fa4c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fa4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fa4c4:
    // 0x1fa4c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fa4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fa4c8:
    // 0x1fa4c8: 0x0  nop
    ctx->pc = 0x1fa4c8u;
    // NOP
label_1fa4cc:
    // 0x1fa4cc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fa4ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fa4d0:
    // 0x1fa4d0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fa4d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fa4d4:
    // 0x1fa4d4: 0x8fc2f47c  lw          $v0, -0xB84($fp)
    ctx->pc = 0x1fa4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294964348)));
label_1fa4d8:
    // 0x1fa4d8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1fa4dc:
    if (ctx->pc == 0x1FA4DCu) {
        ctx->pc = 0x1FA4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4D8u;
        // 0x1fa4dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA4E0u;
        goto label_1fa4e0;
    }
    ctx->pc = 0x1FA4D8u;
    {
        const bool branch_taken_0x1fa4d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FA4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4D8u;
        // 0x1fa4dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4d8) {
            ctx->pc = 0x1FA4F4u;
            goto label_1fa4f4;
        }
    }
    ctx->pc = 0x1FA4E0u;
label_1fa4e0:
    // 0x1fa4e0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1fa4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fa4e4:
    // 0x1fa4e4: 0x0  nop
    ctx->pc = 0x1fa4e4u;
    // NOP
label_1fa4e8:
    // 0x1fa4e8: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1fa4e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1fa4ec:
    // 0x1fa4ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fa4f0:
    if (ctx->pc == 0x1FA4F0u) {
        ctx->pc = 0x1FA4F4u;
        goto label_1fa4f4;
    }
    ctx->pc = 0x1FA4ECu;
    {
        const bool branch_taken_0x1fa4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa4ec) {
            ctx->pc = 0x1FA50Cu;
            goto label_1fa50c;
        }
    }
    ctx->pc = 0x1FA4F4u;
label_1fa4f4:
    // 0x1fa4f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fa4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1fa4f8:
    // 0x1fa4f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fa4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fa4fc:
    // 0x1fa4fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1fa4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fa500:
    // 0x1fa500: 0x0  nop
    ctx->pc = 0x1fa500u;
    // NOP
label_1fa504:
    // 0x1fa504: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1fa504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1fa508:
    // 0x1fa508: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x1fa508u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_1fa50c:
    // 0x1fa50c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fa50cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fa510:
    // 0x1fa510: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1fa510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1fa514:
    // 0x1fa514: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1fa514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1fa518:
    // 0x1fa518: 0xc0cdd5a  jal         func_337568
label_1fa51c:
    if (ctx->pc == 0x1FA51Cu) {
        ctx->pc = 0x1FA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA518u;
        // 0x1fa51c: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA520u;
        goto label_1fa520;
    }
    ctx->pc = 0x1FA518u;
    SET_GPR_U32(ctx, 31, 0x1FA520u);
    ctx->pc = 0x1FA51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA518u;
    // 0x1fa51c: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x1FA518u, 0x1FA520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA520u;
label_1fa520:
    // 0x1fa520: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa520u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1fa524:
    // 0x1fa524: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1fa524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1fa528:
    // 0x1fa528: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fa528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fa52c:
    // 0x1fa52c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fa52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa530:
    // 0x1fa530: 0xa2830003  sb          $v1, 0x3($s4)
    ctx->pc = 0x1fa530u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 3));
label_1fa534:
    // 0x1fa534: 0x922200e6  lbu         $v0, 0xE6($s1)
    ctx->pc = 0x1fa534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa538:
    // 0x1fa538: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fa53c:
    // 0x1fa53c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1fa53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1fa540:
    // 0x1fa540: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1fa540u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa544:
    // 0x1fa544: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1fa544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1fa548:
    // 0x1fa548: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1fa548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1fa54c:
    // 0x1fa54c: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x1fa54cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fa550:
    // 0x1fa550: 0xe0f809  jalr        $a3
label_1fa554:
    if (ctx->pc == 0x1FA554u) {
        ctx->pc = 0x1FA554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA550u;
        // 0x1fa554: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA558u;
        goto label_1fa558;
    }
    ctx->pc = 0x1FA550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1FA558u);
        ctx->pc = 0x1FA554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA550u;
        // 0x1fa554: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA550u, 0x1FA558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA558u;
label_1fa558:
    // 0x1fa558: 0x922200e6  lbu         $v0, 0xE6($s1)
    ctx->pc = 0x1fa558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa55c:
    // 0x1fa55c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fa55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fa560:
    // 0x1fa560: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fa564:
    // 0x1fa564: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1fa564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1fa568:
    // 0x1fa568: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1fa568u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa56c:
    // 0x1fa56c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1fa56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fa570:
    // 0x1fa570: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1fa570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1fa574:
    // 0x1fa574: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x1fa574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1fa578:
    // 0x1fa578: 0xc0f809  jalr        $a2
label_1fa57c:
    if (ctx->pc == 0x1FA57Cu) {
        ctx->pc = 0x1FA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA578u;
        // 0x1fa57c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA580u;
        goto label_1fa580;
    }
    ctx->pc = 0x1FA578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1FA580u);
        ctx->pc = 0x1FA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA578u;
        // 0x1fa57c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA578u, 0x1FA580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA580u;
label_1fa580:
    // 0x1fa580: 0x922200e6  lbu         $v0, 0xE6($s1)
    ctx->pc = 0x1fa580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa584:
    // 0x1fa584: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fa584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa588:
    // 0x1fa588: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fa58c:
    // 0x1fa58c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1fa58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1fa590:
    // 0x1fa590: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1fa590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa594:
    // 0x1fa594: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1fa594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fa598:
    // 0x1fa598: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1fa598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1fa59c:
    // 0x1fa59c: 0x8c660044  lw          $a2, 0x44($v1)
    ctx->pc = 0x1fa59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1fa5a0:
    // 0x1fa5a0: 0xc0f809  jalr        $a2
label_1fa5a4:
    if (ctx->pc == 0x1FA5A4u) {
        ctx->pc = 0x1FA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5A0u;
        // 0x1fa5a4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA5A8u;
        goto label_1fa5a8;
    }
    ctx->pc = 0x1FA5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1FA5A8u);
        ctx->pc = 0x1FA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5A0u;
        // 0x1fa5a4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA5A0u, 0x1FA5A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA5A8u;
label_1fa5a8:
    // 0x1fa5a8: 0x8fc2f47c  lw          $v0, -0xB84($fp)
    ctx->pc = 0x1fa5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294964348)));
label_1fa5ac:
    // 0x1fa5ac: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1fa5acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fa5b0:
    // 0x1fa5b0: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_1fa5b4:
    if (ctx->pc == 0x1FA5B4u) {
        ctx->pc = 0x1FA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5B0u;
        // 0x1fa5b4: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA5B8u;
        goto label_1fa5b8;
    }
    ctx->pc = 0x1FA5B0u;
    {
        const bool branch_taken_0x1fa5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5B0u;
        // 0x1fa5b4: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa5b0) {
            ctx->pc = 0x1FA710u;
            goto label_1fa710;
        }
    }
    ctx->pc = 0x1FA5B8u;
label_1fa5b8:
    // 0x1fa5b8: 0xc043d5e  jal         func_10F578
label_1fa5bc:
    if (ctx->pc == 0x1FA5BCu) {
        ctx->pc = 0x1FA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5B8u;
        // 0x1fa5bc: 0x262400f8  addiu       $a0, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA5C0u;
        goto label_1fa5c0;
    }
    ctx->pc = 0x1FA5B8u;
    SET_GPR_U32(ctx, 31, 0x1FA5C0u);
    ctx->pc = 0x1FA5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA5B8u;
    // 0x1fa5bc: 0x262400f8  addiu       $a0, $s1, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1FA5B8u, 0x1FA5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5C0u;
label_1fa5c0:
    // 0x1fa5c0: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
label_1fa5c4:
    if (ctx->pc == 0x1FA5C4u) {
        ctx->pc = 0x1FA5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5C0u;
        // 0x1fa5c4: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA5C8u;
        goto label_1fa5c8;
    }
    ctx->pc = 0x1FA5C0u;
    {
        const bool branch_taken_0x1fa5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5C0u;
        // 0x1fa5c4: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa5c0) {
            ctx->pc = 0x1FA710u;
            goto label_1fa710;
        }
    }
    ctx->pc = 0x1FA5C8u;
label_1fa5c8:
    // 0x1fa5c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fa5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fa5cc:
    // 0x1fa5cc: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1fa5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1fa5d0:
    // 0x1fa5d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fa5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fa5d4:
    // 0x1fa5d4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fa5d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fa5d8:
    // 0x1fa5d8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1fa5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fa5dc:
    // 0x1fa5dc: 0x40f809  jalr        $v0
label_1fa5e0:
    if (ctx->pc == 0x1FA5E0u) {
        ctx->pc = 0x1FA5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5DCu;
        // 0x1fa5e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA5E4u;
        goto label_1fa5e4;
    }
    ctx->pc = 0x1FA5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA5E4u);
        ctx->pc = 0x1FA5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5DCu;
        // 0x1fa5e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA5DCu, 0x1FA5E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA5E4u;
label_1fa5e4:
    // 0x1fa5e4: 0x922300e6  lbu         $v1, 0xE6($s1)
    ctx->pc = 0x1fa5e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa5e8:
    // 0x1fa5e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fa5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa5ec:
    // 0x1fa5ec: 0x922500e5  lbu         $a1, 0xE5($s1)
    ctx->pc = 0x1fa5ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1fa5f0:
    // 0x1fa5f0: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x1fa5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_1fa5f4:
    // 0x1fa5f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fa5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fa5f8:
    // 0x1fa5f8: 0x14650044  bne         $v1, $a1, . + 4 + (0x44 << 2)
label_1fa5fc:
    if (ctx->pc == 0x1FA5FCu) {
        ctx->pc = 0x1FA5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5F8u;
        // 0x1fa5fc: 0xae2400ec  sw          $a0, 0xEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA600u;
        goto label_1fa600;
    }
    ctx->pc = 0x1FA5F8u;
    {
        const bool branch_taken_0x1fa5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FA5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5F8u;
        // 0x1fa5fc: 0xae2400ec  sw          $a0, 0xEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa5f8) {
            ctx->pc = 0x1FA70Cu;
            goto label_1fa70c;
        }
    }
    ctx->pc = 0x1FA600u;
label_1fa600:
    // 0x1fa600: 0x922200e4  lbu         $v0, 0xE4($s1)
    ctx->pc = 0x1fa600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
label_1fa604:
    // 0x1fa604: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fa604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fa608:
    // 0x1fa608: 0x10000040  b           . + 4 + (0x40 << 2)
label_1fa60c:
    if (ctx->pc == 0x1FA60Cu) {
        ctx->pc = 0x1FA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA608u;
        // 0x1fa60c: 0xa22200e4  sb          $v0, 0xE4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 228), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA610u;
        goto label_1fa610;
    }
    ctx->pc = 0x1FA608u;
    {
        const bool branch_taken_0x1fa608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA608u;
        // 0x1fa60c: 0xa22200e4  sb          $v0, 0xE4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 228), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa608) {
            ctx->pc = 0x1FA70Cu;
            goto label_1fa70c;
        }
    }
    ctx->pc = 0x1FA610u;
label_1fa610:
    // 0x1fa610: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fa610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fa614:
    // 0x1fa614: 0x8c62f480  lw          $v0, -0xB80($v1)
    ctx->pc = 0x1fa614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964352)));
label_1fa618:
    // 0x1fa618: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1fa618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fa61c:
    // 0x1fa61c: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_1fa620:
    if (ctx->pc == 0x1FA620u) {
        ctx->pc = 0x1FA620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA61Cu;
        // 0x1fa620: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA624u;
        goto label_1fa624;
    }
    ctx->pc = 0x1FA61Cu;
    {
        const bool branch_taken_0x1fa61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA61Cu;
        // 0x1fa620: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa61c) {
            ctx->pc = 0x1FA710u;
            goto label_1fa710;
        }
    }
    ctx->pc = 0x1FA624u;
label_1fa624:
    // 0x1fa624: 0xc043d5e  jal         func_10F578
label_1fa628:
    if (ctx->pc == 0x1FA628u) {
        ctx->pc = 0x1FA628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA624u;
        // 0x1fa628: 0x262400f8  addiu       $a0, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA62Cu;
        goto label_1fa62c;
    }
    ctx->pc = 0x1FA624u;
    SET_GPR_U32(ctx, 31, 0x1FA62Cu);
    ctx->pc = 0x1FA628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA624u;
    // 0x1fa628: 0x262400f8  addiu       $a0, $s1, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1FA624u, 0x1FA62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA62Cu;
label_1fa62c:
    // 0x1fa62c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_1fa630:
    if (ctx->pc == 0x1FA630u) {
        ctx->pc = 0x1FA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA62Cu;
        // 0x1fa630: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA634u;
        goto label_1fa634;
    }
    ctx->pc = 0x1FA62Cu;
    {
        const bool branch_taken_0x1fa62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA62Cu;
        // 0x1fa630: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa62c) {
            ctx->pc = 0x1FA710u;
            goto label_1fa710;
        }
    }
    ctx->pc = 0x1FA634u;
label_1fa634:
    // 0x1fa634: 0x922200e6  lbu         $v0, 0xE6($s1)
    ctx->pc = 0x1fa634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa638:
    // 0x1fa638: 0x263000b8  addiu       $s0, $s1, 0xB8
    ctx->pc = 0x1fa638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
label_1fa63c:
    // 0x1fa63c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fa640:
    // 0x1fa640: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1fa640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1fa644:
    // 0x1fa644: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fa644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa648:
    // 0x1fa648: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fa648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fa64c:
    // 0x1fa64c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1fa64cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1fa650:
    // 0x1fa650: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1fa650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1fa654:
    // 0x1fa654: 0x40f809  jalr        $v0
label_1fa658:
    if (ctx->pc == 0x1FA658u) {
        ctx->pc = 0x1FA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA654u;
        // 0x1fa658: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA65Cu;
        goto label_1fa65c;
    }
    ctx->pc = 0x1FA654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA65Cu);
        ctx->pc = 0x1FA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA654u;
        // 0x1fa658: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA654u, 0x1FA65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA65Cu;
label_1fa65c:
    // 0x1fa65c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1fa660:
    if (ctx->pc == 0x1FA660u) {
        ctx->pc = 0x1FA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA65Cu;
        // 0x1fa660: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA664u;
        goto label_1fa664;
    }
    ctx->pc = 0x1FA65Cu;
    {
        const bool branch_taken_0x1fa65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa65c) {
            ctx->pc = 0x1FA660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA65Cu;
            // 0x1fa660: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA67Cu;
            goto label_1fa67c;
        }
    }
    ctx->pc = 0x1FA664u;
label_1fa664:
    // 0x1fa664: 0x922200e6  lbu         $v0, 0xE6($s1)
    ctx->pc = 0x1fa664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa668:
    // 0x1fa668: 0xae2000ec  sw          $zero, 0xEC($s1)
    ctx->pc = 0x1fa668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
label_1fa66c:
    // 0x1fa66c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fa66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fa670:
    // 0x1fa670: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x1fa670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_1fa674:
    // 0x1fa674: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1fa678:
    if (ctx->pc == 0x1FA678u) {
        ctx->pc = 0x1FA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA674u;
        // 0x1fa678: 0xa22200e6  sb          $v0, 0xE6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 230), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA67Cu;
        goto label_1fa67c;
    }
    ctx->pc = 0x1FA674u;
    {
        const bool branch_taken_0x1fa674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA674u;
        // 0x1fa678: 0xa22200e6  sb          $v0, 0xE6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 230), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa674) {
            ctx->pc = 0x1FA6ECu;
            goto label_1fa6ec;
        }
    }
    ctx->pc = 0x1FA67Cu;
label_1fa67c:
    // 0x1fa67c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1fa67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1fa680:
    // 0x1fa680: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fa680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa684:
    // 0x1fa684: 0xc0cd4fc  jal         func_3353F0
label_1fa688:
    if (ctx->pc == 0x1FA688u) {
        ctx->pc = 0x1FA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA684u;
        // 0x1fa688: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA68Cu;
        goto label_1fa68c;
    }
    ctx->pc = 0x1FA684u;
    SET_GPR_U32(ctx, 31, 0x1FA68Cu);
    ctx->pc = 0x1FA688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA684u;
    // 0x1fa688: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x1FA684u, 0x1FA68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA68Cu;
label_1fa68c:
    // 0x1fa68c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1fa68cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1fa690:
    // 0x1fa690: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fa690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fa694:
    // 0x1fa694: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1fa694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fa698:
    // 0x1fa698: 0x24c67c08  addiu       $a2, $a2, 0x7C08
    ctx->pc = 0x1fa698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31752));
label_1fa69c:
    // 0x1fa69c: 0xc10ca04  jal         func_432810
label_1fa6a0:
    if (ctx->pc == 0x1FA6A0u) {
        ctx->pc = 0x1FA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA69Cu;
        // 0x1fa6a0: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA6A4u;
        goto label_1fa6a4;
    }
    ctx->pc = 0x1FA69Cu;
    SET_GPR_U32(ctx, 31, 0x1FA6A4u);
    ctx->pc = 0x1FA6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA69Cu;
    // 0x1fa6a0: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1FA69Cu, 0x1FA6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA6A4u;
label_1fa6a4:
    // 0x1fa6a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fa6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fa6a8:
    // 0x1fa6a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fa6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fa6ac:
    // 0x1fa6ac: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x1fa6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_1fa6b0:
    // 0x1fa6b0: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1fa6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fa6b4:
    // 0x1fa6b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fa6b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa6b8:
    // 0x1fa6b8: 0xc043f1c  jal         func_10FC70
label_1fa6bc:
    if (ctx->pc == 0x1FA6BCu) {
        ctx->pc = 0x1FA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6B8u;
        // 0x1fa6bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA6C0u;
        goto label_1fa6c0;
    }
    ctx->pc = 0x1FA6B8u;
    SET_GPR_U32(ctx, 31, 0x1FA6C0u);
    ctx->pc = 0x1FA6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA6B8u;
    // 0x1fa6bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x1FA6B8u, 0x1FA6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA6C0u;
label_1fa6c0:
    // 0x1fa6c0: 0x922300e6  lbu         $v1, 0xE6($s1)
    ctx->pc = 0x1fa6c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1fa6c4:
    // 0x1fa6c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fa6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa6c8:
    // 0x1fa6c8: 0xae2200f8  sw          $v0, 0xF8($s1)
    ctx->pc = 0x1fa6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
label_1fa6cc:
    // 0x1fa6cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fa6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fa6d0:
    // 0x1fa6d0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fa6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1fa6d4:
    // 0x1fa6d4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1fa6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fa6d8:
    // 0x1fa6d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fa6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fa6dc:
    // 0x1fa6dc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fa6dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1fa6e0:
    // 0x1fa6e0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fa6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1fa6e4:
    // 0x1fa6e4: 0x60f809  jalr        $v1
label_1fa6e8:
    if (ctx->pc == 0x1FA6E8u) {
        ctx->pc = 0x1FA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6E4u;
        // 0x1fa6e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA6ECu;
        goto label_1fa6ec;
    }
    ctx->pc = 0x1FA6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FA6ECu);
        ctx->pc = 0x1FA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6E4u;
        // 0x1fa6e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA6E4u, 0x1FA6ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA6ECu;
label_1fa6ec:
    // 0x1fa6ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fa6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fa6f0:
    // 0x1fa6f0: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1fa6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1fa6f4:
    // 0x1fa6f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fa6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fa6f8:
    // 0x1fa6f8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fa6f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fa6fc:
    // 0x1fa6fc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1fa6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fa700:
    // 0x1fa700: 0x40f809  jalr        $v0
label_1fa704:
    if (ctx->pc == 0x1FA704u) {
        ctx->pc = 0x1FA704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA700u;
        // 0x1fa704: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA708u;
        goto label_1fa708;
    }
    ctx->pc = 0x1FA700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA708u);
        ctx->pc = 0x1FA704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA700u;
        // 0x1fa704: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA700u, 0x1FA708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA708u;
label_1fa708:
    // 0x1fa708: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x1fa708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_1fa70c:
    // 0x1fa70c: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x1fa70cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1fa710:
    // 0x1fa710: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x1fa710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1fa714:
    // 0x1fa714: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x1fa714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1fa718:
    // 0x1fa718: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x1fa718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1fa71c:
    // 0x1fa71c: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x1fa71cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1fa720:
    // 0x1fa720: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x1fa720u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1fa724:
    // 0x1fa724: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x1fa724u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1fa728:
    // 0x1fa728: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x1fa728u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1fa72c:
    // 0x1fa72c: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x1fa72cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1fa730:
    // 0x1fa730: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1fa730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_1fa734:
    // 0x1fa734: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x1fa734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fa738:
    // 0x1fa738: 0x3e00008  jr          $ra
label_1fa73c:
    if (ctx->pc == 0x1FA73Cu) {
        ctx->pc = 0x1FA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA738u;
        // 0x1fa73c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA740u;
        goto label_fallthrough_0x1fa738;
    }
    ctx->pc = 0x1FA738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA738u;
        // 0x1fa73c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fa738:
    ctx->pc = 0x1FA740u;
}
