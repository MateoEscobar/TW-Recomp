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

// Function: sub_00302340
// Address: 0x302340 - 0x302cd8
void sub_00302340_0x302340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302340_0x302340");
#endif

    switch (ctx->pc) {
        case 0x302340u: goto label_302340;
        case 0x302344u: goto label_302344;
        case 0x302348u: goto label_302348;
        case 0x30234cu: goto label_30234c;
        case 0x302350u: goto label_302350;
        case 0x302354u: goto label_302354;
        case 0x302358u: goto label_302358;
        case 0x30235cu: goto label_30235c;
        case 0x302360u: goto label_302360;
        case 0x302364u: goto label_302364;
        case 0x302368u: goto label_302368;
        case 0x30236cu: goto label_30236c;
        case 0x302370u: goto label_302370;
        case 0x302374u: goto label_302374;
        case 0x302378u: goto label_302378;
        case 0x30237cu: goto label_30237c;
        case 0x302380u: goto label_302380;
        case 0x302384u: goto label_302384;
        case 0x302388u: goto label_302388;
        case 0x30238cu: goto label_30238c;
        case 0x302390u: goto label_302390;
        case 0x302394u: goto label_302394;
        case 0x302398u: goto label_302398;
        case 0x30239cu: goto label_30239c;
        case 0x3023a0u: goto label_3023a0;
        case 0x3023a4u: goto label_3023a4;
        case 0x3023a8u: goto label_3023a8;
        case 0x3023acu: goto label_3023ac;
        case 0x3023b0u: goto label_3023b0;
        case 0x3023b4u: goto label_3023b4;
        case 0x3023b8u: goto label_3023b8;
        case 0x3023bcu: goto label_3023bc;
        case 0x3023c0u: goto label_3023c0;
        case 0x3023c4u: goto label_3023c4;
        case 0x3023c8u: goto label_3023c8;
        case 0x3023ccu: goto label_3023cc;
        case 0x3023d0u: goto label_3023d0;
        case 0x3023d4u: goto label_3023d4;
        case 0x3023d8u: goto label_3023d8;
        case 0x3023dcu: goto label_3023dc;
        case 0x3023e0u: goto label_3023e0;
        case 0x3023e4u: goto label_3023e4;
        case 0x3023e8u: goto label_3023e8;
        case 0x3023ecu: goto label_3023ec;
        case 0x3023f0u: goto label_3023f0;
        case 0x3023f4u: goto label_3023f4;
        case 0x3023f8u: goto label_3023f8;
        case 0x3023fcu: goto label_3023fc;
        case 0x302400u: goto label_302400;
        case 0x302404u: goto label_302404;
        case 0x302408u: goto label_302408;
        case 0x30240cu: goto label_30240c;
        case 0x302410u: goto label_302410;
        case 0x302414u: goto label_302414;
        case 0x302418u: goto label_302418;
        case 0x30241cu: goto label_30241c;
        case 0x302420u: goto label_302420;
        case 0x302424u: goto label_302424;
        case 0x302428u: goto label_302428;
        case 0x30242cu: goto label_30242c;
        case 0x302430u: goto label_302430;
        case 0x302434u: goto label_302434;
        case 0x302438u: goto label_302438;
        case 0x30243cu: goto label_30243c;
        case 0x302440u: goto label_302440;
        case 0x302444u: goto label_302444;
        case 0x302448u: goto label_302448;
        case 0x30244cu: goto label_30244c;
        case 0x302450u: goto label_302450;
        case 0x302454u: goto label_302454;
        case 0x302458u: goto label_302458;
        case 0x30245cu: goto label_30245c;
        case 0x302460u: goto label_302460;
        case 0x302464u: goto label_302464;
        case 0x302468u: goto label_302468;
        case 0x30246cu: goto label_30246c;
        case 0x302470u: goto label_302470;
        case 0x302474u: goto label_302474;
        case 0x302478u: goto label_302478;
        case 0x30247cu: goto label_30247c;
        case 0x302480u: goto label_302480;
        case 0x302484u: goto label_302484;
        case 0x302488u: goto label_302488;
        case 0x30248cu: goto label_30248c;
        case 0x302490u: goto label_302490;
        case 0x302494u: goto label_302494;
        case 0x302498u: goto label_302498;
        case 0x30249cu: goto label_30249c;
        case 0x3024a0u: goto label_3024a0;
        case 0x3024a4u: goto label_3024a4;
        case 0x3024a8u: goto label_3024a8;
        case 0x3024acu: goto label_3024ac;
        case 0x3024b0u: goto label_3024b0;
        case 0x3024b4u: goto label_3024b4;
        case 0x3024b8u: goto label_3024b8;
        case 0x3024bcu: goto label_3024bc;
        case 0x3024c0u: goto label_3024c0;
        case 0x3024c4u: goto label_3024c4;
        case 0x3024c8u: goto label_3024c8;
        case 0x3024ccu: goto label_3024cc;
        case 0x3024d0u: goto label_3024d0;
        case 0x3024d4u: goto label_3024d4;
        case 0x3024d8u: goto label_3024d8;
        case 0x3024dcu: goto label_3024dc;
        case 0x3024e0u: goto label_3024e0;
        case 0x3024e4u: goto label_3024e4;
        case 0x3024e8u: goto label_3024e8;
        case 0x3024ecu: goto label_3024ec;
        case 0x3024f0u: goto label_3024f0;
        case 0x3024f4u: goto label_3024f4;
        case 0x3024f8u: goto label_3024f8;
        case 0x3024fcu: goto label_3024fc;
        case 0x302500u: goto label_302500;
        case 0x302504u: goto label_302504;
        case 0x302508u: goto label_302508;
        case 0x30250cu: goto label_30250c;
        case 0x302510u: goto label_302510;
        case 0x302514u: goto label_302514;
        case 0x302518u: goto label_302518;
        case 0x30251cu: goto label_30251c;
        case 0x302520u: goto label_302520;
        case 0x302524u: goto label_302524;
        case 0x302528u: goto label_302528;
        case 0x30252cu: goto label_30252c;
        case 0x302530u: goto label_302530;
        case 0x302534u: goto label_302534;
        case 0x302538u: goto label_302538;
        case 0x30253cu: goto label_30253c;
        case 0x302540u: goto label_302540;
        case 0x302544u: goto label_302544;
        case 0x302548u: goto label_302548;
        case 0x30254cu: goto label_30254c;
        case 0x302550u: goto label_302550;
        case 0x302554u: goto label_302554;
        case 0x302558u: goto label_302558;
        case 0x30255cu: goto label_30255c;
        case 0x302560u: goto label_302560;
        case 0x302564u: goto label_302564;
        case 0x302568u: goto label_302568;
        case 0x30256cu: goto label_30256c;
        case 0x302570u: goto label_302570;
        case 0x302574u: goto label_302574;
        case 0x302578u: goto label_302578;
        case 0x30257cu: goto label_30257c;
        case 0x302580u: goto label_302580;
        case 0x302584u: goto label_302584;
        case 0x302588u: goto label_302588;
        case 0x30258cu: goto label_30258c;
        case 0x302590u: goto label_302590;
        case 0x302594u: goto label_302594;
        case 0x302598u: goto label_302598;
        case 0x30259cu: goto label_30259c;
        case 0x3025a0u: goto label_3025a0;
        case 0x3025a4u: goto label_3025a4;
        case 0x3025a8u: goto label_3025a8;
        case 0x3025acu: goto label_3025ac;
        case 0x3025b0u: goto label_3025b0;
        case 0x3025b4u: goto label_3025b4;
        case 0x3025b8u: goto label_3025b8;
        case 0x3025bcu: goto label_3025bc;
        case 0x3025c0u: goto label_3025c0;
        case 0x3025c4u: goto label_3025c4;
        case 0x3025c8u: goto label_3025c8;
        case 0x3025ccu: goto label_3025cc;
        case 0x3025d0u: goto label_3025d0;
        case 0x3025d4u: goto label_3025d4;
        case 0x3025d8u: goto label_3025d8;
        case 0x3025dcu: goto label_3025dc;
        case 0x3025e0u: goto label_3025e0;
        case 0x3025e4u: goto label_3025e4;
        case 0x3025e8u: goto label_3025e8;
        case 0x3025ecu: goto label_3025ec;
        case 0x3025f0u: goto label_3025f0;
        case 0x3025f4u: goto label_3025f4;
        case 0x3025f8u: goto label_3025f8;
        case 0x3025fcu: goto label_3025fc;
        case 0x302600u: goto label_302600;
        case 0x302604u: goto label_302604;
        case 0x302608u: goto label_302608;
        case 0x30260cu: goto label_30260c;
        case 0x302610u: goto label_302610;
        case 0x302614u: goto label_302614;
        case 0x302618u: goto label_302618;
        case 0x30261cu: goto label_30261c;
        case 0x302620u: goto label_302620;
        case 0x302624u: goto label_302624;
        case 0x302628u: goto label_302628;
        case 0x30262cu: goto label_30262c;
        case 0x302630u: goto label_302630;
        case 0x302634u: goto label_302634;
        case 0x302638u: goto label_302638;
        case 0x30263cu: goto label_30263c;
        case 0x302640u: goto label_302640;
        case 0x302644u: goto label_302644;
        case 0x302648u: goto label_302648;
        case 0x30264cu: goto label_30264c;
        case 0x302650u: goto label_302650;
        case 0x302654u: goto label_302654;
        case 0x302658u: goto label_302658;
        case 0x30265cu: goto label_30265c;
        case 0x302660u: goto label_302660;
        case 0x302664u: goto label_302664;
        case 0x302668u: goto label_302668;
        case 0x30266cu: goto label_30266c;
        case 0x302670u: goto label_302670;
        case 0x302674u: goto label_302674;
        case 0x302678u: goto label_302678;
        case 0x30267cu: goto label_30267c;
        case 0x302680u: goto label_302680;
        case 0x302684u: goto label_302684;
        case 0x302688u: goto label_302688;
        case 0x30268cu: goto label_30268c;
        case 0x302690u: goto label_302690;
        case 0x302694u: goto label_302694;
        case 0x302698u: goto label_302698;
        case 0x30269cu: goto label_30269c;
        case 0x3026a0u: goto label_3026a0;
        case 0x3026a4u: goto label_3026a4;
        case 0x3026a8u: goto label_3026a8;
        case 0x3026acu: goto label_3026ac;
        case 0x3026b0u: goto label_3026b0;
        case 0x3026b4u: goto label_3026b4;
        case 0x3026b8u: goto label_3026b8;
        case 0x3026bcu: goto label_3026bc;
        case 0x3026c0u: goto label_3026c0;
        case 0x3026c4u: goto label_3026c4;
        case 0x3026c8u: goto label_3026c8;
        case 0x3026ccu: goto label_3026cc;
        case 0x3026d0u: goto label_3026d0;
        case 0x3026d4u: goto label_3026d4;
        case 0x3026d8u: goto label_3026d8;
        case 0x3026dcu: goto label_3026dc;
        case 0x3026e0u: goto label_3026e0;
        case 0x3026e4u: goto label_3026e4;
        case 0x3026e8u: goto label_3026e8;
        case 0x3026ecu: goto label_3026ec;
        case 0x3026f0u: goto label_3026f0;
        case 0x3026f4u: goto label_3026f4;
        case 0x3026f8u: goto label_3026f8;
        case 0x3026fcu: goto label_3026fc;
        case 0x302700u: goto label_302700;
        case 0x302704u: goto label_302704;
        case 0x302708u: goto label_302708;
        case 0x30270cu: goto label_30270c;
        case 0x302710u: goto label_302710;
        case 0x302714u: goto label_302714;
        case 0x302718u: goto label_302718;
        case 0x30271cu: goto label_30271c;
        case 0x302720u: goto label_302720;
        case 0x302724u: goto label_302724;
        case 0x302728u: goto label_302728;
        case 0x30272cu: goto label_30272c;
        case 0x302730u: goto label_302730;
        case 0x302734u: goto label_302734;
        case 0x302738u: goto label_302738;
        case 0x30273cu: goto label_30273c;
        case 0x302740u: goto label_302740;
        case 0x302744u: goto label_302744;
        case 0x302748u: goto label_302748;
        case 0x30274cu: goto label_30274c;
        case 0x302750u: goto label_302750;
        case 0x302754u: goto label_302754;
        case 0x302758u: goto label_302758;
        case 0x30275cu: goto label_30275c;
        case 0x302760u: goto label_302760;
        case 0x302764u: goto label_302764;
        case 0x302768u: goto label_302768;
        case 0x30276cu: goto label_30276c;
        case 0x302770u: goto label_302770;
        case 0x302774u: goto label_302774;
        case 0x302778u: goto label_302778;
        case 0x30277cu: goto label_30277c;
        case 0x302780u: goto label_302780;
        case 0x302784u: goto label_302784;
        case 0x302788u: goto label_302788;
        case 0x30278cu: goto label_30278c;
        case 0x302790u: goto label_302790;
        case 0x302794u: goto label_302794;
        case 0x302798u: goto label_302798;
        case 0x30279cu: goto label_30279c;
        case 0x3027a0u: goto label_3027a0;
        case 0x3027a4u: goto label_3027a4;
        case 0x3027a8u: goto label_3027a8;
        case 0x3027acu: goto label_3027ac;
        case 0x3027b0u: goto label_3027b0;
        case 0x3027b4u: goto label_3027b4;
        case 0x3027b8u: goto label_3027b8;
        case 0x3027bcu: goto label_3027bc;
        case 0x3027c0u: goto label_3027c0;
        case 0x3027c4u: goto label_3027c4;
        case 0x3027c8u: goto label_3027c8;
        case 0x3027ccu: goto label_3027cc;
        case 0x3027d0u: goto label_3027d0;
        case 0x3027d4u: goto label_3027d4;
        case 0x3027d8u: goto label_3027d8;
        case 0x3027dcu: goto label_3027dc;
        case 0x3027e0u: goto label_3027e0;
        case 0x3027e4u: goto label_3027e4;
        case 0x3027e8u: goto label_3027e8;
        case 0x3027ecu: goto label_3027ec;
        case 0x3027f0u: goto label_3027f0;
        case 0x3027f4u: goto label_3027f4;
        case 0x3027f8u: goto label_3027f8;
        case 0x3027fcu: goto label_3027fc;
        case 0x302800u: goto label_302800;
        case 0x302804u: goto label_302804;
        case 0x302808u: goto label_302808;
        case 0x30280cu: goto label_30280c;
        case 0x302810u: goto label_302810;
        case 0x302814u: goto label_302814;
        case 0x302818u: goto label_302818;
        case 0x30281cu: goto label_30281c;
        case 0x302820u: goto label_302820;
        case 0x302824u: goto label_302824;
        case 0x302828u: goto label_302828;
        case 0x30282cu: goto label_30282c;
        case 0x302830u: goto label_302830;
        case 0x302834u: goto label_302834;
        case 0x302838u: goto label_302838;
        case 0x30283cu: goto label_30283c;
        case 0x302840u: goto label_302840;
        case 0x302844u: goto label_302844;
        case 0x302848u: goto label_302848;
        case 0x30284cu: goto label_30284c;
        case 0x302850u: goto label_302850;
        case 0x302854u: goto label_302854;
        case 0x302858u: goto label_302858;
        case 0x30285cu: goto label_30285c;
        case 0x302860u: goto label_302860;
        case 0x302864u: goto label_302864;
        case 0x302868u: goto label_302868;
        case 0x30286cu: goto label_30286c;
        case 0x302870u: goto label_302870;
        case 0x302874u: goto label_302874;
        case 0x302878u: goto label_302878;
        case 0x30287cu: goto label_30287c;
        case 0x302880u: goto label_302880;
        case 0x302884u: goto label_302884;
        case 0x302888u: goto label_302888;
        case 0x30288cu: goto label_30288c;
        case 0x302890u: goto label_302890;
        case 0x302894u: goto label_302894;
        case 0x302898u: goto label_302898;
        case 0x30289cu: goto label_30289c;
        case 0x3028a0u: goto label_3028a0;
        case 0x3028a4u: goto label_3028a4;
        case 0x3028a8u: goto label_3028a8;
        case 0x3028acu: goto label_3028ac;
        case 0x3028b0u: goto label_3028b0;
        case 0x3028b4u: goto label_3028b4;
        case 0x3028b8u: goto label_3028b8;
        case 0x3028bcu: goto label_3028bc;
        case 0x3028c0u: goto label_3028c0;
        case 0x3028c4u: goto label_3028c4;
        case 0x3028c8u: goto label_3028c8;
        case 0x3028ccu: goto label_3028cc;
        case 0x3028d0u: goto label_3028d0;
        case 0x3028d4u: goto label_3028d4;
        case 0x3028d8u: goto label_3028d8;
        case 0x3028dcu: goto label_3028dc;
        case 0x3028e0u: goto label_3028e0;
        case 0x3028e4u: goto label_3028e4;
        case 0x3028e8u: goto label_3028e8;
        case 0x3028ecu: goto label_3028ec;
        case 0x3028f0u: goto label_3028f0;
        case 0x3028f4u: goto label_3028f4;
        case 0x3028f8u: goto label_3028f8;
        case 0x3028fcu: goto label_3028fc;
        case 0x302900u: goto label_302900;
        case 0x302904u: goto label_302904;
        case 0x302908u: goto label_302908;
        case 0x30290cu: goto label_30290c;
        case 0x302910u: goto label_302910;
        case 0x302914u: goto label_302914;
        case 0x302918u: goto label_302918;
        case 0x30291cu: goto label_30291c;
        case 0x302920u: goto label_302920;
        case 0x302924u: goto label_302924;
        case 0x302928u: goto label_302928;
        case 0x30292cu: goto label_30292c;
        case 0x302930u: goto label_302930;
        case 0x302934u: goto label_302934;
        case 0x302938u: goto label_302938;
        case 0x30293cu: goto label_30293c;
        case 0x302940u: goto label_302940;
        case 0x302944u: goto label_302944;
        case 0x302948u: goto label_302948;
        case 0x30294cu: goto label_30294c;
        case 0x302950u: goto label_302950;
        case 0x302954u: goto label_302954;
        case 0x302958u: goto label_302958;
        case 0x30295cu: goto label_30295c;
        case 0x302960u: goto label_302960;
        case 0x302964u: goto label_302964;
        case 0x302968u: goto label_302968;
        case 0x30296cu: goto label_30296c;
        case 0x302970u: goto label_302970;
        case 0x302974u: goto label_302974;
        case 0x302978u: goto label_302978;
        case 0x30297cu: goto label_30297c;
        case 0x302980u: goto label_302980;
        case 0x302984u: goto label_302984;
        case 0x302988u: goto label_302988;
        case 0x30298cu: goto label_30298c;
        case 0x302990u: goto label_302990;
        case 0x302994u: goto label_302994;
        case 0x302998u: goto label_302998;
        case 0x30299cu: goto label_30299c;
        case 0x3029a0u: goto label_3029a0;
        case 0x3029a4u: goto label_3029a4;
        case 0x3029a8u: goto label_3029a8;
        case 0x3029acu: goto label_3029ac;
        case 0x3029b0u: goto label_3029b0;
        case 0x3029b4u: goto label_3029b4;
        case 0x3029b8u: goto label_3029b8;
        case 0x3029bcu: goto label_3029bc;
        case 0x3029c0u: goto label_3029c0;
        case 0x3029c4u: goto label_3029c4;
        case 0x3029c8u: goto label_3029c8;
        case 0x3029ccu: goto label_3029cc;
        case 0x3029d0u: goto label_3029d0;
        case 0x3029d4u: goto label_3029d4;
        case 0x3029d8u: goto label_3029d8;
        case 0x3029dcu: goto label_3029dc;
        case 0x3029e0u: goto label_3029e0;
        case 0x3029e4u: goto label_3029e4;
        case 0x3029e8u: goto label_3029e8;
        case 0x3029ecu: goto label_3029ec;
        case 0x3029f0u: goto label_3029f0;
        case 0x3029f4u: goto label_3029f4;
        case 0x3029f8u: goto label_3029f8;
        case 0x3029fcu: goto label_3029fc;
        case 0x302a00u: goto label_302a00;
        case 0x302a04u: goto label_302a04;
        case 0x302a08u: goto label_302a08;
        case 0x302a0cu: goto label_302a0c;
        case 0x302a10u: goto label_302a10;
        case 0x302a14u: goto label_302a14;
        case 0x302a18u: goto label_302a18;
        case 0x302a1cu: goto label_302a1c;
        case 0x302a20u: goto label_302a20;
        case 0x302a24u: goto label_302a24;
        case 0x302a28u: goto label_302a28;
        case 0x302a2cu: goto label_302a2c;
        case 0x302a30u: goto label_302a30;
        case 0x302a34u: goto label_302a34;
        case 0x302a38u: goto label_302a38;
        case 0x302a3cu: goto label_302a3c;
        case 0x302a40u: goto label_302a40;
        case 0x302a44u: goto label_302a44;
        case 0x302a48u: goto label_302a48;
        case 0x302a4cu: goto label_302a4c;
        case 0x302a50u: goto label_302a50;
        case 0x302a54u: goto label_302a54;
        case 0x302a58u: goto label_302a58;
        case 0x302a5cu: goto label_302a5c;
        case 0x302a60u: goto label_302a60;
        case 0x302a64u: goto label_302a64;
        case 0x302a68u: goto label_302a68;
        case 0x302a6cu: goto label_302a6c;
        case 0x302a70u: goto label_302a70;
        case 0x302a74u: goto label_302a74;
        case 0x302a78u: goto label_302a78;
        case 0x302a7cu: goto label_302a7c;
        case 0x302a80u: goto label_302a80;
        case 0x302a84u: goto label_302a84;
        case 0x302a88u: goto label_302a88;
        case 0x302a8cu: goto label_302a8c;
        case 0x302a90u: goto label_302a90;
        case 0x302a94u: goto label_302a94;
        case 0x302a98u: goto label_302a98;
        case 0x302a9cu: goto label_302a9c;
        case 0x302aa0u: goto label_302aa0;
        case 0x302aa4u: goto label_302aa4;
        case 0x302aa8u: goto label_302aa8;
        case 0x302aacu: goto label_302aac;
        case 0x302ab0u: goto label_302ab0;
        case 0x302ab4u: goto label_302ab4;
        case 0x302ab8u: goto label_302ab8;
        case 0x302abcu: goto label_302abc;
        case 0x302ac0u: goto label_302ac0;
        case 0x302ac4u: goto label_302ac4;
        case 0x302ac8u: goto label_302ac8;
        case 0x302accu: goto label_302acc;
        case 0x302ad0u: goto label_302ad0;
        case 0x302ad4u: goto label_302ad4;
        case 0x302ad8u: goto label_302ad8;
        case 0x302adcu: goto label_302adc;
        case 0x302ae0u: goto label_302ae0;
        case 0x302ae4u: goto label_302ae4;
        case 0x302ae8u: goto label_302ae8;
        case 0x302aecu: goto label_302aec;
        case 0x302af0u: goto label_302af0;
        case 0x302af4u: goto label_302af4;
        case 0x302af8u: goto label_302af8;
        case 0x302afcu: goto label_302afc;
        case 0x302b00u: goto label_302b00;
        case 0x302b04u: goto label_302b04;
        case 0x302b08u: goto label_302b08;
        case 0x302b0cu: goto label_302b0c;
        case 0x302b10u: goto label_302b10;
        case 0x302b14u: goto label_302b14;
        case 0x302b18u: goto label_302b18;
        case 0x302b1cu: goto label_302b1c;
        case 0x302b20u: goto label_302b20;
        case 0x302b24u: goto label_302b24;
        case 0x302b28u: goto label_302b28;
        case 0x302b2cu: goto label_302b2c;
        case 0x302b30u: goto label_302b30;
        case 0x302b34u: goto label_302b34;
        case 0x302b38u: goto label_302b38;
        case 0x302b3cu: goto label_302b3c;
        case 0x302b40u: goto label_302b40;
        case 0x302b44u: goto label_302b44;
        case 0x302b48u: goto label_302b48;
        case 0x302b4cu: goto label_302b4c;
        case 0x302b50u: goto label_302b50;
        case 0x302b54u: goto label_302b54;
        case 0x302b58u: goto label_302b58;
        case 0x302b5cu: goto label_302b5c;
        case 0x302b60u: goto label_302b60;
        case 0x302b64u: goto label_302b64;
        case 0x302b68u: goto label_302b68;
        case 0x302b6cu: goto label_302b6c;
        case 0x302b70u: goto label_302b70;
        case 0x302b74u: goto label_302b74;
        case 0x302b78u: goto label_302b78;
        case 0x302b7cu: goto label_302b7c;
        case 0x302b80u: goto label_302b80;
        case 0x302b84u: goto label_302b84;
        case 0x302b88u: goto label_302b88;
        case 0x302b8cu: goto label_302b8c;
        case 0x302b90u: goto label_302b90;
        case 0x302b94u: goto label_302b94;
        case 0x302b98u: goto label_302b98;
        case 0x302b9cu: goto label_302b9c;
        case 0x302ba0u: goto label_302ba0;
        case 0x302ba4u: goto label_302ba4;
        case 0x302ba8u: goto label_302ba8;
        case 0x302bacu: goto label_302bac;
        case 0x302bb0u: goto label_302bb0;
        case 0x302bb4u: goto label_302bb4;
        case 0x302bb8u: goto label_302bb8;
        case 0x302bbcu: goto label_302bbc;
        case 0x302bc0u: goto label_302bc0;
        case 0x302bc4u: goto label_302bc4;
        case 0x302bc8u: goto label_302bc8;
        case 0x302bccu: goto label_302bcc;
        case 0x302bd0u: goto label_302bd0;
        case 0x302bd4u: goto label_302bd4;
        case 0x302bd8u: goto label_302bd8;
        case 0x302bdcu: goto label_302bdc;
        case 0x302be0u: goto label_302be0;
        case 0x302be4u: goto label_302be4;
        case 0x302be8u: goto label_302be8;
        case 0x302becu: goto label_302bec;
        case 0x302bf0u: goto label_302bf0;
        case 0x302bf4u: goto label_302bf4;
        case 0x302bf8u: goto label_302bf8;
        case 0x302bfcu: goto label_302bfc;
        case 0x302c00u: goto label_302c00;
        case 0x302c04u: goto label_302c04;
        case 0x302c08u: goto label_302c08;
        case 0x302c0cu: goto label_302c0c;
        case 0x302c10u: goto label_302c10;
        case 0x302c14u: goto label_302c14;
        case 0x302c18u: goto label_302c18;
        case 0x302c1cu: goto label_302c1c;
        case 0x302c20u: goto label_302c20;
        case 0x302c24u: goto label_302c24;
        case 0x302c28u: goto label_302c28;
        case 0x302c2cu: goto label_302c2c;
        case 0x302c30u: goto label_302c30;
        case 0x302c34u: goto label_302c34;
        case 0x302c38u: goto label_302c38;
        case 0x302c3cu: goto label_302c3c;
        case 0x302c40u: goto label_302c40;
        case 0x302c44u: goto label_302c44;
        case 0x302c48u: goto label_302c48;
        case 0x302c4cu: goto label_302c4c;
        case 0x302c50u: goto label_302c50;
        case 0x302c54u: goto label_302c54;
        case 0x302c58u: goto label_302c58;
        case 0x302c5cu: goto label_302c5c;
        case 0x302c60u: goto label_302c60;
        case 0x302c64u: goto label_302c64;
        case 0x302c68u: goto label_302c68;
        case 0x302c6cu: goto label_302c6c;
        case 0x302c70u: goto label_302c70;
        case 0x302c74u: goto label_302c74;
        case 0x302c78u: goto label_302c78;
        case 0x302c7cu: goto label_302c7c;
        case 0x302c80u: goto label_302c80;
        case 0x302c84u: goto label_302c84;
        case 0x302c88u: goto label_302c88;
        case 0x302c8cu: goto label_302c8c;
        case 0x302c90u: goto label_302c90;
        case 0x302c94u: goto label_302c94;
        case 0x302c98u: goto label_302c98;
        case 0x302c9cu: goto label_302c9c;
        case 0x302ca0u: goto label_302ca0;
        case 0x302ca4u: goto label_302ca4;
        case 0x302ca8u: goto label_302ca8;
        case 0x302cacu: goto label_302cac;
        case 0x302cb0u: goto label_302cb0;
        case 0x302cb4u: goto label_302cb4;
        case 0x302cb8u: goto label_302cb8;
        case 0x302cbcu: goto label_302cbc;
        case 0x302cc0u: goto label_302cc0;
        case 0x302cc4u: goto label_302cc4;
        case 0x302cc8u: goto label_302cc8;
        case 0x302cccu: goto label_302ccc;
        case 0x302cd0u: goto label_302cd0;
        case 0x302cd4u: goto label_302cd4;
        default: break;
    }

    ctx->pc = 0x302340u;

