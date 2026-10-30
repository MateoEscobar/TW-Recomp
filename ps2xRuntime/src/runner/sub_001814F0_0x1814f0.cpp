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

// Function: sub_001814F0
// Address: 0x1814f0 - 0x181b20
void sub_001814F0_0x1814f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001814F0_0x1814f0");
#endif

    switch (ctx->pc) {
        case 0x1814f0u: goto label_1814f0;
        case 0x1814f4u: goto label_1814f4;
        case 0x1814f8u: goto label_1814f8;
        case 0x1814fcu: goto label_1814fc;
        case 0x181500u: goto label_181500;
        case 0x181504u: goto label_181504;
        case 0x181508u: goto label_181508;
        case 0x18150cu: goto label_18150c;
        case 0x181510u: goto label_181510;
        case 0x181514u: goto label_181514;
        case 0x181518u: goto label_181518;
        case 0x18151cu: goto label_18151c;
        case 0x181520u: goto label_181520;
        case 0x181524u: goto label_181524;
        case 0x181528u: goto label_181528;
        case 0x18152cu: goto label_18152c;
        case 0x181530u: goto label_181530;
        case 0x181534u: goto label_181534;
        case 0x181538u: goto label_181538;
        case 0x18153cu: goto label_18153c;
        case 0x181540u: goto label_181540;
        case 0x181544u: goto label_181544;
        case 0x181548u: goto label_181548;
        case 0x18154cu: goto label_18154c;
        case 0x181550u: goto label_181550;
        case 0x181554u: goto label_181554;
        case 0x181558u: goto label_181558;
        case 0x18155cu: goto label_18155c;
        case 0x181560u: goto label_181560;
        case 0x181564u: goto label_181564;
        case 0x181568u: goto label_181568;
        case 0x18156cu: goto label_18156c;
        case 0x181570u: goto label_181570;
        case 0x181574u: goto label_181574;
        case 0x181578u: goto label_181578;
        case 0x18157cu: goto label_18157c;
        case 0x181580u: goto label_181580;
        case 0x181584u: goto label_181584;
        case 0x181588u: goto label_181588;
        case 0x18158cu: goto label_18158c;
        case 0x181590u: goto label_181590;
        case 0x181594u: goto label_181594;
        case 0x181598u: goto label_181598;
        case 0x18159cu: goto label_18159c;
        case 0x1815a0u: goto label_1815a0;
        case 0x1815a4u: goto label_1815a4;
        case 0x1815a8u: goto label_1815a8;
        case 0x1815acu: goto label_1815ac;
        case 0x1815b0u: goto label_1815b0;
        case 0x1815b4u: goto label_1815b4;
        case 0x1815b8u: goto label_1815b8;
        case 0x1815bcu: goto label_1815bc;
        case 0x1815c0u: goto label_1815c0;
        case 0x1815c4u: goto label_1815c4;
        case 0x1815c8u: goto label_1815c8;
        case 0x1815ccu: goto label_1815cc;
        case 0x1815d0u: goto label_1815d0;
        case 0x1815d4u: goto label_1815d4;
        case 0x1815d8u: goto label_1815d8;
        case 0x1815dcu: goto label_1815dc;
        case 0x1815e0u: goto label_1815e0;
        case 0x1815e4u: goto label_1815e4;
        case 0x1815e8u: goto label_1815e8;
        case 0x1815ecu: goto label_1815ec;
        case 0x1815f0u: goto label_1815f0;
        case 0x1815f4u: goto label_1815f4;
        case 0x1815f8u: goto label_1815f8;
        case 0x1815fcu: goto label_1815fc;
        case 0x181600u: goto label_181600;
        case 0x181604u: goto label_181604;
        case 0x181608u: goto label_181608;
        case 0x18160cu: goto label_18160c;
        case 0x181610u: goto label_181610;
        case 0x181614u: goto label_181614;
        case 0x181618u: goto label_181618;
        case 0x18161cu: goto label_18161c;
        case 0x181620u: goto label_181620;
        case 0x181624u: goto label_181624;
        case 0x181628u: goto label_181628;
        case 0x18162cu: goto label_18162c;
        case 0x181630u: goto label_181630;
        case 0x181634u: goto label_181634;
        case 0x181638u: goto label_181638;
        case 0x18163cu: goto label_18163c;
        case 0x181640u: goto label_181640;
        case 0x181644u: goto label_181644;
        case 0x181648u: goto label_181648;
        case 0x18164cu: goto label_18164c;
        case 0x181650u: goto label_181650;
        case 0x181654u: goto label_181654;
        case 0x181658u: goto label_181658;
        case 0x18165cu: goto label_18165c;
        case 0x181660u: goto label_181660;
        case 0x181664u: goto label_181664;
        case 0x181668u: goto label_181668;
        case 0x18166cu: goto label_18166c;
        case 0x181670u: goto label_181670;
        case 0x181674u: goto label_181674;
        case 0x181678u: goto label_181678;
        case 0x18167cu: goto label_18167c;
        case 0x181680u: goto label_181680;
        case 0x181684u: goto label_181684;
        case 0x181688u: goto label_181688;
        case 0x18168cu: goto label_18168c;
        case 0x181690u: goto label_181690;
        case 0x181694u: goto label_181694;
        case 0x181698u: goto label_181698;
        case 0x18169cu: goto label_18169c;
        case 0x1816a0u: goto label_1816a0;
        case 0x1816a4u: goto label_1816a4;
        case 0x1816a8u: goto label_1816a8;
        case 0x1816acu: goto label_1816ac;
        case 0x1816b0u: goto label_1816b0;
        case 0x1816b4u: goto label_1816b4;
        case 0x1816b8u: goto label_1816b8;
        case 0x1816bcu: goto label_1816bc;
        case 0x1816c0u: goto label_1816c0;
        case 0x1816c4u: goto label_1816c4;
        case 0x1816c8u: goto label_1816c8;
        case 0x1816ccu: goto label_1816cc;
        case 0x1816d0u: goto label_1816d0;
        case 0x1816d4u: goto label_1816d4;
        case 0x1816d8u: goto label_1816d8;
        case 0x1816dcu: goto label_1816dc;
        case 0x1816e0u: goto label_1816e0;
        case 0x1816e4u: goto label_1816e4;
        case 0x1816e8u: goto label_1816e8;
        case 0x1816ecu: goto label_1816ec;
        case 0x1816f0u: goto label_1816f0;
        case 0x1816f4u: goto label_1816f4;
        case 0x1816f8u: goto label_1816f8;
        case 0x1816fcu: goto label_1816fc;
        case 0x181700u: goto label_181700;
        case 0x181704u: goto label_181704;
        case 0x181708u: goto label_181708;
        case 0x18170cu: goto label_18170c;
        case 0x181710u: goto label_181710;
        case 0x181714u: goto label_181714;
        case 0x181718u: goto label_181718;
        case 0x18171cu: goto label_18171c;
        case 0x181720u: goto label_181720;
        case 0x181724u: goto label_181724;
        case 0x181728u: goto label_181728;
        case 0x18172cu: goto label_18172c;
        case 0x181730u: goto label_181730;
        case 0x181734u: goto label_181734;
        case 0x181738u: goto label_181738;
        case 0x18173cu: goto label_18173c;
        case 0x181740u: goto label_181740;
        case 0x181744u: goto label_181744;
        case 0x181748u: goto label_181748;
        case 0x18174cu: goto label_18174c;
        case 0x181750u: goto label_181750;
        case 0x181754u: goto label_181754;
        case 0x181758u: goto label_181758;
        case 0x18175cu: goto label_18175c;
        case 0x181760u: goto label_181760;
        case 0x181764u: goto label_181764;
        case 0x181768u: goto label_181768;
        case 0x18176cu: goto label_18176c;
        case 0x181770u: goto label_181770;
        case 0x181774u: goto label_181774;
        case 0x181778u: goto label_181778;
        case 0x18177cu: goto label_18177c;
        case 0x181780u: goto label_181780;
        case 0x181784u: goto label_181784;
        case 0x181788u: goto label_181788;
        case 0x18178cu: goto label_18178c;
        case 0x181790u: goto label_181790;
        case 0x181794u: goto label_181794;
        case 0x181798u: goto label_181798;
        case 0x18179cu: goto label_18179c;
        case 0x1817a0u: goto label_1817a0;
        case 0x1817a4u: goto label_1817a4;
        case 0x1817a8u: goto label_1817a8;
        case 0x1817acu: goto label_1817ac;
        case 0x1817b0u: goto label_1817b0;
        case 0x1817b4u: goto label_1817b4;
        case 0x1817b8u: goto label_1817b8;
        case 0x1817bcu: goto label_1817bc;
        case 0x1817c0u: goto label_1817c0;
        case 0x1817c4u: goto label_1817c4;
        case 0x1817c8u: goto label_1817c8;
        case 0x1817ccu: goto label_1817cc;
        case 0x1817d0u: goto label_1817d0;
        case 0x1817d4u: goto label_1817d4;
        case 0x1817d8u: goto label_1817d8;
        case 0x1817dcu: goto label_1817dc;
        case 0x1817e0u: goto label_1817e0;
        case 0x1817e4u: goto label_1817e4;
        case 0x1817e8u: goto label_1817e8;
        case 0x1817ecu: goto label_1817ec;
        case 0x1817f0u: goto label_1817f0;
        case 0x1817f4u: goto label_1817f4;
        case 0x1817f8u: goto label_1817f8;
        case 0x1817fcu: goto label_1817fc;
        case 0x181800u: goto label_181800;
        case 0x181804u: goto label_181804;
        case 0x181808u: goto label_181808;
        case 0x18180cu: goto label_18180c;
        case 0x181810u: goto label_181810;
        case 0x181814u: goto label_181814;
        case 0x181818u: goto label_181818;
        case 0x18181cu: goto label_18181c;
        case 0x181820u: goto label_181820;
        case 0x181824u: goto label_181824;
        case 0x181828u: goto label_181828;
        case 0x18182cu: goto label_18182c;
        case 0x181830u: goto label_181830;
        case 0x181834u: goto label_181834;
        case 0x181838u: goto label_181838;
        case 0x18183cu: goto label_18183c;
        case 0x181840u: goto label_181840;
        case 0x181844u: goto label_181844;
        case 0x181848u: goto label_181848;
        case 0x18184cu: goto label_18184c;
        case 0x181850u: goto label_181850;
        case 0x181854u: goto label_181854;
        case 0x181858u: goto label_181858;
        case 0x18185cu: goto label_18185c;
        case 0x181860u: goto label_181860;
        case 0x181864u: goto label_181864;
        case 0x181868u: goto label_181868;
        case 0x18186cu: goto label_18186c;
        case 0x181870u: goto label_181870;
        case 0x181874u: goto label_181874;
        case 0x181878u: goto label_181878;
        case 0x18187cu: goto label_18187c;
        case 0x181880u: goto label_181880;
        case 0x181884u: goto label_181884;
        case 0x181888u: goto label_181888;
        case 0x18188cu: goto label_18188c;
        case 0x181890u: goto label_181890;
        case 0x181894u: goto label_181894;
        case 0x181898u: goto label_181898;
        case 0x18189cu: goto label_18189c;
        case 0x1818a0u: goto label_1818a0;
        case 0x1818a4u: goto label_1818a4;
        case 0x1818a8u: goto label_1818a8;
        case 0x1818acu: goto label_1818ac;
        case 0x1818b0u: goto label_1818b0;
        case 0x1818b4u: goto label_1818b4;
        case 0x1818b8u: goto label_1818b8;
        case 0x1818bcu: goto label_1818bc;
        case 0x1818c0u: goto label_1818c0;
        case 0x1818c4u: goto label_1818c4;
        case 0x1818c8u: goto label_1818c8;
        case 0x1818ccu: goto label_1818cc;
        case 0x1818d0u: goto label_1818d0;
        case 0x1818d4u: goto label_1818d4;
        case 0x1818d8u: goto label_1818d8;
        case 0x1818dcu: goto label_1818dc;
        case 0x1818e0u: goto label_1818e0;
        case 0x1818e4u: goto label_1818e4;
        case 0x1818e8u: goto label_1818e8;
        case 0x1818ecu: goto label_1818ec;
        case 0x1818f0u: goto label_1818f0;
        case 0x1818f4u: goto label_1818f4;
        case 0x1818f8u: goto label_1818f8;
        case 0x1818fcu: goto label_1818fc;
        case 0x181900u: goto label_181900;
        case 0x181904u: goto label_181904;
        case 0x181908u: goto label_181908;
        case 0x18190cu: goto label_18190c;
        case 0x181910u: goto label_181910;
        case 0x181914u: goto label_181914;
        case 0x181918u: goto label_181918;
        case 0x18191cu: goto label_18191c;
        case 0x181920u: goto label_181920;
        case 0x181924u: goto label_181924;
        case 0x181928u: goto label_181928;
        case 0x18192cu: goto label_18192c;
        case 0x181930u: goto label_181930;
        case 0x181934u: goto label_181934;
        case 0x181938u: goto label_181938;
        case 0x18193cu: goto label_18193c;
        case 0x181940u: goto label_181940;
        case 0x181944u: goto label_181944;
        case 0x181948u: goto label_181948;
        case 0x18194cu: goto label_18194c;
        case 0x181950u: goto label_181950;
        case 0x181954u: goto label_181954;
        case 0x181958u: goto label_181958;
        case 0x18195cu: goto label_18195c;
        case 0x181960u: goto label_181960;
        case 0x181964u: goto label_181964;
        case 0x181968u: goto label_181968;
        case 0x18196cu: goto label_18196c;
        case 0x181970u: goto label_181970;
        case 0x181974u: goto label_181974;
        case 0x181978u: goto label_181978;
        case 0x18197cu: goto label_18197c;
        case 0x181980u: goto label_181980;
        case 0x181984u: goto label_181984;
        case 0x181988u: goto label_181988;
        case 0x18198cu: goto label_18198c;
        case 0x181990u: goto label_181990;
        case 0x181994u: goto label_181994;
        case 0x181998u: goto label_181998;
        case 0x18199cu: goto label_18199c;
        case 0x1819a0u: goto label_1819a0;
        case 0x1819a4u: goto label_1819a4;
        case 0x1819a8u: goto label_1819a8;
        case 0x1819acu: goto label_1819ac;
        case 0x1819b0u: goto label_1819b0;
        case 0x1819b4u: goto label_1819b4;
        case 0x1819b8u: goto label_1819b8;
        case 0x1819bcu: goto label_1819bc;
        case 0x1819c0u: goto label_1819c0;
        case 0x1819c4u: goto label_1819c4;
        case 0x1819c8u: goto label_1819c8;
        case 0x1819ccu: goto label_1819cc;
        case 0x1819d0u: goto label_1819d0;
        case 0x1819d4u: goto label_1819d4;
        case 0x1819d8u: goto label_1819d8;
        case 0x1819dcu: goto label_1819dc;
        case 0x1819e0u: goto label_1819e0;
        case 0x1819e4u: goto label_1819e4;
        case 0x1819e8u: goto label_1819e8;
        case 0x1819ecu: goto label_1819ec;
        case 0x1819f0u: goto label_1819f0;
        case 0x1819f4u: goto label_1819f4;
        case 0x1819f8u: goto label_1819f8;
        case 0x1819fcu: goto label_1819fc;
        case 0x181a00u: goto label_181a00;
        case 0x181a04u: goto label_181a04;
        case 0x181a08u: goto label_181a08;
        case 0x181a0cu: goto label_181a0c;
        case 0x181a10u: goto label_181a10;
        case 0x181a14u: goto label_181a14;
        case 0x181a18u: goto label_181a18;
        case 0x181a1cu: goto label_181a1c;
        case 0x181a20u: goto label_181a20;
        case 0x181a24u: goto label_181a24;
        case 0x181a28u: goto label_181a28;
        case 0x181a2cu: goto label_181a2c;
        case 0x181a30u: goto label_181a30;
        case 0x181a34u: goto label_181a34;
        case 0x181a38u: goto label_181a38;
        case 0x181a3cu: goto label_181a3c;
        case 0x181a40u: goto label_181a40;
        case 0x181a44u: goto label_181a44;
        case 0x181a48u: goto label_181a48;
        case 0x181a4cu: goto label_181a4c;
        case 0x181a50u: goto label_181a50;
        case 0x181a54u: goto label_181a54;
        case 0x181a58u: goto label_181a58;
        case 0x181a5cu: goto label_181a5c;
        case 0x181a60u: goto label_181a60;
        case 0x181a64u: goto label_181a64;
        case 0x181a68u: goto label_181a68;
        case 0x181a6cu: goto label_181a6c;
        case 0x181a70u: goto label_181a70;
        case 0x181a74u: goto label_181a74;
        case 0x181a78u: goto label_181a78;
        case 0x181a7cu: goto label_181a7c;
        case 0x181a80u: goto label_181a80;
        case 0x181a84u: goto label_181a84;
        case 0x181a88u: goto label_181a88;
        case 0x181a8cu: goto label_181a8c;
        case 0x181a90u: goto label_181a90;
        case 0x181a94u: goto label_181a94;
        case 0x181a98u: goto label_181a98;
        case 0x181a9cu: goto label_181a9c;
        case 0x181aa0u: goto label_181aa0;
        case 0x181aa4u: goto label_181aa4;
        case 0x181aa8u: goto label_181aa8;
        case 0x181aacu: goto label_181aac;
        case 0x181ab0u: goto label_181ab0;
        case 0x181ab4u: goto label_181ab4;
        case 0x181ab8u: goto label_181ab8;
        case 0x181abcu: goto label_181abc;
        case 0x181ac0u: goto label_181ac0;
        case 0x181ac4u: goto label_181ac4;
        case 0x181ac8u: goto label_181ac8;
        case 0x181accu: goto label_181acc;
        case 0x181ad0u: goto label_181ad0;
        case 0x181ad4u: goto label_181ad4;
        case 0x181ad8u: goto label_181ad8;
        case 0x181adcu: goto label_181adc;
        case 0x181ae0u: goto label_181ae0;
        case 0x181ae4u: goto label_181ae4;
        case 0x181ae8u: goto label_181ae8;
        case 0x181aecu: goto label_181aec;
        case 0x181af0u: goto label_181af0;
        case 0x181af4u: goto label_181af4;
        case 0x181af8u: goto label_181af8;
        case 0x181afcu: goto label_181afc;
        case 0x181b00u: goto label_181b00;
        case 0x181b04u: goto label_181b04;
        case 0x181b08u: goto label_181b08;
        case 0x181b0cu: goto label_181b0c;
        case 0x181b10u: goto label_181b10;
        case 0x181b14u: goto label_181b14;
        case 0x181b18u: goto label_181b18;
        case 0x181b1cu: goto label_181b1c;
        default: break;
    }

    ctx->pc = 0x1814f0u;

