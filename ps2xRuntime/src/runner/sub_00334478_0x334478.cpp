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

// Function: sub_00334478
// Address: 0x334478 - 0x335170
void sub_00334478_0x334478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334478_0x334478");
#endif

    switch (ctx->pc) {
        case 0x334478u: goto label_334478;
        case 0x33447cu: goto label_33447c;
        case 0x334480u: goto label_334480;
        case 0x334484u: goto label_334484;
        case 0x334488u: goto label_334488;
        case 0x33448cu: goto label_33448c;
        case 0x334490u: goto label_334490;
        case 0x334494u: goto label_334494;
        case 0x334498u: goto label_334498;
        case 0x33449cu: goto label_33449c;
        case 0x3344a0u: goto label_3344a0;
        case 0x3344a4u: goto label_3344a4;
        case 0x3344a8u: goto label_3344a8;
        case 0x3344acu: goto label_3344ac;
        case 0x3344b0u: goto label_3344b0;
        case 0x3344b4u: goto label_3344b4;
        case 0x3344b8u: goto label_3344b8;
        case 0x3344bcu: goto label_3344bc;
        case 0x3344c0u: goto label_3344c0;
        case 0x3344c4u: goto label_3344c4;
        case 0x3344c8u: goto label_3344c8;
        case 0x3344ccu: goto label_3344cc;
        case 0x3344d0u: goto label_3344d0;
        case 0x3344d4u: goto label_3344d4;
        case 0x3344d8u: goto label_3344d8;
        case 0x3344dcu: goto label_3344dc;
        case 0x3344e0u: goto label_3344e0;
        case 0x3344e4u: goto label_3344e4;
        case 0x3344e8u: goto label_3344e8;
        case 0x3344ecu: goto label_3344ec;
        case 0x3344f0u: goto label_3344f0;
        case 0x3344f4u: goto label_3344f4;
        case 0x3344f8u: goto label_3344f8;
        case 0x3344fcu: goto label_3344fc;
        case 0x334500u: goto label_334500;
        case 0x334504u: goto label_334504;
        case 0x334508u: goto label_334508;
        case 0x33450cu: goto label_33450c;
        case 0x334510u: goto label_334510;
        case 0x334514u: goto label_334514;
        case 0x334518u: goto label_334518;
        case 0x33451cu: goto label_33451c;
        case 0x334520u: goto label_334520;
        case 0x334524u: goto label_334524;
        case 0x334528u: goto label_334528;
        case 0x33452cu: goto label_33452c;
        case 0x334530u: goto label_334530;
        case 0x334534u: goto label_334534;
        case 0x334538u: goto label_334538;
        case 0x33453cu: goto label_33453c;
        case 0x334540u: goto label_334540;
        case 0x334544u: goto label_334544;
        case 0x334548u: goto label_334548;
        case 0x33454cu: goto label_33454c;
        case 0x334550u: goto label_334550;
        case 0x334554u: goto label_334554;
        case 0x334558u: goto label_334558;
        case 0x33455cu: goto label_33455c;
        case 0x334560u: goto label_334560;
        case 0x334564u: goto label_334564;
        case 0x334568u: goto label_334568;
        case 0x33456cu: goto label_33456c;
        case 0x334570u: goto label_334570;
        case 0x334574u: goto label_334574;
        case 0x334578u: goto label_334578;
        case 0x33457cu: goto label_33457c;
        case 0x334580u: goto label_334580;
        case 0x334584u: goto label_334584;
        case 0x334588u: goto label_334588;
        case 0x33458cu: goto label_33458c;
        case 0x334590u: goto label_334590;
        case 0x334594u: goto label_334594;
        case 0x334598u: goto label_334598;
        case 0x33459cu: goto label_33459c;
        case 0x3345a0u: goto label_3345a0;
        case 0x3345a4u: goto label_3345a4;
        case 0x3345a8u: goto label_3345a8;
        case 0x3345acu: goto label_3345ac;
        case 0x3345b0u: goto label_3345b0;
        case 0x3345b4u: goto label_3345b4;
        case 0x3345b8u: goto label_3345b8;
        case 0x3345bcu: goto label_3345bc;
        case 0x3345c0u: goto label_3345c0;
        case 0x3345c4u: goto label_3345c4;
        case 0x3345c8u: goto label_3345c8;
        case 0x3345ccu: goto label_3345cc;
        case 0x3345d0u: goto label_3345d0;
        case 0x3345d4u: goto label_3345d4;
        case 0x3345d8u: goto label_3345d8;
        case 0x3345dcu: goto label_3345dc;
        case 0x3345e0u: goto label_3345e0;
        case 0x3345e4u: goto label_3345e4;
        case 0x3345e8u: goto label_3345e8;
        case 0x3345ecu: goto label_3345ec;
        case 0x3345f0u: goto label_3345f0;
        case 0x3345f4u: goto label_3345f4;
        case 0x3345f8u: goto label_3345f8;
        case 0x3345fcu: goto label_3345fc;
        case 0x334600u: goto label_334600;
        case 0x334604u: goto label_334604;
        case 0x334608u: goto label_334608;
        case 0x33460cu: goto label_33460c;
        case 0x334610u: goto label_334610;
        case 0x334614u: goto label_334614;
        case 0x334618u: goto label_334618;
        case 0x33461cu: goto label_33461c;
        case 0x334620u: goto label_334620;
        case 0x334624u: goto label_334624;
        case 0x334628u: goto label_334628;
        case 0x33462cu: goto label_33462c;
        case 0x334630u: goto label_334630;
        case 0x334634u: goto label_334634;
        case 0x334638u: goto label_334638;
        case 0x33463cu: goto label_33463c;
        case 0x334640u: goto label_334640;
        case 0x334644u: goto label_334644;
        case 0x334648u: goto label_334648;
        case 0x33464cu: goto label_33464c;
        case 0x334650u: goto label_334650;
        case 0x334654u: goto label_334654;
        case 0x334658u: goto label_334658;
        case 0x33465cu: goto label_33465c;
        case 0x334660u: goto label_334660;
        case 0x334664u: goto label_334664;
        case 0x334668u: goto label_334668;
        case 0x33466cu: goto label_33466c;
        case 0x334670u: goto label_334670;
        case 0x334674u: goto label_334674;
        case 0x334678u: goto label_334678;
        case 0x33467cu: goto label_33467c;
        case 0x334680u: goto label_334680;
        case 0x334684u: goto label_334684;
        case 0x334688u: goto label_334688;
        case 0x33468cu: goto label_33468c;
        case 0x334690u: goto label_334690;
        case 0x334694u: goto label_334694;
        case 0x334698u: goto label_334698;
        case 0x33469cu: goto label_33469c;
        case 0x3346a0u: goto label_3346a0;
        case 0x3346a4u: goto label_3346a4;
        case 0x3346a8u: goto label_3346a8;
        case 0x3346acu: goto label_3346ac;
        case 0x3346b0u: goto label_3346b0;
        case 0x3346b4u: goto label_3346b4;
        case 0x3346b8u: goto label_3346b8;
        case 0x3346bcu: goto label_3346bc;
        case 0x3346c0u: goto label_3346c0;
        case 0x3346c4u: goto label_3346c4;
        case 0x3346c8u: goto label_3346c8;
        case 0x3346ccu: goto label_3346cc;
        case 0x3346d0u: goto label_3346d0;
        case 0x3346d4u: goto label_3346d4;
        case 0x3346d8u: goto label_3346d8;
        case 0x3346dcu: goto label_3346dc;
        case 0x3346e0u: goto label_3346e0;
        case 0x3346e4u: goto label_3346e4;
        case 0x3346e8u: goto label_3346e8;
        case 0x3346ecu: goto label_3346ec;
        case 0x3346f0u: goto label_3346f0;
        case 0x3346f4u: goto label_3346f4;
        case 0x3346f8u: goto label_3346f8;
        case 0x3346fcu: goto label_3346fc;
        case 0x334700u: goto label_334700;
        case 0x334704u: goto label_334704;
        case 0x334708u: goto label_334708;
        case 0x33470cu: goto label_33470c;
        case 0x334710u: goto label_334710;
        case 0x334714u: goto label_334714;
        case 0x334718u: goto label_334718;
        case 0x33471cu: goto label_33471c;
        case 0x334720u: goto label_334720;
        case 0x334724u: goto label_334724;
        case 0x334728u: goto label_334728;
        case 0x33472cu: goto label_33472c;
        case 0x334730u: goto label_334730;
        case 0x334734u: goto label_334734;
        case 0x334738u: goto label_334738;
        case 0x33473cu: goto label_33473c;
        case 0x334740u: goto label_334740;
        case 0x334744u: goto label_334744;
        case 0x334748u: goto label_334748;
        case 0x33474cu: goto label_33474c;
        case 0x334750u: goto label_334750;
        case 0x334754u: goto label_334754;
        case 0x334758u: goto label_334758;
        case 0x33475cu: goto label_33475c;
        case 0x334760u: goto label_334760;
        case 0x334764u: goto label_334764;
        case 0x334768u: goto label_334768;
        case 0x33476cu: goto label_33476c;
        case 0x334770u: goto label_334770;
        case 0x334774u: goto label_334774;
        case 0x334778u: goto label_334778;
        case 0x33477cu: goto label_33477c;
        case 0x334780u: goto label_334780;
        case 0x334784u: goto label_334784;
        case 0x334788u: goto label_334788;
        case 0x33478cu: goto label_33478c;
        case 0x334790u: goto label_334790;
        case 0x334794u: goto label_334794;
        case 0x334798u: goto label_334798;
        case 0x33479cu: goto label_33479c;
        case 0x3347a0u: goto label_3347a0;
        case 0x3347a4u: goto label_3347a4;
        case 0x3347a8u: goto label_3347a8;
        case 0x3347acu: goto label_3347ac;
        case 0x3347b0u: goto label_3347b0;
        case 0x3347b4u: goto label_3347b4;
        case 0x3347b8u: goto label_3347b8;
        case 0x3347bcu: goto label_3347bc;
        case 0x3347c0u: goto label_3347c0;
        case 0x3347c4u: goto label_3347c4;
        case 0x3347c8u: goto label_3347c8;
        case 0x3347ccu: goto label_3347cc;
        case 0x3347d0u: goto label_3347d0;
        case 0x3347d4u: goto label_3347d4;
        case 0x3347d8u: goto label_3347d8;
        case 0x3347dcu: goto label_3347dc;
        case 0x3347e0u: goto label_3347e0;
        case 0x3347e4u: goto label_3347e4;
        case 0x3347e8u: goto label_3347e8;
        case 0x3347ecu: goto label_3347ec;
        case 0x3347f0u: goto label_3347f0;
        case 0x3347f4u: goto label_3347f4;
        case 0x3347f8u: goto label_3347f8;
        case 0x3347fcu: goto label_3347fc;
        case 0x334800u: goto label_334800;
        case 0x334804u: goto label_334804;
        case 0x334808u: goto label_334808;
        case 0x33480cu: goto label_33480c;
        case 0x334810u: goto label_334810;
        case 0x334814u: goto label_334814;
        case 0x334818u: goto label_334818;
        case 0x33481cu: goto label_33481c;
        case 0x334820u: goto label_334820;
        case 0x334824u: goto label_334824;
        case 0x334828u: goto label_334828;
        case 0x33482cu: goto label_33482c;
        case 0x334830u: goto label_334830;
        case 0x334834u: goto label_334834;
        case 0x334838u: goto label_334838;
        case 0x33483cu: goto label_33483c;
        case 0x334840u: goto label_334840;
        case 0x334844u: goto label_334844;
        case 0x334848u: goto label_334848;
        case 0x33484cu: goto label_33484c;
        case 0x334850u: goto label_334850;
        case 0x334854u: goto label_334854;
        case 0x334858u: goto label_334858;
        case 0x33485cu: goto label_33485c;
        case 0x334860u: goto label_334860;
        case 0x334864u: goto label_334864;
        case 0x334868u: goto label_334868;
        case 0x33486cu: goto label_33486c;
        case 0x334870u: goto label_334870;
        case 0x334874u: goto label_334874;
        case 0x334878u: goto label_334878;
        case 0x33487cu: goto label_33487c;
        case 0x334880u: goto label_334880;
        case 0x334884u: goto label_334884;
        case 0x334888u: goto label_334888;
        case 0x33488cu: goto label_33488c;
        case 0x334890u: goto label_334890;
        case 0x334894u: goto label_334894;
        case 0x334898u: goto label_334898;
        case 0x33489cu: goto label_33489c;
        case 0x3348a0u: goto label_3348a0;
        case 0x3348a4u: goto label_3348a4;
        case 0x3348a8u: goto label_3348a8;
        case 0x3348acu: goto label_3348ac;
        case 0x3348b0u: goto label_3348b0;
        case 0x3348b4u: goto label_3348b4;
        case 0x3348b8u: goto label_3348b8;
        case 0x3348bcu: goto label_3348bc;
        case 0x3348c0u: goto label_3348c0;
        case 0x3348c4u: goto label_3348c4;
        case 0x3348c8u: goto label_3348c8;
        case 0x3348ccu: goto label_3348cc;
        case 0x3348d0u: goto label_3348d0;
        case 0x3348d4u: goto label_3348d4;
        case 0x3348d8u: goto label_3348d8;
        case 0x3348dcu: goto label_3348dc;
        case 0x3348e0u: goto label_3348e0;
        case 0x3348e4u: goto label_3348e4;
        case 0x3348e8u: goto label_3348e8;
        case 0x3348ecu: goto label_3348ec;
        case 0x3348f0u: goto label_3348f0;
        case 0x3348f4u: goto label_3348f4;
        case 0x3348f8u: goto label_3348f8;
        case 0x3348fcu: goto label_3348fc;
        case 0x334900u: goto label_334900;
        case 0x334904u: goto label_334904;
        case 0x334908u: goto label_334908;
        case 0x33490cu: goto label_33490c;
        case 0x334910u: goto label_334910;
        case 0x334914u: goto label_334914;
        case 0x334918u: goto label_334918;
        case 0x33491cu: goto label_33491c;
        case 0x334920u: goto label_334920;
        case 0x334924u: goto label_334924;
        case 0x334928u: goto label_334928;
        case 0x33492cu: goto label_33492c;
        case 0x334930u: goto label_334930;
        case 0x334934u: goto label_334934;
        case 0x334938u: goto label_334938;
        case 0x33493cu: goto label_33493c;
        case 0x334940u: goto label_334940;
        case 0x334944u: goto label_334944;
        case 0x334948u: goto label_334948;
        case 0x33494cu: goto label_33494c;
        case 0x334950u: goto label_334950;
        case 0x334954u: goto label_334954;
        case 0x334958u: goto label_334958;
        case 0x33495cu: goto label_33495c;
        case 0x334960u: goto label_334960;
        case 0x334964u: goto label_334964;
        case 0x334968u: goto label_334968;
        case 0x33496cu: goto label_33496c;
        case 0x334970u: goto label_334970;
        case 0x334974u: goto label_334974;
        case 0x334978u: goto label_334978;
        case 0x33497cu: goto label_33497c;
        case 0x334980u: goto label_334980;
        case 0x334984u: goto label_334984;
        case 0x334988u: goto label_334988;
        case 0x33498cu: goto label_33498c;
        case 0x334990u: goto label_334990;
        case 0x334994u: goto label_334994;
        case 0x334998u: goto label_334998;
        case 0x33499cu: goto label_33499c;
        case 0x3349a0u: goto label_3349a0;
        case 0x3349a4u: goto label_3349a4;
        case 0x3349a8u: goto label_3349a8;
        case 0x3349acu: goto label_3349ac;
        case 0x3349b0u: goto label_3349b0;
        case 0x3349b4u: goto label_3349b4;
        case 0x3349b8u: goto label_3349b8;
        case 0x3349bcu: goto label_3349bc;
        case 0x3349c0u: goto label_3349c0;
        case 0x3349c4u: goto label_3349c4;
        case 0x3349c8u: goto label_3349c8;
        case 0x3349ccu: goto label_3349cc;
        case 0x3349d0u: goto label_3349d0;
        case 0x3349d4u: goto label_3349d4;
        case 0x3349d8u: goto label_3349d8;
        case 0x3349dcu: goto label_3349dc;
        case 0x3349e0u: goto label_3349e0;
        case 0x3349e4u: goto label_3349e4;
        case 0x3349e8u: goto label_3349e8;
        case 0x3349ecu: goto label_3349ec;
        case 0x3349f0u: goto label_3349f0;
        case 0x3349f4u: goto label_3349f4;
        case 0x3349f8u: goto label_3349f8;
        case 0x3349fcu: goto label_3349fc;
        case 0x334a00u: goto label_334a00;
        case 0x334a04u: goto label_334a04;
        case 0x334a08u: goto label_334a08;
        case 0x334a0cu: goto label_334a0c;
        case 0x334a10u: goto label_334a10;
        case 0x334a14u: goto label_334a14;
        case 0x334a18u: goto label_334a18;
        case 0x334a1cu: goto label_334a1c;
        case 0x334a20u: goto label_334a20;
        case 0x334a24u: goto label_334a24;
        case 0x334a28u: goto label_334a28;
        case 0x334a2cu: goto label_334a2c;
        case 0x334a30u: goto label_334a30;
        case 0x334a34u: goto label_334a34;
        case 0x334a38u: goto label_334a38;
        case 0x334a3cu: goto label_334a3c;
        case 0x334a40u: goto label_334a40;
        case 0x334a44u: goto label_334a44;
        case 0x334a48u: goto label_334a48;
        case 0x334a4cu: goto label_334a4c;
        case 0x334a50u: goto label_334a50;
        case 0x334a54u: goto label_334a54;
        case 0x334a58u: goto label_334a58;
        case 0x334a5cu: goto label_334a5c;
        case 0x334a60u: goto label_334a60;
        case 0x334a64u: goto label_334a64;
        case 0x334a68u: goto label_334a68;
        case 0x334a6cu: goto label_334a6c;
        case 0x334a70u: goto label_334a70;
        case 0x334a74u: goto label_334a74;
        case 0x334a78u: goto label_334a78;
        case 0x334a7cu: goto label_334a7c;
        case 0x334a80u: goto label_334a80;
        case 0x334a84u: goto label_334a84;
        case 0x334a88u: goto label_334a88;
        case 0x334a8cu: goto label_334a8c;
        case 0x334a90u: goto label_334a90;
        case 0x334a94u: goto label_334a94;
        case 0x334a98u: goto label_334a98;
        case 0x334a9cu: goto label_334a9c;
        case 0x334aa0u: goto label_334aa0;
        case 0x334aa4u: goto label_334aa4;
        case 0x334aa8u: goto label_334aa8;
        case 0x334aacu: goto label_334aac;
        case 0x334ab0u: goto label_334ab0;
        case 0x334ab4u: goto label_334ab4;
        case 0x334ab8u: goto label_334ab8;
        case 0x334abcu: goto label_334abc;
        case 0x334ac0u: goto label_334ac0;
        case 0x334ac4u: goto label_334ac4;
        case 0x334ac8u: goto label_334ac8;
        case 0x334accu: goto label_334acc;
        case 0x334ad0u: goto label_334ad0;
        case 0x334ad4u: goto label_334ad4;
        case 0x334ad8u: goto label_334ad8;
        case 0x334adcu: goto label_334adc;
        case 0x334ae0u: goto label_334ae0;
        case 0x334ae4u: goto label_334ae4;
        case 0x334ae8u: goto label_334ae8;
        case 0x334aecu: goto label_334aec;
        case 0x334af0u: goto label_334af0;
        case 0x334af4u: goto label_334af4;
        case 0x334af8u: goto label_334af8;
        case 0x334afcu: goto label_334afc;
        case 0x334b00u: goto label_334b00;
        case 0x334b04u: goto label_334b04;
        case 0x334b08u: goto label_334b08;
        case 0x334b0cu: goto label_334b0c;
        case 0x334b10u: goto label_334b10;
        case 0x334b14u: goto label_334b14;
        case 0x334b18u: goto label_334b18;
        case 0x334b1cu: goto label_334b1c;
        case 0x334b20u: goto label_334b20;
        case 0x334b24u: goto label_334b24;
        case 0x334b28u: goto label_334b28;
        case 0x334b2cu: goto label_334b2c;
        case 0x334b30u: goto label_334b30;
        case 0x334b34u: goto label_334b34;
        case 0x334b38u: goto label_334b38;
        case 0x334b3cu: goto label_334b3c;
        case 0x334b40u: goto label_334b40;
        case 0x334b44u: goto label_334b44;
        case 0x334b48u: goto label_334b48;
        case 0x334b4cu: goto label_334b4c;
        case 0x334b50u: goto label_334b50;
        case 0x334b54u: goto label_334b54;
        case 0x334b58u: goto label_334b58;
        case 0x334b5cu: goto label_334b5c;
        case 0x334b60u: goto label_334b60;
        case 0x334b64u: goto label_334b64;
        case 0x334b68u: goto label_334b68;
        case 0x334b6cu: goto label_334b6c;
        case 0x334b70u: goto label_334b70;
        case 0x334b74u: goto label_334b74;
        case 0x334b78u: goto label_334b78;
        case 0x334b7cu: goto label_334b7c;
        case 0x334b80u: goto label_334b80;
        case 0x334b84u: goto label_334b84;
        case 0x334b88u: goto label_334b88;
        case 0x334b8cu: goto label_334b8c;
        case 0x334b90u: goto label_334b90;
        case 0x334b94u: goto label_334b94;
        case 0x334b98u: goto label_334b98;
        case 0x334b9cu: goto label_334b9c;
        case 0x334ba0u: goto label_334ba0;
        case 0x334ba4u: goto label_334ba4;
        case 0x334ba8u: goto label_334ba8;
        case 0x334bacu: goto label_334bac;
        case 0x334bb0u: goto label_334bb0;
        case 0x334bb4u: goto label_334bb4;
        case 0x334bb8u: goto label_334bb8;
        case 0x334bbcu: goto label_334bbc;
        case 0x334bc0u: goto label_334bc0;
        case 0x334bc4u: goto label_334bc4;
        case 0x334bc8u: goto label_334bc8;
        case 0x334bccu: goto label_334bcc;
        case 0x334bd0u: goto label_334bd0;
        case 0x334bd4u: goto label_334bd4;
        case 0x334bd8u: goto label_334bd8;
        case 0x334bdcu: goto label_334bdc;
        case 0x334be0u: goto label_334be0;
        case 0x334be4u: goto label_334be4;
        case 0x334be8u: goto label_334be8;
        case 0x334becu: goto label_334bec;
        case 0x334bf0u: goto label_334bf0;
        case 0x334bf4u: goto label_334bf4;
        case 0x334bf8u: goto label_334bf8;
        case 0x334bfcu: goto label_334bfc;
        case 0x334c00u: goto label_334c00;
        case 0x334c04u: goto label_334c04;
        case 0x334c08u: goto label_334c08;
        case 0x334c0cu: goto label_334c0c;
        case 0x334c10u: goto label_334c10;
        case 0x334c14u: goto label_334c14;
        case 0x334c18u: goto label_334c18;
        case 0x334c1cu: goto label_334c1c;
        case 0x334c20u: goto label_334c20;
        case 0x334c24u: goto label_334c24;
        case 0x334c28u: goto label_334c28;
        case 0x334c2cu: goto label_334c2c;
        case 0x334c30u: goto label_334c30;
        case 0x334c34u: goto label_334c34;
        case 0x334c38u: goto label_334c38;
        case 0x334c3cu: goto label_334c3c;
        case 0x334c40u: goto label_334c40;
        case 0x334c44u: goto label_334c44;
        case 0x334c48u: goto label_334c48;
        case 0x334c4cu: goto label_334c4c;
        case 0x334c50u: goto label_334c50;
        case 0x334c54u: goto label_334c54;
        case 0x334c58u: goto label_334c58;
        case 0x334c5cu: goto label_334c5c;
        case 0x334c60u: goto label_334c60;
        case 0x334c64u: goto label_334c64;
        case 0x334c68u: goto label_334c68;
        case 0x334c6cu: goto label_334c6c;
        case 0x334c70u: goto label_334c70;
        case 0x334c74u: goto label_334c74;
        case 0x334c78u: goto label_334c78;
        case 0x334c7cu: goto label_334c7c;
        case 0x334c80u: goto label_334c80;
        case 0x334c84u: goto label_334c84;
        case 0x334c88u: goto label_334c88;
        case 0x334c8cu: goto label_334c8c;
        case 0x334c90u: goto label_334c90;
        case 0x334c94u: goto label_334c94;
        case 0x334c98u: goto label_334c98;
        case 0x334c9cu: goto label_334c9c;
        case 0x334ca0u: goto label_334ca0;
        case 0x334ca4u: goto label_334ca4;
        case 0x334ca8u: goto label_334ca8;
        case 0x334cacu: goto label_334cac;
        case 0x334cb0u: goto label_334cb0;
        case 0x334cb4u: goto label_334cb4;
        case 0x334cb8u: goto label_334cb8;
        case 0x334cbcu: goto label_334cbc;
        case 0x334cc0u: goto label_334cc0;
        case 0x334cc4u: goto label_334cc4;
        case 0x334cc8u: goto label_334cc8;
        case 0x334cccu: goto label_334ccc;
        case 0x334cd0u: goto label_334cd0;
        case 0x334cd4u: goto label_334cd4;
        case 0x334cd8u: goto label_334cd8;
        case 0x334cdcu: goto label_334cdc;
        case 0x334ce0u: goto label_334ce0;
        case 0x334ce4u: goto label_334ce4;
        case 0x334ce8u: goto label_334ce8;
        case 0x334cecu: goto label_334cec;
        case 0x334cf0u: goto label_334cf0;
        case 0x334cf4u: goto label_334cf4;
        case 0x334cf8u: goto label_334cf8;
        case 0x334cfcu: goto label_334cfc;
        case 0x334d00u: goto label_334d00;
        case 0x334d04u: goto label_334d04;
        case 0x334d08u: goto label_334d08;
        case 0x334d0cu: goto label_334d0c;
        case 0x334d10u: goto label_334d10;
        case 0x334d14u: goto label_334d14;
        case 0x334d18u: goto label_334d18;
        case 0x334d1cu: goto label_334d1c;
        case 0x334d20u: goto label_334d20;
        case 0x334d24u: goto label_334d24;
        case 0x334d28u: goto label_334d28;
        case 0x334d2cu: goto label_334d2c;
        case 0x334d30u: goto label_334d30;
        case 0x334d34u: goto label_334d34;
        case 0x334d38u: goto label_334d38;
        case 0x334d3cu: goto label_334d3c;
        case 0x334d40u: goto label_334d40;
        case 0x334d44u: goto label_334d44;
        case 0x334d48u: goto label_334d48;
        case 0x334d4cu: goto label_334d4c;
        case 0x334d50u: goto label_334d50;
        case 0x334d54u: goto label_334d54;
        case 0x334d58u: goto label_334d58;
        case 0x334d5cu: goto label_334d5c;
        case 0x334d60u: goto label_334d60;
        case 0x334d64u: goto label_334d64;
        case 0x334d68u: goto label_334d68;
        case 0x334d6cu: goto label_334d6c;
        case 0x334d70u: goto label_334d70;
        case 0x334d74u: goto label_334d74;
        case 0x334d78u: goto label_334d78;
        case 0x334d7cu: goto label_334d7c;
        case 0x334d80u: goto label_334d80;
        case 0x334d84u: goto label_334d84;
        case 0x334d88u: goto label_334d88;
        case 0x334d8cu: goto label_334d8c;
        case 0x334d90u: goto label_334d90;
        case 0x334d94u: goto label_334d94;
        case 0x334d98u: goto label_334d98;
        case 0x334d9cu: goto label_334d9c;
        case 0x334da0u: goto label_334da0;
        case 0x334da4u: goto label_334da4;
        case 0x334da8u: goto label_334da8;
        case 0x334dacu: goto label_334dac;
        case 0x334db0u: goto label_334db0;
        case 0x334db4u: goto label_334db4;
        case 0x334db8u: goto label_334db8;
        case 0x334dbcu: goto label_334dbc;
        case 0x334dc0u: goto label_334dc0;
        case 0x334dc4u: goto label_334dc4;
        case 0x334dc8u: goto label_334dc8;
        case 0x334dccu: goto label_334dcc;
        case 0x334dd0u: goto label_334dd0;
        case 0x334dd4u: goto label_334dd4;
        case 0x334dd8u: goto label_334dd8;
        case 0x334ddcu: goto label_334ddc;
        case 0x334de0u: goto label_334de0;
        case 0x334de4u: goto label_334de4;
        case 0x334de8u: goto label_334de8;
        case 0x334decu: goto label_334dec;
        case 0x334df0u: goto label_334df0;
        case 0x334df4u: goto label_334df4;
        case 0x334df8u: goto label_334df8;
        case 0x334dfcu: goto label_334dfc;
        case 0x334e00u: goto label_334e00;
        case 0x334e04u: goto label_334e04;
        case 0x334e08u: goto label_334e08;
        case 0x334e0cu: goto label_334e0c;
        case 0x334e10u: goto label_334e10;
        case 0x334e14u: goto label_334e14;
        case 0x334e18u: goto label_334e18;
        case 0x334e1cu: goto label_334e1c;
        case 0x334e20u: goto label_334e20;
        case 0x334e24u: goto label_334e24;
        case 0x334e28u: goto label_334e28;
        case 0x334e2cu: goto label_334e2c;
        case 0x334e30u: goto label_334e30;
        case 0x334e34u: goto label_334e34;
        case 0x334e38u: goto label_334e38;
        case 0x334e3cu: goto label_334e3c;
        case 0x334e40u: goto label_334e40;
        case 0x334e44u: goto label_334e44;
        case 0x334e48u: goto label_334e48;
        case 0x334e4cu: goto label_334e4c;
        case 0x334e50u: goto label_334e50;
        case 0x334e54u: goto label_334e54;
        case 0x334e58u: goto label_334e58;
        case 0x334e5cu: goto label_334e5c;
        case 0x334e60u: goto label_334e60;
        case 0x334e64u: goto label_334e64;
        case 0x334e68u: goto label_334e68;
        case 0x334e6cu: goto label_334e6c;
        case 0x334e70u: goto label_334e70;
        case 0x334e74u: goto label_334e74;
        case 0x334e78u: goto label_334e78;
        case 0x334e7cu: goto label_334e7c;
        case 0x334e80u: goto label_334e80;
        case 0x334e84u: goto label_334e84;
        case 0x334e88u: goto label_334e88;
        case 0x334e8cu: goto label_334e8c;
        case 0x334e90u: goto label_334e90;
        case 0x334e94u: goto label_334e94;
        case 0x334e98u: goto label_334e98;
        case 0x334e9cu: goto label_334e9c;
        case 0x334ea0u: goto label_334ea0;
        case 0x334ea4u: goto label_334ea4;
        case 0x334ea8u: goto label_334ea8;
        case 0x334eacu: goto label_334eac;
        case 0x334eb0u: goto label_334eb0;
        case 0x334eb4u: goto label_334eb4;
        case 0x334eb8u: goto label_334eb8;
        case 0x334ebcu: goto label_334ebc;
        case 0x334ec0u: goto label_334ec0;
        case 0x334ec4u: goto label_334ec4;
        case 0x334ec8u: goto label_334ec8;
        case 0x334eccu: goto label_334ecc;
        case 0x334ed0u: goto label_334ed0;
        case 0x334ed4u: goto label_334ed4;
        case 0x334ed8u: goto label_334ed8;
        case 0x334edcu: goto label_334edc;
        case 0x334ee0u: goto label_334ee0;
        case 0x334ee4u: goto label_334ee4;
        case 0x334ee8u: goto label_334ee8;
        case 0x334eecu: goto label_334eec;
        case 0x334ef0u: goto label_334ef0;
        case 0x334ef4u: goto label_334ef4;
        case 0x334ef8u: goto label_334ef8;
        case 0x334efcu: goto label_334efc;
        case 0x334f00u: goto label_334f00;
        case 0x334f04u: goto label_334f04;
        case 0x334f08u: goto label_334f08;
        case 0x334f0cu: goto label_334f0c;
        case 0x334f10u: goto label_334f10;
        case 0x334f14u: goto label_334f14;
        case 0x334f18u: goto label_334f18;
        case 0x334f1cu: goto label_334f1c;
        case 0x334f20u: goto label_334f20;
        case 0x334f24u: goto label_334f24;
        case 0x334f28u: goto label_334f28;
        case 0x334f2cu: goto label_334f2c;
        case 0x334f30u: goto label_334f30;
        case 0x334f34u: goto label_334f34;
        case 0x334f38u: goto label_334f38;
        case 0x334f3cu: goto label_334f3c;
        case 0x334f40u: goto label_334f40;
        case 0x334f44u: goto label_334f44;
        case 0x334f48u: goto label_334f48;
        case 0x334f4cu: goto label_334f4c;
        case 0x334f50u: goto label_334f50;
        case 0x334f54u: goto label_334f54;
        case 0x334f58u: goto label_334f58;
        case 0x334f5cu: goto label_334f5c;
        case 0x334f60u: goto label_334f60;
        case 0x334f64u: goto label_334f64;
        case 0x334f68u: goto label_334f68;
        case 0x334f6cu: goto label_334f6c;
        case 0x334f70u: goto label_334f70;
        case 0x334f74u: goto label_334f74;
        case 0x334f78u: goto label_334f78;
        case 0x334f7cu: goto label_334f7c;
        case 0x334f80u: goto label_334f80;
        case 0x334f84u: goto label_334f84;
        case 0x334f88u: goto label_334f88;
        case 0x334f8cu: goto label_334f8c;
        case 0x334f90u: goto label_334f90;
        case 0x334f94u: goto label_334f94;
        case 0x334f98u: goto label_334f98;
        case 0x334f9cu: goto label_334f9c;
        case 0x334fa0u: goto label_334fa0;
        case 0x334fa4u: goto label_334fa4;
        case 0x334fa8u: goto label_334fa8;
        case 0x334facu: goto label_334fac;
        case 0x334fb0u: goto label_334fb0;
        case 0x334fb4u: goto label_334fb4;
        case 0x334fb8u: goto label_334fb8;
        case 0x334fbcu: goto label_334fbc;
        case 0x334fc0u: goto label_334fc0;
        case 0x334fc4u: goto label_334fc4;
        case 0x334fc8u: goto label_334fc8;
        case 0x334fccu: goto label_334fcc;
        case 0x334fd0u: goto label_334fd0;
        case 0x334fd4u: goto label_334fd4;
        case 0x334fd8u: goto label_334fd8;
        case 0x334fdcu: goto label_334fdc;
        case 0x334fe0u: goto label_334fe0;
        case 0x334fe4u: goto label_334fe4;
        case 0x334fe8u: goto label_334fe8;
        case 0x334fecu: goto label_334fec;
        case 0x334ff0u: goto label_334ff0;
        case 0x334ff4u: goto label_334ff4;
        case 0x334ff8u: goto label_334ff8;
        case 0x334ffcu: goto label_334ffc;
        case 0x335000u: goto label_335000;
        case 0x335004u: goto label_335004;
        case 0x335008u: goto label_335008;
        case 0x33500cu: goto label_33500c;
        case 0x335010u: goto label_335010;
        case 0x335014u: goto label_335014;
        case 0x335018u: goto label_335018;
        case 0x33501cu: goto label_33501c;
        case 0x335020u: goto label_335020;
        case 0x335024u: goto label_335024;
        case 0x335028u: goto label_335028;
        case 0x33502cu: goto label_33502c;
        case 0x335030u: goto label_335030;
        case 0x335034u: goto label_335034;
        case 0x335038u: goto label_335038;
        case 0x33503cu: goto label_33503c;
        case 0x335040u: goto label_335040;
        case 0x335044u: goto label_335044;
        case 0x335048u: goto label_335048;
        case 0x33504cu: goto label_33504c;
        case 0x335050u: goto label_335050;
        case 0x335054u: goto label_335054;
        case 0x335058u: goto label_335058;
        case 0x33505cu: goto label_33505c;
        case 0x335060u: goto label_335060;
        case 0x335064u: goto label_335064;
        case 0x335068u: goto label_335068;
        case 0x33506cu: goto label_33506c;
        case 0x335070u: goto label_335070;
        case 0x335074u: goto label_335074;
        case 0x335078u: goto label_335078;
        case 0x33507cu: goto label_33507c;
        case 0x335080u: goto label_335080;
        case 0x335084u: goto label_335084;
        case 0x335088u: goto label_335088;
        case 0x33508cu: goto label_33508c;
        case 0x335090u: goto label_335090;
        case 0x335094u: goto label_335094;
        case 0x335098u: goto label_335098;
        case 0x33509cu: goto label_33509c;
        case 0x3350a0u: goto label_3350a0;
        case 0x3350a4u: goto label_3350a4;
        case 0x3350a8u: goto label_3350a8;
        case 0x3350acu: goto label_3350ac;
        case 0x3350b0u: goto label_3350b0;
        case 0x3350b4u: goto label_3350b4;
        case 0x3350b8u: goto label_3350b8;
        case 0x3350bcu: goto label_3350bc;
        case 0x3350c0u: goto label_3350c0;
        case 0x3350c4u: goto label_3350c4;
        case 0x3350c8u: goto label_3350c8;
        case 0x3350ccu: goto label_3350cc;
        case 0x3350d0u: goto label_3350d0;
        case 0x3350d4u: goto label_3350d4;
        case 0x3350d8u: goto label_3350d8;
        case 0x3350dcu: goto label_3350dc;
        case 0x3350e0u: goto label_3350e0;
        case 0x3350e4u: goto label_3350e4;
        case 0x3350e8u: goto label_3350e8;
        case 0x3350ecu: goto label_3350ec;
        case 0x3350f0u: goto label_3350f0;
        case 0x3350f4u: goto label_3350f4;
        case 0x3350f8u: goto label_3350f8;
        case 0x3350fcu: goto label_3350fc;
        case 0x335100u: goto label_335100;
        case 0x335104u: goto label_335104;
        case 0x335108u: goto label_335108;
        case 0x33510cu: goto label_33510c;
        case 0x335110u: goto label_335110;
        case 0x335114u: goto label_335114;
        case 0x335118u: goto label_335118;
        case 0x33511cu: goto label_33511c;
        case 0x335120u: goto label_335120;
        case 0x335124u: goto label_335124;
        case 0x335128u: goto label_335128;
        case 0x33512cu: goto label_33512c;
        case 0x335130u: goto label_335130;
        case 0x335134u: goto label_335134;
        case 0x335138u: goto label_335138;
        case 0x33513cu: goto label_33513c;
        case 0x335140u: goto label_335140;
        case 0x335144u: goto label_335144;
        case 0x335148u: goto label_335148;
        case 0x33514cu: goto label_33514c;
        case 0x335150u: goto label_335150;
        case 0x335154u: goto label_335154;
        case 0x335158u: goto label_335158;
        case 0x33515cu: goto label_33515c;
        case 0x335160u: goto label_335160;
        case 0x335164u: goto label_335164;
        case 0x335168u: goto label_335168;
        case 0x33516cu: goto label_33516c;
        default: break;
    }

    ctx->pc = 0x334478u;

