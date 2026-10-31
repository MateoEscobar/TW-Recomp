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

// Function: sub_0023FEA8
// Address: 0x23fea8 - 0x240800
void sub_0023FEA8_0x23fea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FEA8_0x23fea8");
#endif

    switch (ctx->pc) {
        case 0x23fea8u: goto label_23fea8;
        case 0x23feacu: goto label_23feac;
        case 0x23feb0u: goto label_23feb0;
        case 0x23feb4u: goto label_23feb4;
        case 0x23feb8u: goto label_23feb8;
        case 0x23febcu: goto label_23febc;
        case 0x23fec0u: goto label_23fec0;
        case 0x23fec4u: goto label_23fec4;
        case 0x23fec8u: goto label_23fec8;
        case 0x23feccu: goto label_23fecc;
        case 0x23fed0u: goto label_23fed0;
        case 0x23fed4u: goto label_23fed4;
        case 0x23fed8u: goto label_23fed8;
        case 0x23fedcu: goto label_23fedc;
        case 0x23fee0u: goto label_23fee0;
        case 0x23fee4u: goto label_23fee4;
        case 0x23fee8u: goto label_23fee8;
        case 0x23feecu: goto label_23feec;
        case 0x23fef0u: goto label_23fef0;
        case 0x23fef4u: goto label_23fef4;
        case 0x23fef8u: goto label_23fef8;
        case 0x23fefcu: goto label_23fefc;
        case 0x23ff00u: goto label_23ff00;
        case 0x23ff04u: goto label_23ff04;
        case 0x23ff08u: goto label_23ff08;
        case 0x23ff0cu: goto label_23ff0c;
        case 0x23ff10u: goto label_23ff10;
        case 0x23ff14u: goto label_23ff14;
        case 0x23ff18u: goto label_23ff18;
        case 0x23ff1cu: goto label_23ff1c;
        case 0x23ff20u: goto label_23ff20;
        case 0x23ff24u: goto label_23ff24;
        case 0x23ff28u: goto label_23ff28;
        case 0x23ff2cu: goto label_23ff2c;
        case 0x23ff30u: goto label_23ff30;
        case 0x23ff34u: goto label_23ff34;
        case 0x23ff38u: goto label_23ff38;
        case 0x23ff3cu: goto label_23ff3c;
        case 0x23ff40u: goto label_23ff40;
        case 0x23ff44u: goto label_23ff44;
        case 0x23ff48u: goto label_23ff48;
        case 0x23ff4cu: goto label_23ff4c;
        case 0x23ff50u: goto label_23ff50;
        case 0x23ff54u: goto label_23ff54;
        case 0x23ff58u: goto label_23ff58;
        case 0x23ff5cu: goto label_23ff5c;
        case 0x23ff60u: goto label_23ff60;
        case 0x23ff64u: goto label_23ff64;
        case 0x23ff68u: goto label_23ff68;
        case 0x23ff6cu: goto label_23ff6c;
        case 0x23ff70u: goto label_23ff70;
        case 0x23ff74u: goto label_23ff74;
        case 0x23ff78u: goto label_23ff78;
        case 0x23ff7cu: goto label_23ff7c;
        case 0x23ff80u: goto label_23ff80;
        case 0x23ff84u: goto label_23ff84;
        case 0x23ff88u: goto label_23ff88;
        case 0x23ff8cu: goto label_23ff8c;
        case 0x23ff90u: goto label_23ff90;
        case 0x23ff94u: goto label_23ff94;
        case 0x23ff98u: goto label_23ff98;
        case 0x23ff9cu: goto label_23ff9c;
        case 0x23ffa0u: goto label_23ffa0;
        case 0x23ffa4u: goto label_23ffa4;
        case 0x23ffa8u: goto label_23ffa8;
        case 0x23ffacu: goto label_23ffac;
        case 0x23ffb0u: goto label_23ffb0;
        case 0x23ffb4u: goto label_23ffb4;
        case 0x23ffb8u: goto label_23ffb8;
        case 0x23ffbcu: goto label_23ffbc;
        case 0x23ffc0u: goto label_23ffc0;
        case 0x23ffc4u: goto label_23ffc4;
        case 0x23ffc8u: goto label_23ffc8;
        case 0x23ffccu: goto label_23ffcc;
        case 0x23ffd0u: goto label_23ffd0;
        case 0x23ffd4u: goto label_23ffd4;
        case 0x23ffd8u: goto label_23ffd8;
        case 0x23ffdcu: goto label_23ffdc;
        case 0x23ffe0u: goto label_23ffe0;
        case 0x23ffe4u: goto label_23ffe4;
        case 0x23ffe8u: goto label_23ffe8;
        case 0x23ffecu: goto label_23ffec;
        case 0x23fff0u: goto label_23fff0;
        case 0x23fff4u: goto label_23fff4;
        case 0x23fff8u: goto label_23fff8;
        case 0x23fffcu: goto label_23fffc;
        case 0x240000u: goto label_240000;
        case 0x240004u: goto label_240004;
        case 0x240008u: goto label_240008;
        case 0x24000cu: goto label_24000c;
        case 0x240010u: goto label_240010;
        case 0x240014u: goto label_240014;
        case 0x240018u: goto label_240018;
        case 0x24001cu: goto label_24001c;
        case 0x240020u: goto label_240020;
        case 0x240024u: goto label_240024;
        case 0x240028u: goto label_240028;
        case 0x24002cu: goto label_24002c;
        case 0x240030u: goto label_240030;
        case 0x240034u: goto label_240034;
        case 0x240038u: goto label_240038;
        case 0x24003cu: goto label_24003c;
        case 0x240040u: goto label_240040;
        case 0x240044u: goto label_240044;
        case 0x240048u: goto label_240048;
        case 0x24004cu: goto label_24004c;
        case 0x240050u: goto label_240050;
        case 0x240054u: goto label_240054;
        case 0x240058u: goto label_240058;
        case 0x24005cu: goto label_24005c;
        case 0x240060u: goto label_240060;
        case 0x240064u: goto label_240064;
        case 0x240068u: goto label_240068;
        case 0x24006cu: goto label_24006c;
        case 0x240070u: goto label_240070;
        case 0x240074u: goto label_240074;
        case 0x240078u: goto label_240078;
        case 0x24007cu: goto label_24007c;
        case 0x240080u: goto label_240080;
        case 0x240084u: goto label_240084;
        case 0x240088u: goto label_240088;
        case 0x24008cu: goto label_24008c;
        case 0x240090u: goto label_240090;
        case 0x240094u: goto label_240094;
        case 0x240098u: goto label_240098;
        case 0x24009cu: goto label_24009c;
        case 0x2400a0u: goto label_2400a0;
        case 0x2400a4u: goto label_2400a4;
        case 0x2400a8u: goto label_2400a8;
        case 0x2400acu: goto label_2400ac;
        case 0x2400b0u: goto label_2400b0;
        case 0x2400b4u: goto label_2400b4;
        case 0x2400b8u: goto label_2400b8;
        case 0x2400bcu: goto label_2400bc;
        case 0x2400c0u: goto label_2400c0;
        case 0x2400c4u: goto label_2400c4;
        case 0x2400c8u: goto label_2400c8;
        case 0x2400ccu: goto label_2400cc;
        case 0x2400d0u: goto label_2400d0;
        case 0x2400d4u: goto label_2400d4;
        case 0x2400d8u: goto label_2400d8;
        case 0x2400dcu: goto label_2400dc;
        case 0x2400e0u: goto label_2400e0;
        case 0x2400e4u: goto label_2400e4;
        case 0x2400e8u: goto label_2400e8;
        case 0x2400ecu: goto label_2400ec;
        case 0x2400f0u: goto label_2400f0;
        case 0x2400f4u: goto label_2400f4;
        case 0x2400f8u: goto label_2400f8;
        case 0x2400fcu: goto label_2400fc;
        case 0x240100u: goto label_240100;
        case 0x240104u: goto label_240104;
        case 0x240108u: goto label_240108;
        case 0x24010cu: goto label_24010c;
        case 0x240110u: goto label_240110;
        case 0x240114u: goto label_240114;
        case 0x240118u: goto label_240118;
        case 0x24011cu: goto label_24011c;
        case 0x240120u: goto label_240120;
        case 0x240124u: goto label_240124;
        case 0x240128u: goto label_240128;
        case 0x24012cu: goto label_24012c;
        case 0x240130u: goto label_240130;
        case 0x240134u: goto label_240134;
        case 0x240138u: goto label_240138;
        case 0x24013cu: goto label_24013c;
        case 0x240140u: goto label_240140;
        case 0x240144u: goto label_240144;
        case 0x240148u: goto label_240148;
        case 0x24014cu: goto label_24014c;
        case 0x240150u: goto label_240150;
        case 0x240154u: goto label_240154;
        case 0x240158u: goto label_240158;
        case 0x24015cu: goto label_24015c;
        case 0x240160u: goto label_240160;
        case 0x240164u: goto label_240164;
        case 0x240168u: goto label_240168;
        case 0x24016cu: goto label_24016c;
        case 0x240170u: goto label_240170;
        case 0x240174u: goto label_240174;
        case 0x240178u: goto label_240178;
        case 0x24017cu: goto label_24017c;
        case 0x240180u: goto label_240180;
        case 0x240184u: goto label_240184;
        case 0x240188u: goto label_240188;
        case 0x24018cu: goto label_24018c;
        case 0x240190u: goto label_240190;
        case 0x240194u: goto label_240194;
        case 0x240198u: goto label_240198;
        case 0x24019cu: goto label_24019c;
        case 0x2401a0u: goto label_2401a0;
        case 0x2401a4u: goto label_2401a4;
        case 0x2401a8u: goto label_2401a8;
        case 0x2401acu: goto label_2401ac;
        case 0x2401b0u: goto label_2401b0;
        case 0x2401b4u: goto label_2401b4;
        case 0x2401b8u: goto label_2401b8;
        case 0x2401bcu: goto label_2401bc;
        case 0x2401c0u: goto label_2401c0;
        case 0x2401c4u: goto label_2401c4;
        case 0x2401c8u: goto label_2401c8;
        case 0x2401ccu: goto label_2401cc;
        case 0x2401d0u: goto label_2401d0;
        case 0x2401d4u: goto label_2401d4;
        case 0x2401d8u: goto label_2401d8;
        case 0x2401dcu: goto label_2401dc;
        case 0x2401e0u: goto label_2401e0;
        case 0x2401e4u: goto label_2401e4;
        case 0x2401e8u: goto label_2401e8;
        case 0x2401ecu: goto label_2401ec;
        case 0x2401f0u: goto label_2401f0;
        case 0x2401f4u: goto label_2401f4;
        case 0x2401f8u: goto label_2401f8;
        case 0x2401fcu: goto label_2401fc;
        case 0x240200u: goto label_240200;
        case 0x240204u: goto label_240204;
        case 0x240208u: goto label_240208;
        case 0x24020cu: goto label_24020c;
        case 0x240210u: goto label_240210;
        case 0x240214u: goto label_240214;
        case 0x240218u: goto label_240218;
        case 0x24021cu: goto label_24021c;
        case 0x240220u: goto label_240220;
        case 0x240224u: goto label_240224;
        case 0x240228u: goto label_240228;
        case 0x24022cu: goto label_24022c;
        case 0x240230u: goto label_240230;
        case 0x240234u: goto label_240234;
        case 0x240238u: goto label_240238;
        case 0x24023cu: goto label_24023c;
        case 0x240240u: goto label_240240;
        case 0x240244u: goto label_240244;
        case 0x240248u: goto label_240248;
        case 0x24024cu: goto label_24024c;
        case 0x240250u: goto label_240250;
        case 0x240254u: goto label_240254;
        case 0x240258u: goto label_240258;
        case 0x24025cu: goto label_24025c;
        case 0x240260u: goto label_240260;
        case 0x240264u: goto label_240264;
        case 0x240268u: goto label_240268;
        case 0x24026cu: goto label_24026c;
        case 0x240270u: goto label_240270;
        case 0x240274u: goto label_240274;
        case 0x240278u: goto label_240278;
        case 0x24027cu: goto label_24027c;
        case 0x240280u: goto label_240280;
        case 0x240284u: goto label_240284;
        case 0x240288u: goto label_240288;
        case 0x24028cu: goto label_24028c;
        case 0x240290u: goto label_240290;
        case 0x240294u: goto label_240294;
        case 0x240298u: goto label_240298;
        case 0x24029cu: goto label_24029c;
        case 0x2402a0u: goto label_2402a0;
        case 0x2402a4u: goto label_2402a4;
        case 0x2402a8u: goto label_2402a8;
        case 0x2402acu: goto label_2402ac;
        case 0x2402b0u: goto label_2402b0;
        case 0x2402b4u: goto label_2402b4;
        case 0x2402b8u: goto label_2402b8;
        case 0x2402bcu: goto label_2402bc;
        case 0x2402c0u: goto label_2402c0;
        case 0x2402c4u: goto label_2402c4;
        case 0x2402c8u: goto label_2402c8;
        case 0x2402ccu: goto label_2402cc;
        case 0x2402d0u: goto label_2402d0;
        case 0x2402d4u: goto label_2402d4;
        case 0x2402d8u: goto label_2402d8;
        case 0x2402dcu: goto label_2402dc;
        case 0x2402e0u: goto label_2402e0;
        case 0x2402e4u: goto label_2402e4;
        case 0x2402e8u: goto label_2402e8;
        case 0x2402ecu: goto label_2402ec;
        case 0x2402f0u: goto label_2402f0;
        case 0x2402f4u: goto label_2402f4;
        case 0x2402f8u: goto label_2402f8;
        case 0x2402fcu: goto label_2402fc;
        case 0x240300u: goto label_240300;
        case 0x240304u: goto label_240304;
        case 0x240308u: goto label_240308;
        case 0x24030cu: goto label_24030c;
        case 0x240310u: goto label_240310;
        case 0x240314u: goto label_240314;
        case 0x240318u: goto label_240318;
        case 0x24031cu: goto label_24031c;
        case 0x240320u: goto label_240320;
        case 0x240324u: goto label_240324;
        case 0x240328u: goto label_240328;
        case 0x24032cu: goto label_24032c;
        case 0x240330u: goto label_240330;
        case 0x240334u: goto label_240334;
        case 0x240338u: goto label_240338;
        case 0x24033cu: goto label_24033c;
        case 0x240340u: goto label_240340;
        case 0x240344u: goto label_240344;
        case 0x240348u: goto label_240348;
        case 0x24034cu: goto label_24034c;
        case 0x240350u: goto label_240350;
        case 0x240354u: goto label_240354;
        case 0x240358u: goto label_240358;
        case 0x24035cu: goto label_24035c;
        case 0x240360u: goto label_240360;
        case 0x240364u: goto label_240364;
        case 0x240368u: goto label_240368;
        case 0x24036cu: goto label_24036c;
        case 0x240370u: goto label_240370;
        case 0x240374u: goto label_240374;
        case 0x240378u: goto label_240378;
        case 0x24037cu: goto label_24037c;
        case 0x240380u: goto label_240380;
        case 0x240384u: goto label_240384;
        case 0x240388u: goto label_240388;
        case 0x24038cu: goto label_24038c;
        case 0x240390u: goto label_240390;
        case 0x240394u: goto label_240394;
        case 0x240398u: goto label_240398;
        case 0x24039cu: goto label_24039c;
        case 0x2403a0u: goto label_2403a0;
        case 0x2403a4u: goto label_2403a4;
        case 0x2403a8u: goto label_2403a8;
        case 0x2403acu: goto label_2403ac;
        case 0x2403b0u: goto label_2403b0;
        case 0x2403b4u: goto label_2403b4;
        case 0x2403b8u: goto label_2403b8;
        case 0x2403bcu: goto label_2403bc;
        case 0x2403c0u: goto label_2403c0;
        case 0x2403c4u: goto label_2403c4;
        case 0x2403c8u: goto label_2403c8;
        case 0x2403ccu: goto label_2403cc;
        case 0x2403d0u: goto label_2403d0;
        case 0x2403d4u: goto label_2403d4;
        case 0x2403d8u: goto label_2403d8;
        case 0x2403dcu: goto label_2403dc;
        case 0x2403e0u: goto label_2403e0;
        case 0x2403e4u: goto label_2403e4;
        case 0x2403e8u: goto label_2403e8;
        case 0x2403ecu: goto label_2403ec;
        case 0x2403f0u: goto label_2403f0;
        case 0x2403f4u: goto label_2403f4;
        case 0x2403f8u: goto label_2403f8;
        case 0x2403fcu: goto label_2403fc;
        case 0x240400u: goto label_240400;
        case 0x240404u: goto label_240404;
        case 0x240408u: goto label_240408;
        case 0x24040cu: goto label_24040c;
        case 0x240410u: goto label_240410;
        case 0x240414u: goto label_240414;
        case 0x240418u: goto label_240418;
        case 0x24041cu: goto label_24041c;
        case 0x240420u: goto label_240420;
        case 0x240424u: goto label_240424;
        case 0x240428u: goto label_240428;
        case 0x24042cu: goto label_24042c;
        case 0x240430u: goto label_240430;
        case 0x240434u: goto label_240434;
        case 0x240438u: goto label_240438;
        case 0x24043cu: goto label_24043c;
        case 0x240440u: goto label_240440;
        case 0x240444u: goto label_240444;
        case 0x240448u: goto label_240448;
        case 0x24044cu: goto label_24044c;
        case 0x240450u: goto label_240450;
        case 0x240454u: goto label_240454;
        case 0x240458u: goto label_240458;
        case 0x24045cu: goto label_24045c;
        case 0x240460u: goto label_240460;
        case 0x240464u: goto label_240464;
        case 0x240468u: goto label_240468;
        case 0x24046cu: goto label_24046c;
        case 0x240470u: goto label_240470;
        case 0x240474u: goto label_240474;
        case 0x240478u: goto label_240478;
        case 0x24047cu: goto label_24047c;
        case 0x240480u: goto label_240480;
        case 0x240484u: goto label_240484;
        case 0x240488u: goto label_240488;
        case 0x24048cu: goto label_24048c;
        case 0x240490u: goto label_240490;
        case 0x240494u: goto label_240494;
        case 0x240498u: goto label_240498;
        case 0x24049cu: goto label_24049c;
        case 0x2404a0u: goto label_2404a0;
        case 0x2404a4u: goto label_2404a4;
        case 0x2404a8u: goto label_2404a8;
        case 0x2404acu: goto label_2404ac;
        case 0x2404b0u: goto label_2404b0;
        case 0x2404b4u: goto label_2404b4;
        case 0x2404b8u: goto label_2404b8;
        case 0x2404bcu: goto label_2404bc;
        case 0x2404c0u: goto label_2404c0;
        case 0x2404c4u: goto label_2404c4;
        case 0x2404c8u: goto label_2404c8;
        case 0x2404ccu: goto label_2404cc;
        case 0x2404d0u: goto label_2404d0;
        case 0x2404d4u: goto label_2404d4;
        case 0x2404d8u: goto label_2404d8;
        case 0x2404dcu: goto label_2404dc;
        case 0x2404e0u: goto label_2404e0;
        case 0x2404e4u: goto label_2404e4;
        case 0x2404e8u: goto label_2404e8;
        case 0x2404ecu: goto label_2404ec;
        case 0x2404f0u: goto label_2404f0;
        case 0x2404f4u: goto label_2404f4;
        case 0x2404f8u: goto label_2404f8;
        case 0x2404fcu: goto label_2404fc;
        case 0x240500u: goto label_240500;
        case 0x240504u: goto label_240504;
        case 0x240508u: goto label_240508;
        case 0x24050cu: goto label_24050c;
        case 0x240510u: goto label_240510;
        case 0x240514u: goto label_240514;
        case 0x240518u: goto label_240518;
        case 0x24051cu: goto label_24051c;
        case 0x240520u: goto label_240520;
        case 0x240524u: goto label_240524;
        case 0x240528u: goto label_240528;
        case 0x24052cu: goto label_24052c;
        case 0x240530u: goto label_240530;
        case 0x240534u: goto label_240534;
        case 0x240538u: goto label_240538;
        case 0x24053cu: goto label_24053c;
        case 0x240540u: goto label_240540;
        case 0x240544u: goto label_240544;
        case 0x240548u: goto label_240548;
        case 0x24054cu: goto label_24054c;
        case 0x240550u: goto label_240550;
        case 0x240554u: goto label_240554;
        case 0x240558u: goto label_240558;
        case 0x24055cu: goto label_24055c;
        case 0x240560u: goto label_240560;
        case 0x240564u: goto label_240564;
        case 0x240568u: goto label_240568;
        case 0x24056cu: goto label_24056c;
        case 0x240570u: goto label_240570;
        case 0x240574u: goto label_240574;
        case 0x240578u: goto label_240578;
        case 0x24057cu: goto label_24057c;
        case 0x240580u: goto label_240580;
        case 0x240584u: goto label_240584;
        case 0x240588u: goto label_240588;
        case 0x24058cu: goto label_24058c;
        case 0x240590u: goto label_240590;
        case 0x240594u: goto label_240594;
        case 0x240598u: goto label_240598;
        case 0x24059cu: goto label_24059c;
        case 0x2405a0u: goto label_2405a0;
        case 0x2405a4u: goto label_2405a4;
        case 0x2405a8u: goto label_2405a8;
        case 0x2405acu: goto label_2405ac;
        case 0x2405b0u: goto label_2405b0;
        case 0x2405b4u: goto label_2405b4;
        case 0x2405b8u: goto label_2405b8;
        case 0x2405bcu: goto label_2405bc;
        case 0x2405c0u: goto label_2405c0;
        case 0x2405c4u: goto label_2405c4;
        case 0x2405c8u: goto label_2405c8;
        case 0x2405ccu: goto label_2405cc;
        case 0x2405d0u: goto label_2405d0;
        case 0x2405d4u: goto label_2405d4;
        case 0x2405d8u: goto label_2405d8;
        case 0x2405dcu: goto label_2405dc;
        case 0x2405e0u: goto label_2405e0;
        case 0x2405e4u: goto label_2405e4;
        case 0x2405e8u: goto label_2405e8;
        case 0x2405ecu: goto label_2405ec;
        case 0x2405f0u: goto label_2405f0;
        case 0x2405f4u: goto label_2405f4;
        case 0x2405f8u: goto label_2405f8;
        case 0x2405fcu: goto label_2405fc;
        case 0x240600u: goto label_240600;
        case 0x240604u: goto label_240604;
        case 0x240608u: goto label_240608;
        case 0x24060cu: goto label_24060c;
        case 0x240610u: goto label_240610;
        case 0x240614u: goto label_240614;
        case 0x240618u: goto label_240618;
        case 0x24061cu: goto label_24061c;
        case 0x240620u: goto label_240620;
        case 0x240624u: goto label_240624;
        case 0x240628u: goto label_240628;
        case 0x24062cu: goto label_24062c;
        case 0x240630u: goto label_240630;
        case 0x240634u: goto label_240634;
        case 0x240638u: goto label_240638;
        case 0x24063cu: goto label_24063c;
        case 0x240640u: goto label_240640;
        case 0x240644u: goto label_240644;
        case 0x240648u: goto label_240648;
        case 0x24064cu: goto label_24064c;
        case 0x240650u: goto label_240650;
        case 0x240654u: goto label_240654;
        case 0x240658u: goto label_240658;
        case 0x24065cu: goto label_24065c;
        case 0x240660u: goto label_240660;
        case 0x240664u: goto label_240664;
        case 0x240668u: goto label_240668;
        case 0x24066cu: goto label_24066c;
        case 0x240670u: goto label_240670;
        case 0x240674u: goto label_240674;
        case 0x240678u: goto label_240678;
        case 0x24067cu: goto label_24067c;
        case 0x240680u: goto label_240680;
        case 0x240684u: goto label_240684;
        case 0x240688u: goto label_240688;
        case 0x24068cu: goto label_24068c;
        case 0x240690u: goto label_240690;
        case 0x240694u: goto label_240694;
        case 0x240698u: goto label_240698;
        case 0x24069cu: goto label_24069c;
        case 0x2406a0u: goto label_2406a0;
        case 0x2406a4u: goto label_2406a4;
        case 0x2406a8u: goto label_2406a8;
        case 0x2406acu: goto label_2406ac;
        case 0x2406b0u: goto label_2406b0;
        case 0x2406b4u: goto label_2406b4;
        case 0x2406b8u: goto label_2406b8;
        case 0x2406bcu: goto label_2406bc;
        case 0x2406c0u: goto label_2406c0;
        case 0x2406c4u: goto label_2406c4;
        case 0x2406c8u: goto label_2406c8;
        case 0x2406ccu: goto label_2406cc;
        case 0x2406d0u: goto label_2406d0;
        case 0x2406d4u: goto label_2406d4;
        case 0x2406d8u: goto label_2406d8;
        case 0x2406dcu: goto label_2406dc;
        case 0x2406e0u: goto label_2406e0;
        case 0x2406e4u: goto label_2406e4;
        case 0x2406e8u: goto label_2406e8;
        case 0x2406ecu: goto label_2406ec;
        case 0x2406f0u: goto label_2406f0;
        case 0x2406f4u: goto label_2406f4;
        case 0x2406f8u: goto label_2406f8;
        case 0x2406fcu: goto label_2406fc;
        case 0x240700u: goto label_240700;
        case 0x240704u: goto label_240704;
        case 0x240708u: goto label_240708;
        case 0x24070cu: goto label_24070c;
        case 0x240710u: goto label_240710;
        case 0x240714u: goto label_240714;
        case 0x240718u: goto label_240718;
        case 0x24071cu: goto label_24071c;
        case 0x240720u: goto label_240720;
        case 0x240724u: goto label_240724;
        case 0x240728u: goto label_240728;
        case 0x24072cu: goto label_24072c;
        case 0x240730u: goto label_240730;
        case 0x240734u: goto label_240734;
        case 0x240738u: goto label_240738;
        case 0x24073cu: goto label_24073c;
        case 0x240740u: goto label_240740;
        case 0x240744u: goto label_240744;
        case 0x240748u: goto label_240748;
        case 0x24074cu: goto label_24074c;
        case 0x240750u: goto label_240750;
        case 0x240754u: goto label_240754;
        case 0x240758u: goto label_240758;
        case 0x24075cu: goto label_24075c;
        case 0x240760u: goto label_240760;
        case 0x240764u: goto label_240764;
        case 0x240768u: goto label_240768;
        case 0x24076cu: goto label_24076c;
        case 0x240770u: goto label_240770;
        case 0x240774u: goto label_240774;
        case 0x240778u: goto label_240778;
        case 0x24077cu: goto label_24077c;
        case 0x240780u: goto label_240780;
        case 0x240784u: goto label_240784;
        case 0x240788u: goto label_240788;
        case 0x24078cu: goto label_24078c;
        case 0x240790u: goto label_240790;
        case 0x240794u: goto label_240794;
        case 0x240798u: goto label_240798;
        case 0x24079cu: goto label_24079c;
        case 0x2407a0u: goto label_2407a0;
        case 0x2407a4u: goto label_2407a4;
        case 0x2407a8u: goto label_2407a8;
        case 0x2407acu: goto label_2407ac;
        case 0x2407b0u: goto label_2407b0;
        case 0x2407b4u: goto label_2407b4;
        case 0x2407b8u: goto label_2407b8;
        case 0x2407bcu: goto label_2407bc;
        case 0x2407c0u: goto label_2407c0;
        case 0x2407c4u: goto label_2407c4;
        case 0x2407c8u: goto label_2407c8;
        case 0x2407ccu: goto label_2407cc;
        case 0x2407d0u: goto label_2407d0;
        case 0x2407d4u: goto label_2407d4;
        case 0x2407d8u: goto label_2407d8;
        case 0x2407dcu: goto label_2407dc;
        case 0x2407e0u: goto label_2407e0;
        case 0x2407e4u: goto label_2407e4;
        case 0x2407e8u: goto label_2407e8;
        case 0x2407ecu: goto label_2407ec;
        case 0x2407f0u: goto label_2407f0;
        case 0x2407f4u: goto label_2407f4;
        case 0x2407f8u: goto label_2407f8;
        case 0x2407fcu: goto label_2407fc;
        default: break;
    }

    ctx->pc = 0x23fea8u;