label_1814f0:
    // 0x1814f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1814f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1814f4:
    // 0x1814f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1814f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1814f8:
    // 0x1814f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1814f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1814fc:
    // 0x1814fc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1814fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_181500:
    // 0x181500: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x181500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_181504:
    // 0x181504: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x181504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_181508:
    // 0x181508: 0x26930010  addiu       $s3, $s4, 0x10
    ctx->pc = 0x181508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_18150c:
    // 0x18150c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18150cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_181510:
    // 0x181510: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x181510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_181514:
    // 0x181514: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x181514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_181518:
    // 0x181518: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x181518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_18151c:
    // 0x18151c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_181520:
    // 0x181520: 0xc137c70  jal         func_4DF1C0
label_181524:
    if (ctx->pc == 0x181524u) {
        ctx->pc = 0x181524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181520u;
        // 0x181524: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181528u;
        goto label_181528;
    }
    ctx->pc = 0x181520u;
    SET_GPR_U32(ctx, 31, 0x181528u);
    ctx->pc = 0x181524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181520u;
    // 0x181524: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF1C0u, 0x181520u, 0x181528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181528u;
label_181528:
    // 0x181528: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x181528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_18152c:
    // 0x18152c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x18152cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_181530:
    // 0x181530: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_181534:
    if (ctx->pc == 0x181534u) {
        ctx->pc = 0x181534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181530u;
        // 0x181534: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181538u;
        goto label_181538;
    }
    ctx->pc = 0x181530u;
    {
        const bool branch_taken_0x181530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x181534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181530u;
        // 0x181534: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181530) {
            ctx->pc = 0x181548u;
            goto label_181548;
        }
    }
    ctx->pc = 0x181538u;