label_334478:
    // 0x334478: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x334478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_33447c:
    // 0x33447c: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x33447cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
label_334480:
    // 0x334480: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x334480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_334484:
    // 0x334484: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x334484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_334488:
    // 0x334488: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x334488u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33448c:
    // 0x33448c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x33448cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_334490:
    // 0x334490: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x334490u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_334494:
    // 0x334494: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x334494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_334498:
    // 0x334498: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x334498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_33449c:
    // 0x33449c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x33449cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3344a0:
    // 0x3344a0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3344a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_3344a4:
    // 0x3344a4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3344a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_3344a8:
    // 0x3344a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3344a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3344ac:
    // 0x3344ac: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3344acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3344b0:
    // 0x3344b0: 0x8cb60000  lw          $s6, 0x0($a1)
    ctx->pc = 0x3344b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3344b4:
    // 0x3344b4: 0x8e9e0068  lw          $fp, 0x68($s4)
    ctx->pc = 0x3344b4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
label_3344b8:
    // 0x3344b8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3344b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3344bc:
    // 0x3344bc: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x3344bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_3344c0:
    // 0x3344c0: 0x8ed70008  lw          $s7, 0x8($s6)
    ctx->pc = 0x3344c0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3344c4:
    // 0x3344c4: 0x8ea3fff8  lw          $v1, -0x8($s5)
    ctx->pc = 0x3344c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3344c8:
    // 0x3344c8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3344c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3344cc:
    // 0x3344cc: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x3344ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_3344d0:
    // 0x3344d0: 0x86c50024  lh          $a1, 0x24($s6)
    ctx->pc = 0x3344d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 36)));
label_3344d4:
    // 0x3344d4: 0xc0ca1dc  jal         func_328770
label_3344d8:
    if (ctx->pc == 0x3344D8u) {
        ctx->pc = 0x3344D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344D4u;
        // 0x3344d8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3344DCu;
        goto label_3344dc;
    }
    ctx->pc = 0x3344D4u;
    SET_GPR_U32(ctx, 31, 0x3344DCu);
    ctx->pc = 0x3344D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3344D4u;
    // 0x3344d8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x3344D4u, 0x3344DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3344DCu;
label_3344dc:
    // 0x3344dc: 0x86c20022  lh          $v0, 0x22($s6)
    ctx->pc = 0x3344dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 34)));
label_3344e0:
    // 0x3344e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3344e4:
    if (ctx->pc == 0x3344E4u) {
        ctx->pc = 0x3344E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344E0u;
        // 0x3344e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3344E8u;
        goto label_3344e8;
    }
    ctx->pc = 0x3344E0u;
    {
        const bool branch_taken_0x3344e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3344E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344E0u;
        // 0x3344e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3344e0) {
            ctx->pc = 0x3344FCu;
            goto label_3344fc;
        }
    }
    ctx->pc = 0x3344E8u;
label_3344e8:
    // 0x3344e8: 0x86c60020  lh          $a2, 0x20($s6)
    ctx->pc = 0x3344e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 32)));
label_3344ec:
    // 0x3344ec: 0xc0cd104  jal         func_334410
label_3344f0:
    if (ctx->pc == 0x3344F0u) {
        ctx->pc = 0x3344F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344ECu;
        // 0x3344f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3344F4u;
        goto label_3344f4;
    }
    ctx->pc = 0x3344ECu;
    SET_GPR_U32(ctx, 31, 0x3344F4u);
    ctx->pc = 0x3344F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3344ECu;
    // 0x3344f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334410u, 0x3344ECu, 0x3344F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3344F4u;
