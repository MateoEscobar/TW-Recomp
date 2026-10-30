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

// Function: sub_0015FE90
// Address: 0x15fe90 - 0x1607b8
void sub_0015FE90_0x15fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FE90_0x15fe90");
#endif

    switch (ctx->pc) {
        case 0x15fe90u: goto label_15fe90;
        case 0x15fe94u: goto label_15fe94;
        case 0x15fe98u: goto label_15fe98;
        case 0x15fe9cu: goto label_15fe9c;
        case 0x15fea0u: goto label_15fea0;
        case 0x15fea4u: goto label_15fea4;
        case 0x15fea8u: goto label_15fea8;
        case 0x15feacu: goto label_15feac;
        case 0x15feb0u: goto label_15feb0;
        case 0x15feb4u: goto label_15feb4;
        case 0x15feb8u: goto label_15feb8;
        case 0x15febcu: goto label_15febc;
        case 0x15fec0u: goto label_15fec0;
        case 0x15fec4u: goto label_15fec4;
        case 0x15fec8u: goto label_15fec8;
        case 0x15feccu: goto label_15fecc;
        case 0x15fed0u: goto label_15fed0;
        case 0x15fed4u: goto label_15fed4;
        case 0x15fed8u: goto label_15fed8;
        case 0x15fedcu: goto label_15fedc;
        case 0x15fee0u: goto label_15fee0;
        case 0x15fee4u: goto label_15fee4;
        case 0x15fee8u: goto label_15fee8;
        case 0x15feecu: goto label_15feec;
        case 0x15fef0u: goto label_15fef0;
        case 0x15fef4u: goto label_15fef4;
        case 0x15fef8u: goto label_15fef8;
        case 0x15fefcu: goto label_15fefc;
        case 0x15ff00u: goto label_15ff00;
        case 0x15ff04u: goto label_15ff04;
        case 0x15ff08u: goto label_15ff08;
        case 0x15ff0cu: goto label_15ff0c;
        case 0x15ff10u: goto label_15ff10;
        case 0x15ff14u: goto label_15ff14;
        case 0x15ff18u: goto label_15ff18;
        case 0x15ff1cu: goto label_15ff1c;
        case 0x15ff20u: goto label_15ff20;
        case 0x15ff24u: goto label_15ff24;
        case 0x15ff28u: goto label_15ff28;
        case 0x15ff2cu: goto label_15ff2c;
        case 0x15ff30u: goto label_15ff30;
        case 0x15ff34u: goto label_15ff34;
        case 0x15ff38u: goto label_15ff38;
        case 0x15ff3cu: goto label_15ff3c;
        case 0x15ff40u: goto label_15ff40;
        case 0x15ff44u: goto label_15ff44;
        case 0x15ff48u: goto label_15ff48;
        case 0x15ff4cu: goto label_15ff4c;
        case 0x15ff50u: goto label_15ff50;
        case 0x15ff54u: goto label_15ff54;
        case 0x15ff58u: goto label_15ff58;
        case 0x15ff5cu: goto label_15ff5c;
        case 0x15ff60u: goto label_15ff60;
        case 0x15ff64u: goto label_15ff64;
        case 0x15ff68u: goto label_15ff68;
        case 0x15ff6cu: goto label_15ff6c;
        case 0x15ff70u: goto label_15ff70;
        case 0x15ff74u: goto label_15ff74;
        case 0x15ff78u: goto label_15ff78;
        case 0x15ff7cu: goto label_15ff7c;
        case 0x15ff80u: goto label_15ff80;
        case 0x15ff84u: goto label_15ff84;
        case 0x15ff88u: goto label_15ff88;
        case 0x15ff8cu: goto label_15ff8c;
        case 0x15ff90u: goto label_15ff90;
        case 0x15ff94u: goto label_15ff94;
        case 0x15ff98u: goto label_15ff98;
        case 0x15ff9cu: goto label_15ff9c;
        case 0x15ffa0u: goto label_15ffa0;
        case 0x15ffa4u: goto label_15ffa4;
        case 0x15ffa8u: goto label_15ffa8;
        case 0x15ffacu: goto label_15ffac;
        case 0x15ffb0u: goto label_15ffb0;
        case 0x15ffb4u: goto label_15ffb4;
        case 0x15ffb8u: goto label_15ffb8;
        case 0x15ffbcu: goto label_15ffbc;
        case 0x15ffc0u: goto label_15ffc0;
        case 0x15ffc4u: goto label_15ffc4;
        case 0x15ffc8u: goto label_15ffc8;
        case 0x15ffccu: goto label_15ffcc;
        case 0x15ffd0u: goto label_15ffd0;
        case 0x15ffd4u: goto label_15ffd4;
        case 0x15ffd8u: goto label_15ffd8;
        case 0x15ffdcu: goto label_15ffdc;
        case 0x15ffe0u: goto label_15ffe0;
        case 0x15ffe4u: goto label_15ffe4;
        case 0x15ffe8u: goto label_15ffe8;
        case 0x15ffecu: goto label_15ffec;
        case 0x15fff0u: goto label_15fff0;
        case 0x15fff4u: goto label_15fff4;
        case 0x15fff8u: goto label_15fff8;
        case 0x15fffcu: goto label_15fffc;
        case 0x160000u: goto label_160000;
        case 0x160004u: goto label_160004;
        case 0x160008u: goto label_160008;
        case 0x16000cu: goto label_16000c;
        case 0x160010u: goto label_160010;
        case 0x160014u: goto label_160014;
        case 0x160018u: goto label_160018;
        case 0x16001cu: goto label_16001c;
        case 0x160020u: goto label_160020;
        case 0x160024u: goto label_160024;
        case 0x160028u: goto label_160028;
        case 0x16002cu: goto label_16002c;
        case 0x160030u: goto label_160030;
        case 0x160034u: goto label_160034;
        case 0x160038u: goto label_160038;
        case 0x16003cu: goto label_16003c;
        case 0x160040u: goto label_160040;
        case 0x160044u: goto label_160044;
        case 0x160048u: goto label_160048;
        case 0x16004cu: goto label_16004c;
        case 0x160050u: goto label_160050;
        case 0x160054u: goto label_160054;
        case 0x160058u: goto label_160058;
        case 0x16005cu: goto label_16005c;
        case 0x160060u: goto label_160060;
        case 0x160064u: goto label_160064;
        case 0x160068u: goto label_160068;
        case 0x16006cu: goto label_16006c;
        case 0x160070u: goto label_160070;
        case 0x160074u: goto label_160074;
        case 0x160078u: goto label_160078;
        case 0x16007cu: goto label_16007c;
        case 0x160080u: goto label_160080;
        case 0x160084u: goto label_160084;
        case 0x160088u: goto label_160088;
        case 0x16008cu: goto label_16008c;
        case 0x160090u: goto label_160090;
        case 0x160094u: goto label_160094;
        case 0x160098u: goto label_160098;
        case 0x16009cu: goto label_16009c;
        case 0x1600a0u: goto label_1600a0;
        case 0x1600a4u: goto label_1600a4;
        case 0x1600a8u: goto label_1600a8;
        case 0x1600acu: goto label_1600ac;
        case 0x1600b0u: goto label_1600b0;
        case 0x1600b4u: goto label_1600b4;
        case 0x1600b8u: goto label_1600b8;
        case 0x1600bcu: goto label_1600bc;
        case 0x1600c0u: goto label_1600c0;
        case 0x1600c4u: goto label_1600c4;
        case 0x1600c8u: goto label_1600c8;
        case 0x1600ccu: goto label_1600cc;
        case 0x1600d0u: goto label_1600d0;
        case 0x1600d4u: goto label_1600d4;
        case 0x1600d8u: goto label_1600d8;
        case 0x1600dcu: goto label_1600dc;
        case 0x1600e0u: goto label_1600e0;
        case 0x1600e4u: goto label_1600e4;
        case 0x1600e8u: goto label_1600e8;
        case 0x1600ecu: goto label_1600ec;
        case 0x1600f0u: goto label_1600f0;
        case 0x1600f4u: goto label_1600f4;
        case 0x1600f8u: goto label_1600f8;
        case 0x1600fcu: goto label_1600fc;
        case 0x160100u: goto label_160100;
        case 0x160104u: goto label_160104;
        case 0x160108u: goto label_160108;
        case 0x16010cu: goto label_16010c;
        case 0x160110u: goto label_160110;
        case 0x160114u: goto label_160114;
        case 0x160118u: goto label_160118;
        case 0x16011cu: goto label_16011c;
        case 0x160120u: goto label_160120;
        case 0x160124u: goto label_160124;
        case 0x160128u: goto label_160128;
        case 0x16012cu: goto label_16012c;
        case 0x160130u: goto label_160130;
        case 0x160134u: goto label_160134;
        case 0x160138u: goto label_160138;
        case 0x16013cu: goto label_16013c;
        case 0x160140u: goto label_160140;
        case 0x160144u: goto label_160144;
        case 0x160148u: goto label_160148;
        case 0x16014cu: goto label_16014c;
        case 0x160150u: goto label_160150;
        case 0x160154u: goto label_160154;
        case 0x160158u: goto label_160158;
        case 0x16015cu: goto label_16015c;
        case 0x160160u: goto label_160160;
        case 0x160164u: goto label_160164;
        case 0x160168u: goto label_160168;
        case 0x16016cu: goto label_16016c;
        case 0x160170u: goto label_160170;
        case 0x160174u: goto label_160174;
        case 0x160178u: goto label_160178;
        case 0x16017cu: goto label_16017c;
        case 0x160180u: goto label_160180;
        case 0x160184u: goto label_160184;
        case 0x160188u: goto label_160188;
        case 0x16018cu: goto label_16018c;
        case 0x160190u: goto label_160190;
        case 0x160194u: goto label_160194;
        case 0x160198u: goto label_160198;
        case 0x16019cu: goto label_16019c;
        case 0x1601a0u: goto label_1601a0;
        case 0x1601a4u: goto label_1601a4;
        case 0x1601a8u: goto label_1601a8;
        case 0x1601acu: goto label_1601ac;
        case 0x1601b0u: goto label_1601b0;
        case 0x1601b4u: goto label_1601b4;
        case 0x1601b8u: goto label_1601b8;
        case 0x1601bcu: goto label_1601bc;
        case 0x1601c0u: goto label_1601c0;
        case 0x1601c4u: goto label_1601c4;
        case 0x1601c8u: goto label_1601c8;
        case 0x1601ccu: goto label_1601cc;
        case 0x1601d0u: goto label_1601d0;
        case 0x1601d4u: goto label_1601d4;
        case 0x1601d8u: goto label_1601d8;
        case 0x1601dcu: goto label_1601dc;
        case 0x1601e0u: goto label_1601e0;
        case 0x1601e4u: goto label_1601e4;
        case 0x1601e8u: goto label_1601e8;
        case 0x1601ecu: goto label_1601ec;
        case 0x1601f0u: goto label_1601f0;
        case 0x1601f4u: goto label_1601f4;
        case 0x1601f8u: goto label_1601f8;
        case 0x1601fcu: goto label_1601fc;
        case 0x160200u: goto label_160200;
        case 0x160204u: goto label_160204;
        case 0x160208u: goto label_160208;
        case 0x16020cu: goto label_16020c;
        case 0x160210u: goto label_160210;
        case 0x160214u: goto label_160214;
        case 0x160218u: goto label_160218;
        case 0x16021cu: goto label_16021c;
        case 0x160220u: goto label_160220;
        case 0x160224u: goto label_160224;
        case 0x160228u: goto label_160228;
        case 0x16022cu: goto label_16022c;
        case 0x160230u: goto label_160230;
        case 0x160234u: goto label_160234;
        case 0x160238u: goto label_160238;
        case 0x16023cu: goto label_16023c;
        case 0x160240u: goto label_160240;
        case 0x160244u: goto label_160244;
        case 0x160248u: goto label_160248;
        case 0x16024cu: goto label_16024c;
        case 0x160250u: goto label_160250;
        case 0x160254u: goto label_160254;
        case 0x160258u: goto label_160258;
        case 0x16025cu: goto label_16025c;
        case 0x160260u: goto label_160260;
        case 0x160264u: goto label_160264;
        case 0x160268u: goto label_160268;
        case 0x16026cu: goto label_16026c;
        case 0x160270u: goto label_160270;
        case 0x160274u: goto label_160274;
        case 0x160278u: goto label_160278;
        case 0x16027cu: goto label_16027c;
        case 0x160280u: goto label_160280;
        case 0x160284u: goto label_160284;
        case 0x160288u: goto label_160288;
        case 0x16028cu: goto label_16028c;
        case 0x160290u: goto label_160290;
        case 0x160294u: goto label_160294;
        case 0x160298u: goto label_160298;
        case 0x16029cu: goto label_16029c;
        case 0x1602a0u: goto label_1602a0;
        case 0x1602a4u: goto label_1602a4;
        case 0x1602a8u: goto label_1602a8;
        case 0x1602acu: goto label_1602ac;
        case 0x1602b0u: goto label_1602b0;
        case 0x1602b4u: goto label_1602b4;
        case 0x1602b8u: goto label_1602b8;
        case 0x1602bcu: goto label_1602bc;
        case 0x1602c0u: goto label_1602c0;
        case 0x1602c4u: goto label_1602c4;
        case 0x1602c8u: goto label_1602c8;
        case 0x1602ccu: goto label_1602cc;
        case 0x1602d0u: goto label_1602d0;
        case 0x1602d4u: goto label_1602d4;
        case 0x1602d8u: goto label_1602d8;
        case 0x1602dcu: goto label_1602dc;
        case 0x1602e0u: goto label_1602e0;
        case 0x1602e4u: goto label_1602e4;
        case 0x1602e8u: goto label_1602e8;
        case 0x1602ecu: goto label_1602ec;
        case 0x1602f0u: goto label_1602f0;
        case 0x1602f4u: goto label_1602f4;
        case 0x1602f8u: goto label_1602f8;
        case 0x1602fcu: goto label_1602fc;
        case 0x160300u: goto label_160300;
        case 0x160304u: goto label_160304;
        case 0x160308u: goto label_160308;
        case 0x16030cu: goto label_16030c;
        case 0x160310u: goto label_160310;
        case 0x160314u: goto label_160314;
        case 0x160318u: goto label_160318;
        case 0x16031cu: goto label_16031c;
        case 0x160320u: goto label_160320;
        case 0x160324u: goto label_160324;
        case 0x160328u: goto label_160328;
        case 0x16032cu: goto label_16032c;
        case 0x160330u: goto label_160330;
        case 0x160334u: goto label_160334;
        case 0x160338u: goto label_160338;
        case 0x16033cu: goto label_16033c;
        case 0x160340u: goto label_160340;
        case 0x160344u: goto label_160344;
        case 0x160348u: goto label_160348;
        case 0x16034cu: goto label_16034c;
        case 0x160350u: goto label_160350;
        case 0x160354u: goto label_160354;
        case 0x160358u: goto label_160358;
        case 0x16035cu: goto label_16035c;
        case 0x160360u: goto label_160360;
        case 0x160364u: goto label_160364;
        case 0x160368u: goto label_160368;
        case 0x16036cu: goto label_16036c;
        case 0x160370u: goto label_160370;
        case 0x160374u: goto label_160374;
        case 0x160378u: goto label_160378;
        case 0x16037cu: goto label_16037c;
        case 0x160380u: goto label_160380;
        case 0x160384u: goto label_160384;
        case 0x160388u: goto label_160388;
        case 0x16038cu: goto label_16038c;
        case 0x160390u: goto label_160390;
        case 0x160394u: goto label_160394;
        case 0x160398u: goto label_160398;
        case 0x16039cu: goto label_16039c;
        case 0x1603a0u: goto label_1603a0;
        case 0x1603a4u: goto label_1603a4;
        case 0x1603a8u: goto label_1603a8;
        case 0x1603acu: goto label_1603ac;
        case 0x1603b0u: goto label_1603b0;
        case 0x1603b4u: goto label_1603b4;
        case 0x1603b8u: goto label_1603b8;
        case 0x1603bcu: goto label_1603bc;
        case 0x1603c0u: goto label_1603c0;
        case 0x1603c4u: goto label_1603c4;
        case 0x1603c8u: goto label_1603c8;
        case 0x1603ccu: goto label_1603cc;
        case 0x1603d0u: goto label_1603d0;
        case 0x1603d4u: goto label_1603d4;
        case 0x1603d8u: goto label_1603d8;
        case 0x1603dcu: goto label_1603dc;
        case 0x1603e0u: goto label_1603e0;
        case 0x1603e4u: goto label_1603e4;
        case 0x1603e8u: goto label_1603e8;
        case 0x1603ecu: goto label_1603ec;
        case 0x1603f0u: goto label_1603f0;
        case 0x1603f4u: goto label_1603f4;
        case 0x1603f8u: goto label_1603f8;
        case 0x1603fcu: goto label_1603fc;
        case 0x160400u: goto label_160400;
        case 0x160404u: goto label_160404;
        case 0x160408u: goto label_160408;
        case 0x16040cu: goto label_16040c;
        case 0x160410u: goto label_160410;
        case 0x160414u: goto label_160414;
        case 0x160418u: goto label_160418;
        case 0x16041cu: goto label_16041c;
        case 0x160420u: goto label_160420;
        case 0x160424u: goto label_160424;
        case 0x160428u: goto label_160428;
        case 0x16042cu: goto label_16042c;
        case 0x160430u: goto label_160430;
        case 0x160434u: goto label_160434;
        case 0x160438u: goto label_160438;
        case 0x16043cu: goto label_16043c;
        case 0x160440u: goto label_160440;
        case 0x160444u: goto label_160444;
        case 0x160448u: goto label_160448;
        case 0x16044cu: goto label_16044c;
        case 0x160450u: goto label_160450;
        case 0x160454u: goto label_160454;
        case 0x160458u: goto label_160458;
        case 0x16045cu: goto label_16045c;
        case 0x160460u: goto label_160460;
        case 0x160464u: goto label_160464;
        case 0x160468u: goto label_160468;
        case 0x16046cu: goto label_16046c;
        case 0x160470u: goto label_160470;
        case 0x160474u: goto label_160474;
        case 0x160478u: goto label_160478;
        case 0x16047cu: goto label_16047c;
        case 0x160480u: goto label_160480;
        case 0x160484u: goto label_160484;
        case 0x160488u: goto label_160488;
        case 0x16048cu: goto label_16048c;
        case 0x160490u: goto label_160490;
        case 0x160494u: goto label_160494;
        case 0x160498u: goto label_160498;
        case 0x16049cu: goto label_16049c;
        case 0x1604a0u: goto label_1604a0;
        case 0x1604a4u: goto label_1604a4;
        case 0x1604a8u: goto label_1604a8;
        case 0x1604acu: goto label_1604ac;
        case 0x1604b0u: goto label_1604b0;
        case 0x1604b4u: goto label_1604b4;
        case 0x1604b8u: goto label_1604b8;
        case 0x1604bcu: goto label_1604bc;
        case 0x1604c0u: goto label_1604c0;
        case 0x1604c4u: goto label_1604c4;
        case 0x1604c8u: goto label_1604c8;
        case 0x1604ccu: goto label_1604cc;
        case 0x1604d0u: goto label_1604d0;
        case 0x1604d4u: goto label_1604d4;
        case 0x1604d8u: goto label_1604d8;
        case 0x1604dcu: goto label_1604dc;
        case 0x1604e0u: goto label_1604e0;
        case 0x1604e4u: goto label_1604e4;
        case 0x1604e8u: goto label_1604e8;
        case 0x1604ecu: goto label_1604ec;
        case 0x1604f0u: goto label_1604f0;
        case 0x1604f4u: goto label_1604f4;
        case 0x1604f8u: goto label_1604f8;
        case 0x1604fcu: goto label_1604fc;
        case 0x160500u: goto label_160500;
        case 0x160504u: goto label_160504;
        case 0x160508u: goto label_160508;
        case 0x16050cu: goto label_16050c;
        case 0x160510u: goto label_160510;
        case 0x160514u: goto label_160514;
        case 0x160518u: goto label_160518;
        case 0x16051cu: goto label_16051c;
        case 0x160520u: goto label_160520;
        case 0x160524u: goto label_160524;
        case 0x160528u: goto label_160528;
        case 0x16052cu: goto label_16052c;
        case 0x160530u: goto label_160530;
        case 0x160534u: goto label_160534;
        case 0x160538u: goto label_160538;
        case 0x16053cu: goto label_16053c;
        case 0x160540u: goto label_160540;
        case 0x160544u: goto label_160544;
        case 0x160548u: goto label_160548;
        case 0x16054cu: goto label_16054c;
        case 0x160550u: goto label_160550;
        case 0x160554u: goto label_160554;
        case 0x160558u: goto label_160558;
        case 0x16055cu: goto label_16055c;
        case 0x160560u: goto label_160560;
        case 0x160564u: goto label_160564;
        case 0x160568u: goto label_160568;
        case 0x16056cu: goto label_16056c;
        case 0x160570u: goto label_160570;
        case 0x160574u: goto label_160574;
        case 0x160578u: goto label_160578;
        case 0x16057cu: goto label_16057c;
        case 0x160580u: goto label_160580;
        case 0x160584u: goto label_160584;
        case 0x160588u: goto label_160588;
        case 0x16058cu: goto label_16058c;
        case 0x160590u: goto label_160590;
        case 0x160594u: goto label_160594;
        case 0x160598u: goto label_160598;
        case 0x16059cu: goto label_16059c;
        case 0x1605a0u: goto label_1605a0;
        case 0x1605a4u: goto label_1605a4;
        case 0x1605a8u: goto label_1605a8;
        case 0x1605acu: goto label_1605ac;
        case 0x1605b0u: goto label_1605b0;
        case 0x1605b4u: goto label_1605b4;
        case 0x1605b8u: goto label_1605b8;
        case 0x1605bcu: goto label_1605bc;
        case 0x1605c0u: goto label_1605c0;
        case 0x1605c4u: goto label_1605c4;
        case 0x1605c8u: goto label_1605c8;
        case 0x1605ccu: goto label_1605cc;
        case 0x1605d0u: goto label_1605d0;
        case 0x1605d4u: goto label_1605d4;
        case 0x1605d8u: goto label_1605d8;
        case 0x1605dcu: goto label_1605dc;
        case 0x1605e0u: goto label_1605e0;
        case 0x1605e4u: goto label_1605e4;
        case 0x1605e8u: goto label_1605e8;
        case 0x1605ecu: goto label_1605ec;
        case 0x1605f0u: goto label_1605f0;
        case 0x1605f4u: goto label_1605f4;
        case 0x1605f8u: goto label_1605f8;
        case 0x1605fcu: goto label_1605fc;
        case 0x160600u: goto label_160600;
        case 0x160604u: goto label_160604;
        case 0x160608u: goto label_160608;
        case 0x16060cu: goto label_16060c;
        case 0x160610u: goto label_160610;
        case 0x160614u: goto label_160614;
        case 0x160618u: goto label_160618;
        case 0x16061cu: goto label_16061c;
        case 0x160620u: goto label_160620;
        case 0x160624u: goto label_160624;
        case 0x160628u: goto label_160628;
        case 0x16062cu: goto label_16062c;
        case 0x160630u: goto label_160630;
        case 0x160634u: goto label_160634;
        case 0x160638u: goto label_160638;
        case 0x16063cu: goto label_16063c;
        case 0x160640u: goto label_160640;
        case 0x160644u: goto label_160644;
        case 0x160648u: goto label_160648;
        case 0x16064cu: goto label_16064c;
        case 0x160650u: goto label_160650;
        case 0x160654u: goto label_160654;
        case 0x160658u: goto label_160658;
        case 0x16065cu: goto label_16065c;
        case 0x160660u: goto label_160660;
        case 0x160664u: goto label_160664;
        case 0x160668u: goto label_160668;
        case 0x16066cu: goto label_16066c;
        case 0x160670u: goto label_160670;
        case 0x160674u: goto label_160674;
        case 0x160678u: goto label_160678;
        case 0x16067cu: goto label_16067c;
        case 0x160680u: goto label_160680;
        case 0x160684u: goto label_160684;
        case 0x160688u: goto label_160688;
        case 0x16068cu: goto label_16068c;
        case 0x160690u: goto label_160690;
        case 0x160694u: goto label_160694;
        case 0x160698u: goto label_160698;
        case 0x16069cu: goto label_16069c;
        case 0x1606a0u: goto label_1606a0;
        case 0x1606a4u: goto label_1606a4;
        case 0x1606a8u: goto label_1606a8;
        case 0x1606acu: goto label_1606ac;
        case 0x1606b0u: goto label_1606b0;
        case 0x1606b4u: goto label_1606b4;
        case 0x1606b8u: goto label_1606b8;
        case 0x1606bcu: goto label_1606bc;
        case 0x1606c0u: goto label_1606c0;
        case 0x1606c4u: goto label_1606c4;
        case 0x1606c8u: goto label_1606c8;
        case 0x1606ccu: goto label_1606cc;
        case 0x1606d0u: goto label_1606d0;
        case 0x1606d4u: goto label_1606d4;
        case 0x1606d8u: goto label_1606d8;
        case 0x1606dcu: goto label_1606dc;
        case 0x1606e0u: goto label_1606e0;
        case 0x1606e4u: goto label_1606e4;
        case 0x1606e8u: goto label_1606e8;
        case 0x1606ecu: goto label_1606ec;
        case 0x1606f0u: goto label_1606f0;
        case 0x1606f4u: goto label_1606f4;
        case 0x1606f8u: goto label_1606f8;
        case 0x1606fcu: goto label_1606fc;
        case 0x160700u: goto label_160700;
        case 0x160704u: goto label_160704;
        case 0x160708u: goto label_160708;
        case 0x16070cu: goto label_16070c;
        case 0x160710u: goto label_160710;
        case 0x160714u: goto label_160714;
        case 0x160718u: goto label_160718;
        case 0x16071cu: goto label_16071c;
        case 0x160720u: goto label_160720;
        case 0x160724u: goto label_160724;
        case 0x160728u: goto label_160728;
        case 0x16072cu: goto label_16072c;
        case 0x160730u: goto label_160730;
        case 0x160734u: goto label_160734;
        case 0x160738u: goto label_160738;
        case 0x16073cu: goto label_16073c;
        case 0x160740u: goto label_160740;
        case 0x160744u: goto label_160744;
        case 0x160748u: goto label_160748;
        case 0x16074cu: goto label_16074c;
        case 0x160750u: goto label_160750;
        case 0x160754u: goto label_160754;
        case 0x160758u: goto label_160758;
        case 0x16075cu: goto label_16075c;
        case 0x160760u: goto label_160760;
        case 0x160764u: goto label_160764;
        case 0x160768u: goto label_160768;
        case 0x16076cu: goto label_16076c;
        case 0x160770u: goto label_160770;
        case 0x160774u: goto label_160774;
        case 0x160778u: goto label_160778;
        case 0x16077cu: goto label_16077c;
        case 0x160780u: goto label_160780;
        case 0x160784u: goto label_160784;
        case 0x160788u: goto label_160788;
        case 0x16078cu: goto label_16078c;
        case 0x160790u: goto label_160790;
        case 0x160794u: goto label_160794;
        case 0x160798u: goto label_160798;
        case 0x16079cu: goto label_16079c;
        case 0x1607a0u: goto label_1607a0;
        case 0x1607a4u: goto label_1607a4;
        case 0x1607a8u: goto label_1607a8;
        case 0x1607acu: goto label_1607ac;
        case 0x1607b0u: goto label_1607b0;
        case 0x1607b4u: goto label_1607b4;
        default: break;
    }

    ctx->pc = 0x15fe90u;