label_181538:
    // 0x181538: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x181538u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_18153c:
    // 0x18153c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x18153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_181540:
    // 0x181540: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_181544:
    if (ctx->pc == 0x181544u) {
        ctx->pc = 0x181544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181540u;
        // 0x181544: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181548u;
        goto label_181548;
    }
    ctx->pc = 0x181540u;
    {
        const bool branch_taken_0x181540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181540u;
        // 0x181544: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181540) {
            ctx->pc = 0x181550u;
            goto label_181550;
        }
    }
    ctx->pc = 0x181548u;
label_181548:
    // 0x181548: 0x1000016d  b           . + 4 + (0x16D << 2)
label_18154c:
    if (ctx->pc == 0x18154Cu) {
        ctx->pc = 0x18154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181548u;
        // 0x18154c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181550u;
        goto label_181550;
    }
    ctx->pc = 0x181548u;
    {
        const bool branch_taken_0x181548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181548u;
        // 0x18154c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181548) {
            ctx->pc = 0x181B00u;
            goto label_181b00;
        }
    }
    ctx->pc = 0x181550u;
label_181550:
    // 0x181550: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x181550u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_181554:
    // 0x181554: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x181554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_181558:
    // 0x181558: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x181558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_18155c:
    // 0x18155c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_181560:
    // 0x181560: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x181560u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_181564:
    // 0x181564: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x181564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_181568:
    // 0x181568: 0x60f809  jalr        $v1
label_18156c:
    if (ctx->pc == 0x18156Cu) {
        ctx->pc = 0x18156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181568u;
        // 0x18156c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181570u;
        goto label_181570;
    }
    ctx->pc = 0x181568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x181570u);
        ctx->pc = 0x18156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181568u;
        // 0x18156c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181568u, 0x181570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181570u;
label_181570:
    // 0x181570: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x181570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_181574:
    // 0x181574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x181574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_181578:
    // 0x181578: 0x24060079  addiu       $a2, $zero, 0x79
    ctx->pc = 0x181578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_18157c:
    // 0x18157c: 0xc137caa  jal         func_4DF2A8
label_181580:
    if (ctx->pc == 0x181580u) {
        ctx->pc = 0x181580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18157Cu;
        // 0x181580: 0x24a52620  addiu       $a1, $a1, 0x2620 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181584u;
        goto label_181584;
    }
    ctx->pc = 0x18157Cu;
    SET_GPR_U32(ctx, 31, 0x181584u);
    ctx->pc = 0x181580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18157Cu;
    // 0x181580: 0x24a52620  addiu       $a1, $a1, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF2A8u, 0x18157Cu, 0x181584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181584u;
label_181584:
    // 0x181584: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x181584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_181588:
    // 0x181588: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x181588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_18158c:
    // 0x18158c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_181590:
    // 0x181590: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x181590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_181594:
    // 0x181594: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x181594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_181598:
    // 0x181598: 0x60f809  jalr        $v1
label_18159c:
    if (ctx->pc == 0x18159Cu) {
        ctx->pc = 0x18159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181598u;
        // 0x18159c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1815A0u;
        goto label_1815a0;
    }
    ctx->pc = 0x181598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1815A0u);
        ctx->pc = 0x18159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181598u;
        // 0x18159c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181598u, 0x1815A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1815A0u;
label_1815a0:
    // 0x1815a0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1815a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1815a4:
    // 0x1815a4: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1815a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_1815a8:
    // 0x1815a8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1815a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1815ac:
    // 0x1815ac: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1815acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_1815b0:
    // 0x1815b0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1815b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1815b4:
    // 0x1815b4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1815b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1815b8:
    // 0x1815b8: 0x2448000c  addiu       $t0, $v0, 0xC
    ctx->pc = 0x1815b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1815bc:
    // 0x1815bc: 0x244a0004  addiu       $t2, $v0, 0x4
    ctx->pc = 0x1815bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1815c0:
    // 0x1815c0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1815c4:
    if (ctx->pc == 0x1815C4u) {
        ctx->pc = 0x1815C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1815C0u;
        // 0x1815c4: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1815C8u;
        goto label_1815c8;
    }
    ctx->pc = 0x1815C0u;
    {
        const bool branch_taken_0x1815c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1815C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1815C0u;
        // 0x1815c4: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1815c0) {
            ctx->pc = 0x181608u;
            goto label_181608;
        }
    }
    ctx->pc = 0x1815C8u;
label_1815c8:
    // 0x1815c8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1815c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1815cc:
    // 0x1815cc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1815d0:
    if (ctx->pc == 0x1815D0u) {
        ctx->pc = 0x1815D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1815CCu;
        // 0x1815d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1815D4u;
        goto label_1815d4;
    }
    ctx->pc = 0x1815CCu;
    {
        const bool branch_taken_0x1815cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1815cc) {
            ctx->pc = 0x1815D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1815CCu;
            // 0x1815d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1815DCu;
            goto label_1815dc;
        }
    }
    ctx->pc = 0x1815D4u;
label_1815d4:
    // 0x1815d4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1815d8:
    if (ctx->pc == 0x1815D8u) {
        ctx->pc = 0x1815D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1815D4u;
        // 0x1815d8: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1815DCu;
        goto label_1815dc;
    }
    ctx->pc = 0x1815D4u;
    {
        const bool branch_taken_0x1815d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1815D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1815D4u;
        // 0x1815d8: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1815d4) {
            ctx->pc = 0x18160Cu;
            goto label_18160c;
        }
    }
    ctx->pc = 0x1815DCu;
label_1815dc:
    // 0x1815dc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1815dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1815e0:
    // 0x1815e0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1815e4:
    if (ctx->pc == 0x1815E4u) {
        ctx->pc = 0x1815E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1815E0u;
        // 0x1815e4: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1815E8u;
        goto label_1815e8;
    }
    ctx->pc = 0x1815E0u;
    {
        const bool branch_taken_0x1815e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1815e0) {
            ctx->pc = 0x1815E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1815E0u;
            // 0x1815e4: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18160Cu;
            goto label_18160c;
        }
    }
    ctx->pc = 0x1815E8u;
label_1815e8:
    // 0x1815e8: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1815e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1815ec:
    // 0x1815ec: 0x0  nop
    ctx->pc = 0x1815ecu;
    // NOP
label_1815f0:
    // 0x1815f0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1815f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1815f4:
    // 0x1815f4: 0x0  nop
    ctx->pc = 0x1815f4u;
    // NOP
label_1815f8:
    // 0x1815f8: 0x0  nop
    ctx->pc = 0x1815f8u;
    // NOP
label_1815fc:
    // 0x1815fc: 0x0  nop
    ctx->pc = 0x1815fcu;
    // NOP
label_181600:
    // 0x181600: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_181604:
    if (ctx->pc == 0x181604u) {
        ctx->pc = 0x181604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181600u;
        // 0x181604: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181608u;
        goto label_181608;
    }
    ctx->pc = 0x181600u;
    {
        const bool branch_taken_0x181600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181600) {
            ctx->pc = 0x181604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181600u;
            // 0x181604: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1815F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1815f0;
        }
    }
    ctx->pc = 0x181608u;
label_181608:
    // 0x181608: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x181608u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_18160c:
    // 0x18160c: 0x10a60022  beq         $a1, $a2, . + 4 + (0x22 << 2)
label_181610:
    if (ctx->pc == 0x181610u) {
        ctx->pc = 0x181614u;
        goto label_181614;
    }
    ctx->pc = 0x18160Cu;
    {
        const bool branch_taken_0x18160c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x18160c) {
            ctx->pc = 0x181698u;
            goto label_181698;
        }
    }
    ctx->pc = 0x181614u;