label_23fea8:
    // 0x23fea8: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x23fea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_23feac:
    // 0x23feac: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x23feacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
label_23feb0:
    // 0x23feb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23feb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23feb4:
    // 0x23feb4: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x23feb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
label_23feb8:
    // 0x23feb8: 0x7fb70170  sq          $s7, 0x170($sp)
    ctx->pc = 0x23feb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 23));
label_23febc:
    // 0x23febc: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x23febcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
label_23fec0:
    // 0x23fec0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x23fec0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_23fec4:
    // 0x23fec4: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x23fec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
label_23fec8:
    // 0x23fec8: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x23fec8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23fecc:
    // 0x23fecc: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x23feccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
label_23fed0:
    // 0x23fed0: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x23fed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
label_23fed4:
    // 0x23fed4: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x23fed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
label_23fed8:
    // 0x23fed8: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x23fed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
label_23fedc:
    // 0x23fedc: 0xc0e87c0  jal         func_3A1F00
label_23fee0:
    if (ctx->pc == 0x23FEE0u) {
        ctx->pc = 0x23FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEDCu;
        // 0x23fee0: 0xe7b401f0  swc1        $f20, 0x1F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FEE4u;
        goto label_23fee4;
    }
    ctx->pc = 0x23FEDCu;
    SET_GPR_U32(ctx, 31, 0x23FEE4u);
    ctx->pc = 0x23FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FEDCu;
    // 0x23fee0: 0xe7b401f0  swc1        $f20, 0x1F0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x23FEDCu, 0x23FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEE4u;