label_15fe90:
    // 0x15fe90: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x15fe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_15fe94:
    // 0x15fe94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15fe98:
    // 0x15fe98: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x15fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_15fe9c:
    // 0x15fe9c: 0x7fb503d0  sq          $s5, 0x3D0($sp)
    ctx->pc = 0x15fe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 21));
label_15fea0:
    // 0x15fea0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15fea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_15fea4:
    // 0x15fea4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15fea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15fea8:
    // 0x15fea8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x15fea8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15feac:
    // 0x15feac: 0x7fb303f0  sq          $s3, 0x3F0($sp)
    ctx->pc = 0x15feacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 19));
label_15feb0:
    // 0x15feb0: 0x7fb403e0  sq          $s4, 0x3E0($sp)
    ctx->pc = 0x15feb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 20));
label_15feb4:
    // 0x15feb4: 0x7fb603c0  sq          $s6, 0x3C0($sp)
    ctx->pc = 0x15feb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 22));
label_15feb8:
    // 0x15feb8: 0x7fb703b0  sq          $s7, 0x3B0($sp)
    ctx->pc = 0x15feb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 23));
label_15febc:
    // 0x15febc: 0x7fb00420  sq          $s0, 0x420($sp)
    ctx->pc = 0x15febcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 16));
label_15fec0:
    // 0x15fec0: 0x7fb10410  sq          $s1, 0x410($sp)
    ctx->pc = 0x15fec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 17));
