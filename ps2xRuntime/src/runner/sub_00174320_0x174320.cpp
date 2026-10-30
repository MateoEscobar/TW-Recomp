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

// Function: sub_00174320
// Address: 0x174320 - 0x174af8
void sub_00174320_0x174320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174320_0x174320");
#endif

    switch (ctx->pc) {
        case 0x174320u: goto label_174320;
        case 0x174324u: goto label_174324;
        case 0x174328u: goto label_174328;
        case 0x17432cu: goto label_17432c;
        case 0x174330u: goto label_174330;
        case 0x174334u: goto label_174334;
        case 0x174338u: goto label_174338;
        case 0x17433cu: goto label_17433c;
        case 0x174340u: goto label_174340;
        case 0x174344u: goto label_174344;
        case 0x174348u: goto label_174348;
        case 0x17434cu: goto label_17434c;
        case 0x174350u: goto label_174350;
        case 0x174354u: goto label_174354;
        case 0x174358u: goto label_174358;
        case 0x17435cu: goto label_17435c;
        case 0x174360u: goto label_174360;
        case 0x174364u: goto label_174364;
        case 0x174368u: goto label_174368;
        case 0x17436cu: goto label_17436c;
        case 0x174370u: goto label_174370;
        case 0x174374u: goto label_174374;
        case 0x174378u: goto label_174378;
        case 0x17437cu: goto label_17437c;
        case 0x174380u: goto label_174380;
        case 0x174384u: goto label_174384;
        case 0x174388u: goto label_174388;
        case 0x17438cu: goto label_17438c;
        case 0x174390u: goto label_174390;
        case 0x174394u: goto label_174394;
        case 0x174398u: goto label_174398;
        case 0x17439cu: goto label_17439c;
        case 0x1743a0u: goto label_1743a0;
        case 0x1743a4u: goto label_1743a4;
        case 0x1743a8u: goto label_1743a8;
        case 0x1743acu: goto label_1743ac;
        case 0x1743b0u: goto label_1743b0;
        case 0x1743b4u: goto label_1743b4;
        case 0x1743b8u: goto label_1743b8;
        case 0x1743bcu: goto label_1743bc;
        case 0x1743c0u: goto label_1743c0;
        case 0x1743c4u: goto label_1743c4;
        case 0x1743c8u: goto label_1743c8;
        case 0x1743ccu: goto label_1743cc;
        case 0x1743d0u: goto label_1743d0;
        case 0x1743d4u: goto label_1743d4;
        case 0x1743d8u: goto label_1743d8;
        case 0x1743dcu: goto label_1743dc;
        case 0x1743e0u: goto label_1743e0;
        case 0x1743e4u: goto label_1743e4;
        case 0x1743e8u: goto label_1743e8;
        case 0x1743ecu: goto label_1743ec;
        case 0x1743f0u: goto label_1743f0;
        case 0x1743f4u: goto label_1743f4;
        case 0x1743f8u: goto label_1743f8;
        case 0x1743fcu: goto label_1743fc;
        case 0x174400u: goto label_174400;
        case 0x174404u: goto label_174404;
        case 0x174408u: goto label_174408;
        case 0x17440cu: goto label_17440c;
        case 0x174410u: goto label_174410;
        case 0x174414u: goto label_174414;
        case 0x174418u: goto label_174418;
        case 0x17441cu: goto label_17441c;
        case 0x174420u: goto label_174420;
        case 0x174424u: goto label_174424;
        case 0x174428u: goto label_174428;
        case 0x17442cu: goto label_17442c;
        case 0x174430u: goto label_174430;
        case 0x174434u: goto label_174434;
        case 0x174438u: goto label_174438;
        case 0x17443cu: goto label_17443c;
        case 0x174440u: goto label_174440;
        case 0x174444u: goto label_174444;
        case 0x174448u: goto label_174448;
        case 0x17444cu: goto label_17444c;
        case 0x174450u: goto label_174450;
        case 0x174454u: goto label_174454;
        case 0x174458u: goto label_174458;
        case 0x17445cu: goto label_17445c;
        case 0x174460u: goto label_174460;
        case 0x174464u: goto label_174464;
        case 0x174468u: goto label_174468;
        case 0x17446cu: goto label_17446c;
        case 0x174470u: goto label_174470;
        case 0x174474u: goto label_174474;
        case 0x174478u: goto label_174478;
        case 0x17447cu: goto label_17447c;
        case 0x174480u: goto label_174480;
        case 0x174484u: goto label_174484;
        case 0x174488u: goto label_174488;
        case 0x17448cu: goto label_17448c;
        case 0x174490u: goto label_174490;
        case 0x174494u: goto label_174494;
        case 0x174498u: goto label_174498;
        case 0x17449cu: goto label_17449c;
        case 0x1744a0u: goto label_1744a0;
        case 0x1744a4u: goto label_1744a4;
        case 0x1744a8u: goto label_1744a8;
        case 0x1744acu: goto label_1744ac;
        case 0x1744b0u: goto label_1744b0;
        case 0x1744b4u: goto label_1744b4;
        case 0x1744b8u: goto label_1744b8;
        case 0x1744bcu: goto label_1744bc;
        case 0x1744c0u: goto label_1744c0;
        case 0x1744c4u: goto label_1744c4;
        case 0x1744c8u: goto label_1744c8;
        case 0x1744ccu: goto label_1744cc;
        case 0x1744d0u: goto label_1744d0;
        case 0x1744d4u: goto label_1744d4;
        case 0x1744d8u: goto label_1744d8;
        case 0x1744dcu: goto label_1744dc;
        case 0x1744e0u: goto label_1744e0;
        case 0x1744e4u: goto label_1744e4;
        case 0x1744e8u: goto label_1744e8;
        case 0x1744ecu: goto label_1744ec;
        case 0x1744f0u: goto label_1744f0;
        case 0x1744f4u: goto label_1744f4;
        case 0x1744f8u: goto label_1744f8;
        case 0x1744fcu: goto label_1744fc;
        case 0x174500u: goto label_174500;
        case 0x174504u: goto label_174504;
        case 0x174508u: goto label_174508;
        case 0x17450cu: goto label_17450c;
        case 0x174510u: goto label_174510;
        case 0x174514u: goto label_174514;
        case 0x174518u: goto label_174518;
        case 0x17451cu: goto label_17451c;
        case 0x174520u: goto label_174520;
        case 0x174524u: goto label_174524;
        case 0x174528u: goto label_174528;
        case 0x17452cu: goto label_17452c;
        case 0x174530u: goto label_174530;
        case 0x174534u: goto label_174534;
        case 0x174538u: goto label_174538;
        case 0x17453cu: goto label_17453c;
        case 0x174540u: goto label_174540;
        case 0x174544u: goto label_174544;
        case 0x174548u: goto label_174548;
        case 0x17454cu: goto label_17454c;
        case 0x174550u: goto label_174550;
        case 0x174554u: goto label_174554;
        case 0x174558u: goto label_174558;
        case 0x17455cu: goto label_17455c;
        case 0x174560u: goto label_174560;
        case 0x174564u: goto label_174564;
        case 0x174568u: goto label_174568;
        case 0x17456cu: goto label_17456c;
        case 0x174570u: goto label_174570;
        case 0x174574u: goto label_174574;
        case 0x174578u: goto label_174578;
        case 0x17457cu: goto label_17457c;
        case 0x174580u: goto label_174580;
        case 0x174584u: goto label_174584;
        case 0x174588u: goto label_174588;
        case 0x17458cu: goto label_17458c;
        case 0x174590u: goto label_174590;
        case 0x174594u: goto label_174594;
        case 0x174598u: goto label_174598;
        case 0x17459cu: goto label_17459c;
        case 0x1745a0u: goto label_1745a0;
        case 0x1745a4u: goto label_1745a4;
        case 0x1745a8u: goto label_1745a8;
        case 0x1745acu: goto label_1745ac;
        case 0x1745b0u: goto label_1745b0;
        case 0x1745b4u: goto label_1745b4;
        case 0x1745b8u: goto label_1745b8;
        case 0x1745bcu: goto label_1745bc;
        case 0x1745c0u: goto label_1745c0;
        case 0x1745c4u: goto label_1745c4;
        case 0x1745c8u: goto label_1745c8;
        case 0x1745ccu: goto label_1745cc;
        case 0x1745d0u: goto label_1745d0;
        case 0x1745d4u: goto label_1745d4;
        case 0x1745d8u: goto label_1745d8;
        case 0x1745dcu: goto label_1745dc;
        case 0x1745e0u: goto label_1745e0;
        case 0x1745e4u: goto label_1745e4;
        case 0x1745e8u: goto label_1745e8;
        case 0x1745ecu: goto label_1745ec;
        case 0x1745f0u: goto label_1745f0;
        case 0x1745f4u: goto label_1745f4;
        case 0x1745f8u: goto label_1745f8;
        case 0x1745fcu: goto label_1745fc;
        case 0x174600u: goto label_174600;
        case 0x174604u: goto label_174604;
        case 0x174608u: goto label_174608;
        case 0x17460cu: goto label_17460c;
        case 0x174610u: goto label_174610;
        case 0x174614u: goto label_174614;
        case 0x174618u: goto label_174618;
        case 0x17461cu: goto label_17461c;
        case 0x174620u: goto label_174620;
        case 0x174624u: goto label_174624;
        case 0x174628u: goto label_174628;
        case 0x17462cu: goto label_17462c;
        case 0x174630u: goto label_174630;
        case 0x174634u: goto label_174634;
        case 0x174638u: goto label_174638;
        case 0x17463cu: goto label_17463c;
        case 0x174640u: goto label_174640;
        case 0x174644u: goto label_174644;
        case 0x174648u: goto label_174648;
        case 0x17464cu: goto label_17464c;
        case 0x174650u: goto label_174650;
        case 0x174654u: goto label_174654;
        case 0x174658u: goto label_174658;
        case 0x17465cu: goto label_17465c;
        case 0x174660u: goto label_174660;
        case 0x174664u: goto label_174664;
        case 0x174668u: goto label_174668;
        case 0x17466cu: goto label_17466c;
        case 0x174670u: goto label_174670;
        case 0x174674u: goto label_174674;
        case 0x174678u: goto label_174678;
        case 0x17467cu: goto label_17467c;
        case 0x174680u: goto label_174680;
        case 0x174684u: goto label_174684;
        case 0x174688u: goto label_174688;
        case 0x17468cu: goto label_17468c;
        case 0x174690u: goto label_174690;
        case 0x174694u: goto label_174694;
        case 0x174698u: goto label_174698;
        case 0x17469cu: goto label_17469c;
        case 0x1746a0u: goto label_1746a0;
        case 0x1746a4u: goto label_1746a4;
        case 0x1746a8u: goto label_1746a8;
        case 0x1746acu: goto label_1746ac;
        case 0x1746b0u: goto label_1746b0;
        case 0x1746b4u: goto label_1746b4;
        case 0x1746b8u: goto label_1746b8;
        case 0x1746bcu: goto label_1746bc;
        case 0x1746c0u: goto label_1746c0;
        case 0x1746c4u: goto label_1746c4;
        case 0x1746c8u: goto label_1746c8;
        case 0x1746ccu: goto label_1746cc;
        case 0x1746d0u: goto label_1746d0;
        case 0x1746d4u: goto label_1746d4;
        case 0x1746d8u: goto label_1746d8;
        case 0x1746dcu: goto label_1746dc;
        case 0x1746e0u: goto label_1746e0;
        case 0x1746e4u: goto label_1746e4;
        case 0x1746e8u: goto label_1746e8;
        case 0x1746ecu: goto label_1746ec;
        case 0x1746f0u: goto label_1746f0;
        case 0x1746f4u: goto label_1746f4;
        case 0x1746f8u: goto label_1746f8;
        case 0x1746fcu: goto label_1746fc;
        case 0x174700u: goto label_174700;
        case 0x174704u: goto label_174704;
        case 0x174708u: goto label_174708;
        case 0x17470cu: goto label_17470c;
        case 0x174710u: goto label_174710;
        case 0x174714u: goto label_174714;
        case 0x174718u: goto label_174718;
        case 0x17471cu: goto label_17471c;
        case 0x174720u: goto label_174720;
        case 0x174724u: goto label_174724;
        case 0x174728u: goto label_174728;
        case 0x17472cu: goto label_17472c;
        case 0x174730u: goto label_174730;
        case 0x174734u: goto label_174734;
        case 0x174738u: goto label_174738;
        case 0x17473cu: goto label_17473c;
        case 0x174740u: goto label_174740;
        case 0x174744u: goto label_174744;
        case 0x174748u: goto label_174748;
        case 0x17474cu: goto label_17474c;
        case 0x174750u: goto label_174750;
        case 0x174754u: goto label_174754;
        case 0x174758u: goto label_174758;
        case 0x17475cu: goto label_17475c;
        case 0x174760u: goto label_174760;
        case 0x174764u: goto label_174764;
        case 0x174768u: goto label_174768;
        case 0x17476cu: goto label_17476c;
        case 0x174770u: goto label_174770;
        case 0x174774u: goto label_174774;
        case 0x174778u: goto label_174778;
        case 0x17477cu: goto label_17477c;
        case 0x174780u: goto label_174780;
        case 0x174784u: goto label_174784;
        case 0x174788u: goto label_174788;
        case 0x17478cu: goto label_17478c;
        case 0x174790u: goto label_174790;
        case 0x174794u: goto label_174794;
        case 0x174798u: goto label_174798;
        case 0x17479cu: goto label_17479c;
        case 0x1747a0u: goto label_1747a0;
        case 0x1747a4u: goto label_1747a4;
        case 0x1747a8u: goto label_1747a8;
        case 0x1747acu: goto label_1747ac;
        case 0x1747b0u: goto label_1747b0;
        case 0x1747b4u: goto label_1747b4;
        case 0x1747b8u: goto label_1747b8;
        case 0x1747bcu: goto label_1747bc;
        case 0x1747c0u: goto label_1747c0;
        case 0x1747c4u: goto label_1747c4;
        case 0x1747c8u: goto label_1747c8;
        case 0x1747ccu: goto label_1747cc;
        case 0x1747d0u: goto label_1747d0;
        case 0x1747d4u: goto label_1747d4;
        case 0x1747d8u: goto label_1747d8;
        case 0x1747dcu: goto label_1747dc;
        case 0x1747e0u: goto label_1747e0;
        case 0x1747e4u: goto label_1747e4;
        case 0x1747e8u: goto label_1747e8;
        case 0x1747ecu: goto label_1747ec;
        case 0x1747f0u: goto label_1747f0;
        case 0x1747f4u: goto label_1747f4;
        case 0x1747f8u: goto label_1747f8;
        case 0x1747fcu: goto label_1747fc;
        case 0x174800u: goto label_174800;
        case 0x174804u: goto label_174804;
        case 0x174808u: goto label_174808;
        case 0x17480cu: goto label_17480c;
        case 0x174810u: goto label_174810;
        case 0x174814u: goto label_174814;
        case 0x174818u: goto label_174818;
        case 0x17481cu: goto label_17481c;
        case 0x174820u: goto label_174820;
        case 0x174824u: goto label_174824;
        case 0x174828u: goto label_174828;
        case 0x17482cu: goto label_17482c;
        case 0x174830u: goto label_174830;
        case 0x174834u: goto label_174834;
        case 0x174838u: goto label_174838;
        case 0x17483cu: goto label_17483c;
        case 0x174840u: goto label_174840;
        case 0x174844u: goto label_174844;
        case 0x174848u: goto label_174848;
        case 0x17484cu: goto label_17484c;
        case 0x174850u: goto label_174850;
        case 0x174854u: goto label_174854;
        case 0x174858u: goto label_174858;
        case 0x17485cu: goto label_17485c;
        case 0x174860u: goto label_174860;
        case 0x174864u: goto label_174864;
        case 0x174868u: goto label_174868;
        case 0x17486cu: goto label_17486c;
        case 0x174870u: goto label_174870;
        case 0x174874u: goto label_174874;
        case 0x174878u: goto label_174878;
        case 0x17487cu: goto label_17487c;
        case 0x174880u: goto label_174880;
        case 0x174884u: goto label_174884;
        case 0x174888u: goto label_174888;
        case 0x17488cu: goto label_17488c;
        case 0x174890u: goto label_174890;
        case 0x174894u: goto label_174894;
        case 0x174898u: goto label_174898;
        case 0x17489cu: goto label_17489c;
        case 0x1748a0u: goto label_1748a0;
        case 0x1748a4u: goto label_1748a4;
        case 0x1748a8u: goto label_1748a8;
        case 0x1748acu: goto label_1748ac;
        case 0x1748b0u: goto label_1748b0;
        case 0x1748b4u: goto label_1748b4;
        case 0x1748b8u: goto label_1748b8;
        case 0x1748bcu: goto label_1748bc;
        case 0x1748c0u: goto label_1748c0;
        case 0x1748c4u: goto label_1748c4;
        case 0x1748c8u: goto label_1748c8;
        case 0x1748ccu: goto label_1748cc;
        case 0x1748d0u: goto label_1748d0;
        case 0x1748d4u: goto label_1748d4;
        case 0x1748d8u: goto label_1748d8;
        case 0x1748dcu: goto label_1748dc;
        case 0x1748e0u: goto label_1748e0;
        case 0x1748e4u: goto label_1748e4;
        case 0x1748e8u: goto label_1748e8;
        case 0x1748ecu: goto label_1748ec;
        case 0x1748f0u: goto label_1748f0;
        case 0x1748f4u: goto label_1748f4;
        case 0x1748f8u: goto label_1748f8;
        case 0x1748fcu: goto label_1748fc;
        case 0x174900u: goto label_174900;
        case 0x174904u: goto label_174904;
        case 0x174908u: goto label_174908;
        case 0x17490cu: goto label_17490c;
        case 0x174910u: goto label_174910;
        case 0x174914u: goto label_174914;
        case 0x174918u: goto label_174918;
        case 0x17491cu: goto label_17491c;
        case 0x174920u: goto label_174920;
        case 0x174924u: goto label_174924;
        case 0x174928u: goto label_174928;
        case 0x17492cu: goto label_17492c;
        case 0x174930u: goto label_174930;
        case 0x174934u: goto label_174934;
        case 0x174938u: goto label_174938;
        case 0x17493cu: goto label_17493c;
        case 0x174940u: goto label_174940;
        case 0x174944u: goto label_174944;
        case 0x174948u: goto label_174948;
        case 0x17494cu: goto label_17494c;
        case 0x174950u: goto label_174950;
        case 0x174954u: goto label_174954;
        case 0x174958u: goto label_174958;
        case 0x17495cu: goto label_17495c;
        case 0x174960u: goto label_174960;
        case 0x174964u: goto label_174964;
        case 0x174968u: goto label_174968;
        case 0x17496cu: goto label_17496c;
        case 0x174970u: goto label_174970;
        case 0x174974u: goto label_174974;
        case 0x174978u: goto label_174978;
        case 0x17497cu: goto label_17497c;
        case 0x174980u: goto label_174980;
        case 0x174984u: goto label_174984;
        case 0x174988u: goto label_174988;
        case 0x17498cu: goto label_17498c;
        case 0x174990u: goto label_174990;
        case 0x174994u: goto label_174994;
        case 0x174998u: goto label_174998;
        case 0x17499cu: goto label_17499c;
        case 0x1749a0u: goto label_1749a0;
        case 0x1749a4u: goto label_1749a4;
        case 0x1749a8u: goto label_1749a8;
        case 0x1749acu: goto label_1749ac;
        case 0x1749b0u: goto label_1749b0;
        case 0x1749b4u: goto label_1749b4;
        case 0x1749b8u: goto label_1749b8;
        case 0x1749bcu: goto label_1749bc;
        case 0x1749c0u: goto label_1749c0;
        case 0x1749c4u: goto label_1749c4;
        case 0x1749c8u: goto label_1749c8;
        case 0x1749ccu: goto label_1749cc;
        case 0x1749d0u: goto label_1749d0;
        case 0x1749d4u: goto label_1749d4;
        case 0x1749d8u: goto label_1749d8;
        case 0x1749dcu: goto label_1749dc;
        case 0x1749e0u: goto label_1749e0;
        case 0x1749e4u: goto label_1749e4;
        case 0x1749e8u: goto label_1749e8;
        case 0x1749ecu: goto label_1749ec;
        case 0x1749f0u: goto label_1749f0;
        case 0x1749f4u: goto label_1749f4;
        case 0x1749f8u: goto label_1749f8;
        case 0x1749fcu: goto label_1749fc;
        case 0x174a00u: goto label_174a00;
        case 0x174a04u: goto label_174a04;
        case 0x174a08u: goto label_174a08;
        case 0x174a0cu: goto label_174a0c;
        case 0x174a10u: goto label_174a10;
        case 0x174a14u: goto label_174a14;
        case 0x174a18u: goto label_174a18;
        case 0x174a1cu: goto label_174a1c;
        case 0x174a20u: goto label_174a20;
        case 0x174a24u: goto label_174a24;
        case 0x174a28u: goto label_174a28;
        case 0x174a2cu: goto label_174a2c;
        case 0x174a30u: goto label_174a30;
        case 0x174a34u: goto label_174a34;
        case 0x174a38u: goto label_174a38;
        case 0x174a3cu: goto label_174a3c;
        case 0x174a40u: goto label_174a40;
        case 0x174a44u: goto label_174a44;
        case 0x174a48u: goto label_174a48;
        case 0x174a4cu: goto label_174a4c;
        case 0x174a50u: goto label_174a50;
        case 0x174a54u: goto label_174a54;
        case 0x174a58u: goto label_174a58;
        case 0x174a5cu: goto label_174a5c;
        case 0x174a60u: goto label_174a60;
        case 0x174a64u: goto label_174a64;
        case 0x174a68u: goto label_174a68;
        case 0x174a6cu: goto label_174a6c;
        case 0x174a70u: goto label_174a70;
        case 0x174a74u: goto label_174a74;
        case 0x174a78u: goto label_174a78;
        case 0x174a7cu: goto label_174a7c;
        case 0x174a80u: goto label_174a80;
        case 0x174a84u: goto label_174a84;
        case 0x174a88u: goto label_174a88;
        case 0x174a8cu: goto label_174a8c;
        case 0x174a90u: goto label_174a90;
        case 0x174a94u: goto label_174a94;
        case 0x174a98u: goto label_174a98;
        case 0x174a9cu: goto label_174a9c;
        case 0x174aa0u: goto label_174aa0;
        case 0x174aa4u: goto label_174aa4;
        case 0x174aa8u: goto label_174aa8;
        case 0x174aacu: goto label_174aac;
        case 0x174ab0u: goto label_174ab0;
        case 0x174ab4u: goto label_174ab4;
        case 0x174ab8u: goto label_174ab8;
        case 0x174abcu: goto label_174abc;
        case 0x174ac0u: goto label_174ac0;
        case 0x174ac4u: goto label_174ac4;
        case 0x174ac8u: goto label_174ac8;
        case 0x174accu: goto label_174acc;
        case 0x174ad0u: goto label_174ad0;
        case 0x174ad4u: goto label_174ad4;
        case 0x174ad8u: goto label_174ad8;
        case 0x174adcu: goto label_174adc;
        case 0x174ae0u: goto label_174ae0;
        case 0x174ae4u: goto label_174ae4;
        case 0x174ae8u: goto label_174ae8;
        case 0x174aecu: goto label_174aec;
        case 0x174af0u: goto label_174af0;
        case 0x174af4u: goto label_174af4;
        default: break;
    }

    ctx->pc = 0x174320u;