label_302340:
    // 0x302340: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x302340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_302344:
    // 0x302344: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x302344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_302348:
    // 0x302348: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x302348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_30234c:
    // 0x30234c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30234cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_302350:
    // 0x302350: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x302350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_302354:
    // 0x302354: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x302354u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_302358:
    // 0x302358: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x302358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_30235c:
    // 0x30235c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x30235cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_302360:
    // 0x302360: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x302360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_302364:
    // 0x302364: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x302364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_302368:
    // 0x302368: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x302368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_30236c:
    // 0x30236c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x30236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_302370:
    // 0x302370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x302370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_302374:
    // 0x302374: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x302374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_302378:
    // 0x302378: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x302378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_30237c:
    // 0x30237c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x30237cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_302380:
    // 0x302380: 0x2c830017  sltiu       $v1, $a0, 0x17
    ctx->pc = 0x302380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_302384:
    // 0x302384: 0x10600244  beqz        $v1, . + 4 + (0x244 << 2)
label_302388:
    if (ctx->pc == 0x302388u) {
        ctx->pc = 0x302388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302384u;
        // 0x302388: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30238Cu;
        goto label_30238c;
    }
    ctx->pc = 0x302384u;
    {
        const bool branch_taken_0x302384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x302388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302384u;
        // 0x302388: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302384) {
            ctx->pc = 0x302C98u;
            goto label_302c98;
        }
    }
    ctx->pc = 0x30238Cu;
label_30238c:
    // 0x30238c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30238cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_302390:
    // 0x302390: 0x24429310  addiu       $v0, $v0, -0x6CF0
    ctx->pc = 0x302390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939408));
label_302394:
    // 0x302394: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x302394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_302398:
    // 0x302398: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x302398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30239c:
    // 0x30239c: 0x800008  jr          $a0
