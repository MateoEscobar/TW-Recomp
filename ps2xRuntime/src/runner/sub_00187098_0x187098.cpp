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

// Function: sub_00187098
// Address: 0x187098 - 0x187960
void sub_00187098_0x187098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187098_0x187098");
#endif

    switch (ctx->pc) {
        case 0x187098u: goto label_187098;
        case 0x18709cu: goto label_18709c;
        case 0x1870a0u: goto label_1870a0;
        case 0x1870a4u: goto label_1870a4;
        case 0x1870a8u: goto label_1870a8;
        case 0x1870acu: goto label_1870ac;
        case 0x1870b0u: goto label_1870b0;
        case 0x1870b4u: goto label_1870b4;
        case 0x1870b8u: goto label_1870b8;
        case 0x1870bcu: goto label_1870bc;
        case 0x1870c0u: goto label_1870c0;
        case 0x1870c4u: goto label_1870c4;
        case 0x1870c8u: goto label_1870c8;
        case 0x1870ccu: goto label_1870cc;
        case 0x1870d0u: goto label_1870d0;
        case 0x1870d4u: goto label_1870d4;
        case 0x1870d8u: goto label_1870d8;
        case 0x1870dcu: goto label_1870dc;
        case 0x1870e0u: goto label_1870e0;
        case 0x1870e4u: goto label_1870e4;
        case 0x1870e8u: goto label_1870e8;
        case 0x1870ecu: goto label_1870ec;
        case 0x1870f0u: goto label_1870f0;
        case 0x1870f4u: goto label_1870f4;
        case 0x1870f8u: goto label_1870f8;
        case 0x1870fcu: goto label_1870fc;
        case 0x187100u: goto label_187100;
        case 0x187104u: goto label_187104;
        case 0x187108u: goto label_187108;
        case 0x18710cu: goto label_18710c;
        case 0x187110u: goto label_187110;
        case 0x187114u: goto label_187114;
        case 0x187118u: goto label_187118;
        case 0x18711cu: goto label_18711c;
        case 0x187120u: goto label_187120;
        case 0x187124u: goto label_187124;
        case 0x187128u: goto label_187128;
        case 0x18712cu: goto label_18712c;
        case 0x187130u: goto label_187130;
        case 0x187134u: goto label_187134;
        case 0x187138u: goto label_187138;
        case 0x18713cu: goto label_18713c;
        case 0x187140u: goto label_187140;
        case 0x187144u: goto label_187144;
        case 0x187148u: goto label_187148;
        case 0x18714cu: goto label_18714c;
        case 0x187150u: goto label_187150;
        case 0x187154u: goto label_187154;
        case 0x187158u: goto label_187158;
        case 0x18715cu: goto label_18715c;
        case 0x187160u: goto label_187160;
        case 0x187164u: goto label_187164;
        case 0x187168u: goto label_187168;
        case 0x18716cu: goto label_18716c;
        case 0x187170u: goto label_187170;
        case 0x187174u: goto label_187174;
        case 0x187178u: goto label_187178;
        case 0x18717cu: goto label_18717c;
        case 0x187180u: goto label_187180;
        case 0x187184u: goto label_187184;
        case 0x187188u: goto label_187188;
        case 0x18718cu: goto label_18718c;
        case 0x187190u: goto label_187190;
        case 0x187194u: goto label_187194;
        case 0x187198u: goto label_187198;
        case 0x18719cu: goto label_18719c;
        case 0x1871a0u: goto label_1871a0;
        case 0x1871a4u: goto label_1871a4;
        case 0x1871a8u: goto label_1871a8;
        case 0x1871acu: goto label_1871ac;
        case 0x1871b0u: goto label_1871b0;
        case 0x1871b4u: goto label_1871b4;
        case 0x1871b8u: goto label_1871b8;
        case 0x1871bcu: goto label_1871bc;
        case 0x1871c0u: goto label_1871c0;
        case 0x1871c4u: goto label_1871c4;
        case 0x1871c8u: goto label_1871c8;
        case 0x1871ccu: goto label_1871cc;
        case 0x1871d0u: goto label_1871d0;
        case 0x1871d4u: goto label_1871d4;
        case 0x1871d8u: goto label_1871d8;
        case 0x1871dcu: goto label_1871dc;
        case 0x1871e0u: goto label_1871e0;
        case 0x1871e4u: goto label_1871e4;
        case 0x1871e8u: goto label_1871e8;
        case 0x1871ecu: goto label_1871ec;
        case 0x1871f0u: goto label_1871f0;
        case 0x1871f4u: goto label_1871f4;
        case 0x1871f8u: goto label_1871f8;
        case 0x1871fcu: goto label_1871fc;
        case 0x187200u: goto label_187200;
        case 0x187204u: goto label_187204;
        case 0x187208u: goto label_187208;
        case 0x18720cu: goto label_18720c;
        case 0x187210u: goto label_187210;
        case 0x187214u: goto label_187214;
        case 0x187218u: goto label_187218;
        case 0x18721cu: goto label_18721c;
        case 0x187220u: goto label_187220;
        case 0x187224u: goto label_187224;
        case 0x187228u: goto label_187228;
        case 0x18722cu: goto label_18722c;
        case 0x187230u: goto label_187230;
        case 0x187234u: goto label_187234;
        case 0x187238u: goto label_187238;
        case 0x18723cu: goto label_18723c;
        case 0x187240u: goto label_187240;
        case 0x187244u: goto label_187244;
        case 0x187248u: goto label_187248;
        case 0x18724cu: goto label_18724c;
        case 0x187250u: goto label_187250;
        case 0x187254u: goto label_187254;
        case 0x187258u: goto label_187258;
        case 0x18725cu: goto label_18725c;
        case 0x187260u: goto label_187260;
        case 0x187264u: goto label_187264;
        case 0x187268u: goto label_187268;
        case 0x18726cu: goto label_18726c;
        case 0x187270u: goto label_187270;
        case 0x187274u: goto label_187274;
        case 0x187278u: goto label_187278;
        case 0x18727cu: goto label_18727c;
        case 0x187280u: goto label_187280;
        case 0x187284u: goto label_187284;
        case 0x187288u: goto label_187288;
        case 0x18728cu: goto label_18728c;
        case 0x187290u: goto label_187290;
        case 0x187294u: goto label_187294;
        case 0x187298u: goto label_187298;
        case 0x18729cu: goto label_18729c;
        case 0x1872a0u: goto label_1872a0;
        case 0x1872a4u: goto label_1872a4;
        case 0x1872a8u: goto label_1872a8;
        case 0x1872acu: goto label_1872ac;
        case 0x1872b0u: goto label_1872b0;
        case 0x1872b4u: goto label_1872b4;
        case 0x1872b8u: goto label_1872b8;
        case 0x1872bcu: goto label_1872bc;
        case 0x1872c0u: goto label_1872c0;
        case 0x1872c4u: goto label_1872c4;
        case 0x1872c8u: goto label_1872c8;
        case 0x1872ccu: goto label_1872cc;
        case 0x1872d0u: goto label_1872d0;
        case 0x1872d4u: goto label_1872d4;
        case 0x1872d8u: goto label_1872d8;
        case 0x1872dcu: goto label_1872dc;
        case 0x1872e0u: goto label_1872e0;
        case 0x1872e4u: goto label_1872e4;
        case 0x1872e8u: goto label_1872e8;
        case 0x1872ecu: goto label_1872ec;
        case 0x1872f0u: goto label_1872f0;
        case 0x1872f4u: goto label_1872f4;
        case 0x1872f8u: goto label_1872f8;
        case 0x1872fcu: goto label_1872fc;
        case 0x187300u: goto label_187300;
        case 0x187304u: goto label_187304;
        case 0x187308u: goto label_187308;
        case 0x18730cu: goto label_18730c;
        case 0x187310u: goto label_187310;
        case 0x187314u: goto label_187314;
        case 0x187318u: goto label_187318;
        case 0x18731cu: goto label_18731c;
        case 0x187320u: goto label_187320;
        case 0x187324u: goto label_187324;
        case 0x187328u: goto label_187328;
        case 0x18732cu: goto label_18732c;
        case 0x187330u: goto label_187330;
        case 0x187334u: goto label_187334;
        case 0x187338u: goto label_187338;
        case 0x18733cu: goto label_18733c;
        case 0x187340u: goto label_187340;
        case 0x187344u: goto label_187344;
        case 0x187348u: goto label_187348;
        case 0x18734cu: goto label_18734c;
        case 0x187350u: goto label_187350;
        case 0x187354u: goto label_187354;
        case 0x187358u: goto label_187358;
        case 0x18735cu: goto label_18735c;
        case 0x187360u: goto label_187360;
        case 0x187364u: goto label_187364;
        case 0x187368u: goto label_187368;
        case 0x18736cu: goto label_18736c;
        case 0x187370u: goto label_187370;
        case 0x187374u: goto label_187374;
        case 0x187378u: goto label_187378;
        case 0x18737cu: goto label_18737c;
        case 0x187380u: goto label_187380;
        case 0x187384u: goto label_187384;
        case 0x187388u: goto label_187388;
        case 0x18738cu: goto label_18738c;
        case 0x187390u: goto label_187390;
        case 0x187394u: goto label_187394;
        case 0x187398u: goto label_187398;
        case 0x18739cu: goto label_18739c;
        case 0x1873a0u: goto label_1873a0;
        case 0x1873a4u: goto label_1873a4;
        case 0x1873a8u: goto label_1873a8;
        case 0x1873acu: goto label_1873ac;
        case 0x1873b0u: goto label_1873b0;
        case 0x1873b4u: goto label_1873b4;
        case 0x1873b8u: goto label_1873b8;
        case 0x1873bcu: goto label_1873bc;
        case 0x1873c0u: goto label_1873c0;
        case 0x1873c4u: goto label_1873c4;
        case 0x1873c8u: goto label_1873c8;
        case 0x1873ccu: goto label_1873cc;
        case 0x1873d0u: goto label_1873d0;
        case 0x1873d4u: goto label_1873d4;
        case 0x1873d8u: goto label_1873d8;
        case 0x1873dcu: goto label_1873dc;
        case 0x1873e0u: goto label_1873e0;
        case 0x1873e4u: goto label_1873e4;
        case 0x1873e8u: goto label_1873e8;
        case 0x1873ecu: goto label_1873ec;
        case 0x1873f0u: goto label_1873f0;
        case 0x1873f4u: goto label_1873f4;
        case 0x1873f8u: goto label_1873f8;
        case 0x1873fcu: goto label_1873fc;
        case 0x187400u: goto label_187400;
        case 0x187404u: goto label_187404;
        case 0x187408u: goto label_187408;
        case 0x18740cu: goto label_18740c;
        case 0x187410u: goto label_187410;
        case 0x187414u: goto label_187414;
        case 0x187418u: goto label_187418;
        case 0x18741cu: goto label_18741c;
        case 0x187420u: goto label_187420;
        case 0x187424u: goto label_187424;
        case 0x187428u: goto label_187428;
        case 0x18742cu: goto label_18742c;
        case 0x187430u: goto label_187430;
        case 0x187434u: goto label_187434;
        case 0x187438u: goto label_187438;
        case 0x18743cu: goto label_18743c;
        case 0x187440u: goto label_187440;
        case 0x187444u: goto label_187444;
        case 0x187448u: goto label_187448;
        case 0x18744cu: goto label_18744c;
        case 0x187450u: goto label_187450;
        case 0x187454u: goto label_187454;
        case 0x187458u: goto label_187458;
        case 0x18745cu: goto label_18745c;
        case 0x187460u: goto label_187460;
        case 0x187464u: goto label_187464;
        case 0x187468u: goto label_187468;
        case 0x18746cu: goto label_18746c;
        case 0x187470u: goto label_187470;
        case 0x187474u: goto label_187474;
        case 0x187478u: goto label_187478;
        case 0x18747cu: goto label_18747c;
        case 0x187480u: goto label_187480;
        case 0x187484u: goto label_187484;
        case 0x187488u: goto label_187488;
        case 0x18748cu: goto label_18748c;
        case 0x187490u: goto label_187490;
        case 0x187494u: goto label_187494;
        case 0x187498u: goto label_187498;
        case 0x18749cu: goto label_18749c;
        case 0x1874a0u: goto label_1874a0;
        case 0x1874a4u: goto label_1874a4;
        case 0x1874a8u: goto label_1874a8;
        case 0x1874acu: goto label_1874ac;
        case 0x1874b0u: goto label_1874b0;
        case 0x1874b4u: goto label_1874b4;
        case 0x1874b8u: goto label_1874b8;
        case 0x1874bcu: goto label_1874bc;
        case 0x1874c0u: goto label_1874c0;
        case 0x1874c4u: goto label_1874c4;
        case 0x1874c8u: goto label_1874c8;
        case 0x1874ccu: goto label_1874cc;
        case 0x1874d0u: goto label_1874d0;
        case 0x1874d4u: goto label_1874d4;
        case 0x1874d8u: goto label_1874d8;
        case 0x1874dcu: goto label_1874dc;
        case 0x1874e0u: goto label_1874e0;
        case 0x1874e4u: goto label_1874e4;
        case 0x1874e8u: goto label_1874e8;
        case 0x1874ecu: goto label_1874ec;
        case 0x1874f0u: goto label_1874f0;
        case 0x1874f4u: goto label_1874f4;
        case 0x1874f8u: goto label_1874f8;
        case 0x1874fcu: goto label_1874fc;
        case 0x187500u: goto label_187500;
        case 0x187504u: goto label_187504;
        case 0x187508u: goto label_187508;
        case 0x18750cu: goto label_18750c;
        case 0x187510u: goto label_187510;
        case 0x187514u: goto label_187514;
        case 0x187518u: goto label_187518;
        case 0x18751cu: goto label_18751c;
        case 0x187520u: goto label_187520;
        case 0x187524u: goto label_187524;
        case 0x187528u: goto label_187528;
        case 0x18752cu: goto label_18752c;
        case 0x187530u: goto label_187530;
        case 0x187534u: goto label_187534;
        case 0x187538u: goto label_187538;
        case 0x18753cu: goto label_18753c;
        case 0x187540u: goto label_187540;
        case 0x187544u: goto label_187544;
        case 0x187548u: goto label_187548;
        case 0x18754cu: goto label_18754c;
        case 0x187550u: goto label_187550;
        case 0x187554u: goto label_187554;
        case 0x187558u: goto label_187558;
        case 0x18755cu: goto label_18755c;
        case 0x187560u: goto label_187560;
        case 0x187564u: goto label_187564;
        case 0x187568u: goto label_187568;
        case 0x18756cu: goto label_18756c;
        case 0x187570u: goto label_187570;
        case 0x187574u: goto label_187574;
        case 0x187578u: goto label_187578;
        case 0x18757cu: goto label_18757c;
        case 0x187580u: goto label_187580;
        case 0x187584u: goto label_187584;
        case 0x187588u: goto label_187588;
        case 0x18758cu: goto label_18758c;
        case 0x187590u: goto label_187590;
        case 0x187594u: goto label_187594;
        case 0x187598u: goto label_187598;
        case 0x18759cu: goto label_18759c;
        case 0x1875a0u: goto label_1875a0;
        case 0x1875a4u: goto label_1875a4;
        case 0x1875a8u: goto label_1875a8;
        case 0x1875acu: goto label_1875ac;
        case 0x1875b0u: goto label_1875b0;
        case 0x1875b4u: goto label_1875b4;
        case 0x1875b8u: goto label_1875b8;
        case 0x1875bcu: goto label_1875bc;
        case 0x1875c0u: goto label_1875c0;
        case 0x1875c4u: goto label_1875c4;
        case 0x1875c8u: goto label_1875c8;
        case 0x1875ccu: goto label_1875cc;
        case 0x1875d0u: goto label_1875d0;
        case 0x1875d4u: goto label_1875d4;
        case 0x1875d8u: goto label_1875d8;
        case 0x1875dcu: goto label_1875dc;
        case 0x1875e0u: goto label_1875e0;
        case 0x1875e4u: goto label_1875e4;
        case 0x1875e8u: goto label_1875e8;
        case 0x1875ecu: goto label_1875ec;
        case 0x1875f0u: goto label_1875f0;
        case 0x1875f4u: goto label_1875f4;
        case 0x1875f8u: goto label_1875f8;
        case 0x1875fcu: goto label_1875fc;
        case 0x187600u: goto label_187600;
        case 0x187604u: goto label_187604;
        case 0x187608u: goto label_187608;
        case 0x18760cu: goto label_18760c;
        case 0x187610u: goto label_187610;
        case 0x187614u: goto label_187614;
        case 0x187618u: goto label_187618;
        case 0x18761cu: goto label_18761c;
        case 0x187620u: goto label_187620;
        case 0x187624u: goto label_187624;
        case 0x187628u: goto label_187628;
        case 0x18762cu: goto label_18762c;
        case 0x187630u: goto label_187630;
        case 0x187634u: goto label_187634;
        case 0x187638u: goto label_187638;
        case 0x18763cu: goto label_18763c;
        case 0x187640u: goto label_187640;
        case 0x187644u: goto label_187644;
        case 0x187648u: goto label_187648;
        case 0x18764cu: goto label_18764c;
        case 0x187650u: goto label_187650;
        case 0x187654u: goto label_187654;
        case 0x187658u: goto label_187658;
        case 0x18765cu: goto label_18765c;
        case 0x187660u: goto label_187660;
        case 0x187664u: goto label_187664;
        case 0x187668u: goto label_187668;
        case 0x18766cu: goto label_18766c;
        case 0x187670u: goto label_187670;
        case 0x187674u: goto label_187674;
        case 0x187678u: goto label_187678;
        case 0x18767cu: goto label_18767c;
        case 0x187680u: goto label_187680;
        case 0x187684u: goto label_187684;
        case 0x187688u: goto label_187688;
        case 0x18768cu: goto label_18768c;
        case 0x187690u: goto label_187690;
        case 0x187694u: goto label_187694;
        case 0x187698u: goto label_187698;
        case 0x18769cu: goto label_18769c;
        case 0x1876a0u: goto label_1876a0;
        case 0x1876a4u: goto label_1876a4;
        case 0x1876a8u: goto label_1876a8;
        case 0x1876acu: goto label_1876ac;
        case 0x1876b0u: goto label_1876b0;
        case 0x1876b4u: goto label_1876b4;
        case 0x1876b8u: goto label_1876b8;
        case 0x1876bcu: goto label_1876bc;
        case 0x1876c0u: goto label_1876c0;
        case 0x1876c4u: goto label_1876c4;
        case 0x1876c8u: goto label_1876c8;
        case 0x1876ccu: goto label_1876cc;
        case 0x1876d0u: goto label_1876d0;
        case 0x1876d4u: goto label_1876d4;
        case 0x1876d8u: goto label_1876d8;
        case 0x1876dcu: goto label_1876dc;
        case 0x1876e0u: goto label_1876e0;
        case 0x1876e4u: goto label_1876e4;
        case 0x1876e8u: goto label_1876e8;
        case 0x1876ecu: goto label_1876ec;
        case 0x1876f0u: goto label_1876f0;
        case 0x1876f4u: goto label_1876f4;
        case 0x1876f8u: goto label_1876f8;
        case 0x1876fcu: goto label_1876fc;
        case 0x187700u: goto label_187700;
        case 0x187704u: goto label_187704;
        case 0x187708u: goto label_187708;
        case 0x18770cu: goto label_18770c;
        case 0x187710u: goto label_187710;
        case 0x187714u: goto label_187714;
        case 0x187718u: goto label_187718;
        case 0x18771cu: goto label_18771c;
        case 0x187720u: goto label_187720;
        case 0x187724u: goto label_187724;
        case 0x187728u: goto label_187728;
        case 0x18772cu: goto label_18772c;
        case 0x187730u: goto label_187730;
        case 0x187734u: goto label_187734;
        case 0x187738u: goto label_187738;
        case 0x18773cu: goto label_18773c;
        case 0x187740u: goto label_187740;
        case 0x187744u: goto label_187744;
        case 0x187748u: goto label_187748;
        case 0x18774cu: goto label_18774c;
        case 0x187750u: goto label_187750;
        case 0x187754u: goto label_187754;
        case 0x187758u: goto label_187758;
        case 0x18775cu: goto label_18775c;
        case 0x187760u: goto label_187760;
        case 0x187764u: goto label_187764;
        case 0x187768u: goto label_187768;
        case 0x18776cu: goto label_18776c;
        case 0x187770u: goto label_187770;
        case 0x187774u: goto label_187774;
        case 0x187778u: goto label_187778;
        case 0x18777cu: goto label_18777c;
        case 0x187780u: goto label_187780;
        case 0x187784u: goto label_187784;
        case 0x187788u: goto label_187788;
        case 0x18778cu: goto label_18778c;
        case 0x187790u: goto label_187790;
        case 0x187794u: goto label_187794;
        case 0x187798u: goto label_187798;
        case 0x18779cu: goto label_18779c;
        case 0x1877a0u: goto label_1877a0;
        case 0x1877a4u: goto label_1877a4;
        case 0x1877a8u: goto label_1877a8;
        case 0x1877acu: goto label_1877ac;
        case 0x1877b0u: goto label_1877b0;
        case 0x1877b4u: goto label_1877b4;
        case 0x1877b8u: goto label_1877b8;
        case 0x1877bcu: goto label_1877bc;
        case 0x1877c0u: goto label_1877c0;
        case 0x1877c4u: goto label_1877c4;
        case 0x1877c8u: goto label_1877c8;
        case 0x1877ccu: goto label_1877cc;
        case 0x1877d0u: goto label_1877d0;
        case 0x1877d4u: goto label_1877d4;
        case 0x1877d8u: goto label_1877d8;
        case 0x1877dcu: goto label_1877dc;
        case 0x1877e0u: goto label_1877e0;
        case 0x1877e4u: goto label_1877e4;
        case 0x1877e8u: goto label_1877e8;
        case 0x1877ecu: goto label_1877ec;
        case 0x1877f0u: goto label_1877f0;
        case 0x1877f4u: goto label_1877f4;
        case 0x1877f8u: goto label_1877f8;
        case 0x1877fcu: goto label_1877fc;
        case 0x187800u: goto label_187800;
        case 0x187804u: goto label_187804;
        case 0x187808u: goto label_187808;
        case 0x18780cu: goto label_18780c;
        case 0x187810u: goto label_187810;
        case 0x187814u: goto label_187814;
        case 0x187818u: goto label_187818;
        case 0x18781cu: goto label_18781c;
        case 0x187820u: goto label_187820;
        case 0x187824u: goto label_187824;
        case 0x187828u: goto label_187828;
        case 0x18782cu: goto label_18782c;
        case 0x187830u: goto label_187830;
        case 0x187834u: goto label_187834;
        case 0x187838u: goto label_187838;
        case 0x18783cu: goto label_18783c;
        case 0x187840u: goto label_187840;
        case 0x187844u: goto label_187844;
        case 0x187848u: goto label_187848;
        case 0x18784cu: goto label_18784c;
        case 0x187850u: goto label_187850;
        case 0x187854u: goto label_187854;
        case 0x187858u: goto label_187858;
        case 0x18785cu: goto label_18785c;
        case 0x187860u: goto label_187860;
        case 0x187864u: goto label_187864;
        case 0x187868u: goto label_187868;
        case 0x18786cu: goto label_18786c;
        case 0x187870u: goto label_187870;
        case 0x187874u: goto label_187874;
        case 0x187878u: goto label_187878;
        case 0x18787cu: goto label_18787c;
        case 0x187880u: goto label_187880;
        case 0x187884u: goto label_187884;
        case 0x187888u: goto label_187888;
        case 0x18788cu: goto label_18788c;
        case 0x187890u: goto label_187890;
        case 0x187894u: goto label_187894;
        case 0x187898u: goto label_187898;
        case 0x18789cu: goto label_18789c;
        case 0x1878a0u: goto label_1878a0;
        case 0x1878a4u: goto label_1878a4;
        case 0x1878a8u: goto label_1878a8;
        case 0x1878acu: goto label_1878ac;
        case 0x1878b0u: goto label_1878b0;
        case 0x1878b4u: goto label_1878b4;
        case 0x1878b8u: goto label_1878b8;
        case 0x1878bcu: goto label_1878bc;
        case 0x1878c0u: goto label_1878c0;
        case 0x1878c4u: goto label_1878c4;
        case 0x1878c8u: goto label_1878c8;
        case 0x1878ccu: goto label_1878cc;
        case 0x1878d0u: goto label_1878d0;
        case 0x1878d4u: goto label_1878d4;
        case 0x1878d8u: goto label_1878d8;
        case 0x1878dcu: goto label_1878dc;
        case 0x1878e0u: goto label_1878e0;
        case 0x1878e4u: goto label_1878e4;
        case 0x1878e8u: goto label_1878e8;
        case 0x1878ecu: goto label_1878ec;
        case 0x1878f0u: goto label_1878f0;
        case 0x1878f4u: goto label_1878f4;
        case 0x1878f8u: goto label_1878f8;
        case 0x1878fcu: goto label_1878fc;
        case 0x187900u: goto label_187900;
        case 0x187904u: goto label_187904;
        case 0x187908u: goto label_187908;
        case 0x18790cu: goto label_18790c;
        case 0x187910u: goto label_187910;
        case 0x187914u: goto label_187914;
        case 0x187918u: goto label_187918;
        case 0x18791cu: goto label_18791c;
        case 0x187920u: goto label_187920;
        case 0x187924u: goto label_187924;
        case 0x187928u: goto label_187928;
        case 0x18792cu: goto label_18792c;
        case 0x187930u: goto label_187930;
        case 0x187934u: goto label_187934;
        case 0x187938u: goto label_187938;
        case 0x18793cu: goto label_18793c;
        case 0x187940u: goto label_187940;
        case 0x187944u: goto label_187944;
        case 0x187948u: goto label_187948;
        case 0x18794cu: goto label_18794c;
        case 0x187950u: goto label_187950;
        case 0x187954u: goto label_187954;
        case 0x187958u: goto label_187958;
        case 0x18795cu: goto label_18795c;
        default: break;
    }

    ctx->pc = 0x187098u;