label_174320:
    // 0x174320: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x174320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
label_174324:
    // 0x174324: 0x7fb20270  sq          $s2, 0x270($sp)
    ctx->pc = 0x174324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 18));
label_174328:
    // 0x174328: 0x7fb60230  sq          $s6, 0x230($sp)
    ctx->pc = 0x174328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 22));
label_17432c:
    // 0x17432c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17432cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174330:
    // 0x174330: 0x7fb00290  sq          $s0, 0x290($sp)
    ctx->pc = 0x174330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 16));
label_174334:
    // 0x174334: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x174334u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174338:
    // 0x174338: 0x7fb30260  sq          $s3, 0x260($sp)
    ctx->pc = 0x174338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 19));
label_17433c:
    // 0x17433c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x17433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_174340:
    // 0x174340: 0x7fb40250  sq          $s4, 0x250($sp)
    ctx->pc = 0x174340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 20));
label_174344:
    // 0x174344: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x174344u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_174348:
    // 0x174348: 0x7fbe0210  sq          $fp, 0x210($sp)
    ctx->pc = 0x174348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 30));
label_17434c:
    // 0x17434c: 0xe7b402a0  swc1        $f20, 0x2A0($sp)
    ctx->pc = 0x17434cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_174350:
    // 0x174350: 0x7fb10280  sq          $s1, 0x280($sp)
    ctx->pc = 0x174350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 17));