label_3023a0:
    if (ctx->pc == 0x3023A0u) {
        ctx->pc = 0x3023A4u;
        goto label_3023a4;
    }
    ctx->pc = 0x30239Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3023A4u: goto label_3023a4;
            case 0x3023BCu: goto label_3023bc;
            case 0x3023C8u: goto label_3023c8;
            case 0x3023D0u: goto label_3023d0;
            case 0x302AA4u: goto label_302aa4;
            case 0x302ABCu: goto label_302abc;
            case 0x302C98u: goto label_302c98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30239Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3023A4u;
label_3023a4:
    // 0x3023a4: 0x92230011  lbu         $v1, 0x11($s1)
    ctx->pc = 0x3023a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_3023a8:
    // 0x3023a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3023a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3023ac:
    // 0x3023ac: 0x1462023e  bne         $v1, $v0, . + 4 + (0x23E << 2)
label_3023b0:
    if (ctx->pc == 0x3023B0u) {
        ctx->pc = 0x3023B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023ACu;
        // 0x3023b0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3023B4u;
        goto label_3023b4;
    }
    ctx->pc = 0x3023ACu;
    {
        const bool branch_taken_0x3023ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3023B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023ACu;
        // 0x3023b0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3023ac) {
            ctx->pc = 0x302CA8u;
            goto label_302ca8;
        }
    }
    ctx->pc = 0x3023B4u;
label_3023b4:
    // 0x3023b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3023b8:
    if (ctx->pc == 0x3023B8u) {
        ctx->pc = 0x3023B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023B4u;
        // 0x3023b8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3023BCu;
        goto label_3023bc;
    }
    ctx->pc = 0x3023B4u;
    {
        const bool branch_taken_0x3023b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3023B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023B4u;
        // 0x3023b8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3023b4) {
            ctx->pc = 0x3023C0u;
            goto label_3023c0;
        }
    }
    ctx->pc = 0x3023BCu;
label_3023bc:
    // 0x3023bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3023bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3023c0:
    // 0x3023c0: 0xc0c073e  jal         func_301CF8
label_3023c4:
    if (ctx->pc == 0x3023C4u) {
        ctx->pc = 0x3023C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023C0u;
        // 0x3023c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3023C8u;
        goto label_3023c8;
    }
    ctx->pc = 0x3023C0u;
    SET_GPR_U32(ctx, 31, 0x3023C8u);
    ctx->pc = 0x3023C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3023C0u;
    // 0x3023c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301CF8u, 0x3023C0u, 0x3023C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023C8u;
label_3023c8:
    // 0x3023c8: 0x10000236  b           . + 4 + (0x236 << 2)
label_3023cc:
    if (ctx->pc == 0x3023CCu) {
        ctx->pc = 0x3023CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023C8u;
        // 0x3023cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3023D0u;
        goto label_3023d0;
    }
    ctx->pc = 0x3023C8u;
    {
        const bool branch_taken_0x3023c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3023CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023C8u;
        // 0x3023cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3023c8) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x3023D0u;
label_3023d0:
    // 0x3023d0: 0x8e82021c  lw          $v0, 0x21C($s4)
    ctx->pc = 0x3023d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 540)));
label_3023d4:
    // 0x3023d4: 0x10400233  beqz        $v0, . + 4 + (0x233 << 2)
label_3023d8:
    if (ctx->pc == 0x3023D8u) {
        ctx->pc = 0x3023D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023D4u;
        // 0x3023d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3023DCu;
        goto label_3023dc;
    }
    ctx->pc = 0x3023D4u;
    {
        const bool branch_taken_0x3023d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3023D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023D4u;
        // 0x3023d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3023d4) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x3023DCu;
label_3023dc:
    // 0x3023dc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3023dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3023e0:
    // 0x3023e0: 0xc089f98  jal         func_227E60
label_3023e4:
    if (ctx->pc == 0x3023E4u) {
        ctx->pc = 0x3023E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023E0u;
        // 0x3023e4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3023E8u;
        goto label_3023e8;
    }
    ctx->pc = 0x3023E0u;
    SET_GPR_U32(ctx, 31, 0x3023E8u);
    ctx->pc = 0x3023E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3023E0u;
    // 0x3023e4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x3023E0u, 0x3023E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023E8u;
label_3023e8:
    // 0x3023e8: 0x1052fff7  beq         $v0, $s2, . + 4 + (-0x9 << 2)
label_3023ec:
    if (ctx->pc == 0x3023ECu) {
        ctx->pc = 0x3023ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023E8u;
        // 0x3023ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3023F0u;
        goto label_3023f0;
    }
    ctx->pc = 0x3023E8u;
    {
        const bool branch_taken_0x3023e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x3023ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023E8u;
        // 0x3023ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3023e8) {
            ctx->pc = 0x3023C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3023c8;
        }
    }
    ctx->pc = 0x3023F0u;
label_3023f0:
    // 0x3023f0: 0x8e360024  lw          $s6, 0x24($s1)
    ctx->pc = 0x3023f0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3023f4:
    // 0x3023f4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3023f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3023f8:
    // 0x3023f8: 0xc0a44ac  jal         func_2912B0
label_3023fc:
    if (ctx->pc == 0x3023FCu) {
        ctx->pc = 0x3023FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023F8u;
        // 0x3023fc: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302400u;
        goto label_302400;
    }
    ctx->pc = 0x3023F8u;
    SET_GPR_U32(ctx, 31, 0x302400u);
    ctx->pc = 0x3023FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3023F8u;
    // 0x3023fc: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2912B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2912B0u, 0x3023F8u, 0x302400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302400u;
label_302400:
    // 0x302400: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x302400u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302404:
    // 0x302404: 0x12a000f9  beqz        $s5, . + 4 + (0xF9 << 2)
label_302408:
    if (ctx->pc == 0x302408u) {
        ctx->pc = 0x302408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302404u;
        // 0x302408: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30240Cu;
        goto label_30240c;
    }
    ctx->pc = 0x302404u;
    {
        const bool branch_taken_0x302404 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x302408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302404u;
        // 0x302408: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302404) {
            ctx->pc = 0x3027ECu;
            goto label_3027ec;
        }
    }
    ctx->pc = 0x30240Cu;
label_30240c:
    // 0x30240c: 0xc0a34d6  jal         func_28D358
label_302410:
    if (ctx->pc == 0x302410u) {
        ctx->pc = 0x302410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30240Cu;
        // 0x302410: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302414u;
        goto label_302414;
    }
    ctx->pc = 0x30240Cu;
    SET_GPR_U32(ctx, 31, 0x302414u);
    ctx->pc = 0x302410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30240Cu;
    // 0x302410: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x30240Cu, 0x302414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302414u;
label_302414:
    // 0x302414: 0x10400223  beqz        $v0, . + 4 + (0x223 << 2)
label_302418:
    if (ctx->pc == 0x302418u) {
        ctx->pc = 0x302418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302414u;
        // 0x302418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30241Cu;
        goto label_30241c;
    }
    ctx->pc = 0x302414u;
    {
        const bool branch_taken_0x302414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302414u;
        // 0x302418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302414) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x30241Cu;
label_30241c:
    // 0x30241c: 0x16b60002  bne         $s5, $s6, . + 4 + (0x2 << 2)
label_302420:
    if (ctx->pc == 0x302420u) {
        ctx->pc = 0x302420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30241Cu;
        // 0x302420: 0x2c0f02d  daddu       $fp, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302424u;
        goto label_302424;
    }
    ctx->pc = 0x30241Cu;
    {
        const bool branch_taken_0x30241c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x302420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30241Cu;
        // 0x302420: 0x2c0f02d  daddu       $fp, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30241c) {
            ctx->pc = 0x302428u;
            goto label_302428;
        }
    }
    ctx->pc = 0x302424u;
label_302424:
    // 0x302424: 0x8e3e0000  lw          $fp, 0x0($s1)
    ctx->pc = 0x302424u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_302428:
    // 0x302428: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x302428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_30242c:
    // 0x30242c: 0xc087502  jal         func_21D408
label_302430:
    if (ctx->pc == 0x302430u) {
        ctx->pc = 0x302430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30242Cu;
        // 0x302430: 0x2417000e  addiu       $s7, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302434u;
        goto label_302434;
    }
    ctx->pc = 0x30242Cu;
    SET_GPR_U32(ctx, 31, 0x302434u);
    ctx->pc = 0x302430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30242Cu;
    // 0x302430: 0x2417000e  addiu       $s7, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30242Cu, 0x302434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302434u;
label_302434:
    // 0x302434: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x302434u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_302438:
    // 0x302438: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x302438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30243c:
    // 0x30243c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_302440:
    if (ctx->pc == 0x302440u) {
        ctx->pc = 0x302440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30243Cu;
        // 0x302440: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302444u;
        goto label_302444;
    }
    ctx->pc = 0x30243Cu;
    {
        const bool branch_taken_0x30243c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x302440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30243Cu;
        // 0x302440: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30243c) {
            ctx->pc = 0x30245Cu;
            goto label_30245c;
        }
    }
    ctx->pc = 0x302444u;
label_302444:
    // 0x302444: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
label_302448:
    if (ctx->pc == 0x302448u) {
        ctx->pc = 0x302448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302444u;
        // 0x302448: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30244Cu;
        goto label_30244c;
    }
    ctx->pc = 0x302444u;
    {
        const bool branch_taken_0x302444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x302448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302444u;
        // 0x302448: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302444) {
            ctx->pc = 0x30245Cu;
            goto label_30245c;
        }
    }
    ctx->pc = 0x30244Cu;
label_30244c:
    // 0x30244c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_302450:
    if (ctx->pc == 0x302450u) {
        ctx->pc = 0x302450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30244Cu;
        // 0x302450: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302454u;
        goto label_302454;
    }
    ctx->pc = 0x30244Cu;
    {
        const bool branch_taken_0x30244c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x302450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30244Cu;
        // 0x302450: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30244c) {
            ctx->pc = 0x30245Cu;
            goto label_30245c;
        }
    }
    ctx->pc = 0x302454u;
label_302454:
    // 0x302454: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_302458:
    if (ctx->pc == 0x302458u) {
        ctx->pc = 0x30245Cu;
        goto label_30245c;
    }
    ctx->pc = 0x302454u;
    {
        const bool branch_taken_0x302454 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x302454) {
            ctx->pc = 0x302474u;
            goto label_302474;
        }
    }
    ctx->pc = 0x30245Cu;
label_30245c:
    // 0x30245c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30245cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_302460:
    // 0x302460: 0xc08a01c  jal         func_228070
label_302464:
    if (ctx->pc == 0x302464u) {
        ctx->pc = 0x302464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302460u;
        // 0x302464: 0x24170008  addiu       $s7, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302468u;
        goto label_302468;
    }
    ctx->pc = 0x302460u;
    SET_GPR_U32(ctx, 31, 0x302468u);
    ctx->pc = 0x302464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302460u;
    // 0x302464: 0x24170008  addiu       $s7, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x302460u, 0x302468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302468u;
label_302468:
    // 0x302468: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x302468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_30246c:
    // 0x30246c: 0x10000007  b           . + 4 + (0x7 << 2)
label_302470:
    if (ctx->pc == 0x302470u) {
        ctx->pc = 0x302470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30246Cu;
        // 0x302470: 0x2b80b  movn        $s7, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302474u;
        goto label_302474;
    }
    ctx->pc = 0x30246Cu;
    {
        const bool branch_taken_0x30246c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30246Cu;
        // 0x302470: 0x2b80b  movn        $s7, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30246c) {
            ctx->pc = 0x30248Cu;
            goto label_30248c;
        }
    }
    ctx->pc = 0x302474u;
label_302474:
    // 0x302474: 0x16120006  bne         $s0, $s2, . + 4 + (0x6 << 2)
label_302478:
    if (ctx->pc == 0x302478u) {
        ctx->pc = 0x302478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302474u;
        // 0x302478: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30247Cu;
        goto label_30247c;
    }
    ctx->pc = 0x302474u;
    {
        const bool branch_taken_0x302474 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x302478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302474u;
        // 0x302478: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302474) {
            ctx->pc = 0x302490u;
            goto label_302490;
        }
    }
    ctx->pc = 0x30247Cu;
label_30247c:
    // 0x30247c: 0x12b60004  beq         $s5, $s6, . + 4 + (0x4 << 2)
label_302480:
    if (ctx->pc == 0x302480u) {
        ctx->pc = 0x302484u;
        goto label_302484;
    }
    ctx->pc = 0x30247Cu;
    {
        const bool branch_taken_0x30247c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        if (branch_taken_0x30247c) {
            ctx->pc = 0x302490u;
            goto label_302490;
        }
    }
    ctx->pc = 0x302484u;
label_302484:
    // 0x302484: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x302484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_302488:
    // 0x302488: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x302488u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
label_30248c:
    // 0x30248c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_302490:
    // 0x302490: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_302494:
    if (ctx->pc == 0x302494u) {
        ctx->pc = 0x302498u;
        goto label_302498;
    }
    ctx->pc = 0x302490u;
    {
        const bool branch_taken_0x302490 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x302490) {
            ctx->pc = 0x3024C8u;
            goto label_3024c8;
        }
    }
    ctx->pc = 0x302498u;
label_302498:
    // 0x302498: 0x16e0000b  bnez        $s7, . + 4 + (0xB << 2)
label_30249c:
    if (ctx->pc == 0x30249Cu) {
        ctx->pc = 0x30249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302498u;
        // 0x30249c: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3024A0u;
        goto label_3024a0;
    }
    ctx->pc = 0x302498u;
    {
        const bool branch_taken_0x302498 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x30249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302498u;
        // 0x30249c: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302498) {
            ctx->pc = 0x3024C8u;
            goto label_3024c8;
        }
    }
    ctx->pc = 0x3024A0u;
label_3024a0:
    // 0x3024a0: 0x87c20092  lh          $v0, 0x92($fp)
    ctx->pc = 0x3024a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 146)));
label_3024a4:
    // 0x3024a4: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x3024a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_3024a8:
    // 0x3024a8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3024a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3024ac:
    // 0x3024ac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3024acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3024b0:
    // 0x3024b0: 0xc68c0140  lwc1        $f12, 0x140($s4)
    ctx->pc = 0x3024b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3024b4:
    // 0x3024b4: 0xc0a785a  jal         func_29E168
label_3024b8:
    if (ctx->pc == 0x3024B8u) {
        ctx->pc = 0x3024B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024B4u;
        // 0x3024b8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3024BCu;
        goto label_3024bc;
    }
    ctx->pc = 0x3024B4u;
    SET_GPR_U32(ctx, 31, 0x3024BCu);
    ctx->pc = 0x3024B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3024B4u;
    // 0x3024b8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E168u, 0x3024B4u, 0x3024BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3024BCu;
label_3024bc:
    // 0x3024bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3024bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3024c0:
    // 0x3024c0: 0x104301f8  beq         $v0, $v1, . + 4 + (0x1F8 << 2)