label_3344f4:
    // 0x3344f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_3344f8:
    if (ctx->pc == 0x3344F8u) {
        ctx->pc = 0x3344F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344F4u;
        // 0x3344f8: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3344FCu;
        goto label_3344fc;
    }
    ctx->pc = 0x3344F4u;
    {
        const bool branch_taken_0x3344f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3344F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344F4u;
        // 0x3344f8: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3344f4) {
            ctx->pc = 0x334510u;
            goto label_334510;
        }
    }
    ctx->pc = 0x3344FCu;
label_3344fc:
    // 0x3344fc: 0x86c60020  lh          $a2, 0x20($s6)
    ctx->pc = 0x3344fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 32)));
label_334500:
    // 0x334500: 0xc0ca206  jal         func_328818
label_334504:
    if (ctx->pc == 0x334504u) {
        ctx->pc = 0x334504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334500u;
        // 0x334504: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334508u;
        goto label_334508;
    }
    ctx->pc = 0x334500u;
    SET_GPR_U32(ctx, 31, 0x334508u);
    ctx->pc = 0x334504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334500u;
    // 0x334504: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328818u, 0x334500u, 0x334508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334508u;
label_334508:
    // 0x334508: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x334508u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_33450c:
    // 0x33450c: 0x0  nop
    ctx->pc = 0x33450cu;
    // NOP
label_334510:
    // 0x334510: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x334510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334514:
    // 0x334514: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x334514u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_334518:
    // 0x334518: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x334518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_33451c:
    // 0x33451c: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
label_334520:
    if (ctx->pc == 0x334520u) {
        ctx->pc = 0x334520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33451Cu;
        // 0x334520: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334524u;
        goto label_334524;
    }
    ctx->pc = 0x33451Cu;
    {
        const bool branch_taken_0x33451c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x334520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33451Cu;
        // 0x334520: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33451c) {
            ctx->pc = 0x334538u;
            goto label_334538;
        }
    }
    ctx->pc = 0x334524u;
label_334524:
    // 0x334524: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334528:
    // 0x334528: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x334528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33452c:
    // 0x33452c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33452cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334530:
    // 0x334530: 0xc0ccdd4  jal         func_333750
label_334534:
    if (ctx->pc == 0x334534u) {
        ctx->pc = 0x334534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334530u;
        // 0x334534: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334538u;
        goto label_334538;
    }
    ctx->pc = 0x334530u;
    SET_GPR_U32(ctx, 31, 0x334538u);
    ctx->pc = 0x334534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334530u;
    // 0x334534: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333750u, 0x334530u, 0x334538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334538u;
label_334538:
    // 0x334538: 0x3263003f  andi        $v1, $s3, 0x3F
    ctx->pc = 0x334538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)63);
label_33453c:
    // 0x33453c: 0x2c620031  sltiu       $v0, $v1, 0x31
    ctx->pc = 0x33453cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
label_334540:
    // 0x334540: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
label_334544:
    if (ctx->pc == 0x334544u) {
        ctx->pc = 0x334544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334540u;
        // 0x334544: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334548u;
        goto label_334548;
    }
    ctx->pc = 0x334540u;
    {
        const bool branch_taken_0x334540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334540u;
        // 0x334544: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334540) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334548u;
label_334548:
    // 0x334548: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x334548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33454c:
    // 0x33454c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x33454cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_334550:
    // 0x334550: 0x24836930  addiu       $v1, $a0, 0x6930
    ctx->pc = 0x334550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 26928));
label_334554:
    // 0x334554: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x334554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_334558:
    // 0x334558: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x334558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33455c:
    // 0x33455c: 0x800008  jr          $a0
label_334560:
    if (ctx->pc == 0x334560u) {
        ctx->pc = 0x334564u;
        goto label_334564;
    }
    ctx->pc = 0x33455Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33455Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x334564u;
label_334564:
    // 0x334564: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x334564u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_334568:
    // 0x334568: 0x100002f5  b           . + 4 + (0x2F5 << 2)
label_33456c:
    if (ctx->pc == 0x33456Cu) {
        ctx->pc = 0x33456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334568u;
        // 0x33456c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334570u;
        goto label_334570;
    }
    ctx->pc = 0x334568u;
    {
        const bool branch_taken_0x334568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334568u;
        // 0x33456c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334568) {
            ctx->pc = 0x335140u;
            goto label_335140;
        }
    }
    ctx->pc = 0x334570u;
label_334570:
    // 0x334570: 0x131182  srl         $v0, $s3, 6
    ctx->pc = 0x334570u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334574:
    // 0x334574: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x334574u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_334578:
    // 0x334578: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x334578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_33457c:
    // 0x33457c: 0x100002f0  b           . + 4 + (0x2F0 << 2)
label_334580:
    if (ctx->pc == 0x334580u) {
        ctx->pc = 0x334580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33457Cu;
        // 0x334580: 0x2a21021  addu        $v0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334584u;
        goto label_334584;
    }
    ctx->pc = 0x33457Cu;
    {
        const bool branch_taken_0x33457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33457Cu;
        // 0x334580: 0x2a21021  addu        $v0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33457c) {
            ctx->pc = 0x335140u;
            goto label_335140;
        }
    }
    ctx->pc = 0x334584u;
label_334584:
    // 0x334584: 0x131182  srl         $v0, $s3, 6
    ctx->pc = 0x334584u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334588:
    // 0x334588: 0x132bc2  srl         $a1, $s3, 15
    ctx->pc = 0x334588u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 15));
label_33458c:
    // 0x33458c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x33458cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_334590:
    // 0x334590: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x334590u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_334594:
    // 0x334594: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x334594u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_334598:
    // 0x334598: 0x384300ff  xori        $v1, $v0, 0xFF
    ctx->pc = 0x334598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
label_33459c:
    // 0x33459c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x33459cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3345a0:
    // 0x3345a0: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x3345a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_3345a4:
    // 0x3345a4: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x3345a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_3345a8:
    // 0x3345a8: 0xc0ca2d0  jal         func_328B40
label_3345ac:
    if (ctx->pc == 0x3345ACu) {
        ctx->pc = 0x3345ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345A8u;
        // 0x3345ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3345B0u;
        goto label_3345b0;
    }
    ctx->pc = 0x3345A8u;
    SET_GPR_U32(ctx, 31, 0x3345B0u);
    ctx->pc = 0x3345ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3345A8u;
    // 0x3345ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328B40u, 0x3345A8u, 0x3345B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3345B0u;
label_3345b0:
    // 0x3345b0: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_3345b4:
    if (ctx->pc == 0x3345B4u) {
        ctx->pc = 0x3345B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345B0u;
        // 0x3345b4: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3345B8u;
        goto label_3345b8;
    }
    ctx->pc = 0x3345B0u;
    {
        const bool branch_taken_0x3345b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3345B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345B0u;
        // 0x3345b4: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3345b0) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x3345B8u;
label_3345b8:
    // 0x3345b8: 0x132bc2  srl         $a1, $s3, 15
    ctx->pc = 0x3345b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 15));
label_3345bc:
    // 0x3345bc: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x3345bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_3345c0:
    // 0x3345c0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3345c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3345c4:
    // 0x3345c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3345c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3345c8:
    // 0x3345c8: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x3345c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_3345cc:
    // 0x3345cc: 0xc0ca2d0  jal         func_328B40
label_3345d0:
    if (ctx->pc == 0x3345D0u) {
        ctx->pc = 0x3345D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345CCu;
        // 0x3345d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3345D4u;
        goto label_3345d4;
    }
    ctx->pc = 0x3345CCu;
    SET_GPR_U32(ctx, 31, 0x3345D4u);
    ctx->pc = 0x3345D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3345CCu;
    // 0x3345d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328B40u, 0x3345CCu, 0x3345D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3345D4u;
label_3345d4:
    // 0x3345d4: 0x131082  srl         $v0, $s3, 2
    ctx->pc = 0x3345d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 2));
label_3345d8:
    // 0x3345d8: 0x30421ff0  andi        $v0, $v0, 0x1FF0
    ctx->pc = 0x3345d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8176);
label_3345dc:
    // 0x3345dc: 0x100002d8  b           . + 4 + (0x2D8 << 2)
label_3345e0:
    if (ctx->pc == 0x3345E0u) {
        ctx->pc = 0x3345E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345DCu;
        // 0x3345e0: 0x2a21021  addu        $v0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3345E4u;
        goto label_3345e4;
    }
    ctx->pc = 0x3345DCu;
    {
        const bool branch_taken_0x3345dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3345E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345DCu;
        // 0x3345e0: 0x2a21021  addu        $v0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3345dc) {
            ctx->pc = 0x335140u;
            goto label_335140;
        }
    }
    ctx->pc = 0x3345E4u;
label_3345e4:
    // 0x3345e4: 0x131182  srl         $v0, $s3, 6
    ctx->pc = 0x3345e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_3345e8:
    // 0x3345e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3345e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3345ec:
    // 0x3345ec: 0x0  nop
    ctx->pc = 0x3345ecu;
    // NOP
label_3345f0:
    // 0x3345f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3345f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3345f4:
    // 0x3345f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3345f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3345f8:
    // 0x3345f8: 0x0  nop
    ctx->pc = 0x3345f8u;
    // NOP
label_3345fc:
    // 0x3345fc: 0x0  nop
    ctx->pc = 0x3345fcu;
    // NOP
label_334600:
    // 0x334600: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
label_334604:
    if (ctx->pc == 0x334604u) {
        ctx->pc = 0x334604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334600u;
        // 0x334604: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334608u;
        goto label_334608;
    }
    ctx->pc = 0x334600u;
    {
        const bool branch_taken_0x334600 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x334604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334600u;
        // 0x334604: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334600) {
            ctx->pc = 0x3345F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3345f0;
        }
    }
    ctx->pc = 0x334608u;
label_334608:
    // 0x334608: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
label_33460c:
    if (ctx->pc == 0x33460Cu) {
        ctx->pc = 0x33460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334608u;
        // 0x33460c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334610u;
        goto label_334610;
    }
    ctx->pc = 0x334608u;
    {
        const bool branch_taken_0x334608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334608u;
        // 0x33460c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334608) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334610u;
label_334610:
    // 0x334610: 0x131182  srl         $v0, $s3, 6
    ctx->pc = 0x334610u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334614:
    // 0x334614: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x334614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_334618:
    // 0x334618: 0x1000ffbd  b           . + 4 + (-0x43 << 2)
label_33461c:
    if (ctx->pc == 0x33461Cu) {
        ctx->pc = 0x33461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334618u;
        // 0x33461c: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334620u;
        goto label_334620;
    }
    ctx->pc = 0x334618u;
    {
        const bool branch_taken_0x334618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334618u;
        // 0x33461c: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334618) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334620u;
label_334620:
    // 0x334620: 0x3c04fe00  lui         $a0, 0xFE00
    ctx->pc = 0x334620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65024 << 16));
label_334624:
    // 0x334624: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x334624u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334628:
    // 0x334628: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x334628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_33462c:
    // 0x33462c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_334630:
    // 0x334630: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x334630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_334634:
    // 0x334634: 0xc10b0b4  jal         func_42C2D0
label_334638:
    if (ctx->pc == 0x334638u) {
        ctx->pc = 0x334638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334634u;
        // 0x334638: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33463Cu;
        goto label_33463c;
    }
    ctx->pc = 0x334634u;
    SET_GPR_U32(ctx, 31, 0x33463Cu);
    ctx->pc = 0x334638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334634u;
    // 0x334638: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x334634u, 0x33463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33463Cu;
label_33463c:
    // 0x33463c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_334640:
    if (ctx->pc == 0x334640u) {
        ctx->pc = 0x334640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33463Cu;
        // 0x334640: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334644u;
        goto label_334644;
    }
    ctx->pc = 0x33463Cu;
    {
        const bool branch_taken_0x33463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33463Cu;
        // 0x334640: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33463c) {
            ctx->pc = 0x3346B8u;
            goto label_3346b8;
        }
    }
    ctx->pc = 0x334644u;
label_334644:
    // 0x334644: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x334644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_334648:
    // 0x334648: 0x131182  srl         $v0, $s3, 6
    ctx->pc = 0x334648u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_33464c:
    // 0x33464c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x33464cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_334650:
    // 0x334650: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x334650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_334654:
    // 0x334654: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x334654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_334658:
    // 0x334658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x334658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33465c:
    // 0x33465c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x33465cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_334660:
    // 0x334660: 0x1000ffab  b           . + 4 + (-0x55 << 2)
label_334664:
    if (ctx->pc == 0x334664u) {
        ctx->pc = 0x334664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334660u;
        // 0x334664: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334668u;
        goto label_334668;
    }
    ctx->pc = 0x334660u;
    {
        const bool branch_taken_0x334660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334660u;
        // 0x334664: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334660) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334668u;
label_334668:
    // 0x334668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x334668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33466c:
    // 0x33466c: 0x132182  srl         $a0, $s3, 6
    ctx->pc = 0x33466cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334670:
    // 0x334670: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x334670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_334674:
    // 0x334674: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x334674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_334678:
    // 0x334678: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x334678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_33467c:
    // 0x33467c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33467cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_334680:
    // 0x334680: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x334680u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_334684:
    // 0x334684: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x334684u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
label_334688:
    // 0x334688: 0x1000ffa1  b           . + 4 + (-0x5F << 2)
label_33468c:
    if (ctx->pc == 0x33468Cu) {
        ctx->pc = 0x33468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334688u;
        // 0x33468c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334690u;
        goto label_334690;
    }
    ctx->pc = 0x334688u;
    {
        const bool branch_taken_0x334688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334688u;
        // 0x33468c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334688) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334690u;
label_334690:
    // 0x334690: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x334690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_334694:
    // 0x334694: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x334694u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334698:
    // 0x334698: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x334698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_33469c:
    // 0x33469c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33469cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3346a0:
    // 0x3346a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3346a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3346a4:
    // 0x3346a4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3346a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3346a8:
    // 0x3346a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3346a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3346ac:
    // 0x3346ac: 0xc10af3c  jal         func_42BCF0
label_3346b0:
    if (ctx->pc == 0x3346B0u) {
        ctx->pc = 0x3346B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346ACu;
        // 0x3346b0: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3346B4u;
        goto label_3346b4;
    }
    ctx->pc = 0x3346ACu;
    SET_GPR_U32(ctx, 31, 0x3346B4u);
    ctx->pc = 0x3346B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3346ACu;
    // 0x3346b0: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x3346ACu, 0x3346B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3346B4u;
label_3346b4:
    // 0x3346b4: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x3346b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
label_3346b8:
    // 0x3346b8: 0x1000ff95  b           . + 4 + (-0x6B << 2)
label_3346bc:
    if (ctx->pc == 0x3346BCu) {
        ctx->pc = 0x3346BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346B8u;
        // 0x3346bc: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3346C0u;
        goto label_3346c0;
    }
    ctx->pc = 0x3346B8u;
    {
        const bool branch_taken_0x3346b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3346BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346B8u;
        // 0x3346bc: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3346b8) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x3346C0u;
label_3346c0:
    // 0x3346c0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3346c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3346c4:
    // 0x3346c4: 0x131182  srl         $v0, $s3, 6
    ctx->pc = 0x3346c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_3346c8:
    // 0x3346c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3346c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3346cc:
    // 0x3346cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3346ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3346d0:
    // 0x3346d0: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x3346d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_3346d4:
    // 0x3346d4: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x3346d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
label_3346d8:
    // 0x3346d8: 0x1000000f  b           . + 4 + (0xF << 2)
label_3346dc:
    if (ctx->pc == 0x3346DCu) {
        ctx->pc = 0x3346DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346D8u;
        // 0x3346dc: 0xdc440018  ld          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3346E0u;
        goto label_3346e0;
    }
    ctx->pc = 0x3346D8u;
    {
        const bool branch_taken_0x3346d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3346DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346D8u;
        // 0x3346dc: 0xdc440018  ld          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3346d8) {
            ctx->pc = 0x334718u;
            goto label_334718;
        }
    }
    ctx->pc = 0x3346E0u;
label_3346e0:
    // 0x3346e0: 0x131182  srl         $v0, $s3, 6
    ctx->pc = 0x3346e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_3346e4:
    // 0x3346e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3346e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3346e8:
    // 0x3346e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3346ec:
    if (ctx->pc == 0x3346ECu) {
        ctx->pc = 0x3346ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346E8u;
        // 0x3346ec: 0x551021  addu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3346F0u;
        goto label_3346f0;
    }
    ctx->pc = 0x3346E8u;
    {
        const bool branch_taken_0x3346e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3346ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3346E8u;
        // 0x3346ec: 0x551021  addu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3346e8) {
            ctx->pc = 0x33470Cu;
            goto label_33470c;
        }
    }
    ctx->pc = 0x3346F0u;
label_3346f0:
    // 0x3346f0: 0x131182  srl         $v0, $s3, 6
    ctx->pc = 0x3346f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_3346f4:
    // 0x3346f4: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x3346f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_3346f8:
    // 0x3346f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3346f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3346fc:
    // 0x3346fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3346fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334700:
    // 0x334700: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x334700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_334704:
    // 0x334704: 0xc0ccf02  jal         func_333C08
label_334708:
    if (ctx->pc == 0x334708u) {
        ctx->pc = 0x334708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334704u;
        // 0x334708: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33470Cu;
        goto label_33470c;
    }
    ctx->pc = 0x334704u;
    SET_GPR_U32(ctx, 31, 0x33470Cu);
    ctx->pc = 0x334708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334704u;
    // 0x334708: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333C08u, 0x334704u, 0x33470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33470Cu;
label_33470c:
    // 0x33470c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x33470cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_334710:
    // 0x334710: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x334710u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
label_334714:
    // 0x334714: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x334714u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_334718:
    // 0x334718: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x334718u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
label_33471c:
    // 0x33471c: 0x1000ff7c  b           . + 4 + (-0x84 << 2)
label_334720:
    if (ctx->pc == 0x334720u) {
        ctx->pc = 0x334720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33471Cu;
        // 0x334720: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334724u;
        goto label_334724;
    }
    ctx->pc = 0x33471Cu;
    {
        const bool branch_taken_0x33471c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33471Cu;
        // 0x334720: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33471c) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334724u;
label_334724:
    // 0x334724: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x334724u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_334728:
    // 0x334728: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33472c:
    // 0x33472c: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x33472cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_334730:
    // 0x334730: 0x10000018  b           . + 4 + (0x18 << 2)
label_334734:
    if (ctx->pc == 0x334734u) {
        ctx->pc = 0x334734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334730u;
        // 0x334734: 0x2625fff0  addiu       $a1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334738u;
        goto label_334738;
    }
    ctx->pc = 0x334730u;
    {
        const bool branch_taken_0x334730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334730u;
        // 0x334734: 0x2625fff0  addiu       $a1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334730) {
            ctx->pc = 0x334794u;
            goto label_334794;
        }
    }
    ctx->pc = 0x334738u;
label_334738:
    // 0x334738: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x334738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33473c:
    // 0x33473c: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x33473cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334740:
    // 0x334740: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x334740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_334744:
    // 0x334744: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x334744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_334748:
    // 0x334748: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x334748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_33474c:
    // 0x33474c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x33474cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_334750:
    // 0x334750: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x334750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_334754:
    // 0x334754: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334758:
    // 0x334758: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x334758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_33475c:
    // 0x33475c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x33475cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_334760:
    // 0x334760: 0x1000000c  b           . + 4 + (0xC << 2)
label_334764:
    if (ctx->pc == 0x334764u) {
        ctx->pc = 0x334764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334760u;
        // 0x334764: 0xae860000  sw          $a2, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334768u;
        goto label_334768;
    }
    ctx->pc = 0x334760u;
    {
        const bool branch_taken_0x334760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334760u;
        // 0x334764: 0xae860000  sw          $a2, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334760) {
            ctx->pc = 0x334794u;
            goto label_334794;
        }
    }
    ctx->pc = 0x334768u;
label_334768:
    // 0x334768: 0x133182  srl         $a2, $s3, 6
    ctx->pc = 0x334768u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_33476c:
    // 0x33476c: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x33476cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_334770:
    // 0x334770: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x334770u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_334774:
    // 0x334774: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334778:
    // 0x334778: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x334778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_33477c:
    // 0x33477c: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x33477cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_334780:
    // 0x334780: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x334780u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_334784:
    // 0x334784: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x334784u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_334788:
    // 0x334788: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x334788u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
label_33478c:
    // 0x33478c: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x33478cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
label_334790:
    // 0x334790: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x334790u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
label_334794:
    // 0x334794: 0xc0cce5a  jal         func_333968
label_334798:
    if (ctx->pc == 0x334798u) {
        ctx->pc = 0x33479Cu;
        goto label_33479c;
    }
    ctx->pc = 0x334794u;
    SET_GPR_U32(ctx, 31, 0x33479Cu);
    ctx->pc = 0x333968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333968u, 0x334794u, 0x33479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33479Cu;
label_33479c:
    // 0x33479c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x33479cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_3347a0:
    // 0x3347a0: 0x26258000  addiu       $a1, $s1, -0x8000
    ctx->pc = 0x3347a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_3347a4:
    // 0x3347a4: 0xfca37ff0  sd          $v1, 0x7FF0($a1)
    ctx->pc = 0x3347a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32752), GPR_U64(ctx, 3));
label_3347a8:
    // 0x3347a8: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x3347a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_3347ac:
    // 0x3347ac: 0x1000ff58  b           . + 4 + (-0xA8 << 2)