label_174354:
    // 0x174354: 0x7fb50240  sq          $s5, 0x240($sp)
    ctx->pc = 0x174354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 21));
label_174358:
    // 0x174358: 0x7fb70220  sq          $s7, 0x220($sp)
    ctx->pc = 0x174358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 23));
label_17435c:
    // 0x17435c: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x17435cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
label_174360:
    // 0x174360: 0xc05fdee  jal         func_17F7B8
label_174364:
    if (ctx->pc == 0x174364u) {
        ctx->pc = 0x174364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174360u;
        // 0x174364: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174368u;
        goto label_174368;
    }
    ctx->pc = 0x174360u;
    SET_GPR_U32(ctx, 31, 0x174368u);
    ctx->pc = 0x174364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174360u;
    // 0x174364: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B8u, 0x174360u, 0x174368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174368u;
label_174368:
    // 0x174368: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x174368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_17436c:
    // 0x17436c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17436cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_174370:
    // 0x174370: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x174370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_174374:
    // 0x174374: 0x8e05b734  lw          $a1, -0x48CC($s0)
    ctx->pc = 0x174374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_174378:
    // 0x174378: 0x2474ffc0  addiu       $s4, $v1, -0x40
    ctx->pc = 0x174378u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_17437c:
    // 0x17437c: 0x8e4402b8  lw          $a0, 0x2B8($s2)
    ctx->pc = 0x17437cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_174380:
    // 0x174380: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x174380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_174384:
    // 0x174384: 0x8cb00048  lw          $s0, 0x48($a1)
    ctx->pc = 0x174384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_174388:
    // 0x174388: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x174388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_17438c:
    // 0x17438c: 0xc087502  jal         func_21D408
label_174390:
    if (ctx->pc == 0x174390u) {
        ctx->pc = 0x174390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17438Cu;
        // 0x174390: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174394u;
        goto label_174394;
    }
    ctx->pc = 0x17438Cu;
    SET_GPR_U32(ctx, 31, 0x174394u);
    ctx->pc = 0x174390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17438Cu;
    // 0x174390: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x17438Cu, 0x174394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174394u;
label_174394:
    // 0x174394: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x174394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_174398:
    // 0x174398: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x174398u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_17439c:
    // 0x17439c: 0x2e0200fa  sltiu       $v0, $s0, 0xFA
    ctx->pc = 0x17439cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)250) ? 1 : 0);
label_1743a0:
    // 0x1743a0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1743a4:
    if (ctx->pc == 0x1743A4u) {
        ctx->pc = 0x1743A8u;
        goto label_1743a8;
    }
    ctx->pc = 0x1743A0u;
    {
        const bool branch_taken_0x1743a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1743a0) {
            ctx->pc = 0x1743F0u;
            goto label_1743f0;
        }
    }
    ctx->pc = 0x1743A8u;
label_1743a8:
    // 0x1743a8: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1743ac:
    if (ctx->pc == 0x1743ACu) {
        ctx->pc = 0x1743ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743A8u;
        // 0x1743ac: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1743B0u;
        goto label_1743b0;
    }
    ctx->pc = 0x1743A8u;
    {
        const bool branch_taken_0x1743a8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1743ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743A8u;
        // 0x1743ac: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1743a8) {
            ctx->pc = 0x1743C4u;
            goto label_1743c4;
        }
    }
    ctx->pc = 0x1743B0u;
label_1743b0:
    // 0x1743b0: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1743b0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1743b4:
    // 0x1743b4: 0x0  nop
    ctx->pc = 0x1743b4u;
    // NOP
label_1743b8:
    // 0x1743b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1743b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1743bc:
    // 0x1743bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1743c0:
    if (ctx->pc == 0x1743C0u) {
        ctx->pc = 0x1743C4u;
        goto label_1743c4;
    }
    ctx->pc = 0x1743BCu;
    {
        const bool branch_taken_0x1743bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1743bc) {
            ctx->pc = 0x1743DCu;
            goto label_1743dc;
        }
    }
    ctx->pc = 0x1743C4u;
label_1743c4:
    // 0x1743c4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1743c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1743c8:
    // 0x1743c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1743c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1743cc:
    // 0x1743cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1743ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1743d0:
    // 0x1743d0: 0x0  nop
    ctx->pc = 0x1743d0u;
    // NOP
label_1743d4:
    // 0x1743d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1743d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1743d8:
    // 0x1743d8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1743d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1743dc:
    // 0x1743dc: 0x3c013b03  lui         $at, 0x3B03
    ctx->pc = 0x1743dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15107 << 16));
label_1743e0:
    // 0x1743e0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1743e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1743e4:
    // 0x1743e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1743e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1743e8:
    // 0x1743e8: 0x0  nop
    ctx->pc = 0x1743e8u;
    // NOP
label_1743ec:
    // 0x1743ec: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x1743ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1743f0:
    // 0x1743f0: 0xc087502  jal         func_21D408
label_1743f4:
    if (ctx->pc == 0x1743F4u) {
        ctx->pc = 0x1743F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743F0u;
        // 0x1743f4: 0x8e4402b8  lw          $a0, 0x2B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1743F8u;
        goto label_1743f8;
    }
    ctx->pc = 0x1743F0u;
    SET_GPR_U32(ctx, 31, 0x1743F8u);
    ctx->pc = 0x1743F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1743F0u;
    // 0x1743f4: 0x8e4402b8  lw          $a0, 0x2B8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1743F0u, 0x1743F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1743F8u;