label_3024c4:
    if (ctx->pc == 0x3024C4u) {
        ctx->pc = 0x3024C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024C0u;
        // 0x3024c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3024C8u;
        goto label_3024c8;
    }
    ctx->pc = 0x3024C0u;
    {
        const bool branch_taken_0x3024c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3024C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024C0u;
        // 0x3024c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3024c0) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x3024C8u;
label_3024c8:
    // 0x3024c8: 0xc0e409a  jal         func_390268
label_3024cc:
    if (ctx->pc == 0x3024CCu) {
        ctx->pc = 0x3024CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024C8u;
        // 0x3024cc: 0x26840124  addiu       $a0, $s4, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3024D0u;
        goto label_3024d0;
    }
    ctx->pc = 0x3024C8u;
    SET_GPR_U32(ctx, 31, 0x3024D0u);
    ctx->pc = 0x3024CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3024C8u;
    // 0x3024cc: 0x26840124  addiu       $a0, $s4, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3024C8u, 0x3024D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3024D0u;
label_3024d0:
    // 0x3024d0: 0x144001f4  bnez        $v0, . + 4 + (0x1F4 << 2)
label_3024d4:
    if (ctx->pc == 0x3024D4u) {
        ctx->pc = 0x3024D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024D0u;
        // 0x3024d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3024D8u;
        goto label_3024d8;
    }
    ctx->pc = 0x3024D0u;
    {
        const bool branch_taken_0x3024d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3024D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024D0u;
        // 0x3024d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3024d0) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x3024D8u;
label_3024d8:
    // 0x3024d8: 0xc08a08a  jal         func_228228
label_3024dc:
    if (ctx->pc == 0x3024DCu) {
        ctx->pc = 0x3024DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024D8u;
        // 0x3024dc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3024E0u;
        goto label_3024e0;
    }
    ctx->pc = 0x3024D8u;
    SET_GPR_U32(ctx, 31, 0x3024E0u);
    ctx->pc = 0x3024DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3024D8u;
    // 0x3024dc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x3024D8u, 0x3024E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3024E0u;
label_3024e0:
    // 0x3024e0: 0x144001f0  bnez        $v0, . + 4 + (0x1F0 << 2)
label_3024e4:
    if (ctx->pc == 0x3024E4u) {
        ctx->pc = 0x3024E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024E0u;
        // 0x3024e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3024E8u;
        goto label_3024e8;
    }
    ctx->pc = 0x3024E0u;
    {
        const bool branch_taken_0x3024e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3024E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024E0u;
        // 0x3024e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3024e0) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x3024E8u;
label_3024e8:
    // 0x3024e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3024e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3024ec:
    // 0x3024ec: 0xc0a3658  jal         func_28D960
label_3024f0:
    if (ctx->pc == 0x3024F0u) {
        ctx->pc = 0x3024F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024ECu;
        // 0x3024f0: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3024F4u;
        goto label_3024f4;
    }
    ctx->pc = 0x3024ECu;
    SET_GPR_U32(ctx, 31, 0x3024F4u);
    ctx->pc = 0x3024F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3024ECu;
    // 0x3024f0: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x3024ECu, 0x3024F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3024F4u;
label_3024f4:
    // 0x3024f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3024f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3024f8:
    // 0x3024f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3024f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3024fc:
    // 0x3024fc: 0x162201e9  bne         $s1, $v0, . + 4 + (0x1E9 << 2)
label_302500:
    if (ctx->pc == 0x302500u) {
        ctx->pc = 0x302500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024FCu;
        // 0x302500: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302504u;
        goto label_302504;
    }
    ctx->pc = 0x3024FCu;
    {
        const bool branch_taken_0x3024fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x302500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024FCu;
        // 0x302500: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3024fc) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x302504u;
label_302504:
    // 0x302504: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x302504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_302508:
    // 0x302508: 0xc0a3658  jal         func_28D960
label_30250c:
    if (ctx->pc == 0x30250Cu) {
        ctx->pc = 0x30250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302508u;
        // 0x30250c: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302510u;
        goto label_302510;
    }
    ctx->pc = 0x302508u;
    SET_GPR_U32(ctx, 31, 0x302510u);
    ctx->pc = 0x30250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302508u;
    // 0x30250c: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x302508u, 0x302510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302510u;
label_302510:
    // 0x302510: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x302510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302514:
    // 0x302514: 0x161101e3  bne         $s0, $s1, . + 4 + (0x1E3 << 2)
label_302518:
    if (ctx->pc == 0x302518u) {
        ctx->pc = 0x302518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302514u;
        // 0x302518: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30251Cu;
        goto label_30251c;
    }
    ctx->pc = 0x302514u;
    {
        const bool branch_taken_0x302514 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x302518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302514u;
        // 0x302518: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302514) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x30251Cu;
label_30251c:
    // 0x30251c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30251cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_302520:
    // 0x302520: 0xc0a3658  jal         func_28D960
label_302524:
    if (ctx->pc == 0x302524u) {
        ctx->pc = 0x302524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302520u;
        // 0x302524: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302528u;
        goto label_302528;
    }
    ctx->pc = 0x302520u;
    SET_GPR_U32(ctx, 31, 0x302528u);
    ctx->pc = 0x302524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302520u;
    // 0x302524: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x302520u, 0x302528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302528u;
label_302528:
    // 0x302528: 0x145001de  bne         $v0, $s0, . + 4 + (0x1DE << 2)
label_30252c:
    if (ctx->pc == 0x30252Cu) {
        ctx->pc = 0x30252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302528u;
        // 0x30252c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302530u;
        goto label_302530;
    }
    ctx->pc = 0x302528u;
    {
        const bool branch_taken_0x302528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x30252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302528u;
        // 0x30252c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302528) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x302530u;
label_302530:
    // 0x302530: 0xc0a40d2  jal         func_290348
label_302534:
    if (ctx->pc == 0x302534u) {
        ctx->pc = 0x302534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302530u;
        // 0x302534: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302538u;
        goto label_302538;
    }
    ctx->pc = 0x302530u;
    SET_GPR_U32(ctx, 31, 0x302538u);
    ctx->pc = 0x302534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302530u;
    // 0x302534: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x302530u, 0x302538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302538u;
label_302538:
    // 0x302538: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x302538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_30253c:
    // 0x30253c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x30253cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_302540:
    // 0x302540: 0x5600003c  bnel        $s0, $zero, . + 4 + (0x3C << 2)
label_302544:
    if (ctx->pc == 0x302544u) {
        ctx->pc = 0x302544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302540u;
        // 0x302544: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302548u;
        goto label_302548;
    }
    ctx->pc = 0x302540u;
    {
        const bool branch_taken_0x302540 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x302540) {
            ctx->pc = 0x302544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302540u;
            // 0x302544: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302634u;
            goto label_302634;
        }
    }
    ctx->pc = 0x302548u;
label_302548:
    // 0x302548: 0x8282002c  lb          $v0, 0x2C($s4)
    ctx->pc = 0x302548u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
label_30254c:
    // 0x30254c: 0x4420012  bltzl       $v0, . + 4 + (0x12 << 2)
label_302550:
    if (ctx->pc == 0x302550u) {
        ctx->pc = 0x302550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30254Cu;
        // 0x302550: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302554u;
        goto label_302554;
    }
    ctx->pc = 0x30254Cu;
    {
        const bool branch_taken_0x30254c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x30254c) {
            ctx->pc = 0x302550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30254Cu;
            // 0x302550: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302598u;
            goto label_302598;
        }
    }
    ctx->pc = 0x302554u;
label_302554:
    // 0x302554: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_302558:
    if (ctx->pc == 0x302558u) {
        ctx->pc = 0x302558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302554u;
        // 0x302558: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30255Cu;
        goto label_30255c;
    }
    ctx->pc = 0x302554u;
    {
        const bool branch_taken_0x302554 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x302558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302554u;
        // 0x302558: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302554) {
            ctx->pc = 0x302568u;
            goto label_302568;
        }
    }
    ctx->pc = 0x30255Cu;
label_30255c:
    // 0x30255c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x30255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_302560:
    // 0x302560: 0x10000002  b           . + 4 + (0x2 << 2)
label_302564:
    if (ctx->pc == 0x302564u) {
        ctx->pc = 0x302564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302560u;
        // 0x302564: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302568u;
        goto label_302568;
    }
    ctx->pc = 0x302560u;
    {
        const bool branch_taken_0x302560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302560u;
        // 0x302564: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302560) {
            ctx->pc = 0x30256Cu;
            goto label_30256c;
        }
    }
    ctx->pc = 0x302568u;
label_302568:
    // 0x302568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x302568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30256c:
    // 0x30256c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x30256cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_302570:
    // 0x302570: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x302570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_302574:
    // 0x302574: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x302574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_302578:
    // 0x302578: 0x40f809  jalr        $v0
label_30257c:
    if (ctx->pc == 0x30257Cu) {
        ctx->pc = 0x30257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302578u;
        // 0x30257c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302580u;
        goto label_302580;
    }
    ctx->pc = 0x302578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302580u);
        ctx->pc = 0x30257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302578u;
        // 0x30257c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302578u, 0x302580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302580u;
label_302580:
    // 0x302580: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x302580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_302584:
    // 0x302584: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_302588:
    if (ctx->pc == 0x302588u) {
        ctx->pc = 0x302588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302584u;
        // 0x302588: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30258Cu;
        goto label_30258c;
    }
    ctx->pc = 0x302584u;
    {
        const bool branch_taken_0x302584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x302588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302584u;
        // 0x302588: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302584) {
            ctx->pc = 0x302598u;
            goto label_302598;
        }
    }
    ctx->pc = 0x30258Cu;
label_30258c:
    // 0x30258c: 0xc0a35f6  jal         func_28D7D8
label_302590:
    if (ctx->pc == 0x302590u) {
        ctx->pc = 0x302590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30258Cu;
        // 0x302590: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302594u;
        goto label_302594;
    }
    ctx->pc = 0x30258Cu;
    SET_GPR_U32(ctx, 31, 0x302594u);
    ctx->pc = 0x302590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30258Cu;
    // 0x302590: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x30258Cu, 0x302594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302594u;
label_302594:
    // 0x302594: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x302594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_302598:
    // 0x302598: 0xc0a3658  jal         func_28D960
label_30259c:
    if (ctx->pc == 0x30259Cu) {
        ctx->pc = 0x30259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302598u;
        // 0x30259c: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3025A0u;
        goto label_3025a0;
    }
    ctx->pc = 0x302598u;
    SET_GPR_U32(ctx, 31, 0x3025A0u);
    ctx->pc = 0x30259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302598u;
    // 0x30259c: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x302598u, 0x3025A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025A0u;
label_3025a0:
    // 0x3025a0: 0x8283002d  lb          $v1, 0x2D($s4)
    ctx->pc = 0x3025a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 45)));
label_3025a4:
    // 0x3025a4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3025a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3025a8:
    // 0x3025a8: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_3025ac:
    if (ctx->pc == 0x3025ACu) {
        ctx->pc = 0x3025ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025A8u;
        // 0x3025ac: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3025B0u;
        goto label_3025b0;
    }
    ctx->pc = 0x3025A8u;
    {
        const bool branch_taken_0x3025a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3025a8) {
            ctx->pc = 0x3025ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3025A8u;
            // 0x3025ac: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3025ECu;
            goto label_3025ec;
        }
    }
    ctx->pc = 0x3025B0u;
label_3025b0:
    // 0x3025b0: 0xc694012c  lwc1        $f20, 0x12C($s4)
    ctx->pc = 0x3025b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3025b4:
    // 0x3025b4: 0xc0a2fc0  jal         func_28BF00
label_3025b8:
    if (ctx->pc == 0x3025B8u) {
        ctx->pc = 0x3025B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025B4u;
        // 0x3025b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3025BCu;
        goto label_3025bc;
    }
    ctx->pc = 0x3025B4u;
    SET_GPR_U32(ctx, 31, 0x3025BCu);
    ctx->pc = 0x3025B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3025B4u;
    // 0x3025b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x3025B4u, 0x3025BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025BCu;
label_3025bc:
    // 0x3025bc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3025bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3025c0:
    // 0x3025c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3025c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3025c4:
    // 0x3025c4: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x3025c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_3025c8:
    // 0x3025c8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3025c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3025cc:
    // 0x3025cc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x3025ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_3025d0:
    // 0x3025d0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3025d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3025d4:
    // 0x3025d4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3025d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3025d8:
    // 0x3025d8: 0xc0888fa  jal         func_2223E8
label_3025dc:
    if (ctx->pc == 0x3025DCu) {
        ctx->pc = 0x3025DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025D8u;
        // 0x3025dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3025E0u;
        goto label_3025e0;
    }
    ctx->pc = 0x3025D8u;
    SET_GPR_U32(ctx, 31, 0x3025E0u);
    ctx->pc = 0x3025DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3025D8u;
    // 0x3025dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x3025D8u, 0x3025E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025E0u;
label_3025e0:
    // 0x3025e0: 0x104001b0  beqz        $v0, . + 4 + (0x1B0 << 2)
label_3025e4:
    if (ctx->pc == 0x3025E4u) {
        ctx->pc = 0x3025E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025E0u;
        // 0x3025e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3025E8u;
        goto label_3025e8;
    }
    ctx->pc = 0x3025E0u;
    {
        const bool branch_taken_0x3025e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3025E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025E0u;
        // 0x3025e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3025e0) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x3025E8u;
label_3025e8:
    // 0x3025e8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3025e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3025ec:
    // 0x3025ec: 0xc088a92  jal         func_222A48
label_3025f0:
    if (ctx->pc == 0x3025F0u) {
        ctx->pc = 0x3025F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025ECu;
        // 0x3025f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3025F4u;
        goto label_3025f4;
    }
    ctx->pc = 0x3025ECu;
    SET_GPR_U32(ctx, 31, 0x3025F4u);
    ctx->pc = 0x3025F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3025ECu;
    // 0x3025f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x3025ECu, 0x3025F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025F4u;
label_3025f4:
    // 0x3025f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3025f8:
    if (ctx->pc == 0x3025F8u) {
        ctx->pc = 0x3025FCu;
        goto label_3025fc;
    }
    ctx->pc = 0x3025F4u;
    {
        const bool branch_taken_0x3025f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3025f4) {
            ctx->pc = 0x302610u;
            goto label_302610;
        }
    }
    ctx->pc = 0x3025FCu;
label_3025fc:
    // 0x3025fc: 0xc087502  jal         func_21D408
label_302600:
    if (ctx->pc == 0x302600u) {
        ctx->pc = 0x302600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025FCu;
        // 0x302600: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302604u;
        goto label_302604;
    }
    ctx->pc = 0x3025FCu;
    SET_GPR_U32(ctx, 31, 0x302604u);
    ctx->pc = 0x302600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3025FCu;
    // 0x302600: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3025FCu, 0x302604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302604u;
label_302604:
    // 0x302604: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x302604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302608:
    // 0x302608: 0xc0a40ca  jal         func_290328
label_30260c:
    if (ctx->pc == 0x30260Cu) {
        ctx->pc = 0x30260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302608u;
        // 0x30260c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302610u;
        goto label_302610;
    }
    ctx->pc = 0x302608u;
    SET_GPR_U32(ctx, 31, 0x302610u);
    ctx->pc = 0x30260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302608u;
    // 0x30260c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290328u, 0x302608u, 0x302610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302610u;
label_302610:
    // 0x302610: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x302610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_302614:
    // 0x302614: 0xa280028f  sb          $zero, 0x28F($s4)
    ctx->pc = 0x302614u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 655), (uint8_t)GPR_U32(ctx, 0));
label_302618:
    // 0x302618: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x302618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30261c:
    // 0x30261c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30261cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_302620:
    // 0x302620: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x302620u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_302624:
    // 0x302624: 0xc0a34ba  jal         func_28D2E8