label_187098:
    // 0x187098: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x187098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_18709c:
    // 0x18709c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x18709cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1870a0:
    // 0x1870a0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1870a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1870a4:
    // 0x1870a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1870a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1870a8:
    // 0x1870a8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1870a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_1870ac:
    // 0x1870ac: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1870acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1870b0:
    // 0x1870b0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1870b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_1870b4:
    // 0x1870b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1870b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1870b8:
    // 0x1870b8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1870b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1870bc:
    // 0x1870bc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1870bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1870c0:
    // 0x1870c0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1870c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1870c4:
    // 0x1870c4: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1870c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1870c8:
    // 0x1870c8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1870c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_1870cc:
    // 0x1870cc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1870ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1870d0:
    // 0x1870d0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1870d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1870d4:
    // 0x1870d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1870d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1870d8:
    // 0x1870d8: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1870d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1870dc:
    // 0x1870dc: 0x10400212  beqz        $v0, . + 4 + (0x212 << 2)
label_1870e0:
    if (ctx->pc == 0x1870E0u) {
        ctx->pc = 0x1870E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870DCu;
        // 0x1870e0: 0x100b82d  daddu       $s7, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1870E4u;
        goto label_1870e4;
    }
    ctx->pc = 0x1870DCu;
    {
        const bool branch_taken_0x1870dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1870E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870DCu;
        // 0x1870e0: 0x100b82d  daddu       $s7, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1870dc) {
            ctx->pc = 0x187928u;
            goto label_187928;
        }
    }
    ctx->pc = 0x1870E4u;