label_15fec4:
    // 0x15fec4: 0x7fb20400  sq          $s2, 0x400($sp)
    ctx->pc = 0x15fec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 18));
label_15fec8:
    // 0x15fec8: 0x7fbe03a0  sq          $fp, 0x3A0($sp)
    ctx->pc = 0x15fec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 30));
label_15fecc:
    // 0x15fecc: 0xffbf0390  sd          $ra, 0x390($sp)
    ctx->pc = 0x15feccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 31));
label_15fed0:
    // 0x15fed0: 0xc044164  jal         func_110590
label_15fed4:
    if (ctx->pc == 0x15FED4u) {
        ctx->pc = 0x15FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FED0u;
        // 0x15fed4: 0xe7b40430  swc1        $f20, 0x430($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FED8u;
        goto label_15fed8;
    }
    ctx->pc = 0x15FED0u;
    SET_GPR_U32(ctx, 31, 0x15FED8u);
    ctx->pc = 0x15FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FED0u;
    // 0x15fed4: 0xe7b40430  swc1        $f20, 0x430($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x110590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110590u, 0x15FED0u, 0x15FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FED8u;
label_15fed8:
    // 0x15fed8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15fedc:
    // 0x15fedc: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x15fedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_15fee0:
    // 0x15fee0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15fee4:
    // 0x15fee4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x15fee4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_15fee8:
    // 0x15fee8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x15fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_15feec:
    // 0x15feec: 0x40f809  jalr        $v0
label_15fef0:
    if (ctx->pc == 0x15FEF0u) {
        ctx->pc = 0x15FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEECu;
        // 0x15fef0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FEF4u;
        goto label_15fef4;
    }
    ctx->pc = 0x15FEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15FEF4u);
        ctx->pc = 0x15FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEECu;
        // 0x15fef0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FEECu, 0x15FEF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FEF4u;
label_15fef4:
    // 0x15fef4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15fef8:
    // 0x15fef8: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x15fef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_15fefc:
    // 0x15fefc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x15fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_15ff00:
    // 0x15ff00: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x15ff00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ff04:
    // 0x15ff04: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15ff08:
    // 0x15ff08: 0x949456dc  lhu         $s4, 0x56DC($a0)
    ctx->pc = 0x15ff08u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22236)));
label_15ff0c:
    // 0x15ff0c: 0x249714d4  addiu       $s7, $a0, 0x14D4
    ctx->pc = 0x15ff0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 5332));
label_15ff10:
    // 0x15ff10: 0x8c65c7c0  lw          $a1, -0x3840($v1)
    ctx->pc = 0x15ff10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952896)));
label_15ff14:
    // 0x15ff14: 0x2861018  mult        $v0, $s4, $a2
    ctx->pc = 0x15ff14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_15ff18:
    // 0x15ff18: 0x8483033a  lh          $v1, 0x33A($a0)
    ctx->pc = 0x15ff18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 826)));
label_15ff1c:
    // 0x15ff1c: 0xafa30380  sw          $v1, 0x380($sp)
    ctx->pc = 0x15ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 3));
label_15ff20:
    // 0x15ff20: 0x2ca30080  sltiu       $v1, $a1, 0x80
    ctx->pc = 0x15ff20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_15ff24:
    // 0x15ff24: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x15ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_15ff28:
    // 0x15ff28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_15ff2c:
    if (ctx->pc == 0x15FF2Cu) {
        ctx->pc = 0x15FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF28u;
        // 0x15ff2c: 0x24530014  addiu       $s3, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF30u;
        goto label_15ff30;
    }
    ctx->pc = 0x15FF28u;
    {
        const bool branch_taken_0x15ff28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF28u;
        // 0x15ff2c: 0x24530014  addiu       $s3, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff28) {
            ctx->pc = 0x15FF40u;
            goto label_15ff40;
        }
    }
    ctx->pc = 0x15FF30u;
label_15ff30:
    // 0x15ff30: 0xa61818  mult        $v1, $a1, $a2
    ctx->pc = 0x15ff30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15ff34:
    // 0x15ff34: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x15ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15ff38:
    // 0x15ff38: 0x10000002  b           . + 4 + (0x2 << 2)
label_15ff3c:
    if (ctx->pc == 0x15FF3Cu) {
        ctx->pc = 0x15FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF38u;
        // 0x15ff3c: 0x8c5014d8  lw          $s0, 0x14D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF40u;
        goto label_15ff40;
    }
    ctx->pc = 0x15FF38u;
    {
        const bool branch_taken_0x15ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF38u;
        // 0x15ff3c: 0x8c5014d8  lw          $s0, 0x14D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff38) {
            ctx->pc = 0x15FF44u;
            goto label_15ff44;
        }
    }
    ctx->pc = 0x15FF40u;
label_15ff40:
    // 0x15ff40: 0x24100045  addiu       $s0, $zero, 0x45
    ctx->pc = 0x15ff40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_15ff44:
    // 0x15ff44: 0xc107444  jal         func_41D110
label_15ff48:
    if (ctx->pc == 0x15FF48u) {
        ctx->pc = 0x15FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF44u;
        // 0x15ff48: 0x8ec4489c  lw          $a0, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF4Cu;
        goto label_15ff4c;
    }
    ctx->pc = 0x15FF44u;
    SET_GPR_U32(ctx, 31, 0x15FF4Cu);
    ctx->pc = 0x15FF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FF44u;
    // 0x15ff48: 0x8ec4489c  lw          $a0, 0x489C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x15FF44u, 0x15FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF4Cu;
label_15ff4c:
    // 0x15ff4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_15ff50:
    if (ctx->pc == 0x15FF50u) {
        ctx->pc = 0x15FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF4Cu;
        // 0x15ff50: 0x2602ffc4  addiu       $v0, $s0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF54u;
        goto label_15ff54;
    }
    ctx->pc = 0x15FF4Cu;
    {
        const bool branch_taken_0x15ff4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF4Cu;
        // 0x15ff50: 0x2602ffc4  addiu       $v0, $s0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff4c) {
            ctx->pc = 0x15FF6Cu;
            goto label_15ff6c;
        }
    }
    ctx->pc = 0x15FF54u;
label_15ff54:
    // 0x15ff54: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x15ff54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_15ff58:
    // 0x15ff58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15ff5c:
    if (ctx->pc == 0x15FF5Cu) {
        ctx->pc = 0x15FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF58u;
        // 0x15ff5c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF60u;
        goto label_15ff60;
    }
    ctx->pc = 0x15FF58u;
    {
        const bool branch_taken_0x15ff58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF58u;
        // 0x15ff5c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff58) {
            ctx->pc = 0x15FF70u;
            goto label_15ff70;
        }
    }
    ctx->pc = 0x15FF60u;
label_15ff60:
    // 0x15ff60: 0x8ec3489c  lw          $v1, 0x489C($s6)
    ctx->pc = 0x15ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_15ff64:
    // 0x15ff64: 0x8c6256ec  lw          $v0, 0x56EC($v1)
    ctx->pc = 0x15ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22252)));
label_15ff68:
    // 0x15ff68: 0xac6256f4  sw          $v0, 0x56F4($v1)
    ctx->pc = 0x15ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22260), GPR_U32(ctx, 2));
label_15ff6c:
    // 0x15ff6c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15ff6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15ff70:
    // 0x15ff70: 0xc051660  jal         func_145980
label_15ff74:
    if (ctx->pc == 0x15FF74u) {
        ctx->pc = 0x15FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF70u;
        // 0x15ff74: 0x8e04b734  lw          $a0, -0x48CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF78u;
        goto label_15ff78;
    }
    ctx->pc = 0x15FF70u;
    SET_GPR_U32(ctx, 31, 0x15FF78u);
    ctx->pc = 0x15FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FF70u;
    // 0x15ff74: 0x8e04b734  lw          $a0, -0x48CC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145980u, 0x15FF70u, 0x15FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF78u;
label_15ff78:
    // 0x15ff78: 0x8e05b734  lw          $a1, -0x48CC($s0)
    ctx->pc = 0x15ff78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_15ff7c:
    // 0x15ff7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15ff80:
    // 0x15ff80: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15ff80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_15ff84:
    // 0x15ff84: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x15ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15ff88:
    // 0x15ff88: 0x60f809  jalr        $v1
label_15ff8c:
    if (ctx->pc == 0x15FF8Cu) {
        ctx->pc = 0x15FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF88u;
        // 0x15ff8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF90u;
        goto label_15ff90;
    }
    ctx->pc = 0x15FF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15FF90u);
        ctx->pc = 0x15FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF88u;
        // 0x15ff8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FF88u, 0x15FF90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15FF90u;
label_15ff90:
    // 0x15ff90: 0x8e02b734  lw          $v0, -0x48CC($s0)
    ctx->pc = 0x15ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_15ff94:
    // 0x15ff94: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x15ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_15ff98:
    // 0x15ff98: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_15ff9c:
    if (ctx->pc == 0x15FF9Cu) {
        ctx->pc = 0x15FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF98u;
        // 0x15ff9c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFA0u;
        goto label_15ffa0;
    }
    ctx->pc = 0x15FF98u;
    {
        const bool branch_taken_0x15ff98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x15FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF98u;
        // 0x15ff9c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff98) {
            ctx->pc = 0x15FFB4u;
            goto label_15ffb4;
        }
    }
    ctx->pc = 0x15FFA0u;
label_15ffa0:
    // 0x15ffa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ffa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15ffa4:
    // 0x15ffa4: 0x0  nop
    ctx->pc = 0x15ffa4u;
    // NOP
label_15ffa8:
    // 0x15ffa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15ffa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15ffac:
    // 0x15ffac: 0x10000007  b           . + 4 + (0x7 << 2)
label_15ffb0:
    if (ctx->pc == 0x15FFB0u) {
        ctx->pc = 0x15FFB4u;
        goto label_15ffb4;
    }
    ctx->pc = 0x15FFACu;
    {
        const bool branch_taken_0x15ffac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ffac) {
            ctx->pc = 0x15FFCCu;
            goto label_15ffcc;
        }
    }
    ctx->pc = 0x15FFB4u;
label_15ffb4:
    // 0x15ffb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ffb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ffb8:
    // 0x15ffb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15ffb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_15ffbc:
    // 0x15ffbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ffbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15ffc0:
    // 0x15ffc0: 0x0  nop
    ctx->pc = 0x15ffc0u;
    // NOP
label_15ffc4:
    // 0x15ffc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15ffc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15ffc8:
    // 0x15ffc8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x15ffc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_15ffcc:
    // 0x15ffcc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x15ffccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_15ffd0:
    // 0x15ffd0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x15ffd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_15ffd4:
    // 0x15ffd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15ffd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15ffd8:
    // 0x15ffd8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15ffd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15ffdc:
    // 0x15ffdc: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x15ffdcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ffe0:
    // 0x15ffe0: 0xc0e8560  jal         func_3A1580
label_15ffe4:
    if (ctx->pc == 0x15FFE4u) {
        ctx->pc = 0x15FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFE0u;
        // 0x15ffe4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFE8u;
        goto label_15ffe8;
    }
    ctx->pc = 0x15FFE0u;
    SET_GPR_U32(ctx, 31, 0x15FFE8u);
    ctx->pc = 0x15FFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FFE0u;
    // 0x15ffe4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1580u, 0x15FFE0u, 0x15FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FFE8u;
label_15ffe8:
    // 0x15ffe8: 0xc0e8ad2  jal         func_3A2B48
label_15ffec:
    if (ctx->pc == 0x15FFECu) {
        ctx->pc = 0x15FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFE8u;
        // 0x15ffec: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFF0u;
        goto label_15fff0;
    }
    ctx->pc = 0x15FFE8u;
    SET_GPR_U32(ctx, 31, 0x15FFF0u);
    ctx->pc = 0x15FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FFE8u;
    // 0x15ffec: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2B48u, 0x15FFE8u, 0x15FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FFF0u;
label_15fff0:
    // 0x15fff0: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x15fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_15fff4:
    // 0x15fff4: 0xc043b48  jal         func_10ED20
label_15fff8:
    if (ctx->pc == 0x15FFF8u) {
        ctx->pc = 0x15FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFF4u;
        // 0x15fff8: 0x24840064  addiu       $a0, $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFFCu;
        goto label_15fffc;
    }
    ctx->pc = 0x15FFF4u;
    SET_GPR_U32(ctx, 31, 0x15FFFCu);
    ctx->pc = 0x15FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FFF4u;
    // 0x15fff8: 0x24840064  addiu       $a0, $a0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED20u, 0x15FFF4u, 0x15FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FFFCu;
label_15fffc:
    // 0x15fffc: 0xc10631a  jal         func_418C68
label_160000:
    if (ctx->pc == 0x160000u) {
        ctx->pc = 0x160000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFFCu;
        // 0x160000: 0x8ec4489c  lw          $a0, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160004u;
        goto label_160004;
    }
    ctx->pc = 0x15FFFCu;
    SET_GPR_U32(ctx, 31, 0x160004u);
    ctx->pc = 0x160000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FFFCu;
    // 0x160000: 0x8ec4489c  lw          $a0, 0x489C($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418C68u, 0x15FFFCu, 0x160004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160004u;
label_160004:
    // 0x160004: 0xc0d51c4  jal         func_354710
label_160008:
    if (ctx->pc == 0x160008u) {
        ctx->pc = 0x160008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160004u;
        // 0x160008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16000Cu;
        goto label_16000c;
    }
    ctx->pc = 0x160004u;
    SET_GPR_U32(ctx, 31, 0x16000Cu);
    ctx->pc = 0x160008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160004u;
    // 0x160008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354710u, 0x160004u, 0x16000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16000Cu;
label_16000c:
    // 0x16000c: 0xc048ae0  jal         func_122B80
label_160010:
    if (ctx->pc == 0x160010u) {
        ctx->pc = 0x160014u;
        goto label_160014;
    }
    ctx->pc = 0x16000Cu;
    SET_GPR_U32(ctx, 31, 0x160014u);
    ctx->pc = 0x122B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122B80u, 0x16000Cu, 0x160014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160014u;
label_160014:
    // 0x160014: 0xc063016  jal         func_18C058
label_160018:
    if (ctx->pc == 0x160018u) {
        ctx->pc = 0x16001Cu;
        goto label_16001c;
    }
    ctx->pc = 0x160014u;
    SET_GPR_U32(ctx, 31, 0x16001Cu);
    ctx->pc = 0x18C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C058u, 0x160014u, 0x16001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16001Cu;
label_16001c:
    // 0x16001c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x16001cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_160020:
    // 0x160020: 0xc105efa  jal         func_417BE8