label_302628:
    if (ctx->pc == 0x302628u) {
        ctx->pc = 0x302628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302624u;
        // 0x302628: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30262Cu;
        goto label_30262c;
    }
    ctx->pc = 0x302624u;
    SET_GPR_U32(ctx, 31, 0x30262Cu);
    ctx->pc = 0x302628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302624u;
    // 0x302628: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x302624u, 0x30262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30262Cu;
label_30262c:
    // 0x30262c: 0x1000000f  b           . + 4 + (0xF << 2)
label_302630:
    if (ctx->pc == 0x302630u) {
        ctx->pc = 0x302630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30262Cu;
        // 0x302630: 0x8e82020c  lw          $v0, 0x20C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302634u;
        goto label_302634;
    }
    ctx->pc = 0x30262Cu;
    {
        const bool branch_taken_0x30262c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30262Cu;
        // 0x302630: 0x8e82020c  lw          $v0, 0x20C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30262c) {
            ctx->pc = 0x30266Cu;
            goto label_30266c;
        }
    }
    ctx->pc = 0x302634u;
label_302634:
    // 0x302634: 0xc088a92  jal         func_222A48
label_302638:
    if (ctx->pc == 0x302638u) {
        ctx->pc = 0x302638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302634u;
        // 0x302638: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30263Cu;
        goto label_30263c;
    }
    ctx->pc = 0x302634u;
    SET_GPR_U32(ctx, 31, 0x30263Cu);
    ctx->pc = 0x302638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302634u;
    // 0x302638: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x302634u, 0x30263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30263Cu;
label_30263c:
    // 0x30263c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_302640:
    if (ctx->pc == 0x302640u) {
        ctx->pc = 0x302640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30263Cu;
        // 0x302640: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302644u;
        goto label_302644;
    }
    ctx->pc = 0x30263Cu;
    {
        const bool branch_taken_0x30263c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30263Cu;
        // 0x302640: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30263c) {
            ctx->pc = 0x30265Cu;
            goto label_30265c;
        }
    }
    ctx->pc = 0x302644u;
label_302644:
    // 0x302644: 0xc087502  jal         func_21D408
label_302648:
    if (ctx->pc == 0x302648u) {
        ctx->pc = 0x302648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302644u;
        // 0x302648: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30264Cu;
        goto label_30264c;
    }
    ctx->pc = 0x302644u;
    SET_GPR_U32(ctx, 31, 0x30264Cu);
    ctx->pc = 0x302648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302644u;
    // 0x302648: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x302644u, 0x30264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30264Cu;
label_30264c:
    // 0x30264c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30264cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302650:
    // 0x302650: 0xc0a40ca  jal         func_290328
label_302654:
    if (ctx->pc == 0x302654u) {
        ctx->pc = 0x302654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302650u;
        // 0x302654: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302658u;
        goto label_302658;
    }
    ctx->pc = 0x302650u;
    SET_GPR_U32(ctx, 31, 0x302658u);
    ctx->pc = 0x302654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302650u;
    // 0x302654: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290328u, 0x302650u, 0x302658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302658u;
label_302658:
    // 0x302658: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x302658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30265c:
    // 0x30265c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30265cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_302660:
    // 0x302660: 0xc0a33f8  jal         func_28CFE0
label_302664:
    if (ctx->pc == 0x302664u) {
        ctx->pc = 0x302664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302660u;
        // 0x302664: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302668u;
        goto label_302668;
    }
    ctx->pc = 0x302660u;
    SET_GPR_U32(ctx, 31, 0x302668u);
    ctx->pc = 0x302664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302660u;
    // 0x302664: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x302660u, 0x302668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302668u;
label_302668:
    // 0x302668: 0x8e82020c  lw          $v0, 0x20C($s4)
    ctx->pc = 0x302668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
label_30266c:
    // 0x30266c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x30266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_302670:
    // 0x302670: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
label_302674:
    if (ctx->pc == 0x302674u) {
        ctx->pc = 0x302674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302670u;
        // 0x302674: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302678u;
        goto label_302678;
    }
    ctx->pc = 0x302670u;
    {
        const bool branch_taken_0x302670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x302674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302670u;
        // 0x302674: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302670) {
            ctx->pc = 0x302784u;
            goto label_302784;
        }
    }
    ctx->pc = 0x302678u;
label_302678:
    // 0x302678: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_30267c:
    if (ctx->pc == 0x30267Cu) {
        ctx->pc = 0x30267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302678u;
        // 0x30267c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302680u;
        goto label_302680;
    }
    ctx->pc = 0x302678u;
    {
        const bool branch_taken_0x302678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x302678) {
            ctx->pc = 0x30267Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302678u;
            // 0x30267c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30269Cu;
            goto label_30269c;
        }
    }
    ctx->pc = 0x302680u;
label_302680:
    // 0x302680: 0xc087502  jal         func_21D408
label_302684:
    if (ctx->pc == 0x302684u) {
        ctx->pc = 0x302684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302680u;
        // 0x302684: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302688u;
        goto label_302688;
    }
    ctx->pc = 0x302680u;
    SET_GPR_U32(ctx, 31, 0x302688u);
    ctx->pc = 0x302684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302680u;
    // 0x302684: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x302680u, 0x302688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302688u;
label_302688:
    // 0x302688: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x302688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_30268c:
    // 0x30268c: 0x8c6205e8  lw          $v0, 0x5E8($v1)
    ctx->pc = 0x30268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1512)));
label_302690:
    // 0x302690: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_302694:
    if (ctx->pc == 0x302694u) {
        ctx->pc = 0x302694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302690u;
        // 0x302694: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302698u;
        goto label_302698;
    }
    ctx->pc = 0x302690u;
    {
        const bool branch_taken_0x302690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302690u;
        // 0x302694: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302690) {
            ctx->pc = 0x302784u;
            goto label_302784;
        }
    }
    ctx->pc = 0x302698u;
label_302698:
    // 0x302698: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x302698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_30269c:
    // 0x30269c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x30269cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3026a0:
    // 0x3026a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3026a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3026a4:
    // 0x3026a4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3026a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3026a8:
    // 0x3026a8: 0xc0c0846  jal         func_302118
label_3026ac:
    if (ctx->pc == 0x3026ACu) {
        ctx->pc = 0x3026ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026A8u;
        // 0x3026ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3026B0u;
        goto label_3026b0;
    }
    ctx->pc = 0x3026A8u;
    SET_GPR_U32(ctx, 31, 0x3026B0u);
    ctx->pc = 0x3026ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3026A8u;
    // 0x3026ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302118u, 0x3026A8u, 0x3026B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3026B0u;
label_3026b0:
    // 0x3026b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3026b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3026b4:
    // 0x3026b4: 0x1a200013  blez        $s1, . + 4 + (0x13 << 2)
label_3026b8:
    if (ctx->pc == 0x3026B8u) {
        ctx->pc = 0x3026B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026B4u;
        // 0x3026b8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3026BCu;
        goto label_3026bc;
    }
    ctx->pc = 0x3026B4u;
    {
        const bool branch_taken_0x3026b4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3026B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026B4u;
        // 0x3026b8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3026b4) {
            ctx->pc = 0x302704u;
            goto label_302704;
        }
    }
    ctx->pc = 0x3026BCu;
label_3026bc:
    // 0x3026bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3026bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3026c0:
    // 0x3026c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3026c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3026c4:
    // 0x3026c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3026c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3026c8:
    // 0x3026c8: 0x40f809  jalr        $v0
label_3026cc:
    if (ctx->pc == 0x3026CCu) {
        ctx->pc = 0x3026CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026C8u;
        // 0x3026cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3026D0u;
        goto label_3026d0;
    }
    ctx->pc = 0x3026C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3026D0u);
        ctx->pc = 0x3026CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026C8u;
        // 0x3026cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3026C8u, 0x3026D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3026D0u;
label_3026d0:
    // 0x3026d0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3026d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3026d4:
    // 0x3026d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3026d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3026d8:
    // 0x3026d8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3026d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3026dc:
    // 0x3026dc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3026dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3026e0:
    // 0x3026e0: 0x40f809  jalr        $v0
label_3026e4:
    if (ctx->pc == 0x3026E4u) {
        ctx->pc = 0x3026E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026E0u;
        // 0x3026e4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3026E8u;
        goto label_3026e8;
    }
    ctx->pc = 0x3026E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3026E8u);
        ctx->pc = 0x3026E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026E0u;
        // 0x3026e4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3026E0u, 0x3026E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3026E8u;
label_3026e8:
    // 0x3026e8: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x3026e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3026ec:
    // 0x3026ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3026ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3026f0:
    // 0x3026f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3026f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3026f4:
    // 0x3026f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3026f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3026f8:
    // 0x3026f8: 0xc0b11c4  jal         func_2C4710
label_3026fc:
    if (ctx->pc == 0x3026FCu) {
        ctx->pc = 0x3026FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026F8u;
        // 0x3026fc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302700u;
        goto label_302700;
    }
    ctx->pc = 0x3026F8u;
    SET_GPR_U32(ctx, 31, 0x302700u);
    ctx->pc = 0x3026FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3026F8u;
    // 0x3026fc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4710u, 0x3026F8u, 0x302700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302700u;
label_302700:
    // 0x302700: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x302700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_302704:
    // 0x302704: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x302704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_302708:
    // 0x302708: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x302708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30270c:
    // 0x30270c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_302710:
    // 0x302710: 0x40f809  jalr        $v0
label_302714:
    if (ctx->pc == 0x302714u) {
        ctx->pc = 0x302714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302710u;
        // 0x302714: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302718u;
        goto label_302718;
    }
    ctx->pc = 0x302710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302718u);
        ctx->pc = 0x302714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302710u;
        // 0x302714: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302710u, 0x302718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302718u;
label_302718:
    // 0x302718: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x302718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_30271c:
    // 0x30271c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30271cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302720:
    // 0x302720: 0x86b00092  lh          $s0, 0x92($s5)
    ctx->pc = 0x302720u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_302724:
    // 0x302724: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x302724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_302728:
    // 0x302728: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x302728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_30272c:
    // 0x30272c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x30272cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_302730:
    // 0x302730: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x302730u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_302734:
    // 0x302734: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x302734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_302738:
    // 0x302738: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x302738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_30273c:
    // 0x30273c: 0x40f809  jalr        $v0
label_302740:
    if (ctx->pc == 0x302740u) {
        ctx->pc = 0x302740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30273Cu;
        // 0x302740: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302744u;
        goto label_302744;
    }
    ctx->pc = 0x30273Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302744u);
        ctx->pc = 0x302740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30273Cu;
        // 0x302740: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30273Cu, 0x302744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302744u;
label_302744:
    // 0x302744: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x302744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_302748:
    // 0x302748: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x302748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30274c:
    // 0x30274c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x30274cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_302750:
    // 0x302750: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x302750u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_302754:
    // 0x302754: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x302754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_302758:
    // 0x302758: 0x8c72bd30  lw          $s2, -0x42D0($v1)
    ctx->pc = 0x302758u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_30275c:
    // 0x30275c: 0x40f809  jalr        $v0
label_302760:
    if (ctx->pc == 0x302760u) {
        ctx->pc = 0x302760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30275Cu;
        // 0x302760: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302764u;
        goto label_302764;
    }
    ctx->pc = 0x30275Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302764u);
        ctx->pc = 0x302760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30275Cu;
        // 0x302760: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30275Cu, 0x302764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302764u;
label_302764:
    // 0x302764: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x302764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_302768:
    // 0x302768: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x302768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30276c:
    // 0x30276c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30276cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302770:
    // 0x302770: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x302770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302774:
    // 0x302774: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x302774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_302778:
    // 0x302778: 0xc0b1018  jal         func_2C4060
label_30277c:
    if (ctx->pc == 0x30277Cu) {
        ctx->pc = 0x30277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302778u;
        // 0x30277c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302780u;
        goto label_302780;
    }
    ctx->pc = 0x302778u;
    SET_GPR_U32(ctx, 31, 0x302780u);
    ctx->pc = 0x30277Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302778u;
    // 0x30277c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4060u, 0x302778u, 0x302780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302780u;
label_302780:
    // 0x302780: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x302780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_302784:
    // 0x302784: 0xc0a3658  jal         func_28D960
label_302788:
    if (ctx->pc == 0x302788u) {
        ctx->pc = 0x302788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302784u;
        // 0x302788: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30278Cu;
        goto label_30278c;
    }
    ctx->pc = 0x302784u;
    SET_GPR_U32(ctx, 31, 0x30278Cu);
    ctx->pc = 0x302788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302784u;
    // 0x302788: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x302784u, 0x30278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30278Cu;
label_30278c:
    // 0x30278c: 0x8283002d  lb          $v1, 0x2D($s4)
    ctx->pc = 0x30278cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 45)));
label_302790:
    // 0x302790: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x302790u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_302794:
    // 0x302794: 0x14600143  bnez        $v1, . + 4 + (0x143 << 2)
label_302798:
    if (ctx->pc == 0x302798u) {
        ctx->pc = 0x302798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302794u;
        // 0x302798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30279Cu;
        goto label_30279c;
    }
    ctx->pc = 0x302794u;
    {
        const bool branch_taken_0x302794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x302798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302794u;
        // 0x302798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302794) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x30279Cu;
label_30279c:
    // 0x30279c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x30279cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3027a0:
    // 0x3027a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3027a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3027a4:
    // 0x3027a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3027a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3027a8:
    // 0x3027a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3027a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3027ac:
    // 0x3027ac: 0x40f809  jalr        $v0
label_3027b0:
    if (ctx->pc == 0x3027B0u) {
        ctx->pc = 0x3027B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027ACu;
        // 0x3027b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3027B4u;
        goto label_3027b4;
    }
    ctx->pc = 0x3027ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3027B4u);
        ctx->pc = 0x3027B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027ACu;
        // 0x3027b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3027ACu, 0x3027B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3027B4u;
label_3027b4:
    // 0x3027b4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3027b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3027b8:
    // 0x3027b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3027b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3027bc:
    // 0x3027bc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3027bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3027c0:
    // 0x3027c0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3027c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3027c4:
    // 0x3027c4: 0x40f809  jalr        $v0
label_3027c8:
    if (ctx->pc == 0x3027C8u) {
        ctx->pc = 0x3027C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027C4u;
        // 0x3027c8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3027CCu;
        goto label_3027cc;
    }
    ctx->pc = 0x3027C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3027CCu);
        ctx->pc = 0x3027C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027C4u;
        // 0x3027c8: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3027C4u, 0x3027CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3027CCu;
label_3027cc:
    // 0x3027cc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x3027ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_3027d0:
    // 0x3027d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3027d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3027d4:
    // 0x3027d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3027d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3027d8:
    // 0x3027d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3027d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3027dc:
    // 0x3027dc: 0xc0add6e  jal         func_2B75B8
label_3027e0:
    if (ctx->pc == 0x3027E0u) {
        ctx->pc = 0x3027E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027DCu;
        // 0x3027e0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3027E4u;
        goto label_3027e4;
    }
    ctx->pc = 0x3027DCu;
    SET_GPR_U32(ctx, 31, 0x3027E4u);
    ctx->pc = 0x3027E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3027DCu;
    // 0x3027e0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B75B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B75B8u, 0x3027DCu, 0x3027E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3027E4u;
label_3027e4:
    // 0x3027e4: 0x1000012f  b           . + 4 + (0x12F << 2)