label_3347b0:
    if (ctx->pc == 0x3347B0u) {
        ctx->pc = 0x3347B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3347ACu;
        // 0x3347b0: 0xfca47ff8  sd          $a0, 0x7FF8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32760), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3347B4u;
        goto label_3347b4;
    }
    ctx->pc = 0x3347ACu;
    {
        const bool branch_taken_0x3347ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3347B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3347ACu;
        // 0x3347b0: 0xfca47ff8  sd          $a0, 0x7FF8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32760), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3347ac) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x3347B4u;
label_3347b4:
    // 0x3347b4: 0x26258000  addiu       $a1, $s1, -0x8000
    ctx->pc = 0x3347b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_3347b8:
    // 0x3347b8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3347b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3347bc:
    // 0x3347bc: 0xdca27ff0  ld          $v0, 0x7FF0($a1)
    ctx->pc = 0x3347bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32752)));
label_3347c0:
    // 0x3347c0: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x3347c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_3347c4:
    // 0x3347c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3347c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3347c8:
    // 0x3347c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3347c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3347cc:
    // 0x3347cc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3347ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_3347d0:
    // 0x3347d0: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x3347d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_3347d4:
    // 0x3347d4: 0xdca27ff8  ld          $v0, 0x7FF8($a1)
    ctx->pc = 0x3347d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32760)));
label_3347d8:
    // 0x3347d8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3347d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_3347dc:
    // 0x3347dc: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x3347dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_3347e0:
    // 0x3347e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3347e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3347e4:
    // 0x3347e4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3347e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3347e8:
    // 0x3347e8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3347e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3347ec:
    // 0x3347ec: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x3347ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_3347f0:
    // 0x3347f0: 0xc0cce5a  jal         func_333968
label_3347f4:
    if (ctx->pc == 0x3347F4u) {
        ctx->pc = 0x3347F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3347F0u;
        // 0x3347f4: 0x2625ffe0  addiu       $a1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3347F8u;
        goto label_3347f8;
    }
    ctx->pc = 0x3347F0u;
    SET_GPR_U32(ctx, 31, 0x3347F8u);
    ctx->pc = 0x3347F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3347F0u;
    // 0x3347f4: 0x2625ffe0  addiu       $a1, $s1, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333968u, 0x3347F0u, 0x3347F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3347F8u;
label_3347f8:
    // 0x3347f8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3347f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_3347fc:
    // 0x3347fc: 0x26258000  addiu       $a1, $s1, -0x8000
    ctx->pc = 0x3347fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_334800:
    // 0x334800: 0xfca37fe0  sd          $v1, 0x7FE0($a1)
    ctx->pc = 0x334800u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32736), GPR_U64(ctx, 3));
label_334804:
    // 0x334804: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x334804u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_334808:
    // 0x334808: 0xfca47fe8  sd          $a0, 0x7FE8($a1)
    ctx->pc = 0x334808u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32744), GPR_U64(ctx, 4));
label_33480c:
    // 0x33480c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x33480cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_334810:
    // 0x334810: 0xfca27ff0  sd          $v0, 0x7FF0($a1)
    ctx->pc = 0x334810u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32752), GPR_U64(ctx, 2));
label_334814:
    // 0x334814: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x334814u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_334818:
    // 0x334818: 0x1000ff3d  b           . + 4 + (-0xC3 << 2)
label_33481c:
    if (ctx->pc == 0x33481Cu) {
        ctx->pc = 0x33481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334818u;
        // 0x33481c: 0xfca37ff8  sd          $v1, 0x7FF8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32760), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334820u;
        goto label_334820;
    }
    ctx->pc = 0x334818u;
    {
        const bool branch_taken_0x334818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334818u;
        // 0x33481c: 0xfca37ff8  sd          $v1, 0x7FF8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32760), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334818) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334820u;
label_334820:
    // 0x334820: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x334820u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_334824:
    // 0x334824: 0xc0ca864  jal         func_32A190
label_334828:
    if (ctx->pc == 0x334828u) {
        ctx->pc = 0x334828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334824u;
        // 0x334828: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33482Cu;
        goto label_33482c;
    }
    ctx->pc = 0x334824u;
    SET_GPR_U32(ctx, 31, 0x33482Cu);
    ctx->pc = 0x334828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334824u;
    // 0x334828: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A190u, 0x334824u, 0x33482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33482Cu;
label_33482c:
    // 0x33482c: 0x132982  srl         $a1, $s3, 6
    ctx->pc = 0x33482cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334830:
    // 0x334830: 0xc0cc7e6  jal         func_331F98
label_334834:
    if (ctx->pc == 0x334834u) {
        ctx->pc = 0x334834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334830u;
        // 0x334834: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334838u;
        goto label_334838;
    }
    ctx->pc = 0x334830u;
    SET_GPR_U32(ctx, 31, 0x334838u);
    ctx->pc = 0x334834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334830u;
    // 0x334834: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331F98u, 0x334830u, 0x334838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334838u;
label_334838:
    // 0x334838: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x334838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33483c:
    // 0x33483c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x33483cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_334840:
    // 0x334840: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x334840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_334844:
    // 0x334844: 0x1000ff32  b           . + 4 + (-0xCE << 2)
label_334848:
    if (ctx->pc == 0x334848u) {
        ctx->pc = 0x334848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334844u;
        // 0x334848: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33484Cu;
        goto label_33484c;
    }
    ctx->pc = 0x334844u;
    {
        const bool branch_taken_0x334844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334844u;
        // 0x334848: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334844) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x33484Cu;
label_33484c:
    // 0x33484c: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x33484cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_334850:
    // 0x334850: 0x131182  srl         $v0, $s3, 6
    ctx->pc = 0x334850u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334854:
    // 0x334854: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x334854u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_334858:
    // 0x334858: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x334858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_33485c:
    // 0x33485c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x33485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_334860:
    // 0x334860: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x334860u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
label_334864:
    // 0x334864: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x334864u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
label_334868:
    // 0x334868: 0x1000ff29  b           . + 4 + (-0xD7 << 2)
label_33486c:
    if (ctx->pc == 0x33486Cu) {
        ctx->pc = 0x33486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334868u;
        // 0x33486c: 0xfc430008  sd          $v1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334870u;
        goto label_334870;
    }
    ctx->pc = 0x334868u;
    {
        const bool branch_taken_0x334868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334868u;
        // 0x33486c: 0xfc430008  sd          $v1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334868) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334870u;
label_334870:
    // 0x334870: 0x131182  srl         $v0, $s3, 6
    ctx->pc = 0x334870u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334874:
    // 0x334874: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x334874u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_334878:
    // 0x334878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x334878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33487c:
    // 0x33487c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33487cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334880:
    // 0x334880: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x334880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_334884:
    // 0x334884: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x334884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_334888:
    // 0x334888: 0xc0ccf38  jal         func_333CE0
label_33488c:
    if (ctx->pc == 0x33488Cu) {
        ctx->pc = 0x33488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334888u;
        // 0x33488c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334890u;
        goto label_334890;
    }
    ctx->pc = 0x334888u;
    SET_GPR_U32(ctx, 31, 0x334890u);
    ctx->pc = 0x33488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334888u;
    // 0x33488c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333CE0u, 0x334888u, 0x334890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334890u;
label_334890:
    // 0x334890: 0x1000ff20  b           . + 4 + (-0xE0 << 2)
label_334894:
    if (ctx->pc == 0x334894u) {
        ctx->pc = 0x334894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334890u;
        // 0x334894: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334898u;
        goto label_334898;
    }
    ctx->pc = 0x334890u;
    {
        const bool branch_taken_0x334890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334890u;
        // 0x334894: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334890) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334898u;
label_334898:
    // 0x334898: 0x132bc2  srl         $a1, $s3, 15
    ctx->pc = 0x334898u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 15));
label_33489c:
    // 0x33489c: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x33489cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_3348a0:
    // 0x3348a0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3348a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3348a4:
    // 0x3348a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3348a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3348a8:
    // 0x3348a8: 0x2252823  subu        $a1, $s1, $a1
    ctx->pc = 0x3348a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3348ac:
    // 0x3348ac: 0xc0cceae  jal         func_333AB8
label_3348b0:
    if (ctx->pc == 0x3348B0u) {
        ctx->pc = 0x3348B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348ACu;
        // 0x3348b0: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3348B4u;
        goto label_3348b4;
    }
    ctx->pc = 0x3348ACu;
    SET_GPR_U32(ctx, 31, 0x3348B4u);
    ctx->pc = 0x3348B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3348ACu;
    // 0x3348b0: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333AB8u, 0x3348ACu, 0x3348B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3348B4u;
label_3348b4:
    // 0x3348b4: 0x131082  srl         $v0, $s3, 2
    ctx->pc = 0x3348b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 2));
label_3348b8:
    // 0x3348b8: 0x30421ff0  andi        $v0, $v0, 0x1FF0
    ctx->pc = 0x3348b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8176);
label_3348bc:
    // 0x3348bc: 0x1000ff14  b           . + 4 + (-0xEC << 2)
label_3348c0:
    if (ctx->pc == 0x3348C0u) {
        ctx->pc = 0x3348C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348BCu;
        // 0x3348c0: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3348C4u;
        goto label_3348c4;
    }
    ctx->pc = 0x3348BCu;
    {
        const bool branch_taken_0x3348bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3348C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348BCu;
        // 0x3348c0: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3348bc) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x3348C4u;
label_3348c4:
    // 0x3348c4: 0x131182  srl         $v0, $s3, 6
    ctx->pc = 0x3348c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_3348c8:
    // 0x3348c8: 0x1323c2  srl         $a0, $s3, 15
    ctx->pc = 0x3348c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 15));
label_3348cc:
    // 0x3348cc: 0x305001ff  andi        $s0, $v0, 0x1FF
    ctx->pc = 0x3348ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_3348d0:
    // 0x3348d0: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x3348d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_3348d4:
    // 0x3348d4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3348d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3348d8:
    // 0x3348d8: 0x839818  mult        $s3, $a0, $v1
    ctx->pc = 0x3348d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_3348dc:
    // 0x3348dc: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x3348dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3348e0:
    // 0x3348e0: 0x8c52fff8  lw          $s2, -0x8($v0)
    ctx->pc = 0x3348e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967288)));
label_3348e4:
    // 0x3348e4: 0x1200ff0a  beqz        $s0, . + 4 + (-0xF6 << 2)
label_3348e8:
    if (ctx->pc == 0x3348E8u) {
        ctx->pc = 0x3348E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348E4u;
        // 0x3348e8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3348ECu;
        goto label_3348ec;
    }
    ctx->pc = 0x3348E4u;
    {
        const bool branch_taken_0x3348e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3348E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348E4u;
        // 0x3348e8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3348e4) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x3348ECu;
label_3348ec:
    // 0x3348ec: 0x0  nop
    ctx->pc = 0x3348ecu;
    // NOP
label_3348f0:
    // 0x3348f0: 0x2133021  addu        $a2, $s0, $s3
    ctx->pc = 0x3348f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_3348f4:
    // 0x3348f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3348f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3348f8:
    // 0x3348f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3348f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3348fc:
    // 0x3348fc: 0xc0cc8c6  jal         func_332318
label_334900:
    if (ctx->pc == 0x334900u) {
        ctx->pc = 0x334900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348FCu;
        // 0x334900: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334904u;
        goto label_334904;
    }
    ctx->pc = 0x3348FCu;
    SET_GPR_U32(ctx, 31, 0x334904u);
    ctx->pc = 0x334900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3348FCu;
    // 0x334900: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332318u, 0x3348FCu, 0x334904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334904u;
label_334904:
    // 0x334904: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x334904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_334908:
    // 0x334908: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x334908u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_33490c:
    // 0x33490c: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x33490cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
label_334910:
    // 0x334910: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x334910u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
label_334914:
    // 0x334914: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
label_334918:
    if (ctx->pc == 0x334918u) {
        ctx->pc = 0x334918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334914u;
        // 0x334918: 0xfc430008  sd          $v1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33491Cu;
        goto label_33491c;
    }
    ctx->pc = 0x334914u;
    {
        const bool branch_taken_0x334914 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x334918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334914u;
        // 0x334918: 0xfc430008  sd          $v1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334914) {
            ctx->pc = 0x3348F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3348f0;
        }
    }
    ctx->pc = 0x33491Cu;
label_33491c:
    // 0x33491c: 0x1000fefd  b           . + 4 + (-0x103 << 2)
label_334920:
    if (ctx->pc == 0x334920u) {
        ctx->pc = 0x334920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33491Cu;
        // 0x334920: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334924u;
        goto label_334924;
    }
    ctx->pc = 0x33491Cu;
    {
        const bool branch_taken_0x33491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33491Cu;
        // 0x334920: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33491c) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334924u;
label_334924:
    // 0x334924: 0x138182  srl         $s0, $s3, 6
    ctx->pc = 0x334924u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334928:
    // 0x334928: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x334928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_33492c:
    // 0x33492c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x33492cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_334930:
    // 0x334930: 0x8c52fff8  lw          $s2, -0x8($v0)
    ctx->pc = 0x334930u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967288)));
label_334934:
    // 0x334934: 0x1200fef6  beqz        $s0, . + 4 + (-0x10A << 2)
label_334938:
    if (ctx->pc == 0x334938u) {
        ctx->pc = 0x334938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334934u;
        // 0x334938: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33493Cu;
        goto label_33493c;
    }
    ctx->pc = 0x334934u;
    {
        const bool branch_taken_0x334934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x334938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334934u;
        // 0x334938: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334934) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x33493Cu;
label_33493c:
    // 0x33493c: 0x0  nop
    ctx->pc = 0x33493cu;
    // NOP
label_334940:
    // 0x334940: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x334940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_334944:
    // 0x334944: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334948:
    // 0x334948: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x334948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33494c:
    // 0x33494c: 0xc0cc862  jal         func_332188
label_334950:
    if (ctx->pc == 0x334950u) {
        ctx->pc = 0x334950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33494Cu;
        // 0x334950: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334954u;
        goto label_334954;
    }
    ctx->pc = 0x33494Cu;
    SET_GPR_U32(ctx, 31, 0x334954u);
    ctx->pc = 0x334950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33494Cu;
    // 0x334950: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332188u, 0x33494Cu, 0x334954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334954u;
label_334954:
    // 0x334954: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x334954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_334958:
    // 0x334958: 0xde240010  ld          $a0, 0x10($s1)
    ctx->pc = 0x334958u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_33495c:
    // 0x33495c: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x33495cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
label_334960:
    // 0x334960: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x334960u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_334964:
    // 0x334964: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
label_334968:
    if (ctx->pc == 0x334968u) {
        ctx->pc = 0x334968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334964u;
        // 0x334968: 0xfc430008  sd          $v1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33496Cu;
        goto label_33496c;
    }
    ctx->pc = 0x334964u;
    {
        const bool branch_taken_0x334964 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x334968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334964u;
        // 0x334968: 0xfc430008  sd          $v1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334964) {
            ctx->pc = 0x334940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334940;
        }
    }
    ctx->pc = 0x33496Cu;
label_33496c:
    // 0x33496c: 0x1000fee9  b           . + 4 + (-0x117 << 2)
label_334970:
    if (ctx->pc == 0x334970u) {
        ctx->pc = 0x334970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33496Cu;
        // 0x334970: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334974u;
        goto label_334974;
    }
    ctx->pc = 0x33496Cu;
    {
        const bool branch_taken_0x33496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33496Cu;
        // 0x334970: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33496c) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334974u;
label_334974:
    // 0x334974: 0x26228000  addiu       $v0, $s1, -0x8000
    ctx->pc = 0x334974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_334978:
    // 0x334978: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x334978u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33497c:
    // 0x33497c: 0x8c437fe0  lw          $v1, 0x7FE0($v0)
    ctx->pc = 0x33497cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32736)));
label_334980:
    // 0x334980: 0x10730006  beq         $v1, $s3, . + 4 + (0x6 << 2)
label_334984:
    if (ctx->pc == 0x334984u) {
        ctx->pc = 0x334984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334980u;
        // 0x334984: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334988u;
        goto label_334988;
    }
    ctx->pc = 0x334980u;
    {
        const bool branch_taken_0x334980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x334984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334980u;
        // 0x334984: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334980) {
            ctx->pc = 0x33499Cu;
            goto label_33499c;
        }
    }
    ctx->pc = 0x334988u;
label_334988:
    // 0x334988: 0x2624ffe0  addiu       $a0, $s1, -0x20
    ctx->pc = 0x334988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_33498c:
    // 0x33498c: 0xc0ccda2  jal         func_333688
label_334990:
    if (ctx->pc == 0x334990u) {
        ctx->pc = 0x334990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33498Cu;
        // 0x334990: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334994u;
        goto label_334994;
    }
    ctx->pc = 0x33498Cu;
    SET_GPR_U32(ctx, 31, 0x334994u);
    ctx->pc = 0x334990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33498Cu;
    // 0x334990: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x33498Cu, 0x334994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334994u;
label_334994:
    // 0x334994: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_334998:
    if (ctx->pc == 0x334998u) {
        ctx->pc = 0x334998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334994u;
        // 0x334998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33499Cu;
        goto label_33499c;
    }
    ctx->pc = 0x334994u;
    {
        const bool branch_taken_0x334994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334994u;
        // 0x334998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334994) {
            ctx->pc = 0x3349B8u;
            goto label_3349b8;
        }
    }
    ctx->pc = 0x33499Cu;
label_33499c:
    // 0x33499c: 0x8e427ff0  lw          $v0, 0x7FF0($s2)
    ctx->pc = 0x33499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32752)));
label_3349a0:
    // 0x3349a0: 0x1053000a  beq         $v0, $s3, . + 4 + (0xA << 2)
label_3349a4:
    if (ctx->pc == 0x3349A4u) {
        ctx->pc = 0x3349A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349A0u;
        // 0x3349a4: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3349A8u;
        goto label_3349a8;
    }
    ctx->pc = 0x3349A0u;
    {
        const bool branch_taken_0x3349a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x3349A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349A0u;
        // 0x3349a4: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349a0) {
            ctx->pc = 0x3349CCu;
            goto label_3349cc;
        }
    }
    ctx->pc = 0x3349A8u;
label_3349a8:
    // 0x3349a8: 0xc0ccda2  jal         func_333688
label_3349ac:
    if (ctx->pc == 0x3349ACu) {
        ctx->pc = 0x3349ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349A8u;
        // 0x3349ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3349B0u;
        goto label_3349b0;
    }
    ctx->pc = 0x3349A8u;
    SET_GPR_U32(ctx, 31, 0x3349B0u);
    ctx->pc = 0x3349ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3349A8u;
    // 0x3349ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x3349A8u, 0x3349B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3349B0u;
label_3349b0:
    // 0x3349b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3349b4:
    if (ctx->pc == 0x3349B4u) {
        ctx->pc = 0x3349B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349B0u;
        // 0x3349b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3349B8u;
        goto label_3349b8;
    }
    ctx->pc = 0x3349B0u;
    {
        const bool branch_taken_0x3349b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3349B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349B0u;
        // 0x3349b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349b0) {
            ctx->pc = 0x3349CCu;
            goto label_3349cc;
        }
    }
    ctx->pc = 0x3349B8u;
label_3349b8:
    // 0x3349b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3349b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3349bc:
    // 0x3349bc: 0xc0ccfbe  jal         func_333EF8
label_3349c0:
    if (ctx->pc == 0x3349C0u) {
        ctx->pc = 0x3349C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349BCu;
        // 0x3349c0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3349C4u;
        goto label_3349c4;
    }
    ctx->pc = 0x3349BCu;
    SET_GPR_U32(ctx, 31, 0x3349C4u);
    ctx->pc = 0x3349C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3349BCu;
    // 0x3349c0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333EF8u, 0x3349BCu, 0x3349C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3349C4u;
label_3349c4:
    // 0x3349c4: 0x1000fed2  b           . + 4 + (-0x12E << 2)
label_3349c8:
    if (ctx->pc == 0x3349C8u) {
        ctx->pc = 0x3349C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349C4u;
        // 0x3349c8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3349CCu;
        goto label_3349cc;
    }
    ctx->pc = 0x3349C4u;
    {
        const bool branch_taken_0x3349c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3349C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349C4u;
        // 0x3349c8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349c4) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x3349CCu;
label_3349cc:
    // 0x3349cc: 0xde447fe8  ld          $a0, 0x7FE8($s2)
    ctx->pc = 0x3349ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32744)));
label_3349d0:
    // 0x3349d0: 0xc10af26  jal         func_42BC98
label_3349d4:
    if (ctx->pc == 0x3349D4u) {
        ctx->pc = 0x3349D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349D0u;
        // 0x3349d4: 0xde457ff8  ld          $a1, 0x7FF8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3349D8u;
        goto label_3349d8;
    }
    ctx->pc = 0x3349D0u;
    SET_GPR_U32(ctx, 31, 0x3349D8u);
    ctx->pc = 0x3349D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3349D0u;
    // 0x3349d4: 0xde457ff8  ld          $a1, 0x7FF8($s2) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3349D0u, 0x3349D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3349D8u;
label_3349d8:
    // 0x3349d8: 0x10000070  b           . + 4 + (0x70 << 2)