label_160024:
    if (ctx->pc == 0x160024u) {
        ctx->pc = 0x160024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160020u;
        // 0x160024: 0x8c44719c  lw          $a0, 0x719C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160028u;
        goto label_160028;
    }
    ctx->pc = 0x160020u;
    SET_GPR_U32(ctx, 31, 0x160028u);
    ctx->pc = 0x160024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160020u;
    // 0x160024: 0x8c44719c  lw          $a0, 0x719C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417BE8u, 0x160020u, 0x160028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160028u;
label_160028:
    // 0x160028: 0xc05e42a  jal         func_1790A8
label_16002c:
    if (ctx->pc == 0x16002Cu) {
        ctx->pc = 0x160030u;
        goto label_160030;
    }
    ctx->pc = 0x160028u;
    SET_GPR_U32(ctx, 31, 0x160030u);
    ctx->pc = 0x1790A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1790A8u, 0x160028u, 0x160030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160030u;
label_160030:
    // 0x160030: 0x8ec3489c  lw          $v1, 0x489C($s6)
    ctx->pc = 0x160030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_160034:
    // 0x160034: 0x8462033a  lh          $v0, 0x33A($v1)
    ctx->pc = 0x160034u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 826)));
label_160038:
    // 0x160038: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x160038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_16003c:
    // 0x16003c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_160040:
    if (ctx->pc == 0x160040u) {
        ctx->pc = 0x160040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16003Cu;
        // 0x160040: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160044u;
        goto label_160044;
    }
    ctx->pc = 0x16003Cu;
    {
        const bool branch_taken_0x16003c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16003Cu;
        // 0x160040: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16003c) {
            ctx->pc = 0x160060u;
            goto label_160060;
        }
    }
    ctx->pc = 0x160044u;
label_160044:
    // 0x160044: 0x2610e490  addiu       $s0, $s0, -0x1B70
    ctx->pc = 0x160044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960272));
label_160048:
    // 0x160048: 0xc108a4c  jal         func_422930
label_16004c:
    if (ctx->pc == 0x16004Cu) {
        ctx->pc = 0x16004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160048u;
        // 0x16004c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160050u;
        goto label_160050;
    }
    ctx->pc = 0x160048u;
    SET_GPR_U32(ctx, 31, 0x160050u);
    ctx->pc = 0x16004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160048u;
    // 0x16004c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422930u, 0x160048u, 0x160050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160050u;
label_160050:
    // 0x160050: 0xc108b18  jal         func_422C60
label_160054:
    if (ctx->pc == 0x160054u) {
        ctx->pc = 0x160054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160050u;
        // 0x160054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160058u;
        goto label_160058;
    }
    ctx->pc = 0x160050u;
    SET_GPR_U32(ctx, 31, 0x160058u);
    ctx->pc = 0x160054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160050u;
    // 0x160054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422C60u, 0x160050u, 0x160058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160058u;
label_160058:
    // 0x160058: 0x10000005  b           . + 4 + (0x5 << 2)
label_16005c:
    if (ctx->pc == 0x16005Cu) {
        ctx->pc = 0x16005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160058u;
        // 0x16005c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160060u;
        goto label_160060;
    }
    ctx->pc = 0x160058u;
    {
        const bool branch_taken_0x160058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160058u;
        // 0x16005c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160058) {
            ctx->pc = 0x160070u;
            goto label_160070;
        }
    }
    ctx->pc = 0x160060u;
label_160060:
    // 0x160060: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x160060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_160064:
    // 0x160064: 0xc108b40  jal         func_422D00
label_160068:
    if (ctx->pc == 0x160068u) {
        ctx->pc = 0x160068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160064u;
        // 0x160068: 0x2484e490  addiu       $a0, $a0, -0x1B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16006Cu;
        goto label_16006c;
    }
    ctx->pc = 0x160064u;
    SET_GPR_U32(ctx, 31, 0x16006Cu);
    ctx->pc = 0x160068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160064u;
    // 0x160068: 0x2484e490  addiu       $a0, $a0, -0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422D00u, 0x160064u, 0x16006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16006Cu;
label_16006c:
    // 0x16006c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16006cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160070:
    // 0x160070: 0xc052028  jal         func_1480A0
label_160074:
    if (ctx->pc == 0x160074u) {
        ctx->pc = 0x160074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160070u;
        // 0x160074: 0xafa00384  sw          $zero, 0x384($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 900), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160078u;
        goto label_160078;
    }
    ctx->pc = 0x160070u;
    SET_GPR_U32(ctx, 31, 0x160078u);
    ctx->pc = 0x160074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160070u;
    // 0x160074: 0xafa00384  sw          $zero, 0x384($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 900), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1480A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1480A0u, 0x160070u, 0x160078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160078u;
label_160078:
    // 0x160078: 0xc104dbc  jal         func_4136F0
label_16007c:
    if (ctx->pc == 0x16007Cu) {
        ctx->pc = 0x160080u;
        goto label_160080;
    }
    ctx->pc = 0x160078u;
    SET_GPR_U32(ctx, 31, 0x160080u);
    ctx->pc = 0x4136F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4136F0u, 0x160078u, 0x160080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160080u;
label_160080:
    // 0x160080: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160084:
    // 0x160084: 0x8c46cdb4  lw          $a2, -0x324C($v0)
    ctx->pc = 0x160084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_160088:
    // 0x160088: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x160088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_16008c:
    // 0x16008c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x16008cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_160090:
    // 0x160090: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x160090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_160094:
    // 0x160094: 0xa0f809  jalr        $a1
label_160098:
    if (ctx->pc == 0x160098u) {
        ctx->pc = 0x160098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160094u;
        // 0x160098: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16009Cu;
        goto label_16009c;
    }
    ctx->pc = 0x160094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x16009Cu);
        ctx->pc = 0x160098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160094u;
        // 0x160098: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160094u, 0x16009Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16009Cu;
label_16009c:
    // 0x16009c: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x16009cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1600a0:
    // 0x1600a0: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x1600a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1600a4:
    // 0x1600a4: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x1600a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_1600a8:
    // 0x1600a8: 0x9043000d  lbu         $v1, 0xD($v0)
    ctx->pc = 0x1600a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
label_1600ac:
    // 0x1600ac: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1600acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1600b0:
    // 0x1600b0: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_1600b4:
    if (ctx->pc == 0x1600B4u) {
        ctx->pc = 0x1600B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600B0u;
        // 0x1600b4: 0x8ec3489c  lw          $v1, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600B8u;
        goto label_1600b8;
    }
    ctx->pc = 0x1600B0u;
    {
        const bool branch_taken_0x1600b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1600B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600B0u;
        // 0x1600b4: 0x8ec3489c  lw          $v1, 0x489C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600b0) {
            ctx->pc = 0x160174u;
            goto label_160174;
        }
    }
    ctx->pc = 0x1600B8u;
label_1600b8:
    // 0x1600b8: 0x8462033a  lh          $v0, 0x33A($v1)
    ctx->pc = 0x1600b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 826)));
label_1600bc:
    // 0x1600bc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1600bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1600c0:
    // 0x1600c0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1600c4:
    if (ctx->pc == 0x1600C4u) {
        ctx->pc = 0x1600C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600C0u;
        // 0x1600c4: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600C8u;
        goto label_1600c8;
    }
    ctx->pc = 0x1600C0u;
    {
        const bool branch_taken_0x1600c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1600C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600C0u;
        // 0x1600c4: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600c0) {
            ctx->pc = 0x160174u;
            goto label_160174;
        }
    }
    ctx->pc = 0x1600C8u;
label_1600c8:
    // 0x1600c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1600c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1600cc:
    // 0x1600cc: 0x8e5127e4  lw          $s1, 0x27E4($s2)
    ctx->pc = 0x1600ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1600d0:
    // 0x1600d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1600d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1600d4:
    // 0x1600d4: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x1600d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_1600d8:
    // 0x1600d8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1600d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1600dc:
    // 0x1600dc: 0x860200b8  lh          $v0, 0xB8($s0)
    ctx->pc = 0x1600dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 184)));
label_1600e0:
    // 0x1600e0: 0x261000b8  addiu       $s0, $s0, 0xB8
    ctx->pc = 0x1600e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_1600e4:
    // 0x1600e4: 0xc061e6e  jal         func_1879B8
label_1600e8:
    if (ctx->pc == 0x1600E8u) {
        ctx->pc = 0x1600E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600E4u;
        // 0x1600e8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600ECu;
        goto label_1600ec;
    }
    ctx->pc = 0x1600E4u;
    SET_GPR_U32(ctx, 31, 0x1600ECu);
    ctx->pc = 0x1600E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1600E4u;
    // 0x1600e8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x1600E4u, 0x1600ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1600ECu;
label_1600ec:
    // 0x1600ec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1600ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1600f0:
    // 0x1600f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1600f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1600f4:
    // 0x1600f4: 0x60f809  jalr        $v1
label_1600f8:
    if (ctx->pc == 0x1600F8u) {
        ctx->pc = 0x1600F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600F4u;
        // 0x1600f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600FCu;
        goto label_1600fc;
    }
    ctx->pc = 0x1600F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1600FCu);
        ctx->pc = 0x1600F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600F4u;
        // 0x1600f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1600F4u, 0x1600FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1600FCu;
label_1600fc:
    // 0x1600fc: 0x8e4a27e4  lw          $t2, 0x27E4($s2)
    ctx->pc = 0x1600fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_160100:
    // 0x160100: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x160100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_160104:
    // 0x160104: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x160104u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_160108:
    // 0x160108: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x160108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
label_16010c:
    // 0x16010c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x16010cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_160110:
    // 0x160110: 0x250800b0  addiu       $t0, $t0, 0xB0
    ctx->pc = 0x160110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 176));
label_160114:
    // 0x160114: 0x24a500a8  addiu       $a1, $a1, 0xA8
    ctx->pc = 0x160114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 168));
label_160118:
    // 0x160118: 0x34c6d400  ori         $a2, $a2, 0xD400
    ctx->pc = 0x160118u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54272);
label_16011c:
    // 0x16011c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x16011cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_160120:
    // 0x160120: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x160120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_160124:
    // 0x160124: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x160124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_160128:
    // 0x160128: 0x240900e9  addiu       $t1, $zero, 0xE9
    ctx->pc = 0x160128u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
label_16012c:
    // 0x16012c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x16012cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_160130:
    // 0x160130: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x160130u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160134:
    // 0x160134: 0x40f809  jalr        $v0
label_160138:
    if (ctx->pc == 0x160138u) {
        ctx->pc = 0x160138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160134u;
        // 0x160138: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16013Cu;
        goto label_16013c;
    }
    ctx->pc = 0x160134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16013Cu);
        ctx->pc = 0x160138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160134u;
        // 0x160138: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160134u, 0x16013Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16013Cu;
label_16013c:
    // 0x16013c: 0x8e5127e4  lw          $s1, 0x27E4($s2)
    ctx->pc = 0x16013cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_160140:
    // 0x160140: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x160140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_160144:
    // 0x160144: 0xafa20384  sw          $v0, 0x384($sp)
    ctx->pc = 0x160144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 900), GPR_U32(ctx, 2));
label_160148:
    // 0x160148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16014c:
    // 0x16014c: 0x8c64cd4c  lw          $a0, -0x32B4($v1)
    ctx->pc = 0x16014cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
label_160150:
    // 0x160150: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x160150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_160154:
    // 0x160154: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x160154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
label_160158:
    // 0x160158: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x160158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_16015c:
    // 0x16015c: 0xc061e6e  jal         func_1879B8
label_160160:
    if (ctx->pc == 0x160160u) {
        ctx->pc = 0x160160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16015Cu;
        // 0x160160: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160164u;
        goto label_160164;
    }
    ctx->pc = 0x16015Cu;
    SET_GPR_U32(ctx, 31, 0x160164u);
    ctx->pc = 0x160160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16015Cu;
    // 0x160160: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x16015Cu, 0x160164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160164u;
label_160164:
    // 0x160164: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x160164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_160168:
    // 0x160168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16016c:
    // 0x16016c: 0x60f809  jalr        $v1
label_160170:
    if (ctx->pc == 0x160170u) {
        ctx->pc = 0x160170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16016Cu;
        // 0x160170: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160174u;
        goto label_160174;
    }
    ctx->pc = 0x16016Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160174u);
        ctx->pc = 0x160170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16016Cu;
        // 0x160170: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16016Cu, 0x160174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160174u;
label_160174:
    // 0x160174: 0xc0584ac  jal         func_1612B0
label_160178:
    if (ctx->pc == 0x160178u) {
        ctx->pc = 0x160178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160174u;
        // 0x160178: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16017Cu;
        goto label_16017c;
    }
    ctx->pc = 0x160174u;
    SET_GPR_U32(ctx, 31, 0x16017Cu);
    ctx->pc = 0x160178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160174u;
    // 0x160178: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1612B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1612B0u, 0x160174u, 0x16017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16017Cu;
label_16017c:
    // 0x16017c: 0x26110840  addiu       $s1, $s0, 0x840
    ctx->pc = 0x16017cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_160180:
    // 0x160180: 0xc06b8de  jal         func_1AE378
label_160184:
    if (ctx->pc == 0x160184u) {
        ctx->pc = 0x160184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160180u;
        // 0x160184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160188u;
        goto label_160188;
    }
    ctx->pc = 0x160180u;
    SET_GPR_U32(ctx, 31, 0x160188u);
    ctx->pc = 0x160184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160180u;
    // 0x160184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE378u, 0x160180u, 0x160188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160188u;
label_160188:
    // 0x160188: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16018c:
    // 0x16018c: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x16018cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_160190:
    // 0x160190: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x160190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_160194:
    // 0x160194: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_160198:
    if (ctx->pc == 0x160198u) {
        ctx->pc = 0x160198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160194u;
        // 0x160198: 0x8ea4aa84  lw          $a0, -0x557C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16019Cu;
        goto label_16019c;
    }
    ctx->pc = 0x160194u;
    {
        const bool branch_taken_0x160194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160194) {
            ctx->pc = 0x160198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160194u;
            // 0x160198: 0x8ea4aa84  lw          $a0, -0x557C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1601A8u;
            goto label_1601a8;
        }
    }
    ctx->pc = 0x16019Cu;
label_16019c:
    // 0x16019c: 0xc0613ac  jal         func_184EB0
label_1601a0:
    if (ctx->pc == 0x1601A0u) {
        ctx->pc = 0x1601A4u;
        goto label_1601a4;
    }
    ctx->pc = 0x16019Cu;
    SET_GPR_U32(ctx, 31, 0x1601A4u);
    ctx->pc = 0x184EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184EB0u, 0x16019Cu, 0x1601A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1601A4u;