label_1743f8:
    // 0x1743f8: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x1743f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_1743fc:
    // 0x1743fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_174400:
    if (ctx->pc == 0x174400u) {
        ctx->pc = 0x174404u;
        goto label_174404;
    }
    ctx->pc = 0x1743FCu;
    {
        const bool branch_taken_0x1743fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1743fc) {
            ctx->pc = 0x174414u;
            goto label_174414;
        }
    }
    ctx->pc = 0x174404u;
label_174404:
    // 0x174404: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x174404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_174408:
    // 0x174408: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x174408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17440c:
    // 0x17440c: 0x10000005  b           . + 4 + (0x5 << 2)
label_174410:
    if (ctx->pc == 0x174410u) {
        ctx->pc = 0x174410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17440Cu;
        // 0x174410: 0x46140501  sub.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x174414u;
        goto label_174414;
    }
    ctx->pc = 0x17440Cu;
    {
        const bool branch_taken_0x17440c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17440Cu;
        // 0x174410: 0x46140501  sub.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17440c) {
            ctx->pc = 0x174424u;
            goto label_174424;
        }
    }
    ctx->pc = 0x174414u;
label_174414:
    // 0x174414: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x174414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_174418:
    // 0x174418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x174418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17441c:
    // 0x17441c: 0x0  nop
    ctx->pc = 0x17441cu;
    // NOP
label_174420:
    // 0x174420: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x174420u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_174424:
    // 0x174424: 0x92450028  lbu         $a1, 0x28($s2)
    ctx->pc = 0x174424u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_174428:
    // 0x174428: 0x26550004  addiu       $s5, $s2, 0x4
    ctx->pc = 0x174428u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_17442c:
    // 0x17442c: 0x92420029  lbu         $v0, 0x29($s2)
    ctx->pc = 0x17442cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
label_174430:
    // 0x174430: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x174430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_174434:
    // 0x174434: 0x9243002a  lbu         $v1, 0x2A($s2)
    ctx->pc = 0x174434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 42)));
label_174438:
    // 0x174438: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x174438u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17443c:
    // 0x17443c: 0x0  nop
    ctx->pc = 0x17443cu;
    // NOP
label_174440:
    // 0x174440: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x174440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_174444:
    // 0x174444: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x174444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_174448:
    // 0x174448: 0x0  nop
    ctx->pc = 0x174448u;
    // NOP
label_17444c:
    // 0x17444c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17444cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_174450:
    // 0x174450: 0x9246002b  lbu         $a2, 0x2B($s2)
    ctx->pc = 0x174450u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 43)));
label_174454:
    // 0x174454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x174454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_174458:
    // 0x174458: 0x0  nop
    ctx->pc = 0x174458u;
    // NOP
label_17445c:
    // 0x17445c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17445cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_174460:
    // 0x174460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174464:
    // 0x174464: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x174464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_174468:
    // 0x174468: 0xa3a60003  sb          $a2, 0x3($sp)
    ctx->pc = 0x174468u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 6));
label_17446c:
    // 0x17446c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x17446cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_174470:
    // 0x174470: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x174470u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_174474:
    // 0x174474: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x174474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_174478:
    // 0x174478: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x174478u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17447c:
    // 0x17447c: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17447cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_174480:
    // 0x174480: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x174480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_174484:
    // 0x174484: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_174488:
    // 0x174488: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x174488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_17448c:
    // 0x17448c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17448cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_174490:
    // 0x174490: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x174490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_174494:
    // 0x174494: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x174494u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_174498:
    // 0x174498: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x174498u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
label_17449c:
    // 0x17449c: 0xc05fde8  jal         func_17F7A0
label_1744a0:
    if (ctx->pc == 0x1744A0u) {
        ctx->pc = 0x1744A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17449Cu;
        // 0x1744a0: 0xa3a60002  sb          $a2, 0x2($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1744A4u;
        goto label_1744a4;
    }
    ctx->pc = 0x17449Cu;
    SET_GPR_U32(ctx, 31, 0x1744A4u);
    ctx->pc = 0x1744A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17449Cu;
    // 0x1744a0: 0xa3a60002  sb          $a2, 0x2($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7A0u, 0x17449Cu, 0x1744A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1744A4u;
label_1744a4:
    // 0x1744a4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1744a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1744a8:
    // 0x1744a8: 0xc11b404  jal         func_46D010
label_1744ac:
    if (ctx->pc == 0x1744ACu) {
        ctx->pc = 0x1744ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744A8u;
        // 0x1744ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1744B0u;
        goto label_1744b0;
    }
    ctx->pc = 0x1744A8u;
    SET_GPR_U32(ctx, 31, 0x1744B0u);
    ctx->pc = 0x1744ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1744A8u;
    // 0x1744ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x1744A8u, 0x1744B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1744B0u;
label_1744b0:
    // 0x1744b0: 0x8e4402b8  lw          $a0, 0x2B8($s2)
    ctx->pc = 0x1744b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_1744b4:
    // 0x1744b4: 0xc088bbc  jal         func_222EF0
label_1744b8:
    if (ctx->pc == 0x1744B8u) {
        ctx->pc = 0x1744B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744B4u;
        // 0x1744b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1744BCu;
        goto label_1744bc;
    }
    ctx->pc = 0x1744B4u;
    SET_GPR_U32(ctx, 31, 0x1744BCu);
    ctx->pc = 0x1744B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1744B4u;
    // 0x1744b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x1744B4u, 0x1744BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1744BCu;
label_1744bc:
    // 0x1744bc: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x1744bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_1744c0:
    // 0x1744c0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1744c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_1744c4:
    // 0x1744c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1744c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1744c8:
    // 0x1744c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1744c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1744cc:
    // 0x1744cc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1744ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1744d0:
    // 0x1744d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1744d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1744d4:
    // 0x1744d4: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x1744d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_1744d8:
    // 0x1744d8: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x1744d8u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
label_1744dc:
    // 0x1744dc: 0xc10b1c6  jal         func_42C718
label_1744e0:
    if (ctx->pc == 0x1744E0u) {
        ctx->pc = 0x1744E4u;
        goto label_1744e4;
    }
    ctx->pc = 0x1744DCu;
    SET_GPR_U32(ctx, 31, 0x1744E4u);
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x1744DCu, 0x1744E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1744E4u;
label_1744e4:
    // 0x1744e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1744e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1744e8:
    // 0x1744e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1744e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1744ec:
    // 0x1744ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1744ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1744f0:
    // 0x1744f0: 0x8e05cd4c  lw          $a1, -0x32B4($s0)
    ctx->pc = 0x1744f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_1744f4:
    // 0x1744f4: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x1744f4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_1744f8:
    // 0x1744f8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_1744fc:
    if (ctx->pc == 0x1744FCu) {
        ctx->pc = 0x1744FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744F8u;
        // 0x1744fc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x174500u;
        goto label_174500;
    }
    ctx->pc = 0x1744F8u;
    {
        const bool branch_taken_0x1744f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1744f8) {
            ctx->pc = 0x1744FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1744F8u;
            // 0x1744fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x174500u;
            goto label_174500;
        }
    }
    ctx->pc = 0x174500u;
label_174500:
    // 0x174500: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x174500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_174504:
    // 0x174504: 0x1010  mfhi        $v0
    ctx->pc = 0x174504u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_174508:
    // 0x174508: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x174508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17450c:
    // 0x17450c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17450cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_174510:
    // 0x174510: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x174510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
label_174514:
    // 0x174514: 0xc119604  jal         func_465810
label_174518:
    if (ctx->pc == 0x174518u) {
        ctx->pc = 0x174518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174514u;
        // 0x174518: 0x8c650010  lw          $a1, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17451Cu;
        goto label_17451c;
    }
    ctx->pc = 0x174514u;
    SET_GPR_U32(ctx, 31, 0x17451Cu);
    ctx->pc = 0x174518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174514u;
    // 0x174518: 0x8c650010  lw          $a1, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465810u, 0x174514u, 0x17451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17451Cu;
label_17451c:
    // 0x17451c: 0x8e4402b8  lw          $a0, 0x2B8($s2)
    ctx->pc = 0x17451cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_174520:
    // 0x174520: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x174520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_174524:
    // 0x174524: 0xc460cc64  lwc1        $f0, -0x339C($v1)
    ctx->pc = 0x174524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_174528:
    // 0x174528: 0xc4810334  lwc1        $f1, 0x334($a0)
    ctx->pc = 0x174528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17452c:
    // 0x17452c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17452cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_174530:
    // 0x174530: 0x0  nop
    ctx->pc = 0x174530u;
    // NOP
label_174534:
    // 0x174534: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_174538:
    if (ctx->pc == 0x174538u) {
        ctx->pc = 0x174538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174534u;
        // 0x174538: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17453Cu;
        goto label_17453c;
    }
    ctx->pc = 0x174534u;
    {
        const bool branch_taken_0x174534 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x174538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174534u;
        // 0x174538: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174534) {
            ctx->pc = 0x174590u;
            goto label_174590;
        }
    }
    ctx->pc = 0x17453Cu;
label_17453c:
    // 0x17453c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17453cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_174540:
    // 0x174540: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x174540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_174544:
    // 0x174544: 0xc442cc60  lwc1        $f2, -0x33A0($v0)
    ctx->pc = 0x174544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_174548:
    // 0x174548: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x174548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_17454c:
    // 0x17454c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x17454cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_174550:
    // 0x174550: 0xc464cc68  lwc1        $f4, -0x3398($v1)
    ctx->pc = 0x174550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_174554:
    // 0x174554: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x174554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_174558:
    // 0x174558: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x174558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
label_17455c:
    // 0x17455c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17455cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_174560:
    // 0x174560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_174564:
    // 0x174564: 0x0  nop
    ctx->pc = 0x174564u;
    // NOP
label_174568:
    // 0x174568: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17456c:
    // 0x17456c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x17456cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_174570:
    // 0x174570: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x174570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_174574:
    // 0x174574: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x174574u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_174578:
    // 0x174578: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x174578u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
label_17457c:
    // 0x17457c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17457cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_174580:
    // 0x174580: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x174580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_174584:
    // 0x174584: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174584u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_174588:
    // 0x174588: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x174588u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_17458c:
    // 0x17458c: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x17458cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_174590:
    // 0x174590: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x174590u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_174594:
    // 0x174594: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x174594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_174598:
    // 0x174598: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x174598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_17459c:
    // 0x17459c: 0x261003e8  addiu       $s0, $s0, 0x3E8
    ctx->pc = 0x17459cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1000));