label_1870e4:
    // 0x1870e4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1870e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1870e8:
    // 0x1870e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1870e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1870ec:
    // 0x1870ec: 0x24422d30  addiu       $v0, $v0, 0x2D30
    ctx->pc = 0x1870ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11568));
label_1870f0:
    // 0x1870f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1870f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1870f4:
    // 0x1870f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1870f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1870f8:
    // 0x1870f8: 0x800008  jr          $a0
label_1870fc:
    if (ctx->pc == 0x1870FCu) {
        ctx->pc = 0x187100u;
        goto label_187100;
    }
    ctx->pc = 0x1870F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187100u: goto label_187100;
            case 0x187238u: goto label_187238;
            case 0x18739Cu: goto label_18739c;
            case 0x1874B0u: goto label_1874b0;
            case 0x1875D4u: goto label_1875d4;
            case 0x1876C8u: goto label_1876c8;
            case 0x1877BCu: goto label_1877bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1870F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x187100u;
label_187100:
    // 0x187100: 0xc051028  jal         func_1440A0
label_187104:
    if (ctx->pc == 0x187104u) {
        ctx->pc = 0x187108u;
        goto label_187108;
    }
    ctx->pc = 0x187100u;
    SET_GPR_U32(ctx, 31, 0x187108u);
    ctx->pc = 0x1440A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1440A0u, 0x187100u, 0x187108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187108u;
label_187108:
    // 0x187108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18710c:
    // 0x18710c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x18710cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_187110:
    // 0x187110: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x187110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_187114:
    // 0x187114: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x187114u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_187118:
    // 0x187118: 0x8c4b27e4  lw          $t3, 0x27E4($v0)
    ctx->pc = 0x187118u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_18711c:
    // 0x18711c: 0x24a52bf8  addiu       $a1, $a1, 0x2BF8
    ctx->pc = 0x18711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11256));
label_187120:
    // 0x187120: 0x25082b28  addiu       $t0, $t0, 0x2B28
    ctx->pc = 0x187120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11048));
label_187124:
    // 0x187124: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x187124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_187128:
    // 0x187128: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x187128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_18712c:
    // 0x18712c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x18712cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_187130:
    // 0x187130: 0x2409053f  addiu       $t1, $zero, 0x53F
    ctx->pc = 0x187130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1343));
label_187134:
    // 0x187134: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x187134u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187138:
    // 0x187138: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x187138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_18713c:
    // 0x18713c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_187140:
    // 0x187140: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x187140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_187144:
    // 0x187144: 0x40f809  jalr        $v0
label_187148:
    if (ctx->pc == 0x187148u) {
        ctx->pc = 0x187148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187144u;
        // 0x187148: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18714Cu;
        goto label_18714c;
    }
    ctx->pc = 0x187144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18714Cu);
        ctx->pc = 0x187148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187144u;
        // 0x187148: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187144u, 0x18714Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18714Cu;
label_18714c:
    // 0x18714c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18714cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187150:
    // 0x187150: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_187154:
    if (ctx->pc == 0x187154u) {
        ctx->pc = 0x187154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187150u;
        // 0x187154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187158u;
        goto label_187158;
    }
    ctx->pc = 0x187150u;
    {
        const bool branch_taken_0x187150 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x187154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187150u;
        // 0x187154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187150) {
            ctx->pc = 0x18716Cu;
            goto label_18716c;
        }
    }
    ctx->pc = 0x187158u;
label_187158:
    // 0x187158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18715c:
    // 0x18715c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18715cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187160:
    // 0x187160: 0xc05b8e2  jal         func_16E388
label_187164:
    if (ctx->pc == 0x187164u) {
        ctx->pc = 0x187164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187160u;
        // 0x187164: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187168u;
        goto label_187168;
    }
    ctx->pc = 0x187160u;
    SET_GPR_U32(ctx, 31, 0x187168u);
    ctx->pc = 0x187164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187160u;
    // 0x187164: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E388u, 0x187160u, 0x187168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187168u;
label_187168:
    // 0x187168: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x187168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18716c:
    // 0x18716c: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x18716cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_187170:
    // 0x187170: 0xc061e78  jal         func_1879E0
label_187174:
    if (ctx->pc == 0x187174u) {
        ctx->pc = 0x187174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187170u;
        // 0x187174: 0x26b00040  addiu       $s0, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187178u;
        goto label_187178;
    }
    ctx->pc = 0x187170u;
    SET_GPR_U32(ctx, 31, 0x187178u);
    ctx->pc = 0x187174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187170u;
    // 0x187174: 0x26b00040  addiu       $s0, $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879E0u, 0x187170u, 0x187178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187178u;
label_187178:
    // 0x187178: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x187178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18717c:
    // 0x18717c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x18717cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_187180:
    // 0x187180: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x187180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_187184:
    // 0x187184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187188:
    // 0x187188: 0xc137d0c  jal         func_4DF430
label_18718c:
    if (ctx->pc == 0x18718Cu) {
        ctx->pc = 0x18718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187188u;
        // 0x18718c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187190u;
        goto label_187190;
    }
    ctx->pc = 0x187188u;
    SET_GPR_U32(ctx, 31, 0x187190u);
    ctx->pc = 0x18718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187188u;
    // 0x18718c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF430u, 0x187188u, 0x187190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187190u;
label_187190:
    // 0x187190: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x187190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_187194:
    // 0x187194: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187198:
    // 0x187198: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x187198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18719c:
    // 0x18719c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1871a0:
    if (ctx->pc == 0x1871A0u) {
        ctx->pc = 0x1871A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18719Cu;
        // 0x1871a0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1871A4u;
        goto label_1871a4;
    }
    ctx->pc = 0x18719Cu;
    {
        const bool branch_taken_0x18719c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1871A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18719Cu;
        // 0x1871a0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18719c) {
            ctx->pc = 0x1871B8u;
            goto label_1871b8;
        }
    }
    ctx->pc = 0x1871A4u;
label_1871a4:
    // 0x1871a4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1871a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1871a8:
    // 0x1871a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1871a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1871ac:
    // 0x1871ac: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1871acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1871b0:
    // 0x1871b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1871b4:
    if (ctx->pc == 0x1871B4u) {
        ctx->pc = 0x1871B8u;
        goto label_1871b8;
    }
    ctx->pc = 0x1871B0u;
    {
        const bool branch_taken_0x1871b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1871b0) {
            ctx->pc = 0x1871BCu;
            goto label_1871bc;
        }
    }
    ctx->pc = 0x1871B8u;
label_1871b8:
    // 0x1871b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1871b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1871bc:
    // 0x1871bc: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1871c0:
    if (ctx->pc == 0x1871C0u) {
        ctx->pc = 0x1871C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871BCu;
        // 0x1871c0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1871C4u;
        goto label_1871c4;
    }
    ctx->pc = 0x1871BCu;
    {
        const bool branch_taken_0x1871bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1871C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871BCu;
        // 0x1871c0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871bc) {
            ctx->pc = 0x1871F4u;
            goto label_1871f4;
        }
    }
    ctx->pc = 0x1871C4u;
label_1871c4:
    // 0x1871c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1871c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1871c8:
    // 0x1871c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1871c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1871cc:
    // 0x1871cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1871ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1871d0:
    // 0x1871d0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1871d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_1871d4:
    // 0x1871d4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1871d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1871d8:
    // 0x1871d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1871d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1871dc:
    // 0x1871dc: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1871dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1871e0:
    // 0x1871e0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1871e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1871e4:
    // 0x1871e4: 0xc137e66  jal         func_4DF998
label_1871e8:
    if (ctx->pc == 0x1871E8u) {
        ctx->pc = 0x1871E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871E4u;
        // 0x1871e8: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1871ECu;
        goto label_1871ec;
    }
    ctx->pc = 0x1871E4u;
    SET_GPR_U32(ctx, 31, 0x1871ECu);
    ctx->pc = 0x1871E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1871E4u;
    // 0x1871e8: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF998u, 0x1871E4u, 0x1871ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1871ECu;
label_1871ec:
    // 0x1871ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1871ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1871f0:
    // 0x1871f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1871f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1871f4:
    // 0x1871f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1871f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1871f8:
    // 0x1871f8: 0xac510014  sw          $s1, 0x14($v0)
    ctx->pc = 0x1871f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 17));
label_1871fc:
    // 0x1871fc: 0x12e001cc  beqz        $s7, . + 4 + (0x1CC << 2)