label_1601a4:
    // 0x1601a4: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x1601a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_1601a8:
    // 0x1601a8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1601a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1601ac:
    // 0x1601ac: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x1601acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
label_1601b0:
    // 0x1601b0: 0xc04445e  jal         func_111178
label_1601b4:
    if (ctx->pc == 0x1601B4u) {
        ctx->pc = 0x1601B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601B0u;
        // 0x1601b4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1601B8u;
        goto label_1601b8;
    }
    ctx->pc = 0x1601B0u;
    SET_GPR_U32(ctx, 31, 0x1601B8u);
    ctx->pc = 0x1601B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1601B0u;
    // 0x1601b4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111178u, 0x1601B0u, 0x1601B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1601B8u;
label_1601b8:
    // 0x1601b8: 0x8ec2489c  lw          $v0, 0x489C($s6)
    ctx->pc = 0x1601b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1601bc:
    // 0x1601bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1601bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1601c0:
    // 0x1601c0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1601c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1601c4:
    // 0x1601c4: 0x24440124  addiu       $a0, $v0, 0x124
    ctx->pc = 0x1601c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
label_1601c8:
    // 0x1601c8: 0xc10c4de  jal         func_431378
label_1601cc:
    if (ctx->pc == 0x1601CCu) {
        ctx->pc = 0x1601CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601C8u;
        // 0x1601cc: 0xa0400133  sb          $zero, 0x133($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 307), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1601D0u;
        goto label_1601d0;
    }
    ctx->pc = 0x1601C8u;
    SET_GPR_U32(ctx, 31, 0x1601D0u);
    ctx->pc = 0x1601CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1601C8u;
    // 0x1601cc: 0xa0400133  sb          $zero, 0x133($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 307), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1601C8u, 0x1601D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1601D0u;
label_1601d0:
    // 0x1601d0: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x1601d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1601d4:
    // 0x1601d4: 0x8ec2489c  lw          $v0, 0x489C($s6)
    ctx->pc = 0x1601d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1601d8:
    // 0x1601d8: 0x2851818  mult        $v1, $s4, $a1
    ctx->pc = 0x1601d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1601dc:
    // 0x1601dc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1601dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1601e0:
    // 0x1601e0: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1601e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1601e4:
    // 0x1601e4: 0xa0400148  sb          $zero, 0x148($v0)
    ctx->pc = 0x1601e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 328), (uint8_t)GPR_U32(ctx, 0));
label_1601e8:
    // 0x1601e8: 0x772821  addu        $a1, $v1, $s7
    ctx->pc = 0x1601e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_1601ec:
    // 0x1601ec: 0xc10c4de  jal         func_431378
label_1601f0:
    if (ctx->pc == 0x1601F0u) {
        ctx->pc = 0x1601F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601ECu;
        // 0x1601f0: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1601F4u;
        goto label_1601f4;
    }
    ctx->pc = 0x1601ECu;
    SET_GPR_U32(ctx, 31, 0x1601F4u);
    ctx->pc = 0x1601F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1601ECu;
    // 0x1601f0: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1601ECu, 0x1601F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1601F4u;
label_1601f4:
    // 0x1601f4: 0xc0e11a2  jal         func_384688
label_1601f8:
    if (ctx->pc == 0x1601F8u) {
        ctx->pc = 0x1601FCu;
        goto label_1601fc;
    }
    ctx->pc = 0x1601F4u;
    SET_GPR_U32(ctx, 31, 0x1601FCu);
    ctx->pc = 0x384688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384688u, 0x1601F4u, 0x1601FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1601FCu;
label_1601fc:
    // 0x1601fc: 0xc1050a8  jal         func_4142A0
label_160200:
    if (ctx->pc == 0x160200u) {
        ctx->pc = 0x160204u;
        goto label_160204;
    }
    ctx->pc = 0x1601FCu;
    SET_GPR_U32(ctx, 31, 0x160204u);
    ctx->pc = 0x4142A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4142A0u, 0x1601FCu, 0x160204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160204u;
label_160204:
    // 0x160204: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160208:
    // 0x160208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16020c:
    // 0x16020c: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x16020cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_160210:
    // 0x160210: 0xc1036ee  jal         func_40DBB8
label_160214:
    if (ctx->pc == 0x160214u) {
        ctx->pc = 0x160214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160210u;
        // 0x160214: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160218u;
        goto label_160218;
    }
    ctx->pc = 0x160210u;
    SET_GPR_U32(ctx, 31, 0x160218u);
    ctx->pc = 0x160214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160210u;
    // 0x160214: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DBB8u, 0x160210u, 0x160218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160218u;
label_160218:
    // 0x160218: 0xc0e3f7c  jal         func_38FDF0
label_16021c:
    if (ctx->pc == 0x16021Cu) {
        ctx->pc = 0x160220u;
        goto label_160220;
    }
    ctx->pc = 0x160218u;
    SET_GPR_U32(ctx, 31, 0x160220u);
    ctx->pc = 0x38FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FDF0u, 0x160218u, 0x160220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160220u;
label_160220:
    // 0x160220: 0xc085fda  jal         func_217F68
label_160224:
    if (ctx->pc == 0x160224u) {
        ctx->pc = 0x160228u;
        goto label_160228;
    }
    ctx->pc = 0x160220u;
    SET_GPR_U32(ctx, 31, 0x160228u);
    ctx->pc = 0x217F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217F68u, 0x160220u, 0x160228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160228u;
label_160228:
    // 0x160228: 0xc08ea6e  jal         func_23A9B8
label_16022c:
    if (ctx->pc == 0x16022Cu) {
        ctx->pc = 0x160230u;
        goto label_160230;
    }
    ctx->pc = 0x160228u;
    SET_GPR_U32(ctx, 31, 0x160230u);
    ctx->pc = 0x23A9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A9B8u, 0x160228u, 0x160230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160230u;
label_160230:
    // 0x160230: 0xc0a479e  jal         func_291E78
label_160234:
    if (ctx->pc == 0x160234u) {
        ctx->pc = 0x160238u;
        goto label_160238;
    }
    ctx->pc = 0x160230u;
    SET_GPR_U32(ctx, 31, 0x160238u);
    ctx->pc = 0x291E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291E78u, 0x160230u, 0x160238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160238u;
label_160238:
    // 0x160238: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x160238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_16023c:
    // 0x16023c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16023cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160240:
    // 0x160240: 0xac600a98  sw          $zero, 0xA98($v1)
    ctx->pc = 0x160240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2712), GPR_U32(ctx, 0));
label_160244:
    // 0x160244: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x160244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160248:
    // 0x160248: 0xc0a4822  jal         func_292088
label_16024c:
    if (ctx->pc == 0x16024Cu) {
        ctx->pc = 0x16024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160248u;
        // 0x16024c: 0xac400a94  sw          $zero, 0xA94($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2708), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160250u;
        goto label_160250;
    }
    ctx->pc = 0x160248u;
    SET_GPR_U32(ctx, 31, 0x160250u);
    ctx->pc = 0x16024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160248u;
    // 0x16024c: 0xac400a94  sw          $zero, 0xA94($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 2708), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292088u, 0x160248u, 0x160250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160250u;
label_160250:
    // 0x160250: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160254:
    // 0x160254: 0xc05b0a6  jal         func_16C298
label_160258:
    if (ctx->pc == 0x160258u) {
        ctx->pc = 0x160258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160254u;
        // 0x160258: 0xac400fc8  sw          $zero, 0xFC8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4040), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16025Cu;
        goto label_16025c;
    }
    ctx->pc = 0x160254u;
    SET_GPR_U32(ctx, 31, 0x16025Cu);
    ctx->pc = 0x160258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160254u;
    // 0x160258: 0xac400fc8  sw          $zero, 0xFC8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4040), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C298u, 0x160254u, 0x16025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16025Cu;
label_16025c:
    // 0x16025c: 0xc0e8b48  jal         func_3A2D20
label_160260:
    if (ctx->pc == 0x160260u) {
        ctx->pc = 0x160260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16025Cu;
        // 0x160260: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160264u;
        goto label_160264;
    }
    ctx->pc = 0x16025Cu;
    SET_GPR_U32(ctx, 31, 0x160264u);
    ctx->pc = 0x160260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16025Cu;
    // 0x160260: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x16025Cu, 0x160264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160264u;
label_160264:
    // 0x160264: 0x8fc42c7c  lw          $a0, 0x2C7C($fp)
    ctx->pc = 0x160264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
label_160268:
    // 0x160268: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x160268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16026c:
    // 0x16026c: 0xc0e8b90  jal         func_3A2E40
label_160270:
    if (ctx->pc == 0x160270u) {
        ctx->pc = 0x160270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16026Cu;
        // 0x160270: 0x24a500e8  addiu       $a1, $a1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160274u;
        goto label_160274;
    }
    ctx->pc = 0x16026Cu;
    SET_GPR_U32(ctx, 31, 0x160274u);
    ctx->pc = 0x160270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16026Cu;
    // 0x160270: 0x24a500e8  addiu       $a1, $a1, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x16026Cu, 0x160274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160274u;
label_160274:
    // 0x160274: 0xc0e8b50  jal         func_3A2D40
label_160278:
    if (ctx->pc == 0x160278u) {
        ctx->pc = 0x160278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160274u;
        // 0x160278: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16027Cu;
        goto label_16027c;
    }
    ctx->pc = 0x160274u;
    SET_GPR_U32(ctx, 31, 0x16027Cu);
    ctx->pc = 0x160278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160274u;
    // 0x160278: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x160274u, 0x16027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16027Cu;
label_16027c:
    // 0x16027c: 0xc0a9cca  jal         func_2A7328
label_160280:
    if (ctx->pc == 0x160280u) {
        ctx->pc = 0x160284u;
        goto label_160284;
    }
    ctx->pc = 0x16027Cu;
    SET_GPR_U32(ctx, 31, 0x160284u);
    ctx->pc = 0x2A7328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7328u, 0x16027Cu, 0x160284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160284u;
label_160284:
    // 0x160284: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x160284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160288:
    // 0x160288: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x160288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16028c:
    // 0x16028c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x16028cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_160290:
    // 0x160290: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x160290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_160294:
    // 0x160294: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x160294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_160298:
    // 0x160298: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x160298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16029c:
    // 0x16029c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x16029cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1602a0:
    // 0x1602a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1602a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1602a4:
    // 0x1602a4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1602a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1602a8:
    // 0x1602a8: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x1602a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1602ac:
    // 0x1602ac: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1602acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1602b0:
    // 0x1602b0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1602b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1602b4:
    // 0x1602b4: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x1602b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1602b8:
    // 0x1602b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1602b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1602bc:
    // 0x1602bc: 0xc0bfbac  jal         func_2FEEB0
label_1602c0:
    if (ctx->pc == 0x1602C0u) {
        ctx->pc = 0x1602C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602BCu;
        // 0x1602c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602C4u;
        goto label_1602c4;
    }
    ctx->pc = 0x1602BCu;
    SET_GPR_U32(ctx, 31, 0x1602C4u);
    ctx->pc = 0x1602C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1602BCu;
    // 0x1602c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEEB0u, 0x1602BCu, 0x1602C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1602C4u;
label_1602c4:
    // 0x1602c4: 0xc06b562  jal         func_1AD588
label_1602c8:
    if (ctx->pc == 0x1602C8u) {
        ctx->pc = 0x1602C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602C4u;
        // 0x1602c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602CCu;
        goto label_1602cc;
    }
    ctx->pc = 0x1602C4u;
    SET_GPR_U32(ctx, 31, 0x1602CCu);
    ctx->pc = 0x1602C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1602C4u;
    // 0x1602c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD588u, 0x1602C4u, 0x1602CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1602CCu;
label_1602cc:
    // 0x1602cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1602ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1602d0:
    // 0x1602d0: 0xc077f10  jal         func_1DFC40
label_1602d4:
    if (ctx->pc == 0x1602D4u) {
        ctx->pc = 0x1602D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602D0u;
        // 0x1602d4: 0x8c44eddc  lw          $a0, -0x1224($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602D8u;
        goto label_1602d8;
    }
    ctx->pc = 0x1602D0u;
    SET_GPR_U32(ctx, 31, 0x1602D8u);
    ctx->pc = 0x1602D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1602D0u;
    // 0x1602d4: 0x8c44eddc  lw          $a0, -0x1224($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC40u, 0x1602D0u, 0x1602D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1602D8u;
label_1602d8:
    // 0x1602d8: 0xc0443d6  jal         func_110F58
label_1602dc:
    if (ctx->pc == 0x1602DCu) {
        ctx->pc = 0x1602DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602D8u;
        // 0x1602dc: 0x8ea4aa84  lw          $a0, -0x557C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602E0u;
        goto label_1602e0;
    }
    ctx->pc = 0x1602D8u;
    SET_GPR_U32(ctx, 31, 0x1602E0u);
    ctx->pc = 0x1602DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1602D8u;
    // 0x1602dc: 0x8ea4aa84  lw          $a0, -0x557C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F58u, 0x1602D8u, 0x1602E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1602E0u;
label_1602e0:
    // 0x1602e0: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x1602e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1602e4:
    // 0x1602e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1602e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1602e8:
    // 0x1602e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1602e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1602ec:
    // 0x1602ec: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1602ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1602f0:
    // 0x1602f0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1602f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1602f4:
    // 0x1602f4: 0x60f809  jalr        $v1
label_1602f8:
    if (ctx->pc == 0x1602F8u) {
        ctx->pc = 0x1602F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602F4u;
        // 0x1602f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602FCu;
        goto label_1602fc;
    }
    ctx->pc = 0x1602F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1602FCu);
        ctx->pc = 0x1602F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602F4u;
        // 0x1602f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1602F4u, 0x1602FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1602FCu;
label_1602fc:
    // 0x1602fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1602fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160300:
    // 0x160300: 0xc051630  jal         func_1458C0
label_160304:
    if (ctx->pc == 0x160304u) {
        ctx->pc = 0x160304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160300u;
        // 0x160304: 0x8c44b788  lw          $a0, -0x4878($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160308u;
        goto label_160308;
    }
    ctx->pc = 0x160300u;
    SET_GPR_U32(ctx, 31, 0x160308u);
    ctx->pc = 0x160304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160300u;
    // 0x160304: 0x8c44b788  lw          $a0, -0x4878($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1458C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458C0u, 0x160300u, 0x160308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160308u;