label_23fee4:
    // 0x23fee4: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x23fee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_23fee8:
    // 0x23fee8: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x23fee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_23feec:
    // 0x23feec: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x23feecu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23fef0:
    // 0x23fef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23fef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23fef4:
    // 0x23fef4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x23fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_23fef8:
    // 0x23fef8: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x23fef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_23fefc:
    // 0x23fefc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x23fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_23ff00:
    // 0x23ff00: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x23ff00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_23ff04:
    // 0x23ff04: 0xc088f04  jal         func_223C10
label_23ff08:
    if (ctx->pc == 0x23FF08u) {
        ctx->pc = 0x23FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF04u;
        // 0x23ff08: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF0Cu;
        goto label_23ff0c;
    }
    ctx->pc = 0x23FF04u;
    SET_GPR_U32(ctx, 31, 0x23FF0Cu);
    ctx->pc = 0x23FF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF04u;
    // 0x23ff08: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x23FF04u, 0x23FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF0Cu;
label_23ff0c:
    // 0x23ff0c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_23ff10:
    if (ctx->pc == 0x23FF10u) {
        ctx->pc = 0x23FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF0Cu;
        // 0x23ff10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF14u;
        goto label_23ff14;
    }
    ctx->pc = 0x23FF0Cu;
    {
        const bool branch_taken_0x23ff0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF0Cu;
        // 0x23ff10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff0c) {
            ctx->pc = 0x23FF38u;
            goto label_23ff38;
        }
    }
    ctx->pc = 0x23FF14u;
label_23ff14:
    // 0x23ff14: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x23ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_23ff18:
    // 0x23ff18: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x23ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_23ff1c:
    // 0x23ff1c: 0x286201b5  slti        $v0, $v1, 0x1B5
    ctx->pc = 0x23ff1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)437) ? 1 : 0);
label_23ff20:
    // 0x23ff20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23ff20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_23ff24:
    // 0x23ff24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_23ff28:
    if (ctx->pc == 0x23FF28u) {
        ctx->pc = 0x23FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF24u;
        // 0x23ff28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF2Cu;
        goto label_23ff2c;
    }
    ctx->pc = 0x23FF24u;
    {
        const bool branch_taken_0x23ff24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF24u;
        // 0x23ff28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff24) {
            ctx->pc = 0x23FF30u;
            goto label_23ff30;
        }
    }
    ctx->pc = 0x23FF2Cu;
label_23ff2c:
    // 0x23ff2c: 0x286401cd  slti        $a0, $v1, 0x1CD
    ctx->pc = 0x23ff2cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)461) ? 1 : 0);
label_23ff30:
    // 0x23ff30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_23ff34:
    if (ctx->pc == 0x23FF34u) {
        ctx->pc = 0x23FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF30u;
        // 0x23ff34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF38u;
        goto label_23ff38;
    }
    ctx->pc = 0x23FF30u;
    {
        const bool branch_taken_0x23ff30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF30u;
        // 0x23ff34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff30) {
            ctx->pc = 0x23FF40u;
            goto label_23ff40;
        }
    }
    ctx->pc = 0x23FF38u;
label_23ff38:
    // 0x23ff38: 0x10000005  b           . + 4 + (0x5 << 2)
label_23ff3c:
    if (ctx->pc == 0x23FF3Cu) {
        ctx->pc = 0x23FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF38u;
        // 0x23ff3c: 0xa22205b9  sb          $v0, 0x5B9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF40u;
        goto label_23ff40;
    }
    ctx->pc = 0x23FF38u;
    {
        const bool branch_taken_0x23ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF38u;
        // 0x23ff3c: 0xa22205b9  sb          $v0, 0x5B9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff38) {
            ctx->pc = 0x23FF50u;
            goto label_23ff50;
        }
    }
    ctx->pc = 0x23FF40u;
label_23ff40:
    // 0x23ff40: 0xc089fe4  jal         func_227F90
label_23ff44:
    if (ctx->pc == 0x23FF44u) {
        ctx->pc = 0x23FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF40u;
        // 0x23ff44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF48u;
        goto label_23ff48;
    }
    ctx->pc = 0x23FF40u;
    SET_GPR_U32(ctx, 31, 0x23FF48u);
    ctx->pc = 0x23FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF40u;
    // 0x23ff44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x23FF40u, 0x23FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF48u;
label_23ff48:
    // 0x23ff48: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_23ff4c:
    if (ctx->pc == 0x23FF4Cu) {
        ctx->pc = 0x23FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF48u;
        // 0x23ff4c: 0xa22005b9  sb          $zero, 0x5B9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1465), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF50u;
        goto label_23ff50;
    }
    ctx->pc = 0x23FF48u;
    {
        const bool branch_taken_0x23ff48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ff48) {
            ctx->pc = 0x23FF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FF48u;
            // 0x23ff4c: 0xa22005b9  sb          $zero, 0x5B9($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1465), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FF50u;
            goto label_23ff50;
        }
    }
    ctx->pc = 0x23FF50u;
label_23ff50:
    // 0x23ff50: 0x8e2206c0  lw          $v0, 0x6C0($s1)
    ctx->pc = 0x23ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1728)));
label_23ff54:
    // 0x23ff54: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_23ff58:
    if (ctx->pc == 0x23FF58u) {
        ctx->pc = 0x23FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF54u;
        // 0x23ff58: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF5Cu;
        goto label_23ff5c;
    }
    ctx->pc = 0x23FF54u;
    {
        const bool branch_taken_0x23ff54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF54u;
        // 0x23ff58: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff54) {
            ctx->pc = 0x23FF7Cu;
            goto label_23ff7c;
        }
    }
    ctx->pc = 0x23FF5Cu;
label_23ff5c:
    // 0x23ff5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23ff60:
    if (ctx->pc == 0x23FF60u) {
        ctx->pc = 0x23FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF5Cu;
        // 0x23ff60: 0xae2206c0  sw          $v0, 0x6C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF64u;
        goto label_23ff64;
    }
    ctx->pc = 0x23FF5Cu;
    {
        const bool branch_taken_0x23ff5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF5Cu;
        // 0x23ff60: 0xae2206c0  sw          $v0, 0x6C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff5c) {
            ctx->pc = 0x23FF7Cu;
            goto label_23ff7c;
        }
    }
    ctx->pc = 0x23FF64u;
label_23ff64:
    // 0x23ff64: 0xc08668a  jal         func_219A28
label_23ff68:
    if (ctx->pc == 0x23FF68u) {
        ctx->pc = 0x23FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF64u;
        // 0x23ff68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF6Cu;
        goto label_23ff6c;
    }
    ctx->pc = 0x23FF64u;
    SET_GPR_U32(ctx, 31, 0x23FF6Cu);
    ctx->pc = 0x23FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF64u;
    // 0x23ff68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219A28u, 0x23FF64u, 0x23FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF6Cu;
label_23ff6c:
    // 0x23ff6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23ff70:
    if (ctx->pc == 0x23FF70u) {
        ctx->pc = 0x23FF74u;
        goto label_23ff74;
    }
    ctx->pc = 0x23FF6Cu;
    {
        const bool branch_taken_0x23ff6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ff6c) {
            ctx->pc = 0x23FF7Cu;
            goto label_23ff7c;
        }
    }
    ctx->pc = 0x23FF74u;
label_23ff74:
    // 0x23ff74: 0xc08648e  jal         func_219238
label_23ff78:
    if (ctx->pc == 0x23FF78u) {
        ctx->pc = 0x23FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF74u;
        // 0x23ff78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF7Cu;
        goto label_23ff7c;
    }
    ctx->pc = 0x23FF74u;
    SET_GPR_U32(ctx, 31, 0x23FF7Cu);
    ctx->pc = 0x23FF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF74u;
    // 0x23ff78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219238u, 0x23FF74u, 0x23FF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF7Cu;
label_23ff7c:
    // 0x23ff7c: 0xc0e8568  jal         func_3A15A0
label_23ff80:
    if (ctx->pc == 0x23FF80u) {
        ctx->pc = 0x23FF84u;
        goto label_23ff84;
    }
    ctx->pc = 0x23FF7Cu;
    SET_GPR_U32(ctx, 31, 0x23FF84u);
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x23FF7Cu, 0x23FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF84u;
label_23ff84:
    // 0x23ff84: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x23ff84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_23ff88:
    // 0x23ff88: 0xc0e87c0  jal         func_3A1F00
label_23ff8c:
    if (ctx->pc == 0x23FF8Cu) {
        ctx->pc = 0x23FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF88u;
        // 0x23ff8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF90u;
        goto label_23ff90;
    }
    ctx->pc = 0x23FF88u;
    SET_GPR_U32(ctx, 31, 0x23FF90u);
    ctx->pc = 0x23FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF88u;
    // 0x23ff8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x23FF88u, 0x23FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF90u;
label_23ff90:
    // 0x23ff90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x23ff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23ff94:
    // 0x23ff94: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23ff94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23ff98:
    // 0x23ff98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23ff9c:
    // 0x23ff9c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x23ff9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ffa0:
    // 0x23ffa0: 0xe62003a0  swc1        $f0, 0x3A0($s1)
    ctx->pc = 0x23ffa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 928), bits); }
label_23ffa4:
    // 0x23ffa4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x23ffa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_23ffa8:
    // 0x23ffa8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x23ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_23ffac:
    // 0x23ffac: 0x40f809  jalr        $v0
label_23ffb0:
    if (ctx->pc == 0x23FFB0u) {
        ctx->pc = 0x23FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFACu;
        // 0x23ffb0: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FFB4u;
        goto label_23ffb4;
    }
    ctx->pc = 0x23FFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23FFB4u);
        ctx->pc = 0x23FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFACu;
        // 0x23ffb0: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FFACu, 0x23FFB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23FFB4u;
label_23ffb4:
    // 0x23ffb4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x23ffb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23ffb8:
    // 0x23ffb8: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x23ffb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23ffbc:
    // 0x23ffbc: 0x862501be  lh          $a1, 0x1BE($s1)
    ctx->pc = 0x23ffbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
label_23ffc0:
    // 0x23ffc0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x23ffc0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_23ffc4:
    // 0x23ffc4: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_23ffc8:
    if (ctx->pc == 0x23FFC8u) {
        ctx->pc = 0x23FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFC4u;
        // 0x23ffc8: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FFCCu;
        goto label_23ffcc;
    }
    ctx->pc = 0x23FFC4u;
    {
        const bool branch_taken_0x23ffc4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x23FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFC4u;
        // 0x23ffc8: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffc4) {
            ctx->pc = 0x23FFF0u;
            goto label_23fff0;
        }
    }
    ctx->pc = 0x23FFCCu;
label_23ffcc:
    // 0x23ffcc: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x23ffccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
label_23ffd0:
    // 0x23ffd0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x23ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_23ffd4:
    // 0x23ffd4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x23ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_23ffd8:
    // 0x23ffd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23ffd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23ffdc:
    // 0x23ffdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23ffe0:
    // 0x23ffe0: 0xdc72fff8  ld          $s2, -0x8($v1)
    ctx->pc = 0x23ffe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_23ffe4:
    // 0x23ffe4: 0x12383f  dsra32      $a3, $s2, 0
    ctx->pc = 0x23ffe4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 18) >> (32 + 0));
label_23ffe8:
    // 0x23ffe8: 0x10000003  b           . + 4 + (0x3 << 2)
label_23ffec:
    if (ctx->pc == 0x23FFECu) {
        ctx->pc = 0x23FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFE8u;
        // 0x23ffec: 0x862301bc  lh          $v1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FFF0u;
        goto label_23fff0;
    }
    ctx->pc = 0x23FFE8u;
    {
        const bool branch_taken_0x23ffe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFE8u;
        // 0x23ffec: 0x862301bc  lh          $v1, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffe8) {
            ctx->pc = 0x23FFF8u;
            goto label_23fff8;
        }
    }
    ctx->pc = 0x23FFF0u;