label_1745a0:
    // 0x1745a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1745a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1745a4:
    // 0x1745a4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1745a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1745a8:
    // 0x1745a8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1745a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1745ac:
    // 0x1745ac: 0x40f809  jalr        $v0
label_1745b0:
    if (ctx->pc == 0x1745B0u) {
        ctx->pc = 0x1745B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745ACu;
        // 0x1745b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1745B4u;
        goto label_1745b4;
    }
    ctx->pc = 0x1745ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1745B4u);
        ctx->pc = 0x1745B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745ACu;
        // 0x1745b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1745ACu, 0x1745B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1745B4u;
label_1745b4:
    // 0x1745b4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1745b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1745b8:
    // 0x1745b8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1745bc:
    if (ctx->pc == 0x1745BCu) {
        ctx->pc = 0x1745BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745B8u;
        // 0x1745bc: 0x8e25b8b8  lw          $a1, -0x4748($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1745C0u;
        goto label_1745c0;
    }
    ctx->pc = 0x1745B8u;
    {
        const bool branch_taken_0x1745b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1745BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745B8u;
        // 0x1745bc: 0x8e25b8b8  lw          $a1, -0x4748($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745b8) {
            ctx->pc = 0x174640u;
            goto label_174640;
        }
    }
    ctx->pc = 0x1745C0u;
label_1745c0:
    // 0x1745c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1745c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1745c4:
    // 0x1745c4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1745c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1745c8:
    // 0x1745c8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1745c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1745cc:
    // 0x1745cc: 0x40f809  jalr        $v0
label_1745d0:
    if (ctx->pc == 0x1745D0u) {
        ctx->pc = 0x1745D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745CCu;
        // 0x1745d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1745D4u;
        goto label_1745d4;
    }
    ctx->pc = 0x1745CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1745D4u);
        ctx->pc = 0x1745D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745CCu;
        // 0x1745d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1745CCu, 0x1745D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1745D4u;
label_1745d4:
    // 0x1745d4: 0x8ea3002c  lw          $v1, 0x2C($s5)
    ctx->pc = 0x1745d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_1745d8:
    // 0x1745d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1745d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1745dc:
    // 0x1745dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1745e0:
    if (ctx->pc == 0x1745E0u) {
        ctx->pc = 0x1745E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745DCu;
        // 0x1745e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1745E4u;
        goto label_1745e4;
    }
    ctx->pc = 0x1745DCu;
    {
        const bool branch_taken_0x1745dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1745E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745DCu;
        // 0x1745e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745dc) {
            ctx->pc = 0x1745F8u;
            goto label_1745f8;
        }
    }
    ctx->pc = 0x1745E4u;
label_1745e4:
    // 0x1745e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1745e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1745e8:
    // 0x1745e8: 0x0  nop
    ctx->pc = 0x1745e8u;
    // NOP
label_1745ec:
    // 0x1745ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1745ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1745f0:
    // 0x1745f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1745f4:
    if (ctx->pc == 0x1745F4u) {
        ctx->pc = 0x1745F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745F0u;
        // 0x1745f4: 0x93a20003  lbu         $v0, 0x3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1745F8u;
        goto label_1745f8;
    }
    ctx->pc = 0x1745F0u;
    {
        const bool branch_taken_0x1745f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1745F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745F0u;
        // 0x1745f4: 0x93a20003  lbu         $v0, 0x3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745f0) {
            ctx->pc = 0x174614u;
            goto label_174614;
        }
    }
    ctx->pc = 0x1745F8u;
label_1745f8:
    // 0x1745f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1745f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1745fc:
    // 0x1745fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1745fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_174600:
    // 0x174600: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x174600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_174604:
    // 0x174604: 0x0  nop
    ctx->pc = 0x174604u;
    // NOP
label_174608:
    // 0x174608: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x174608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_17460c:
    // 0x17460c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x17460cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_174610:
    // 0x174610: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x174610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_174614:
    // 0x174614: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x174614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_174618:
    // 0x174618: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x174618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_17461c:
    // 0x17461c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17461cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_174620:
    // 0x174620: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x174620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_174624:
    // 0x174624: 0x0  nop
    ctx->pc = 0x174624u;
    // NOP
label_174628:
    // 0x174628: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x174628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17462c:
    // 0x17462c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17462cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_174630:
    // 0x174630: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x174630u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_174634:
    // 0x174634: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174634u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_174638:
    // 0x174638: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x174638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_17463c:
    // 0x17463c: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x17463cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_174640:
    // 0x174640: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x174640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_174644:
    // 0x174644: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x174644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_174648:
    // 0x174648: 0xaa620007  swl         $v0, 0x7($s3)
    ctx->pc = 0x174648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_17464c:
    // 0x17464c: 0xba620004  swr         $v0, 0x4($s3)
    ctx->pc = 0x17464cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_174650:
    // 0x174650: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x174650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_174654:
    // 0x174654: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x174654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_174658:
    // 0x174658: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x174658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_17465c:
    // 0x17465c: 0x8c626b80  lw          $v0, 0x6B80($v1)
    ctx->pc = 0x17465cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27520)));
label_174660:
    // 0x174660: 0x8c85489c  lw          $a1, 0x489C($a0)
    ctx->pc = 0x174660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_174664:
    // 0x174664: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x174664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_174668:
    // 0x174668: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x174668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17466c:
    // 0x17466c: 0x84a30454  lh          $v1, 0x454($a1)
    ctx->pc = 0x17466cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1108)));
label_174670:
    // 0x174670: 0xdc440028  ld          $a0, 0x28($v0)
    ctx->pc = 0x174670u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 40)));
label_174674:
    // 0x174674: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_174678:
    if (ctx->pc == 0x174678u) {
        ctx->pc = 0x174678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174674u;
        // 0x174678: 0x862024  and         $a0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17467Cu;
        goto label_17467c;
    }
    ctx->pc = 0x174674u;
    {
        const bool branch_taken_0x174674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174674u;
        // 0x174678: 0x862024  and         $a0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174674) {
            ctx->pc = 0x1746A0u;
            goto label_1746a0;
        }
    }
    ctx->pc = 0x17467Cu;
label_17467c:
    // 0x17467c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x17467cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_174680:
    // 0x174680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x174680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_174684:
    // 0x174684: 0x0  nop
    ctx->pc = 0x174684u;
    // NOP
label_174688:
    // 0x174688: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x174688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17468c:
    // 0x17468c: 0x0  nop
    ctx->pc = 0x17468cu;
    // NOP
label_174690:
    // 0x174690: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_174694:
    if (ctx->pc == 0x174694u) {
        ctx->pc = 0x174694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174690u;
        // 0x174694: 0x64840045  daddiu      $a0, $a0, 0x45 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)69);
        ctx->in_delay_slot = false;
        ctx->pc = 0x174698u;
        goto label_174698;
    }
    ctx->pc = 0x174690u;
    {
        const bool branch_taken_0x174690 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x174690) {
            ctx->pc = 0x174694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174690u;
            // 0x174694: 0x64840045  daddiu      $a0, $a0, 0x45 (Delay Slot)
            SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)69);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1746A4u;
            goto label_1746a4;
        }
    }
    ctx->pc = 0x174698u;
label_174698:
    // 0x174698: 0x10000002  b           . + 4 + (0x2 << 2)
label_17469c:
    if (ctx->pc == 0x17469Cu) {
        ctx->pc = 0x17469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174698u;
        // 0x17469c: 0x64840044  daddiu      $a0, $a0, 0x44 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)68);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1746A0u;
        goto label_1746a0;
    }
    ctx->pc = 0x174698u;
    {
        const bool branch_taken_0x174698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174698u;
        // 0x17469c: 0x64840044  daddiu      $a0, $a0, 0x44 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)68);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174698) {
            ctx->pc = 0x1746A4u;
            goto label_1746a4;
        }
    }
    ctx->pc = 0x1746A0u;
label_1746a0:
    // 0x1746a0: 0x64840045  daddiu      $a0, $a0, 0x45
    ctx->pc = 0x1746a0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)69);
label_1746a4:
    // 0x1746a4: 0xfc440028  sd          $a0, 0x28($v0)
    ctx->pc = 0x1746a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 4));
label_1746a8:
    // 0x1746a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1746a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1746ac:
    // 0x1746ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1746acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1746b0:
    // 0x1746b0: 0xc05dc90  jal         func_177240
label_1746b4:
    if (ctx->pc == 0x1746B4u) {
        ctx->pc = 0x1746B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746B0u;
        // 0x1746b4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1746B8u;
        goto label_1746b8;
    }
    ctx->pc = 0x1746B0u;
    SET_GPR_U32(ctx, 31, 0x1746B8u);
    ctx->pc = 0x1746B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1746B0u;
    // 0x1746b4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177240u, 0x1746B0u, 0x1746B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1746B8u;
label_1746b8:
    // 0x1746b8: 0xc11a45e  jal         func_469178
label_1746bc:
    if (ctx->pc == 0x1746BCu) {
        ctx->pc = 0x1746BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746B8u;
        // 0x1746bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1746C0u;
        goto label_1746c0;
    }
    ctx->pc = 0x1746B8u;
    SET_GPR_U32(ctx, 31, 0x1746C0u);
    ctx->pc = 0x1746BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1746B8u;
    // 0x1746bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x1746B8u, 0x1746C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1746C0u;
label_1746c0:
    // 0x1746c0: 0x8e4402b8  lw          $a0, 0x2B8($s2)
    ctx->pc = 0x1746c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_1746c4:
    // 0x1746c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1746c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1746c8:
    // 0x1746c8: 0xc4940334  lwc1        $f20, 0x334($a0)
    ctx->pc = 0x1746c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1746cc:
    // 0x1746cc: 0xc087502  jal         func_21D408
label_1746d0:
    if (ctx->pc == 0x1746D0u) {
        ctx->pc = 0x1746D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746CCu;
        // 0x1746d0: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1746D4u;
        goto label_1746d4;
    }
    ctx->pc = 0x1746CCu;
    SET_GPR_U32(ctx, 31, 0x1746D4u);
    ctx->pc = 0x1746D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1746CCu;
    // 0x1746d0: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1746CCu, 0x1746D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1746D4u;