label_3349dc:
    if (ctx->pc == 0x3349DCu) {
        ctx->pc = 0x3349DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349D8u;
        // 0x3349dc: 0xfe427fe8  sd          $v0, 0x7FE8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 32744), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3349E0u;
        goto label_3349e0;
    }
    ctx->pc = 0x3349D8u;
    {
        const bool branch_taken_0x3349d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3349DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349D8u;
        // 0x3349dc: 0xfe427fe8  sd          $v0, 0x7FE8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 32744), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349d8) {
            ctx->pc = 0x334B9Cu;
            goto label_334b9c;
        }
    }
    ctx->pc = 0x3349E0u;
label_3349e0:
    // 0x3349e0: 0x26228000  addiu       $v0, $s1, -0x8000
    ctx->pc = 0x3349e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_3349e4:
    // 0x3349e4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x3349e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3349e8:
    // 0x3349e8: 0x8c437ff0  lw          $v1, 0x7FF0($v0)
    ctx->pc = 0x3349e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32752)));
label_3349ec:
    // 0x3349ec: 0x10700011  beq         $v1, $s0, . + 4 + (0x11 << 2)
label_3349f0:
    if (ctx->pc == 0x3349F0u) {
        ctx->pc = 0x3349F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349ECu;
        // 0x3349f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3349F4u;
        goto label_3349f4;
    }
    ctx->pc = 0x3349ECu;
    {
        const bool branch_taken_0x3349ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x3349F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349ECu;
        // 0x3349f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349ec) {
            ctx->pc = 0x334A34u;
            goto label_334a34;
        }
    }
    ctx->pc = 0x3349F4u;
label_3349f4:
    // 0x3349f4: 0xc0ccda2  jal         func_333688
label_3349f8:
    if (ctx->pc == 0x3349F8u) {
        ctx->pc = 0x3349F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349F4u;
        // 0x3349f8: 0x2624fff0  addiu       $a0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3349FCu;
        goto label_3349fc;
    }
    ctx->pc = 0x3349F4u;
    SET_GPR_U32(ctx, 31, 0x3349FCu);
    ctx->pc = 0x3349F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3349F4u;
    // 0x3349f8: 0x2624fff0  addiu       $a0, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x3349F4u, 0x3349FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3349FCu;
label_3349fc:
    // 0x3349fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_334a00:
    if (ctx->pc == 0x334A00u) {
        ctx->pc = 0x334A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349FCu;
        // 0x334a00: 0x131182  srl         $v0, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334A04u;
        goto label_334a04;
    }
    ctx->pc = 0x3349FCu;
    {
        const bool branch_taken_0x3349fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349FCu;
        // 0x334a00: 0x131182  srl         $v0, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349fc) {
            ctx->pc = 0x334A34u;
            goto label_334a34;
        }
    }
    ctx->pc = 0x334A04u;
label_334a04:
    // 0x334a04: 0x3c04fe00  lui         $a0, 0xFE00
    ctx->pc = 0x334a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65024 << 16));
label_334a08:
    // 0x334a08: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x334a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_334a0c:
    // 0x334a0c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x334a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_334a10:
    // 0x334a10: 0xc10b0b4  jal         func_42C2D0
label_334a14:
    if (ctx->pc == 0x334A14u) {
        ctx->pc = 0x334A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A10u;
        // 0x334a14: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334A18u;
        goto label_334a18;
    }
    ctx->pc = 0x334A10u;
    SET_GPR_U32(ctx, 31, 0x334A18u);
    ctx->pc = 0x334A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A10u;
    // 0x334a14: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x334A10u, 0x334A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A18u;
label_334a18:
    // 0x334a18: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x334a18u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
label_334a1c:
    // 0x334a1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334a20:
    // 0x334a20: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x334a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_334a24:
    // 0x334a24: 0xc0ccfbe  jal         func_333EF8
label_334a28:
    if (ctx->pc == 0x334A28u) {
        ctx->pc = 0x334A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A24u;
        // 0x334a28: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334A2Cu;
        goto label_334a2c;
    }
    ctx->pc = 0x334A24u;
    SET_GPR_U32(ctx, 31, 0x334A2Cu);
    ctx->pc = 0x334A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A24u;
    // 0x334a28: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333EF8u, 0x334A24u, 0x334A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A2Cu;
label_334a2c:
    // 0x334a2c: 0x1000feb9  b           . + 4 + (-0x147 << 2)
label_334a30:
    if (ctx->pc == 0x334A30u) {
        ctx->pc = 0x334A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A2Cu;
        // 0x334a30: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334A34u;
        goto label_334a34;
    }
    ctx->pc = 0x334A2Cu;
    {
        const bool branch_taken_0x334a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A2Cu;
        // 0x334a30: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a2c) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334A34u;
label_334a34:
    // 0x334a34: 0x3c04fe00  lui         $a0, 0xFE00
    ctx->pc = 0x334a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65024 << 16));
label_334a38:
    // 0x334a38: 0x131182  srl         $v0, $s3, 6
    ctx->pc = 0x334a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334a3c:
    // 0x334a3c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x334a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_334a40:
    // 0x334a40: 0xc10b0b4  jal         func_42C2D0
label_334a44:
    if (ctx->pc == 0x334A44u) {
        ctx->pc = 0x334A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A40u;
        // 0x334a44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334A48u;
        goto label_334a48;
    }
    ctx->pc = 0x334A40u;
    SET_GPR_U32(ctx, 31, 0x334A48u);
    ctx->pc = 0x334A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A40u;
    // 0x334a44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x334A40u, 0x334A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A48u;
label_334a48:
    // 0x334a48: 0xde447ff8  ld          $a0, 0x7FF8($s2)
    ctx->pc = 0x334a48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32760)));
label_334a4c:
    // 0x334a4c: 0xc10af26  jal         func_42BC98
label_334a50:
    if (ctx->pc == 0x334A50u) {
        ctx->pc = 0x334A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A4Cu;
        // 0x334a50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334A54u;
        goto label_334a54;
    }
    ctx->pc = 0x334A4Cu;
    SET_GPR_U32(ctx, 31, 0x334A54u);
    ctx->pc = 0x334A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A4Cu;
    // 0x334a50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x334A4Cu, 0x334A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A54u;
label_334a54:
    // 0x334a54: 0x1000feae  b           . + 4 + (-0x152 << 2)
label_334a58:
    if (ctx->pc == 0x334A58u) {
        ctx->pc = 0x334A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A54u;
        // 0x334a58: 0xfe427ff8  sd          $v0, 0x7FF8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 32760), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334A5Cu;
        goto label_334a5c;
    }
    ctx->pc = 0x334A54u;
    {
        const bool branch_taken_0x334a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A54u;
        // 0x334a58: 0xfe427ff8  sd          $v0, 0x7FF8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 32760), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a54) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334A5Cu;
label_334a5c:
    // 0x334a5c: 0x26228000  addiu       $v0, $s1, -0x8000
    ctx->pc = 0x334a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_334a60:
    // 0x334a60: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x334a60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_334a64:
    // 0x334a64: 0x8c437fe0  lw          $v1, 0x7FE0($v0)
    ctx->pc = 0x334a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32736)));
label_334a68:
    // 0x334a68: 0x10730006  beq         $v1, $s3, . + 4 + (0x6 << 2)
label_334a6c:
    if (ctx->pc == 0x334A6Cu) {
        ctx->pc = 0x334A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A68u;
        // 0x334a6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334A70u;
        goto label_334a70;
    }
    ctx->pc = 0x334A68u;
    {
        const bool branch_taken_0x334a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x334A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A68u;
        // 0x334a6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a68) {
            ctx->pc = 0x334A84u;
            goto label_334a84;
        }
    }
    ctx->pc = 0x334A70u;
label_334a70:
    // 0x334a70: 0x2624ffe0  addiu       $a0, $s1, -0x20
    ctx->pc = 0x334a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_334a74:
    // 0x334a74: 0xc0ccda2  jal         func_333688
label_334a78:
    if (ctx->pc == 0x334A78u) {
        ctx->pc = 0x334A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A74u;
        // 0x334a78: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334A7Cu;
        goto label_334a7c;
    }
    ctx->pc = 0x334A74u;
    SET_GPR_U32(ctx, 31, 0x334A7Cu);
    ctx->pc = 0x334A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A74u;
    // 0x334a78: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x334A74u, 0x334A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A7Cu;
label_334a7c:
    // 0x334a7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_334a80:
    if (ctx->pc == 0x334A80u) {
        ctx->pc = 0x334A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A7Cu;
        // 0x334a80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334A84u;
        goto label_334a84;
    }
    ctx->pc = 0x334A7Cu;
    {
        const bool branch_taken_0x334a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A7Cu;
        // 0x334a80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a7c) {
            ctx->pc = 0x334AA0u;
            goto label_334aa0;
        }
    }
    ctx->pc = 0x334A84u;
label_334a84:
    // 0x334a84: 0x8e427ff0  lw          $v0, 0x7FF0($s2)
    ctx->pc = 0x334a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32752)));
label_334a88:
    // 0x334a88: 0x1053000a  beq         $v0, $s3, . + 4 + (0xA << 2)
label_334a8c:
    if (ctx->pc == 0x334A8Cu) {
        ctx->pc = 0x334A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A88u;
        // 0x334a8c: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334A90u;
        goto label_334a90;
    }
    ctx->pc = 0x334A88u;
    {
        const bool branch_taken_0x334a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x334A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A88u;
        // 0x334a8c: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a88) {
            ctx->pc = 0x334AB4u;
            goto label_334ab4;
        }
    }
    ctx->pc = 0x334A90u;
label_334a90:
    // 0x334a90: 0xc0ccda2  jal         func_333688
label_334a94:
    if (ctx->pc == 0x334A94u) {
        ctx->pc = 0x334A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A90u;
        // 0x334a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334A98u;
        goto label_334a98;
    }
    ctx->pc = 0x334A90u;
    SET_GPR_U32(ctx, 31, 0x334A98u);
    ctx->pc = 0x334A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A90u;
    // 0x334a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x334A90u, 0x334A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A98u;
label_334a98:
    // 0x334a98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_334a9c:
    if (ctx->pc == 0x334A9Cu) {
        ctx->pc = 0x334A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A98u;
        // 0x334a9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334AA0u;
        goto label_334aa0;
    }
    ctx->pc = 0x334A98u;
    {
        const bool branch_taken_0x334a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A98u;
        // 0x334a9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a98) {
            ctx->pc = 0x334AB4u;
            goto label_334ab4;
        }
    }
    ctx->pc = 0x334AA0u;
label_334aa0:
    // 0x334aa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334aa4:
    // 0x334aa4: 0xc0ccfbe  jal         func_333EF8
label_334aa8:
    if (ctx->pc == 0x334AA8u) {
        ctx->pc = 0x334AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AA4u;
        // 0x334aa8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334AACu;
        goto label_334aac;
    }
    ctx->pc = 0x334AA4u;
    SET_GPR_U32(ctx, 31, 0x334AACu);
    ctx->pc = 0x334AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334AA4u;
    // 0x334aa8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333EF8u, 0x334AA4u, 0x334AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334AACu;
label_334aac:
    // 0x334aac: 0x1000fe98  b           . + 4 + (-0x168 << 2)
label_334ab0:
    if (ctx->pc == 0x334AB0u) {
        ctx->pc = 0x334AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AACu;
        // 0x334ab0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334AB4u;
        goto label_334ab4;
    }
    ctx->pc = 0x334AACu;
    {
        const bool branch_taken_0x334aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AACu;
        // 0x334ab0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334aac) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334AB4u;
label_334ab4:
    // 0x334ab4: 0xde447fe8  ld          $a0, 0x7FE8($s2)
    ctx->pc = 0x334ab4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32744)));
label_334ab8:
    // 0x334ab8: 0xc10af3c  jal         func_42BCF0
label_334abc:
    if (ctx->pc == 0x334ABCu) {
        ctx->pc = 0x334ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AB8u;
        // 0x334abc: 0xde457ff8  ld          $a1, 0x7FF8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334AC0u;
        goto label_334ac0;
    }
    ctx->pc = 0x334AB8u;
    SET_GPR_U32(ctx, 31, 0x334AC0u);
    ctx->pc = 0x334ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334AB8u;
    // 0x334abc: 0xde457ff8  ld          $a1, 0x7FF8($s2) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x334AB8u, 0x334AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334AC0u;
label_334ac0:
    // 0x334ac0: 0x10000036  b           . + 4 + (0x36 << 2)
label_334ac4:
    if (ctx->pc == 0x334AC4u) {
        ctx->pc = 0x334AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AC0u;
        // 0x334ac4: 0xfe427fe8  sd          $v0, 0x7FE8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 32744), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334AC8u;
        goto label_334ac8;
    }
    ctx->pc = 0x334AC0u;
    {
        const bool branch_taken_0x334ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AC0u;
        // 0x334ac4: 0xfe427fe8  sd          $v0, 0x7FE8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 32744), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ac0) {
            ctx->pc = 0x334B9Cu;
            goto label_334b9c;
        }
    }
    ctx->pc = 0x334AC8u;
label_334ac8:
    // 0x334ac8: 0x26228000  addiu       $v0, $s1, -0x8000
    ctx->pc = 0x334ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_334acc:
    // 0x334acc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x334accu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_334ad0:
    // 0x334ad0: 0x8c437fe0  lw          $v1, 0x7FE0($v0)
    ctx->pc = 0x334ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32736)));
label_334ad4:
    // 0x334ad4: 0x10730006  beq         $v1, $s3, . + 4 + (0x6 << 2)
label_334ad8:
    if (ctx->pc == 0x334AD8u) {
        ctx->pc = 0x334AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AD4u;
        // 0x334ad8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334ADCu;
        goto label_334adc;
    }
    ctx->pc = 0x334AD4u;
    {
        const bool branch_taken_0x334ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x334AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AD4u;
        // 0x334ad8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ad4) {
            ctx->pc = 0x334AF0u;
            goto label_334af0;
        }
    }
    ctx->pc = 0x334ADCu;
label_334adc:
    // 0x334adc: 0x2624ffe0  addiu       $a0, $s1, -0x20
    ctx->pc = 0x334adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_334ae0:
    // 0x334ae0: 0xc0ccda2  jal         func_333688
label_334ae4:
    if (ctx->pc == 0x334AE4u) {
        ctx->pc = 0x334AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AE0u;
        // 0x334ae4: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334AE8u;
        goto label_334ae8;
    }
    ctx->pc = 0x334AE0u;
    SET_GPR_U32(ctx, 31, 0x334AE8u);
    ctx->pc = 0x334AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334AE0u;
    // 0x334ae4: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x334AE0u, 0x334AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334AE8u;
label_334ae8:
    // 0x334ae8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_334aec:
    if (ctx->pc == 0x334AECu) {
        ctx->pc = 0x334AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AE8u;
        // 0x334aec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334AF0u;
        goto label_334af0;
    }
    ctx->pc = 0x334AE8u;
    {
        const bool branch_taken_0x334ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AE8u;
        // 0x334aec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ae8) {
            ctx->pc = 0x334B0Cu;
            goto label_334b0c;
        }
    }
    ctx->pc = 0x334AF0u;
label_334af0:
    // 0x334af0: 0x8e427ff0  lw          $v0, 0x7FF0($s2)
    ctx->pc = 0x334af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32752)));
label_334af4:
    // 0x334af4: 0x1053000a  beq         $v0, $s3, . + 4 + (0xA << 2)
label_334af8:
    if (ctx->pc == 0x334AF8u) {
        ctx->pc = 0x334AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AF4u;
        // 0x334af8: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334AFCu;
        goto label_334afc;
    }
    ctx->pc = 0x334AF4u;
    {
        const bool branch_taken_0x334af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x334AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AF4u;
        // 0x334af8: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334af4) {
            ctx->pc = 0x334B20u;
            goto label_334b20;
        }
    }
    ctx->pc = 0x334AFCu;
label_334afc:
    // 0x334afc: 0xc0ccda2  jal         func_333688
label_334b00:
    if (ctx->pc == 0x334B00u) {
        ctx->pc = 0x334B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AFCu;
        // 0x334b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B04u;
        goto label_334b04;
    }
    ctx->pc = 0x334AFCu;
    SET_GPR_U32(ctx, 31, 0x334B04u);
    ctx->pc = 0x334B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334AFCu;
    // 0x334b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x334AFCu, 0x334B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B04u;
label_334b04:
    // 0x334b04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_334b08:
    if (ctx->pc == 0x334B08u) {
        ctx->pc = 0x334B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B04u;
        // 0x334b08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B0Cu;
        goto label_334b0c;
    }
    ctx->pc = 0x334B04u;
    {
        const bool branch_taken_0x334b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B04u;
        // 0x334b08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b04) {
            ctx->pc = 0x334B20u;
            goto label_334b20;
        }
    }
    ctx->pc = 0x334B0Cu;
label_334b0c:
    // 0x334b0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334b10:
    // 0x334b10: 0xc0ccfbe  jal         func_333EF8
label_334b14:
    if (ctx->pc == 0x334B14u) {
        ctx->pc = 0x334B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B10u;
        // 0x334b14: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B18u;
        goto label_334b18;
    }
    ctx->pc = 0x334B10u;
    SET_GPR_U32(ctx, 31, 0x334B18u);
    ctx->pc = 0x334B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B10u;
    // 0x334b14: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333EF8u, 0x334B10u, 0x334B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B18u;
label_334b18:
    // 0x334b18: 0x1000fe7d  b           . + 4 + (-0x183 << 2)
label_334b1c:
    if (ctx->pc == 0x334B1Cu) {
        ctx->pc = 0x334B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B18u;
        // 0x334b1c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B20u;
        goto label_334b20;
    }
    ctx->pc = 0x334B18u;
    {
        const bool branch_taken_0x334b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B18u;
        // 0x334b1c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b18) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334B20u;
label_334b20:
    // 0x334b20: 0xde447fe8  ld          $a0, 0x7FE8($s2)
    ctx->pc = 0x334b20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32744)));
label_334b24:
    // 0x334b24: 0xc10af56  jal         func_42BD58
label_334b28:
    if (ctx->pc == 0x334B28u) {
        ctx->pc = 0x334B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B24u;
        // 0x334b28: 0xde457ff8  ld          $a1, 0x7FF8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B2Cu;
        goto label_334b2c;
    }
    ctx->pc = 0x334B24u;
    SET_GPR_U32(ctx, 31, 0x334B2Cu);
    ctx->pc = 0x334B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B24u;
    // 0x334b28: 0xde457ff8  ld          $a1, 0x7FF8($s2) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x334B24u, 0x334B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B2Cu;
label_334b2c:
    // 0x334b2c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_334b30:
    if (ctx->pc == 0x334B30u) {
        ctx->pc = 0x334B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B2Cu;
        // 0x334b30: 0xfe427fe8  sd          $v0, 0x7FE8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 32744), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B34u;
        goto label_334b34;
    }
    ctx->pc = 0x334B2Cu;
    {
        const bool branch_taken_0x334b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B2Cu;
        // 0x334b30: 0xfe427fe8  sd          $v0, 0x7FE8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 32744), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b2c) {
            ctx->pc = 0x334B9Cu;
            goto label_334b9c;
        }
    }
    ctx->pc = 0x334B34u;
label_334b34:
    // 0x334b34: 0x26228000  addiu       $v0, $s1, -0x8000
    ctx->pc = 0x334b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_334b38:
    // 0x334b38: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x334b38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_334b3c:
    // 0x334b3c: 0x8c437fe0  lw          $v1, 0x7FE0($v0)
    ctx->pc = 0x334b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32736)));
label_334b40:
    // 0x334b40: 0x10730006  beq         $v1, $s3, . + 4 + (0x6 << 2)
label_334b44:
    if (ctx->pc == 0x334B44u) {
        ctx->pc = 0x334B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B40u;
        // 0x334b44: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B48u;
        goto label_334b48;
    }
    ctx->pc = 0x334B40u;
    {
        const bool branch_taken_0x334b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x334B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B40u;
        // 0x334b44: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b40) {
            ctx->pc = 0x334B5Cu;
            goto label_334b5c;
        }
    }
    ctx->pc = 0x334B48u;
label_334b48:
    // 0x334b48: 0x2624ffe0  addiu       $a0, $s1, -0x20
    ctx->pc = 0x334b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_334b4c:
    // 0x334b4c: 0xc0ccda2  jal         func_333688
label_334b50:
    if (ctx->pc == 0x334B50u) {
        ctx->pc = 0x334B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B4Cu;
        // 0x334b50: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B54u;
        goto label_334b54;
    }
    ctx->pc = 0x334B4Cu;
    SET_GPR_U32(ctx, 31, 0x334B54u);
    ctx->pc = 0x334B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B4Cu;
    // 0x334b50: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x334B4Cu, 0x334B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B54u;
label_334b54:
    // 0x334b54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_334b58:
    if (ctx->pc == 0x334B58u) {
        ctx->pc = 0x334B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B54u;
        // 0x334b58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B5Cu;
        goto label_334b5c;
    }
    ctx->pc = 0x334B54u;
    {
        const bool branch_taken_0x334b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B54u;
        // 0x334b58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b54) {
            ctx->pc = 0x334B78u;
            goto label_334b78;
        }
    }
    ctx->pc = 0x334B5Cu;
label_334b5c:
    // 0x334b5c: 0x8e427ff0  lw          $v0, 0x7FF0($s2)
    ctx->pc = 0x334b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32752)));
label_334b60:
    // 0x334b60: 0x1053000a  beq         $v0, $s3, . + 4 + (0xA << 2)