label_23fff0:
    // 0x23fff0: 0x8e2701c0  lw          $a3, 0x1C0($s1)
    ctx->pc = 0x23fff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
label_23fff4:
    // 0x23fff4: 0x862301bc  lh          $v1, 0x1BC($s1)
    ctx->pc = 0x23fff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 444)));
label_23fff8:
    // 0x23fff8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_23fffc:
    if (ctx->pc == 0x23FFFCu) {
        ctx->pc = 0x23FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFF8u;
        // 0x23fffc: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240000u;
        goto label_240000;
    }
    ctx->pc = 0x23FFF8u;
    {
        const bool branch_taken_0x23fff8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x23FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFF8u;
        // 0x23fffc: 0x3242ffff  andi        $v0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fff8) {
            ctx->pc = 0x240010u;
            goto label_240010;
        }
    }
    ctx->pc = 0x240000u;
label_240000:
    // 0x240000: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x240000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_240004:
    // 0x240004: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x240004u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_240008:
    // 0x240008: 0x10000002  b           . + 4 + (0x2 << 2)
label_24000c:
    if (ctx->pc == 0x24000Cu) {
        ctx->pc = 0x24000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240008u;
        // 0x24000c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240010u;
        goto label_240010;
    }
    ctx->pc = 0x240008u;
    {
        const bool branch_taken_0x240008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240008u;
        // 0x24000c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240008) {
            ctx->pc = 0x240014u;
            goto label_240014;
        }
    }
    ctx->pc = 0x240010u;
label_240010:
    // 0x240010: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x240010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_240014:
    // 0x240014: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x240014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_240018:
    // 0x240018: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x240018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_24001c:
    // 0x24001c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24001cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_240020:
    // 0x240020: 0xe0f809  jalr        $a3
label_240024:
    if (ctx->pc == 0x240024u) {
        ctx->pc = 0x240024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240020u;
        // 0x240024: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240028u;
        goto label_240028;
    }
    ctx->pc = 0x240020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x240028u);
        ctx->pc = 0x240024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240020u;
        // 0x240024: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240020u, 0x240028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240028u;
label_240028:
    // 0x240028: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x240028u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24002c:
    // 0x24002c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24002cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240030:
    // 0x240030: 0xc09210a  jal         func_248428
label_240034:
    if (ctx->pc == 0x240034u) {
        ctx->pc = 0x240034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240030u;
        // 0x240034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240038u;
        goto label_240038;
    }
    ctx->pc = 0x240030u;
    SET_GPR_U32(ctx, 31, 0x240038u);
    ctx->pc = 0x240034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240030u;
    // 0x240034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248428u, 0x240030u, 0x240038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240038u;
label_240038:
    // 0x240038: 0xc089fe4  jal         func_227F90
label_24003c:
    if (ctx->pc == 0x24003Cu) {
        ctx->pc = 0x24003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240038u;
        // 0x24003c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240040u;
        goto label_240040;
    }
    ctx->pc = 0x240038u;
    SET_GPR_U32(ctx, 31, 0x240040u);
    ctx->pc = 0x24003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240038u;
    // 0x24003c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x240038u, 0x240040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240040u;
label_240040:
    // 0x240040: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_240044:
    if (ctx->pc == 0x240044u) {
        ctx->pc = 0x240044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240040u;
        // 0x240044: 0x8e2200d8  lw          $v0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240048u;
        goto label_240048;
    }
    ctx->pc = 0x240040u;
    {
        const bool branch_taken_0x240040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240040) {
            ctx->pc = 0x240044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240040u;
            // 0x240044: 0x8e2200d8  lw          $v0, 0xD8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2400B0u;
            goto label_2400b0;
        }
    }
    ctx->pc = 0x240048u;
label_240048:
    // 0x240048: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x240048u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24004c:
    // 0x24004c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24004cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240050:
    // 0x240050: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x240050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_240054:
    // 0x240054: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x240054u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_240058:
    // 0x240058: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x240058u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24005c:
    // 0x24005c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x24005cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_240060:
    // 0x240060: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x240060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_240064:
    // 0x240064: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x240064u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_240068:
    // 0x240068: 0x4a0003bf  vwaitq
    ctx->pc = 0x240068u;
    // VWAITQ (Q already resolved in this runtime)
label_24006c:
    // 0x24006c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x24006cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_240070:
    // 0x240070: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x240070u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_240074:
    // 0x240074: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x240074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_240078:
    // 0x240078: 0xc087408  jal         func_21D020
label_24007c:
    if (ctx->pc == 0x24007Cu) {
        ctx->pc = 0x240080u;
        goto label_240080;
    }
    ctx->pc = 0x240078u;
    SET_GPR_U32(ctx, 31, 0x240080u);
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x240078u, 0x240080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240080u;
label_240080:
    // 0x240080: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x240080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_240084:
    // 0x240084: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x240084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_240088:
    // 0x240088: 0x0  nop
    ctx->pc = 0x240088u;
    // NOP
label_24008c:
    // 0x24008c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24008cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_240090:
    // 0x240090: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x240090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240094:
    // 0x240094: 0x0  nop
    ctx->pc = 0x240094u;
    // NOP
label_240098:
    // 0x240098: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_24009c:
    if (ctx->pc == 0x24009Cu) {
        ctx->pc = 0x24009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240098u;
        // 0x24009c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2400A0u;
        goto label_2400a0;
    }
    ctx->pc = 0x240098u;
    {
        const bool branch_taken_0x240098 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240098u;
        // 0x24009c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240098) {
            ctx->pc = 0x2400ACu;
            goto label_2400ac;
        }
    }
    ctx->pc = 0x2400A0u;
label_2400a0:
    // 0x2400a0: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x2400a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_2400a4:
    // 0x2400a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2400a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2400a8:
    // 0x2400a8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2400a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2400ac:
    // 0x2400ac: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x2400acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2400b0:
    // 0x2400b0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_2400b4:
    if (ctx->pc == 0x2400B4u) {
        ctx->pc = 0x2400B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400B0u;
        // 0x2400b4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2400B8u;
        goto label_2400b8;
    }
    ctx->pc = 0x2400B0u;
    {
        const bool branch_taken_0x2400b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400B0u;
        // 0x2400b4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400b0) {
            ctx->pc = 0x240154u;
            goto label_240154;
        }
    }
    ctx->pc = 0x2400B8u;
label_2400b8:
    // 0x2400b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2400b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2400bc:
    // 0x2400bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2400bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2400c0:
    // 0x2400c0: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x2400c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_2400c4:
    // 0x2400c4: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2400c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2400c8:
    // 0x2400c8: 0x40f809  jalr        $v0
label_2400cc:
    if (ctx->pc == 0x2400CCu) {
        ctx->pc = 0x2400CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400C8u;
        // 0x2400cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2400D0u;
        goto label_2400d0;
    }
    ctx->pc = 0x2400C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2400D0u);
        ctx->pc = 0x2400CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400C8u;
        // 0x2400cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2400C8u, 0x2400D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2400D0u;
label_2400d0:
    // 0x2400d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2400d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2400d4:
    // 0x2400d4: 0x262504e0  addiu       $a1, $s1, 0x4E0
    ctx->pc = 0x2400d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1248));
label_2400d8:
    // 0x2400d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2400d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2400dc:
    // 0x2400dc: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x2400dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_2400e0:
    // 0x2400e0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2400e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2400e4:
    // 0x2400e4: 0x40f809  jalr        $v0
label_2400e8:
    if (ctx->pc == 0x2400E8u) {
        ctx->pc = 0x2400E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400E4u;
        // 0x2400e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2400ECu;
        goto label_2400ec;
    }
    ctx->pc = 0x2400E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2400ECu);
        ctx->pc = 0x2400E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400E4u;
        // 0x2400e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2400E4u, 0x2400ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2400ECu;
label_2400ec:
    // 0x2400ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2400ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2400f0:
    // 0x2400f0: 0x26250540  addiu       $a1, $s1, 0x540
    ctx->pc = 0x2400f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1344));
label_2400f4:
    // 0x2400f4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2400f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2400f8:
    // 0x2400f8: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x2400f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_2400fc:
    // 0x2400fc: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2400fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_240100:
    // 0x240100: 0x40f809  jalr        $v0
label_240104:
    if (ctx->pc == 0x240104u) {
        ctx->pc = 0x240104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240100u;
        // 0x240104: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240108u;
        goto label_240108;
    }
    ctx->pc = 0x240100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x240108u);
        ctx->pc = 0x240104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240100u;
        // 0x240104: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240100u, 0x240108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240108u;
label_240108:
    // 0x240108: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x240108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24010c:
    // 0x24010c: 0x26250520  addiu       $a1, $s1, 0x520
    ctx->pc = 0x24010cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
label_240110:
    // 0x240110: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x240110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_240114:
    // 0x240114: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x240114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_240118:
    // 0x240118: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x240118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_24011c:
    // 0x24011c: 0x40f809  jalr        $v0
label_240120:
    if (ctx->pc == 0x240120u) {
        ctx->pc = 0x240120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24011Cu;
        // 0x240120: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240124u;
        goto label_240124;
    }
    ctx->pc = 0x24011Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x240124u);
        ctx->pc = 0x240120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24011Cu;
        // 0x240120: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24011Cu, 0x240124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240124u;
label_240124:
    // 0x240124: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x240124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_240128:
    // 0x240128: 0x26250500  addiu       $a1, $s1, 0x500
    ctx->pc = 0x240128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1280));
label_24012c:
    // 0x24012c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x24012cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_240130:
    // 0x240130: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x240130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_240134:
    // 0x240134: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x240134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_240138:
    // 0x240138: 0x40f809  jalr        $v0
label_24013c:
    if (ctx->pc == 0x24013Cu) {
        ctx->pc = 0x24013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240138u;
        // 0x24013c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240140u;
        goto label_240140;
    }
    ctx->pc = 0x240138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x240140u);
        ctx->pc = 0x24013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240138u;
        // 0x24013c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240138u, 0x240140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240140u;
label_240140:
    // 0x240140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240144:
    // 0x240144: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x240144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_240148:
    // 0x240148: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x240148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24014c:
    // 0x24014c: 0xc08fc8e  jal         func_23F238
label_240150:
    if (ctx->pc == 0x240150u) {
        ctx->pc = 0x240150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24014Cu;
        // 0x240150: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240154u;
        goto label_240154;
    }
    ctx->pc = 0x24014Cu;
    SET_GPR_U32(ctx, 31, 0x240154u);
    ctx->pc = 0x240150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24014Cu;
    // 0x240150: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F238u, 0x24014Cu, 0x240154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240154u;
label_240154:
    // 0x240154: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x240154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_240158:
    // 0x240158: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x240158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_24015c:
    // 0x24015c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24015cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_240160:
    // 0x240160: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_240164:
    if (ctx->pc == 0x240164u) {
        ctx->pc = 0x240164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240160u;
        // 0x240164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240168u;
        goto label_240168;
    }
    ctx->pc = 0x240160u;
    {
        const bool branch_taken_0x240160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240160u;
        // 0x240164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240160) {
            ctx->pc = 0x2401A4u;
            goto label_2401a4;
        }
    }
    ctx->pc = 0x240168u;
label_240168:
    // 0x240168: 0xc089998  jal         func_226660
label_24016c:
    if (ctx->pc == 0x24016Cu) {
        ctx->pc = 0x24016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240168u;
        // 0x24016c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240170u;
        goto label_240170;
    }
    ctx->pc = 0x240168u;
    SET_GPR_U32(ctx, 31, 0x240170u);
    ctx->pc = 0x24016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240168u;
    // 0x24016c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x240168u, 0x240170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240170u;
label_240170:
    // 0x240170: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_240174:
    if (ctx->pc == 0x240174u) {
        ctx->pc = 0x240174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240170u;
        // 0x240174: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240178u;
        goto label_240178;
    }
    ctx->pc = 0x240170u;
    {
        const bool branch_taken_0x240170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240170u;
        // 0x240174: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240170) {
            ctx->pc = 0x2401A4u;
            goto label_2401a4;
        }
    }
    ctx->pc = 0x240178u;
label_240178:
    // 0x240178: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x240178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_24017c:
    // 0x24017c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x24017cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_240180:
    // 0x240180: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_240184:
    // 0x240184: 0x0  nop
    ctx->pc = 0x240184u;
    // NOP
label_240188:
    // 0x240188: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x240188u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_24018c:
    // 0x24018c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24018cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_240190:
    // 0x240190: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x240190u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_240194:
    // 0x240194: 0x4b820858  vmulx.xy    $vf1, $vf1, $vf2x
    ctx->pc = 0x240194u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_240198:
    // 0x240198: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x240198u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_24019c:
    // 0x24019c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x24019cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2401a0:
    // 0x2401a0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2401a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2401a4:
    // 0x2401a4: 0xc62103a4  lwc1        $f1, 0x3A4($s1)
    ctx->pc = 0x2401a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2401a8:
    // 0x2401a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2401a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2401ac:
    // 0x2401ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2401acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2401b0:
    // 0x2401b0: 0x0  nop
    ctx->pc = 0x2401b0u;
    // NOP
label_2401b4:
    // 0x2401b4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2401b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2401b8:
    // 0x2401b8: 0x0  nop
    ctx->pc = 0x2401b8u;
    // NOP
label_2401bc:
    // 0x2401bc: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_2401c0:
    if (ctx->pc == 0x2401C0u) {
        ctx->pc = 0x2401C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401BCu;
        // 0x2401c0: 0xc62003a4  lwc1        $f0, 0x3A4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2401C4u;
        goto label_2401c4;
    }
    ctx->pc = 0x2401BCu;
    {
        const bool branch_taken_0x2401bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2401bc) {
            ctx->pc = 0x2401C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2401BCu;
            // 0x2401c0: 0xc62003a4  lwc1        $f0, 0x3A4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2401E0u;
            goto label_2401e0;
        }
    }
    ctx->pc = 0x2401C4u;
label_2401c4:
    // 0x2401c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2401c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2401c8:
    // 0x2401c8: 0x34214189  ori         $at, $at, 0x4189
    ctx->pc = 0x2401c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16777);