label_3027e8:
    if (ctx->pc == 0x3027E8u) {
        ctx->pc = 0x3027E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027E4u;
        // 0x3027e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3027ECu;
        goto label_3027ec;
    }
    ctx->pc = 0x3027E4u;
    {
        const bool branch_taken_0x3027e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3027E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027E4u;
        // 0x3027e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3027e4) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x3027ECu;
label_3027ec:
    // 0x3027ec: 0xc08a08a  jal         func_228228
label_3027f0:
    if (ctx->pc == 0x3027F0u) {
        ctx->pc = 0x3027F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027ECu;
        // 0x3027f0: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3027F4u;
        goto label_3027f4;
    }
    ctx->pc = 0x3027ECu;
    SET_GPR_U32(ctx, 31, 0x3027F4u);
    ctx->pc = 0x3027F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3027ECu;
    // 0x3027f0: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x3027ECu, 0x3027F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3027F4u;
label_3027f4:
    // 0x3027f4: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
label_3027f8:
    if (ctx->pc == 0x3027F8u) {
        ctx->pc = 0x3027F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027F4u;
        // 0x3027f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3027FCu;
        goto label_3027fc;
    }
    ctx->pc = 0x3027F4u;
    {
        const bool branch_taken_0x3027f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3027F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027F4u;
        // 0x3027f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3027f4) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x3027FCu;
label_3027fc:
    // 0x3027fc: 0x8e82020c  lw          $v0, 0x20C($s4)
    ctx->pc = 0x3027fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
label_302800:
    // 0x302800: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x302800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_302804:
    // 0x302804: 0x14600127  bnez        $v1, . + 4 + (0x127 << 2)
label_302808:
    if (ctx->pc == 0x302808u) {
        ctx->pc = 0x302808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302804u;
        // 0x302808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30280Cu;
        goto label_30280c;
    }
    ctx->pc = 0x302804u;
    {
        const bool branch_taken_0x302804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x302808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302804u;
        // 0x302808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302804) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x30280Cu;
label_30280c:
    // 0x30280c: 0xc0c080e  jal         func_302038
label_302810:
    if (ctx->pc == 0x302810u) {
        ctx->pc = 0x302810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30280Cu;
        // 0x302810: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302814u;
        goto label_302814;
    }
    ctx->pc = 0x30280Cu;
    SET_GPR_U32(ctx, 31, 0x302814u);
    ctx->pc = 0x302810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30280Cu;
    // 0x302810: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302038u, 0x30280Cu, 0x302814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302814u;
label_302814:
    // 0x302814: 0x14520123  bne         $v0, $s2, . + 4 + (0x123 << 2)
label_302818:
    if (ctx->pc == 0x302818u) {
        ctx->pc = 0x302818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302814u;
        // 0x302818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30281Cu;
        goto label_30281c;
    }
    ctx->pc = 0x302814u;
    {
        const bool branch_taken_0x302814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x302818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302814u;
        // 0x302818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302814) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x30281Cu;
label_30281c:
    // 0x30281c: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x30281cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_302820:
    // 0x302820: 0x12600121  beqz        $s3, . + 4 + (0x121 << 2)
label_302824:
    if (ctx->pc == 0x302824u) {
        ctx->pc = 0x302824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302820u;
        // 0x302824: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302828u;
        goto label_302828;
    }
    ctx->pc = 0x302820u;
    {
        const bool branch_taken_0x302820 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x302824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302820u;
        // 0x302824: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302820) {
            ctx->pc = 0x302CA8u;
            goto label_302ca8;
        }
    }
    ctx->pc = 0x302828u;
label_302828:
    // 0x302828: 0xc087502  jal         func_21D408
label_30282c:
    if (ctx->pc == 0x30282Cu) {
        ctx->pc = 0x30282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302828u;
        // 0x30282c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302830u;
        goto label_302830;
    }
    ctx->pc = 0x302828u;
    SET_GPR_U32(ctx, 31, 0x302830u);
    ctx->pc = 0x30282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302828u;
    // 0x30282c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x302828u, 0x302830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302830u;
label_302830:
    // 0x302830: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x302830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302834:
    // 0x302834: 0xc0a408c  jal         func_290230
label_302838:
    if (ctx->pc == 0x302838u) {
        ctx->pc = 0x302838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302834u;
        // 0x302838: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30283Cu;
        goto label_30283c;
    }
    ctx->pc = 0x302834u;
    SET_GPR_U32(ctx, 31, 0x30283Cu);
    ctx->pc = 0x302838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302834u;
    // 0x302838: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x302834u, 0x30283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30283Cu;
label_30283c:
    // 0x30283c: 0x14400119  bnez        $v0, . + 4 + (0x119 << 2)
label_302840:
    if (ctx->pc == 0x302840u) {
        ctx->pc = 0x302840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30283Cu;
        // 0x302840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302844u;
        goto label_302844;
    }
    ctx->pc = 0x30283Cu;
    {
        const bool branch_taken_0x30283c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30283Cu;
        // 0x302840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30283c) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x302844u;
label_302844:
    // 0x302844: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x302844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_302848:
    // 0x302848: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x302848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30284c:
    // 0x30284c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x30284cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_302850:
    // 0x302850: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x302850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_302854:
    // 0x302854: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x302854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_302858:
    // 0x302858: 0xc0c0846  jal         func_302118
label_30285c:
    if (ctx->pc == 0x30285Cu) {
        ctx->pc = 0x30285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302858u;
        // 0x30285c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302860u;
        goto label_302860;
    }
    ctx->pc = 0x302858u;
    SET_GPR_U32(ctx, 31, 0x302860u);
    ctx->pc = 0x30285Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302858u;
    // 0x30285c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302118u, 0x302858u, 0x302860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302860u;
label_302860:
    // 0x302860: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x302860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302864:
    // 0x302864: 0x1a20004c  blez        $s1, . + 4 + (0x4C << 2)
label_302868:
    if (ctx->pc == 0x302868u) {
        ctx->pc = 0x302868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302864u;
        // 0x302868: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30286Cu;
        goto label_30286c;
    }
    ctx->pc = 0x302864u;
    {
        const bool branch_taken_0x302864 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x302868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302864u;
        // 0x302868: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302864) {
            ctx->pc = 0x302998u;
            goto label_302998;
        }
    }
    ctx->pc = 0x30286Cu;
label_30286c:
    // 0x30286c: 0x8282002c  lb          $v0, 0x2C($s4)
    ctx->pc = 0x30286cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
label_302870:
    // 0x302870: 0x4420012  bltzl       $v0, . + 4 + (0x12 << 2)
label_302874:
    if (ctx->pc == 0x302874u) {
        ctx->pc = 0x302874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302870u;
        // 0x302874: 0xa280028f  sb          $zero, 0x28F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 655), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302878u;
        goto label_302878;
    }
    ctx->pc = 0x302870u;
    {
        const bool branch_taken_0x302870 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x302870) {
            ctx->pc = 0x302874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302870u;
            // 0x302874: 0xa280028f  sb          $zero, 0x28F($s4) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 20), 655), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3028BCu;
            goto label_3028bc;
        }
    }
    ctx->pc = 0x302878u;
label_302878:
    // 0x302878: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30287c:
    if (ctx->pc == 0x30287Cu) {
        ctx->pc = 0x30287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302878u;
        // 0x30287c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302880u;
        goto label_302880;
    }
    ctx->pc = 0x302878u;
    {
        const bool branch_taken_0x302878 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302878u;
        // 0x30287c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302878) {
            ctx->pc = 0x30288Cu;
            goto label_30288c;
        }
    }
    ctx->pc = 0x302880u;
label_302880:
    // 0x302880: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x302880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_302884:
    // 0x302884: 0x10000002  b           . + 4 + (0x2 << 2)
label_302888:
    if (ctx->pc == 0x302888u) {
        ctx->pc = 0x302888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302884u;
        // 0x302888: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30288Cu;
        goto label_30288c;
    }
    ctx->pc = 0x302884u;
    {
        const bool branch_taken_0x302884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302884u;
        // 0x302888: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302884) {
            ctx->pc = 0x302890u;
            goto label_302890;
        }
    }
    ctx->pc = 0x30288Cu;
label_30288c:
    // 0x30288c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30288cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302890:
    // 0x302890: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x302890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_302894:
    // 0x302894: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x302894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_302898:
    // 0x302898: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x302898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30289c:
    // 0x30289c: 0x40f809  jalr        $v0
label_3028a0:
    if (ctx->pc == 0x3028A0u) {
        ctx->pc = 0x3028A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30289Cu;
        // 0x3028a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3028A4u;
        goto label_3028a4;
    }
    ctx->pc = 0x30289Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3028A4u);
        ctx->pc = 0x3028A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30289Cu;
        // 0x3028a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30289Cu, 0x3028A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3028A4u;
label_3028a4:
    // 0x3028a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3028a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3028a8:
    // 0x3028a8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_3028ac:
    if (ctx->pc == 0x3028ACu) {
        ctx->pc = 0x3028ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028A8u;
        // 0x3028ac: 0xa280028f  sb          $zero, 0x28F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 655), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3028B0u;
        goto label_3028b0;
    }
    ctx->pc = 0x3028A8u;
    {
        const bool branch_taken_0x3028a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3028a8) {
            ctx->pc = 0x3028ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3028A8u;
            // 0x3028ac: 0xa280028f  sb          $zero, 0x28F($s4) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 20), 655), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3028BCu;
            goto label_3028bc;
        }
    }
    ctx->pc = 0x3028B0u;
label_3028b0:
    // 0x3028b0: 0xc0a35f6  jal         func_28D7D8
label_3028b4:
    if (ctx->pc == 0x3028B4u) {
        ctx->pc = 0x3028B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028B0u;
        // 0x3028b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3028B8u;
        goto label_3028b8;
    }
    ctx->pc = 0x3028B0u;
    SET_GPR_U32(ctx, 31, 0x3028B8u);
    ctx->pc = 0x3028B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3028B0u;
    // 0x3028b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x3028B0u, 0x3028B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3028B8u;
label_3028b8:
    // 0x3028b8: 0xa280028f  sb          $zero, 0x28F($s4)
    ctx->pc = 0x3028b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 655), (uint8_t)GPR_U32(ctx, 0));
label_3028bc:
    // 0x3028bc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3028bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_3028c0:
    // 0x3028c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3028c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_3028c4:
    // 0x3028c4: 0xc0a3464  jal         func_28D190
label_3028c8:
    if (ctx->pc == 0x3028C8u) {
        ctx->pc = 0x3028C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028C4u;
        // 0x3028c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3028CCu;
        goto label_3028cc;
    }
    ctx->pc = 0x3028C4u;
    SET_GPR_U32(ctx, 31, 0x3028CCu);
    ctx->pc = 0x3028C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3028C4u;
    // 0x3028c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x3028C4u, 0x3028CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3028CCu;
label_3028cc:
    // 0x3028cc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3028ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3028d0:
    // 0x3028d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3028d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3028d4:
    // 0x3028d4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3028d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3028d8:
    // 0x3028d8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3028d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3028dc:
    // 0x3028dc: 0x40f809  jalr        $v0
label_3028e0:
    if (ctx->pc == 0x3028E0u) {
        ctx->pc = 0x3028E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028DCu;
        // 0x3028e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3028E4u;
        goto label_3028e4;
    }
    ctx->pc = 0x3028DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3028E4u);
        ctx->pc = 0x3028E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028DCu;
        // 0x3028e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3028DCu, 0x3028E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3028E4u;
label_3028e4:
    // 0x3028e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3028e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3028e8:
    // 0x3028e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3028e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3028ec:
    // 0x3028ec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3028ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3028f0:
    // 0x3028f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3028f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3028f4:
    // 0x3028f4: 0x40f809  jalr        $v0
label_3028f8:
    if (ctx->pc == 0x3028F8u) {
        ctx->pc = 0x3028F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028F4u;
        // 0x3028f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3028FCu;
        goto label_3028fc;
    }
    ctx->pc = 0x3028F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3028FCu);
        ctx->pc = 0x3028F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028F4u;
        // 0x3028f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3028F4u, 0x3028FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3028FCu;
label_3028fc:
    // 0x3028fc: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x3028fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_302900:
    // 0x302900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x302900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302904:
    // 0x302904: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x302904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302908:
    // 0x302908: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x302908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_30290c:
    // 0x30290c: 0xc0b11c4  jal         func_2C4710
label_302910:
    if (ctx->pc == 0x302910u) {
        ctx->pc = 0x302910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30290Cu;
        // 0x302910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302914u;
        goto label_302914;
    }
    ctx->pc = 0x30290Cu;
    SET_GPR_U32(ctx, 31, 0x302914u);
    ctx->pc = 0x302910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30290Cu;
    // 0x302910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4710u, 0x30290Cu, 0x302914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302914u;
label_302914:
    // 0x302914: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x302914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_302918:
    // 0x302918: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x302918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30291c:
    // 0x30291c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30291cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_302920:
    // 0x302920: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x302920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_302924:
    // 0x302924: 0x40f809  jalr        $v0
label_302928:
    if (ctx->pc == 0x302928u) {
        ctx->pc = 0x302928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302924u;
        // 0x302928: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30292Cu;
        goto label_30292c;
    }
    ctx->pc = 0x302924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30292Cu);
        ctx->pc = 0x302928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302924u;
        // 0x302928: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302924u, 0x30292Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30292Cu;
label_30292c:
    // 0x30292c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x30292cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_302930:
    // 0x302930: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x302930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302934:
    // 0x302934: 0x86700092  lh          $s0, 0x92($s3)
    ctx->pc = 0x302934u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_302938:
    // 0x302938: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x302938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_30293c:
    // 0x30293c: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x30293cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_302940:
    // 0x302940: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x302940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_302944:
    // 0x302944: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x302944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_302948:
    // 0x302948: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x302948u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_30294c:
    // 0x30294c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x30294cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_302950:
    // 0x302950: 0x40f809  jalr        $v0
label_302954:
    if (ctx->pc == 0x302954u) {
        ctx->pc = 0x302954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302950u;
        // 0x302954: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302958u;
        goto label_302958;
    }
    ctx->pc = 0x302950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302958u);
        ctx->pc = 0x302954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302950u;
        // 0x302954: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302950u, 0x302958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302958u;
label_302958:
    // 0x302958: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x302958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_30295c:
    // 0x30295c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30295cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302960:
    // 0x302960: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x302960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_302964:
    // 0x302964: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x302964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_302968:
    // 0x302968: 0x40f809  jalr        $v0
label_30296c:
    if (ctx->pc == 0x30296Cu) {
        ctx->pc = 0x30296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302968u;
        // 0x30296c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302970u;
        goto label_302970;
    }
    ctx->pc = 0x302968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302970u);
        ctx->pc = 0x30296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302968u;
        // 0x30296c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302968u, 0x302970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302970u;
label_302970:
    // 0x302970: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x302970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_302974:
    // 0x302974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x302974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_302978:
    // 0x302978: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x302978u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_30297c:
    // 0x30297c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30297cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302980:
    // 0x302980: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x302980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302984:
    // 0x302984: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x302984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302988:
    // 0x302988: 0xc0b1018  jal         func_2C4060
label_30298c:
    if (ctx->pc == 0x30298Cu) {
        ctx->pc = 0x30298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302988u;
        // 0x30298c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302990u;
        goto label_302990;
    }
    ctx->pc = 0x302988u;
    SET_GPR_U32(ctx, 31, 0x302990u);
    ctx->pc = 0x30298Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302988u;
    // 0x30298c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4060u, 0x302988u, 0x302990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302990u;