label_187200:
    if (ctx->pc == 0x187200u) {
        ctx->pc = 0x187200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871FCu;
        // 0x187200: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187204u;
        goto label_187204;
    }
    ctx->pc = 0x1871FCu;
    {
        const bool branch_taken_0x1871fc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x187200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871FCu;
        // 0x187200: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871fc) {
            ctx->pc = 0x187930u;
            goto label_187930;
        }
    }
    ctx->pc = 0x187204u;
label_187204:
    // 0x187204: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x187204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_187208:
    // 0x187208: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x187208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18720c:
    // 0x18720c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18720cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_187210:
    // 0x187210: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x187210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_187214:
    // 0x187214: 0x40f809  jalr        $v0
label_187218:
    if (ctx->pc == 0x187218u) {
        ctx->pc = 0x187218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187214u;
        // 0x187218: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18721Cu;
        goto label_18721c;
    }
    ctx->pc = 0x187214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18721Cu);
        ctx->pc = 0x187218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187214u;
        // 0x187218: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187214u, 0x18721Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18721Cu;
label_18721c:
    // 0x18721c: 0x24430bb8  addiu       $v1, $v0, 0xBB8
    ctx->pc = 0x18721cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_187220:
    // 0x187220: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x187220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_187224:
    // 0x187224: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_187228:
    // 0x187228: 0x106201b5  beq         $v1, $v0, . + 4 + (0x1B5 << 2)
label_18722c:
    if (ctx->pc == 0x18722Cu) {
        ctx->pc = 0x18722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187228u;
        // 0x18722c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187230u;
        goto label_187230;
    }
    ctx->pc = 0x187228u;
    {
        const bool branch_taken_0x187228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187228u;
        // 0x18722c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187228) {
            ctx->pc = 0x187900u;
            goto label_187900;
        }
    }
    ctx->pc = 0x187230u;
label_187230:
    // 0x187230: 0x100001bf  b           . + 4 + (0x1BF << 2)
label_187234:
    if (ctx->pc == 0x187234u) {
        ctx->pc = 0x187234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187230u;
        // 0x187234: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187238u;
        goto label_187238;
    }
    ctx->pc = 0x187230u;
    {
        const bool branch_taken_0x187230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187230u;
        // 0x187234: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187230) {
            ctx->pc = 0x187930u;
            goto label_187930;
        }
    }
    ctx->pc = 0x187238u;
label_187238:
    // 0x187238: 0xc051048  jal         func_144120
label_18723c:
    if (ctx->pc == 0x18723Cu) {
        ctx->pc = 0x18723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187238u;
        // 0x18723c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187240u;
        goto label_187240;
    }
    ctx->pc = 0x187238u;
    SET_GPR_U32(ctx, 31, 0x187240u);
    ctx->pc = 0x18723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187238u;
    // 0x18723c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x187238u, 0x187240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187240u;
label_187240:
    // 0x187240: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x187240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_187244:
    // 0x187244: 0xc051048  jal         func_144120
label_187248:
    if (ctx->pc == 0x187248u) {
        ctx->pc = 0x187248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187244u;
        // 0x187248: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18724Cu;
        goto label_18724c;
    }
    ctx->pc = 0x187244u;
    SET_GPR_U32(ctx, 31, 0x18724Cu);
    ctx->pc = 0x187248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187244u;
    // 0x187248: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x187244u, 0x18724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18724Cu;
label_18724c:
    // 0x18724c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18724cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187250:
    // 0x187250: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x187250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_187254:
    // 0x187254: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x187254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_187258:
    // 0x187258: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x187258u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_18725c:
    // 0x18725c: 0x8c4b27e4  lw          $t3, 0x27E4($v0)
    ctx->pc = 0x18725cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_187260:
    // 0x187260: 0x24a52cd0  addiu       $a1, $a1, 0x2CD0
    ctx->pc = 0x187260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11472));
label_187264:
    // 0x187264: 0x25082b28  addiu       $t0, $t0, 0x2B28
    ctx->pc = 0x187264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11048));
label_187268:
    // 0x187268: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x187268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_18726c:
    // 0x18726c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x18726cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_187270:
    // 0x187270: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x187270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_187274:
    // 0x187274: 0x2409054f  addiu       $t1, $zero, 0x54F
    ctx->pc = 0x187274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1359));
label_187278:
    // 0x187278: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x187278u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18727c:
    // 0x18727c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x18727cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_187280:
    // 0x187280: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x187280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_187284:
    // 0x187284: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x187284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_187288:
    // 0x187288: 0x40f809  jalr        $v0
label_18728c:
    if (ctx->pc == 0x18728Cu) {
        ctx->pc = 0x18728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187288u;
        // 0x18728c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187290u;
        goto label_187290;
    }
    ctx->pc = 0x187288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187290u);
        ctx->pc = 0x18728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187288u;
        // 0x18728c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187288u, 0x187290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187290u;
label_187290:
    // 0x187290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187294:
    // 0x187294: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_187298:
    if (ctx->pc == 0x187298u) {
        ctx->pc = 0x187298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187294u;
        // 0x187298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18729Cu;
        goto label_18729c;
    }
    ctx->pc = 0x187294u;
    {
        const bool branch_taken_0x187294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x187298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187294u;
        // 0x187298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187294) {
            ctx->pc = 0x1872B4u;
            goto label_1872b4;
        }
    }
    ctx->pc = 0x18729Cu;
label_18729c:
    // 0x18729c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x18729cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1872a0:
    // 0x1872a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1872a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1872a4:
    // 0x1872a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1872a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1872a8:
    // 0x1872a8: 0xc05e05e  jal         func_178178
label_1872ac:
    if (ctx->pc == 0x1872ACu) {
        ctx->pc = 0x1872ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872A8u;
        // 0x1872ac: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1872B0u;
        goto label_1872b0;
    }
    ctx->pc = 0x1872A8u;
    SET_GPR_U32(ctx, 31, 0x1872B0u);
    ctx->pc = 0x1872ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872A8u;
    // 0x1872ac: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178178u, 0x1872A8u, 0x1872B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872B0u;
label_1872b0:
    // 0x1872b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1872b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1872b4:
    // 0x1872b4: 0xc061e78  jal         func_1879E0
label_1872b8:
    if (ctx->pc == 0x1872B8u) {
        ctx->pc = 0x1872B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872B4u;
        // 0x1872b8: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1872BCu;
        goto label_1872bc;
    }
    ctx->pc = 0x1872B4u;
    SET_GPR_U32(ctx, 31, 0x1872BCu);
    ctx->pc = 0x1872B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872B4u;
    // 0x1872b8: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879E0u, 0x1872B4u, 0x1872BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872BCu;
label_1872bc:
    // 0x1872bc: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1872bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1872c0:
    // 0x1872c0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1872c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1872c4:
    // 0x1872c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1872c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1872c8:
    // 0x1872c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1872c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1872cc:
    // 0x1872cc: 0xc137f7e  jal         func_4DFDF8
label_1872d0:
    if (ctx->pc == 0x1872D0u) {
        ctx->pc = 0x1872D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872CCu;
        // 0x1872d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1872D4u;
        goto label_1872d4;
    }
    ctx->pc = 0x1872CCu;
    SET_GPR_U32(ctx, 31, 0x1872D4u);
    ctx->pc = 0x1872D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872CCu;
    // 0x1872d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DFDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DFDF8u, 0x1872CCu, 0x1872D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872D4u;
label_1872d4:
    // 0x1872d4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1872d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1872d8:
    // 0x1872d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1872d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1872dc:
    // 0x1872dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1872dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1872e0:
    // 0x1872e0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1872e4:
    if (ctx->pc == 0x1872E4u) {
        ctx->pc = 0x1872E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872E0u;
        // 0x1872e4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1872E8u;
        goto label_1872e8;
    }
    ctx->pc = 0x1872E0u;
    {
        const bool branch_taken_0x1872e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1872E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872E0u;
        // 0x1872e4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872e0) {
            ctx->pc = 0x1872FCu;
            goto label_1872fc;
        }
    }
    ctx->pc = 0x1872E8u;
label_1872e8:
    // 0x1872e8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1872e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1872ec:
    // 0x1872ec: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x1872ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1872f0:
    // 0x1872f0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1872f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1872f4:
    // 0x1872f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1872f8:
    if (ctx->pc == 0x1872F8u) {
        ctx->pc = 0x1872FCu;
        goto label_1872fc;
    }
    ctx->pc = 0x1872F4u;
    {
        const bool branch_taken_0x1872f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1872f4) {
            ctx->pc = 0x187300u;
            goto label_187300;
        }
    }
    ctx->pc = 0x1872FCu;
label_1872fc:
    // 0x1872fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1872fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187300:
    // 0x187300: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_187304:
    if (ctx->pc == 0x187304u) {
        ctx->pc = 0x187304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187300u;
        // 0x187304: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187308u;
        goto label_187308;
    }
    ctx->pc = 0x187300u;
    {
        const bool branch_taken_0x187300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187300u;
        // 0x187304: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187300) {
            ctx->pc = 0x187338u;
            goto label_187338;
        }
    }
    ctx->pc = 0x187308u;
label_187308:
    // 0x187308: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x187308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18730c:
    // 0x18730c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18730cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_187310:
    // 0x187310: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x187310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_187314:
    // 0x187314: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x187314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_187318:
    // 0x187318: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x187318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18731c:
    // 0x18731c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_187320:
    // 0x187320: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x187320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_187324:
    // 0x187324: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x187324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_187328:
    // 0x187328: 0xc1380d8  jal         func_4E0360
label_18732c:
    if (ctx->pc == 0x18732Cu) {
        ctx->pc = 0x18732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187328u;
        // 0x18732c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187330u;
        goto label_187330;
    }
    ctx->pc = 0x187328u;
    SET_GPR_U32(ctx, 31, 0x187330u);
    ctx->pc = 0x18732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187328u;
    // 0x18732c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0360u, 0x187328u, 0x187330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187330u;
label_187330:
    // 0x187330: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x187330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_187334:
    // 0x187334: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x187334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_187338:
    // 0x187338: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x187338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18733c:
    // 0x18733c: 0x12e0017c  beqz        $s7, . + 4 + (0x17C << 2)
label_187340:
    if (ctx->pc == 0x187340u) {
        ctx->pc = 0x187340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18733Cu;
        // 0x187340: 0xac500014  sw          $s0, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187344u;
        goto label_187344;
    }
    ctx->pc = 0x18733Cu;
    {
        const bool branch_taken_0x18733c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x187340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18733Cu;
        // 0x187340: 0xac500014  sw          $s0, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18733c) {
            ctx->pc = 0x187930u;
            goto label_187930;
        }
    }
    ctx->pc = 0x187344u;
label_187344:
    // 0x187344: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x187344u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_187348:
    // 0x187348: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x187348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_18734c:
    // 0x18734c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_187350:
    // 0x187350: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x187350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_187354:
    // 0x187354: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x187354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_187358:
    // 0x187358: 0x40f809  jalr        $v0
label_18735c:
    if (ctx->pc == 0x18735Cu) {
        ctx->pc = 0x18735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187358u;
        // 0x18735c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187360u;
        goto label_187360;
    }
    ctx->pc = 0x187358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187360u);
        ctx->pc = 0x18735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187358u;
        // 0x18735c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187358u, 0x187360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187360u;
label_187360:
    // 0x187360: 0x24430bb8  addiu       $v1, $v0, 0xBB8
    ctx->pc = 0x187360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_187364:
    // 0x187364: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x187364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_187368:
    // 0x187368: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18736c:
    // 0x18736c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_187370:
    if (ctx->pc == 0x187370u) {
        ctx->pc = 0x187370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18736Cu;
        // 0x187370: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187374u;
        goto label_187374;
    }
    ctx->pc = 0x18736Cu;
    {
        const bool branch_taken_0x18736c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x187370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18736Cu;
        // 0x187370: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18736c) {
            ctx->pc = 0x187394u;
            goto label_187394;
        }
    }
    ctx->pc = 0x187374u;