label_334b64:
    if (ctx->pc == 0x334B64u) {
        ctx->pc = 0x334B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B60u;
        // 0x334b64: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B68u;
        goto label_334b68;
    }
    ctx->pc = 0x334B60u;
    {
        const bool branch_taken_0x334b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x334B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B60u;
        // 0x334b64: 0x2630fff0  addiu       $s0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b60) {
            ctx->pc = 0x334B8Cu;
            goto label_334b8c;
        }
    }
    ctx->pc = 0x334B68u;
label_334b68:
    // 0x334b68: 0xc0ccda2  jal         func_333688
label_334b6c:
    if (ctx->pc == 0x334B6Cu) {
        ctx->pc = 0x334B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B68u;
        // 0x334b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B70u;
        goto label_334b70;
    }
    ctx->pc = 0x334B68u;
    SET_GPR_U32(ctx, 31, 0x334B70u);
    ctx->pc = 0x334B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B68u;
    // 0x334b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x334B68u, 0x334B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B70u;
label_334b70:
    // 0x334b70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_334b74:
    if (ctx->pc == 0x334B74u) {
        ctx->pc = 0x334B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B70u;
        // 0x334b74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B78u;
        goto label_334b78;
    }
    ctx->pc = 0x334B70u;
    {
        const bool branch_taken_0x334b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B70u;
        // 0x334b74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b70) {
            ctx->pc = 0x334B8Cu;
            goto label_334b8c;
        }
    }
    ctx->pc = 0x334B78u;
label_334b78:
    // 0x334b78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334b7c:
    // 0x334b7c: 0xc0ccfbe  jal         func_333EF8
label_334b80:
    if (ctx->pc == 0x334B80u) {
        ctx->pc = 0x334B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B7Cu;
        // 0x334b80: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B84u;
        goto label_334b84;
    }
    ctx->pc = 0x334B7Cu;
    SET_GPR_U32(ctx, 31, 0x334B84u);
    ctx->pc = 0x334B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B7Cu;
    // 0x334b80: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333EF8u, 0x334B7Cu, 0x334B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B84u;
label_334b84:
    // 0x334b84: 0x1000fe62  b           . + 4 + (-0x19E << 2)
label_334b88:
    if (ctx->pc == 0x334B88u) {
        ctx->pc = 0x334B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B84u;
        // 0x334b88: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B8Cu;
        goto label_334b8c;
    }
    ctx->pc = 0x334B84u;
    {
        const bool branch_taken_0x334b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B84u;
        // 0x334b88: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b84) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334B8Cu;
label_334b8c:
    // 0x334b8c: 0xde447fe8  ld          $a0, 0x7FE8($s2)
    ctx->pc = 0x334b8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32744)));
label_334b90:
    // 0x334b90: 0xc10b000  jal         func_42C000
label_334b94:
    if (ctx->pc == 0x334B94u) {
        ctx->pc = 0x334B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B90u;
        // 0x334b94: 0xde457ff8  ld          $a1, 0x7FF8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334B98u;
        goto label_334b98;
    }
    ctx->pc = 0x334B90u;
    SET_GPR_U32(ctx, 31, 0x334B98u);
    ctx->pc = 0x334B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B90u;
    // 0x334b94: 0xde457ff8  ld          $a1, 0x7FF8($s2) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x334B90u, 0x334B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B98u;
label_334b98:
    // 0x334b98: 0xfe427fe8  sd          $v0, 0x7FE8($s2)
    ctx->pc = 0x334b98u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32744), GPR_U64(ctx, 2));
label_334b9c:
    // 0x334b9c: 0x1000fe5c  b           . + 4 + (-0x1A4 << 2)
label_334ba0:
    if (ctx->pc == 0x334BA0u) {
        ctx->pc = 0x334BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B9Cu;
        // 0x334ba0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334BA4u;
        goto label_334ba4;
    }
    ctx->pc = 0x334B9Cu;
    {
        const bool branch_taken_0x334b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B9Cu;
        // 0x334ba0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b9c) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334BA4u;
label_334ba4:
    // 0x334ba4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334ba8:
    // 0x334ba8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x334ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334bac:
    // 0x334bac: 0xc0ccf88  jal         func_333E20
label_334bb0:
    if (ctx->pc == 0x334BB0u) {
        ctx->pc = 0x334BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BACu;
        // 0x334bb0: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334BB4u;
        goto label_334bb4;
    }
    ctx->pc = 0x334BACu;
    SET_GPR_U32(ctx, 31, 0x334BB4u);
    ctx->pc = 0x334BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334BACu;
    // 0x334bb0: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333E20u, 0x334BACu, 0x334BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334BB4u;
label_334bb4:
    // 0x334bb4: 0x5440fe56  bnel        $v0, $zero, . + 4 + (-0x1AA << 2)
label_334bb8:
    if (ctx->pc == 0x334BB8u) {
        ctx->pc = 0x334BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BB4u;
        // 0x334bb8: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334BBCu;
        goto label_334bbc;
    }
    ctx->pc = 0x334BB4u;
    {
        const bool branch_taken_0x334bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334bb4) {
            ctx->pc = 0x334BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334BB4u;
            // 0x334bb8: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334BBCu;
label_334bbc:
    // 0x334bbc: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x334bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_334bc0:
    // 0x334bc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334bc4:
    // 0x334bc4: 0xc0ca46e  jal         func_3291B8
label_334bc8:
    if (ctx->pc == 0x334BC8u) {
        ctx->pc = 0x334BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BC4u;
        // 0x334bc8: 0x24a56870  addiu       $a1, $a1, 0x6870 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334BCCu;
        goto label_334bcc;
    }
    ctx->pc = 0x334BC4u;
    SET_GPR_U32(ctx, 31, 0x334BCCu);
    ctx->pc = 0x334BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334BC4u;
    // 0x334bc8: 0x24a56870  addiu       $a1, $a1, 0x6870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x334BC4u, 0x334BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334BCCu;
label_334bcc:
    // 0x334bcc: 0x1000fe50  b           . + 4 + (-0x1B0 << 2)
label_334bd0:
    if (ctx->pc == 0x334BD0u) {
        ctx->pc = 0x334BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BCCu;
        // 0x334bd0: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334BD4u;
        goto label_334bd4;
    }
    ctx->pc = 0x334BCCu;
    {
        const bool branch_taken_0x334bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BCCu;
        // 0x334bd0: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334bcc) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334BD4u;
label_334bd4:
    // 0x334bd4: 0x138182  srl         $s0, $s3, 6
    ctx->pc = 0x334bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334bd8:
    // 0x334bd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334bdc:
    // 0x334bdc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x334bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334be0:
    // 0x334be0: 0xc0cd03e  jal         func_3340F8
label_334be4:
    if (ctx->pc == 0x334BE4u) {
        ctx->pc = 0x334BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BE0u;
        // 0x334be4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334BE8u;
        goto label_334be8;
    }
    ctx->pc = 0x334BE0u;
    SET_GPR_U32(ctx, 31, 0x334BE8u);
    ctx->pc = 0x334BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334BE0u;
    // 0x334be4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3340F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3340F8u, 0x334BE0u, 0x334BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334BE8u;
label_334be8:
    // 0x334be8: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x334be8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_334bec:
    // 0x334bec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334bf0:
    // 0x334bf0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x334bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_334bf4:
    // 0x334bf4: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x334bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_334bf8:
    // 0x334bf8: 0xc0ca864  jal         func_32A190
label_334bfc:
    if (ctx->pc == 0x334BFCu) {
        ctx->pc = 0x334BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BF8u;
        // 0x334bfc: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334C00u;
        goto label_334c00;
    }
    ctx->pc = 0x334BF8u;
    SET_GPR_U32(ctx, 31, 0x334C00u);
    ctx->pc = 0x334BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334BF8u;
    // 0x334bfc: 0xae910000  sw          $s1, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A190u, 0x334BF8u, 0x334C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C00u;
label_334c00:
    // 0x334c00: 0x1000fe44  b           . + 4 + (-0x1BC << 2)
label_334c04:
    if (ctx->pc == 0x334C04u) {
        ctx->pc = 0x334C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C00u;
        // 0x334c04: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334C08u;
        goto label_334c08;
    }
    ctx->pc = 0x334C00u;
    {
        const bool branch_taken_0x334c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C00u;
        // 0x334c04: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c00) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334C08u;
label_334c08:
    // 0x334c08: 0x26228000  addiu       $v0, $s1, -0x8000
    ctx->pc = 0x334c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_334c0c:
    // 0x334c0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x334c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_334c10:
    // 0x334c10: 0x8c437ff0  lw          $v1, 0x7FF0($v0)
    ctx->pc = 0x334c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32752)));
label_334c14:
    // 0x334c14: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
label_334c18:
    if (ctx->pc == 0x334C18u) {
        ctx->pc = 0x334C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C14u;
        // 0x334c18: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334C1Cu;
        goto label_334c1c;
    }
    ctx->pc = 0x334C14u;
    {
        const bool branch_taken_0x334c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x334C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C14u;
        // 0x334c18: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c14) {
            ctx->pc = 0x334C48u;
            goto label_334c48;
        }
    }
    ctx->pc = 0x334C1Cu;
label_334c1c:
    // 0x334c1c: 0xc0ccda2  jal         func_333688
label_334c20:
    if (ctx->pc == 0x334C20u) {
        ctx->pc = 0x334C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C1Cu;
        // 0x334c20: 0x2624fff0  addiu       $a0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334C24u;
        goto label_334c24;
    }
    ctx->pc = 0x334C1Cu;
    SET_GPR_U32(ctx, 31, 0x334C24u);
    ctx->pc = 0x334C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C1Cu;
    // 0x334c20: 0x2624fff0  addiu       $a0, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x334C1Cu, 0x334C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C24u;
label_334c24:
    // 0x334c24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_334c28:
    if (ctx->pc == 0x334C28u) {
        ctx->pc = 0x334C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C24u;
        // 0x334c28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334C2Cu;
        goto label_334c2c;
    }
    ctx->pc = 0x334C24u;
    {
        const bool branch_taken_0x334c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C24u;
        // 0x334c28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c24) {
            ctx->pc = 0x334C48u;
            goto label_334c48;
        }
    }
    ctx->pc = 0x334C2Cu;
label_334c2c:
    // 0x334c2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334c30:
    // 0x334c30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x334c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_334c34:
    // 0x334c34: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x334c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_334c38:
    // 0x334c38: 0xc0ccfbe  jal         func_333EF8
label_334c3c:
    if (ctx->pc == 0x334C3Cu) {
        ctx->pc = 0x334C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C38u;
        // 0x334c3c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334C40u;
        goto label_334c40;
    }
    ctx->pc = 0x334C38u;
    SET_GPR_U32(ctx, 31, 0x334C40u);
    ctx->pc = 0x334C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C38u;
    // 0x334c3c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333EF8u, 0x334C38u, 0x334C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C40u;
label_334c40:
    // 0x334c40: 0x1000fe34  b           . + 4 + (-0x1CC << 2)
label_334c44:
    if (ctx->pc == 0x334C44u) {
        ctx->pc = 0x334C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C40u;
        // 0x334c44: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334C48u;
        goto label_334c48;
    }
    ctx->pc = 0x334C40u;
    {
        const bool branch_taken_0x334c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C40u;
        // 0x334c44: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c40) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334C48u;
label_334c48:
    // 0x334c48: 0xde457ff8  ld          $a1, 0x7FF8($s2)
    ctx->pc = 0x334c48u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32760)));
label_334c4c:
    // 0x334c4c: 0xc10af3c  jal         func_42BCF0
label_334c50:
    if (ctx->pc == 0x334C50u) {
        ctx->pc = 0x334C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C4Cu;
        // 0x334c50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334C54u;
        goto label_334c54;
    }
    ctx->pc = 0x334C4Cu;
    SET_GPR_U32(ctx, 31, 0x334C54u);
    ctx->pc = 0x334C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C4Cu;
    // 0x334c50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x334C4Cu, 0x334C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C54u;
label_334c54:
    // 0x334c54: 0x1000fe2e  b           . + 4 + (-0x1D2 << 2)
label_334c58:
    if (ctx->pc == 0x334C58u) {
        ctx->pc = 0x334C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C54u;
        // 0x334c58: 0xfe427ff8  sd          $v0, 0x7FF8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 32760), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334C5Cu;
        goto label_334c5c;
    }
    ctx->pc = 0x334C54u;
    {
        const bool branch_taken_0x334c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C54u;
        // 0x334c58: 0xfe427ff8  sd          $v0, 0x7FF8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 32760), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c54) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334C5Cu;
label_334c5c:
    // 0x334c5c: 0x26248000  addiu       $a0, $s1, -0x8000
    ctx->pc = 0x334c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_334c60:
    // 0x334c60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x334c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_334c64:
    // 0x334c64: 0x8c827ff0  lw          $v0, 0x7FF0($a0)
    ctx->pc = 0x334c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32752)));
label_334c68:
    // 0x334c68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x334c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_334c6c:
    // 0x334c6c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x334c6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_334c70:
    // 0x334c70: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x334c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_334c74:
    // 0x334c74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x334c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_334c78:
    // 0x334c78: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x334c78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
label_334c7c:
    // 0x334c7c: 0xfc857ff8  sd          $a1, 0x7FF8($a0)
    ctx->pc = 0x334c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32760), GPR_U64(ctx, 5));
label_334c80:
    // 0x334c80: 0x1000fe23  b           . + 4 + (-0x1DD << 2)
label_334c84:
    if (ctx->pc == 0x334C84u) {
        ctx->pc = 0x334C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C80u;
        // 0x334c84: 0xac837ff0  sw          $v1, 0x7FF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32752), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334C88u;
        goto label_334c88;
    }
    ctx->pc = 0x334C80u;
    {
        const bool branch_taken_0x334c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C80u;
        // 0x334c84: 0xac837ff0  sw          $v1, 0x7FF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32752), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c80) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334C88u;
label_334c88:
    // 0x334c88: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x334c88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_334c8c:
    // 0x334c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334c90:
    // 0x334c90: 0xc0cb224  jal         func_32C890
label_334c94:
    if (ctx->pc == 0x334C94u) {
        ctx->pc = 0x334C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C90u;
        // 0x334c94: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334C98u;
        goto label_334c98;
    }
    ctx->pc = 0x334C90u;
    SET_GPR_U32(ctx, 31, 0x334C98u);
    ctx->pc = 0x334C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C90u;
    // 0x334c94: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x334C90u, 0x334C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C98u;
label_334c98:
    // 0x334c98: 0x1440fe1e  bnez        $v0, . + 4 + (-0x1E2 << 2)
label_334c9c:
    if (ctx->pc == 0x334C9Cu) {
        ctx->pc = 0x334C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C98u;
        // 0x334c9c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334CA0u;
        goto label_334ca0;
    }
    ctx->pc = 0x334C98u;
    {
        const bool branch_taken_0x334c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C98u;
        // 0x334c9c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c98) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334CA0u;
label_334ca0:
    // 0x334ca0: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x334ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_334ca4:
    // 0x334ca4: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x334ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334ca8:
    // 0x334ca8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x334ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_334cac:
    // 0x334cac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x334cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334cb0:
    // 0x334cb0: 0x100000ec  b           . + 4 + (0xEC << 2)
label_334cb4:
    if (ctx->pc == 0x334CB4u) {
        ctx->pc = 0x334CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CB0u;
        // 0x334cb4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334CB8u;
        goto label_334cb8;
    }
    ctx->pc = 0x334CB0u;
    {
        const bool branch_taken_0x334cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CB0u;
        // 0x334cb4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334cb0) {
            ctx->pc = 0x335064u;
            goto label_335064;
        }
    }
    ctx->pc = 0x334CB8u;
label_334cb8:
    // 0x334cb8: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x334cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_334cbc:
    // 0x334cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334cc0:
    // 0x334cc0: 0xc0cb224  jal         func_32C890
label_334cc4:
    if (ctx->pc == 0x334CC4u) {
        ctx->pc = 0x334CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CC0u;
        // 0x334cc4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334CC8u;
        goto label_334cc8;
    }
    ctx->pc = 0x334CC0u;
    SET_GPR_U32(ctx, 31, 0x334CC8u);
    ctx->pc = 0x334CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CC0u;
    // 0x334cc4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x334CC0u, 0x334CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CC8u;
label_334cc8:
    // 0x334cc8: 0x1040fe12  beqz        $v0, . + 4 + (-0x1EE << 2)
label_334ccc:
    if (ctx->pc == 0x334CCCu) {
        ctx->pc = 0x334CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CC8u;
        // 0x334ccc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334CD0u;
        goto label_334cd0;
    }
    ctx->pc = 0x334CC8u;
    {
        const bool branch_taken_0x334cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CC8u;
        // 0x334ccc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334cc8) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334CD0u;
label_334cd0:
    // 0x334cd0: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x334cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_334cd4:
    // 0x334cd4: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x334cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334cd8:
    // 0x334cd8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x334cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_334cdc:
    // 0x334cdc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x334cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334ce0:
    // 0x334ce0: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_334ce4:
    if (ctx->pc == 0x334CE4u) {
        ctx->pc = 0x334CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CE0u;
        // 0x334ce4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334CE8u;
        goto label_334ce8;
    }
    ctx->pc = 0x334CE0u;
    {
        const bool branch_taken_0x334ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CE0u;
        // 0x334ce4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ce0) {
            ctx->pc = 0x335064u;
            goto label_335064;
        }
    }
    ctx->pc = 0x334CE8u;
label_334ce8:
    // 0x334ce8: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x334ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_334cec:
    // 0x334cec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334cf0:
    // 0x334cf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x334cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334cf4:
    // 0x334cf4: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x334cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_334cf8:
    // 0x334cf8: 0xc0ccffa  jal         func_333FE8
label_334cfc:
    if (ctx->pc == 0x334CFCu) {
        ctx->pc = 0x334CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CF8u;
        // 0x334cfc: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334D00u;
        goto label_334d00;
    }
    ctx->pc = 0x334CF8u;
    SET_GPR_U32(ctx, 31, 0x334D00u);
    ctx->pc = 0x334CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CF8u;
    // 0x334cfc: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333FE8u, 0x334CF8u, 0x334D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D00u;
label_334d00:
    // 0x334d00: 0x1040fe04  beqz        $v0, . + 4 + (-0x1FC << 2)
label_334d04:
    if (ctx->pc == 0x334D04u) {
        ctx->pc = 0x334D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D00u;
        // 0x334d04: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334D08u;
        goto label_334d08;
    }
    ctx->pc = 0x334D00u;
    {
        const bool branch_taken_0x334d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D00u;
        // 0x334d04: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d00) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334D08u;
label_334d08:
    // 0x334d08: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x334d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_334d0c:
    // 0x334d0c: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x334d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334d10:
    // 0x334d10: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x334d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_334d14:
    // 0x334d14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x334d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334d18:
    // 0x334d18: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_334d1c:
    if (ctx->pc == 0x334D1Cu) {
        ctx->pc = 0x334D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D18u;
        // 0x334d1c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334D20u;
        goto label_334d20;
    }
    ctx->pc = 0x334D18u;
    {
        const bool branch_taken_0x334d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D18u;
        // 0x334d1c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d18) {
            ctx->pc = 0x335064u;
            goto label_335064;
        }
    }
    ctx->pc = 0x334D20u;
label_334d20:
    // 0x334d20: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x334d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_334d24:
    // 0x334d24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334d28:
    // 0x334d28: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x334d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_334d2c:
    // 0x334d2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x334d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334d30:
    // 0x334d30: 0xc0ccffa  jal         func_333FE8
label_334d34:
    if (ctx->pc == 0x334D34u) {
        ctx->pc = 0x334D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D30u;
        // 0x334d34: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334D38u;
        goto label_334d38;
    }
    ctx->pc = 0x334D30u;
    SET_GPR_U32(ctx, 31, 0x334D38u);
    ctx->pc = 0x334D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D30u;
    // 0x334d34: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333FE8u, 0x334D30u, 0x334D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D38u;
label_334d38:
    // 0x334d38: 0x1440fdf6  bnez        $v0, . + 4 + (-0x20A << 2)
label_334d3c:
    if (ctx->pc == 0x334D3Cu) {
        ctx->pc = 0x334D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D38u;
        // 0x334d3c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334D40u;
        goto label_334d40;
    }
    ctx->pc = 0x334D38u;
    {
        const bool branch_taken_0x334d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D38u;
        // 0x334d3c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d38) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334D40u;
label_334d40:
    // 0x334d40: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x334d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_334d44:
    // 0x334d44: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x334d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334d48:
    // 0x334d48: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x334d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_334d4c:
    // 0x334d4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x334d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334d50:
    // 0x334d50: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_334d54:
    if (ctx->pc == 0x334D54u) {
        ctx->pc = 0x334D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D50u;
        // 0x334d54: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334D58u;
        goto label_334d58;
    }
    ctx->pc = 0x334D50u;
    {
        const bool branch_taken_0x334d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D50u;
        // 0x334d54: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d50) {
            ctx->pc = 0x335064u;
            goto label_335064;
        }
    }
    ctx->pc = 0x334D58u;
label_334d58:
    // 0x334d58: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x334d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_334d5c:
    // 0x334d5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334d60:
    // 0x334d60: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x334d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_334d64:
    // 0x334d64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x334d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334d68:
    // 0x334d68: 0xc0ccffa  jal         func_333FE8
label_334d6c:
    if (ctx->pc == 0x334D6Cu) {
        ctx->pc = 0x334D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D68u;
        // 0x334d6c: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334D70u;
        goto label_334d70;
    }
    ctx->pc = 0x334D68u;
    SET_GPR_U32(ctx, 31, 0x334D70u);
    ctx->pc = 0x334D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D68u;
    // 0x334d6c: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333FE8u, 0x334D68u, 0x334D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D70u;
label_334d70:
    // 0x334d70: 0x1040fde8  beqz        $v0, . + 4 + (-0x218 << 2)
label_334d74:
    if (ctx->pc == 0x334D74u) {
        ctx->pc = 0x334D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D70u;
        // 0x334d74: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334D78u;
        goto label_334d78;
    }
    ctx->pc = 0x334D70u;
    {
        const bool branch_taken_0x334d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D70u;
        // 0x334d74: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d70) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334D78u;
label_334d78:
    // 0x334d78: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x334d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_334d7c:
    // 0x334d7c: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x334d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334d80:
    // 0x334d80: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x334d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_334d84:
    // 0x334d84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x334d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334d88:
    // 0x334d88: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_334d8c:
    if (ctx->pc == 0x334D8Cu) {
        ctx->pc = 0x334D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D88u;
        // 0x334d8c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334D90u;
        goto label_334d90;
    }
    ctx->pc = 0x334D88u;
    {
        const bool branch_taken_0x334d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D88u;
        // 0x334d8c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d88) {
            ctx->pc = 0x335064u;
            goto label_335064;
        }
    }
    ctx->pc = 0x334D90u;
label_334d90:
    // 0x334d90: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x334d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_334d94:
    // 0x334d94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334d98:
    // 0x334d98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x334d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334d9c:
    // 0x334d9c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x334d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_334da0:
    // 0x334da0: 0xc0ccffa  jal         func_333FE8
label_334da4:
    if (ctx->pc == 0x334DA4u) {
        ctx->pc = 0x334DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DA0u;
        // 0x334da4: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334DA8u;
        goto label_334da8;
    }
    ctx->pc = 0x334DA0u;
    SET_GPR_U32(ctx, 31, 0x334DA8u);
    ctx->pc = 0x334DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334DA0u;
    // 0x334da4: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333FE8u, 0x334DA0u, 0x334DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DA8u;
label_334da8:
    // 0x334da8: 0x1440fdda  bnez        $v0, . + 4 + (-0x226 << 2)
label_334dac:
    if (ctx->pc == 0x334DACu) {
        ctx->pc = 0x334DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DA8u;
        // 0x334dac: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334DB0u;
        goto label_334db0;
    }
    ctx->pc = 0x334DA8u;
    {
        const bool branch_taken_0x334da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DA8u;
        // 0x334dac: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334da8) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334DB0u;
label_334db0:
    // 0x334db0: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x334db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_334db4:
    // 0x334db4: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x334db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334db8:
    // 0x334db8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x334db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_334dbc:
    // 0x334dbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x334dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334dc0:
    // 0x334dc0: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_334dc4:
    if (ctx->pc == 0x334DC4u) {
        ctx->pc = 0x334DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DC0u;
        // 0x334dc4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334DC8u;
        goto label_334dc8;
    }
    ctx->pc = 0x334DC0u;
    {
        const bool branch_taken_0x334dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DC0u;
        // 0x334dc4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334dc0) {
            ctx->pc = 0x335064u;
            goto label_335064;
        }
    }
    ctx->pc = 0x334DC8u;
label_334dc8:
    // 0x334dc8: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x334dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_334dcc:
    // 0x334dcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x334dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_334dd0:
    // 0x334dd0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x334dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_334dd4:
    // 0x334dd4: 0x1043fdcf  beq         $v0, $v1, . + 4 + (-0x231 << 2)
label_334dd8:
    if (ctx->pc == 0x334DD8u) {
        ctx->pc = 0x334DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DD4u;
        // 0x334dd8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334DDCu;
        goto label_334ddc;
    }
    ctx->pc = 0x334DD4u;
    {
        const bool branch_taken_0x334dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x334DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DD4u;
        // 0x334dd8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334dd4) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334DDCu;
label_334ddc:
    // 0x334ddc: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x334ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_334de0:
    // 0x334de0: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x334de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334de4:
    // 0x334de4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x334de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_334de8:
    // 0x334de8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x334de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334dec:
    // 0x334dec: 0x1000009d  b           . + 4 + (0x9D << 2)
label_334df0:
    if (ctx->pc == 0x334DF0u) {
        ctx->pc = 0x334DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DECu;
        // 0x334df0: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334DF4u;
        goto label_334df4;
    }
    ctx->pc = 0x334DECu;
    {
        const bool branch_taken_0x334dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DECu;
        // 0x334df0: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334dec) {
            ctx->pc = 0x335064u;
            goto label_335064;
        }
    }
    ctx->pc = 0x334DF4u;
label_334df4:
    // 0x334df4: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x334df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_334df8:
    // 0x334df8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x334df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_334dfc:
    // 0x334dfc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x334dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_334e00:
    // 0x334e00: 0x1443fdc4  bne         $v0, $v1, . + 4 + (-0x23C << 2)
label_334e04:
    if (ctx->pc == 0x334E04u) {
        ctx->pc = 0x334E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E00u;
        // 0x334e04: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334E08u;
        goto label_334e08;
    }
    ctx->pc = 0x334E00u;
    {
        const bool branch_taken_0x334e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x334E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E00u;
        // 0x334e04: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e00) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334E08u;
label_334e08:
    // 0x334e08: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x334e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_334e0c:
    // 0x334e0c: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x334e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334e10:
    // 0x334e10: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x334e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_334e14:
    // 0x334e14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x334e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334e18:
    // 0x334e18: 0x10000092  b           . + 4 + (0x92 << 2)
label_334e1c:
    if (ctx->pc == 0x334E1Cu) {
        ctx->pc = 0x334E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E18u;
        // 0x334e1c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334E20u;
        goto label_334e20;
    }
    ctx->pc = 0x334E18u;
    {
        const bool branch_taken_0x334e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E18u;
        // 0x334e1c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e18) {
            ctx->pc = 0x335064u;
            goto label_335064;
        }
    }
    ctx->pc = 0x334E20u;
label_334e20:
    // 0x334e20: 0x8e23fff0  lw          $v1, -0x10($s1)
    ctx->pc = 0x334e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967280)));