label_181614:
    // 0x181614: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x181614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_181618:
    // 0x181618: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x181618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_18161c:
    // 0x18161c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x18161cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_181620:
    // 0x181620: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x181620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_181624:
    // 0x181624: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x181624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_181628:
    // 0x181628: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_18162c:
    if (ctx->pc == 0x18162Cu) {
        ctx->pc = 0x18162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181628u;
        // 0x18162c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181630u;
        goto label_181630;
    }
    ctx->pc = 0x181628u;
    {
        const bool branch_taken_0x181628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x18162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181628u;
        // 0x18162c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181628) {
            ctx->pc = 0x181654u;
            goto label_181654;
        }
    }
    ctx->pc = 0x181630u;
label_181630:
    // 0x181630: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_181634:
    if (ctx->pc == 0x181634u) {
        ctx->pc = 0x181634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181630u;
        // 0x181634: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181638u;
        goto label_181638;
    }
    ctx->pc = 0x181630u;
    {
        const bool branch_taken_0x181630 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x181634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181630u;
        // 0x181634: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181630) {
            ctx->pc = 0x18163Cu;
            goto label_18163c;
        }
    }
    ctx->pc = 0x181638u;
label_181638:
    // 0x181638: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x181638u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_18163c:
    // 0x18163c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x18163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_181640:
    // 0x181640: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x181640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
label_181644:
    // 0x181644: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x181644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_181648:
    // 0x181648: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x181648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_18164c:
    // 0x18164c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_181650:
    // 0x181650: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x181650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_181654:
    // 0x181654: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x181654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_181658:
    // 0x181658: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
label_18165c:
    if (ctx->pc == 0x18165Cu) {
        ctx->pc = 0x18165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181658u;
        // 0x18165c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181660u;
        goto label_181660;
    }
    ctx->pc = 0x181658u;
    {
        const bool branch_taken_0x181658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x181658) {
            ctx->pc = 0x18165Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181658u;
            // 0x18165c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181668u;
            goto label_181668;
        }
    }
    ctx->pc = 0x181660u;
label_181660:
    // 0x181660: 0x10000005  b           . + 4 + (0x5 << 2)
label_181664:
    if (ctx->pc == 0x181664u) {
        ctx->pc = 0x181664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181660u;
        // 0x181664: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181668u;
        goto label_181668;
    }
    ctx->pc = 0x181660u;
    {
        const bool branch_taken_0x181660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181660u;
        // 0x181664: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181660) {
            ctx->pc = 0x181678u;
            goto label_181678;
        }
    }
    ctx->pc = 0x181668u;
label_181668:
    // 0x181668: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x181668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18166c:
    // 0x18166c: 0x54460002  bnel        $v0, $a2, . + 4 + (0x2 << 2)
label_181670:
    if (ctx->pc == 0x181670u) {
        ctx->pc = 0x181670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18166Cu;
        // 0x181670: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181674u;
        goto label_181674;
    }
    ctx->pc = 0x18166Cu;
    {
        const bool branch_taken_0x18166c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x18166c) {
            ctx->pc = 0x181670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18166Cu;
            // 0x181670: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181678u;
            goto label_181678;
        }
    }
    ctx->pc = 0x181674u;
label_181674:
    // 0x181674: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x181674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_181678:
    // 0x181678: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x181678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_18167c:
    // 0x18167c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x18167cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_181680:
    // 0x181680: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x181680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_181684:
    // 0x181684: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x181684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_181688:
    // 0x181688: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x181688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_18168c:
    // 0x18168c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x18168cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_181690:
    // 0x181690: 0x10000034  b           . + 4 + (0x34 << 2)
label_181694:
    if (ctx->pc == 0x181694u) {
        ctx->pc = 0x181694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181690u;
        // 0x181694: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181698u;
        goto label_181698;
    }
    ctx->pc = 0x181690u;
    {
        const bool branch_taken_0x181690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181690u;
        // 0x181694: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181690) {
            ctx->pc = 0x181764u;
            goto label_181764;
        }
    }
    ctx->pc = 0x181698u;
label_181698:
    // 0x181698: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_18169c:
    if (ctx->pc == 0x18169Cu) {
        ctx->pc = 0x18169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181698u;
        // 0x18169c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1816A0u;
        goto label_1816a0;
    }
    ctx->pc = 0x181698u;
    {
        const bool branch_taken_0x181698 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x18169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181698u;
        // 0x18169c: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181698) {
            ctx->pc = 0x1816A4u;
            goto label_1816a4;
        }
    }
    ctx->pc = 0x1816A0u;
label_1816a0:
    // 0x1816a0: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x1816a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_1816a4:
    // 0x1816a4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1816a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1816a8:
    // 0x1816a8: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
label_1816ac:
    if (ctx->pc == 0x1816ACu) {
        ctx->pc = 0x1816ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816A8u;
        // 0x1816ac: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1816B0u;
        goto label_1816b0;
    }
    ctx->pc = 0x1816A8u;
    {
        const bool branch_taken_0x1816a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1816a8) {
            ctx->pc = 0x1816ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1816A8u;
            // 0x1816ac: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1816B8u;
            goto label_1816b8;
        }
    }
    ctx->pc = 0x1816B0u;
label_1816b0:
    // 0x1816b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1816b4:
    if (ctx->pc == 0x1816B4u) {
        ctx->pc = 0x1816B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816B0u;
        // 0x1816b4: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1816B8u;
        goto label_1816b8;
    }
    ctx->pc = 0x1816B0u;
    {
        const bool branch_taken_0x1816b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1816B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816B0u;
        // 0x1816b4: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816b0) {
            ctx->pc = 0x1816C8u;
            goto label_1816c8;
        }
    }
    ctx->pc = 0x1816B8u;
label_1816b8:
    // 0x1816b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1816b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1816bc:
    // 0x1816bc: 0x54450002  bnel        $v0, $a1, . + 4 + (0x2 << 2)
label_1816c0:
    if (ctx->pc == 0x1816C0u) {
        ctx->pc = 0x1816C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816BCu;
        // 0x1816c0: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1816C4u;
        goto label_1816c4;
    }
    ctx->pc = 0x1816BCu;
    {
        const bool branch_taken_0x1816bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1816bc) {
            ctx->pc = 0x1816C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1816BCu;
            // 0x1816c0: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1816C8u;
            goto label_1816c8;
        }
    }
    ctx->pc = 0x1816C4u;
label_1816c4:
    // 0x1816c4: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x1816c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
label_1816c8:
    // 0x1816c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1816c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1816cc:
    // 0x1816cc: 0x54460012  bnel        $v0, $a2, . + 4 + (0x12 << 2)
label_1816d0:
    if (ctx->pc == 0x1816D0u) {
        ctx->pc = 0x1816D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816CCu;
        // 0x1816d0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1816D4u;
        goto label_1816d4;
    }
    ctx->pc = 0x1816CCu;
    {
        const bool branch_taken_0x1816cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1816cc) {
            ctx->pc = 0x1816D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1816CCu;
            // 0x1816d0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181718u;
            goto label_181718;
        }
    }
    ctx->pc = 0x1816D4u;
label_1816d4:
    // 0x1816d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1816d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1816d8:
    // 0x1816d8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1816dc:
    if (ctx->pc == 0x1816DCu) {
        ctx->pc = 0x1816DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816D8u;
        // 0x1816dc: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1816E0u;
        goto label_1816e0;
    }
    ctx->pc = 0x1816D8u;
    {
        const bool branch_taken_0x1816d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1816d8) {
            ctx->pc = 0x1816DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1816D8u;
            // 0x1816dc: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1816ECu;
            goto label_1816ec;
        }
    }
    ctx->pc = 0x1816E0u;
label_1816e0:
    // 0x1816e0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1816e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1816e4:
    // 0x1816e4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1816e8:
    if (ctx->pc == 0x1816E8u) {
        ctx->pc = 0x1816E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816E4u;
        // 0x1816e8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1816ECu;
        goto label_1816ec;
    }
    ctx->pc = 0x1816E4u;
    {
        const bool branch_taken_0x1816e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1816E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816E4u;
        // 0x1816e8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816e4) {
            ctx->pc = 0x181714u;
            goto label_181714;
        }
    }
    ctx->pc = 0x1816ECu;
label_1816ec:
    // 0x1816ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1816f0:
    if (ctx->pc == 0x1816F0u) {
        ctx->pc = 0x1816F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816ECu;
        // 0x1816f0: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1816F4u;
        goto label_1816f4;
    }
    ctx->pc = 0x1816ECu;
    {
        const bool branch_taken_0x1816ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1816F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816ECu;
        // 0x1816f0: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816ec) {
            ctx->pc = 0x181710u;
            goto label_181710;
        }
    }
    ctx->pc = 0x1816F4u;
label_1816f4:
    // 0x1816f4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1816f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1816f8:
    // 0x1816f8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1816f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1816fc:
    // 0x1816fc: 0x0  nop
    ctx->pc = 0x1816fcu;
    // NOP
label_181700:
    // 0x181700: 0x0  nop
    ctx->pc = 0x181700u;
    // NOP
label_181704:
    // 0x181704: 0x0  nop
    ctx->pc = 0x181704u;
    // NOP
label_181708:
    // 0x181708: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_18170c:
    if (ctx->pc == 0x18170Cu) {
        ctx->pc = 0x18170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181708u;
        // 0x18170c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181710u;
        goto label_181710;
    }
    ctx->pc = 0x181708u;
    {
        const bool branch_taken_0x181708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181708) {
            ctx->pc = 0x18170Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181708u;
            // 0x18170c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1816F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1816f8;
        }
    }
    ctx->pc = 0x181710u;