label_1746d4:
    // 0x1746d4: 0x904702d4  lbu         $a3, 0x2D4($v0)
    ctx->pc = 0x1746d4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_1746d8:
    // 0x1746d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1746d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1746dc:
    // 0x1746dc: 0x8e4902b8  lw          $t1, 0x2B8($s2)
    ctx->pc = 0x1746dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_1746e0:
    // 0x1746e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1746e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1746e4:
    // 0x1746e4: 0x8e24cce4  lw          $a0, -0x331C($s1)
    ctx->pc = 0x1746e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954212)));
label_1746e8:
    // 0x1746e8: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x1746e8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1746ec:
    // 0x1746ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1746ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1746f0:
    // 0x1746f0: 0xc05f784  jal         func_17DE10
label_1746f4:
    if (ctx->pc == 0x1746F4u) {
        ctx->pc = 0x1746F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746F0u;
        // 0x1746f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1746F8u;
        goto label_1746f8;
    }
    ctx->pc = 0x1746F0u;
    SET_GPR_U32(ctx, 31, 0x1746F8u);
    ctx->pc = 0x1746F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1746F0u;
    // 0x1746f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DE10u, 0x1746F0u, 0x1746F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1746F8u;
label_1746f8:
    // 0x1746f8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1746f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1746fc:
    // 0x1746fc: 0x8c62cc54  lw          $v0, -0x33AC($v1)
    ctx->pc = 0x1746fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954068)));
label_174700:
    // 0x174700: 0x40f809  jalr        $v0
label_174704:
    if (ctx->pc == 0x174704u) {
        ctx->pc = 0x174704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174700u;
        // 0x174704: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174708u;
        goto label_174708;
    }
    ctx->pc = 0x174700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174708u);
        ctx->pc = 0x174704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174700u;
        // 0x174704: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174700u, 0x174708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x174708u;
label_174708:
    // 0x174708: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x174708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17470c:
    // 0x17470c: 0xc11b404  jal         func_46D010
label_174710:
    if (ctx->pc == 0x174710u) {
        ctx->pc = 0x174710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17470Cu;
        // 0x174710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174714u;
        goto label_174714;
    }
    ctx->pc = 0x17470Cu;
    SET_GPR_U32(ctx, 31, 0x174714u);
    ctx->pc = 0x174710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17470Cu;
    // 0x174710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x17470Cu, 0x174714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174714u;
label_174714:
    // 0x174714: 0x8fc3b734  lw          $v1, -0x48CC($fp)
    ctx->pc = 0x174714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948660)));
label_174718:
    // 0x174718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17471c:
    // 0x17471c: 0x8e4402b4  lw          $a0, 0x2B4($s2)
    ctx->pc = 0x17471cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 692)));
label_174720:
    // 0x174720: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x174720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_174724:
    // 0x174724: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_174728:
    if (ctx->pc == 0x174728u) {
        ctx->pc = 0x174728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174724u;
        // 0x174728: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17472Cu;
        goto label_17472c;
    }
    ctx->pc = 0x174724u;
    {
        const bool branch_taken_0x174724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x174728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174724u;
        // 0x174728: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174724) {
            ctx->pc = 0x174758u;
            goto label_174758;
        }
    }
    ctx->pc = 0x17472Cu;
label_17472c:
    // 0x17472c: 0x2ec20002  sltiu       $v0, $s6, 0x2
    ctx->pc = 0x17472cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_174730:
    // 0x174730: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_174734:
    if (ctx->pc == 0x174734u) {
        ctx->pc = 0x174738u;
        goto label_174738;
    }
    ctx->pc = 0x174730u;
    {
        const bool branch_taken_0x174730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174730) {
            ctx->pc = 0x174758u;
            goto label_174758;
        }
    }
    ctx->pc = 0x174738u;
label_174738:
    // 0x174738: 0x8e4402b8  lw          $a0, 0x2B8($s2)
    ctx->pc = 0x174738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_17473c:
    // 0x17473c: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x17473cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_174740:
    // 0x174740: 0x384201cc  xori        $v0, $v0, 0x1CC
    ctx->pc = 0x174740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)460);
label_174744:
    // 0x174744: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_174748:
    if (ctx->pc == 0x174748u) {
        ctx->pc = 0x17474Cu;
        goto label_17474c;
    }
    ctx->pc = 0x174744u;
    {
        const bool branch_taken_0x174744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174744) {
            ctx->pc = 0x174758u;
            goto label_174758;
        }
    }
    ctx->pc = 0x17474Cu;
label_17474c:
    // 0x17474c: 0xc088f04  jal         func_223C10
label_174750:
    if (ctx->pc == 0x174750u) {
        ctx->pc = 0x174754u;
        goto label_174754;
    }
    ctx->pc = 0x17474Cu;
    SET_GPR_U32(ctx, 31, 0x174754u);
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x17474Cu, 0x174754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174754u;
label_174754:
    // 0x174754: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x174754u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_174758:
    // 0x174758: 0x10a000d9  beqz        $a1, . + 4 + (0xD9 << 2)
label_17475c:
    if (ctx->pc == 0x17475Cu) {
        ctx->pc = 0x17475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174758u;
        // 0x17475c: 0x8ee4cd4c  lw          $a0, -0x32B4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174760u;
        goto label_174760;
    }
    ctx->pc = 0x174758u;
    {
        const bool branch_taken_0x174758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174758u;
        // 0x17475c: 0x8ee4cd4c  lw          $a0, -0x32B4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174758) {
            ctx->pc = 0x174AC0u;
            goto label_174ac0;
        }
    }
    ctx->pc = 0x174760u;
label_174760:
    // 0x174760: 0xc0616ac  jal         func_185AB0
label_174764:
    if (ctx->pc == 0x174764u) {
        ctx->pc = 0x174764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174760u;
        // 0x174764: 0x26c50009  addiu       $a1, $s6, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174768u;
        goto label_174768;
    }
    ctx->pc = 0x174760u;
    SET_GPR_U32(ctx, 31, 0x174768u);
    ctx->pc = 0x174764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174760u;
    // 0x174764: 0x26c50009  addiu       $a1, $s6, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x174760u, 0x174768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174768u;
label_174768:
    // 0x174768: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x174768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17476c:
    // 0x17476c: 0x126000d5  beqz        $s3, . + 4 + (0xD5 << 2)
label_174770:
    if (ctx->pc == 0x174770u) {
        ctx->pc = 0x174770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17476Cu;
        // 0x174770: 0x7bb00290  lq          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174774u;
        goto label_174774;
    }
    ctx->pc = 0x17476Cu;
    {
        const bool branch_taken_0x17476c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x174770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17476Cu;
        // 0x174770: 0x7bb00290  lq          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17476c) {
            ctx->pc = 0x174AC4u;
            goto label_174ac4;
        }
    }
    ctx->pc = 0x174774u;
label_174774:
    // 0x174774: 0x92620011  lbu         $v0, 0x11($s3)
    ctx->pc = 0x174774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
label_174778:
    // 0x174778: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
label_17477c:
    if (ctx->pc == 0x17477Cu) {
        ctx->pc = 0x17477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174778u;
        // 0x17477c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174780u;
        goto label_174780;
    }
    ctx->pc = 0x174778u;
    {
        const bool branch_taken_0x174778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174778u;
        // 0x17477c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174778) {
            ctx->pc = 0x174AC8u;
            goto label_174ac8;
        }
    }
    ctx->pc = 0x174780u;
label_174780:
    // 0x174780: 0x8e4202b8  lw          $v0, 0x2B8($s2)
    ctx->pc = 0x174780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_174784:
    // 0x174784: 0x78450240  lq          $a1, 0x240($v0)
    ctx->pc = 0x174784u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 576)));
label_174788:
    // 0x174788: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17478c:
    // 0x17478c: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x17478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
label_174790:
    // 0x174790: 0x78430230  lq          $v1, 0x230($v0)
    ctx->pc = 0x174790u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 560)));
label_174794:
    // 0x174794: 0xc089f4a  jal         func_227D28
label_174798:
    if (ctx->pc == 0x174798u) {
        ctx->pc = 0x174798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174794u;
        // 0x174798: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17479Cu;
        goto label_17479c;
    }
    ctx->pc = 0x174794u;
    SET_GPR_U32(ctx, 31, 0x17479Cu);
    ctx->pc = 0x174798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174794u;
    // 0x174798: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x174794u, 0x17479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17479Cu;
label_17479c:
    // 0x17479c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1747a0:
    if (ctx->pc == 0x1747A0u) {
        ctx->pc = 0x1747A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17479Cu;
        // 0x1747a0: 0x27b10070  addiu       $s1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1747A4u;
        goto label_1747a4;
    }
    ctx->pc = 0x17479Cu;
    {
        const bool branch_taken_0x17479c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1747A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17479Cu;
        // 0x1747a0: 0x27b10070  addiu       $s1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17479c) {
            ctx->pc = 0x174870u;
            goto label_174870;
        }
    }
    ctx->pc = 0x1747A4u;
label_1747a4:
    // 0x1747a4: 0x8e4602b8  lw          $a2, 0x2B8($s2)
    ctx->pc = 0x1747a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_1747a8:
    // 0x1747a8: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x1747a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1747ac:
    // 0x1747ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1747acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1747b0:
    // 0x1747b0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1747b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1747b4:
    // 0x1747b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1747b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1747b8:
    // 0x1747b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1747b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1747bc:
    // 0x1747bc: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x1747bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1747c0:
    // 0x1747c0: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1747c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1747c4:
    // 0x1747c4: 0x60f809  jalr        $v1
label_1747c8:
    if (ctx->pc == 0x1747C8u) {
        ctx->pc = 0x1747C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1747C4u;
        // 0x1747c8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1747CCu;
        goto label_1747cc;
    }
    ctx->pc = 0x1747C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1747CCu);
        ctx->pc = 0x1747C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1747C4u;
        // 0x1747c8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1747C4u, 0x1747CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1747CCu;
label_1747cc:
    // 0x1747cc: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x1747ccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1747d0:
    // 0x1747d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1747d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1747d4:
    // 0x1747d4: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x1747d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_1747d8:
    // 0x1747d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1747d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1747dc:
    // 0x1747dc: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x1747dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