label_2401cc:
    // 0x2401cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2401ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2401d0:
    // 0x2401d0: 0x0  nop
    ctx->pc = 0x2401d0u;
    // NOP
label_2401d4:
    // 0x2401d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2401d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2401d8:
    // 0x2401d8: 0xe62003a4  swc1        $f0, 0x3A4($s1)
    ctx->pc = 0x2401d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 932), bits); }
label_2401dc:
    // 0x2401dc: 0xc62003a4  lwc1        $f0, 0x3A4($s1)
    ctx->pc = 0x2401dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2401e0:
    // 0x2401e0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2401e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2401e4:
    // 0x2401e4: 0x0  nop
    ctx->pc = 0x2401e4u;
    // NOP
label_2401e8:
    // 0x2401e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2401ec:
    if (ctx->pc == 0x2401ECu) {
        ctx->pc = 0x2401ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401E8u;
        // 0x2401ec: 0xe62203a4  swc1        $f2, 0x3A4($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 932), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2401F0u;
        goto label_2401f0;
    }
    ctx->pc = 0x2401E8u;
    {
        const bool branch_taken_0x2401e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2401e8) {
            ctx->pc = 0x2401ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2401E8u;
            // 0x2401ec: 0xe62203a4  swc1        $f2, 0x3A4($s1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 932), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2401F0u;
            goto label_2401f0;
        }
    }
    ctx->pc = 0x2401F0u;
label_2401f0:
    // 0x2401f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2401f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2401f4:
    // 0x2401f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2401f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2401f8:
    // 0x2401f8: 0xc08fd78  jal         func_23F5E0
label_2401fc:
    if (ctx->pc == 0x2401FCu) {
        ctx->pc = 0x2401FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401F8u;
        // 0x2401fc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240200u;
        goto label_240200;
    }
    ctx->pc = 0x2401F8u;
    SET_GPR_U32(ctx, 31, 0x240200u);
    ctx->pc = 0x2401FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401F8u;
    // 0x2401fc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F5E0u, 0x2401F8u, 0x240200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240200u;
label_240200:
    // 0x240200: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x240200u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_240204:
    // 0x240204: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x240204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_240208:
    // 0x240208: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x240208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
label_24020c:
    // 0x24020c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24020cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_240210:
    // 0x240210: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x240210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_240214:
    // 0x240214: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x240214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_240218:
    // 0x240218: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x240218u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_24021c:
    // 0x24021c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_240220:
    if (ctx->pc == 0x240220u) {
        ctx->pc = 0x240220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24021Cu;
        // 0x240220: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240224u;
        goto label_240224;
    }
    ctx->pc = 0x24021Cu;
    {
        const bool branch_taken_0x24021c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24021Cu;
        // 0x240220: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24021c) {
            ctx->pc = 0x240234u;
            goto label_240234;
        }
    }
    ctx->pc = 0x240224u;
label_240224:
    // 0x240224: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x240224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_240228:
    // 0x240228: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x240228u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24022c:
    // 0x24022c: 0x7e2302f0  sq          $v1, 0x2F0($s1)
    ctx->pc = 0x24022cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 752), GPR_VEC(ctx, 3));
label_240230:
    // 0x240230: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x240230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_240234:
    // 0x240234: 0xc08fe74  jal         func_23F9D0
label_240238:
    if (ctx->pc == 0x240238u) {
        ctx->pc = 0x240238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240234u;
        // 0x240238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24023Cu;
        goto label_24023c;
    }
    ctx->pc = 0x240234u;
    SET_GPR_U32(ctx, 31, 0x24023Cu);
    ctx->pc = 0x240238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240234u;
    // 0x240238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F9D0u, 0x240234u, 0x24023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24023Cu;
label_24023c:
    // 0x24023c: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x24023cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_240240:
    // 0x240240: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x240240u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_240244:
    // 0x240244: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_240248:
    if (ctx->pc == 0x240248u) {
        ctx->pc = 0x240248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240244u;
        // 0x240248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24024Cu;
        goto label_24024c;
    }
    ctx->pc = 0x240244u;
    {
        const bool branch_taken_0x240244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240244u;
        // 0x240248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240244) {
            ctx->pc = 0x240260u;
            goto label_240260;
        }
    }
    ctx->pc = 0x24024Cu;
label_24024c:
    // 0x24024c: 0xc088654  jal         func_221950
label_240250:
    if (ctx->pc == 0x240250u) {
        ctx->pc = 0x240250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24024Cu;
        // 0x240250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240254u;
        goto label_240254;
    }
    ctx->pc = 0x24024Cu;
    SET_GPR_U32(ctx, 31, 0x240254u);
    ctx->pc = 0x240250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24024Cu;
    // 0x240250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221950u, 0x24024Cu, 0x240254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240254u;
label_240254:
    // 0x240254: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_240258:
    if (ctx->pc == 0x240258u) {
        ctx->pc = 0x240258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240254u;
        // 0x240258: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24025Cu;
        goto label_24025c;
    }
    ctx->pc = 0x240254u;
    {
        const bool branch_taken_0x240254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240254) {
            ctx->pc = 0x240258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240254u;
            // 0x240258: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240280u;
            goto label_240280;
        }
    }
    ctx->pc = 0x24025Cu;
label_24025c:
    // 0x24025c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24025cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240260:
    // 0x240260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240264:
    // 0x240264: 0xc08f824  jal         func_23E090
label_240268:
    if (ctx->pc == 0x240268u) {
        ctx->pc = 0x240268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240264u;
        // 0x240268: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24026Cu;
        goto label_24026c;
    }
    ctx->pc = 0x240264u;
    SET_GPR_U32(ctx, 31, 0x24026Cu);
    ctx->pc = 0x240268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240264u;
    // 0x240268: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E090u, 0x240264u, 0x24026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24026Cu;
label_24026c:
    // 0x24026c: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x24026cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
label_240270:
    // 0x240270: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x240270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_240274:
    // 0x240274: 0xc089988  jal         func_226620
label_240278:
    if (ctx->pc == 0x240278u) {
        ctx->pc = 0x240278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240274u;
        // 0x240278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24027Cu;
        goto label_24027c;
    }
    ctx->pc = 0x240274u;
    SET_GPR_U32(ctx, 31, 0x24027Cu);
    ctx->pc = 0x240278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240274u;
    // 0x240278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x240274u, 0x24027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24027Cu;
label_24027c:
    // 0x24027c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24027cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_240280:
    // 0x240280: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x240280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_240284:
    // 0x240284: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x240284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_240288:
    // 0x240288: 0x40f809  jalr        $v0
label_24028c:
    if (ctx->pc == 0x24028Cu) {
        ctx->pc = 0x24028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240288u;
        // 0x24028c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240290u;
        goto label_240290;
    }
    ctx->pc = 0x240288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x240290u);
        ctx->pc = 0x24028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240288u;
        // 0x24028c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240288u, 0x240290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240290u;
label_240290:
    // 0x240290: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x240290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_240294:
    // 0x240294: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x240294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_240298:
    // 0x240298: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_24029c:
    if (ctx->pc == 0x24029Cu) {
        ctx->pc = 0x24029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240298u;
        // 0x24029c: 0x8e220384  lw          $v0, 0x384($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2402A0u;
        goto label_2402a0;
    }
    ctx->pc = 0x240298u;
    {
        const bool branch_taken_0x240298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240298) {
            ctx->pc = 0x24029Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240298u;
            // 0x24029c: 0x8e220384  lw          $v0, 0x384($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2402C4u;
            goto label_2402c4;
        }
    }
    ctx->pc = 0x2402A0u;
label_2402a0:
    // 0x2402a0: 0xae200384  sw          $zero, 0x384($s1)
    ctx->pc = 0x2402a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 900), GPR_U32(ctx, 0));
label_2402a4:
    // 0x2402a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2402a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2402a8:
    // 0x2402a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2402a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2402ac:
    // 0x2402ac: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x2402acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_2402b0:
    // 0x2402b0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x2402b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2402b4:
    // 0x2402b4: 0x60f809  jalr        $v1
label_2402b8:
    if (ctx->pc == 0x2402B8u) {
        ctx->pc = 0x2402B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402B4u;
        // 0x2402b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2402BCu;
        goto label_2402bc;
    }
    ctx->pc = 0x2402B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2402BCu);
        ctx->pc = 0x2402B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402B4u;
        // 0x2402b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2402B4u, 0x2402BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2402BCu;
label_2402bc:
    // 0x2402bc: 0x1000006b  b           . + 4 + (0x6B << 2)
label_2402c0:
    if (ctx->pc == 0x2402C0u) {
        ctx->pc = 0x2402C4u;
        goto label_2402c4;
    }
    ctx->pc = 0x2402BCu;
    {
        const bool branch_taken_0x2402bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2402bc) {
            ctx->pc = 0x24046Cu;
            goto label_24046c;
        }
    }
    ctx->pc = 0x2402C4u;
label_2402c4:
    // 0x2402c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2402c8:
    if (ctx->pc == 0x2402C8u) {
        ctx->pc = 0x2402C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402C4u;
        // 0x2402c8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2402CCu;
        goto label_2402cc;
    }
    ctx->pc = 0x2402C4u;
    {
        const bool branch_taken_0x2402c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2402C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402C4u;
        // 0x2402c8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402c4) {
            ctx->pc = 0x2402ECu;
            goto label_2402ec;
        }
    }
    ctx->pc = 0x2402CCu;
label_2402cc:
    // 0x2402cc: 0x3c01417a  lui         $at, 0x417A
    ctx->pc = 0x2402ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16762 << 16));
label_2402d0:
    // 0x2402d0: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x2402d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_2402d4:
    // 0x2402d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2402d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2402d8:
    // 0x2402d8: 0xc44002cc  lwc1        $f0, 0x2CC($v0)
    ctx->pc = 0x2402d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2402dc:
    // 0x2402dc: 0xc62103a0  lwc1        $f1, 0x3A0($s1)
    ctx->pc = 0x2402dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2402e0:
    // 0x2402e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2402e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2402e4:
    // 0x2402e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2402e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2402e8:
    // 0x2402e8: 0xe62103a0  swc1        $f1, 0x3A0($s1)
    ctx->pc = 0x2402e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 928), bits); }
label_2402ec:
    // 0x2402ec: 0xc62003a0  lwc1        $f0, 0x3A0($s1)
    ctx->pc = 0x2402ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2402f0:
    // 0x2402f0: 0x3c01c248  lui         $at, 0xC248
    ctx->pc = 0x2402f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49736 << 16));
label_2402f4:
    // 0x2402f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2402f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2402f8:
    // 0x2402f8: 0x0  nop
    ctx->pc = 0x2402f8u;
    // NOP
label_2402fc:
    // 0x2402fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2402fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240300:
    // 0x240300: 0x0  nop
    ctx->pc = 0x240300u;
    // NOP
label_240304:
    // 0x240304: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_240308:
    if (ctx->pc == 0x240308u) {
        ctx->pc = 0x240308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240304u;
        // 0x240308: 0xe62103a0  swc1        $f1, 0x3A0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 928), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24030Cu;
        goto label_24030c;
    }
    ctx->pc = 0x240304u;
    {
        const bool branch_taken_0x240304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x240304) {
            ctx->pc = 0x240308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240304u;
            // 0x240308: 0xe62103a0  swc1        $f1, 0x3A0($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 928), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24030Cu;
            goto label_24030c;
        }
    }
    ctx->pc = 0x24030Cu;
label_24030c:
    // 0x24030c: 0xc0e87c0  jal         func_3A1F00
label_240310:
    if (ctx->pc == 0x240310u) {
        ctx->pc = 0x240310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24030Cu;
        // 0x240310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240314u;
        goto label_240314;
    }
    ctx->pc = 0x24030Cu;
    SET_GPR_U32(ctx, 31, 0x240314u);
    ctx->pc = 0x240310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24030Cu;
    // 0x240310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x24030Cu, 0x240314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240314u;
label_240314:
    // 0x240314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x240314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240318:
    // 0x240318: 0xc0e87c0  jal         func_3A1F00
label_24031c:
    if (ctx->pc == 0x24031Cu) {
        ctx->pc = 0x24031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240318u;
        // 0x24031c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240320u;
        goto label_240320;
    }
    ctx->pc = 0x240318u;
    SET_GPR_U32(ctx, 31, 0x240320u);
    ctx->pc = 0x24031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240318u;
    // 0x24031c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x240318u, 0x240320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240320u;
label_240320:
    // 0x240320: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x240320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_240324:
    // 0x240324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240328:
    // 0x240328: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x240328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24032c:
    // 0x24032c: 0xc08f3ae  jal         func_23CEB8
label_240330:
    if (ctx->pc == 0x240330u) {
        ctx->pc = 0x240330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24032Cu;
        // 0x240330: 0xc62e03a0  lwc1        $f14, 0x3A0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x240334u;
        goto label_240334;
    }
    ctx->pc = 0x24032Cu;
    SET_GPR_U32(ctx, 31, 0x240334u);
    ctx->pc = 0x240330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24032Cu;
    // 0x240330: 0xc62e03a0  lwc1        $f14, 0x3A0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CEB8u, 0x24032Cu, 0x240334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240334u;
label_240334:
    // 0x240334: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x240334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_240338:
    // 0x240338: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x240338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_24033c:
    // 0x24033c: 0x8c4547c4  lw          $a1, 0x47C4($v0)
    ctx->pc = 0x24033cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_240340:
    // 0x240340: 0x26e64b00  addiu       $a2, $s7, 0x4B00
    ctx->pc = 0x240340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
label_240344:
    // 0x240344: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x240344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_240348:
    // 0x240348: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x240348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_24034c:
    // 0x24034c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x24034cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_240350:
    // 0x240350: 0x8ca40040  lw          $a0, 0x40($a1)
    ctx->pc = 0x240350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_240354:
    // 0x240354: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x240354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_240358:
    // 0x240358: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x240358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24035c:
    // 0x24035c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_240360:
    // 0x240360: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x240360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_240364:
    // 0x240364: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x240364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_240368:
    // 0x240368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x240368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24036c:
    // 0x24036c: 0x0  nop
    ctx->pc = 0x24036cu;
    // NOP