label_181710:
    // 0x181710: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x181710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_181714:
    // 0x181714: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x181714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_181718:
    // 0x181718: 0x54460013  bnel        $v0, $a2, . + 4 + (0x13 << 2)
label_18171c:
    if (ctx->pc == 0x18171Cu) {
        ctx->pc = 0x18171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181718u;
        // 0x18171c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181720u;
        goto label_181720;
    }
    ctx->pc = 0x181718u;
    {
        const bool branch_taken_0x181718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x181718) {
            ctx->pc = 0x18171Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181718u;
            // 0x18171c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181768u;
            goto label_181768;
        }
    }
    ctx->pc = 0x181720u;
label_181720:
    // 0x181720: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x181720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_181724:
    // 0x181724: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_181728:
    if (ctx->pc == 0x181728u) {
        ctx->pc = 0x181728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181724u;
        // 0x181728: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18172Cu;
        goto label_18172c;
    }
    ctx->pc = 0x181724u;
    {
        const bool branch_taken_0x181724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181724) {
            ctx->pc = 0x181728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181724u;
            // 0x181728: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181738u;
            goto label_181738;
        }
    }
    ctx->pc = 0x18172Cu;
label_18172c:
    // 0x18172c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x18172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_181730:
    // 0x181730: 0x1000000c  b           . + 4 + (0xC << 2)
label_181734:
    if (ctx->pc == 0x181734u) {
        ctx->pc = 0x181734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181730u;
        // 0x181734: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181738u;
        goto label_181738;
    }
    ctx->pc = 0x181730u;
    {
        const bool branch_taken_0x181730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181730u;
        // 0x181734: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181730) {
            ctx->pc = 0x181764u;
            goto label_181764;
        }
    }
    ctx->pc = 0x181738u;
label_181738:
    // 0x181738: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_18173c:
    if (ctx->pc == 0x18173Cu) {
        ctx->pc = 0x18173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181738u;
        // 0x18173c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181740u;
        goto label_181740;
    }
    ctx->pc = 0x181738u;
    {
        const bool branch_taken_0x181738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181738u;
        // 0x18173c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181738) {
            ctx->pc = 0x181760u;
            goto label_181760;
        }
    }
    ctx->pc = 0x181740u;
label_181740:
    // 0x181740: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x181740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_181744:
    // 0x181744: 0x0  nop
    ctx->pc = 0x181744u;
    // NOP
label_181748:
    // 0x181748: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x181748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18174c:
    // 0x18174c: 0x0  nop
    ctx->pc = 0x18174cu;
    // NOP
label_181750:
    // 0x181750: 0x0  nop
    ctx->pc = 0x181750u;
    // NOP
label_181754:
    // 0x181754: 0x0  nop
    ctx->pc = 0x181754u;
    // NOP
label_181758:
    // 0x181758: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_18175c:
    if (ctx->pc == 0x18175Cu) {
        ctx->pc = 0x18175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181758u;
        // 0x18175c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181760u;
        goto label_181760;
    }
    ctx->pc = 0x181758u;
    {
        const bool branch_taken_0x181758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181758) {
            ctx->pc = 0x18175Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181758u;
            // 0x18175c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181748;
        }
    }
    ctx->pc = 0x181760u;
label_181760:
    // 0x181760: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x181760u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_181764:
    // 0x181764: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x181764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_181768:
    // 0x181768: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
label_18176c:
    if (ctx->pc == 0x18176Cu) {
        ctx->pc = 0x181770u;
        goto label_181770;
    }
    ctx->pc = 0x181768u;
    {
        const bool branch_taken_0x181768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181768) {
            ctx->pc = 0x181AB4u;
            goto label_181ab4;
        }
    }
    ctx->pc = 0x181770u;
label_181770:
    // 0x181770: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_181774:
    if (ctx->pc == 0x181774u) {
        ctx->pc = 0x181774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181770u;
        // 0x181774: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181778u;
        goto label_181778;
    }
    ctx->pc = 0x181770u;
    {
        const bool branch_taken_0x181770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181770u;
        // 0x181774: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181770) {
            ctx->pc = 0x181A88u;
            goto label_181a88;
        }
    }
    ctx->pc = 0x181778u;
label_181778:
    // 0x181778: 0x15220060  bne         $t1, $v0, . + 4 + (0x60 << 2)
label_18177c:
    if (ctx->pc == 0x18177Cu) {
        ctx->pc = 0x18177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181778u;
        // 0x18177c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181780u;
        goto label_181780;
    }
    ctx->pc = 0x181778u;
    {
        const bool branch_taken_0x181778 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x18177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181778u;
        // 0x18177c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181778) {
            ctx->pc = 0x1818FCu;
            goto label_1818fc;
        }
    }
    ctx->pc = 0x181780u;
label_181780:
    // 0x181780: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x181780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_181784:
    // 0x181784: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x181784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_181788:
    // 0x181788: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_18178c:
    if (ctx->pc == 0x18178Cu) {
        ctx->pc = 0x18178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181788u;
        // 0x18178c: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181790u;
        goto label_181790;
    }
    ctx->pc = 0x181788u;
    {
        const bool branch_taken_0x181788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181788) {
            ctx->pc = 0x18178Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181788u;
            // 0x18178c: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1817F0u;
            goto label_1817f0;
        }
    }
    ctx->pc = 0x181790u;
label_181790:
    // 0x181790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181794:
    // 0x181794: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x181794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_181798:
    // 0x181798: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x181798u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_18179c:
    // 0x18179c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x18179cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1817a0:
    // 0x1817a0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1817a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1817a4:
    // 0x1817a4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1817a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_1817a8:
    // 0x1817a8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1817a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1817ac:
    // 0x1817ac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1817b0:
    if (ctx->pc == 0x1817B0u) {
        ctx->pc = 0x1817B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817ACu;
        // 0x1817b0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1817B4u;
        goto label_1817b4;
    }
    ctx->pc = 0x1817ACu;
    {
        const bool branch_taken_0x1817ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1817ac) {
            ctx->pc = 0x1817B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1817ACu;
            // 0x1817b0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1817B4u;
            goto label_1817b4;
        }
    }
    ctx->pc = 0x1817B4u;
label_1817b4:
    // 0x1817b4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1817b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1817b8:
    // 0x1817b8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1817b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1817bc:
    // 0x1817bc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1817bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1817c0:
    // 0x1817c0: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_1817c4:
    if (ctx->pc == 0x1817C4u) {
        ctx->pc = 0x1817C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817C0u;
        // 0x1817c4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1817C8u;
        goto label_1817c8;
    }
    ctx->pc = 0x1817C0u;
    {
        const bool branch_taken_0x1817c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1817c0) {
            ctx->pc = 0x1817C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1817C0u;
            // 0x1817c4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1817D0u;
            goto label_1817d0;
        }
    }
    ctx->pc = 0x1817C8u;
label_1817c8:
    // 0x1817c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1817cc:
    if (ctx->pc == 0x1817CCu) {
        ctx->pc = 0x1817CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817C8u;
        // 0x1817cc: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1817D0u;
        goto label_1817d0;
    }
    ctx->pc = 0x1817C8u;
    {
        const bool branch_taken_0x1817c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817C8u;
        // 0x1817cc: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817c8) {
            ctx->pc = 0x1817E0u;
            goto label_1817e0;
        }
    }
    ctx->pc = 0x1817D0u;
label_1817d0:
    // 0x1817d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1817d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1817d4:
    // 0x1817d4: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_1817d8:
    if (ctx->pc == 0x1817D8u) {
        ctx->pc = 0x1817D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817D4u;
        // 0x1817d8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1817DCu;
        goto label_1817dc;
    }
    ctx->pc = 0x1817D4u;
    {
        const bool branch_taken_0x1817d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1817d4) {
            ctx->pc = 0x1817D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1817D4u;
            // 0x1817d8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1817E0u;
            goto label_1817e0;
        }
    }
    ctx->pc = 0x1817DCu;
label_1817dc:
    // 0x1817dc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1817dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1817e0:
    // 0x1817e0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1817e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_1817e4:
    // 0x1817e4: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x1817e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_1817e8:
    // 0x1817e8: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x1817e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1817ec:
    // 0x1817ec: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1817ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1817f0:
    // 0x1817f0: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_1817f4:
    if (ctx->pc == 0x1817F4u) {
        ctx->pc = 0x1817F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817F0u;
        // 0x1817f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1817F8u;
        goto label_1817f8;
    }
    ctx->pc = 0x1817F0u;
    {
        const bool branch_taken_0x1817f0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817F0u;
        // 0x1817f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817f0) {
            ctx->pc = 0x181804u;
            goto label_181804;
        }
    }
    ctx->pc = 0x1817F8u;
label_1817f8:
    // 0x1817f8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1817f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1817fc:
    // 0x1817fc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_181800:
    if (ctx->pc == 0x181800u) {
        ctx->pc = 0x181800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817FCu;
        // 0x181800: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181804u;
        goto label_181804;
    }
    ctx->pc = 0x1817FCu;
    {
        const bool branch_taken_0x1817fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x181800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817FCu;
        // 0x181800: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817fc) {
            ctx->pc = 0x18181Cu;
            goto label_18181c;
        }
    }
    ctx->pc = 0x181804u;
label_181804:
    // 0x181804: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x181804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_181808:
    // 0x181808: 0x10c00062  beqz        $a2, . + 4 + (0x62 << 2)