label_160308:
    // 0x160308: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_16030c:
    if (ctx->pc == 0x16030Cu) {
        ctx->pc = 0x16030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160308u;
        // 0x16030c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160310u;
        goto label_160310;
    }
    ctx->pc = 0x160308u;
    {
        const bool branch_taken_0x160308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160308) {
            ctx->pc = 0x16030Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160308u;
            // 0x16030c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16032Cu;
            goto label_16032c;
        }
    }
    ctx->pc = 0x160310u;
label_160310:
    // 0x160310: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x160310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_160314:
    // 0x160314: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x160314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_160318:
    // 0x160318: 0x24a500f8  addiu       $a1, $a1, 0xF8
    ctx->pc = 0x160318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 248));
label_16031c:
    // 0x16031c: 0xc10ca28  jal         func_4328A0
label_160320:
    if (ctx->pc == 0x160320u) {
        ctx->pc = 0x160320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16031Cu;
        // 0x160320: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160324u;
        goto label_160324;
    }
    ctx->pc = 0x16031Cu;
    SET_GPR_U32(ctx, 31, 0x160324u);
    ctx->pc = 0x160320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16031Cu;
    // 0x160320: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x16031Cu, 0x160324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160324u;
label_160324:
    // 0x160324: 0x10000006  b           . + 4 + (0x6 << 2)
label_160328:
    if (ctx->pc == 0x160328u) {
        ctx->pc = 0x16032Cu;
        goto label_16032c;
    }
    ctx->pc = 0x160324u;
    {
        const bool branch_taken_0x160324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160324) {
            ctx->pc = 0x160340u;
            goto label_160340;
        }
    }
    ctx->pc = 0x16032Cu;
label_16032c:
    // 0x16032c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16032cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_160330:
    // 0x160330: 0x24a50108  addiu       $a1, $a1, 0x108
    ctx->pc = 0x160330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 264));
label_160334:
    // 0x160334: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x160334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_160338:
    // 0x160338: 0xc10ca28  jal         func_4328A0
label_16033c:
    if (ctx->pc == 0x16033Cu) {
        ctx->pc = 0x16033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160338u;
        // 0x16033c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160340u;
        goto label_160340;
    }
    ctx->pc = 0x160338u;
    SET_GPR_U32(ctx, 31, 0x160340u);
    ctx->pc = 0x16033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160338u;
    // 0x16033c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x160338u, 0x160340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160340u;
label_160340:
    // 0x160340: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x160340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_160344:
    // 0x160344: 0x27b00220  addiu       $s0, $sp, 0x220
    ctx->pc = 0x160344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_160348:
    // 0x160348: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x160348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_16034c:
    // 0x16034c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16034cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160350:
    // 0x160350: 0xe7b40228  swc1        $f20, 0x228($sp)
    ctx->pc = 0x160350u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_160354:
    // 0x160354: 0x24840128  addiu       $a0, $a0, 0x128
    ctx->pc = 0x160354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 296));
label_160358:
    // 0x160358: 0xe7b40224  swc1        $f20, 0x224($sp)
    ctx->pc = 0x160358u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_16035c:
    // 0x16035c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16035cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_160360:
    // 0x160360: 0xe7b40220  swc1        $f20, 0x220($sp)
    ctx->pc = 0x160360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_160364:
    // 0x160364: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160368:
    // 0x160368: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16036c:
    // 0x16036c: 0xc105706  jal         func_415C18
label_160370:
    if (ctx->pc == 0x160370u) {
        ctx->pc = 0x160370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16036Cu;
        // 0x160370: 0x26f20004  addiu       $s2, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160374u;
        goto label_160374;
    }
    ctx->pc = 0x16036Cu;
    SET_GPR_U32(ctx, 31, 0x160374u);
    ctx->pc = 0x160370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16036Cu;
    // 0x160370: 0x26f20004  addiu       $s2, $s7, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C18u, 0x16036Cu, 0x160374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160374u;
label_160374:
    // 0x160374: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x160374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_160378:
    // 0x160378: 0xafb20388  sw          $s2, 0x388($sp)
    ctx->pc = 0x160378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 904), GPR_U32(ctx, 18));
label_16037c:
    // 0x16037c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16037cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160380:
    // 0x160380: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x160380u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_160384:
    // 0x160384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160388:
    // 0x160388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16038c:
    // 0x16038c: 0xc105706  jal         func_415C18
label_160390:
    if (ctx->pc == 0x160390u) {
        ctx->pc = 0x160390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16038Cu;
        // 0x160390: 0x24840138  addiu       $a0, $a0, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160394u;
        goto label_160394;
    }
    ctx->pc = 0x16038Cu;
    SET_GPR_U32(ctx, 31, 0x160394u);
    ctx->pc = 0x160390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16038Cu;
    // 0x160390: 0x24840138  addiu       $a0, $a0, 0x138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C18u, 0x16038Cu, 0x160394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160394u;
label_160394:
    // 0x160394: 0x8fc32c7c  lw          $v1, 0x2C7C($fp)
    ctx->pc = 0x160394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
label_160398:
    // 0x160398: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x160398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16039c:
    // 0x16039c: 0xc0e6166  jal         func_398598
label_1603a0:
    if (ctx->pc == 0x1603A0u) {
        ctx->pc = 0x1603A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16039Cu;
        // 0x1603a0: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603A4u;
        goto label_1603a4;
    }
    ctx->pc = 0x16039Cu;
    SET_GPR_U32(ctx, 31, 0x1603A4u);
    ctx->pc = 0x1603A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16039Cu;
    // 0x1603a0: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398598u, 0x16039Cu, 0x1603A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1603A4u;
label_1603a4:
    // 0x1603a4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1603a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_1603a8:
    // 0x1603a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1603a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1603ac:
    // 0x1603ac: 0xc050fda  jal         func_143F68
label_1603b0:
    if (ctx->pc == 0x1603B0u) {
        ctx->pc = 0x1603B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603ACu;
        // 0x1603b0: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603B4u;
        goto label_1603b4;
    }
    ctx->pc = 0x1603ACu;
    SET_GPR_U32(ctx, 31, 0x1603B4u);
    ctx->pc = 0x1603B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1603ACu;
    // 0x1603b0: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1603ACu, 0x1603B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1603B4u;
label_1603b4:
    // 0x1603b4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1603b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1603b8:
    // 0x1603b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1603b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1603bc:
    // 0x1603bc: 0x8c64cd4c  lw          $a0, -0x32B4($v1)
    ctx->pc = 0x1603bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
label_1603c0:
    // 0x1603c0: 0xc05e2f2  jal         func_178BC8
label_1603c4:
    if (ctx->pc == 0x1603C4u) {
        ctx->pc = 0x1603C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603C0u;
        // 0x1603c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603C8u;
        goto label_1603c8;
    }
    ctx->pc = 0x1603C0u;
    SET_GPR_U32(ctx, 31, 0x1603C8u);
    ctx->pc = 0x1603C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1603C0u;
    // 0x1603c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178BC8u, 0x1603C0u, 0x1603C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1603C8u;
label_1603c8:
    // 0x1603c8: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x1603c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
label_1603cc:
    // 0x1603cc: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1603ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1603d0:
    // 0x1603d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1603d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1603d4:
    // 0x1603d4: 0xc047a1e  jal         func_11E878
label_1603d8:
    if (ctx->pc == 0x1603D8u) {
        ctx->pc = 0x1603DCu;
        goto label_1603dc;
    }
    ctx->pc = 0x1603D4u;
    SET_GPR_U32(ctx, 31, 0x1603DCu);
    ctx->pc = 0x11E878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E878u, 0x1603D4u, 0x1603DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1603DCu;
label_1603dc:
    // 0x1603dc: 0xc047e6c  jal         func_11F9B0
label_1603e0:
    if (ctx->pc == 0x1603E0u) {
        ctx->pc = 0x1603E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603DCu;
        // 0x1603e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603E4u;
        goto label_1603e4;
    }
    ctx->pc = 0x1603DCu;
    SET_GPR_U32(ctx, 31, 0x1603E4u);
    ctx->pc = 0x1603E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1603DCu;
    // 0x1603e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1603DCu, 0x1603E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1603E4u;
label_1603e4:
    // 0x1603e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1603e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1603e8:
    // 0x1603e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1603e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1603ec:
    // 0x1603ec: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1603ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1603f0:
    // 0x1603f0: 0x860201b0  lh          $v0, 0x1B0($s0)
    ctx->pc = 0x1603f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
label_1603f4:
    // 0x1603f4: 0x261001b0  addiu       $s0, $s0, 0x1B0
    ctx->pc = 0x1603f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
label_1603f8:
    // 0x1603f8: 0xc047e6c  jal         func_11F9B0
label_1603fc:
    if (ctx->pc == 0x1603FCu) {
        ctx->pc = 0x1603FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603F8u;
        // 0x1603fc: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160400u;
        goto label_160400;
    }
    ctx->pc = 0x1603F8u;
    SET_GPR_U32(ctx, 31, 0x160400u);
    ctx->pc = 0x1603FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1603F8u;
    // 0x1603fc: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1603F8u, 0x160400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160400u;
label_160400:
    // 0x160400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x160400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_160404:
    // 0x160404: 0x84640208  lh          $a0, 0x208($v1)
    ctx->pc = 0x160404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 520)));
label_160408:
    // 0x160408: 0x8c65020c  lw          $a1, 0x20C($v1)
    ctx->pc = 0x160408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_16040c:
    // 0x16040c: 0xa0f809  jalr        $a1
label_160410:
    if (ctx->pc == 0x160410u) {
        ctx->pc = 0x160410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16040Cu;
        // 0x160410: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160414u;
        goto label_160414;
    }
    ctx->pc = 0x16040Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x160414u);
        ctx->pc = 0x160410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16040Cu;
        // 0x160410: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16040Cu, 0x160414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160414u;
label_160414:
    // 0x160414: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x160414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_160418:
    // 0x160418: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x160418u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_16041c:
    // 0x16041c: 0x40f809  jalr        $v0
label_160420:
    if (ctx->pc == 0x160420u) {
        ctx->pc = 0x160420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16041Cu;
        // 0x160420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160424u;
        goto label_160424;
    }
    ctx->pc = 0x16041Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160424u);
        ctx->pc = 0x160420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16041Cu;
        // 0x160420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16041Cu, 0x160424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160424u;
label_160424:
    // 0x160424: 0x27b00230  addiu       $s0, $sp, 0x230
    ctx->pc = 0x160424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_160428:
    // 0x160428: 0x8fa70380  lw          $a3, 0x380($sp)
    ctx->pc = 0x160428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_16042c:
    // 0x16042c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x16042cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_160430:
    // 0x160430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x160430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160434:
    // 0x160434: 0x24a50148  addiu       $a1, $a1, 0x148
    ctx->pc = 0x160434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 328));
label_160438:
    // 0x160438: 0xc10ca28  jal         func_4328A0
label_16043c:
    if (ctx->pc == 0x16043Cu) {
        ctx->pc = 0x16043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160438u;
        // 0x16043c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160440u;
        goto label_160440;
    }
    ctx->pc = 0x160438u;
    SET_GPR_U32(ctx, 31, 0x160440u);
    ctx->pc = 0x16043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160438u;
    // 0x16043c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x160438u, 0x160440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160440u;
label_160440:
    // 0x160440: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x160440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_160444:
    // 0x160444: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160448:
    // 0x160448: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x160448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_16044c:
    // 0x16044c: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x16044cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_160450:
    // 0x160450: 0x24083a98  addiu       $t0, $zero, 0x3A98
    ctx->pc = 0x160450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15000));
label_160454:
    // 0x160454: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x160454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
label_160458:
    // 0x160458: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x160458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16045c:
    // 0x16045c: 0x24057530  addiu       $a1, $zero, 0x7530
    ctx->pc = 0x16045cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
label_160460:
    // 0x160460: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x160460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160464:
    // 0x160464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160468:
    // 0x160468: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x160468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_16046c:
    // 0x16046c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x16046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_160470:
    // 0x160470: 0x28420065  slti        $v0, $v0, 0x65
    ctx->pc = 0x160470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
label_160474:
    // 0x160474: 0xc1038b6  jal         func_40E2D8
label_160478:
    if (ctx->pc == 0x160478u) {
        ctx->pc = 0x160478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160474u;
        // 0x160478: 0x102280b  movn        $a1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16047Cu;
        goto label_16047c;
    }
    ctx->pc = 0x160474u;
    SET_GPR_U32(ctx, 31, 0x16047Cu);
    ctx->pc = 0x160478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160474u;
    // 0x160478: 0x102280b  movn        $a1, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E2D8u, 0x160474u, 0x16047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16047Cu;
label_16047c:
    // 0x16047c: 0xc04450a  jal         func_111428
label_160480:
    if (ctx->pc == 0x160480u) {
        ctx->pc = 0x160480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16047Cu;
        // 0x160480: 0x8ea4aa84  lw          $a0, -0x557C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160484u;
        goto label_160484;
    }
    ctx->pc = 0x16047Cu;
    SET_GPR_U32(ctx, 31, 0x160484u);
    ctx->pc = 0x160480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16047Cu;
    // 0x160480: 0x8ea4aa84  lw          $a0, -0x557C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111428u, 0x16047Cu, 0x160484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160484u;
label_160484:
    // 0x160484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160488:
    // 0x160488: 0xc106b64  jal         func_41AD90
label_16048c:
    if (ctx->pc == 0x16048Cu) {
        ctx->pc = 0x16048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160488u;
        // 0x16048c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160490u;
        goto label_160490;
    }
    ctx->pc = 0x160488u;
    SET_GPR_U32(ctx, 31, 0x160490u);
    ctx->pc = 0x16048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160488u;
    // 0x16048c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AD90u, 0x160488u, 0x160490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160490u;
label_160490:
    // 0x160490: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x160490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_160494:
    // 0x160494: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x160494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_160498:
    // 0x160498: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x160498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16049c:
    // 0x16049c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x16049cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1604a0:
    // 0x1604a0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1604a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1604a4:
    // 0x1604a4: 0x60f809  jalr        $v1
label_1604a8:
    if (ctx->pc == 0x1604A8u) {
        ctx->pc = 0x1604A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604A4u;
        // 0x1604a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604ACu;
        goto label_1604ac;
    }
    ctx->pc = 0x1604A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1604ACu);
        ctx->pc = 0x1604A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604A4u;
        // 0x1604a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1604A4u, 0x1604ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1604ACu;
label_1604ac:
    // 0x1604ac: 0x8ea2aa84  lw          $v0, -0x557C($s5)
    ctx->pc = 0x1604acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_1604b0:
    // 0x1604b0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1604b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1604b4:
    // 0x1604b4: 0x8ec4489c  lw          $a0, 0x489C($s6)
    ctx->pc = 0x1604b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1604b8:
    // 0x1604b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1604b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1604bc:
    // 0x1604bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1604bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1604c0:
    // 0x1604c0: 0xc106918  jal         func_41A460