label_1747e0:
    // 0x1747e0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1747e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1747e4:
    // 0x1747e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1747e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1747e8:
    // 0x1747e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1747e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1747ec:
    // 0x1747ec: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1747ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1747f0:
    // 0x1747f0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1747f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1747f4:
    // 0x1747f4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1747f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1747f8:
    // 0x1747f8: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x1747f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_1747fc:
    // 0x1747fc: 0xc136b24  jal         func_4DAC90
label_174800:
    if (ctx->pc == 0x174800u) {
        ctx->pc = 0x174800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1747FCu;
        // 0x174800: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x174804u;
        goto label_174804;
    }
    ctx->pc = 0x1747FCu;
    SET_GPR_U32(ctx, 31, 0x174804u);
    ctx->pc = 0x174800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1747FCu;
    // 0x174800: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1747FCu, 0x174804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174804u;
label_174804:
    // 0x174804: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x174804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_174808:
    // 0x174808: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x174808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_17480c:
    // 0x17480c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17480cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_174810:
    // 0x174810: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x174810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_174814:
    // 0x174814: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x174814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_174818:
    // 0x174818: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x174818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_17481c:
    // 0x17481c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17481cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_174820:
    // 0x174820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174824:
    // 0x174824: 0xc1036e2  jal         func_40DB88
label_174828:
    if (ctx->pc == 0x174828u) {
        ctx->pc = 0x174828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174824u;
        // 0x174828: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17482Cu;
        goto label_17482c;
    }
    ctx->pc = 0x174824u;
    SET_GPR_U32(ctx, 31, 0x17482Cu);
    ctx->pc = 0x174828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174824u;
    // 0x174828: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x174824u, 0x17482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17482Cu;
label_17482c:
    // 0x17482c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_174830:
    // 0x174830: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_174834:
    if (ctx->pc == 0x174834u) {
        ctx->pc = 0x174834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174830u;
        // 0x174834: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x174838u;
        goto label_174838;
    }
    ctx->pc = 0x174830u;
    {
        const bool branch_taken_0x174830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174830u;
        // 0x174834: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x174830) {
            ctx->pc = 0x174870u;
            goto label_174870;
        }
    }
    ctx->pc = 0x174838u;
label_174838:
    // 0x174838: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x174838u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17483c:
    // 0x17483c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x17483cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_174840:
    // 0x174840: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x174840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_174844:
    // 0x174844: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x174844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_174848:
    // 0x174848: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x174848u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_17484c:
    // 0x17484c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17484cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_174850:
    // 0x174850: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x174850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_174854:
    // 0x174854: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x174854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_174858:
    // 0x174858: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x174858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_17485c:
    // 0x17485c: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x17485cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_174860:
    // 0x174860: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x174860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_174864:
    // 0x174864: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x174864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_174868:
    // 0x174868: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x174868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_17486c:
    // 0x17486c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x17486cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_174870:
    // 0x174870: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x174870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_174874:
    // 0x174874: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x174874u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_174878:
    // 0x174878: 0x24631720  addiu       $v1, $v1, 0x1720
    ctx->pc = 0x174878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5920));
label_17487c:
    // 0x17487c: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x17487cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_174880:
    // 0x174880: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x174880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_174884:
    // 0x174884: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x174884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_174888:
    // 0x174888: 0x7a070000  lq          $a3, 0x0($s0)
    ctx->pc = 0x174888u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_17488c:
    // 0x17488c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x17488cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_174890:
    // 0x174890: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x174890u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_174894:
    // 0x174894: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x174894u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_174898:
    // 0x174898: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x174898u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_17489c:
    // 0x17489c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x17489cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1748a0:
    // 0x1748a0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1748a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1748a4:
    // 0x1748a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1748a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1748a8:
    // 0x1748a8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x1748a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1748ac:
    // 0x1748ac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1748acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1748b0:
    // 0x1748b0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1748b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1748b4:
    // 0x1748b4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1748b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1748b8:
    // 0x1748b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1748b8u;
    // VWAITQ (Q already resolved in this runtime)
label_1748bc:
    // 0x1748bc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1748bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1748c0:
    // 0x1748c0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1748c0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_1748c4:
    // 0x1748c4: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1748c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_1748c8:
    // 0x1748c8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1748c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1748cc:
    // 0x1748cc: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1748ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_1748d0:
    // 0x1748d0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1748d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1748d4:
    // 0x1748d4: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x1748d4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1748d8:
    // 0x1748d8: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x1748d8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
label_1748dc:
    // 0x1748dc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1748dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1748e0:
    // 0x1748e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1748e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1748e4:
    // 0x1748e4: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x1748e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
label_1748e8:
    // 0x1748e8: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x1748e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_1748ec:
    // 0x1748ec: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x1748ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_1748f0:
    // 0x1748f0: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x1748f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_1748f4:
    // 0x1748f4: 0xc060b58  jal         func_182D60
label_1748f8:
    if (ctx->pc == 0x1748F8u) {
        ctx->pc = 0x1748F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1748F4u;
        // 0x1748f8: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1748FCu;
        goto label_1748fc;
    }
    ctx->pc = 0x1748F4u;
    SET_GPR_U32(ctx, 31, 0x1748FCu);
    ctx->pc = 0x1748F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1748F4u;
    // 0x1748f8: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x1748F4u, 0x1748FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1748FCu;
label_1748fc:
    // 0x1748fc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1748fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_174900:
    // 0x174900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174904:
    // 0x174904: 0xc06078e  jal         func_181E38
label_174908:
    if (ctx->pc == 0x174908u) {
        ctx->pc = 0x174908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174904u;
        // 0x174908: 0x34a50028  ori         $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17490Cu;
        goto label_17490c;
    }
    ctx->pc = 0x174904u;
    SET_GPR_U32(ctx, 31, 0x17490Cu);
    ctx->pc = 0x174908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174904u;
    // 0x174908: 0x34a50028  ori         $a1, $a1, 0x28 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x174904u, 0x17490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17490Cu;
label_17490c:
    // 0x17490c: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x17490cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_174910:
    // 0x174910: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x174910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_174914:
    // 0x174914: 0x6847000f  ldl         $a3, 0xF($v0)
    ctx->pc = 0x174914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_174918:
    // 0x174918: 0x6c470008  ldr         $a3, 0x8($v0)
    ctx->pc = 0x174918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_17491c:
    // 0x17491c: 0xb3a6012b  sdl         $a2, 0x12B($sp)
    ctx->pc = 0x17491cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 299); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_174920:
    // 0x174920: 0xb7a60124  sdr         $a2, 0x124($sp)
    ctx->pc = 0x174920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_174924:
    // 0x174924: 0xb3a70133  sdl         $a3, 0x133($sp)
    ctx->pc = 0x174924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_174928:
    // 0x174928: 0xb7a7012c  sdr         $a3, 0x12C($sp)
    ctx->pc = 0x174928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17492c:
    // 0x17492c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x17492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_174930:
    // 0x174930: 0xa3a301f0  sb          $v1, 0x1F0($sp)
    ctx->pc = 0x174930u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 3));
label_174934:
    // 0x174934: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x174934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_174938:
    // 0x174938: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x174938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_17493c:
    // 0x17493c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x17493cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_174940:
    // 0x174940: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x174940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 4));
label_174944:
    // 0x174944: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x174944u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_174948:
    // 0x174948: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x174948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_17494c:
    // 0x17494c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x17494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_174950:
    // 0x174950: 0x8e4602b8  lw          $a2, 0x2B8($s2)
    ctx->pc = 0x174950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_174954:
    // 0x174954: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x174954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
label_174958:
    // 0x174958: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x174958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17495c:
    // 0x17495c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x17495cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_174960:
    // 0x174960: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x174960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_174964:
    // 0x174964: 0x40f809  jalr        $v0
label_174968:
    if (ctx->pc == 0x174968u) {
        ctx->pc = 0x174968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174964u;
        // 0x174968: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17496Cu;
        goto label_17496c;
    }
    ctx->pc = 0x174964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17496Cu);
        ctx->pc = 0x174968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174964u;
        // 0x174968: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174964u, 0x17496Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17496Cu;
label_17496c:
    // 0x17496c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x17496cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_174970:
    // 0x174970: 0xc0cd940  jal         func_336500
label_174974:
    if (ctx->pc == 0x174974u) {
        ctx->pc = 0x174974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174970u;
        // 0x174974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174978u;
        goto label_174978;
    }
    ctx->pc = 0x174970u;
    SET_GPR_U32(ctx, 31, 0x174978u);
    ctx->pc = 0x174974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174970u;
    // 0x174974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x174970u, 0x174978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174978u;
label_174978:
    // 0x174978: 0x8e4202b8  lw          $v0, 0x2B8($s2)
    ctx->pc = 0x174978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_17497c:
    // 0x17497c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_174980:
    // 0x174980: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x174980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_174984:
    // 0x174984: 0xc136b24  jal         func_4DAC90
label_174988:
    if (ctx->pc == 0x174988u) {
        ctx->pc = 0x174988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174984u;
        // 0x174988: 0xc44c0580  lwc1        $f12, 0x580($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17498Cu;
        goto label_17498c;
    }
    ctx->pc = 0x174984u;
    SET_GPR_U32(ctx, 31, 0x17498Cu);
    ctx->pc = 0x174988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174984u;
    // 0x174988: 0xc44c0580  lwc1        $f12, 0x580($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x174984u, 0x17498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17498Cu;
label_17498c:
    // 0x17498c: 0x8e4202b8  lw          $v0, 0x2B8($s2)
    ctx->pc = 0x17498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_174990:
    // 0x174990: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x174990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_174994:
    // 0x174994: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x174994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174998:
    // 0x174998: 0xc136b24  jal         func_4DAC90
label_17499c:
    if (ctx->pc == 0x17499Cu) {
        ctx->pc = 0x17499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174998u;
        // 0x17499c: 0xc44c0584  lwc1        $f12, 0x584($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1749A0u;
        goto label_1749a0;
    }
    ctx->pc = 0x174998u;
    SET_GPR_U32(ctx, 31, 0x1749A0u);
    ctx->pc = 0x17499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174998u;
    // 0x17499c: 0xc44c0584  lwc1        $f12, 0x584($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x174998u, 0x1749A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1749A0u;