label_334e24:
    // 0x334e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_334e28:
    // 0x334e28: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_334e2c:
    if (ctx->pc == 0x334E2Cu) {
        ctx->pc = 0x334E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E28u;
        // 0x334e2c: 0x131982  srl         $v1, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334E30u;
        goto label_334e30;
    }
    ctx->pc = 0x334E28u;
    {
        const bool branch_taken_0x334e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x334E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E28u;
        // 0x334e2c: 0x131982  srl         $v1, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e28) {
            ctx->pc = 0x334E54u;
            goto label_334e54;
        }
    }
    ctx->pc = 0x334E30u;
label_334e30:
    // 0x334e30: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x334e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_334e34:
    // 0x334e34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x334e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_334e38:
    // 0x334e38: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x334e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334e3c:
    // 0x334e3c: 0x10000089  b           . + 4 + (0x89 << 2)
label_334e40:
    if (ctx->pc == 0x334E40u) {
        ctx->pc = 0x334E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E3Cu;
        // 0x334e40: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334E44u;
        goto label_334e44;
    }
    ctx->pc = 0x334E3Cu;
    {
        const bool branch_taken_0x334e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E3Cu;
        // 0x334e40: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e3c) {
            ctx->pc = 0x335064u;
            goto label_335064;
        }
    }
    ctx->pc = 0x334E44u;
label_334e44:
    // 0x334e44: 0x8e23fff0  lw          $v1, -0x10($s1)
    ctx->pc = 0x334e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967280)));
label_334e48:
    // 0x334e48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_334e4c:
    // 0x334e4c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_334e50:
    if (ctx->pc == 0x334E50u) {
        ctx->pc = 0x334E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E4Cu;
        // 0x334e50: 0x131982  srl         $v1, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334E54u;
        goto label_334e54;
    }
    ctx->pc = 0x334E4Cu;
    {
        const bool branch_taken_0x334e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x334E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E4Cu;
        // 0x334e50: 0x131982  srl         $v1, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e4c) {
            ctx->pc = 0x334E5Cu;
            goto label_334e5c;
        }
    }
    ctx->pc = 0x334E54u;
label_334e54:
    // 0x334e54: 0x1000fdae  b           . + 4 + (-0x252 << 2)
label_334e58:
    if (ctx->pc == 0x334E58u) {
        ctx->pc = 0x334E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E54u;
        // 0x334e58: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334E5Cu;
        goto label_334e5c;
    }
    ctx->pc = 0x334E54u;
    {
        const bool branch_taken_0x334e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E54u;
        // 0x334e58: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e54) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334E5Cu;
label_334e5c:
    // 0x334e5c: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x334e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_334e60:
    // 0x334e60: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x334e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_334e64:
    // 0x334e64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x334e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334e68:
    // 0x334e68: 0x1000007e  b           . + 4 + (0x7E << 2)
label_334e6c:
    if (ctx->pc == 0x334E6Cu) {
        ctx->pc = 0x334E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E68u;
        // 0x334e6c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334E70u;
        goto label_334e70;
    }
    ctx->pc = 0x334E68u;
    {
        const bool branch_taken_0x334e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E68u;
        // 0x334e6c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e68) {
            ctx->pc = 0x335064u;
            goto label_335064;
        }
    }
    ctx->pc = 0x334E70u;
label_334e70:
    // 0x334e70: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x334e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_334e74:
    // 0x334e74: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x334e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334e78:
    // 0x334e78: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x334e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_334e7c:
    // 0x334e7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x334e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334e80:
    // 0x334e80: 0x10000078  b           . + 4 + (0x78 << 2)
label_334e84:
    if (ctx->pc == 0x334E84u) {
        ctx->pc = 0x334E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E80u;
        // 0x334e84: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334E88u;
        goto label_334e88;
    }
    ctx->pc = 0x334E80u;
    {
        const bool branch_taken_0x334e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E80u;
        // 0x334e84: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e80) {
            ctx->pc = 0x335064u;
            goto label_335064;
        }
    }
    ctx->pc = 0x334E88u;
label_334e88:
    // 0x334e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_334e8c:
    // 0x334e8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x334e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_334e90:
    // 0x334e90: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x334e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_334e94:
    // 0x334e94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x334e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334e98:
    // 0x334e98: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x334e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_334e9c:
    // 0x334e9c: 0x1000fd9c  b           . + 4 + (-0x264 << 2)
label_334ea0:
    if (ctx->pc == 0x334EA0u) {
        ctx->pc = 0x334EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E9Cu;
        // 0x334ea0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334EA4u;
        goto label_334ea4;
    }
    ctx->pc = 0x334E9Cu;
    {
        const bool branch_taken_0x334e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E9Cu;
        // 0x334ea0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e9c) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334EA4u;
label_334ea4:
    // 0x334ea4: 0x26228000  addiu       $v0, $s1, -0x8000
    ctx->pc = 0x334ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_334ea8:
    // 0x334ea8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x334ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_334eac:
    // 0x334eac: 0x8c437ff0  lw          $v1, 0x7FF0($v0)
    ctx->pc = 0x334eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32752)));
label_334eb0:
    // 0x334eb0: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
label_334eb4:
    if (ctx->pc == 0x334EB4u) {
        ctx->pc = 0x334EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EB0u;
        // 0x334eb4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334EB8u;
        goto label_334eb8;
    }
    ctx->pc = 0x334EB0u;
    {
        const bool branch_taken_0x334eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x334EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EB0u;
        // 0x334eb4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334eb0) {
            ctx->pc = 0x334ED4u;
            goto label_334ed4;
        }
    }
    ctx->pc = 0x334EB8u;
label_334eb8:
    // 0x334eb8: 0xc0ccda2  jal         func_333688
label_334ebc:
    if (ctx->pc == 0x334EBCu) {
        ctx->pc = 0x334EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EB8u;
        // 0x334ebc: 0x2624fff0  addiu       $a0, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334EC0u;
        goto label_334ec0;
    }
    ctx->pc = 0x334EB8u;
    SET_GPR_U32(ctx, 31, 0x334EC0u);
    ctx->pc = 0x334EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334EB8u;
    // 0x334ebc: 0x2624fff0  addiu       $a0, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x334EB8u, 0x334EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334EC0u;
label_334ec0:
    // 0x334ec0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_334ec4:
    if (ctx->pc == 0x334EC4u) {
        ctx->pc = 0x334EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EC0u;
        // 0x334ec4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334EC8u;
        goto label_334ec8;
    }
    ctx->pc = 0x334EC0u;
    {
        const bool branch_taken_0x334ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EC0u;
        // 0x334ec4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ec0) {
            ctx->pc = 0x334ED4u;
            goto label_334ed4;
        }
    }
    ctx->pc = 0x334EC8u;
label_334ec8:
    // 0x334ec8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x334ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_334ecc:
    // 0x334ecc: 0xc0ca46e  jal         func_3291B8
label_334ed0:
    if (ctx->pc == 0x334ED0u) {
        ctx->pc = 0x334ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334ECCu;
        // 0x334ed0: 0x24a56888  addiu       $a1, $a1, 0x6888 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334ED4u;
        goto label_334ed4;
    }
    ctx->pc = 0x334ECCu;
    SET_GPR_U32(ctx, 31, 0x334ED4u);
    ctx->pc = 0x334ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334ECCu;
    // 0x334ed0: 0x24a56888  addiu       $a1, $a1, 0x6888 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x334ECCu, 0x334ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334ED4u;
label_334ed4:
    // 0x334ed4: 0x8e437fe0  lw          $v1, 0x7FE0($s2)
    ctx->pc = 0x334ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32736)));
label_334ed8:
    // 0x334ed8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x334ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_334edc:
    // 0x334edc: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_334ee0:
    if (ctx->pc == 0x334EE0u) {
        ctx->pc = 0x334EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EDCu;
        // 0x334ee0: 0x8e437fd0  lw          $v1, 0x7FD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334EE4u;
        goto label_334ee4;
    }
    ctx->pc = 0x334EDCu;
    {
        const bool branch_taken_0x334edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x334edc) {
            ctx->pc = 0x334EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334EDCu;
            // 0x334ee0: 0x8e437fd0  lw          $v1, 0x7FD0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32720)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334F08u;
            goto label_334f08;
        }
    }
    ctx->pc = 0x334EE4u;
label_334ee4:
    // 0x334ee4: 0xc0ccda2  jal         func_333688
label_334ee8:
    if (ctx->pc == 0x334EE8u) {
        ctx->pc = 0x334EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EE4u;
        // 0x334ee8: 0x2624ffe0  addiu       $a0, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334EECu;
        goto label_334eec;
    }
    ctx->pc = 0x334EE4u;
    SET_GPR_U32(ctx, 31, 0x334EECu);
    ctx->pc = 0x334EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334EE4u;
    // 0x334ee8: 0x2624ffe0  addiu       $a0, $s1, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x334EE4u, 0x334EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334EECu;
label_334eec:
    // 0x334eec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_334ef0:
    if (ctx->pc == 0x334EF0u) {
        ctx->pc = 0x334EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EECu;
        // 0x334ef0: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334EF4u;
        goto label_334ef4;
    }
    ctx->pc = 0x334EECu;
    {
        const bool branch_taken_0x334eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EECu;
        // 0x334ef0: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334eec) {
            ctx->pc = 0x334F00u;
            goto label_334f00;
        }
    }
    ctx->pc = 0x334EF4u;
label_334ef4:
    // 0x334ef4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334ef8:
    // 0x334ef8: 0xc0ca46e  jal         func_3291B8
label_334efc:
    if (ctx->pc == 0x334EFCu) {
        ctx->pc = 0x334EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EF8u;
        // 0x334efc: 0x24a568a8  addiu       $a1, $a1, 0x68A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F00u;
        goto label_334f00;
    }
    ctx->pc = 0x334EF8u;
    SET_GPR_U32(ctx, 31, 0x334F00u);
    ctx->pc = 0x334EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334EF8u;
    // 0x334efc: 0x24a568a8  addiu       $a1, $a1, 0x68A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x334EF8u, 0x334F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F00u;
label_334f00:
    // 0x334f00: 0x8e437fd0  lw          $v1, 0x7FD0($s2)
    ctx->pc = 0x334f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32720)));
label_334f04:
    // 0x334f04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x334f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_334f08:
    // 0x334f08: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
label_334f0c:
    if (ctx->pc == 0x334F0Cu) {
        ctx->pc = 0x334F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F08u;
        // 0x334f0c: 0xde447ff8  ld          $a0, 0x7FF8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F10u;
        goto label_334f10;
    }
    ctx->pc = 0x334F08u;
    {
        const bool branch_taken_0x334f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x334f08) {
            ctx->pc = 0x334F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334F08u;
            // 0x334f0c: 0xde447ff8  ld          $a0, 0x7FF8($s2) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334F30u;
            goto label_334f30;
        }
    }
    ctx->pc = 0x334F10u;
label_334f10:
    // 0x334f10: 0xc0ccda2  jal         func_333688
label_334f14:
    if (ctx->pc == 0x334F14u) {
        ctx->pc = 0x334F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F10u;
        // 0x334f14: 0x2624ffd0  addiu       $a0, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F18u;
        goto label_334f18;
    }
    ctx->pc = 0x334F10u;
    SET_GPR_U32(ctx, 31, 0x334F18u);
    ctx->pc = 0x334F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F10u;
    // 0x334f14: 0x2624ffd0  addiu       $a0, $s1, -0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333688u, 0x334F10u, 0x334F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F18u;
label_334f18:
    // 0x334f18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_334f1c:
    if (ctx->pc == 0x334F1Cu) {
        ctx->pc = 0x334F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F18u;
        // 0x334f1c: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F20u;
        goto label_334f20;
    }
    ctx->pc = 0x334F18u;
    {
        const bool branch_taken_0x334f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F18u;
        // 0x334f1c: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f18) {
            ctx->pc = 0x334F2Cu;
            goto label_334f2c;
        }
    }
    ctx->pc = 0x334F20u;
label_334f20:
    // 0x334f20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334f24:
    // 0x334f24: 0xc0ca46e  jal         func_3291B8
label_334f28:
    if (ctx->pc == 0x334F28u) {
        ctx->pc = 0x334F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F24u;
        // 0x334f28: 0x24a568c8  addiu       $a1, $a1, 0x68C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F2Cu;
        goto label_334f2c;
    }
    ctx->pc = 0x334F24u;
    SET_GPR_U32(ctx, 31, 0x334F2Cu);
    ctx->pc = 0x334F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F24u;
    // 0x334f28: 0x24a568c8  addiu       $a1, $a1, 0x68C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x334F24u, 0x334F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F2Cu;
label_334f2c:
    // 0x334f2c: 0xde447ff8  ld          $a0, 0x7FF8($s2)
    ctx->pc = 0x334f2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32760)));
label_334f30:
    // 0x334f30: 0xc10b0a0  jal         func_42C280
label_334f34:
    if (ctx->pc == 0x334F34u) {
        ctx->pc = 0x334F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F30u;
        // 0x334f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F38u;
        goto label_334f38;
    }
    ctx->pc = 0x334F30u;
    SET_GPR_U32(ctx, 31, 0x334F38u);
    ctx->pc = 0x334F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F30u;
    // 0x334f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x334F30u, 0x334F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F38u;
label_334f38:
    // 0x334f38: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_334f3c:
    if (ctx->pc == 0x334F3Cu) {
        ctx->pc = 0x334F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F38u;
        // 0x334f3c: 0xde457fe8  ld          $a1, 0x7FE8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F40u;
        goto label_334f40;
    }
    ctx->pc = 0x334F38u;
    {
        const bool branch_taken_0x334f38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x334F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F38u;
        // 0x334f3c: 0xde457fe8  ld          $a1, 0x7FE8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f38) {
            ctx->pc = 0x334F58u;
            goto label_334f58;
        }
    }
    ctx->pc = 0x334F40u;
label_334f40:
    // 0x334f40: 0xc10b0a0  jal         func_42C280
label_334f44:
    if (ctx->pc == 0x334F44u) {
        ctx->pc = 0x334F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F40u;
        // 0x334f44: 0xde447fd8  ld          $a0, 0x7FD8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F48u;
        goto label_334f48;
    }
    ctx->pc = 0x334F40u;
    SET_GPR_U32(ctx, 31, 0x334F48u);
    ctx->pc = 0x334F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F40u;
    // 0x334f44: 0xde447fd8  ld          $a0, 0x7FD8($s2) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x334F40u, 0x334F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F48u;
label_334f48:
    // 0x334f48: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
label_334f4c:
    if (ctx->pc == 0x334F4Cu) {
        ctx->pc = 0x334F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F48u;
        // 0x334f4c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F50u;
        goto label_334f50;
    }
    ctx->pc = 0x334F48u;
    {
        const bool branch_taken_0x334f48 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x334F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F48u;
        // 0x334f4c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f48) {
            ctx->pc = 0x334F68u;
            goto label_334f68;
        }
    }
    ctx->pc = 0x334F50u;
label_334f50:
    // 0x334f50: 0x1000fd71  b           . + 4 + (-0x28F << 2)
label_334f54:
    if (ctx->pc == 0x334F54u) {
        ctx->pc = 0x334F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F50u;
        // 0x334f54: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F58u;
        goto label_334f58;
    }
    ctx->pc = 0x334F50u;
    {
        const bool branch_taken_0x334f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F50u;
        // 0x334f54: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f50) {
            ctx->pc = 0x334518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334518;
        }
    }
    ctx->pc = 0x334F58u;