label_18180c:
    if (ctx->pc == 0x18180Cu) {
        ctx->pc = 0x18180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181808u;
        // 0x18180c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181810u;
        goto label_181810;
    }
    ctx->pc = 0x181808u;
    {
        const bool branch_taken_0x181808 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x18180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181808u;
        // 0x18180c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181808) {
            ctx->pc = 0x181994u;
            goto label_181994;
        }
    }
    ctx->pc = 0x181810u;
label_181810:
    // 0x181810: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x181810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_181814:
    // 0x181814: 0x50620060  beql        $v1, $v0, . + 4 + (0x60 << 2)
label_181818:
    if (ctx->pc == 0x181818u) {
        ctx->pc = 0x181818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181814u;
        // 0x181818: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18181Cu;
        goto label_18181c;
    }
    ctx->pc = 0x181814u;
    {
        const bool branch_taken_0x181814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181814) {
            ctx->pc = 0x181818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181814u;
            // 0x181818: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181998u;
            goto label_181998;
        }
    }
    ctx->pc = 0x18181Cu;
label_18181c:
    // 0x18181c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_181820:
    if (ctx->pc == 0x181820u) {
        ctx->pc = 0x181820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18181Cu;
        // 0x181820: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181824u;
        goto label_181824;
    }
    ctx->pc = 0x18181Cu;
    {
        const bool branch_taken_0x18181c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x181820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18181Cu;
        // 0x181820: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18181c) {
            ctx->pc = 0x181830u;
            goto label_181830;
        }
    }
    ctx->pc = 0x181824u;
label_181824:
    // 0x181824: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x181824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_181828:
    // 0x181828: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_18182c:
    if (ctx->pc == 0x18182Cu) {
        ctx->pc = 0x18182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181828u;
        // 0x18182c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181830u;
        goto label_181830;
    }
    ctx->pc = 0x181828u;
    {
        const bool branch_taken_0x181828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x181828) {
            ctx->pc = 0x18182Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181828u;
            // 0x18182c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181894u;
            goto label_181894;
        }
    }
    ctx->pc = 0x181830u;
label_181830:
    // 0x181830: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_181834:
    if (ctx->pc == 0x181834u) {
        ctx->pc = 0x181834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181830u;
        // 0x181834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181838u;
        goto label_181838;
    }
    ctx->pc = 0x181830u;
    {
        const bool branch_taken_0x181830 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x181834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181830u;
        // 0x181834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181830) {
            ctx->pc = 0x18183Cu;
            goto label_18183c;
        }
    }
    ctx->pc = 0x181838u;
label_181838:
    // 0x181838: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x181838u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_18183c:
    // 0x18183c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x18183cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_181840:
    // 0x181840: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x181840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_181844:
    // 0x181844: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x181844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_181848:
    // 0x181848: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x181848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_18184c:
    // 0x18184c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18184cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_181850:
    // 0x181850: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_181854:
    if (ctx->pc == 0x181854u) {
        ctx->pc = 0x181854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181850u;
        // 0x181854: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181858u;
        goto label_181858;
    }
    ctx->pc = 0x181850u;
    {
        const bool branch_taken_0x181850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181850) {
            ctx->pc = 0x181854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181850u;
            // 0x181854: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181858u;
            goto label_181858;
        }
    }
    ctx->pc = 0x181858u;
label_181858:
    // 0x181858: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x181858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18185c:
    // 0x18185c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x18185cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_181860:
    // 0x181860: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x181860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_181864:
    // 0x181864: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_181868:
    if (ctx->pc == 0x181868u) {
        ctx->pc = 0x181868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181864u;
        // 0x181868: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18186Cu;
        goto label_18186c;
    }
    ctx->pc = 0x181864u;
    {
        const bool branch_taken_0x181864 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x181864) {
            ctx->pc = 0x181868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181864u;
            // 0x181868: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181874u;
            goto label_181874;
        }
    }
    ctx->pc = 0x18186Cu;
label_18186c:
    // 0x18186c: 0x10000005  b           . + 4 + (0x5 << 2)
label_181870:
    if (ctx->pc == 0x181870u) {
        ctx->pc = 0x181870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18186Cu;
        // 0x181870: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181874u;
        goto label_181874;
    }
    ctx->pc = 0x18186Cu;
    {
        const bool branch_taken_0x18186c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18186Cu;
        // 0x181870: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18186c) {
            ctx->pc = 0x181884u;
            goto label_181884;
        }
    }
    ctx->pc = 0x181874u;
label_181874:
    // 0x181874: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x181874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_181878:
    // 0x181878: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_18187c:
    if (ctx->pc == 0x18187Cu) {
        ctx->pc = 0x18187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181878u;
        // 0x18187c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181880u;
        goto label_181880;
    }
    ctx->pc = 0x181878u;
    {
        const bool branch_taken_0x181878 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x181878) {
            ctx->pc = 0x18187Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181878u;
            // 0x18187c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181884u;
            goto label_181884;
        }
    }
    ctx->pc = 0x181880u;
label_181880:
    // 0x181880: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x181880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_181884:
    // 0x181884: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x181884u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_181888:
    // 0x181888: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x181888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_18188c:
    // 0x18188c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x18188cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_181890:
    // 0x181890: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x181890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_181894:
    // 0x181894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181898:
    // 0x181898: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x181898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18189c:
    // 0x18189c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x18189cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_1818a0:
    // 0x1818a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1818a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1818a4:
    // 0x1818a4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1818a8:
    if (ctx->pc == 0x1818A8u) {
        ctx->pc = 0x1818A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818A4u;
        // 0x1818a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1818ACu;
        goto label_1818ac;
    }
    ctx->pc = 0x1818A4u;
    {
        const bool branch_taken_0x1818a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1818a4) {
            ctx->pc = 0x1818A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1818A4u;
            // 0x1818a8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1818ACu;
            goto label_1818ac;
        }
    }
    ctx->pc = 0x1818ACu;
label_1818ac:
    // 0x1818ac: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x1818acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1818b0:
    // 0x1818b0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1818b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1818b4:
    // 0x1818b4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1818b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_1818b8:
    // 0x1818b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1818b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1818bc:
    // 0x1818bc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1818c0:
    if (ctx->pc == 0x1818C0u) {
        ctx->pc = 0x1818C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818BCu;
        // 0x1818c0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1818C4u;
        goto label_1818c4;
    }
    ctx->pc = 0x1818BCu;
    {
        const bool branch_taken_0x1818bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1818bc) {
            ctx->pc = 0x1818C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1818BCu;
            // 0x1818c0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1818C4u;
            goto label_1818c4;
        }
    }
    ctx->pc = 0x1818C4u;
label_1818c4:
    // 0x1818c4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1818c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1818c8:
    // 0x1818c8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1818c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1818cc:
    // 0x1818cc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1818ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1818d0:
    // 0x1818d0: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_1818d4:
    if (ctx->pc == 0x1818D4u) {
        ctx->pc = 0x1818D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818D0u;
        // 0x1818d4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1818D8u;
        goto label_1818d8;
    }
    ctx->pc = 0x1818D0u;
    {
        const bool branch_taken_0x1818d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1818d0) {
            ctx->pc = 0x1818D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1818D0u;
            // 0x1818d4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1818E0u;
            goto label_1818e0;
        }
    }
    ctx->pc = 0x1818D8u;
label_1818d8:
    // 0x1818d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1818dc:
    if (ctx->pc == 0x1818DCu) {
        ctx->pc = 0x1818DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818D8u;
        // 0x1818dc: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1818E0u;
        goto label_1818e0;
    }
    ctx->pc = 0x1818D8u;
    {
        const bool branch_taken_0x1818d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1818DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818D8u;
        // 0x1818dc: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1818d8) {
            ctx->pc = 0x1818F0u;
            goto label_1818f0;
        }
    }
    ctx->pc = 0x1818E0u;
label_1818e0:
    // 0x1818e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1818e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1818e4:
    // 0x1818e4: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_1818e8:
    if (ctx->pc == 0x1818E8u) {
        ctx->pc = 0x1818E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818E4u;
        // 0x1818e8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1818ECu;
        goto label_1818ec;
    }
    ctx->pc = 0x1818E4u;
    {
        const bool branch_taken_0x1818e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1818e4) {
            ctx->pc = 0x1818E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1818E4u;
            // 0x1818e8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1818F0u;
            goto label_1818f0;
        }
    }
    ctx->pc = 0x1818ECu;
label_1818ec:
    // 0x1818ec: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1818ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1818f0:
    // 0x1818f0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1818f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_1818f4:
    // 0x1818f4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1818f8:
    if (ctx->pc == 0x1818F8u) {
        ctx->pc = 0x1818F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818F4u;
        // 0x1818f8: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1818FCu;
        goto label_1818fc;
    }
    ctx->pc = 0x1818F4u;
    {
        const bool branch_taken_0x1818f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1818F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818F4u;
        // 0x1818f8: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1818f4) {
            ctx->pc = 0x181AA8u;
            goto label_181aa8;
        }
    }
    ctx->pc = 0x1818FCu;
label_1818fc:
    // 0x1818fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1818fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_181900:
    // 0x181900: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_181904:
    if (ctx->pc == 0x181904u) {
        ctx->pc = 0x181904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181900u;
        // 0x181904: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181908u;
        goto label_181908;
    }
    ctx->pc = 0x181900u;
    {
        const bool branch_taken_0x181900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181900) {
            ctx->pc = 0x181904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181900u;
            // 0x181904: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181968u;
            goto label_181968;
        }
    }
    ctx->pc = 0x181908u;