label_187374:
    // 0x187374: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x187374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_187378:
    // 0x187378: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x187378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18737c:
    // 0x18737c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18737cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_187380:
    // 0x187380: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x187380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_187384:
    // 0x187384: 0x40f809  jalr        $v0
label_187388:
    if (ctx->pc == 0x187388u) {
        ctx->pc = 0x187388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187384u;
        // 0x187388: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18738Cu;
        goto label_18738c;
    }
    ctx->pc = 0x187384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18738Cu);
        ctx->pc = 0x187388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187384u;
        // 0x187388: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187384u, 0x18738Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18738Cu;
label_18738c:
    // 0x18738c: 0x10000168  b           . + 4 + (0x168 << 2)
label_187390:
    if (ctx->pc == 0x187390u) {
        ctx->pc = 0x187390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18738Cu;
        // 0x187390: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187394u;
        goto label_187394;
    }
    ctx->pc = 0x18738Cu;
    {
        const bool branch_taken_0x18738c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18738Cu;
        // 0x187390: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18738c) {
            ctx->pc = 0x187930u;
            goto label_187930;
        }
    }
    ctx->pc = 0x187394u;
label_187394:
    // 0x187394: 0x10000166  b           . + 4 + (0x166 << 2)
label_187398:
    if (ctx->pc == 0x187398u) {
        ctx->pc = 0x187398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187394u;
        // 0x187398: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18739Cu;
        goto label_18739c;
    }
    ctx->pc = 0x187394u;
    {
        const bool branch_taken_0x187394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187394u;
        // 0x187398: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187394) {
            ctx->pc = 0x187930u;
            goto label_187930;
        }
    }
    ctx->pc = 0x18739Cu;
label_18739c:
    // 0x18739c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18739cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1873a0:
    // 0x1873a0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1873a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1873a4:
    // 0x1873a4: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1873a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1873a8:
    // 0x1873a8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1873a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1873ac:
    // 0x1873ac: 0x24a52ce0  addiu       $a1, $a1, 0x2CE0
    ctx->pc = 0x1873acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11488));
label_1873b0:
    // 0x1873b0: 0x25082b28  addiu       $t0, $t0, 0x2B28
    ctx->pc = 0x1873b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11048));
label_1873b4:
    // 0x1873b4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1873b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1873b8:
    // 0x1873b8: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1873b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1873bc:
    // 0x1873bc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1873bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1873c0:
    // 0x1873c0: 0x2409055e  addiu       $t1, $zero, 0x55E
    ctx->pc = 0x1873c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1374));
label_1873c4:
    // 0x1873c4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1873c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1873c8:
    // 0x1873c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1873c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1873cc:
    // 0x1873cc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1873ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1873d0:
    // 0x1873d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1873d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1873d4:
    // 0x1873d4: 0x40f809  jalr        $v0
label_1873d8:
    if (ctx->pc == 0x1873D8u) {
        ctx->pc = 0x1873D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873D4u;
        // 0x1873d8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1873DCu;
        goto label_1873dc;
    }
    ctx->pc = 0x1873D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1873DCu);
        ctx->pc = 0x1873D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873D4u;
        // 0x1873d8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1873D4u, 0x1873DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1873DCu;
label_1873dc:
    // 0x1873dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1873dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1873e0:
    // 0x1873e0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_1873e4:
    if (ctx->pc == 0x1873E4u) {
        ctx->pc = 0x1873E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873E0u;
        // 0x1873e4: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1873E8u;
        goto label_1873e8;
    }
    ctx->pc = 0x1873E0u;
    {
        const bool branch_taken_0x1873e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1873E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873E0u;
        // 0x1873e4: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1873e0) {
            ctx->pc = 0x18740Cu;
            goto label_18740c;
        }
    }
    ctx->pc = 0x1873E8u;
label_1873e8:
    // 0x1873e8: 0xc051048  jal         func_144120
label_1873ec:
    if (ctx->pc == 0x1873ECu) {
        ctx->pc = 0x1873ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873E8u;
        // 0x1873ec: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1873F0u;
        goto label_1873f0;
    }
    ctx->pc = 0x1873E8u;
    SET_GPR_U32(ctx, 31, 0x1873F0u);
    ctx->pc = 0x1873ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1873E8u;
    // 0x1873ec: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x1873E8u, 0x1873F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1873F0u;
label_1873f0:
    // 0x1873f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1873f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1873f4:
    // 0x1873f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1873f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1873f8:
    // 0x1873f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1873f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1873fc:
    // 0x1873fc: 0xc0639fa  jal         func_18E7E8
label_187400:
    if (ctx->pc == 0x187400u) {
        ctx->pc = 0x187400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873FCu;
        // 0x187400: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187404u;
        goto label_187404;
    }
    ctx->pc = 0x1873FCu;
    SET_GPR_U32(ctx, 31, 0x187404u);
    ctx->pc = 0x187400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1873FCu;
    // 0x187400: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E7E8u, 0x1873FCu, 0x187404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187404u;
label_187404:
    // 0x187404: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x187404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187408:
    // 0x187408: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x187408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_18740c:
    // 0x18740c: 0xc061e78  jal         func_1879E0
label_187410:
    if (ctx->pc == 0x187410u) {
        ctx->pc = 0x187410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18740Cu;
        // 0x187410: 0x26b00030  addiu       $s0, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187414u;
        goto label_187414;
    }
    ctx->pc = 0x18740Cu;
    SET_GPR_U32(ctx, 31, 0x187414u);
    ctx->pc = 0x187410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18740Cu;
    // 0x187410: 0x26b00030  addiu       $s0, $s5, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879E0u, 0x18740Cu, 0x187414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187414u;
label_187414:
    // 0x187414: 0x27b20068  addiu       $s2, $sp, 0x68
    ctx->pc = 0x187414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_187418:
    // 0x187418: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x187418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_18741c:
    // 0x18741c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18741cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_187420:
    // 0x187420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187424:
    // 0x187424: 0xc138144  jal         func_4E0510
label_187428:
    if (ctx->pc == 0x187428u) {
        ctx->pc = 0x187428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187424u;
        // 0x187428: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18742Cu;
        goto label_18742c;
    }
    ctx->pc = 0x187424u;
    SET_GPR_U32(ctx, 31, 0x18742Cu);
    ctx->pc = 0x187428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187424u;
    // 0x187428: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0510u, 0x187424u, 0x18742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18742Cu;
label_18742c:
    // 0x18742c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_187430:
    // 0x187430: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187434:
    // 0x187434: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x187434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_187438:
    // 0x187438: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_18743c:
    if (ctx->pc == 0x18743Cu) {
        ctx->pc = 0x18743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187438u;
        // 0x18743c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187440u;
        goto label_187440;
    }
    ctx->pc = 0x187438u;
    {
        const bool branch_taken_0x187438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187438u;
        // 0x18743c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187438) {
            ctx->pc = 0x187454u;
            goto label_187454;
        }
    }
    ctx->pc = 0x187440u;
label_187440:
    // 0x187440: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x187440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_187444:
    // 0x187444: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x187444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_187448:
    // 0x187448: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x187448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_18744c:
    // 0x18744c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_187450:
    if (ctx->pc == 0x187450u) {
        ctx->pc = 0x187454u;
        goto label_187454;
    }
    ctx->pc = 0x18744Cu;
    {
        const bool branch_taken_0x18744c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18744c) {
            ctx->pc = 0x187458u;
            goto label_187458;
        }
    }
    ctx->pc = 0x187454u;
label_187454:
    // 0x187454: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187458:
    // 0x187458: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_18745c:
    if (ctx->pc == 0x18745Cu) {
        ctx->pc = 0x18745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187458u;
        // 0x18745c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187460u;
        goto label_187460;
    }
    ctx->pc = 0x187458u;
    {
        const bool branch_taken_0x187458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187458u;
        // 0x18745c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187458) {
            ctx->pc = 0x187490u;
            goto label_187490;
        }
    }
    ctx->pc = 0x187460u;
label_187460:
    // 0x187460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187464:
    // 0x187464: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x187464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_187468:
    // 0x187468: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x187468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18746c:
    // 0x18746c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x18746cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_187470:
    // 0x187470: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x187470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_187474:
    // 0x187474: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x187474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_187478:
    // 0x187478: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x187478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_18747c:
    // 0x18747c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x18747cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_187480:
    // 0x187480: 0xc13829e  jal         func_4E0A78
label_187484:
    if (ctx->pc == 0x187484u) {
        ctx->pc = 0x187484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187480u;
        // 0x187484: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187488u;
        goto label_187488;
    }
    ctx->pc = 0x187480u;
    SET_GPR_U32(ctx, 31, 0x187488u);
    ctx->pc = 0x187484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187480u;
    // 0x187484: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0A78u, 0x187480u, 0x187488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187488u;
label_187488:
    // 0x187488: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x187488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_18748c:
    // 0x18748c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x18748cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_187490:
    // 0x187490: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x187490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_187494:
    // 0x187494: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x187494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_187498:
    // 0x187498: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x187498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18749c:
    // 0x18749c: 0xac510014  sw          $s1, 0x14($v0)
    ctx->pc = 0x18749cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 17));
label_1874a0:
    // 0x1874a0: 0xc05e2f2  jal         func_178BC8
label_1874a4:
    if (ctx->pc == 0x1874A4u) {
        ctx->pc = 0x1874A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874A0u;
        // 0x1874a4: 0x8fa50068  lw          $a1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1874A8u;
        goto label_1874a8;
    }
    ctx->pc = 0x1874A0u;
    SET_GPR_U32(ctx, 31, 0x1874A8u);
    ctx->pc = 0x1874A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1874A0u;
    // 0x1874a4: 0x8fa50068  lw          $a1, 0x68($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178BC8u, 0x1874A0u, 0x1874A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1874A8u;
label_1874a8:
    // 0x1874a8: 0x1000ff54  b           . + 4 + (-0xAC << 2)
label_1874ac:
    if (ctx->pc == 0x1874ACu) {
        ctx->pc = 0x1874B0u;
        goto label_1874b0;
    }
    ctx->pc = 0x1874A8u;
    {
        const bool branch_taken_0x1874a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1874a8) {
            ctx->pc = 0x1871FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1871fc;
        }
    }
    ctx->pc = 0x1874B0u;
label_1874b0:
    // 0x1874b0: 0xc05103c  jal         func_1440F0
label_1874b4:
    if (ctx->pc == 0x1874B4u) {
        ctx->pc = 0x1874B8u;
        goto label_1874b8;
    }
    ctx->pc = 0x1874B0u;
    SET_GPR_U32(ctx, 31, 0x1874B8u);
    ctx->pc = 0x1440F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1440F0u, 0x1874B0u, 0x1874B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1874B8u;
label_1874b8:
    // 0x1874b8: 0x38420050  xori        $v0, $v0, 0x50
    ctx->pc = 0x1874b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)80);
label_1874bc:
    // 0x1874bc: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_1874c0:
    if (ctx->pc == 0x1874C0u) {
        ctx->pc = 0x1874C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874BCu;
        // 0x1874c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1874C4u;
        goto label_1874c4;
    }
    ctx->pc = 0x1874BCu;
    {
        const bool branch_taken_0x1874bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1874C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874BCu;
        // 0x1874c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1874bc) {
            ctx->pc = 0x1875D4u;
            goto label_1875d4;
        }
    }
    ctx->pc = 0x1874C4u;
label_1874c4:
    // 0x1874c4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1874c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1874c8:
    // 0x1874c8: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1874c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1874cc:
    // 0x1874cc: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1874ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1874d0:
    // 0x1874d0: 0x24a52ce8  addiu       $a1, $a1, 0x2CE8
    ctx->pc = 0x1874d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11496));
label_1874d4:
    // 0x1874d4: 0x25082b28  addiu       $t0, $t0, 0x2B28
    ctx->pc = 0x1874d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11048));
label_1874d8:
    // 0x1874d8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1874d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1874dc:
    // 0x1874dc: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1874dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1874e0:
    // 0x1874e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1874e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1874e4:
    // 0x1874e4: 0x2409056e  addiu       $t1, $zero, 0x56E
    ctx->pc = 0x1874e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1390));