label_1604c4:
    if (ctx->pc == 0x1604C4u) {
        ctx->pc = 0x1604C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604C0u;
        // 0x1604c4: 0xac404270  sw          $zero, 0x4270($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604C8u;
        goto label_1604c8;
    }
    ctx->pc = 0x1604C0u;
    SET_GPR_U32(ctx, 31, 0x1604C8u);
    ctx->pc = 0x1604C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1604C0u;
    // 0x1604c4: 0xac404270  sw          $zero, 0x4270($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17008), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A460u, 0x1604C0u, 0x1604C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1604C8u;
label_1604c8:
    // 0x1604c8: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x1604c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_1604cc:
    // 0x1604cc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1604ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_1604d0:
    // 0x1604d0: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x1604d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_1604d4:
    // 0x1604d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1604d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1604d8:
    // 0x1604d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1604d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1604dc:
    // 0x1604dc: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x1604dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_1604e0:
    // 0x1604e0: 0xac836d80  sw          $v1, 0x6D80($a0)
    ctx->pc = 0x1604e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28032), GPR_U32(ctx, 3));
label_1604e4:
    // 0x1604e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1604e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1604e8:
    // 0x1604e8: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x1604e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_1604ec:
    // 0x1604ec: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x1604ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1604f0:
    // 0x1604f0: 0x60f809  jalr        $v1
label_1604f4:
    if (ctx->pc == 0x1604F4u) {
        ctx->pc = 0x1604F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604F0u;
        // 0x1604f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604F8u;
        goto label_1604f8;
    }
    ctx->pc = 0x1604F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1604F8u);
        ctx->pc = 0x1604F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604F0u;
        // 0x1604f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1604F0u, 0x1604F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1604F8u;
label_1604f8:
    // 0x1604f8: 0x27b00330  addiu       $s0, $sp, 0x330
    ctx->pc = 0x1604f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_1604fc:
    // 0x1604fc: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x1604fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_160500:
    // 0x160500: 0xc044578  jal         func_1115E0
label_160504:
    if (ctx->pc == 0x160504u) {
        ctx->pc = 0x160504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160500u;
        // 0x160504: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160508u;
        goto label_160508;
    }
    ctx->pc = 0x160500u;
    SET_GPR_U32(ctx, 31, 0x160508u);
    ctx->pc = 0x160504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160500u;
    // 0x160504: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115E0u, 0x160500u, 0x160508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160508u;
label_160508:
    // 0x160508: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x160508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_16050c:
    // 0x16050c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16050cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160510:
    // 0x160510: 0x24510150  addiu       $s1, $v0, 0x150
    ctx->pc = 0x160510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
label_160514:
    // 0x160514: 0xc10c313  jal         func_430C4C
label_160518:
    if (ctx->pc == 0x160518u) {
        ctx->pc = 0x160518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160514u;
        // 0x160518: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16051Cu;
        goto label_16051c;
    }
    ctx->pc = 0x160514u;
    SET_GPR_U32(ctx, 31, 0x16051Cu);
    ctx->pc = 0x160518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160514u;
    // 0x160518: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x160514u, 0x16051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16051Cu;
label_16051c:
    // 0x16051c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_160520:
    if (ctx->pc == 0x160520u) {
        ctx->pc = 0x160520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16051Cu;
        // 0x160520: 0x8ea4aa84  lw          $a0, -0x557C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160524u;
        goto label_160524;
    }
    ctx->pc = 0x16051Cu;
    {
        const bool branch_taken_0x16051c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16051Cu;
        // 0x160520: 0x8ea4aa84  lw          $a0, -0x557C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16051c) {
            ctx->pc = 0x16053Cu;
            goto label_16053c;
        }
    }
    ctx->pc = 0x160524u;
label_160524:
    // 0x160524: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x160524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_160528:
    // 0x160528: 0x24a50158  addiu       $a1, $a1, 0x158
    ctx->pc = 0x160528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 344));
label_16052c:
    // 0x16052c: 0xc043e94  jal         func_10FA50
label_160530:
    if (ctx->pc == 0x160530u) {
        ctx->pc = 0x160530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16052Cu;
        // 0x160530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160534u;
        goto label_160534;
    }
    ctx->pc = 0x16052Cu;
    SET_GPR_U32(ctx, 31, 0x160534u);
    ctx->pc = 0x160530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16052Cu;
    // 0x160530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x16052Cu, 0x160534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160534u;
label_160534:
    // 0x160534: 0x10000007  b           . + 4 + (0x7 << 2)
label_160538:
    if (ctx->pc == 0x160538u) {
        ctx->pc = 0x16053Cu;
        goto label_16053c;
    }
    ctx->pc = 0x160534u;
    {
        const bool branch_taken_0x160534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160534) {
            ctx->pc = 0x160554u;
            goto label_160554;
        }
    }
    ctx->pc = 0x16053Cu;
label_16053c:
    // 0x16053c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16053cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160540:
    // 0x160540: 0xc043e94  jal         func_10FA50
label_160544:
    if (ctx->pc == 0x160544u) {
        ctx->pc = 0x160544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160540u;
        // 0x160544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160548u;
        goto label_160548;
    }
    ctx->pc = 0x160540u;
    SET_GPR_U32(ctx, 31, 0x160548u);
    ctx->pc = 0x160544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160540u;
    // 0x160544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x160540u, 0x160548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160548u;
label_160548:
    // 0x160548: 0x8ea4aa84  lw          $a0, -0x557C($s5)
    ctx->pc = 0x160548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945412)));
label_16054c:
    // 0x16054c: 0xc044586  jal         func_111618
label_160550:
    if (ctx->pc == 0x160550u) {
        ctx->pc = 0x160550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16054Cu;
        // 0x160550: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160554u;
        goto label_160554;
    }
    ctx->pc = 0x16054Cu;
    SET_GPR_U32(ctx, 31, 0x160554u);
    ctx->pc = 0x160550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16054Cu;
    // 0x160550: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111618u, 0x16054Cu, 0x160554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160554u;
label_160554:
    // 0x160554: 0xc0584de  jal         func_161378
label_160558:
    if (ctx->pc == 0x160558u) {
        ctx->pc = 0x16055Cu;
        goto label_16055c;
    }
    ctx->pc = 0x160554u;
    SET_GPR_U32(ctx, 31, 0x16055Cu);
    ctx->pc = 0x161378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161378u, 0x160554u, 0x16055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16055Cu;
label_16055c:
    // 0x16055c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16055cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_160560:
    // 0x160560: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x160560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160564:
    // 0x160564: 0xc0552b8  jal         func_154AE0
label_160568:
    if (ctx->pc == 0x160568u) {
        ctx->pc = 0x160568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160564u;
        // 0x160568: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16056Cu;
        goto label_16056c;
    }
    ctx->pc = 0x160564u;
    SET_GPR_U32(ctx, 31, 0x16056Cu);
    ctx->pc = 0x160568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160564u;
    // 0x160568: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x160564u, 0x16056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16056Cu;
label_16056c:
    // 0x16056c: 0x8fa30384  lw          $v1, 0x384($sp)
    ctx->pc = 0x16056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
label_160570:
    // 0x160570: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_160574:
    if (ctx->pc == 0x160574u) {
        ctx->pc = 0x160574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160570u;
        // 0x160574: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160578u;
        goto label_160578;
    }
    ctx->pc = 0x160570u;
    {
        const bool branch_taken_0x160570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160570u;
        // 0x160574: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160570) {
            ctx->pc = 0x16063Cu;
            goto label_16063c;
        }
    }
    ctx->pc = 0x160578u;
label_160578:
    // 0x160578: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16057c:
    // 0x16057c: 0x8e5127e4  lw          $s1, 0x27E4($s2)
    ctx->pc = 0x16057cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_160580:
    // 0x160580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160584:
    // 0x160584: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x160584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_160588:
    // 0x160588: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x160588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16058c:
    // 0x16058c: 0x860200b8  lh          $v0, 0xB8($s0)
    ctx->pc = 0x16058cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 184)));
label_160590:
    // 0x160590: 0x261000b8  addiu       $s0, $s0, 0xB8
    ctx->pc = 0x160590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_160594:
    // 0x160594: 0xc061e6e  jal         func_1879B8
label_160598:
    if (ctx->pc == 0x160598u) {
        ctx->pc = 0x160598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160594u;
        // 0x160598: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16059Cu;
        goto label_16059c;
    }
    ctx->pc = 0x160594u;
    SET_GPR_U32(ctx, 31, 0x16059Cu);
    ctx->pc = 0x160598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160594u;
    // 0x160598: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x160594u, 0x16059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16059Cu;
label_16059c:
    // 0x16059c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1605a0:
    // 0x1605a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1605a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1605a4:
    // 0x1605a4: 0x60f809  jalr        $v1
label_1605a8:
    if (ctx->pc == 0x1605A8u) {
        ctx->pc = 0x1605A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605A4u;
        // 0x1605a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605ACu;
        goto label_1605ac;
    }
    ctx->pc = 0x1605A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1605ACu);
        ctx->pc = 0x1605A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605A4u;
        // 0x1605a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1605A4u, 0x1605ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1605ACu;
label_1605ac:
    // 0x1605ac: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x1605acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1605b0:
    // 0x1605b0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1605b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1605b4:
    // 0x1605b4: 0x8fa50384  lw          $a1, 0x384($sp)
    ctx->pc = 0x1605b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
label_1605b8:
    // 0x1605b8: 0x240701ab  addiu       $a3, $zero, 0x1AB
    ctx->pc = 0x1605b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 427));
label_1605bc:
    // 0x1605bc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1605bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1605c0:
    // 0x1605c0: 0x24c600b0  addiu       $a2, $a2, 0xB0
    ctx->pc = 0x1605c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
label_1605c4:
    // 0x1605c4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1605c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1605c8:
    // 0x1605c8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1605c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1605cc:
    // 0x1605cc: 0x60f809  jalr        $v1
label_1605d0:
    if (ctx->pc == 0x1605D0u) {
        ctx->pc = 0x1605D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605CCu;
        // 0x1605d0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605D4u;
        goto label_1605d4;
    }
    ctx->pc = 0x1605CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1605D4u);
        ctx->pc = 0x1605D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605CCu;
        // 0x1605d0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1605CCu, 0x1605D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1605D4u;
label_1605d4:
    // 0x1605d4: 0x8fa30388  lw          $v1, 0x388($sp)
    ctx->pc = 0x1605d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_1605d8:
    // 0x1605d8: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x1605d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1605dc:
    // 0x1605dc: 0x27b00340  addiu       $s0, $sp, 0x340
    ctx->pc = 0x1605dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_1605e0:
    // 0x1605e0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1605e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1605e4:
    // 0x1605e4: 0x600013  mtlo        $v1
    ctx->pc = 0x1605e4u;
    ctx->lo = GPR_U64(ctx, 3);
label_1605e8:
    // 0x1605e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1605e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1605ec:
    // 0x1605ec: 0x72821000  madd        $v0, $s4, $v0
    ctx->pc = 0x1605ecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1605f0:
    // 0x1605f0: 0x24a50160  addiu       $a1, $a1, 0x160
    ctx->pc = 0x1605f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
label_1605f4:
    // 0x1605f4: 0xc10ca28  jal         func_4328A0
label_1605f8:
    if (ctx->pc == 0x1605F8u) {
        ctx->pc = 0x1605F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605F4u;
        // 0x1605f8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605FCu;
        goto label_1605fc;
    }
    ctx->pc = 0x1605F4u;
    SET_GPR_U32(ctx, 31, 0x1605FCu);
    ctx->pc = 0x1605F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1605F4u;
    // 0x1605f8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x1605F4u, 0x1605FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1605FCu;
label_1605fc:
    // 0x1605fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1605fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160600:
    // 0x160600: 0xc10aa4e  jal         func_42A938
label_160604:
    if (ctx->pc == 0x160604u) {
        ctx->pc = 0x160604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160600u;
        // 0x160604: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160608u;
        goto label_160608;
    }
    ctx->pc = 0x160600u;
    SET_GPR_U32(ctx, 31, 0x160608u);
    ctx->pc = 0x160604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160600u;
    // 0x160604: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A938u, 0x160600u, 0x160608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160608u;
label_160608:
    // 0x160608: 0x8e5127e4  lw          $s1, 0x27E4($s2)
    ctx->pc = 0x160608u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_16060c:
    // 0x16060c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160610:
    // 0x160610: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x160610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_160614:
    // 0x160614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160618:
    // 0x160618: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x160618u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16061c:
    // 0x16061c: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x16061cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
label_160620:
    // 0x160620: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x160620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_160624:
    // 0x160624: 0xc061e6e  jal         func_1879B8
label_160628:
    if (ctx->pc == 0x160628u) {
        ctx->pc = 0x160628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160624u;
        // 0x160628: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16062Cu;
        goto label_16062c;
    }
    ctx->pc = 0x160624u;
    SET_GPR_U32(ctx, 31, 0x16062Cu);
    ctx->pc = 0x160628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160624u;
    // 0x160628: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x160624u, 0x16062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16062Cu;
label_16062c:
    // 0x16062c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16062cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_160630:
    // 0x160630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160634:
    // 0x160634: 0x60f809  jalr        $v1
label_160638:
    if (ctx->pc == 0x160638u) {
        ctx->pc = 0x160638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160634u;
        // 0x160638: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16063Cu;
        goto label_16063c;
    }
    ctx->pc = 0x160634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16063Cu);
        ctx->pc = 0x160638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160634u;
        // 0x160638: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160634u, 0x16063Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16063Cu;
label_16063c:
    // 0x16063c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16063cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_160640:
    // 0x160640: 0x80626d88  lb          $v0, 0x6D88($v1)
    ctx->pc = 0x160640u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 28040)));
label_160644:
    // 0x160644: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_160648:
    if (ctx->pc == 0x160648u) {
        ctx->pc = 0x160648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160644u;
        // 0x160648: 0x24656d88  addiu       $a1, $v1, 0x6D88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16064Cu;
        goto label_16064c;
    }
    ctx->pc = 0x160644u;
    {
        const bool branch_taken_0x160644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160644u;
        // 0x160648: 0x24656d88  addiu       $a1, $v1, 0x6D88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160644) {
            ctx->pc = 0x160690u;
            goto label_160690;
        }
    }
    ctx->pc = 0x16064Cu;