label_181908:
    // 0x181908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18190c:
    // 0x18190c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18190cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_181910:
    // 0x181910: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x181910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_181914:
    // 0x181914: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x181914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_181918:
    // 0x181918: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x181918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18191c:
    // 0x18191c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x18191cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_181920:
    // 0x181920: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x181920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_181924:
    // 0x181924: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_181928:
    if (ctx->pc == 0x181928u) {
        ctx->pc = 0x181928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181924u;
        // 0x181928: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18192Cu;
        goto label_18192c;
    }
    ctx->pc = 0x181924u;
    {
        const bool branch_taken_0x181924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181924) {
            ctx->pc = 0x181928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181924u;
            // 0x181928: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18192Cu;
            goto label_18192c;
        }
    }
    ctx->pc = 0x18192Cu;
label_18192c:
    // 0x18192c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x18192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_181930:
    // 0x181930: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x181930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_181934:
    // 0x181934: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x181934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_181938:
    // 0x181938: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_18193c:
    if (ctx->pc == 0x18193Cu) {
        ctx->pc = 0x18193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181938u;
        // 0x18193c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181940u;
        goto label_181940;
    }
    ctx->pc = 0x181938u;
    {
        const bool branch_taken_0x181938 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x181938) {
            ctx->pc = 0x18193Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181938u;
            // 0x18193c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181948u;
            goto label_181948;
        }
    }
    ctx->pc = 0x181940u;
label_181940:
    // 0x181940: 0x10000005  b           . + 4 + (0x5 << 2)
label_181944:
    if (ctx->pc == 0x181944u) {
        ctx->pc = 0x181944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181940u;
        // 0x181944: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181948u;
        goto label_181948;
    }
    ctx->pc = 0x181940u;
    {
        const bool branch_taken_0x181940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181940u;
        // 0x181944: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181940) {
            ctx->pc = 0x181958u;
            goto label_181958;
        }
    }
    ctx->pc = 0x181948u;
label_181948:
    // 0x181948: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x181948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18194c:
    // 0x18194c: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_181950:
    if (ctx->pc == 0x181950u) {
        ctx->pc = 0x181950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18194Cu;
        // 0x181950: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181954u;
        goto label_181954;
    }
    ctx->pc = 0x18194Cu;
    {
        const bool branch_taken_0x18194c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x18194c) {
            ctx->pc = 0x181950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18194Cu;
            // 0x181950: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181958u;
            goto label_181958;
        }
    }
    ctx->pc = 0x181954u;
label_181954:
    // 0x181954: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x181954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_181958:
    // 0x181958: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x181958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_18195c:
    // 0x18195c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x18195cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_181960:
    // 0x181960: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x181960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_181964:
    // 0x181964: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x181964u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_181968:
    // 0x181968: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_18196c:
    if (ctx->pc == 0x18196Cu) {
        ctx->pc = 0x18196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181968u;
        // 0x18196c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181970u;
        goto label_181970;
    }
    ctx->pc = 0x181968u;
    {
        const bool branch_taken_0x181968 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x18196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181968u;
        // 0x18196c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181968) {
            ctx->pc = 0x18197Cu;
            goto label_18197c;
        }
    }
    ctx->pc = 0x181970u;
label_181970:
    // 0x181970: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x181970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_181974:
    // 0x181974: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_181978:
    if (ctx->pc == 0x181978u) {
        ctx->pc = 0x181978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181974u;
        // 0x181978: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18197Cu;
        goto label_18197c;
    }
    ctx->pc = 0x181974u;
    {
        const bool branch_taken_0x181974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x181978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181974u;
        // 0x181978: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181974) {
            ctx->pc = 0x1819A4u;
            goto label_1819a4;
        }
    }
    ctx->pc = 0x18197Cu;
label_18197c:
    // 0x18197c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x18197cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_181980:
    // 0x181980: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_181984:
    if (ctx->pc == 0x181984u) {
        ctx->pc = 0x181984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181980u;
        // 0x181984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181988u;
        goto label_181988;
    }
    ctx->pc = 0x181980u;
    {
        const bool branch_taken_0x181980 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x181984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181980u;
        // 0x181984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181980) {
            ctx->pc = 0x181994u;
            goto label_181994;
        }
    }
    ctx->pc = 0x181988u;
label_181988:
    // 0x181988: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x181988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18198c:
    // 0x18198c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_181990:
    if (ctx->pc == 0x181990u) {
        ctx->pc = 0x181994u;
        goto label_181994;
    }
    ctx->pc = 0x18198Cu;
    {
        const bool branch_taken_0x18198c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18198c) {
            ctx->pc = 0x1819A4u;
            goto label_1819a4;
        }
    }
    ctx->pc = 0x181994u;
label_181994:
    // 0x181994: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x181994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_181998:
    // 0x181998: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x181998u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18199c:
    // 0x18199c: 0x10000039  b           . + 4 + (0x39 << 2)
label_1819a0:
    if (ctx->pc == 0x1819A0u) {
        ctx->pc = 0x1819A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18199Cu;
        // 0x1819a0: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819A4u;
        goto label_1819a4;
    }
    ctx->pc = 0x18199Cu;
    {
        const bool branch_taken_0x18199c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1819A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18199Cu;
        // 0x1819a0: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18199c) {
            ctx->pc = 0x181A84u;
            goto label_181a84;
        }
    }
    ctx->pc = 0x1819A4u;
label_1819a4:
    // 0x1819a4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1819a8:
    if (ctx->pc == 0x1819A8u) {
        ctx->pc = 0x1819A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819A4u;
        // 0x1819a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819ACu;
        goto label_1819ac;
    }
    ctx->pc = 0x1819A4u;
    {
        const bool branch_taken_0x1819a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1819A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819A4u;
        // 0x1819a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819a4) {
            ctx->pc = 0x1819B8u;
            goto label_1819b8;
        }
    }
    ctx->pc = 0x1819ACu;
label_1819ac:
    // 0x1819ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1819acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1819b0:
    // 0x1819b0: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_1819b4:
    if (ctx->pc == 0x1819B4u) {
        ctx->pc = 0x1819B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819B0u;
        // 0x1819b4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819B8u;
        goto label_1819b8;
    }
    ctx->pc = 0x1819B0u;
    {
        const bool branch_taken_0x1819b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1819b0) {
            ctx->pc = 0x1819B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1819B0u;
            // 0x1819b4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181A1Cu;
            goto label_181a1c;
        }
    }
    ctx->pc = 0x1819B8u;
label_1819b8:
    // 0x1819b8: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_1819bc:
    if (ctx->pc == 0x1819BCu) {
        ctx->pc = 0x1819BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819B8u;
        // 0x1819bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819C0u;
        goto label_1819c0;
    }
    ctx->pc = 0x1819B8u;
    {
        const bool branch_taken_0x1819b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1819BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819B8u;
        // 0x1819bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819b8) {
            ctx->pc = 0x1819C4u;
            goto label_1819c4;
        }
    }
    ctx->pc = 0x1819C0u;
label_1819c0:
    // 0x1819c0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1819c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_1819c4:
    // 0x1819c4: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1819c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1819c8:
    // 0x1819c8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1819c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1819cc:
    // 0x1819cc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1819ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1819d0:
    // 0x1819d0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1819d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1819d4:
    // 0x1819d4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1819d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1819d8:
    // 0x1819d8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1819dc:
    if (ctx->pc == 0x1819DCu) {
        ctx->pc = 0x1819DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819D8u;
        // 0x1819dc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819E0u;
        goto label_1819e0;
    }
    ctx->pc = 0x1819D8u;
    {
        const bool branch_taken_0x1819d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1819d8) {
            ctx->pc = 0x1819DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1819D8u;
            // 0x1819dc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1819E0u;
            goto label_1819e0;
        }
    }
    ctx->pc = 0x1819E0u;
label_1819e0:
    // 0x1819e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1819e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1819e4:
    // 0x1819e4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1819e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1819e8:
    // 0x1819e8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1819e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1819ec:
    // 0x1819ec: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_1819f0:
    if (ctx->pc == 0x1819F0u) {
        ctx->pc = 0x1819F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819ECu;
        // 0x1819f0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819F4u;
        goto label_1819f4;
    }
    ctx->pc = 0x1819ECu;
    {
        const bool branch_taken_0x1819ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1819ec) {
            ctx->pc = 0x1819F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1819ECu;
            // 0x1819f0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1819FCu;
            goto label_1819fc;
        }
    }
    ctx->pc = 0x1819F4u;
label_1819f4:
    // 0x1819f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1819f8:
    if (ctx->pc == 0x1819F8u) {
        ctx->pc = 0x1819F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819F4u;
        // 0x1819f8: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819FCu;
        goto label_1819fc;
    }
    ctx->pc = 0x1819F4u;
    {
        const bool branch_taken_0x1819f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1819F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819F4u;
        // 0x1819f8: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819f4) {
            ctx->pc = 0x181A0Cu;
            goto label_181a0c;
        }
    }
    ctx->pc = 0x1819FCu;
label_1819fc:
    // 0x1819fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1819fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_181a00:
    // 0x181a00: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_181a04:
    if (ctx->pc == 0x181A04u) {
        ctx->pc = 0x181A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A00u;
        // 0x181a04: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181A08u;
        goto label_181a08;
    }
    ctx->pc = 0x181A00u;
    {
        const bool branch_taken_0x181a00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x181a00) {
            ctx->pc = 0x181A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181A00u;
            // 0x181a04: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181A0Cu;
            goto label_181a0c;
        }
    }
    ctx->pc = 0x181A08u;