label_1749a0:
    // 0x1749a0: 0x8e4202b8  lw          $v0, 0x2B8($s2)
    ctx->pc = 0x1749a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_1749a4:
    // 0x1749a4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1749a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1749a8:
    // 0x1749a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1749a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1749ac:
    // 0x1749ac: 0xc136b24  jal         func_4DAC90
label_1749b0:
    if (ctx->pc == 0x1749B0u) {
        ctx->pc = 0x1749B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749ACu;
        // 0x1749b0: 0xc44c0588  lwc1        $f12, 0x588($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1749B4u;
        goto label_1749b4;
    }
    ctx->pc = 0x1749ACu;
    SET_GPR_U32(ctx, 31, 0x1749B4u);
    ctx->pc = 0x1749B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1749ACu;
    // 0x1749b0: 0xc44c0588  lwc1        $f12, 0x588($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1749ACu, 0x1749B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1749B4u;
label_1749b4:
    // 0x1749b4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1749b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1749b8:
    // 0x1749b8: 0x27ac00c0  addiu       $t4, $sp, 0xC0
    ctx->pc = 0x1749b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1749bc:
    // 0x1749bc: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1749bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1749c0:
    // 0x1749c0: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1749c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1749c4:
    // 0x1749c4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1749c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_1749c8:
    // 0x1749c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1749c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1749cc:
    // 0x1749cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1749ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1749d0:
    // 0x1749d0: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x1749d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1749d4:
    // 0x1749d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1749d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1749d8:
    // 0x1749d8: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1749d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1749dc:
    // 0x1749dc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1749dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1749e0:
    // 0x1749e0: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1749e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1749e4:
    // 0x1749e4: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1749e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1749e8:
    // 0x1749e8: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1749e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1749ec:
    // 0x1749ec: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x1749ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1749f0:
    // 0x1749f0: 0x4be320bd  vmadday.xyzw $ACC, $vf4, $vf3y
    ctx->pc = 0x1749f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1749f4:
    // 0x1749f4: 0x4be310be  vmaddaz.xyzw $ACC, $vf2, $vf3z
    ctx->pc = 0x1749f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1749f8:
    // 0x1749f8: 0x4be308cb  vmaddw.xyzw $vf3, $vf1, $vf3w
    ctx->pc = 0x1749f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1749fc:
    // 0x1749fc: 0xfba301e0  sqc2        $vf3, 0x1E0($sp)
    ctx->pc = 0x1749fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[3]));
label_174a00:
    // 0x174a00: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x174a00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_174a04:
    // 0x174a04: 0x481fff2  bgez        $a0, . + 4 + (-0xE << 2)
label_174a08:
    if (ctx->pc == 0x174A08u) {
        ctx->pc = 0x174A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A04u;
        // 0x174a08: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174A0Cu;
        goto label_174a0c;
    }
    ctx->pc = 0x174A04u;
    {
        const bool branch_taken_0x174a04 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x174A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A04u;
        // 0x174a08: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a04) {
            ctx->pc = 0x1749D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1749d0;
        }
    }
    ctx->pc = 0x174A0Cu;
label_174a0c:
    // 0x174a0c: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x174a0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_174a10:
    // 0x174a10: 0x7ba301b0  lq          $v1, 0x1B0($sp)
    ctx->pc = 0x174a10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_174a14:
    // 0x174a14: 0x7ba401c0  lq          $a0, 0x1C0($sp)
    ctx->pc = 0x174a14u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_174a18:
    // 0x174a18: 0x7ba501d0  lq          $a1, 0x1D0($sp)
    ctx->pc = 0x174a18u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_174a1c:
    // 0x174a1c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x174a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_174a20:
    // 0x174a20: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x174a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_174a24:
    // 0x174a24: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x174a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
label_174a28:
    // 0x174a28: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x174a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
label_174a2c:
    // 0x174a2c: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x174a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
label_174a30:
    // 0x174a30: 0x7fa30170  sq          $v1, 0x170($sp)
    ctx->pc = 0x174a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 3));
label_174a34:
    // 0x174a34: 0x7fa40180  sq          $a0, 0x180($sp)
    ctx->pc = 0x174a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 4));
label_174a38:
    // 0x174a38: 0x7fa50190  sq          $a1, 0x190($sp)
    ctx->pc = 0x174a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 5));
label_174a3c:
    // 0x174a3c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x174a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_174a40:
    // 0x174a40: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x174a40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_174a44:
    // 0x174a44: 0x7a280000  lq          $t0, 0x0($s1)
    ctx->pc = 0x174a44u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_174a48:
    // 0x174a48: 0x7a290010  lq          $t1, 0x10($s1)
    ctx->pc = 0x174a48u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_174a4c:
    // 0x174a4c: 0x7a2a0020  lq          $t2, 0x20($s1)
    ctx->pc = 0x174a4cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_174a50:
    // 0x174a50: 0x7a2b0030  lq          $t3, 0x30($s1)
    ctx->pc = 0x174a50u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_174a54:
    // 0x174a54: 0x1074026  xor         $t0, $t0, $a3
    ctx->pc = 0x174a54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
label_174a58:
    // 0x174a58: 0x1274826  xor         $t1, $t1, $a3
    ctx->pc = 0x174a58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
label_174a5c:
    // 0x174a5c: 0x1475026  xor         $t2, $t2, $a3
    ctx->pc = 0x174a5cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 7));
label_174a60:
    // 0x174a60: 0x1675826  xor         $t3, $t3, $a3
    ctx->pc = 0x174a60u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 7));
label_174a64:
    // 0x174a64: 0x700847a9  pexcw       $t0, $t0
    ctx->pc = 0x174a64u;
    SET_GPR_VEC(ctx, 8, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(1,0,3,2)));
label_174a68:
    // 0x174a68: 0x70094fa9  pexcw       $t1, $t1
    ctx->pc = 0x174a68u;
    SET_GPR_VEC(ctx, 9, _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(1,0,3,2)));
label_174a6c:
    // 0x174a6c: 0x700a57a9  pexcw       $t2, $t2
    ctx->pc = 0x174a6cu;
    SET_GPR_VEC(ctx, 10, _mm_shuffle_epi32(GPR_VEC(ctx, 10), _MM_SHUFFLE(1,0,3,2)));
label_174a70:
    // 0x174a70: 0x700b5fa9  pexcw       $t3, $t3
    ctx->pc = 0x174a70u;
    SET_GPR_VEC(ctx, 11, _mm_shuffle_epi32(GPR_VEC(ctx, 11), _MM_SHUFFLE(1,0,3,2)));
label_174a74:
    // 0x174a74: 0x7d880000  sq          $t0, 0x0($t4)
    ctx->pc = 0x174a74u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 8));
label_174a78:
    // 0x174a78: 0x7d890010  sq          $t1, 0x10($t4)
    ctx->pc = 0x174a78u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 16), GPR_VEC(ctx, 9));
label_174a7c:
    // 0x174a7c: 0x7d8a0020  sq          $t2, 0x20($t4)
    ctx->pc = 0x174a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 32), GPR_VEC(ctx, 10));
label_174a80:
    // 0x174a80: 0x7d8b0030  sq          $t3, 0x30($t4)
    ctx->pc = 0x174a80u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 48), GPR_VEC(ctx, 11));
label_174a84:
    // 0x174a84: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x174a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_174a88:
    // 0x174a88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x174a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_174a8c:
    // 0x174a8c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x174a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_174a90:
    // 0x174a90: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x174a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_174a94:
    // 0x174a94: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x174a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_174a98:
    // 0x174a98: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x174a98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_174a9c:
    // 0x174a9c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x174a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_174aa0:
    // 0x174aa0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x174aa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_174aa4:
    // 0x174aa4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x174aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_174aa8:
    // 0x174aa8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x174aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_174aac:
    // 0x174aac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x174aacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_174ab0:
    // 0x174ab0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x174ab0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_174ab4:
    // 0x174ab4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x174ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_174ab8:
    // 0x174ab8: 0xc060b78  jal         func_182DE0
label_174abc:
    if (ctx->pc == 0x174ABCu) {
        ctx->pc = 0x174ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AB8u;
        // 0x174abc: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x174AC0u;
        goto label_174ac0;
    }
    ctx->pc = 0x174AB8u;
    SET_GPR_U32(ctx, 31, 0x174AC0u);
    ctx->pc = 0x174ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174AB8u;
    // 0x174abc: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x174AB8u, 0x174AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AC0u;
label_174ac0:
    // 0x174ac0: 0x7bb00290  lq          $s0, 0x290($sp)
    ctx->pc = 0x174ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_174ac4:
    // 0x174ac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174ac8:
    // 0x174ac8: 0x7bb10280  lq          $s1, 0x280($sp)
    ctx->pc = 0x174ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_174acc:
    // 0x174acc: 0x7bb20270  lq          $s2, 0x270($sp)
    ctx->pc = 0x174accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_174ad0:
    // 0x174ad0: 0x7bb30260  lq          $s3, 0x260($sp)
    ctx->pc = 0x174ad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_174ad4:
    // 0x174ad4: 0x7bb40250  lq          $s4, 0x250($sp)
    ctx->pc = 0x174ad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_174ad8:
    // 0x174ad8: 0x7bb50240  lq          $s5, 0x240($sp)
    ctx->pc = 0x174ad8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_174adc:
    // 0x174adc: 0x7bb60230  lq          $s6, 0x230($sp)
    ctx->pc = 0x174adcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_174ae0:
    // 0x174ae0: 0x7bb70220  lq          $s7, 0x220($sp)
    ctx->pc = 0x174ae0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_174ae4:
    // 0x174ae4: 0x7bbe0210  lq          $fp, 0x210($sp)
    ctx->pc = 0x174ae4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_174ae8:
    // 0x174ae8: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x174ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_174aec:
    // 0x174aec: 0xc7b402a0  lwc1        $f20, 0x2A0($sp)
    ctx->pc = 0x174aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_174af0:
    // 0x174af0: 0x3e00008  jr          $ra
label_174af4:
    if (ctx->pc == 0x174AF4u) {
        ctx->pc = 0x174AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AF0u;
        // 0x174af4: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174AF8u;
        goto label_fallthrough_0x174af0;
    }
    ctx->pc = 0x174AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AF0u;
        // 0x174af4: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x174af0:
    ctx->pc = 0x174AF8u;
}