label_240370:
    // 0x240370: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
label_240374:
    if (ctx->pc == 0x240374u) {
        ctx->pc = 0x240374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240370u;
        // 0x240374: 0x8e220384  lw          $v0, 0x384($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240378u;
        goto label_240378;
    }
    ctx->pc = 0x240370u;
    {
        const bool branch_taken_0x240370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240370) {
            ctx->pc = 0x240374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240370u;
            // 0x240374: 0x8e220384  lw          $v0, 0x384($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240410u;
            goto label_240410;
        }
    }
    ctx->pc = 0x240378u;
label_240378:
    // 0x240378: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x240378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_24037c:
    // 0x24037c: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x24037cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
label_240380:
    // 0x240380: 0xc089974  jal         func_2265D0
label_240384:
    if (ctx->pc == 0x240384u) {
        ctx->pc = 0x240384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240380u;
        // 0x240384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240388u;
        goto label_240388;
    }
    ctx->pc = 0x240380u;
    SET_GPR_U32(ctx, 31, 0x240388u);
    ctx->pc = 0x240384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240380u;
    // 0x240384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x240380u, 0x240388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240388u;
label_240388:
    // 0x240388: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x240388u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_24038c:
    // 0x24038c: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x24038cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_240390:
    // 0x240390: 0xc0e409a  jal         func_390268
label_240394:
    if (ctx->pc == 0x240394u) {
        ctx->pc = 0x240394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240390u;
        // 0x240394: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240398u;
        goto label_240398;
    }
    ctx->pc = 0x240390u;
    SET_GPR_U32(ctx, 31, 0x240398u);
    ctx->pc = 0x240394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240390u;
    // 0x240394: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x240390u, 0x240398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240398u;
label_240398:
    // 0x240398: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
label_24039c:
    if (ctx->pc == 0x24039Cu) {
        ctx->pc = 0x24039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240398u;
        // 0x24039c: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2403A0u;
        goto label_2403a0;
    }
    ctx->pc = 0x240398u;
    {
        const bool branch_taken_0x240398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x24039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240398u;
        // 0x24039c: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240398) {
            ctx->pc = 0x2403B8u;
            goto label_2403b8;
        }
    }
    ctx->pc = 0x2403A0u;
label_2403a0:
    // 0x2403a0: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2403a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_2403a4:
    // 0x2403a4: 0xc0e409a  jal         func_390268
label_2403a8:
    if (ctx->pc == 0x2403A8u) {
        ctx->pc = 0x2403A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403A4u;
        // 0x2403a8: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2403ACu;
        goto label_2403ac;
    }
    ctx->pc = 0x2403A4u;
    SET_GPR_U32(ctx, 31, 0x2403ACu);
    ctx->pc = 0x2403A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2403A4u;
    // 0x2403a8: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2403A4u, 0x2403ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2403ACu;
label_2403ac:
    // 0x2403ac: 0x54510011  bnel        $v0, $s1, . + 4 + (0x11 << 2)
label_2403b0:
    if (ctx->pc == 0x2403B0u) {
        ctx->pc = 0x2403B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403ACu;
        // 0x2403b0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2403B4u;
        goto label_2403b4;
    }
    ctx->pc = 0x2403ACu;
    {
        const bool branch_taken_0x2403ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2403ac) {
            ctx->pc = 0x2403B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2403ACu;
            // 0x2403b0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2403F4u;
            goto label_2403f4;
        }
    }
    ctx->pc = 0x2403B4u;
label_2403b4:
    // 0x2403b4: 0x8e03489c  lw          $v1, 0x489C($s0)
    ctx->pc = 0x2403b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_2403b8:
    // 0x2403b8: 0x94620150  lhu         $v0, 0x150($v1)
    ctx->pc = 0x2403b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
label_2403bc:
    // 0x2403bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2403bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2403c0:
    // 0x2403c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2403c4:
    if (ctx->pc == 0x2403C4u) {
        ctx->pc = 0x2403C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403C0u;
        // 0x2403c4: 0x2902b  sltu        $s2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2403C8u;
        goto label_2403c8;
    }
    ctx->pc = 0x2403C0u;
    {
        const bool branch_taken_0x2403c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2403C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403C0u;
        // 0x2403c4: 0x2902b  sltu        $s2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403c0) {
            ctx->pc = 0x2403F0u;
            goto label_2403f0;
        }
    }
    ctx->pc = 0x2403C8u;
label_2403c8:
    // 0x2403c8: 0xc067b9c  jal         func_19EE70
label_2403cc:
    if (ctx->pc == 0x2403CCu) {
        ctx->pc = 0x2403CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403C8u;
        // 0x2403cc: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2403D0u;
        goto label_2403d0;
    }
    ctx->pc = 0x2403C8u;
    SET_GPR_U32(ctx, 31, 0x2403D0u);
    ctx->pc = 0x2403CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2403C8u;
    // 0x2403cc: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2403C8u, 0x2403D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2403D0u;
label_2403d0:
    // 0x2403d0: 0xc0747ee  jal         func_1D1FB8
label_2403d4:
    if (ctx->pc == 0x2403D4u) {
        ctx->pc = 0x2403D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403D0u;
        // 0x2403d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2403D8u;
        goto label_2403d8;
    }
    ctx->pc = 0x2403D0u;
    SET_GPR_U32(ctx, 31, 0x2403D8u);
    ctx->pc = 0x2403D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2403D0u;
    // 0x2403d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1FB8u, 0x2403D0u, 0x2403D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2403D8u;
label_2403d8:
    // 0x2403d8: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x2403d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_2403dc:
    // 0x2403dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2403dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2403e0:
    // 0x2403e0: 0xa0400118  sb          $zero, 0x118($v0)
    ctx->pc = 0x2403e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 280), (uint8_t)GPR_U32(ctx, 0));
label_2403e4:
    // 0x2403e4: 0x8e03489c  lw          $v1, 0x489C($s0)
    ctx->pc = 0x2403e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_2403e8:
    // 0x2403e8: 0xac72014c  sw          $s2, 0x14C($v1)
    ctx->pc = 0x2403e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 18));
label_2403ec:
    // 0x2403ec: 0xa4640152  sh          $a0, 0x152($v1)
    ctx->pc = 0x2403ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 338), (uint16_t)GPR_U32(ctx, 4));
label_2403f0:
    // 0x2403f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2403f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2403f4:
    // 0x2403f4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2403f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2403f8:
    // 0x2403f8: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2403f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_2403fc:
    // 0x2403fc: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x2403fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_240400:
    // 0x240400: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x240400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_240404:
    // 0x240404: 0x40f809  jalr        $v0
label_240408:
    if (ctx->pc == 0x240408u) {
        ctx->pc = 0x240408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240404u;
        // 0x240408: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24040Cu;
        goto label_24040c;
    }
    ctx->pc = 0x240404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24040Cu);
        ctx->pc = 0x240408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240404u;
        // 0x240408: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240404u, 0x24040Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24040Cu;
label_24040c:
    // 0x24040c: 0x8e220384  lw          $v0, 0x384($s1)
    ctx->pc = 0x24040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
label_240410:
    // 0x240410: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x240410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_240414:
    // 0x240414: 0x2c43003c  sltiu       $v1, $v0, 0x3C
    ctx->pc = 0x240414u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_240418:
    // 0x240418: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_24041c:
    if (ctx->pc == 0x24041Cu) {
        ctx->pc = 0x24041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240418u;
        // 0x24041c: 0xae220384  sw          $v0, 0x384($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 900), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240420u;
        goto label_240420;
    }
    ctx->pc = 0x240418u;
    {
        const bool branch_taken_0x240418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240418u;
        // 0x24041c: 0xae220384  sw          $v0, 0x384($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 900), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240418) {
            ctx->pc = 0x24046Cu;
            goto label_24046c;
        }
    }
    ctx->pc = 0x240420u;
label_240420:
    // 0x240420: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x240420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_240424:
    // 0x240424: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_240428:
    if (ctx->pc == 0x240428u) {
        ctx->pc = 0x24042Cu;
        goto label_24042c;
    }
    ctx->pc = 0x240424u;
    {
        const bool branch_taken_0x240424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240424) {
            ctx->pc = 0x24046Cu;
            goto label_24046c;
        }
    }
    ctx->pc = 0x24042Cu;
label_24042c:
    // 0x24042c: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x24042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_240430:
    // 0x240430: 0x2c42003c  sltiu       $v0, $v0, 0x3C
    ctx->pc = 0x240430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_240434:
    // 0x240434: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_240438:
    if (ctx->pc == 0x240438u) {
        ctx->pc = 0x24043Cu;
        goto label_24043c;
    }
    ctx->pc = 0x240434u;
    {
        const bool branch_taken_0x240434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240434) {
            ctx->pc = 0x24046Cu;
            goto label_24046c;
        }
    }
    ctx->pc = 0x24043Cu;
label_24043c:
    // 0x24043c: 0xae200384  sw          $zero, 0x384($s1)
    ctx->pc = 0x24043cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 900), GPR_U32(ctx, 0));
label_240440:
    // 0x240440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240444:
    // 0x240444: 0xc086c2e  jal         func_21B0B8
label_240448:
    if (ctx->pc == 0x240448u) {
        ctx->pc = 0x240448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240444u;
        // 0x240448: 0x26250390  addiu       $a1, $s1, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24044Cu;
        goto label_24044c;
    }
    ctx->pc = 0x240444u;
    SET_GPR_U32(ctx, 31, 0x24044Cu);
    ctx->pc = 0x240448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240444u;
    // 0x240448: 0x26250390  addiu       $a1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x240444u, 0x24044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24044Cu;
label_24044c:
    // 0x24044c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24044cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240450:
    // 0x240450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240454:
    // 0x240454: 0xc08f824  jal         func_23E090
label_240458:
    if (ctx->pc == 0x240458u) {
        ctx->pc = 0x240458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240454u;
        // 0x240458: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24045Cu;
        goto label_24045c;
    }
    ctx->pc = 0x240454u;
    SET_GPR_U32(ctx, 31, 0x24045Cu);
    ctx->pc = 0x240458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240454u;
    // 0x240458: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E090u, 0x240454u, 0x24045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24045Cu;
label_24045c:
    // 0x24045c: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x24045cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
label_240460:
    // 0x240460: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x240460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_240464:
    // 0x240464: 0xc089988  jal         func_226620
label_240468:
    if (ctx->pc == 0x240468u) {
        ctx->pc = 0x240468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240464u;
        // 0x240468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24046Cu;
        goto label_24046c;
    }
    ctx->pc = 0x240464u;
    SET_GPR_U32(ctx, 31, 0x24046Cu);
    ctx->pc = 0x240468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240464u;
    // 0x240468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x240464u, 0x24046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24046Cu;
label_24046c:
    // 0x24046c: 0xc08f632  jal         func_23D8C8
label_240470:
    if (ctx->pc == 0x240470u) {
        ctx->pc = 0x240470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24046Cu;
        // 0x240470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240474u;
        goto label_240474;
    }
    ctx->pc = 0x24046Cu;
    SET_GPR_U32(ctx, 31, 0x240474u);
    ctx->pc = 0x240470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24046Cu;
    // 0x240470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D8C8u, 0x24046Cu, 0x240474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240474u;
label_240474:
    // 0x240474: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x240474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_240478:
    // 0x240478: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x240478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24047c:
    // 0x24047c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x24047cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_240480:
    // 0x240480: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x240480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_240484:
    // 0x240484: 0x60f809  jalr        $v1
label_240488:
    if (ctx->pc == 0x240488u) {
        ctx->pc = 0x240488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240484u;
        // 0x240488: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24048Cu;
        goto label_24048c;
    }
    ctx->pc = 0x240484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24048Cu);
        ctx->pc = 0x240488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240484u;
        // 0x240488: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240484u, 0x24048Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24048Cu;
label_24048c:
    // 0x24048c: 0xc088edc  jal         func_223B70
label_240490:
    if (ctx->pc == 0x240490u) {
        ctx->pc = 0x240490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24048Cu;
        // 0x240490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240494u;
        goto label_240494;
    }
    ctx->pc = 0x24048Cu;
    SET_GPR_U32(ctx, 31, 0x240494u);
    ctx->pc = 0x240490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24048Cu;
    // 0x240490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x24048Cu, 0x240494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240494u;
label_240494:
    // 0x240494: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_240498:
    if (ctx->pc == 0x240498u) {
        ctx->pc = 0x24049Cu;
        goto label_24049c;
    }
    ctx->pc = 0x240494u;
    {
        const bool branch_taken_0x240494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240494) {
            ctx->pc = 0x240594u;
            goto label_240594;
        }
    }
    ctx->pc = 0x24049Cu;
label_24049c:
    // 0x24049c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x24049cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_2404a0:
    // 0x2404a0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2404a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2404a4:
    // 0x2404a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2404a8:
    if (ctx->pc == 0x2404A8u) {
        ctx->pc = 0x2404A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404A4u;
        // 0x2404a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404ACu;
        goto label_2404ac;
    }
    ctx->pc = 0x2404A4u;
    {
        const bool branch_taken_0x2404a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2404A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404A4u;
        // 0x2404a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404a4) {
            ctx->pc = 0x2404D0u;
            goto label_2404d0;
        }
    }
    ctx->pc = 0x2404ACu;
label_2404ac:
    // 0x2404ac: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2404acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_2404b0:
    // 0x2404b0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2404b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_2404b4:
    // 0x2404b4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2404b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2404b8:
    // 0x2404b8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2404b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_2404bc:
    // 0x2404bc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2404bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_2404c0:
    // 0x2404c0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2404c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_2404c4:
    // 0x2404c4: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x2404c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
label_2404c8:
    // 0x2404c8: 0xc086c52  jal         func_21B148