label_181a08:
    // 0x181a08: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x181a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_181a0c:
    // 0x181a0c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x181a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_181a10:
    // 0x181a10: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x181a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_181a14:
    // 0x181a14: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x181a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_181a18:
    // 0x181a18: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x181a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_181a1c:
    // 0x181a1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181a20:
    // 0x181a20: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x181a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_181a24:
    // 0x181a24: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x181a24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_181a28:
    // 0x181a28: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x181a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_181a2c:
    // 0x181a2c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_181a30:
    if (ctx->pc == 0x181A30u) {
        ctx->pc = 0x181A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A2Cu;
        // 0x181a30: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181A34u;
        goto label_181a34;
    }
    ctx->pc = 0x181A2Cu;
    {
        const bool branch_taken_0x181a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181a2c) {
            ctx->pc = 0x181A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181A2Cu;
            // 0x181a30: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181A34u;
            goto label_181a34;
        }
    }
    ctx->pc = 0x181A34u;
label_181a34:
    // 0x181a34: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x181a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_181a38:
    // 0x181a38: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x181a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_181a3c:
    // 0x181a3c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x181a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_181a40:
    // 0x181a40: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x181a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_181a44:
    // 0x181a44: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_181a48:
    if (ctx->pc == 0x181A48u) {
        ctx->pc = 0x181A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A44u;
        // 0x181a48: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181A4Cu;
        goto label_181a4c;
    }
    ctx->pc = 0x181A44u;
    {
        const bool branch_taken_0x181a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181a44) {
            ctx->pc = 0x181A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181A44u;
            // 0x181a48: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181A4Cu;
            goto label_181a4c;
        }
    }
    ctx->pc = 0x181A4Cu;
label_181a4c:
    // 0x181a4c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x181a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_181a50:
    // 0x181a50: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x181a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_181a54:
    // 0x181a54: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x181a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_181a58:
    // 0x181a58: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_181a5c:
    if (ctx->pc == 0x181A5Cu) {
        ctx->pc = 0x181A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A58u;
        // 0x181a5c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181A60u;
        goto label_181a60;
    }
    ctx->pc = 0x181A58u;
    {
        const bool branch_taken_0x181a58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x181a58) {
            ctx->pc = 0x181A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181A58u;
            // 0x181a5c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181A68u;
            goto label_181a68;
        }
    }
    ctx->pc = 0x181A60u;
label_181a60:
    // 0x181a60: 0x10000005  b           . + 4 + (0x5 << 2)
label_181a64:
    if (ctx->pc == 0x181A64u) {
        ctx->pc = 0x181A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A60u;
        // 0x181a64: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181A68u;
        goto label_181a68;
    }
    ctx->pc = 0x181A60u;
    {
        const bool branch_taken_0x181a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A60u;
        // 0x181a64: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a60) {
            ctx->pc = 0x181A78u;
            goto label_181a78;
        }
    }
    ctx->pc = 0x181A68u;
label_181a68:
    // 0x181a68: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x181a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_181a6c:
    // 0x181a6c: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_181a70:
    if (ctx->pc == 0x181A70u) {
        ctx->pc = 0x181A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A6Cu;
        // 0x181a70: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181A74u;
        goto label_181a74;
    }
    ctx->pc = 0x181A6Cu;
    {
        const bool branch_taken_0x181a6c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x181a6c) {
            ctx->pc = 0x181A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181A6Cu;
            // 0x181a70: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181A78u;
            goto label_181a78;
        }
    }
    ctx->pc = 0x181A74u;
label_181a74:
    // 0x181a74: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x181a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_181a78:
    // 0x181a78: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x181a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_181a7c:
    // 0x181a7c: 0x1000000a  b           . + 4 + (0xA << 2)
label_181a80:
    if (ctx->pc == 0x181A80u) {
        ctx->pc = 0x181A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A7Cu;
        // 0x181a80: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181A84u;
        goto label_181a84;
    }
    ctx->pc = 0x181A7Cu;
    {
        const bool branch_taken_0x181a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A7Cu;
        // 0x181a80: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a7c) {
            ctx->pc = 0x181AA8u;
            goto label_181aa8;
        }
    }
    ctx->pc = 0x181A84u;
label_181a84:
    // 0x181a84: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x181a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_181a88:
    // 0x181a88: 0x11220007  beq         $t1, $v0, . + 4 + (0x7 << 2)
label_181a8c:
    if (ctx->pc == 0x181A8Cu) {
        ctx->pc = 0x181A90u;
        goto label_181a90;
    }
    ctx->pc = 0x181A88u;
    {
        const bool branch_taken_0x181a88 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x181a88) {
            ctx->pc = 0x181AA8u;
            goto label_181aa8;
        }
    }
    ctx->pc = 0x181A90u;
label_181a90:
    // 0x181a90: 0x5120ff39  beql        $t1, $zero, . + 4 + (-0xC7 << 2)
label_181a94:
    if (ctx->pc == 0x181A94u) {
        ctx->pc = 0x181A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A90u;
        // 0x181a94: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181A98u;
        goto label_181a98;
    }
    ctx->pc = 0x181A90u;
    {
        const bool branch_taken_0x181a90 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x181a90) {
            ctx->pc = 0x181A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181A90u;
            // 0x181a94: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181778;
        }
    }
    ctx->pc = 0x181A98u;
label_181a98:
    // 0x181a98: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x181a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_181a9c:
    // 0x181a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181aa0:
    // 0x181aa0: 0x5062ff35  beql        $v1, $v0, . + 4 + (-0xCB << 2)
label_181aa4:
    if (ctx->pc == 0x181AA4u) {
        ctx->pc = 0x181AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AA0u;
        // 0x181aa4: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181AA8u;
        goto label_181aa8;
    }
    ctx->pc = 0x181AA0u;
    {
        const bool branch_taken_0x181aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181aa0) {
            ctx->pc = 0x181AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181AA0u;
            // 0x181aa4: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181778;
        }
    }
    ctx->pc = 0x181AA8u;
label_181aa8:
    // 0x181aa8: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_181aac:
    if (ctx->pc == 0x181AACu) {
        ctx->pc = 0x181AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AA8u;
        // 0x181aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181AB0u;
        goto label_181ab0;
    }
    ctx->pc = 0x181AA8u;
    {
        const bool branch_taken_0x181aa8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x181AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AA8u;
        // 0x181aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181aa8) {
            ctx->pc = 0x181AB4u;
            goto label_181ab4;
        }
    }
    ctx->pc = 0x181AB0u;
label_181ab0:
    // 0x181ab0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x181ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_181ab4:
    // 0x181ab4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_181ab8:
    if (ctx->pc == 0x181AB8u) {
        ctx->pc = 0x181AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AB4u;
        // 0x181ab8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181ABCu;
        goto label_181abc;
    }
    ctx->pc = 0x181AB4u;
    {
        const bool branch_taken_0x181ab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x181AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AB4u;
        // 0x181ab8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ab4) {
            ctx->pc = 0x181AE0u;
            goto label_181ae0;
        }
    }
    ctx->pc = 0x181ABCu;
label_181abc:
    // 0x181abc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x181abcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_181ac0:
    // 0x181ac0: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x181ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_181ac4:
    // 0x181ac4: 0x24c62650  addiu       $a2, $a2, 0x2650
    ctx->pc = 0x181ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9808));
label_181ac8:
    // 0x181ac8: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x181ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_181acc:
    // 0x181acc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x181accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_181ad0:
    // 0x181ad0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x181ad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_181ad4:
    // 0x181ad4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x181ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_181ad8:
    // 0x181ad8: 0x60f809  jalr        $v1
label_181adc:
    if (ctx->pc == 0x181ADCu) {
        ctx->pc = 0x181ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AD8u;
        // 0x181adc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181AE0u;
        goto label_181ae0;
    }
    ctx->pc = 0x181AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x181AE0u);
        ctx->pc = 0x181ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AD8u;
        // 0x181adc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181AD8u, 0x181AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181AE0u;
label_181ae0:
    // 0x181ae0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x181ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_181ae4:
    // 0x181ae4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x181ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_181ae8:
    // 0x181ae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181aec:
    // 0x181aec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x181aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_181af0:
    // 0x181af0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x181af0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_181af4:
    // 0x181af4: 0xc05e2f2  jal         func_178BC8
label_181af8:
    if (ctx->pc == 0x181AF8u) {
        ctx->pc = 0x181AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181AF4u;
        // 0x181af8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181AFCu;
        goto label_181afc;
    }
    ctx->pc = 0x181AF4u;
    SET_GPR_U32(ctx, 31, 0x181AFCu);
    ctx->pc = 0x181AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181AF4u;
    // 0x181af8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178BC8u, 0x181AF4u, 0x181AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181AFCu;
label_181afc:
    // 0x181afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181b00:
    // 0x181b00: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x181b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_181b04:
    // 0x181b04: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x181b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_181b08:
    // 0x181b08: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x181b08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_181b0c:
    // 0x181b0c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x181b0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_181b10:
    // 0x181b10: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x181b10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_181b14:
    // 0x181b14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x181b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_181b18:
    // 0x181b18: 0x3e00008  jr          $ra
label_181b1c:
    if (ctx->pc == 0x181B1Cu) {
        ctx->pc = 0x181B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B18u;
        // 0x181b1c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181B20u;
        goto label_fallthrough_0x181b18;
    }
    ctx->pc = 0x181B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B18u;
        // 0x181b1c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x181b18:
    ctx->pc = 0x181B20u;
}