label_302990:
    // 0x302990: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_302994:
    if (ctx->pc == 0x302994u) {
        ctx->pc = 0x302994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302990u;
        // 0x302994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302998u;
        goto label_302998;
    }
    ctx->pc = 0x302990u;
    {
        const bool branch_taken_0x302990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302990u;
        // 0x302994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302990) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x302998u;
label_302998:
    // 0x302998: 0xc087502  jal         func_21D408
label_30299c:
    if (ctx->pc == 0x30299Cu) {
        ctx->pc = 0x30299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302998u;
        // 0x30299c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3029A0u;
        goto label_3029a0;
    }
    ctx->pc = 0x302998u;
    SET_GPR_U32(ctx, 31, 0x3029A0u);
    ctx->pc = 0x30299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302998u;
    // 0x30299c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x302998u, 0x3029A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3029A0u;
label_3029a0:
    // 0x3029a0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x3029a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_3029a4:
    // 0x3029a4: 0x8c6505f4  lw          $a1, 0x5F4($v1)
    ctx->pc = 0x3029a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
label_3029a8:
    // 0x3029a8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_3029ac:
    if (ctx->pc == 0x3029ACu) {
        ctx->pc = 0x3029ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029A8u;
        // 0x3029ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3029B0u;
        goto label_3029b0;
    }
    ctx->pc = 0x3029A8u;
    {
        const bool branch_taken_0x3029a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3029ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029A8u;
        // 0x3029ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3029a8) {
            ctx->pc = 0x3029CCu;
            goto label_3029cc;
        }
    }
    ctx->pc = 0x3029B0u;
label_3029b0:
    // 0x3029b0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x3029b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_3029b4:
    // 0x3029b4: 0x24027530  addiu       $v0, $zero, 0x7530
    ctx->pc = 0x3029b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
label_3029b8:
    // 0x3029b8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x3029b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3029bc:
    // 0x3029bc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3029bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3029c0:
    // 0x3029c0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3029c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3029c4:
    // 0x3029c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3029c8:
    if (ctx->pc == 0x3029C8u) {
        ctx->pc = 0x3029C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029C4u;
        // 0x3029c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3029CCu;
        goto label_3029cc;
    }
    ctx->pc = 0x3029C4u;
    {
        const bool branch_taken_0x3029c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3029C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029C4u;
        // 0x3029c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3029c4) {
            ctx->pc = 0x3029D4u;
            goto label_3029d4;
        }
    }
    ctx->pc = 0x3029CCu;
label_3029cc:
    // 0x3029cc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3029ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3029d0:
    // 0x3029d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3029d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3029d4:
    // 0x3029d4: 0x160200b3  bne         $s0, $v0, . + 4 + (0xB3 << 2)
label_3029d8:
    if (ctx->pc == 0x3029D8u) {
        ctx->pc = 0x3029D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029D4u;
        // 0x3029d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3029DCu;
        goto label_3029dc;
    }
    ctx->pc = 0x3029D4u;
    {
        const bool branch_taken_0x3029d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3029D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029D4u;
        // 0x3029d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3029d4) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x3029DCu;
label_3029dc:
    // 0x3029dc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3029dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3029e0:
    // 0x3029e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3029e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3029e4:
    // 0x3029e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3029e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3029e8:
    // 0x3029e8: 0xc0888a2  jal         func_222288
label_3029ec:
    if (ctx->pc == 0x3029ECu) {
        ctx->pc = 0x3029ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029E8u;
        // 0x3029ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3029F0u;
        goto label_3029f0;
    }
    ctx->pc = 0x3029E8u;
    SET_GPR_U32(ctx, 31, 0x3029F0u);
    ctx->pc = 0x3029ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3029E8u;
    // 0x3029ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x3029E8u, 0x3029F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3029F0u;
label_3029f0:
    // 0x3029f0: 0x145000ac  bne         $v0, $s0, . + 4 + (0xAC << 2)
label_3029f4:
    if (ctx->pc == 0x3029F4u) {
        ctx->pc = 0x3029F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029F0u;
        // 0x3029f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3029F8u;
        goto label_3029f8;
    }
    ctx->pc = 0x3029F0u;
    {
        const bool branch_taken_0x3029f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3029F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029F0u;
        // 0x3029f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3029f0) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x3029F8u;
label_3029f8:
    // 0x3029f8: 0x8282002c  lb          $v0, 0x2C($s4)
    ctx->pc = 0x3029f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
label_3029fc:
    // 0x3029fc: 0x4420012  bltzl       $v0, . + 4 + (0x12 << 2)
label_302a00:
    if (ctx->pc == 0x302A00u) {
        ctx->pc = 0x302A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029FCu;
        // 0x302a00: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A04u;
        goto label_302a04;
    }
    ctx->pc = 0x3029FCu;
    {
        const bool branch_taken_0x3029fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3029fc) {
            ctx->pc = 0x302A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3029FCu;
            // 0x302a00: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302A48u;
            goto label_302a48;
        }
    }
    ctx->pc = 0x302A04u;
label_302a04:
    // 0x302a04: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_302a08:
    if (ctx->pc == 0x302A08u) {
        ctx->pc = 0x302A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A04u;
        // 0x302a08: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A0Cu;
        goto label_302a0c;
    }
    ctx->pc = 0x302A04u;
    {
        const bool branch_taken_0x302a04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x302A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A04u;
        // 0x302a08: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302a04) {
            ctx->pc = 0x302A18u;
            goto label_302a18;
        }
    }
    ctx->pc = 0x302A0Cu;
label_302a0c:
    // 0x302a0c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x302a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_302a10:
    // 0x302a10: 0x10000002  b           . + 4 + (0x2 << 2)
label_302a14:
    if (ctx->pc == 0x302A14u) {
        ctx->pc = 0x302A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A10u;
        // 0x302a14: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A18u;
        goto label_302a18;
    }
    ctx->pc = 0x302A10u;
    {
        const bool branch_taken_0x302a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A10u;
        // 0x302a14: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302a10) {
            ctx->pc = 0x302A1Cu;
            goto label_302a1c;
        }
    }
    ctx->pc = 0x302A18u;
label_302a18:
    // 0x302a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x302a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302a1c:
    // 0x302a1c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x302a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_302a20:
    // 0x302a20: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x302a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_302a24:
    // 0x302a24: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x302a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_302a28:
    // 0x302a28: 0x40f809  jalr        $v0
label_302a2c:
    if (ctx->pc == 0x302A2Cu) {
        ctx->pc = 0x302A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A28u;
        // 0x302a2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A30u;
        goto label_302a30;
    }
    ctx->pc = 0x302A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302A30u);
        ctx->pc = 0x302A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A28u;
        // 0x302a2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302A28u, 0x302A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302A30u;
label_302a30:
    // 0x302a30: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x302a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_302a34:
    // 0x302a34: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_302a38:
    if (ctx->pc == 0x302A38u) {
        ctx->pc = 0x302A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A34u;
        // 0x302a38: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A3Cu;
        goto label_302a3c;
    }
    ctx->pc = 0x302A34u;
    {
        const bool branch_taken_0x302a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x302a34) {
            ctx->pc = 0x302A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302A34u;
            // 0x302a38: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302A48u;
            goto label_302a48;
        }
    }
    ctx->pc = 0x302A3Cu;
label_302a3c:
    // 0x302a3c: 0xc0a35f6  jal         func_28D7D8
label_302a40:
    if (ctx->pc == 0x302A40u) {
        ctx->pc = 0x302A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A3Cu;
        // 0x302a40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A44u;
        goto label_302a44;
    }
    ctx->pc = 0x302A3Cu;
    SET_GPR_U32(ctx, 31, 0x302A44u);
    ctx->pc = 0x302A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A3Cu;
    // 0x302a40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x302A3Cu, 0x302A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302A44u;
label_302a44:
    // 0x302a44: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x302a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_302a48:
    // 0x302a48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x302a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_302a4c:
    // 0x302a4c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x302a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_302a50:
    // 0x302a50: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x302a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_302a54:
    // 0x302a54: 0x40f809  jalr        $v0
label_302a58:
    if (ctx->pc == 0x302A58u) {
        ctx->pc = 0x302A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A54u;
        // 0x302a58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A5Cu;
        goto label_302a5c;
    }
    ctx->pc = 0x302A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302A5Cu);
        ctx->pc = 0x302A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A54u;
        // 0x302a58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302A54u, 0x302A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302A5Cu;
label_302a5c:
    // 0x302a5c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x302a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_302a60:
    // 0x302a60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x302a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302a64:
    // 0x302a64: 0x86700092  lh          $s0, 0x92($s3)
    ctx->pc = 0x302a64u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_302a68:
    // 0x302a68: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x302a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_302a6c:
    // 0x302a6c: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x302a6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_302a70:
    // 0x302a70: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x302a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_302a74:
    // 0x302a74: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x302a74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_302a78:
    // 0x302a78: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x302a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_302a7c:
    // 0x302a7c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x302a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_302a80:
    // 0x302a80: 0x40f809  jalr        $v0
label_302a84:
    if (ctx->pc == 0x302A84u) {
        ctx->pc = 0x302A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A80u;
        // 0x302a84: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A88u;
        goto label_302a88;
    }
    ctx->pc = 0x302A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302A88u);
        ctx->pc = 0x302A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A80u;
        // 0x302a84: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302A80u, 0x302A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302A88u;
label_302a88:
    // 0x302a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302a8c:
    // 0x302a8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302a90:
    // 0x302a90: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x302a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302a94:
    // 0x302a94: 0xc0b13b2  jal         func_2C4EC8
label_302a98:
    if (ctx->pc == 0x302A98u) {
        ctx->pc = 0x302A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A94u;
        // 0x302a98: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302A9Cu;
        goto label_302a9c;
    }
    ctx->pc = 0x302A94u;
    SET_GPR_U32(ctx, 31, 0x302A9Cu);
    ctx->pc = 0x302A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A94u;
    // 0x302a98: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4EC8u, 0x302A94u, 0x302A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302A9Cu;
label_302a9c:
    // 0x302a9c: 0x10000081  b           . + 4 + (0x81 << 2)
label_302aa0:
    if (ctx->pc == 0x302AA0u) {
        ctx->pc = 0x302AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A9Cu;
        // 0x302aa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302AA4u;
        goto label_302aa4;
    }
    ctx->pc = 0x302A9Cu;
    {
        const bool branch_taken_0x302a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A9Cu;
        // 0x302aa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302a9c) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x302AA4u;
label_302aa4:
    // 0x302aa4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x302aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_302aa8:
    // 0x302aa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x302aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302aac:
    // 0x302aac: 0xc0a459a  jal         func_291668
label_302ab0:
    if (ctx->pc == 0x302AB0u) {
        ctx->pc = 0x302AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AACu;
        // 0x302ab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302AB4u;
        goto label_302ab4;
    }
    ctx->pc = 0x302AACu;
    SET_GPR_U32(ctx, 31, 0x302AB4u);
    ctx->pc = 0x302AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302AACu;
    // 0x302ab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291668u, 0x302AACu, 0x302AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302AB4u;
label_302ab4:
    // 0x302ab4: 0x1000007b  b           . + 4 + (0x7B << 2)
label_302ab8:
    if (ctx->pc == 0x302AB8u) {
        ctx->pc = 0x302AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AB4u;
        // 0x302ab8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302ABCu;
        goto label_302abc;
    }
    ctx->pc = 0x302AB4u;
    {
        const bool branch_taken_0x302ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AB4u;
        // 0x302ab8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ab4) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x302ABCu;
label_302abc:
    // 0x302abc: 0xc08a08a  jal         func_228228
label_302ac0:
    if (ctx->pc == 0x302AC0u) {
        ctx->pc = 0x302AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302ABCu;
        // 0x302ac0: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302AC4u;
        goto label_302ac4;
    }
    ctx->pc = 0x302ABCu;
    SET_GPR_U32(ctx, 31, 0x302AC4u);
    ctx->pc = 0x302AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302ABCu;
    // 0x302ac0: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x302ABCu, 0x302AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302AC4u;
label_302ac4:
    // 0x302ac4: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
label_302ac8:
    if (ctx->pc == 0x302AC8u) {
        ctx->pc = 0x302AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AC4u;
        // 0x302ac8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302ACCu;
        goto label_302acc;
    }
    ctx->pc = 0x302AC4u;
    {
        const bool branch_taken_0x302ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AC4u;
        // 0x302ac8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ac4) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x302ACCu;
label_302acc:
    // 0x302acc: 0x8e82020c  lw          $v0, 0x20C($s4)
    ctx->pc = 0x302accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 524)));
label_302ad0:
    // 0x302ad0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x302ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_302ad4:
    // 0x302ad4: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
label_302ad8:
    if (ctx->pc == 0x302AD8u) {
        ctx->pc = 0x302AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AD4u;
        // 0x302ad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302ADCu;
        goto label_302adc;
    }
    ctx->pc = 0x302AD4u;
    {
        const bool branch_taken_0x302ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x302AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AD4u;
        // 0x302ad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ad4) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x302ADCu;
label_302adc:
    // 0x302adc: 0xc0c080e  jal         func_302038
label_302ae0:
    if (ctx->pc == 0x302AE0u) {
        ctx->pc = 0x302AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302ADCu;
        // 0x302ae0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302AE4u;
        goto label_302ae4;
    }
    ctx->pc = 0x302ADCu;
    SET_GPR_U32(ctx, 31, 0x302AE4u);
    ctx->pc = 0x302AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302ADCu;
    // 0x302ae0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302038u, 0x302ADCu, 0x302AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302AE4u;
label_302ae4:
    // 0x302ae4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x302ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302ae8:
    // 0x302ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x302ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302aec:
    // 0x302aec: 0x1642006e  bne         $s2, $v0, . + 4 + (0x6E << 2)
label_302af0:
    if (ctx->pc == 0x302AF0u) {
        ctx->pc = 0x302AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AECu;
        // 0x302af0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302AF4u;
        goto label_302af4;
    }
    ctx->pc = 0x302AECu;
    {
        const bool branch_taken_0x302aec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x302AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AECu;
        // 0x302af0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302aec) {
            ctx->pc = 0x302CA8u;
            goto label_302ca8;
        }
    }
    ctx->pc = 0x302AF4u;
label_302af4:
    // 0x302af4: 0xc08a61a  jal         func_229868
label_302af8:
    if (ctx->pc == 0x302AF8u) {
        ctx->pc = 0x302AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AF4u;
        // 0x302af8: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302AFCu;
        goto label_302afc;
    }
    ctx->pc = 0x302AF4u;
    SET_GPR_U32(ctx, 31, 0x302AFCu);
    ctx->pc = 0x302AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302AF4u;
    // 0x302af8: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x302AF4u, 0x302AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302AFCu;
label_302afc:
    // 0x302afc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x302afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302b00:
    // 0x302b00: 0x12200068  beqz        $s1, . + 4 + (0x68 << 2)