label_2404cc:
    if (ctx->pc == 0x2404CCu) {
        ctx->pc = 0x2404CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404C8u;
        // 0x2404cc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404D0u;
        goto label_2404d0;
    }
    ctx->pc = 0x2404C8u;
    SET_GPR_U32(ctx, 31, 0x2404D0u);
    ctx->pc = 0x2404CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2404C8u;
    // 0x2404cc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B148u, 0x2404C8u, 0x2404D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404D0u;
label_2404d0:
    // 0x2404d0: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x2404d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_2404d4:
    // 0x2404d4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2404d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2404d8:
    // 0x2404d8: 0xc043d5e  jal         func_10F578
label_2404dc:
    if (ctx->pc == 0x2404DCu) {
        ctx->pc = 0x2404DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404D8u;
        // 0x2404dc: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404E0u;
        goto label_2404e0;
    }
    ctx->pc = 0x2404D8u;
    SET_GPR_U32(ctx, 31, 0x2404E0u);
    ctx->pc = 0x2404DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2404D8u;
    // 0x2404dc: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2404D8u, 0x2404E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404E0u;
label_2404e0:
    // 0x2404e0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_2404e4:
    if (ctx->pc == 0x2404E4u) {
        ctx->pc = 0x2404E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404E0u;
        // 0x2404e4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404E8u;
        goto label_2404e8;
    }
    ctx->pc = 0x2404E0u;
    {
        const bool branch_taken_0x2404e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2404E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404E0u;
        // 0x2404e4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404e0) {
            ctx->pc = 0x240594u;
            goto label_240594;
        }
    }
    ctx->pc = 0x2404E8u;
label_2404e8:
    // 0x2404e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2404e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2404ec:
    // 0x2404ec: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2404ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2404f0:
    // 0x2404f0: 0x84640224  lh          $a0, 0x224($v1)
    ctx->pc = 0x2404f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2404f4:
    // 0x2404f4: 0x18800027  blez        $a0, . + 4 + (0x27 << 2)
label_2404f8:
    if (ctx->pc == 0x2404F8u) {
        ctx->pc = 0x2404F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404F4u;
        // 0x2404f8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404FCu;
        goto label_2404fc;
    }
    ctx->pc = 0x2404F4u;
    {
        const bool branch_taken_0x2404f4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2404F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404F4u;
        // 0x2404f8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404f4) {
            ctx->pc = 0x240594u;
            goto label_240594;
        }
    }
    ctx->pc = 0x2404FCu;
label_2404fc:
    // 0x2404fc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2404fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_240500:
    // 0x240500: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x240500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_240504:
    // 0x240504: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x240504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_240508:
    // 0x240508: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x240508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_24050c:
    // 0x24050c: 0x26350090  addiu       $s5, $s1, 0x90
    ctx->pc = 0x24050cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_240510:
    // 0x240510: 0x24120228  addiu       $s2, $zero, 0x228
    ctx->pc = 0x240510u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_240514:
    // 0x240514: 0x0  nop
    ctx->pc = 0x240514u;
    // NOP
label_240518:
    // 0x240518: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x240518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_24051c:
    // 0x24051c: 0xc0e409a  jal         func_390268
label_240520:
    if (ctx->pc == 0x240520u) {
        ctx->pc = 0x240520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24051Cu;
        // 0x240520: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240524u;
        goto label_240524;
    }
    ctx->pc = 0x24051Cu;
    SET_GPR_U32(ctx, 31, 0x240524u);
    ctx->pc = 0x240520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24051Cu;
    // 0x240520: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x24051Cu, 0x240524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240524u;
label_240524:
    // 0x240524: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_240528:
    if (ctx->pc == 0x240528u) {
        ctx->pc = 0x240528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240524u;
        // 0x240528: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24052Cu;
        goto label_24052c;
    }
    ctx->pc = 0x240524u;
    {
        const bool branch_taken_0x240524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240524u;
        // 0x240528: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240524) {
            ctx->pc = 0x240580u;
            goto label_240580;
        }
    }
    ctx->pc = 0x24052Cu;
label_24052c:
    // 0x24052c: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x24052cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_240530:
    // 0x240530: 0x86a40002  lh          $a0, 0x2($s5)
    ctx->pc = 0x240530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_240534:
    // 0x240534: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x240534u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_240538:
    // 0x240538: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x240538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_24053c:
    // 0x24053c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x24053cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_240540:
    // 0x240540: 0xc0cdb38  jal         func_336CE0
label_240544:
    if (ctx->pc == 0x240544u) {
        ctx->pc = 0x240544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240540u;
        // 0x240544: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240548u;
        goto label_240548;
    }
    ctx->pc = 0x240540u;
    SET_GPR_U32(ctx, 31, 0x240548u);
    ctx->pc = 0x240544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240540u;
    // 0x240544: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x240540u, 0x240548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240548u;
label_240548:
    // 0x240548: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x240548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24054c:
    // 0x24054c: 0x0  nop
    ctx->pc = 0x24054cu;
    // NOP
label_240550:
    // 0x240550: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_240554:
    if (ctx->pc == 0x240554u) {
        ctx->pc = 0x240554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240550u;
        // 0x240554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240558u;
        goto label_240558;
    }
    ctx->pc = 0x240550u;
    {
        const bool branch_taken_0x240550 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240550u;
        // 0x240554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240550) {
            ctx->pc = 0x24057Cu;
            goto label_24057c;
        }
    }
    ctx->pc = 0x240558u;
label_240558:
    // 0x240558: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x240558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_24055c:
    // 0x24055c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x24055cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_240560:
    // 0x240560: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x240560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_240564:
    // 0x240564: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x240564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_240568:
    // 0x240568: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x240568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_24056c:
    // 0x24056c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x24056cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_240570:
    // 0x240570: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x240570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_240574:
    // 0x240574: 0xc086c7c  jal         func_21B1F0
label_240578:
    if (ctx->pc == 0x240578u) {
        ctx->pc = 0x240578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240574u;
        // 0x240578: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24057Cu;
        goto label_24057c;
    }
    ctx->pc = 0x240574u;
    SET_GPR_U32(ctx, 31, 0x24057Cu);
    ctx->pc = 0x240578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240574u;
    // 0x240578: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B1F0u, 0x240574u, 0x24057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24057Cu;
label_24057c:
    // 0x24057c: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x24057cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_240580:
    // 0x240580: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_240584:
    // 0x240584: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x240584u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_240588:
    // 0x240588: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x240588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24058c:
    // 0x24058c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_240590:
    if (ctx->pc == 0x240590u) {
        ctx->pc = 0x240590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24058Cu;
        // 0x240590: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240594u;
        goto label_240594;
    }
    ctx->pc = 0x24058Cu;
    {
        const bool branch_taken_0x24058c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24058Cu;
        // 0x240590: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24058c) {
            ctx->pc = 0x240518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240518;
        }
    }
    ctx->pc = 0x240594u;
label_240594:
    // 0x240594: 0xc08c07c  jal         func_2301F0
label_240598:
    if (ctx->pc == 0x240598u) {
        ctx->pc = 0x240598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240594u;
        // 0x240598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24059Cu;
        goto label_24059c;
    }
    ctx->pc = 0x240594u;
    SET_GPR_U32(ctx, 31, 0x24059Cu);
    ctx->pc = 0x240598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240594u;
    // 0x240598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301F0u, 0x240594u, 0x24059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24059Cu;
label_24059c:
    // 0x24059c: 0xc087a50  jal         func_21E940
label_2405a0:
    if (ctx->pc == 0x2405A0u) {
        ctx->pc = 0x2405A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24059Cu;
        // 0x2405a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405A4u;
        goto label_2405a4;
    }
    ctx->pc = 0x24059Cu;
    SET_GPR_U32(ctx, 31, 0x2405A4u);
    ctx->pc = 0x2405A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24059Cu;
    // 0x2405a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E940u, 0x24059Cu, 0x2405A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405A4u;
label_2405a4:
    // 0x2405a4: 0xc087bec  jal         func_21EFB0
label_2405a8:
    if (ctx->pc == 0x2405A8u) {
        ctx->pc = 0x2405A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405A4u;
        // 0x2405a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405ACu;
        goto label_2405ac;
    }
    ctx->pc = 0x2405A4u;
    SET_GPR_U32(ctx, 31, 0x2405ACu);
    ctx->pc = 0x2405A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405A4u;
    // 0x2405a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EFB0u, 0x2405A4u, 0x2405ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405ACu;
label_2405ac:
    // 0x2405ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2405acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2405b0:
    // 0x2405b0: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x2405b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_2405b4:
    // 0x2405b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2405b8:
    if (ctx->pc == 0x2405B8u) {
        ctx->pc = 0x2405B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405B4u;
        // 0x2405b8: 0xa22301b3  sb          $v1, 0x1B3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 435), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405BCu;
        goto label_2405bc;
    }
    ctx->pc = 0x2405B4u;
    {
        const bool branch_taken_0x2405b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2405B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405B4u;
        // 0x2405b8: 0xa22301b3  sb          $v1, 0x1B3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 435), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405b4) {
            ctx->pc = 0x2405D8u;
            goto label_2405d8;
        }
    }
    ctx->pc = 0x2405BCu;
label_2405bc:
    // 0x2405bc: 0xc089fac  jal         func_227EB0
label_2405c0:
    if (ctx->pc == 0x2405C0u) {
        ctx->pc = 0x2405C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405BCu;
        // 0x2405c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405C4u;
        goto label_2405c4;
    }
    ctx->pc = 0x2405BCu;
    SET_GPR_U32(ctx, 31, 0x2405C4u);
    ctx->pc = 0x2405C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405BCu;
    // 0x2405c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2405BCu, 0x2405C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405C4u;
label_2405c4:
    // 0x2405c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2405c8:
    if (ctx->pc == 0x2405C8u) {
        ctx->pc = 0x2405C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405C4u;
        // 0x2405c8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405CCu;
        goto label_2405cc;
    }
    ctx->pc = 0x2405C4u;
    {
        const bool branch_taken_0x2405c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2405C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405C4u;
        // 0x2405c8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405c4) {
            ctx->pc = 0x2405D8u;
            goto label_2405d8;
        }
    }
    ctx->pc = 0x2405CCu;
label_2405cc:
    // 0x2405cc: 0x8e2501a0  lw          $a1, 0x1A0($s1)
    ctx->pc = 0x2405ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_2405d0:
    // 0x2405d0: 0xc0cfc44  jal         func_33F110
label_2405d4:
    if (ctx->pc == 0x2405D4u) {
        ctx->pc = 0x2405D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405D0u;
        // 0x2405d4: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405D8u;
        goto label_2405d8;
    }
    ctx->pc = 0x2405D0u;
    SET_GPR_U32(ctx, 31, 0x2405D8u);
    ctx->pc = 0x2405D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405D0u;
    // 0x2405d4: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F110u, 0x2405D0u, 0x2405D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405D8u;
label_2405d8:
    // 0x2405d8: 0xc089d28  jal         func_2274A0
label_2405dc:
    if (ctx->pc == 0x2405DCu) {
        ctx->pc = 0x2405DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405D8u;
        // 0x2405dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405E0u;
        goto label_2405e0;
    }
    ctx->pc = 0x2405D8u;
    SET_GPR_U32(ctx, 31, 0x2405E0u);
    ctx->pc = 0x2405DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405D8u;
    // 0x2405dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A0u, 0x2405D8u, 0x2405E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405E0u;
label_2405e0:
    // 0x2405e0: 0x8e25056c  lw          $a1, 0x56C($s1)
    ctx->pc = 0x2405e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
label_2405e4:
    // 0x2405e4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_2405e8:
    if (ctx->pc == 0x2405E8u) {
        ctx->pc = 0x2405E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405E4u;
        // 0x2405e8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405ECu;
        goto label_2405ec;
    }
    ctx->pc = 0x2405E4u;
    {
        const bool branch_taken_0x2405e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2405E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405E4u;
        // 0x2405e8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405e4) {
            ctx->pc = 0x240608u;
            goto label_240608;
        }
    }
    ctx->pc = 0x2405ECu;
label_2405ec:
    // 0x2405ec: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2405ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2405f0:
    // 0x2405f0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2405f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2405f4:
    // 0x2405f4: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2405f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2405f8:
    // 0x2405f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2405fc:
    if (ctx->pc == 0x2405FCu) {
        ctx->pc = 0x240600u;
        goto label_240600;
    }
    ctx->pc = 0x2405F8u;
    {
        const bool branch_taken_0x2405f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2405f8) {
            ctx->pc = 0x240608u;
            goto label_240608;
        }
    }
    ctx->pc = 0x240600u;
label_240600:
    // 0x240600: 0xae20056c  sw          $zero, 0x56C($s1)
    ctx->pc = 0x240600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1388), GPR_U32(ctx, 0));
label_240604:
    // 0x240604: 0xae200570  sw          $zero, 0x570($s1)
    ctx->pc = 0x240604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 0));
label_240608:
    // 0x240608: 0xc0866b4  jal         func_219AD0
label_24060c:
    if (ctx->pc == 0x24060Cu) {
        ctx->pc = 0x24060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240608u;
        // 0x24060c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240610u;
        goto label_240610;
    }
    ctx->pc = 0x240608u;
    SET_GPR_U32(ctx, 31, 0x240610u);
    ctx->pc = 0x24060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240608u;
    // 0x24060c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219AD0u, 0x240608u, 0x240610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240610u;
label_240610:
    // 0x240610: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x240610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_240614:
    // 0x240614: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_240618:
    if (ctx->pc == 0x240618u) {
        ctx->pc = 0x240618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240614u;
        // 0x240618: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24061Cu;
        goto label_24061c;
    }
    ctx->pc = 0x240614u;
    {
        const bool branch_taken_0x240614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240614u;
        // 0x240618: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240614) {
            ctx->pc = 0x24074Cu;
            goto label_24074c;
        }
    }
    ctx->pc = 0x24061Cu;