label_1874e8:
    // 0x1874e8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1874e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1874ec:
    // 0x1874ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1874ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1874f0:
    // 0x1874f0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1874f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1874f4:
    // 0x1874f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1874f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1874f8:
    // 0x1874f8: 0x40f809  jalr        $v0
label_1874fc:
    if (ctx->pc == 0x1874FCu) {
        ctx->pc = 0x1874FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874F8u;
        // 0x1874fc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187500u;
        goto label_187500;
    }
    ctx->pc = 0x1874F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187500u);
        ctx->pc = 0x1874FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874F8u;
        // 0x1874fc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1874F8u, 0x187500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187500u;
label_187500:
    // 0x187500: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x187500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187504:
    // 0x187504: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_187508:
    if (ctx->pc == 0x187508u) {
        ctx->pc = 0x187508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187504u;
        // 0x187508: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18750Cu;
        goto label_18750c;
    }
    ctx->pc = 0x187504u;
    {
        const bool branch_taken_0x187504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x187508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187504u;
        // 0x187508: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187504) {
            ctx->pc = 0x187530u;
            goto label_187530;
        }
    }
    ctx->pc = 0x18750Cu;
label_18750c:
    // 0x18750c: 0xc051048  jal         func_144120
label_187510:
    if (ctx->pc == 0x187510u) {
        ctx->pc = 0x187510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18750Cu;
        // 0x187510: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187514u;
        goto label_187514;
    }
    ctx->pc = 0x18750Cu;
    SET_GPR_U32(ctx, 31, 0x187514u);
    ctx->pc = 0x187510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18750Cu;
    // 0x187510: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x18750Cu, 0x187514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187514u;
label_187514:
    // 0x187514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187518:
    // 0x187518: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x187518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18751c:
    // 0x18751c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18751cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187520:
    // 0x187520: 0xc060492  jal         func_181248
label_187524:
    if (ctx->pc == 0x187524u) {
        ctx->pc = 0x187524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187520u;
        // 0x187524: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187528u;
        goto label_187528;
    }
    ctx->pc = 0x187520u;
    SET_GPR_U32(ctx, 31, 0x187528u);
    ctx->pc = 0x187524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187520u;
    // 0x187524: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181248u, 0x187520u, 0x187528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187528u;
label_187528:
    // 0x187528: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x187528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18752c:
    // 0x18752c: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x18752cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_187530:
    // 0x187530: 0xc061e78  jal         func_1879E0
label_187534:
    if (ctx->pc == 0x187534u) {
        ctx->pc = 0x187534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187530u;
        // 0x187534: 0x26b00010  addiu       $s0, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187538u;
        goto label_187538;
    }
    ctx->pc = 0x187530u;
    SET_GPR_U32(ctx, 31, 0x187538u);
    ctx->pc = 0x187534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187530u;
    // 0x187534: 0x26b00010  addiu       $s0, $s5, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879E0u, 0x187530u, 0x187538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187538u;
label_187538:
    // 0x187538: 0x27b2006c  addiu       $s2, $sp, 0x6C
    ctx->pc = 0x187538u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_18753c:
    // 0x18753c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x18753cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_187540:
    // 0x187540: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x187540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_187544:
    // 0x187544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187548:
    // 0x187548: 0xc13830a  jal         func_4E0C28
label_18754c:
    if (ctx->pc == 0x18754Cu) {
        ctx->pc = 0x18754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187548u;
        // 0x18754c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187550u;
        goto label_187550;
    }
    ctx->pc = 0x187548u;
    SET_GPR_U32(ctx, 31, 0x187550u);
    ctx->pc = 0x18754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187548u;
    // 0x18754c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0C28u, 0x187548u, 0x187550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187550u;
label_187550:
    // 0x187550: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x187550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_187554:
    // 0x187554: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187558:
    // 0x187558: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x187558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18755c:
    // 0x18755c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_187560:
    if (ctx->pc == 0x187560u) {
        ctx->pc = 0x187560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18755Cu;
        // 0x187560: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187564u;
        goto label_187564;
    }
    ctx->pc = 0x18755Cu;
    {
        const bool branch_taken_0x18755c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18755Cu;
        // 0x187560: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18755c) {
            ctx->pc = 0x187578u;
            goto label_187578;
        }
    }
    ctx->pc = 0x187564u;
label_187564:
    // 0x187564: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x187564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_187568:
    // 0x187568: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x187568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_18756c:
    // 0x18756c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x18756cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_187570:
    // 0x187570: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_187574:
    if (ctx->pc == 0x187574u) {
        ctx->pc = 0x187578u;
        goto label_187578;
    }
    ctx->pc = 0x187570u;
    {
        const bool branch_taken_0x187570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187570) {
            ctx->pc = 0x18757Cu;
            goto label_18757c;
        }
    }
    ctx->pc = 0x187578u;
label_187578:
    // 0x187578: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18757c:
    // 0x18757c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_187580:
    if (ctx->pc == 0x187580u) {
        ctx->pc = 0x187580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18757Cu;
        // 0x187580: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187584u;
        goto label_187584;
    }
    ctx->pc = 0x18757Cu;
    {
        const bool branch_taken_0x18757c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18757Cu;
        // 0x187580: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18757c) {
            ctx->pc = 0x1875B4u;
            goto label_1875b4;
        }
    }
    ctx->pc = 0x187584u;
label_187584:
    // 0x187584: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187588:
    // 0x187588: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x187588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18758c:
    // 0x18758c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x18758cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_187590:
    // 0x187590: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x187590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_187594:
    // 0x187594: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x187594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_187598:
    // 0x187598: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x187598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_18759c:
    // 0x18759c: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x18759cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1875a0:
    // 0x1875a0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1875a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1875a4:
    // 0x1875a4: 0xc138464  jal         func_4E1190
label_1875a8:
    if (ctx->pc == 0x1875A8u) {
        ctx->pc = 0x1875A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875A4u;
        // 0x1875a8: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1875ACu;
        goto label_1875ac;
    }
    ctx->pc = 0x1875A4u;
    SET_GPR_U32(ctx, 31, 0x1875ACu);
    ctx->pc = 0x1875A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1875A4u;
    // 0x1875a8: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1190u, 0x1875A4u, 0x1875ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1875ACu;
label_1875ac:
    // 0x1875ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1875acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1875b0:
    // 0x1875b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1875b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1875b4:
    // 0x1875b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1875b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1875b8:
    // 0x1875b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1875b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1875bc:
    // 0x1875bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1875bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1875c0:
    // 0x1875c0: 0xac510014  sw          $s1, 0x14($v0)
    ctx->pc = 0x1875c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 17));
label_1875c4:
    // 0x1875c4: 0xc05e2f2  jal         func_178BC8
label_1875c8:
    if (ctx->pc == 0x1875C8u) {
        ctx->pc = 0x1875C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875C4u;
        // 0x1875c8: 0x8fa5006c  lw          $a1, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1875CCu;
        goto label_1875cc;
    }
    ctx->pc = 0x1875C4u;
    SET_GPR_U32(ctx, 31, 0x1875CCu);
    ctx->pc = 0x1875C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1875C4u;
    // 0x1875c8: 0x8fa5006c  lw          $a1, 0x6C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178BC8u, 0x1875C4u, 0x1875CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1875CCu;
label_1875cc:
    // 0x1875cc: 0x1000ff0b  b           . + 4 + (-0xF5 << 2)
label_1875d0:
    if (ctx->pc == 0x1875D0u) {
        ctx->pc = 0x1875D4u;
        goto label_1875d4;
    }
    ctx->pc = 0x1875CCu;
    {
        const bool branch_taken_0x1875cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1875cc) {
            ctx->pc = 0x1871FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1871fc;
        }
    }
    ctx->pc = 0x1875D4u;
label_1875d4:
    // 0x1875d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1875d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1875d8:
    // 0x1875d8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1875d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1875dc:
    // 0x1875dc: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1875dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1875e0:
    // 0x1875e0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1875e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1875e4:
    // 0x1875e4: 0x24a52cf8  addiu       $a1, $a1, 0x2CF8
    ctx->pc = 0x1875e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11512));
label_1875e8:
    // 0x1875e8: 0x25082b28  addiu       $t0, $t0, 0x2B28
    ctx->pc = 0x1875e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11048));
label_1875ec:
    // 0x1875ec: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1875ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1875f0:
    // 0x1875f0: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1875f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1875f4:
    // 0x1875f4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1875f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1875f8:
    // 0x1875f8: 0x24090582  addiu       $t1, $zero, 0x582
    ctx->pc = 0x1875f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1410));
label_1875fc:
    // 0x1875fc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1875fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_187600:
    // 0x187600: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x187600u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187604:
    // 0x187604: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x187604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_187608:
    // 0x187608: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x187608u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18760c:
    // 0x18760c: 0x40f809  jalr        $v0
label_187610:
    if (ctx->pc == 0x187610u) {
        ctx->pc = 0x187610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18760Cu;
        // 0x187610: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187614u;
        goto label_187614;
    }
    ctx->pc = 0x18760Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187614u);
        ctx->pc = 0x187610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18760Cu;
        // 0x187610: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18760Cu, 0x187614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187614u;
label_187614:
    // 0x187614: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x187614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187618:
    // 0x187618: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_18761c:
    if (ctx->pc == 0x18761Cu) {
        ctx->pc = 0x18761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187618u;
        // 0x18761c: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187620u;
        goto label_187620;
    }
    ctx->pc = 0x187618u;
    {
        const bool branch_taken_0x187618 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187618u;
        // 0x18761c: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187618) {
            ctx->pc = 0x187644u;
            goto label_187644;
        }
    }
    ctx->pc = 0x187620u;
label_187620:
    // 0x187620: 0xc051048  jal         func_144120
label_187624:
    if (ctx->pc == 0x187624u) {
        ctx->pc = 0x187624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187620u;
        // 0x187624: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187628u;
        goto label_187628;
    }
    ctx->pc = 0x187620u;
    SET_GPR_U32(ctx, 31, 0x187628u);
    ctx->pc = 0x187624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187620u;
    // 0x187624: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x187620u, 0x187628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187628u;
label_187628:
    // 0x187628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18762c:
    // 0x18762c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18762cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187630:
    // 0x187630: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x187630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187634:
    // 0x187634: 0xc05ce4a  jal         func_173928
label_187638:
    if (ctx->pc == 0x187638u) {
        ctx->pc = 0x187638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187634u;
        // 0x187638: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18763Cu;
        goto label_18763c;
    }
    ctx->pc = 0x187634u;
    SET_GPR_U32(ctx, 31, 0x18763Cu);
    ctx->pc = 0x187638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187634u;
    // 0x187638: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173928u, 0x187634u, 0x18763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18763Cu;
label_18763c:
    // 0x18763c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18763cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187640:
    // 0x187640: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x187640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_187644:
    // 0x187644: 0xc061e78  jal         func_1879E0
label_187648:
    if (ctx->pc == 0x187648u) {
        ctx->pc = 0x187648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187644u;
        // 0x187648: 0x26b00020  addiu       $s0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18764Cu;
        goto label_18764c;
    }
    ctx->pc = 0x187644u;
    SET_GPR_U32(ctx, 31, 0x18764Cu);
    ctx->pc = 0x187648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187644u;
    // 0x187648: 0x26b00020  addiu       $s0, $s5, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879E0u, 0x187644u, 0x18764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18764Cu;
label_18764c:
    // 0x18764c: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x18764cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_187650:
    // 0x187650: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x187650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_187654:
    // 0x187654: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x187654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_187658:
    // 0x187658: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18765c:
    // 0x18765c: 0xc1384d0  jal         func_4E1340
label_187660:
    if (ctx->pc == 0x187660u) {
        ctx->pc = 0x187660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18765Cu;
        // 0x187660: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187664u;
        goto label_187664;
    }
    ctx->pc = 0x18765Cu;
    SET_GPR_U32(ctx, 31, 0x187664u);
    ctx->pc = 0x187660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18765Cu;
    // 0x187660: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1340u, 0x18765Cu, 0x187664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187664u;