label_302b04:
    if (ctx->pc == 0x302B04u) {
        ctx->pc = 0x302B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B00u;
        // 0x302b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B08u;
        goto label_302b08;
    }
    ctx->pc = 0x302B00u;
    {
        const bool branch_taken_0x302b00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x302B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B00u;
        // 0x302b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b00) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x302B08u;
label_302b08:
    // 0x302b08: 0xc087502  jal         func_21D408
label_302b0c:
    if (ctx->pc == 0x302B0Cu) {
        ctx->pc = 0x302B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B08u;
        // 0x302b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B10u;
        goto label_302b10;
    }
    ctx->pc = 0x302B08u;
    SET_GPR_U32(ctx, 31, 0x302B10u);
    ctx->pc = 0x302B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B08u;
    // 0x302b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x302B08u, 0x302B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B10u;
label_302b10:
    // 0x302b10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x302b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302b14:
    // 0x302b14: 0xc0a408c  jal         func_290230
label_302b18:
    if (ctx->pc == 0x302B18u) {
        ctx->pc = 0x302B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B14u;
        // 0x302b18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B1Cu;
        goto label_302b1c;
    }
    ctx->pc = 0x302B14u;
    SET_GPR_U32(ctx, 31, 0x302B1Cu);
    ctx->pc = 0x302B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B14u;
    // 0x302b18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x302B14u, 0x302B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B1Cu;
label_302b1c:
    // 0x302b1c: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_302b20:
    if (ctx->pc == 0x302B20u) {
        ctx->pc = 0x302B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B1Cu;
        // 0x302b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B24u;
        goto label_302b24;
    }
    ctx->pc = 0x302B1Cu;
    {
        const bool branch_taken_0x302b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B1Cu;
        // 0x302b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b1c) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x302B24u;
label_302b24:
    // 0x302b24: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x302b24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_302b28:
    // 0x302b28: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x302b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_302b2c:
    // 0x302b2c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x302b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_302b30:
    // 0x302b30: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x302b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_302b34:
    // 0x302b34: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x302b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_302b38:
    // 0x302b38: 0xc68c012c  lwc1        $f12, 0x12C($s4)
    ctx->pc = 0x302b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_302b3c:
    // 0x302b3c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x302b3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_302b40:
    // 0x302b40: 0xc0889c4  jal         func_222710
label_302b44:
    if (ctx->pc == 0x302B44u) {
        ctx->pc = 0x302B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B40u;
        // 0x302b44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B48u;
        goto label_302b48;
    }
    ctx->pc = 0x302B40u;
    SET_GPR_U32(ctx, 31, 0x302B48u);
    ctx->pc = 0x302B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B40u;
    // 0x302b44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222710u, 0x302B40u, 0x302B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B48u;
label_302b48:
    // 0x302b48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x302b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302b4c:
    // 0x302b4c: 0x16120055  bne         $s0, $s2, . + 4 + (0x55 << 2)
label_302b50:
    if (ctx->pc == 0x302B50u) {
        ctx->pc = 0x302B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B4Cu;
        // 0x302b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B54u;
        goto label_302b54;
    }
    ctx->pc = 0x302B4Cu;
    {
        const bool branch_taken_0x302b4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x302B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B4Cu;
        // 0x302b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b4c) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x302B54u;
label_302b54:
    // 0x302b54: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x302b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_302b58:
    // 0x302b58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x302b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_302b5c:
    // 0x302b5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x302b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302b60:
    // 0x302b60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x302b60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302b64:
    // 0x302b64: 0xc0888dc  jal         func_222370
label_302b68:
    if (ctx->pc == 0x302B68u) {
        ctx->pc = 0x302B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B64u;
        // 0x302b68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B6Cu;
        goto label_302b6c;
    }
    ctx->pc = 0x302B64u;
    SET_GPR_U32(ctx, 31, 0x302B6Cu);
    ctx->pc = 0x302B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B64u;
    // 0x302b68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222370u, 0x302B64u, 0x302B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B6Cu;
label_302b6c:
    // 0x302b6c: 0x1450004d  bne         $v0, $s0, . + 4 + (0x4D << 2)
label_302b70:
    if (ctx->pc == 0x302B70u) {
        ctx->pc = 0x302B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B6Cu;
        // 0x302b70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B74u;
        goto label_302b74;
    }
    ctx->pc = 0x302B6Cu;
    {
        const bool branch_taken_0x302b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x302B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B6Cu;
        // 0x302b70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b6c) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x302B74u;
label_302b74:
    // 0x302b74: 0x8282002c  lb          $v0, 0x2C($s4)
    ctx->pc = 0x302b74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
label_302b78:
    // 0x302b78: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
label_302b7c:
    if (ctx->pc == 0x302B7Cu) {
        ctx->pc = 0x302B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B78u;
        // 0x302b7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B80u;
        goto label_302b80;
    }
    ctx->pc = 0x302B78u;
    {
        const bool branch_taken_0x302b78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x302B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B78u;
        // 0x302b7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b78) {
            ctx->pc = 0x302BC4u;
            goto label_302bc4;
        }
    }
    ctx->pc = 0x302B80u;
label_302b80:
    // 0x302b80: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_302b84:
    if (ctx->pc == 0x302B84u) {
        ctx->pc = 0x302B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B80u;
        // 0x302b84: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B88u;
        goto label_302b88;
    }
    ctx->pc = 0x302B80u;
    {
        const bool branch_taken_0x302b80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x302B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B80u;
        // 0x302b84: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b80) {
            ctx->pc = 0x302B94u;
            goto label_302b94;
        }
    }
    ctx->pc = 0x302B88u;
label_302b88:
    // 0x302b88: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x302b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_302b8c:
    // 0x302b8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_302b90:
    if (ctx->pc == 0x302B90u) {
        ctx->pc = 0x302B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B8Cu;
        // 0x302b90: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302B94u;
        goto label_302b94;
    }
    ctx->pc = 0x302B8Cu;
    {
        const bool branch_taken_0x302b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B8Cu;
        // 0x302b90: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302b8c) {
            ctx->pc = 0x302B98u;
            goto label_302b98;
        }
    }
    ctx->pc = 0x302B94u;
label_302b94:
    // 0x302b94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x302b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302b98:
    // 0x302b98: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x302b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_302b9c:
    // 0x302b9c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x302b9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_302ba0:
    // 0x302ba0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x302ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_302ba4:
    // 0x302ba4: 0x40f809  jalr        $v0
label_302ba8:
    if (ctx->pc == 0x302BA8u) {
        ctx->pc = 0x302BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BA4u;
        // 0x302ba8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302BACu;
        goto label_302bac;
    }
    ctx->pc = 0x302BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302BACu);
        ctx->pc = 0x302BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BA4u;
        // 0x302ba8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302BA4u, 0x302BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302BACu;
label_302bac:
    // 0x302bac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x302bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_302bb0:
    // 0x302bb0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_302bb4:
    if (ctx->pc == 0x302BB4u) {
        ctx->pc = 0x302BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BB0u;
        // 0x302bb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302BB8u;
        goto label_302bb8;
    }
    ctx->pc = 0x302BB0u;
    {
        const bool branch_taken_0x302bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x302BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BB0u;
        // 0x302bb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302bb0) {
            ctx->pc = 0x302BC4u;
            goto label_302bc4;
        }
    }
    ctx->pc = 0x302BB8u;
label_302bb8:
    // 0x302bb8: 0xc0a35f6  jal         func_28D7D8
label_302bbc:
    if (ctx->pc == 0x302BBCu) {
        ctx->pc = 0x302BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BB8u;
        // 0x302bbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302BC0u;
        goto label_302bc0;
    }
    ctx->pc = 0x302BB8u;
    SET_GPR_U32(ctx, 31, 0x302BC0u);
    ctx->pc = 0x302BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302BB8u;
    // 0x302bbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x302BB8u, 0x302BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302BC0u;
label_302bc0:
    // 0x302bc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x302bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_302bc4:
    // 0x302bc4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x302bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_302bc8:
    // 0x302bc8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x302bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_302bcc:
    // 0x302bcc: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x302bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_302bd0:
    // 0x302bd0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x302bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302bd4:
    // 0x302bd4: 0xc0c0846  jal         func_302118
label_302bd8:
    if (ctx->pc == 0x302BD8u) {
        ctx->pc = 0x302BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BD4u;
        // 0x302bd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302BDCu;
        goto label_302bdc;
    }
    ctx->pc = 0x302BD4u;
    SET_GPR_U32(ctx, 31, 0x302BDCu);
    ctx->pc = 0x302BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302BD4u;
    // 0x302bd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302118u, 0x302BD4u, 0x302BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302BDCu;
label_302bdc:
    // 0x302bdc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x302bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_302be0:
    // 0x302be0: 0xa280028f  sb          $zero, 0x28F($s4)
    ctx->pc = 0x302be0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 655), (uint8_t)GPR_U32(ctx, 0));
label_302be4:
    // 0x302be4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x302be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302be8:
    // 0x302be8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x302be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_302bec:
    // 0x302bec: 0xc0a3464  jal         func_28D190
label_302bf0:
    if (ctx->pc == 0x302BF0u) {
        ctx->pc = 0x302BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BECu;
        // 0x302bf0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x302BF4u;
        goto label_302bf4;
    }
    ctx->pc = 0x302BECu;
    SET_GPR_U32(ctx, 31, 0x302BF4u);
    ctx->pc = 0x302BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302BECu;
    // 0x302bf0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x302BECu, 0x302BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302BF4u;
label_302bf4:
    // 0x302bf4: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
label_302bf8:
    if (ctx->pc == 0x302BF8u) {
        ctx->pc = 0x302BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BF4u;
        // 0x302bf8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302BFCu;
        goto label_302bfc;
    }
    ctx->pc = 0x302BF4u;
    {
        const bool branch_taken_0x302bf4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x302BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BF4u;
        // 0x302bf8: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302bf4) {
            ctx->pc = 0x302C44u;
            goto label_302c44;
        }
    }
    ctx->pc = 0x302BFCu;
label_302bfc:
    // 0x302bfc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x302bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_302c00:
    // 0x302c00: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x302c00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_302c04:
    // 0x302c04: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x302c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_302c08:
    // 0x302c08: 0x40f809  jalr        $v0
label_302c0c:
    if (ctx->pc == 0x302C0Cu) {
        ctx->pc = 0x302C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C08u;
        // 0x302c0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C10u;
        goto label_302c10;
    }
    ctx->pc = 0x302C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302C10u);
        ctx->pc = 0x302C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C08u;
        // 0x302c0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302C08u, 0x302C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302C10u;
label_302c10:
    // 0x302c10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x302c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_302c14:
    // 0x302c14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x302c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302c18:
    // 0x302c18: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x302c18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_302c1c:
    // 0x302c1c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x302c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_302c20:
    // 0x302c20: 0x40f809  jalr        $v0
label_302c24:
    if (ctx->pc == 0x302C24u) {
        ctx->pc = 0x302C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C20u;
        // 0x302c24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C28u;
        goto label_302c28;
    }
    ctx->pc = 0x302C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302C28u);
        ctx->pc = 0x302C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C20u;
        // 0x302c24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302C20u, 0x302C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302C28u;
label_302c28:
    // 0x302c28: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x302c28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_302c2c:
    // 0x302c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302c30:
    // 0x302c30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x302c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302c34:
    // 0x302c34: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x302c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_302c38:
    // 0x302c38: 0xc0b11c4  jal         func_2C4710
label_302c3c:
    if (ctx->pc == 0x302C3Cu) {
        ctx->pc = 0x302C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C38u;
        // 0x302c3c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C40u;
        goto label_302c40;
    }
    ctx->pc = 0x302C38u;
    SET_GPR_U32(ctx, 31, 0x302C40u);
    ctx->pc = 0x302C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C38u;
    // 0x302c3c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4710u, 0x302C38u, 0x302C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C40u;
label_302c40:
    // 0x302c40: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x302c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_302c44:
    // 0x302c44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x302c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_302c48:
    // 0x302c48: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x302c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_302c4c:
    // 0x302c4c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x302c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_302c50:
    // 0x302c50: 0x40f809  jalr        $v0
label_302c54:
    if (ctx->pc == 0x302C54u) {
        ctx->pc = 0x302C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C50u;
        // 0x302c54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C58u;
        goto label_302c58;
    }
    ctx->pc = 0x302C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302C58u);
        ctx->pc = 0x302C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C50u;
        // 0x302c54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302C50u, 0x302C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302C58u;
label_302c58:
    // 0x302c58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x302c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_302c5c:
    // 0x302c5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x302c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302c60:
    // 0x302c60: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x302c60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_302c64:
    // 0x302c64: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x302c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_302c68:
    // 0x302c68: 0x40f809  jalr        $v0
label_302c6c:
    if (ctx->pc == 0x302C6Cu) {
        ctx->pc = 0x302C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C68u;
        // 0x302c6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C70u;
        goto label_302c70;
    }
    ctx->pc = 0x302C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x302C70u);
        ctx->pc = 0x302C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C68u;
        // 0x302c6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302C68u, 0x302C70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x302C70u;
label_302c70:
    // 0x302c70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x302c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_302c74:
    // 0x302c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302c78:
    // 0x302c78: 0x8c68bd30  lw          $t0, -0x42D0($v1)
    ctx->pc = 0x302c78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_302c7c:
    // 0x302c7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x302c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_302c80:
    // 0x302c80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x302c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_302c84:
    // 0x302c84: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x302c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_302c88:
    // 0x302c88: 0xc0b1018  jal         func_2C4060
label_302c8c:
    if (ctx->pc == 0x302C8Cu) {
        ctx->pc = 0x302C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C88u;
        // 0x302c8c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C90u;
        goto label_302c90;
    }
    ctx->pc = 0x302C88u;
    SET_GPR_U32(ctx, 31, 0x302C90u);
    ctx->pc = 0x302C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C88u;
    // 0x302c8c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4060u, 0x302C88u, 0x302C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C90u;
label_302c90:
    // 0x302c90: 0x10000004  b           . + 4 + (0x4 << 2)
label_302c94:
    if (ctx->pc == 0x302C94u) {
        ctx->pc = 0x302C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C90u;
        // 0x302c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302C98u;
        goto label_302c98;
    }
    ctx->pc = 0x302C90u;
    {
        const bool branch_taken_0x302c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C90u;
        // 0x302c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302c90) {
            ctx->pc = 0x302CA4u;
            goto label_302ca4;
        }
    }
    ctx->pc = 0x302C98u;
label_302c98:
    // 0x302c98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x302c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_302c9c:
    // 0x302c9c: 0xc0a4b60  jal         func_292D80
label_302ca0:
    if (ctx->pc == 0x302CA0u) {
        ctx->pc = 0x302CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C9Cu;
        // 0x302ca0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302CA4u;
        goto label_302ca4;
    }
    ctx->pc = 0x302C9Cu;
    SET_GPR_U32(ctx, 31, 0x302CA4u);
    ctx->pc = 0x302CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C9Cu;
    // 0x302ca0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D80u, 0x302C9Cu, 0x302CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CA4u;
label_302ca4:
    // 0x302ca4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x302ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_302ca8:
    // 0x302ca8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x302ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_302cac:
    // 0x302cac: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x302cacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_302cb0:
    // 0x302cb0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x302cb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_302cb4:
    // 0x302cb4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x302cb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_302cb8:
    // 0x302cb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x302cb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_302cbc:
    // 0x302cbc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x302cbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_302cc0:
    // 0x302cc0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x302cc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_302cc4:
    // 0x302cc4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x302cc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_302cc8:
    // 0x302cc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x302cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_302ccc:
    // 0x302ccc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x302cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_302cd0:
    // 0x302cd0: 0x3e00008  jr          $ra
label_302cd4:
    if (ctx->pc == 0x302CD4u) {
        ctx->pc = 0x302CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CD0u;
        // 0x302cd4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x302CD8u;
        goto label_fallthrough_0x302cd0;
    }
    ctx->pc = 0x302CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CD0u;
        // 0x302cd4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x302cd0:
    ctx->pc = 0x302CD8u;
}