label_24061c:
    // 0x24061c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_240620:
    // 0x240620: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x240620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_240624:
    // 0x240624: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x240624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_240628:
    // 0x240628: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x240628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_24062c:
    // 0x24062c: 0x40f809  jalr        $v0
label_240630:
    if (ctx->pc == 0x240630u) {
        ctx->pc = 0x240630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24062Cu;
        // 0x240630: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240634u;
        goto label_240634;
    }
    ctx->pc = 0x24062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x240634u);
        ctx->pc = 0x240630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24062Cu;
        // 0x240630: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24062Cu, 0x240634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240634u;
label_240634:
    // 0x240634: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x240634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_240638:
    // 0x240638: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x240638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_24063c:
    // 0x24063c: 0xc0cd940  jal         func_336500
label_240640:
    if (ctx->pc == 0x240640u) {
        ctx->pc = 0x240640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24063Cu;
        // 0x240640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240644u;
        goto label_240644;
    }
    ctx->pc = 0x24063Cu;
    SET_GPR_U32(ctx, 31, 0x240644u);
    ctx->pc = 0x240640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24063Cu;
    // 0x240640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x24063Cu, 0x240644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240644u;
label_240644:
    // 0x240644: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x240644u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_240648:
    // 0x240648: 0x26e24b00  addiu       $v0, $s7, 0x4B00
    ctx->pc = 0x240648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
label_24064c:
    // 0x24064c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x24064cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_240650:
    // 0x240650: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x240650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_240654:
    // 0x240654: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x240654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_240658:
    // 0x240658: 0xc0cd940  jal         func_336500
label_24065c:
    if (ctx->pc == 0x24065Cu) {
        ctx->pc = 0x24065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240658u;
        // 0x24065c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240660u;
        goto label_240660;
    }
    ctx->pc = 0x240658u;
    SET_GPR_U32(ctx, 31, 0x240660u);
    ctx->pc = 0x24065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240658u;
    // 0x24065c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x240658u, 0x240660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240660u;
label_240660:
    // 0x240660: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x240660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_240664:
    // 0x240664: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x240664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_240668:
    // 0x240668: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x240668u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_24066c:
    // 0x24066c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24066cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_240670:
    // 0x240670: 0xdba50080  lqc2        $vf5, 0x80($sp)
    ctx->pc = 0x240670u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_240674:
    // 0x240674: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x240674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_240678:
    // 0x240678: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x240678u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24067c:
    // 0x24067c: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x24067cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_240680:
    // 0x240680: 0xdba100b0  lqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x240680u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_240684:
    // 0x240684: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x240684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_240688:
    // 0x240688: 0x4be320bd  vmadday.xyzw $ACC, $vf4, $vf3y
    ctx->pc = 0x240688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_24068c:
    // 0x24068c: 0x4be310be  vmaddaz.xyzw $ACC, $vf2, $vf3z
    ctx->pc = 0x24068cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_240690:
    // 0x240690: 0x4be308cb  vmaddw.xyzw $vf3, $vf1, $vf3w
    ctx->pc = 0x240690u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_240694:
    // 0x240694: 0xfba30140  sqc2        $vf3, 0x140($sp)
    ctx->pc = 0x240694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[3]));
label_240698:
    // 0x240698: 0xf8430000  sqc2        $vf3, 0x0($v0)
    ctx->pc = 0x240698u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_24069c:
    // 0x24069c: 0x461fff2  bgez        $v1, . + 4 + (-0xE << 2)
label_2406a0:
    if (ctx->pc == 0x2406A0u) {
        ctx->pc = 0x2406A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24069Cu;
        // 0x2406a0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2406A4u;
        goto label_2406a4;
    }
    ctx->pc = 0x24069Cu;
    {
        const bool branch_taken_0x24069c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2406A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24069Cu;
        // 0x2406a0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24069c) {
            ctx->pc = 0x240668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240668;
        }
    }
    ctx->pc = 0x2406A4u;
label_2406a4:
    // 0x2406a4: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x2406a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2406a8:
    // 0x2406a8: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x2406a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2406ac:
    // 0x2406ac: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x2406acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2406b0:
    // 0x2406b0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2406b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2406b4:
    // 0x2406b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2406b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2406b8:
    // 0x2406b8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2406b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2406bc:
    // 0x2406bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2406bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2406c0:
    // 0x2406c0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2406c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2406c4:
    // 0x2406c4: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x2406c4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_2406c8:
    // 0x2406c8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2406c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2406cc:
    // 0x2406cc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2406ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2406d0:
    // 0x2406d0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2406d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2406d4:
    // 0x2406d4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2406d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2406d8:
    // 0x2406d8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2406d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2406dc:
    // 0x2406dc: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2406dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_2406e0:
    // 0x2406e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2406e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2406e4:
    // 0x2406e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2406e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2406e8:
    // 0x2406e8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2406e8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2406ec:
    // 0x2406ec: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2406ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2406f0:
    // 0x2406f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2406f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2406f4:
    // 0x2406f4: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2406f4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_2406f8:
    // 0x2406f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2406f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2406fc:
    // 0x2406fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2406fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_240700:
    // 0x240700: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x240700u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_240704:
    // 0x240704: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x240704u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_240708:
    // 0x240708: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x240708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_24070c:
    // 0x24070c: 0x7ba50120  lq          $a1, 0x120($sp)
    ctx->pc = 0x24070cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_240710:
    // 0x240710: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x240710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_240714:
    // 0x240714: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x240714u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_240718:
    // 0x240718: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x240718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_24071c:
    // 0x24071c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24071cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_240720:
    // 0x240720: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x240720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_240724:
    // 0x240724: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x240724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_240728:
    // 0x240728: 0xe6210584  swc1        $f1, 0x584($s1)
    ctx->pc = 0x240728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1412), bits); }
label_24072c:
    // 0x24072c: 0xe6200580  swc1        $f0, 0x580($s1)
    ctx->pc = 0x24072cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1408), bits); }
label_240730:
    // 0x240730: 0xe6220588  swc1        $f2, 0x588($s1)
    ctx->pc = 0x240730u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
label_240734:
    // 0x240734: 0x7fa400c0  sq          $a0, 0xC0($sp)
    ctx->pc = 0x240734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 4));
label_240738:
    // 0x240738: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x240738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_24073c:
    // 0x24073c: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x24073cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
label_240740:
    // 0x240740: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x240740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_240744:
    // 0x240744: 0x10000008  b           . + 4 + (0x8 << 2)
label_240748:
    if (ctx->pc == 0x240748u) {
        ctx->pc = 0x240748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240744u;
        // 0x240748: 0x7fa40040  sq          $a0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24074Cu;
        goto label_24074c;
    }
    ctx->pc = 0x240744u;
    {
        const bool branch_taken_0x240744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240744u;
        // 0x240748: 0x7fa40040  sq          $a0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240744) {
            ctx->pc = 0x240768u;
            goto label_240768;
        }
    }
    ctx->pc = 0x24074Cu;
label_24074c:
    // 0x24074c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24074cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_240750:
    // 0x240750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_240754:
    // 0x240754: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x240754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_240758:
    // 0x240758: 0xe6200580  swc1        $f0, 0x580($s1)
    ctx->pc = 0x240758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1408), bits); }
label_24075c:
    // 0x24075c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x24075cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_240760:
    // 0x240760: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x240760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_240764:
    // 0x240764: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x240764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_240768:
    // 0x240768: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x240768u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_24076c:
    // 0x24076c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24076cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_240770:
    // 0x240770: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_240774:
    if (ctx->pc == 0x240774u) {
        ctx->pc = 0x240774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240770u;
        // 0x240774: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240778u;
        goto label_240778;
    }
    ctx->pc = 0x240770u;
    {
        const bool branch_taken_0x240770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240770u;
        // 0x240774: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240770) {
            ctx->pc = 0x240794u;
            goto label_240794;
        }
    }
    ctx->pc = 0x240778u;
label_240778:
    // 0x240778: 0x8e260660  lw          $a2, 0x660($s1)
    ctx->pc = 0x240778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
label_24077c:
    // 0x24077c: 0x8c44719c  lw          $a0, 0x719C($v0)
    ctx->pc = 0x24077cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29084)));
label_240780:
    // 0x240780: 0xc106054  jal         func_418150
label_240784:
    if (ctx->pc == 0x240784u) {
        ctx->pc = 0x240784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240780u;
        // 0x240784: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240788u;
        goto label_240788;
    }
    ctx->pc = 0x240780u;
    SET_GPR_U32(ctx, 31, 0x240788u);
    ctx->pc = 0x240784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240780u;
    // 0x240784: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418150u, 0x240780u, 0x240788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240788u;
label_240788:
    // 0x240788: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24078c:
    // 0x24078c: 0xc090224  jal         func_240890
label_240790:
    if (ctx->pc == 0x240790u) {
        ctx->pc = 0x240790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24078Cu;
        // 0x240790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240794u;
        goto label_240794;
    }
    ctx->pc = 0x24078Cu;
    SET_GPR_U32(ctx, 31, 0x240794u);
    ctx->pc = 0x240790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24078Cu;
    // 0x240790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240890u, 0x24078Cu, 0x240794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240794u;
label_240794:
    // 0x240794: 0x8e22035c  lw          $v0, 0x35C($s1)
    ctx->pc = 0x240794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
label_240798:
    // 0x240798: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_24079c:
    if (ctx->pc == 0x24079Cu) {
        ctx->pc = 0x24079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240798u;
        // 0x24079c: 0x7bb001e0  lq          $s0, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407A0u;
        goto label_2407a0;
    }
    ctx->pc = 0x240798u;
    {
        const bool branch_taken_0x240798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240798u;
        // 0x24079c: 0x7bb001e0  lq          $s0, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240798) {
            ctx->pc = 0x2407D0u;
            goto label_2407d0;
        }
    }
    ctx->pc = 0x2407A0u;
label_2407a0:
    // 0x2407a0: 0xc089f98  jal         func_227E60
label_2407a4:
    if (ctx->pc == 0x2407A4u) {
        ctx->pc = 0x2407A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407A0u;
        // 0x2407a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407A8u;
        goto label_2407a8;
    }
    ctx->pc = 0x2407A0u;
    SET_GPR_U32(ctx, 31, 0x2407A8u);
    ctx->pc = 0x2407A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407A0u;
    // 0x2407a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2407A0u, 0x2407A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407A8u;
label_2407a8:
    // 0x2407a8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2407ac:
    if (ctx->pc == 0x2407ACu) {
        ctx->pc = 0x2407ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407A8u;
        // 0x2407ac: 0x8e22035c  lw          $v0, 0x35C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407B0u;
        goto label_2407b0;
    }
    ctx->pc = 0x2407A8u;
    {
        const bool branch_taken_0x2407a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2407a8) {
            ctx->pc = 0x2407ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2407A8u;
            // 0x2407ac: 0x8e22035c  lw          $v0, 0x35C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2407B8u;
            goto label_2407b8;
        }
    }
    ctx->pc = 0x2407B0u;
label_2407b0:
    // 0x2407b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2407b4:
    if (ctx->pc == 0x2407B4u) {
        ctx->pc = 0x2407B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407B0u;
        // 0x2407b4: 0xae20035c  sw          $zero, 0x35C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407B8u;
        goto label_2407b8;
    }
    ctx->pc = 0x2407B0u;
    {
        const bool branch_taken_0x2407b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2407B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407B0u;
        // 0x2407b4: 0xae20035c  sw          $zero, 0x35C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407b0) {
            ctx->pc = 0x2407CCu;
            goto label_2407cc;
        }
    }
    ctx->pc = 0x2407B8u;
label_2407b8:
    // 0x2407b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2407b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2407bc:
    // 0x2407bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2407c0:
    if (ctx->pc == 0x2407C0u) {
        ctx->pc = 0x2407C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407BCu;
        // 0x2407c0: 0xae22035c  sw          $v0, 0x35C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407C4u;
        goto label_2407c4;
    }
    ctx->pc = 0x2407BCu;
    {
        const bool branch_taken_0x2407bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2407C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407BCu;
        // 0x2407c0: 0xae22035c  sw          $v0, 0x35C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407bc) {
            ctx->pc = 0x2407CCu;
            goto label_2407cc;
        }
    }
    ctx->pc = 0x2407C4u;
label_2407c4:
    // 0x2407c4: 0xc093290  jal         func_24CA40
label_2407c8:
    if (ctx->pc == 0x2407C8u) {
        ctx->pc = 0x2407C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407C4u;
        // 0x2407c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407CCu;
        goto label_2407cc;
    }
    ctx->pc = 0x2407C4u;
    SET_GPR_U32(ctx, 31, 0x2407CCu);
    ctx->pc = 0x2407C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407C4u;
    // 0x2407c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA40u, 0x2407C4u, 0x2407CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407CCu;
label_2407cc:
    // 0x2407cc: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x2407ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_2407d0:
    // 0x2407d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2407d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2407d4:
    // 0x2407d4: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x2407d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_2407d8:
    // 0x2407d8: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x2407d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_2407dc:
    // 0x2407dc: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x2407dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2407e0:
    // 0x2407e0: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x2407e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2407e4:
    // 0x2407e4: 0x7bb50190  lq          $s5, 0x190($sp)
    ctx->pc = 0x2407e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_2407e8:
    // 0x2407e8: 0x7bb60180  lq          $s6, 0x180($sp)
    ctx->pc = 0x2407e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_2407ec:
    // 0x2407ec: 0x7bb70170  lq          $s7, 0x170($sp)
    ctx->pc = 0x2407ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_2407f0:
    // 0x2407f0: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x2407f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2407f4:
    // 0x2407f4: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x2407f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2407f8:
    // 0x2407f8: 0x3e00008  jr          $ra
label_2407fc:
    if (ctx->pc == 0x2407FCu) {
        ctx->pc = 0x2407FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407F8u;
        // 0x2407fc: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240800u;
        goto label_fallthrough_0x2407f8;
    }
    ctx->pc = 0x2407F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2407FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407F8u;
        // 0x2407fc: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2407F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2407f8:
    ctx->pc = 0x240800u;
}