label_187664:
    // 0x187664: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x187664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_187668:
    // 0x187668: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18766c:
    // 0x18766c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_187670:
    // 0x187670: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_187674:
    if (ctx->pc == 0x187674u) {
        ctx->pc = 0x187674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187670u;
        // 0x187674: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187678u;
        goto label_187678;
    }
    ctx->pc = 0x187670u;
    {
        const bool branch_taken_0x187670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187670u;
        // 0x187674: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187670) {
            ctx->pc = 0x18768Cu;
            goto label_18768c;
        }
    }
    ctx->pc = 0x187678u;
label_187678:
    // 0x187678: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x187678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18767c:
    // 0x18767c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x18767cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_187680:
    // 0x187680: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x187680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_187684:
    // 0x187684: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_187688:
    if (ctx->pc == 0x187688u) {
        ctx->pc = 0x18768Cu;
        goto label_18768c;
    }
    ctx->pc = 0x187684u;
    {
        const bool branch_taken_0x187684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187684) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x18768Cu;
label_18768c:
    // 0x18768c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187690:
    // 0x187690: 0x1080fed8  beqz        $a0, . + 4 + (-0x128 << 2)
label_187694:
    if (ctx->pc == 0x187694u) {
        ctx->pc = 0x187694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187690u;
        // 0x187694: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187698u;
        goto label_187698;
    }
    ctx->pc = 0x187690u;
    {
        const bool branch_taken_0x187690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187690u;
        // 0x187694: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187690) {
            ctx->pc = 0x1871F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1871f4;
        }
    }
    ctx->pc = 0x187698u;
label_187698:
    // 0x187698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18769c:
    // 0x18769c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1876a0:
    // 0x1876a0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1876a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1876a4:
    // 0x1876a4: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1876a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_1876a8:
    // 0x1876a8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1876a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1876ac:
    // 0x1876ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1876acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1876b0:
    // 0x1876b0: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1876b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1876b4:
    // 0x1876b4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1876b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1876b8:
    // 0x1876b8: 0xc13862a  jal         func_4E18A8
label_1876bc:
    if (ctx->pc == 0x1876BCu) {
        ctx->pc = 0x1876BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876B8u;
        // 0x1876bc: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1876C0u;
        goto label_1876c0;
    }
    ctx->pc = 0x1876B8u;
    SET_GPR_U32(ctx, 31, 0x1876C0u);
    ctx->pc = 0x1876BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1876B8u;
    // 0x1876bc: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E18A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E18A8u, 0x1876B8u, 0x1876C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1876C0u;
label_1876c0:
    // 0x1876c0: 0x1000fecb  b           . + 4 + (-0x135 << 2)
label_1876c4:
    if (ctx->pc == 0x1876C4u) {
        ctx->pc = 0x1876C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876C0u;
        // 0x1876c4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1876C8u;
        goto label_1876c8;
    }
    ctx->pc = 0x1876C0u;
    {
        const bool branch_taken_0x1876c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876C0u;
        // 0x1876c4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876c0) {
            ctx->pc = 0x1871F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1871f0;
        }
    }
    ctx->pc = 0x1876C8u;
label_1876c8:
    // 0x1876c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1876c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1876cc:
    // 0x1876cc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1876ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1876d0:
    // 0x1876d0: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1876d0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1876d4:
    // 0x1876d4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1876d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1876d8:
    // 0x1876d8: 0x24a52d08  addiu       $a1, $a1, 0x2D08
    ctx->pc = 0x1876d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11528));
label_1876dc:
    // 0x1876dc: 0x25082b28  addiu       $t0, $t0, 0x2B28
    ctx->pc = 0x1876dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11048));
label_1876e0:
    // 0x1876e0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1876e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1876e4:
    // 0x1876e4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1876e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1876e8:
    // 0x1876e8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1876e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1876ec:
    // 0x1876ec: 0x24090590  addiu       $t1, $zero, 0x590
    ctx->pc = 0x1876ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
label_1876f0:
    // 0x1876f0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1876f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1876f4:
    // 0x1876f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1876f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1876f8:
    // 0x1876f8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1876f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1876fc:
    // 0x1876fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1876fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187700:
    // 0x187700: 0x40f809  jalr        $v0
label_187704:
    if (ctx->pc == 0x187704u) {
        ctx->pc = 0x187704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187700u;
        // 0x187704: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187708u;
        goto label_187708;
    }
    ctx->pc = 0x187700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187708u);
        ctx->pc = 0x187704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187700u;
        // 0x187704: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187700u, 0x187708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187708u;
label_187708:
    // 0x187708: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x187708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18770c:
    // 0x18770c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_187710:
    if (ctx->pc == 0x187710u) {
        ctx->pc = 0x187710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18770Cu;
        // 0x187710: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187714u;
        goto label_187714;
    }
    ctx->pc = 0x18770Cu;
    {
        const bool branch_taken_0x18770c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x187710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18770Cu;
        // 0x187710: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18770c) {
            ctx->pc = 0x187738u;
            goto label_187738;
        }
    }
    ctx->pc = 0x187714u;
label_187714:
    // 0x187714: 0xc051048  jal         func_144120
label_187718:
    if (ctx->pc == 0x187718u) {
        ctx->pc = 0x187718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187714u;
        // 0x187718: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18771Cu;
        goto label_18771c;
    }
    ctx->pc = 0x187714u;
    SET_GPR_U32(ctx, 31, 0x18771Cu);
    ctx->pc = 0x187718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187714u;
    // 0x187718: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x187714u, 0x18771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18771Cu;
label_18771c:
    // 0x18771c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18771cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187720:
    // 0x187720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x187720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187724:
    // 0x187724: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x187724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187728:
    // 0x187728: 0xc0606da  jal         func_181B68
label_18772c:
    if (ctx->pc == 0x18772Cu) {
        ctx->pc = 0x18772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187728u;
        // 0x18772c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187730u;
        goto label_187730;
    }
    ctx->pc = 0x187728u;
    SET_GPR_U32(ctx, 31, 0x187730u);
    ctx->pc = 0x18772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187728u;
    // 0x18772c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181B68u, 0x187728u, 0x187730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187730u;
label_187730:
    // 0x187730: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x187730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187734:
    // 0x187734: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x187734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_187738:
    // 0x187738: 0xc061e78  jal         func_1879E0
label_18773c:
    if (ctx->pc == 0x18773Cu) {
        ctx->pc = 0x18773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187738u;
        // 0x18773c: 0x26b00060  addiu       $s0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187740u;
        goto label_187740;
    }
    ctx->pc = 0x187738u;
    SET_GPR_U32(ctx, 31, 0x187740u);
    ctx->pc = 0x18773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187738u;
    // 0x18773c: 0x26b00060  addiu       $s0, $s5, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879E0u, 0x187738u, 0x187740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187740u;
label_187740:
    // 0x187740: 0x27b20074  addiu       $s2, $sp, 0x74
    ctx->pc = 0x187740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_187744:
    // 0x187744: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x187744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_187748:
    // 0x187748: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x187748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18774c:
    // 0x18774c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18774cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187750:
    // 0x187750: 0xc138696  jal         func_4E1A58
label_187754:
    if (ctx->pc == 0x187754u) {
        ctx->pc = 0x187754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187750u;
        // 0x187754: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187758u;
        goto label_187758;
    }
    ctx->pc = 0x187750u;
    SET_GPR_U32(ctx, 31, 0x187758u);
    ctx->pc = 0x187754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187750u;
    // 0x187754: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1A58u, 0x187750u, 0x187758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187758u;
label_187758:
    // 0x187758: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x187758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18775c:
    // 0x18775c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18775cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187760:
    // 0x187760: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x187760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_187764:
    // 0x187764: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_187768:
    if (ctx->pc == 0x187768u) {
        ctx->pc = 0x187768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187764u;
        // 0x187768: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18776Cu;
        goto label_18776c;
    }
    ctx->pc = 0x187764u;
    {
        const bool branch_taken_0x187764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187764u;
        // 0x187768: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187764) {
            ctx->pc = 0x187780u;
            goto label_187780;
        }
    }
    ctx->pc = 0x18776Cu;
label_18776c:
    // 0x18776c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x18776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_187770:
    // 0x187770: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x187770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_187774:
    // 0x187774: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x187774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_187778:
    // 0x187778: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18777c:
    if (ctx->pc == 0x18777Cu) {
        ctx->pc = 0x187780u;
        goto label_187780;
    }
    ctx->pc = 0x187778u;
    {
        const bool branch_taken_0x187778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187778) {
            ctx->pc = 0x187784u;
            goto label_187784;
        }
    }
    ctx->pc = 0x187780u;
label_187780:
    // 0x187780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187784:
    // 0x187784: 0x1080fe9b  beqz        $a0, . + 4 + (-0x165 << 2)
label_187788:
    if (ctx->pc == 0x187788u) {
        ctx->pc = 0x187788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187784u;
        // 0x187788: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18778Cu;
        goto label_18778c;
    }
    ctx->pc = 0x187784u;
    {
        const bool branch_taken_0x187784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187784u;
        // 0x187788: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187784) {
            ctx->pc = 0x1871F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1871f4;
        }
    }
    ctx->pc = 0x18778Cu;
label_18778c:
    // 0x18778c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18778cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187790:
    // 0x187790: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x187790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_187794:
    // 0x187794: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x187794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_187798:
    // 0x187798: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x187798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_18779c:
    // 0x18779c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x18779cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1877a0:
    // 0x1877a0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1877a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1877a4:
    // 0x1877a4: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1877a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1877a8:
    // 0x1877a8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1877a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1877ac:
    // 0x1877ac: 0xc1387f0  jal         func_4E1FC0
label_1877b0:
    if (ctx->pc == 0x1877B0u) {
        ctx->pc = 0x1877B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877ACu;
        // 0x1877b0: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1877B4u;
        goto label_1877b4;
    }
    ctx->pc = 0x1877ACu;
    SET_GPR_U32(ctx, 31, 0x1877B4u);
    ctx->pc = 0x1877B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877ACu;
    // 0x1877b0: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E1FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E1FC0u, 0x1877ACu, 0x1877B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877B4u;
label_1877b4:
    // 0x1877b4: 0x1000fe8e  b           . + 4 + (-0x172 << 2)
label_1877b8:
    if (ctx->pc == 0x1877B8u) {
        ctx->pc = 0x1877B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877B4u;
        // 0x1877b8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1877BCu;
        goto label_1877bc;
    }
    ctx->pc = 0x1877B4u;
    {
        const bool branch_taken_0x1877b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877B4u;
        // 0x1877b8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877b4) {
            ctx->pc = 0x1871F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1871f0;
        }
    }
    ctx->pc = 0x1877BCu;
label_1877bc:
    // 0x1877bc: 0xc051028  jal         func_1440A0
label_1877c0:
    if (ctx->pc == 0x1877C0u) {
        ctx->pc = 0x1877C4u;
        goto label_1877c4;
    }
    ctx->pc = 0x1877BCu;
    SET_GPR_U32(ctx, 31, 0x1877C4u);
    ctx->pc = 0x1440A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1440A0u, 0x1877BCu, 0x1877C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877C4u;
label_1877c4:
    // 0x1877c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1877c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1877c8:
    // 0x1877c8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1877c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1877cc:
    // 0x1877cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1877ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1877d0:
    // 0x1877d0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1877d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1877d4:
    // 0x1877d4: 0x8c4b27e4  lw          $t3, 0x27E4($v0)
    ctx->pc = 0x1877d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1877d8:
    // 0x1877d8: 0x24a52d18  addiu       $a1, $a1, 0x2D18
    ctx->pc = 0x1877d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11544));
label_1877dc:
    // 0x1877dc: 0x25082b28  addiu       $t0, $t0, 0x2B28
    ctx->pc = 0x1877dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11048));
label_1877e0:
    // 0x1877e0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1877e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1877e4:
    // 0x1877e4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1877e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1877e8:
    // 0x1877e8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1877e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1877ec:
    // 0x1877ec: 0x240905a1  addiu       $t1, $zero, 0x5A1
    ctx->pc = 0x1877ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1441));