label_334f58:
    // 0x334f58: 0xc10b0a0  jal         func_42C280
label_334f5c:
    if (ctx->pc == 0x334F5Cu) {
        ctx->pc = 0x334F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F58u;
        // 0x334f5c: 0xde447fd8  ld          $a0, 0x7FD8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F60u;
        goto label_334f60;
    }
    ctx->pc = 0x334F58u;
    SET_GPR_U32(ctx, 31, 0x334F60u);
    ctx->pc = 0x334F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F58u;
    // 0x334f5c: 0xde447fd8  ld          $a0, 0x7FD8($s2) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x334F58u, 0x334F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F60u;
label_334f60:
    // 0x334f60: 0x441fd6c  bgez        $v0, . + 4 + (-0x294 << 2)
label_334f64:
    if (ctx->pc == 0x334F64u) {
        ctx->pc = 0x334F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F60u;
        // 0x334f64: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F68u;
        goto label_334f68;
    }
    ctx->pc = 0x334F60u;
    {
        const bool branch_taken_0x334f60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x334F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F60u;
        // 0x334f64: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f60) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x334F68u;
label_334f68:
    // 0x334f68: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x334f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_334f6c:
    // 0x334f6c: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x334f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334f70:
    // 0x334f70: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x334f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_334f74:
    // 0x334f74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x334f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334f78:
    // 0x334f78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x334f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_334f7c:
    // 0x334f7c: 0x10000039  b           . + 4 + (0x39 << 2)
label_334f80:
    if (ctx->pc == 0x334F80u) {
        ctx->pc = 0x334F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F7Cu;
        // 0x334f80: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F84u;
        goto label_334f84;
    }
    ctx->pc = 0x334F7Cu;
    {
        const bool branch_taken_0x334f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F7Cu;
        // 0x334f80: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f7c) {
            ctx->pc = 0x335064u;
            goto label_335064;
        }
    }
    ctx->pc = 0x334F84u;
label_334f84:
    // 0x334f84: 0x26328000  addiu       $s2, $s1, -0x8000
    ctx->pc = 0x334f84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_334f88:
    // 0x334f88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x334f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_334f8c:
    // 0x334f8c: 0x8e427fd0  lw          $v0, 0x7FD0($s2)
    ctx->pc = 0x334f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32720)));
label_334f90:
    // 0x334f90: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_334f94:
    if (ctx->pc == 0x334F94u) {
        ctx->pc = 0x334F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F90u;
        // 0x334f94: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334F98u;
        goto label_334f98;
    }
    ctx->pc = 0x334F90u;
    {
        const bool branch_taken_0x334f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x334F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F90u;
        // 0x334f94: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f90) {
            ctx->pc = 0x334FA4u;
            goto label_334fa4;
        }
    }
    ctx->pc = 0x334F98u;
label_334f98:
    // 0x334f98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x334f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334f9c:
    // 0x334f9c: 0xc0ca46e  jal         func_3291B8
label_334fa0:
    if (ctx->pc == 0x334FA0u) {
        ctx->pc = 0x334FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F9Cu;
        // 0x334fa0: 0x24a568f0  addiu       $a1, $a1, 0x68F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334FA4u;
        goto label_334fa4;
    }
    ctx->pc = 0x334F9Cu;
    SET_GPR_U32(ctx, 31, 0x334FA4u);
    ctx->pc = 0x334FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F9Cu;
    // 0x334fa0: 0x24a568f0  addiu       $a1, $a1, 0x68F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x334F9Cu, 0x334FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FA4u;
label_334fa4:
    // 0x334fa4: 0xde507ff8  ld          $s0, 0x7FF8($s2)
    ctx->pc = 0x334fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 32760)));
label_334fa8:
    // 0x334fa8: 0xde447fd8  ld          $a0, 0x7FD8($s2)
    ctx->pc = 0x334fa8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32728)));
label_334fac:
    // 0x334fac: 0xc10af26  jal         func_42BC98
label_334fb0:
    if (ctx->pc == 0x334FB0u) {
        ctx->pc = 0x334FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FACu;
        // 0x334fb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334FB4u;
        goto label_334fb4;
    }
    ctx->pc = 0x334FACu;
    SET_GPR_U32(ctx, 31, 0x334FB4u);
    ctx->pc = 0x334FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FACu;
    // 0x334fb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x334FACu, 0x334FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FB4u;
label_334fb4:
    // 0x334fb4: 0xfe427fd8  sd          $v0, 0x7FD8($s2)
    ctx->pc = 0x334fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32728), GPR_U64(ctx, 2));
label_334fb8:
    // 0x334fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_334fbc:
    // 0x334fbc: 0xc10b0a0  jal         func_42C280
label_334fc0:
    if (ctx->pc == 0x334FC0u) {
        ctx->pc = 0x334FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FBCu;
        // 0x334fc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334FC4u;
        goto label_334fc4;
    }
    ctx->pc = 0x334FBCu;
    SET_GPR_U32(ctx, 31, 0x334FC4u);
    ctx->pc = 0x334FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FBCu;
    // 0x334fc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x334FBCu, 0x334FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FC4u;
label_334fc4:
    // 0x334fc4: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_334fc8:
    if (ctx->pc == 0x334FC8u) {
        ctx->pc = 0x334FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FC4u;
        // 0x334fc8: 0xde457fe8  ld          $a1, 0x7FE8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334FCCu;
        goto label_334fcc;
    }
    ctx->pc = 0x334FC4u;
    {
        const bool branch_taken_0x334fc4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x334FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FC4u;
        // 0x334fc8: 0xde457fe8  ld          $a1, 0x7FE8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 32744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334fc4) {
            ctx->pc = 0x334FE4u;
            goto label_334fe4;
        }
    }
    ctx->pc = 0x334FCCu;
label_334fcc:
    // 0x334fcc: 0xc10b0a0  jal         func_42C280
label_334fd0:
    if (ctx->pc == 0x334FD0u) {
        ctx->pc = 0x334FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FCCu;
        // 0x334fd0: 0xde447fd8  ld          $a0, 0x7FD8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334FD4u;
        goto label_334fd4;
    }
    ctx->pc = 0x334FCCu;
    SET_GPR_U32(ctx, 31, 0x334FD4u);
    ctx->pc = 0x334FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FCCu;
    // 0x334fd0: 0xde447fd8  ld          $a0, 0x7FD8($s2) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x334FCCu, 0x334FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FD4u;
label_334fd4:
    // 0x334fd4: 0x5c40fd4e  bgtzl       $v0, . + 4 + (-0x2B2 << 2)
label_334fd8:
    if (ctx->pc == 0x334FD8u) {
        ctx->pc = 0x334FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FD4u;
        // 0x334fd8: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334FDCu;
        goto label_334fdc;
    }
    ctx->pc = 0x334FD4u;
    {
        const bool branch_taken_0x334fd4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x334fd4) {
            ctx->pc = 0x334FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334FD4u;
            // 0x334fd8: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334FDCu;
label_334fdc:
    // 0x334fdc: 0x10000005  b           . + 4 + (0x5 << 2)
label_334fe0:
    if (ctx->pc == 0x334FE0u) {
        ctx->pc = 0x334FE4u;
        goto label_334fe4;
    }
    ctx->pc = 0x334FDCu;
    {
        const bool branch_taken_0x334fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334fdc) {
            ctx->pc = 0x334FF4u;
            goto label_334ff4;
        }
    }
    ctx->pc = 0x334FE4u;
label_334fe4:
    // 0x334fe4: 0xc10b0a0  jal         func_42C280
label_334fe8:
    if (ctx->pc == 0x334FE8u) {
        ctx->pc = 0x334FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FE4u;
        // 0x334fe8: 0xde447fd8  ld          $a0, 0x7FD8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334FECu;
        goto label_334fec;
    }
    ctx->pc = 0x334FE4u;
    SET_GPR_U32(ctx, 31, 0x334FECu);
    ctx->pc = 0x334FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FE4u;
    // 0x334fe8: 0xde447fd8  ld          $a0, 0x7FD8($s2) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 32728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x334FE4u, 0x334FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FECu;
label_334fec:
    // 0x334fec: 0x442fd48  bltzl       $v0, . + 4 + (-0x2B8 << 2)
label_334ff0:
    if (ctx->pc == 0x334FF0u) {
        ctx->pc = 0x334FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FECu;
        // 0x334ff0: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334FF4u;
        goto label_334ff4;
    }
    ctx->pc = 0x334FECu;
    {
        const bool branch_taken_0x334fec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x334fec) {
            ctx->pc = 0x334FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334FECu;
            // 0x334ff0: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x334FF4u;
label_334ff4:
    // 0x334ff4: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x334ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_334ff8:
    // 0x334ff8: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x334ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_334ffc:
    // 0x334ffc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x334ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_335000:
    // 0x335000: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x335000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_335004:
    // 0x335004: 0x10000017  b           . + 4 + (0x17 << 2)
label_335008:
    if (ctx->pc == 0x335008u) {
        ctx->pc = 0x335008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335004u;
        // 0x335008: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33500Cu;
        goto label_33500c;
    }
    ctx->pc = 0x335004u;
    {
        const bool branch_taken_0x335004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335004u;
        // 0x335008: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335004) {
            ctx->pc = 0x335064u;
            goto label_335064;
        }
    }
    ctx->pc = 0x33500Cu;
label_33500c:
    // 0x33500c: 0x26308000  addiu       $s0, $s1, -0x8000
    ctx->pc = 0x33500cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_335010:
    // 0x335010: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x335010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_335014:
    // 0x335014: 0x8e027ff0  lw          $v0, 0x7FF0($s0)
    ctx->pc = 0x335014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32752)));
label_335018:
    // 0x335018: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_33501c:
    if (ctx->pc == 0x33501Cu) {
        ctx->pc = 0x33501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335018u;
        // 0x33501c: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335020u;
        goto label_335020;
    }
    ctx->pc = 0x335018u;
    {
        const bool branch_taken_0x335018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x33501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335018u;
        // 0x33501c: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335018) {
            ctx->pc = 0x33502Cu;
            goto label_33502c;
        }
    }
    ctx->pc = 0x335020u;
label_335020:
    // 0x335020: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x335020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_335024:
    // 0x335024: 0xc0ca46e  jal         func_3291B8
label_335028:
    if (ctx->pc == 0x335028u) {
        ctx->pc = 0x335028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335024u;
        // 0x335028: 0x24a56910  addiu       $a1, $a1, 0x6910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33502Cu;
        goto label_33502c;
    }
    ctx->pc = 0x335024u;
    SET_GPR_U32(ctx, 31, 0x33502Cu);
    ctx->pc = 0x335028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335024u;
    // 0x335028: 0x24a56910  addiu       $a1, $a1, 0x6910 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x335024u, 0x33502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33502Cu;
label_33502c:
    // 0x33502c: 0x8e057ff8  lw          $a1, 0x7FF8($s0)
    ctx->pc = 0x33502cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32760)));
label_335030:
    // 0x335030: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x335030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
label_335034:
    // 0x335034: 0x24c65af0  addiu       $a2, $a2, 0x5AF0
    ctx->pc = 0x335034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23280));
label_335038:
    // 0x335038: 0xc0cc742  jal         func_331D08
label_33503c:
    if (ctx->pc == 0x33503Cu) {
        ctx->pc = 0x33503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335038u;
        // 0x33503c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335040u;
        goto label_335040;
    }
    ctx->pc = 0x335038u;
    SET_GPR_U32(ctx, 31, 0x335040u);
    ctx->pc = 0x33503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335038u;
    // 0x33503c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331D08u, 0x335038u, 0x335040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335040u;
label_335040:
    // 0x335040: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x335040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_335044:
    // 0x335044: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
label_335048:
    if (ctx->pc == 0x335048u) {
        ctx->pc = 0x335048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335044u;
        // 0x335048: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33504Cu;
        goto label_33504c;
    }
    ctx->pc = 0x335044u;
    {
        const bool branch_taken_0x335044 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x335044) {
            ctx->pc = 0x335048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335044u;
            // 0x335048: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335074u;
            goto label_335074;
        }
    }
    ctx->pc = 0x33504Cu;
label_33504c:
    // 0x33504c: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x33504cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_335050:
    // 0x335050: 0x131982  srl         $v1, $s3, 6
    ctx->pc = 0x335050u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_335054:
    // 0x335054: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x335054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_335058:
    // 0x335058: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x335058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_33505c:
    // 0x33505c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_335060:
    // 0x335060: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x335060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_335064:
    // 0x335064: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x335064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_335068:
    // 0x335068: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x335068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_33506c:
    // 0x33506c: 0x1000fd28  b           . + 4 + (-0x2D8 << 2)
label_335070:
    if (ctx->pc == 0x335070u) {
        ctx->pc = 0x335070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33506Cu;
        // 0x335070: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335074u;
        goto label_335074;
    }
    ctx->pc = 0x33506Cu;
    {
        const bool branch_taken_0x33506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33506Cu;
        // 0x335070: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33506c) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x335074u;
label_335074:
    // 0x335074: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x335074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_335078:
    // 0x335078: 0x26248000  addiu       $a0, $s1, -0x8000
    ctx->pc = 0x335078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_33507c:
    // 0x33507c: 0xfc837fe0  sd          $v1, 0x7FE0($a0)
    ctx->pc = 0x33507cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32736), GPR_U64(ctx, 3));
label_335080:
    // 0x335080: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x335080u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_335084:
    // 0x335084: 0xfc827fe8  sd          $v0, 0x7FE8($a0)
    ctx->pc = 0x335084u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32744), GPR_U64(ctx, 2));
label_335088:
    // 0x335088: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x335088u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_33508c:
    // 0x33508c: 0xfc837ff0  sd          $v1, 0x7FF0($a0)
    ctx->pc = 0x33508cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32752), GPR_U64(ctx, 3));
label_335090:
    // 0x335090: 0xdca20018  ld          $v0, 0x18($a1)
    ctx->pc = 0x335090u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_335094:
    // 0x335094: 0x1000fd1e  b           . + 4 + (-0x2E2 << 2)
label_335098:
    if (ctx->pc == 0x335098u) {
        ctx->pc = 0x335098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335094u;
        // 0x335098: 0xfc827ff8  sd          $v0, 0x7FF8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32760), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33509Cu;
        goto label_33509c;
    }
    ctx->pc = 0x335094u;
    {
        const bool branch_taken_0x335094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335094u;
        // 0x335098: 0xfc827ff8  sd          $v0, 0x7FF8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32760), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335094) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x33509Cu;
label_33509c:
    // 0x33509c: 0x26328000  addiu       $s2, $s1, -0x8000
    ctx->pc = 0x33509cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
label_3350a0:
    // 0x3350a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3350a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3350a4:
    // 0x3350a4: 0x8e457fd8  lw          $a1, 0x7FD8($s2)
    ctx->pc = 0x3350a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32728)));
label_3350a8:
    // 0x3350a8: 0xc0cc742  jal         func_331D08
label_3350ac:
    if (ctx->pc == 0x3350ACu) {
        ctx->pc = 0x3350ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350A8u;
        // 0x3350ac: 0x2626ffe0  addiu       $a2, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3350B0u;
        goto label_3350b0;
    }
    ctx->pc = 0x3350A8u;
    SET_GPR_U32(ctx, 31, 0x3350B0u);
    ctx->pc = 0x3350ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3350A8u;
    // 0x3350ac: 0x2626ffe0  addiu       $a2, $s1, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331D08u, 0x3350A8u, 0x3350B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3350B0u;
label_3350b0:
    // 0x3350b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3350b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3350b4:
    // 0x3350b4: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
label_3350b8:
    if (ctx->pc == 0x3350B8u) {
        ctx->pc = 0x3350B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350B4u;
        // 0x3350b8: 0xdce30000  ld          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3350BCu;
        goto label_3350bc;
    }
    ctx->pc = 0x3350B4u;
    {
        const bool branch_taken_0x3350b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3350b4) {
            ctx->pc = 0x3350B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3350B4u;
            // 0x3350b8: 0xdce30000  ld          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3350C4u;
            goto label_3350c4;
        }
    }
    ctx->pc = 0x3350BCu;
label_3350bc:
    // 0x3350bc: 0x1000fd14  b           . + 4 + (-0x2EC << 2)
label_3350c0:
    if (ctx->pc == 0x3350C0u) {
        ctx->pc = 0x3350C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350BCu;
        // 0x3350c0: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3350C4u;
        goto label_3350c4;
    }
    ctx->pc = 0x3350BCu;
    {
        const bool branch_taken_0x3350bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3350C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350BCu;
        // 0x3350c0: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3350bc) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x3350C4u;
label_3350c4:
    // 0x3350c4: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x3350c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
label_3350c8:
    // 0x3350c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3350c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3350cc:
    // 0x3350cc: 0x132982  srl         $a1, $s3, 6
    ctx->pc = 0x3350ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_3350d0:
    // 0x3350d0: 0xfe437fe0  sd          $v1, 0x7FE0($s2)
    ctx->pc = 0x3350d0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32736), GPR_U64(ctx, 3));
label_3350d4:
    // 0x3350d4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3350d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3350d8:
    // 0x3350d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3350d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3350dc:
    // 0x3350dc: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x3350dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_3350e0:
    // 0x3350e0: 0xfe427fe8  sd          $v0, 0x7FE8($s2)
    ctx->pc = 0x3350e0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32744), GPR_U64(ctx, 2));
label_3350e4:
    // 0x3350e4: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x3350e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 16)));
label_3350e8:
    // 0x3350e8: 0xfe437ff0  sd          $v1, 0x7FF0($s2)
    ctx->pc = 0x3350e8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32752), GPR_U64(ctx, 3));
label_3350ec:
    // 0x3350ec: 0xdce40018  ld          $a0, 0x18($a3)
    ctx->pc = 0x3350ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 24)));
label_3350f0:
    // 0x3350f0: 0xfe447ff8  sd          $a0, 0x7FF8($s2)
    ctx->pc = 0x3350f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32760), GPR_U64(ctx, 4));
label_3350f4:
    // 0x3350f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3350f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3350f8:
    // 0x3350f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3350f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3350fc:
    // 0x3350fc: 0x1000fd04  b           . + 4 + (-0x2FC << 2)
label_335100:
    if (ctx->pc == 0x335100u) {
        ctx->pc = 0x335100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350FCu;
        // 0x335100: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335104u;
        goto label_335104;
    }
    ctx->pc = 0x3350FCu;
    {
        const bool branch_taken_0x3350fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350FCu;
        // 0x335100: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3350fc) {
            ctx->pc = 0x334510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334510;
        }
    }
    ctx->pc = 0x335104u;
label_335104:
    // 0x335104: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x335104u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_335108:
    // 0x335108: 0x1313c2  srl         $v0, $s3, 15
    ctx->pc = 0x335108u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 15));
label_33510c:
    // 0x33510c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33510cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_335110:
    // 0x335110: 0x133182  srl         $a2, $s3, 6
    ctx->pc = 0x335110u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
label_335114:
    // 0x335114: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x335114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_335118:
    // 0x335118: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x335118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33511c:
    // 0x33511c: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x33511cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
label_335120:
    // 0x335120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x335120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_335124:
    // 0x335124: 0xc0cce4e  jal         func_333938
label_335128:
    if (ctx->pc == 0x335128u) {
        ctx->pc = 0x335128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335124u;
        // 0x335128: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33512Cu;
        goto label_33512c;
    }
    ctx->pc = 0x335124u;
    SET_GPR_U32(ctx, 31, 0x33512Cu);
    ctx->pc = 0x335128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335124u;
    // 0x335128: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333938u, 0x335124u, 0x33512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33512Cu;
label_33512c:
    // 0x33512c: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x33512cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_335130:
    // 0x335130: 0xc0ca864  jal         func_32A190
label_335134:
    if (ctx->pc == 0x335134u) {
        ctx->pc = 0x335134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335130u;
        // 0x335134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335138u;
        goto label_335138;
    }
    ctx->pc = 0x335130u;
    SET_GPR_U32(ctx, 31, 0x335138u);
    ctx->pc = 0x335134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335130u;
    // 0x335134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A190u, 0x335130u, 0x335138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335138u;
label_335138:
    // 0x335138: 0x1000fcf6  b           . + 4 + (-0x30A << 2)
label_33513c:
    if (ctx->pc == 0x33513Cu) {
        ctx->pc = 0x33513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335138u;
        // 0x33513c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335140u;
        goto label_335140;
    }
    ctx->pc = 0x335138u;
    {
        const bool branch_taken_0x335138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335138u;
        // 0x33513c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335138) {
            ctx->pc = 0x334514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334514;
        }
    }
    ctx->pc = 0x335140u;
label_335140:
    // 0x335140: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x335140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_335144:
    // 0x335144: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x335144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_335148:
    // 0x335148: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x335148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_33514c:
    // 0x33514c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x33514cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_335150:
    // 0x335150: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x335150u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_335154:
    // 0x335154: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x335154u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_335158:
    // 0x335158: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x335158u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33515c:
    // 0x33515c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x33515cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_335160:
    // 0x335160: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x335160u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_335164:
    // 0x335164: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x335164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_335168:
    // 0x335168: 0x3e00008  jr          $ra
label_33516c:
    if (ctx->pc == 0x33516Cu) {
        ctx->pc = 0x33516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335168u;
        // 0x33516c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335170u;
        goto label_fallthrough_0x335168;
    }
    ctx->pc = 0x335168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335168u;
        // 0x33516c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x335168:
    ctx->pc = 0x335170u;
}