label_16064c:
    // 0x16064c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x16064cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_160650:
    // 0x160650: 0x8c662b04  lw          $a2, 0x2B04($v1)
    ctx->pc = 0x160650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11012)));
label_160654:
    // 0x160654: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x160654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_160658:
    // 0x160658: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x160658u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_16065c:
    // 0x16065c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x16065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_160660:
    // 0x160660: 0x40f809  jalr        $v0
label_160664:
    if (ctx->pc == 0x160664u) {
        ctx->pc = 0x160664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160660u;
        // 0x160664: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160668u;
        goto label_160668;
    }
    ctx->pc = 0x160660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160668u);
        ctx->pc = 0x160664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160660u;
        // 0x160664: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160660u, 0x160668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160668u;
label_160668:
    // 0x160668: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_16066c:
    if (ctx->pc == 0x16066Cu) {
        ctx->pc = 0x16066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160668u;
        // 0x16066c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160670u;
        goto label_160670;
    }
    ctx->pc = 0x160668u;
    {
        const bool branch_taken_0x160668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160668u;
        // 0x16066c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160668) {
            ctx->pc = 0x160690u;
            goto label_160690;
        }
    }
    ctx->pc = 0x160670u;
label_160670:
    // 0x160670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160674:
    // 0x160674: 0x8c472b04  lw          $a3, 0x2B04($v0)
    ctx->pc = 0x160674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_160678:
    // 0x160678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16067c:
    // 0x16067c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_160680:
    // 0x160680: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x160680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_160684:
    // 0x160684: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x160684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_160688:
    // 0x160688: 0x60f809  jalr        $v1
label_16068c:
    if (ctx->pc == 0x16068Cu) {
        ctx->pc = 0x16068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160688u;
        // 0x16068c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160690u;
        goto label_160690;
    }
    ctx->pc = 0x160688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160690u);
        ctx->pc = 0x16068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160688u;
        // 0x16068c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160688u, 0x160690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160690u;
label_160690:
    // 0x160690: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x160690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160694:
    // 0x160694: 0xc057f94  jal         func_15FE50
label_160698:
    if (ctx->pc == 0x160698u) {
        ctx->pc = 0x160698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160694u;
        // 0x160698: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16069Cu;
        goto label_16069c;
    }
    ctx->pc = 0x160694u;
    SET_GPR_U32(ctx, 31, 0x16069Cu);
    ctx->pc = 0x160698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160694u;
    // 0x160698: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FE50u, 0x160694u, 0x16069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16069Cu;
label_16069c:
    // 0x16069c: 0x8e22c7bc  lw          $v0, -0x3844($s1)
    ctx->pc = 0x16069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952892)));
label_1606a0:
    // 0x1606a0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1606a4:
    if (ctx->pc == 0x1606A4u) {
        ctx->pc = 0x1606A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606A0u;
        // 0x1606a4: 0x24100084  addiu       $s0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606A8u;
        goto label_1606a8;
    }
    ctx->pc = 0x1606A0u;
    {
        const bool branch_taken_0x1606a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1606A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606A0u;
        // 0x1606a4: 0x24100084  addiu       $s0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606a0) {
            ctx->pc = 0x16072Cu;
            goto label_16072c;
        }
    }
    ctx->pc = 0x1606A8u;
label_1606a8:
    // 0x1606a8: 0x8ec6489c  lw          $a2, 0x489C($s6)
    ctx->pc = 0x1606a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_1606ac:
    // 0x1606ac: 0x2901018  mult        $v0, $s4, $s0
    ctx->pc = 0x1606acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1606b0:
    // 0x1606b0: 0x572821  addu        $a1, $v0, $s7
    ctx->pc = 0x1606b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1606b4:
    // 0x1606b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1606b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1606b8:
    // 0x1606b8: 0xacc2014c  sw          $v0, 0x14C($a2)
    ctx->pc = 0x1606b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 332), GPR_U32(ctx, 2));
label_1606bc:
    // 0x1606bc: 0x8fa30380  lw          $v1, 0x380($sp)
    ctx->pc = 0x1606bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_1606c0:
    // 0x1606c0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1606c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1606c4:
    // 0x1606c4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1606c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1606c8:
    // 0x1606c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1606c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1606cc:
    // 0x1606cc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1606ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1606d0:
    // 0x1606d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1606d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1606d4:
    // 0x1606d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1606d8:
    if (ctx->pc == 0x1606D8u) {
        ctx->pc = 0x1606D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606D4u;
        // 0x1606d8: 0xafa20380  sw          $v0, 0x380($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606DCu;
        goto label_1606dc;
    }
    ctx->pc = 0x1606D4u;
    {
        const bool branch_taken_0x1606d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1606D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606D4u;
        // 0x1606d8: 0xafa20380  sw          $v0, 0x380($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606d4) {
            ctx->pc = 0x1606F8u;
            goto label_1606f8;
        }
    }
    ctx->pc = 0x1606DCu;
label_1606dc:
    // 0x1606dc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1606dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1606e0:
    // 0x1606e0: 0xc1073bc  jal         func_41CEF0
label_1606e4:
    if (ctx->pc == 0x1606E4u) {
        ctx->pc = 0x1606E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606E0u;
        // 0x1606e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606E8u;
        goto label_1606e8;
    }
    ctx->pc = 0x1606E0u;
    SET_GPR_U32(ctx, 31, 0x1606E8u);
    ctx->pc = 0x1606E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606E0u;
    // 0x1606e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEF0u, 0x1606E0u, 0x1606E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606E8u;
label_1606e8:
    // 0x1606e8: 0xc05835e  jal         func_160D78
label_1606ec:
    if (ctx->pc == 0x1606ECu) {
        ctx->pc = 0x1606ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606E8u;
        // 0x1606ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606F0u;
        goto label_1606f0;
    }
    ctx->pc = 0x1606E8u;
    SET_GPR_U32(ctx, 31, 0x1606F0u);
    ctx->pc = 0x1606ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606E8u;
    // 0x1606ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D78u, 0x1606E8u, 0x1606F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606F0u;
label_1606f0:
    // 0x1606f0: 0x10000024  b           . + 4 + (0x24 << 2)
label_1606f4:
    if (ctx->pc == 0x1606F4u) {
        ctx->pc = 0x1606F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606F0u;
        // 0x1606f4: 0x7bb00420  lq          $s0, 0x420($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606F8u;
        goto label_1606f8;
    }
    ctx->pc = 0x1606F0u;
    {
        const bool branch_taken_0x1606f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1606F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606F0u;
        // 0x1606f4: 0x7bb00420  lq          $s0, 0x420($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606f0) {
            ctx->pc = 0x160784u;
            goto label_160784;
        }
    }
    ctx->pc = 0x1606F8u;
label_1606f8:
    // 0x1606f8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1606f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1606fc:
    // 0x1606fc: 0xc1073bc  jal         func_41CEF0
label_160700:
    if (ctx->pc == 0x160700u) {
        ctx->pc = 0x160700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606FCu;
        // 0x160700: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160704u;
        goto label_160704;
    }
    ctx->pc = 0x1606FCu;
    SET_GPR_U32(ctx, 31, 0x160704u);
    ctx->pc = 0x160700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1606FCu;
    // 0x160700: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEF0u, 0x1606FCu, 0x160704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160704u;
label_160704:
    // 0x160704: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x160704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_160708:
    // 0x160708: 0x2c620080  sltiu       $v0, $v1, 0x80
    ctx->pc = 0x160708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_16070c:
    // 0x16070c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_160710:
    if (ctx->pc == 0x160710u) {
        ctx->pc = 0x160710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16070Cu;
        // 0x160710: 0x701018  mult        $v0, $v1, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x160714u;
        goto label_160714;
    }
    ctx->pc = 0x16070Cu;
    {
        const bool branch_taken_0x16070c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16070Cu;
        // 0x160710: 0x701018  mult        $v0, $v1, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16070c) {
            ctx->pc = 0x160728u;
            goto label_160728;
        }
    }
    ctx->pc = 0x160714u;
label_160714:
    // 0x160714: 0x572021  addu        $a0, $v0, $s7
    ctx->pc = 0x160714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_160718:
    // 0x160718: 0xc05835e  jal         func_160D78
label_16071c:
    if (ctx->pc == 0x16071Cu) {
        ctx->pc = 0x16071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160718u;
        // 0x16071c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160720u;
        goto label_160720;
    }
    ctx->pc = 0x160718u;
    SET_GPR_U32(ctx, 31, 0x160720u);
    ctx->pc = 0x16071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160718u;
    // 0x16071c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D78u, 0x160718u, 0x160720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160720u;
label_160720:
    // 0x160720: 0x10000018  b           . + 4 + (0x18 << 2)
label_160724:
    if (ctx->pc == 0x160724u) {
        ctx->pc = 0x160724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160720u;
        // 0x160724: 0x7bb00420  lq          $s0, 0x420($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160728u;
        goto label_160728;
    }
    ctx->pc = 0x160720u;
    {
        const bool branch_taken_0x160720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160720u;
        // 0x160724: 0x7bb00420  lq          $s0, 0x420($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160720) {
            ctx->pc = 0x160784u;
            goto label_160784;
        }
    }
    ctx->pc = 0x160728u;
label_160728:
    // 0x160728: 0xae20c7bc  sw          $zero, -0x3844($s1)
    ctx->pc = 0x160728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952892), GPR_U32(ctx, 0));
label_16072c:
    // 0x16072c: 0x8ec3489c  lw          $v1, 0x489C($s6)
    ctx->pc = 0x16072cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18588)));
label_160730:
    // 0x160730: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160734:
    // 0x160734: 0x8c44cf14  lw          $a0, -0x30EC($v0)
    ctx->pc = 0x160734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954772)));
label_160738:
    // 0x160738: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x160738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_16073c:
    // 0x16073c: 0x8462033a  lh          $v0, 0x33A($v1)
    ctx->pc = 0x16073cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 826)));
label_160740:
    // 0x160740: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x160740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_160744:
    // 0x160744: 0x24700840  addiu       $s0, $v1, 0x840
    ctx->pc = 0x160744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
label_160748:
    // 0x160748: 0xaca2c7c4  sw          $v0, -0x383C($a1)
    ctx->pc = 0x160748u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952900), GPR_U32(ctx, 2));
label_16074c:
    // 0x16074c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x16074cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_160750:
    // 0x160750: 0xc066fb8  jal         func_19BEE0
label_160754:
    if (ctx->pc == 0x160754u) {
        ctx->pc = 0x160754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160750u;
        // 0x160754: 0xac74c7c0  sw          $s4, -0x3840($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952896), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160758u;
        goto label_160758;
    }
    ctx->pc = 0x160750u;
    SET_GPR_U32(ctx, 31, 0x160758u);
    ctx->pc = 0x160754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160750u;
    // 0x160754: 0xac74c7c0  sw          $s4, -0x3840($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952896), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BEE0u, 0x160750u, 0x160758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160758u;
label_160758:
    // 0x160758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x160758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16075c:
    // 0x16075c: 0xc06c996  jal         func_1B2658
label_160760:
    if (ctx->pc == 0x160760u) {
        ctx->pc = 0x160760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16075Cu;
        // 0x160760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160764u;
        goto label_160764;
    }
    ctx->pc = 0x16075Cu;
    SET_GPR_U32(ctx, 31, 0x160764u);
    ctx->pc = 0x160760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16075Cu;
    // 0x160760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x16075Cu, 0x160764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160764u;
label_160764:
    // 0x160764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x160764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160768:
    // 0x160768: 0xc06c996  jal         func_1B2658
label_16076c:
    if (ctx->pc == 0x16076Cu) {
        ctx->pc = 0x16076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160768u;
        // 0x16076c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160770u;
        goto label_160770;
    }
    ctx->pc = 0x160768u;
    SET_GPR_U32(ctx, 31, 0x160770u);
    ctx->pc = 0x16076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160768u;
    // 0x16076c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x160768u, 0x160770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160770u;
label_160770:
    // 0x160770: 0xc05159c  jal         func_145670
label_160774:
    if (ctx->pc == 0x160774u) {
        ctx->pc = 0x160778u;
        goto label_160778;
    }
    ctx->pc = 0x160770u;
    SET_GPR_U32(ctx, 31, 0x160778u);
    ctx->pc = 0x145670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145670u, 0x160770u, 0x160778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160778u;
label_160778:
    // 0x160778: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16077c:
    // 0x16077c: 0xac40054c  sw          $zero, 0x54C($v0)
    ctx->pc = 0x16077cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1356), GPR_U32(ctx, 0));
label_160780:
    // 0x160780: 0x7bb00420  lq          $s0, 0x420($sp)
    ctx->pc = 0x160780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_160784:
    // 0x160784: 0x7bb10410  lq          $s1, 0x410($sp)
    ctx->pc = 0x160784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_160788:
    // 0x160788: 0x7bb20400  lq          $s2, 0x400($sp)
    ctx->pc = 0x160788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
label_16078c:
    // 0x16078c: 0x7bb303f0  lq          $s3, 0x3F0($sp)
    ctx->pc = 0x16078cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
label_160790:
    // 0x160790: 0x7bb403e0  lq          $s4, 0x3E0($sp)
    ctx->pc = 0x160790u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 992)));
label_160794:
    // 0x160794: 0x7bb503d0  lq          $s5, 0x3D0($sp)
    ctx->pc = 0x160794u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 976)));
label_160798:
    // 0x160798: 0x7bb603c0  lq          $s6, 0x3C0($sp)
    ctx->pc = 0x160798u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 960)));
label_16079c:
    // 0x16079c: 0x7bb703b0  lq          $s7, 0x3B0($sp)
    ctx->pc = 0x16079cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 944)));
label_1607a0:
    // 0x1607a0: 0x7bbe03a0  lq          $fp, 0x3A0($sp)
    ctx->pc = 0x1607a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 928)));
label_1607a4:
    // 0x1607a4: 0xdfbf0390  ld          $ra, 0x390($sp)
    ctx->pc = 0x1607a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 912)));
label_1607a8:
    // 0x1607a8: 0xc7b40430  lwc1        $f20, 0x430($sp)
    ctx->pc = 0x1607a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1607ac:
    // 0x1607ac: 0x3e00008  jr          $ra
label_1607b0:
    if (ctx->pc == 0x1607B0u) {
        ctx->pc = 0x1607B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607ACu;
        // 0x1607b0: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607B4u;
        goto label_1607b4;
    }
    ctx->pc = 0x1607ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1607B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607ACu;
        // 0x1607b0: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1607ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1607B4u;
label_1607b4:
    // 0x1607b4: 0x0  nop
    ctx->pc = 0x1607b4u;
    // NOP
    ctx->pc = 0x1607b8u;
}