label_1877f0:
    // 0x1877f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1877f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1877f4:
    // 0x1877f4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1877f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1877f8:
    // 0x1877f8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1877f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1877fc:
    // 0x1877fc: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1877fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_187800:
    // 0x187800: 0x40f809  jalr        $v0
label_187804:
    if (ctx->pc == 0x187804u) {
        ctx->pc = 0x187804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187800u;
        // 0x187804: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187808u;
        goto label_187808;
    }
    ctx->pc = 0x187800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187808u);
        ctx->pc = 0x187804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187800u;
        // 0x187804: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187800u, 0x187808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187808u;
label_187808:
    // 0x187808: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x187808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18780c:
    // 0x18780c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_187810:
    if (ctx->pc == 0x187810u) {
        ctx->pc = 0x187810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18780Cu;
        // 0x187810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187814u;
        goto label_187814;
    }
    ctx->pc = 0x18780Cu;
    {
        const bool branch_taken_0x18780c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x187810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18780Cu;
        // 0x187810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18780c) {
            ctx->pc = 0x187828u;
            goto label_187828;
        }
    }
    ctx->pc = 0x187814u;
label_187814:
    // 0x187814: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187818:
    // 0x187818: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x187818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18781c:
    // 0x18781c: 0xc05b9aa  jal         func_16E6A8
label_187820:
    if (ctx->pc == 0x187820u) {
        ctx->pc = 0x187820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18781Cu;
        // 0x187820: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187824u;
        goto label_187824;
    }
    ctx->pc = 0x18781Cu;
    SET_GPR_U32(ctx, 31, 0x187824u);
    ctx->pc = 0x187820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18781Cu;
    // 0x187820: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E6A8u, 0x18781Cu, 0x187824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187824u;
label_187824:
    // 0x187824: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x187824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187828:
    // 0x187828: 0x26900004  addiu       $s0, $s4, 0x4
    ctx->pc = 0x187828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_18782c:
    // 0x18782c: 0xc061e78  jal         func_1879E0
label_187830:
    if (ctx->pc == 0x187830u) {
        ctx->pc = 0x187830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18782Cu;
        // 0x187830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187834u;
        goto label_187834;
    }
    ctx->pc = 0x18782Cu;
    SET_GPR_U32(ctx, 31, 0x187834u);
    ctx->pc = 0x187830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18782Cu;
    // 0x187830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879E0u, 0x18782Cu, 0x187834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187834u;
label_187834:
    // 0x187834: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_187838:
    if (ctx->pc == 0x187838u) {
        ctx->pc = 0x187838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187834u;
        // 0x187838: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18783Cu;
        goto label_18783c;
    }
    ctx->pc = 0x187834u;
    {
        const bool branch_taken_0x187834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187834u;
        // 0x187838: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187834) {
            ctx->pc = 0x187848u;
            goto label_187848;
        }
    }
    ctx->pc = 0x18783Cu;
label_18783c:
    // 0x18783c: 0xc061e92  jal         func_187A48
label_187840:
    if (ctx->pc == 0x187840u) {
        ctx->pc = 0x187840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18783Cu;
        // 0x187840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187844u;
        goto label_187844;
    }
    ctx->pc = 0x18783Cu;
    SET_GPR_U32(ctx, 31, 0x187844u);
    ctx->pc = 0x187840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18783Cu;
    // 0x187840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187A48u, 0x18783Cu, 0x187844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187844u;
label_187844:
    // 0x187844: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x187844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_187848:
    // 0x187848: 0x26b00050  addiu       $s0, $s5, 0x50
    ctx->pc = 0x187848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_18784c:
    // 0x18784c: 0x27b20078  addiu       $s2, $sp, 0x78
    ctx->pc = 0x18784cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_187850:
    // 0x187850: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x187850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_187854:
    // 0x187854: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187858:
    // 0x187858: 0xc13885c  jal         func_4E2170
label_18785c:
    if (ctx->pc == 0x18785Cu) {
        ctx->pc = 0x18785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187858u;
        // 0x18785c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187860u;
        goto label_187860;
    }
    ctx->pc = 0x187858u;
    SET_GPR_U32(ctx, 31, 0x187860u);
    ctx->pc = 0x18785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187858u;
    // 0x18785c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2170u, 0x187858u, 0x187860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187860u;
label_187860:
    // 0x187860: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x187860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_187864:
    // 0x187864: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187868:
    // 0x187868: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x187868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18786c:
    // 0x18786c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_187870:
    if (ctx->pc == 0x187870u) {
        ctx->pc = 0x187870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18786Cu;
        // 0x187870: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187874u;
        goto label_187874;
    }
    ctx->pc = 0x18786Cu;
    {
        const bool branch_taken_0x18786c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18786Cu;
        // 0x187870: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18786c) {
            ctx->pc = 0x187888u;
            goto label_187888;
        }
    }
    ctx->pc = 0x187874u;
label_187874:
    // 0x187874: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x187874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_187878:
    // 0x187878: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x187878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_18787c:
    // 0x18787c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x18787cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_187880:
    // 0x187880: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_187884:
    if (ctx->pc == 0x187884u) {
        ctx->pc = 0x187888u;
        goto label_187888;
    }
    ctx->pc = 0x187880u;
    {
        const bool branch_taken_0x187880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187880) {
            ctx->pc = 0x18788Cu;
            goto label_18788c;
        }
    }
    ctx->pc = 0x187888u;
label_187888:
    // 0x187888: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18788c:
    // 0x18788c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_187890:
    if (ctx->pc == 0x187890u) {
        ctx->pc = 0x187890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18788Cu;
        // 0x187890: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187894u;
        goto label_187894;
    }
    ctx->pc = 0x18788Cu;
    {
        const bool branch_taken_0x18788c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18788Cu;
        // 0x187890: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18788c) {
            ctx->pc = 0x1878C4u;
            goto label_1878c4;
        }
    }
    ctx->pc = 0x187894u;
label_187894:
    // 0x187894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187898:
    // 0x187898: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x187898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18789c:
    // 0x18789c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x18789cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1878a0:
    // 0x1878a0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1878a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_1878a4:
    // 0x1878a4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1878a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1878a8:
    // 0x1878a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1878a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1878ac:
    // 0x1878ac: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1878acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1878b0:
    // 0x1878b0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1878b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1878b4:
    // 0x1878b4: 0xc1389b6  jal         func_4E26D8
label_1878b8:
    if (ctx->pc == 0x1878B8u) {
        ctx->pc = 0x1878B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878B4u;
        // 0x1878b8: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1878BCu;
        goto label_1878bc;
    }
    ctx->pc = 0x1878B4u;
    SET_GPR_U32(ctx, 31, 0x1878BCu);
    ctx->pc = 0x1878B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878B4u;
    // 0x1878b8: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E26D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E26D8u, 0x1878B4u, 0x1878BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878BCu;
label_1878bc:
    // 0x1878bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1878bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1878c0:
    // 0x1878c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1878c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1878c4:
    // 0x1878c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1878c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1878c8:
    // 0x1878c8: 0x12e00019  beqz        $s7, . + 4 + (0x19 << 2)
label_1878cc:
    if (ctx->pc == 0x1878CCu) {
        ctx->pc = 0x1878CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878C8u;
        // 0x1878cc: 0xac510014  sw          $s1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1878D0u;
        goto label_1878d0;
    }
    ctx->pc = 0x1878C8u;
    {
        const bool branch_taken_0x1878c8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878C8u;
        // 0x1878cc: 0xac510014  sw          $s1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878c8) {
            ctx->pc = 0x187930u;
            goto label_187930;
        }
    }
    ctx->pc = 0x1878D0u;
label_1878d0:
    // 0x1878d0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1878d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1878d4:
    // 0x1878d4: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x1878d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_1878d8:
    // 0x1878d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1878d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1878dc:
    // 0x1878dc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1878dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1878e0:
    // 0x1878e0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1878e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1878e4:
    // 0x1878e4: 0x40f809  jalr        $v0
label_1878e8:
    if (ctx->pc == 0x1878E8u) {
        ctx->pc = 0x1878E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878E4u;
        // 0x1878e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1878ECu;
        goto label_1878ec;
    }
    ctx->pc = 0x1878E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1878ECu);
        ctx->pc = 0x1878E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878E4u;
        // 0x1878e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1878E4u, 0x1878ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1878ECu;
label_1878ec:
    // 0x1878ec: 0x24430bb8  addiu       $v1, $v0, 0xBB8
    ctx->pc = 0x1878ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_1878f0:
    // 0x1878f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1878f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1878f4:
    // 0x1878f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1878f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1878f8:
    // 0x1878f8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1878fc:
    if (ctx->pc == 0x1878FCu) {
        ctx->pc = 0x1878FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878F8u;
        // 0x1878fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187900u;
        goto label_187900;
    }
    ctx->pc = 0x1878F8u;
    {
        const bool branch_taken_0x1878f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1878FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878F8u;
        // 0x1878fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878f8) {
            ctx->pc = 0x187920u;
            goto label_187920;
        }
    }
    ctx->pc = 0x187900u;
label_187900:
    // 0x187900: 0x8e05b8b8  lw          $a1, -0x4748($s0)
    ctx->pc = 0x187900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949048)));
label_187904:
    // 0x187904: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x187904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_187908:
    // 0x187908: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x187908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18790c:
    // 0x18790c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_187910:
    // 0x187910: 0x40f809  jalr        $v0
label_187914:
    if (ctx->pc == 0x187914u) {
        ctx->pc = 0x187914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187910u;
        // 0x187914: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187918u;
        goto label_187918;
    }
    ctx->pc = 0x187910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187918u);
        ctx->pc = 0x187914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187910u;
        // 0x187914: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187910u, 0x187918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187918u;
label_187918:
    // 0x187918: 0x10000005  b           . + 4 + (0x5 << 2)
label_18791c:
    if (ctx->pc == 0x18791Cu) {
        ctx->pc = 0x18791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187918u;
        // 0x18791c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187920u;
        goto label_187920;
    }
    ctx->pc = 0x187918u;
    {
        const bool branch_taken_0x187918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187918u;
        // 0x18791c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187918) {
            ctx->pc = 0x187930u;
            goto label_187930;
        }
    }
    ctx->pc = 0x187920u;
label_187920:
    // 0x187920: 0x10000003  b           . + 4 + (0x3 << 2)
label_187924:
    if (ctx->pc == 0x187924u) {
        ctx->pc = 0x187924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187920u;
        // 0x187924: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187928u;
        goto label_187928;
    }
    ctx->pc = 0x187920u;
    {
        const bool branch_taken_0x187920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187920u;
        // 0x187924: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187920) {
            ctx->pc = 0x187930u;
            goto label_187930;
        }
    }
    ctx->pc = 0x187928u;
label_187928:
    // 0x187928: 0x10000002  b           . + 4 + (0x2 << 2)
label_18792c:
    if (ctx->pc == 0x18792Cu) {
        ctx->pc = 0x18792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187928u;
        // 0x18792c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187930u;
        goto label_187930;
    }
    ctx->pc = 0x187928u;
    {
        const bool branch_taken_0x187928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187928u;
        // 0x18792c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187928) {
            ctx->pc = 0x187934u;
            goto label_187934;
        }
    }
    ctx->pc = 0x187930u;
label_187930:
    // 0x187930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187934:
    // 0x187934: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x187934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_187938:
    // 0x187938: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x187938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_18793c:
    // 0x18793c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x18793cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_187940:
    // 0x187940: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x187940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_187944:
    // 0x187944: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x187944u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_187948:
    // 0x187948: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x187948u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_18794c:
    // 0x18794c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x18794cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_187950:
    // 0x187950: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x187950u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_187954:
    // 0x187954: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x187954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_187958:
    // 0x187958: 0x3e00008  jr          $ra
label_18795c:
    if (ctx->pc == 0x18795Cu) {
        ctx->pc = 0x18795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187958u;
        // 0x18795c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187960u;
        goto label_fallthrough_0x187958;
    }
    ctx->pc = 0x187958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187958u;
        // 0x18795c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x187958:
    ctx->pc = 0x187960u;
}
