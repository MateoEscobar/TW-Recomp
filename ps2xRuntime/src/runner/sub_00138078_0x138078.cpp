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

// Function: sub_00138078
// Address: 0x138078 - 0x138b90
void sub_00138078_0x138078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138078_0x138078");
#endif

    switch (ctx->pc) {
        case 0x138078u: goto label_138078;
        case 0x13807cu: goto label_13807c;
        case 0x138080u: goto label_138080;
        case 0x138084u: goto label_138084;
        case 0x138088u: goto label_138088;
        case 0x13808cu: goto label_13808c;
        case 0x138090u: goto label_138090;
        case 0x138094u: goto label_138094;
        case 0x138098u: goto label_138098;
        case 0x13809cu: goto label_13809c;
        case 0x1380a0u: goto label_1380a0;
        case 0x1380a4u: goto label_1380a4;
        case 0x1380a8u: goto label_1380a8;
        case 0x1380acu: goto label_1380ac;
        case 0x1380b0u: goto label_1380b0;
        case 0x1380b4u: goto label_1380b4;
        case 0x1380b8u: goto label_1380b8;
        case 0x1380bcu: goto label_1380bc;
        case 0x1380c0u: goto label_1380c0;
        case 0x1380c4u: goto label_1380c4;
        case 0x1380c8u: goto label_1380c8;
        case 0x1380ccu: goto label_1380cc;
        case 0x1380d0u: goto label_1380d0;
        case 0x1380d4u: goto label_1380d4;
        case 0x1380d8u: goto label_1380d8;
        case 0x1380dcu: goto label_1380dc;
        case 0x1380e0u: goto label_1380e0;
        case 0x1380e4u: goto label_1380e4;
        case 0x1380e8u: goto label_1380e8;
        case 0x1380ecu: goto label_1380ec;
        case 0x1380f0u: goto label_1380f0;
        case 0x1380f4u: goto label_1380f4;
        case 0x1380f8u: goto label_1380f8;
        case 0x1380fcu: goto label_1380fc;
        case 0x138100u: goto label_138100;
        case 0x138104u: goto label_138104;
        case 0x138108u: goto label_138108;
        case 0x13810cu: goto label_13810c;
        case 0x138110u: goto label_138110;
        case 0x138114u: goto label_138114;
        case 0x138118u: goto label_138118;
        case 0x13811cu: goto label_13811c;
        case 0x138120u: goto label_138120;
        case 0x138124u: goto label_138124;
        case 0x138128u: goto label_138128;
        case 0x13812cu: goto label_13812c;
        case 0x138130u: goto label_138130;
        case 0x138134u: goto label_138134;
        case 0x138138u: goto label_138138;
        case 0x13813cu: goto label_13813c;
        case 0x138140u: goto label_138140;
        case 0x138144u: goto label_138144;
        case 0x138148u: goto label_138148;
        case 0x13814cu: goto label_13814c;
        case 0x138150u: goto label_138150;
        case 0x138154u: goto label_138154;
        case 0x138158u: goto label_138158;
        case 0x13815cu: goto label_13815c;
        case 0x138160u: goto label_138160;
        case 0x138164u: goto label_138164;
        case 0x138168u: goto label_138168;
        case 0x13816cu: goto label_13816c;
        case 0x138170u: goto label_138170;
        case 0x138174u: goto label_138174;
        case 0x138178u: goto label_138178;
        case 0x13817cu: goto label_13817c;
        case 0x138180u: goto label_138180;
        case 0x138184u: goto label_138184;
        case 0x138188u: goto label_138188;
        case 0x13818cu: goto label_13818c;
        case 0x138190u: goto label_138190;
        case 0x138194u: goto label_138194;
        case 0x138198u: goto label_138198;
        case 0x13819cu: goto label_13819c;
        case 0x1381a0u: goto label_1381a0;
        case 0x1381a4u: goto label_1381a4;
        case 0x1381a8u: goto label_1381a8;
        case 0x1381acu: goto label_1381ac;
        case 0x1381b0u: goto label_1381b0;
        case 0x1381b4u: goto label_1381b4;
        case 0x1381b8u: goto label_1381b8;
        case 0x1381bcu: goto label_1381bc;
        case 0x1381c0u: goto label_1381c0;
        case 0x1381c4u: goto label_1381c4;
        case 0x1381c8u: goto label_1381c8;
        case 0x1381ccu: goto label_1381cc;
        case 0x1381d0u: goto label_1381d0;
        case 0x1381d4u: goto label_1381d4;
        case 0x1381d8u: goto label_1381d8;
        case 0x1381dcu: goto label_1381dc;
        case 0x1381e0u: goto label_1381e0;
        case 0x1381e4u: goto label_1381e4;
        case 0x1381e8u: goto label_1381e8;
        case 0x1381ecu: goto label_1381ec;
        case 0x1381f0u: goto label_1381f0;
        case 0x1381f4u: goto label_1381f4;
        case 0x1381f8u: goto label_1381f8;
        case 0x1381fcu: goto label_1381fc;
        case 0x138200u: goto label_138200;
        case 0x138204u: goto label_138204;
        case 0x138208u: goto label_138208;
        case 0x13820cu: goto label_13820c;
        case 0x138210u: goto label_138210;
        case 0x138214u: goto label_138214;
        case 0x138218u: goto label_138218;
        case 0x13821cu: goto label_13821c;
        case 0x138220u: goto label_138220;
        case 0x138224u: goto label_138224;
        case 0x138228u: goto label_138228;
        case 0x13822cu: goto label_13822c;
        case 0x138230u: goto label_138230;
        case 0x138234u: goto label_138234;
        case 0x138238u: goto label_138238;
        case 0x13823cu: goto label_13823c;
        case 0x138240u: goto label_138240;
        case 0x138244u: goto label_138244;
        case 0x138248u: goto label_138248;
        case 0x13824cu: goto label_13824c;
        case 0x138250u: goto label_138250;
        case 0x138254u: goto label_138254;
        case 0x138258u: goto label_138258;
        case 0x13825cu: goto label_13825c;
        case 0x138260u: goto label_138260;
        case 0x138264u: goto label_138264;
        case 0x138268u: goto label_138268;
        case 0x13826cu: goto label_13826c;
        case 0x138270u: goto label_138270;
        case 0x138274u: goto label_138274;
        case 0x138278u: goto label_138278;
        case 0x13827cu: goto label_13827c;
        case 0x138280u: goto label_138280;
        case 0x138284u: goto label_138284;
        case 0x138288u: goto label_138288;
        case 0x13828cu: goto label_13828c;
        case 0x138290u: goto label_138290;
        case 0x138294u: goto label_138294;
        case 0x138298u: goto label_138298;
        case 0x13829cu: goto label_13829c;
        case 0x1382a0u: goto label_1382a0;
        case 0x1382a4u: goto label_1382a4;
        case 0x1382a8u: goto label_1382a8;
        case 0x1382acu: goto label_1382ac;
        case 0x1382b0u: goto label_1382b0;
        case 0x1382b4u: goto label_1382b4;
        case 0x1382b8u: goto label_1382b8;
        case 0x1382bcu: goto label_1382bc;
        case 0x1382c0u: goto label_1382c0;
        case 0x1382c4u: goto label_1382c4;
        case 0x1382c8u: goto label_1382c8;
        case 0x1382ccu: goto label_1382cc;
        case 0x1382d0u: goto label_1382d0;
        case 0x1382d4u: goto label_1382d4;
        case 0x1382d8u: goto label_1382d8;
        case 0x1382dcu: goto label_1382dc;
        case 0x1382e0u: goto label_1382e0;
        case 0x1382e4u: goto label_1382e4;
        case 0x1382e8u: goto label_1382e8;
        case 0x1382ecu: goto label_1382ec;
        case 0x1382f0u: goto label_1382f0;
        case 0x1382f4u: goto label_1382f4;
        case 0x1382f8u: goto label_1382f8;
        case 0x1382fcu: goto label_1382fc;
        case 0x138300u: goto label_138300;
        case 0x138304u: goto label_138304;
        case 0x138308u: goto label_138308;
        case 0x13830cu: goto label_13830c;
        case 0x138310u: goto label_138310;
        case 0x138314u: goto label_138314;
        case 0x138318u: goto label_138318;
        case 0x13831cu: goto label_13831c;
        case 0x138320u: goto label_138320;
        case 0x138324u: goto label_138324;
        case 0x138328u: goto label_138328;
        case 0x13832cu: goto label_13832c;
        case 0x138330u: goto label_138330;
        case 0x138334u: goto label_138334;
        case 0x138338u: goto label_138338;
        case 0x13833cu: goto label_13833c;
        case 0x138340u: goto label_138340;
        case 0x138344u: goto label_138344;
        case 0x138348u: goto label_138348;
        case 0x13834cu: goto label_13834c;
        case 0x138350u: goto label_138350;
        case 0x138354u: goto label_138354;
        case 0x138358u: goto label_138358;
        case 0x13835cu: goto label_13835c;
        case 0x138360u: goto label_138360;
        case 0x138364u: goto label_138364;
        case 0x138368u: goto label_138368;
        case 0x13836cu: goto label_13836c;
        case 0x138370u: goto label_138370;
        case 0x138374u: goto label_138374;
        case 0x138378u: goto label_138378;
        case 0x13837cu: goto label_13837c;
        case 0x138380u: goto label_138380;
        case 0x138384u: goto label_138384;
        case 0x138388u: goto label_138388;
        case 0x13838cu: goto label_13838c;
        case 0x138390u: goto label_138390;
        case 0x138394u: goto label_138394;
        case 0x138398u: goto label_138398;
        case 0x13839cu: goto label_13839c;
        case 0x1383a0u: goto label_1383a0;
        case 0x1383a4u: goto label_1383a4;
        case 0x1383a8u: goto label_1383a8;
        case 0x1383acu: goto label_1383ac;
        case 0x1383b0u: goto label_1383b0;
        case 0x1383b4u: goto label_1383b4;
        case 0x1383b8u: goto label_1383b8;
        case 0x1383bcu: goto label_1383bc;
        case 0x1383c0u: goto label_1383c0;
        case 0x1383c4u: goto label_1383c4;
        case 0x1383c8u: goto label_1383c8;
        case 0x1383ccu: goto label_1383cc;
        case 0x1383d0u: goto label_1383d0;
        case 0x1383d4u: goto label_1383d4;
        case 0x1383d8u: goto label_1383d8;
        case 0x1383dcu: goto label_1383dc;
        case 0x1383e0u: goto label_1383e0;
        case 0x1383e4u: goto label_1383e4;
        case 0x1383e8u: goto label_1383e8;
        case 0x1383ecu: goto label_1383ec;
        case 0x1383f0u: goto label_1383f0;
        case 0x1383f4u: goto label_1383f4;
        case 0x1383f8u: goto label_1383f8;
        case 0x1383fcu: goto label_1383fc;
        case 0x138400u: goto label_138400;
        case 0x138404u: goto label_138404;
        case 0x138408u: goto label_138408;
        case 0x13840cu: goto label_13840c;
        case 0x138410u: goto label_138410;
        case 0x138414u: goto label_138414;
        case 0x138418u: goto label_138418;
        case 0x13841cu: goto label_13841c;
        case 0x138420u: goto label_138420;
        case 0x138424u: goto label_138424;
        case 0x138428u: goto label_138428;
        case 0x13842cu: goto label_13842c;
        case 0x138430u: goto label_138430;
        case 0x138434u: goto label_138434;
        case 0x138438u: goto label_138438;
        case 0x13843cu: goto label_13843c;
        case 0x138440u: goto label_138440;
        case 0x138444u: goto label_138444;
        case 0x138448u: goto label_138448;
        case 0x13844cu: goto label_13844c;
        case 0x138450u: goto label_138450;
        case 0x138454u: goto label_138454;
        case 0x138458u: goto label_138458;
        case 0x13845cu: goto label_13845c;
        case 0x138460u: goto label_138460;
        case 0x138464u: goto label_138464;
        case 0x138468u: goto label_138468;
        case 0x13846cu: goto label_13846c;
        case 0x138470u: goto label_138470;
        case 0x138474u: goto label_138474;
        case 0x138478u: goto label_138478;
        case 0x13847cu: goto label_13847c;
        case 0x138480u: goto label_138480;
        case 0x138484u: goto label_138484;
        case 0x138488u: goto label_138488;
        case 0x13848cu: goto label_13848c;
        case 0x138490u: goto label_138490;
        case 0x138494u: goto label_138494;
        case 0x138498u: goto label_138498;
        case 0x13849cu: goto label_13849c;
        case 0x1384a0u: goto label_1384a0;
        case 0x1384a4u: goto label_1384a4;
        case 0x1384a8u: goto label_1384a8;
        case 0x1384acu: goto label_1384ac;
        case 0x1384b0u: goto label_1384b0;
        case 0x1384b4u: goto label_1384b4;
        case 0x1384b8u: goto label_1384b8;
        case 0x1384bcu: goto label_1384bc;
        case 0x1384c0u: goto label_1384c0;
        case 0x1384c4u: goto label_1384c4;
        case 0x1384c8u: goto label_1384c8;
        case 0x1384ccu: goto label_1384cc;
        case 0x1384d0u: goto label_1384d0;
        case 0x1384d4u: goto label_1384d4;
        case 0x1384d8u: goto label_1384d8;
        case 0x1384dcu: goto label_1384dc;
        case 0x1384e0u: goto label_1384e0;
        case 0x1384e4u: goto label_1384e4;
        case 0x1384e8u: goto label_1384e8;
        case 0x1384ecu: goto label_1384ec;
        case 0x1384f0u: goto label_1384f0;
        case 0x1384f4u: goto label_1384f4;
        case 0x1384f8u: goto label_1384f8;
        case 0x1384fcu: goto label_1384fc;
        case 0x138500u: goto label_138500;
        case 0x138504u: goto label_138504;
        case 0x138508u: goto label_138508;
        case 0x13850cu: goto label_13850c;
        case 0x138510u: goto label_138510;
        case 0x138514u: goto label_138514;
        case 0x138518u: goto label_138518;
        case 0x13851cu: goto label_13851c;
        case 0x138520u: goto label_138520;
        case 0x138524u: goto label_138524;
        case 0x138528u: goto label_138528;
        case 0x13852cu: goto label_13852c;
        case 0x138530u: goto label_138530;
        case 0x138534u: goto label_138534;
        case 0x138538u: goto label_138538;
        case 0x13853cu: goto label_13853c;
        case 0x138540u: goto label_138540;
        case 0x138544u: goto label_138544;
        case 0x138548u: goto label_138548;
        case 0x13854cu: goto label_13854c;
        case 0x138550u: goto label_138550;
        case 0x138554u: goto label_138554;
        case 0x138558u: goto label_138558;
        case 0x13855cu: goto label_13855c;
        case 0x138560u: goto label_138560;
        case 0x138564u: goto label_138564;
        case 0x138568u: goto label_138568;
        case 0x13856cu: goto label_13856c;
        case 0x138570u: goto label_138570;
        case 0x138574u: goto label_138574;
        case 0x138578u: goto label_138578;
        case 0x13857cu: goto label_13857c;
        case 0x138580u: goto label_138580;
        case 0x138584u: goto label_138584;
        case 0x138588u: goto label_138588;
        case 0x13858cu: goto label_13858c;
        case 0x138590u: goto label_138590;
        case 0x138594u: goto label_138594;
        case 0x138598u: goto label_138598;
        case 0x13859cu: goto label_13859c;
        case 0x1385a0u: goto label_1385a0;
        case 0x1385a4u: goto label_1385a4;
        case 0x1385a8u: goto label_1385a8;
        case 0x1385acu: goto label_1385ac;
        case 0x1385b0u: goto label_1385b0;
        case 0x1385b4u: goto label_1385b4;
        case 0x1385b8u: goto label_1385b8;
        case 0x1385bcu: goto label_1385bc;
        case 0x1385c0u: goto label_1385c0;
        case 0x1385c4u: goto label_1385c4;
        case 0x1385c8u: goto label_1385c8;
        case 0x1385ccu: goto label_1385cc;
        case 0x1385d0u: goto label_1385d0;
        case 0x1385d4u: goto label_1385d4;
        case 0x1385d8u: goto label_1385d8;
        case 0x1385dcu: goto label_1385dc;
        case 0x1385e0u: goto label_1385e0;
        case 0x1385e4u: goto label_1385e4;
        case 0x1385e8u: goto label_1385e8;
        case 0x1385ecu: goto label_1385ec;
        case 0x1385f0u: goto label_1385f0;
        case 0x1385f4u: goto label_1385f4;
        case 0x1385f8u: goto label_1385f8;
        case 0x1385fcu: goto label_1385fc;
        case 0x138600u: goto label_138600;
        case 0x138604u: goto label_138604;
        case 0x138608u: goto label_138608;
        case 0x13860cu: goto label_13860c;
        case 0x138610u: goto label_138610;
        case 0x138614u: goto label_138614;
        case 0x138618u: goto label_138618;
        case 0x13861cu: goto label_13861c;
        case 0x138620u: goto label_138620;
        case 0x138624u: goto label_138624;
        case 0x138628u: goto label_138628;
        case 0x13862cu: goto label_13862c;
        case 0x138630u: goto label_138630;
        case 0x138634u: goto label_138634;
        case 0x138638u: goto label_138638;
        case 0x13863cu: goto label_13863c;
        case 0x138640u: goto label_138640;
        case 0x138644u: goto label_138644;
        case 0x138648u: goto label_138648;
        case 0x13864cu: goto label_13864c;
        case 0x138650u: goto label_138650;
        case 0x138654u: goto label_138654;
        case 0x138658u: goto label_138658;
        case 0x13865cu: goto label_13865c;
        case 0x138660u: goto label_138660;
        case 0x138664u: goto label_138664;
        case 0x138668u: goto label_138668;
        case 0x13866cu: goto label_13866c;
        case 0x138670u: goto label_138670;
        case 0x138674u: goto label_138674;
        case 0x138678u: goto label_138678;
        case 0x13867cu: goto label_13867c;
        case 0x138680u: goto label_138680;
        case 0x138684u: goto label_138684;
        case 0x138688u: goto label_138688;
        case 0x13868cu: goto label_13868c;
        case 0x138690u: goto label_138690;
        case 0x138694u: goto label_138694;
        case 0x138698u: goto label_138698;
        case 0x13869cu: goto label_13869c;
        case 0x1386a0u: goto label_1386a0;
        case 0x1386a4u: goto label_1386a4;
        case 0x1386a8u: goto label_1386a8;
        case 0x1386acu: goto label_1386ac;
        case 0x1386b0u: goto label_1386b0;
        case 0x1386b4u: goto label_1386b4;
        case 0x1386b8u: goto label_1386b8;
        case 0x1386bcu: goto label_1386bc;
        case 0x1386c0u: goto label_1386c0;
        case 0x1386c4u: goto label_1386c4;
        case 0x1386c8u: goto label_1386c8;
        case 0x1386ccu: goto label_1386cc;
        case 0x1386d0u: goto label_1386d0;
        case 0x1386d4u: goto label_1386d4;
        case 0x1386d8u: goto label_1386d8;
        case 0x1386dcu: goto label_1386dc;
        case 0x1386e0u: goto label_1386e0;
        case 0x1386e4u: goto label_1386e4;
        case 0x1386e8u: goto label_1386e8;
        case 0x1386ecu: goto label_1386ec;
        case 0x1386f0u: goto label_1386f0;
        case 0x1386f4u: goto label_1386f4;
        case 0x1386f8u: goto label_1386f8;
        case 0x1386fcu: goto label_1386fc;
        case 0x138700u: goto label_138700;
        case 0x138704u: goto label_138704;
        case 0x138708u: goto label_138708;
        case 0x13870cu: goto label_13870c;
        case 0x138710u: goto label_138710;
        case 0x138714u: goto label_138714;
        case 0x138718u: goto label_138718;
        case 0x13871cu: goto label_13871c;
        case 0x138720u: goto label_138720;
        case 0x138724u: goto label_138724;
        case 0x138728u: goto label_138728;
        case 0x13872cu: goto label_13872c;
        case 0x138730u: goto label_138730;
        case 0x138734u: goto label_138734;
        case 0x138738u: goto label_138738;
        case 0x13873cu: goto label_13873c;
        case 0x138740u: goto label_138740;
        case 0x138744u: goto label_138744;
        case 0x138748u: goto label_138748;
        case 0x13874cu: goto label_13874c;
        case 0x138750u: goto label_138750;
        case 0x138754u: goto label_138754;
        case 0x138758u: goto label_138758;
        case 0x13875cu: goto label_13875c;
        case 0x138760u: goto label_138760;
        case 0x138764u: goto label_138764;
        case 0x138768u: goto label_138768;
        case 0x13876cu: goto label_13876c;
        case 0x138770u: goto label_138770;
        case 0x138774u: goto label_138774;
        case 0x138778u: goto label_138778;
        case 0x13877cu: goto label_13877c;
        case 0x138780u: goto label_138780;
        case 0x138784u: goto label_138784;
        case 0x138788u: goto label_138788;
        case 0x13878cu: goto label_13878c;
        case 0x138790u: goto label_138790;
        case 0x138794u: goto label_138794;
        case 0x138798u: goto label_138798;
        case 0x13879cu: goto label_13879c;
        case 0x1387a0u: goto label_1387a0;
        case 0x1387a4u: goto label_1387a4;
        case 0x1387a8u: goto label_1387a8;
        case 0x1387acu: goto label_1387ac;
        case 0x1387b0u: goto label_1387b0;
        case 0x1387b4u: goto label_1387b4;
        case 0x1387b8u: goto label_1387b8;
        case 0x1387bcu: goto label_1387bc;
        case 0x1387c0u: goto label_1387c0;
        case 0x1387c4u: goto label_1387c4;
        case 0x1387c8u: goto label_1387c8;
        case 0x1387ccu: goto label_1387cc;
        case 0x1387d0u: goto label_1387d0;
        case 0x1387d4u: goto label_1387d4;
        case 0x1387d8u: goto label_1387d8;
        case 0x1387dcu: goto label_1387dc;
        case 0x1387e0u: goto label_1387e0;
        case 0x1387e4u: goto label_1387e4;
        case 0x1387e8u: goto label_1387e8;
        case 0x1387ecu: goto label_1387ec;
        case 0x1387f0u: goto label_1387f0;
        case 0x1387f4u: goto label_1387f4;
        case 0x1387f8u: goto label_1387f8;
        case 0x1387fcu: goto label_1387fc;
        case 0x138800u: goto label_138800;
        case 0x138804u: goto label_138804;
        case 0x138808u: goto label_138808;
        case 0x13880cu: goto label_13880c;
        case 0x138810u: goto label_138810;
        case 0x138814u: goto label_138814;
        case 0x138818u: goto label_138818;
        case 0x13881cu: goto label_13881c;
        case 0x138820u: goto label_138820;
        case 0x138824u: goto label_138824;
        case 0x138828u: goto label_138828;
        case 0x13882cu: goto label_13882c;
        case 0x138830u: goto label_138830;
        case 0x138834u: goto label_138834;
        case 0x138838u: goto label_138838;
        case 0x13883cu: goto label_13883c;
        case 0x138840u: goto label_138840;
        case 0x138844u: goto label_138844;
        case 0x138848u: goto label_138848;
        case 0x13884cu: goto label_13884c;
        case 0x138850u: goto label_138850;
        case 0x138854u: goto label_138854;
        case 0x138858u: goto label_138858;
        case 0x13885cu: goto label_13885c;
        case 0x138860u: goto label_138860;
        case 0x138864u: goto label_138864;
        case 0x138868u: goto label_138868;
        case 0x13886cu: goto label_13886c;
        case 0x138870u: goto label_138870;
        case 0x138874u: goto label_138874;
        case 0x138878u: goto label_138878;
        case 0x13887cu: goto label_13887c;
        case 0x138880u: goto label_138880;
        case 0x138884u: goto label_138884;
        case 0x138888u: goto label_138888;
        case 0x13888cu: goto label_13888c;
        case 0x138890u: goto label_138890;
        case 0x138894u: goto label_138894;
        case 0x138898u: goto label_138898;
        case 0x13889cu: goto label_13889c;
        case 0x1388a0u: goto label_1388a0;
        case 0x1388a4u: goto label_1388a4;
        case 0x1388a8u: goto label_1388a8;
        case 0x1388acu: goto label_1388ac;
        case 0x1388b0u: goto label_1388b0;
        case 0x1388b4u: goto label_1388b4;
        case 0x1388b8u: goto label_1388b8;
        case 0x1388bcu: goto label_1388bc;
        case 0x1388c0u: goto label_1388c0;
        case 0x1388c4u: goto label_1388c4;
        case 0x1388c8u: goto label_1388c8;
        case 0x1388ccu: goto label_1388cc;
        case 0x1388d0u: goto label_1388d0;
        case 0x1388d4u: goto label_1388d4;
        case 0x1388d8u: goto label_1388d8;
        case 0x1388dcu: goto label_1388dc;
        case 0x1388e0u: goto label_1388e0;
        case 0x1388e4u: goto label_1388e4;
        case 0x1388e8u: goto label_1388e8;
        case 0x1388ecu: goto label_1388ec;
        case 0x1388f0u: goto label_1388f0;
        case 0x1388f4u: goto label_1388f4;
        case 0x1388f8u: goto label_1388f8;
        case 0x1388fcu: goto label_1388fc;
        case 0x138900u: goto label_138900;
        case 0x138904u: goto label_138904;
        case 0x138908u: goto label_138908;
        case 0x13890cu: goto label_13890c;
        case 0x138910u: goto label_138910;
        case 0x138914u: goto label_138914;
        case 0x138918u: goto label_138918;
        case 0x13891cu: goto label_13891c;
        case 0x138920u: goto label_138920;
        case 0x138924u: goto label_138924;
        case 0x138928u: goto label_138928;
        case 0x13892cu: goto label_13892c;
        case 0x138930u: goto label_138930;
        case 0x138934u: goto label_138934;
        case 0x138938u: goto label_138938;
        case 0x13893cu: goto label_13893c;
        case 0x138940u: goto label_138940;
        case 0x138944u: goto label_138944;
        case 0x138948u: goto label_138948;
        case 0x13894cu: goto label_13894c;
        case 0x138950u: goto label_138950;
        case 0x138954u: goto label_138954;
        case 0x138958u: goto label_138958;
        case 0x13895cu: goto label_13895c;
        case 0x138960u: goto label_138960;
        case 0x138964u: goto label_138964;
        case 0x138968u: goto label_138968;
        case 0x13896cu: goto label_13896c;
        case 0x138970u: goto label_138970;
        case 0x138974u: goto label_138974;
        case 0x138978u: goto label_138978;
        case 0x13897cu: goto label_13897c;
        case 0x138980u: goto label_138980;
        case 0x138984u: goto label_138984;
        case 0x138988u: goto label_138988;
        case 0x13898cu: goto label_13898c;
        case 0x138990u: goto label_138990;
        case 0x138994u: goto label_138994;
        case 0x138998u: goto label_138998;
        case 0x13899cu: goto label_13899c;
        case 0x1389a0u: goto label_1389a0;
        case 0x1389a4u: goto label_1389a4;
        case 0x1389a8u: goto label_1389a8;
        case 0x1389acu: goto label_1389ac;
        case 0x1389b0u: goto label_1389b0;
        case 0x1389b4u: goto label_1389b4;
        case 0x1389b8u: goto label_1389b8;
        case 0x1389bcu: goto label_1389bc;
        case 0x1389c0u: goto label_1389c0;
        case 0x1389c4u: goto label_1389c4;
        case 0x1389c8u: goto label_1389c8;
        case 0x1389ccu: goto label_1389cc;
        case 0x1389d0u: goto label_1389d0;
        case 0x1389d4u: goto label_1389d4;
        case 0x1389d8u: goto label_1389d8;
        case 0x1389dcu: goto label_1389dc;
        case 0x1389e0u: goto label_1389e0;
        case 0x1389e4u: goto label_1389e4;
        case 0x1389e8u: goto label_1389e8;
        case 0x1389ecu: goto label_1389ec;
        case 0x1389f0u: goto label_1389f0;
        case 0x1389f4u: goto label_1389f4;
        case 0x1389f8u: goto label_1389f8;
        case 0x1389fcu: goto label_1389fc;
        case 0x138a00u: goto label_138a00;
        case 0x138a04u: goto label_138a04;
        case 0x138a08u: goto label_138a08;
        case 0x138a0cu: goto label_138a0c;
        case 0x138a10u: goto label_138a10;
        case 0x138a14u: goto label_138a14;
        case 0x138a18u: goto label_138a18;
        case 0x138a1cu: goto label_138a1c;
        case 0x138a20u: goto label_138a20;
        case 0x138a24u: goto label_138a24;
        case 0x138a28u: goto label_138a28;
        case 0x138a2cu: goto label_138a2c;
        case 0x138a30u: goto label_138a30;
        case 0x138a34u: goto label_138a34;
        case 0x138a38u: goto label_138a38;
        case 0x138a3cu: goto label_138a3c;
        case 0x138a40u: goto label_138a40;
        case 0x138a44u: goto label_138a44;
        case 0x138a48u: goto label_138a48;
        case 0x138a4cu: goto label_138a4c;
        case 0x138a50u: goto label_138a50;
        case 0x138a54u: goto label_138a54;
        case 0x138a58u: goto label_138a58;
        case 0x138a5cu: goto label_138a5c;
        case 0x138a60u: goto label_138a60;
        case 0x138a64u: goto label_138a64;
        case 0x138a68u: goto label_138a68;
        case 0x138a6cu: goto label_138a6c;
        case 0x138a70u: goto label_138a70;
        case 0x138a74u: goto label_138a74;
        case 0x138a78u: goto label_138a78;
        case 0x138a7cu: goto label_138a7c;
        case 0x138a80u: goto label_138a80;
        case 0x138a84u: goto label_138a84;
        case 0x138a88u: goto label_138a88;
        case 0x138a8cu: goto label_138a8c;
        case 0x138a90u: goto label_138a90;
        case 0x138a94u: goto label_138a94;
        case 0x138a98u: goto label_138a98;
        case 0x138a9cu: goto label_138a9c;
        case 0x138aa0u: goto label_138aa0;
        case 0x138aa4u: goto label_138aa4;
        case 0x138aa8u: goto label_138aa8;
        case 0x138aacu: goto label_138aac;
        case 0x138ab0u: goto label_138ab0;
        case 0x138ab4u: goto label_138ab4;
        case 0x138ab8u: goto label_138ab8;
        case 0x138abcu: goto label_138abc;
        case 0x138ac0u: goto label_138ac0;
        case 0x138ac4u: goto label_138ac4;
        case 0x138ac8u: goto label_138ac8;
        case 0x138accu: goto label_138acc;
        case 0x138ad0u: goto label_138ad0;
        case 0x138ad4u: goto label_138ad4;
        case 0x138ad8u: goto label_138ad8;
        case 0x138adcu: goto label_138adc;
        case 0x138ae0u: goto label_138ae0;
        case 0x138ae4u: goto label_138ae4;
        case 0x138ae8u: goto label_138ae8;
        case 0x138aecu: goto label_138aec;
        case 0x138af0u: goto label_138af0;
        case 0x138af4u: goto label_138af4;
        case 0x138af8u: goto label_138af8;
        case 0x138afcu: goto label_138afc;
        case 0x138b00u: goto label_138b00;
        case 0x138b04u: goto label_138b04;
        case 0x138b08u: goto label_138b08;
        case 0x138b0cu: goto label_138b0c;
        case 0x138b10u: goto label_138b10;
        case 0x138b14u: goto label_138b14;
        case 0x138b18u: goto label_138b18;
        case 0x138b1cu: goto label_138b1c;
        case 0x138b20u: goto label_138b20;
        case 0x138b24u: goto label_138b24;
        case 0x138b28u: goto label_138b28;
        case 0x138b2cu: goto label_138b2c;
        case 0x138b30u: goto label_138b30;
        case 0x138b34u: goto label_138b34;
        case 0x138b38u: goto label_138b38;
        case 0x138b3cu: goto label_138b3c;
        case 0x138b40u: goto label_138b40;
        case 0x138b44u: goto label_138b44;
        case 0x138b48u: goto label_138b48;
        case 0x138b4cu: goto label_138b4c;
        case 0x138b50u: goto label_138b50;
        case 0x138b54u: goto label_138b54;
        case 0x138b58u: goto label_138b58;
        case 0x138b5cu: goto label_138b5c;
        case 0x138b60u: goto label_138b60;
        case 0x138b64u: goto label_138b64;
        case 0x138b68u: goto label_138b68;
        case 0x138b6cu: goto label_138b6c;
        case 0x138b70u: goto label_138b70;
        case 0x138b74u: goto label_138b74;
        case 0x138b78u: goto label_138b78;
        case 0x138b7cu: goto label_138b7c;
        case 0x138b80u: goto label_138b80;
        case 0x138b84u: goto label_138b84;
        case 0x138b88u: goto label_138b88;
        case 0x138b8cu: goto label_138b8c;
        default: break;
    }

    ctx->pc = 0x138078u;

label_138078:
    // 0x138078: 0x27bdfc90  addiu       $sp, $sp, -0x370
    ctx->pc = 0x138078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966416));
label_13807c:
    // 0x13807c: 0x7fb20320  sq          $s2, 0x320($sp)
    ctx->pc = 0x13807cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 18));
label_138080:
    // 0x138080: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x138080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_138084:
    // 0x138084: 0x7fb30310  sq          $s3, 0x310($sp)
    ctx->pc = 0x138084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 19));
label_138088:
    // 0x138088: 0x264401e0  addiu       $a0, $s2, 0x1E0
    ctx->pc = 0x138088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_13808c:
    // 0x13808c: 0x7fb00340  sq          $s0, 0x340($sp)
    ctx->pc = 0x13808cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 16));
label_138090:
    // 0x138090: 0x7fb10330  sq          $s1, 0x330($sp)
    ctx->pc = 0x138090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 17));
label_138094:
    // 0x138094: 0x7fb40300  sq          $s4, 0x300($sp)
    ctx->pc = 0x138094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 20));
label_138098:
    // 0x138098: 0x7fb502f0  sq          $s5, 0x2F0($sp)
    ctx->pc = 0x138098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 21));
label_13809c:
    // 0x13809c: 0x7fb602e0  sq          $s6, 0x2E0($sp)
    ctx->pc = 0x13809cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 22));
label_1380a0:
    // 0x1380a0: 0x7fb702d0  sq          $s7, 0x2D0($sp)
    ctx->pc = 0x1380a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 23));
label_1380a4:
    // 0x1380a4: 0x7fbe02c0  sq          $fp, 0x2C0($sp)
    ctx->pc = 0x1380a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 30));
label_1380a8:
    // 0x1380a8: 0xffbf02b0  sd          $ra, 0x2B0($sp)
    ctx->pc = 0x1380a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 31));
label_1380ac:
    // 0x1380ac: 0xe7b60360  swc1        $f22, 0x360($sp)
    ctx->pc = 0x1380acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
label_1380b0:
    // 0x1380b0: 0xe7b50358  swc1        $f21, 0x358($sp)
    ctx->pc = 0x1380b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 856), bits); }
label_1380b4:
    // 0x1380b4: 0xc0e409a  jal         func_390268
label_1380b8:
    if (ctx->pc == 0x1380B8u) {
        ctx->pc = 0x1380B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380B4u;
        // 0x1380b8: 0xe7b40350  swc1        $f20, 0x350($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 848), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1380BCu;
        goto label_1380bc;
    }
    ctx->pc = 0x1380B4u;
    SET_GPR_U32(ctx, 31, 0x1380BCu);
    ctx->pc = 0x1380B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1380B4u;
    // 0x1380b8: 0xe7b40350  swc1        $f20, 0x350($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 848), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1380B4u, 0x1380BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1380BCu;
label_1380bc:
    // 0x1380bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1380bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1380c0:
    // 0x1380c0: 0xc0e409a  jal         func_390268
label_1380c4:
    if (ctx->pc == 0x1380C4u) {
        ctx->pc = 0x1380C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380C0u;
        // 0x1380c4: 0x264401e4  addiu       $a0, $s2, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 484));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1380C8u;
        goto label_1380c8;
    }
    ctx->pc = 0x1380C0u;
    SET_GPR_U32(ctx, 31, 0x1380C8u);
    ctx->pc = 0x1380C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1380C0u;
    // 0x1380c4: 0x264401e4  addiu       $a0, $s2, 0x1E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1380C0u, 0x1380C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1380C8u;
label_1380c8:
    // 0x1380c8: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
label_1380cc:
    if (ctx->pc == 0x1380CCu) {
        ctx->pc = 0x1380CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380C8u;
        // 0x1380cc: 0x24430090  addiu       $v1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1380D0u;
        goto label_1380d0;
    }
    ctx->pc = 0x1380C8u;
    {
        const bool branch_taken_0x1380c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1380CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380C8u;
        // 0x1380cc: 0x24430090  addiu       $v1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380c8) {
            ctx->pc = 0x1380ECu;
            goto label_1380ec;
        }
    }
    ctx->pc = 0x1380D0u;
label_1380d0:
    // 0x1380d0: 0x1000024a  b           . + 4 + (0x24A << 2)
label_1380d4:
    if (ctx->pc == 0x1380D4u) {
        ctx->pc = 0x1380D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380D0u;
        // 0x1380d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1380D8u;
        goto label_1380d8;
    }
    ctx->pc = 0x1380D0u;
    {
        const bool branch_taken_0x1380d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380D0u;
        // 0x1380d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380d0) {
            ctx->pc = 0x1389FCu;
            goto label_1389fc;
        }
    }
    ctx->pc = 0x1380D8u;
label_1380d8:
    // 0x1380d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1380d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1380dc:
    // 0x1380dc: 0xc0d0680  jal         func_341A00
label_1380e0:
    if (ctx->pc == 0x1380E0u) {
        ctx->pc = 0x1380E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380DCu;
        // 0x1380e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1380E4u;
        goto label_1380e4;
    }
    ctx->pc = 0x1380DCu;
    SET_GPR_U32(ctx, 31, 0x1380E4u);
    ctx->pc = 0x1380E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1380DCu;
    // 0x1380e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A00u, 0x1380DCu, 0x1380E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1380E4u;
label_1380e4:
    // 0x1380e4: 0x1000023f  b           . + 4 + (0x23F << 2)
label_1380e8:
    if (ctx->pc == 0x1380E8u) {
        ctx->pc = 0x1380ECu;
        goto label_1380ec;
    }
    ctx->pc = 0x1380E4u;
    {
        const bool branch_taken_0x1380e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1380e4) {
            ctx->pc = 0x1389E4u;
            goto label_1389e4;
        }
    }
    ctx->pc = 0x1380ECu;
label_1380ec:
    // 0x1380ec: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x1380ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_1380f0:
    // 0x1380f0: 0xafa3029c  sw          $v1, 0x29C($sp)
    ctx->pc = 0x1380f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 3));
label_1380f4:
    // 0x1380f4: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x1380f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_1380f8:
    // 0x1380f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1380f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1380fc:
    // 0x1380fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1380fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138100:
    // 0x138100: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x138100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_138104:
    // 0x138104: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x138104u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_138108:
    // 0x138108: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x138108u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13810c:
    // 0x13810c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x13810cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138110:
    // 0x138110: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x138110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_138114:
    // 0x138114: 0x3c170059  lui         $s7, 0x59
    ctx->pc = 0x138114u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)89 << 16));
label_138118:
    // 0x138118: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_13811c:
    // 0x13811c: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x13811cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_138120:
    // 0x138120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138124:
    // 0x138124: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x138124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_138128:
    // 0x138128: 0xc0cd8ec  jal         func_3363B0
label_13812c:
    if (ctx->pc == 0x13812Cu) {
        ctx->pc = 0x13812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138128u;
        // 0x13812c: 0xafa20290  sw          $v0, 0x290($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138130u;
        goto label_138130;
    }
    ctx->pc = 0x138128u;
    SET_GPR_U32(ctx, 31, 0x138130u);
    ctx->pc = 0x13812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138128u;
    // 0x13812c: 0xafa20290  sw          $v0, 0x290($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x138128u, 0x138130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138130u;
label_138130:
    // 0x138130: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x138130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138134:
    // 0x138134: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x138134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_138138:
    // 0x138138: 0xc0cd8c2  jal         func_336308
label_13813c:
    if (ctx->pc == 0x13813Cu) {
        ctx->pc = 0x13813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138138u;
        // 0x13813c: 0xafa00294  sw          $zero, 0x294($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138140u;
        goto label_138140;
    }
    ctx->pc = 0x138138u;
    SET_GPR_U32(ctx, 31, 0x138140u);
    ctx->pc = 0x13813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138138u;
    // 0x13813c: 0xafa00294  sw          $zero, 0x294($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x138138u, 0x138140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138140u;
label_138140:
    // 0x138140: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x138140u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_138144:
    // 0x138144: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x138144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_138148:
    // 0x138148: 0x26460200  addiu       $a2, $s2, 0x200
    ctx->pc = 0x138148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_13814c:
    // 0x13814c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13814cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_138150:
    // 0x138150: 0xc136b18  jal         func_4DAC60
label_138154:
    if (ctx->pc == 0x138154u) {
        ctx->pc = 0x138154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138150u;
        // 0x138154: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138158u;
        goto label_138158;
    }
    ctx->pc = 0x138150u;
    SET_GPR_U32(ctx, 31, 0x138158u);
    ctx->pc = 0x138154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138150u;
    // 0x138154: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x138150u, 0x138158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138158u;
label_138158:
    // 0x138158: 0x26311740  addiu       $s1, $s1, 0x1740
    ctx->pc = 0x138158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5952));
label_13815c:
    // 0x13815c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13815cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_138160:
    // 0x138160: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x138160u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_138164:
    // 0x138164: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x138164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_138168:
    // 0x138168: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x138168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_13816c:
    // 0x13816c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13816cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_138170:
    // 0x138170: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x138170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_138174:
    // 0x138174: 0xc12e310  jal         func_4B8C40
label_138178:
    if (ctx->pc == 0x138178u) {
        ctx->pc = 0x138178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138174u;
        // 0x138178: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13817Cu;
        goto label_13817c;
    }
    ctx->pc = 0x138174u;
    SET_GPR_U32(ctx, 31, 0x13817Cu);
    ctx->pc = 0x138178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138174u;
    // 0x138178: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x138174u, 0x13817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13817Cu;
label_13817c:
    // 0x13817c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x13817cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_138180:
    // 0x138180: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x138180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_138184:
    // 0x138184: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x138184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_138188:
    // 0x138188: 0xc12e29c  jal         func_4B8A70
label_13818c:
    if (ctx->pc == 0x13818Cu) {
        ctx->pc = 0x13818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138188u;
        // 0x13818c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138190u;
        goto label_138190;
    }
    ctx->pc = 0x138188u;
    SET_GPR_U32(ctx, 31, 0x138190u);
    ctx->pc = 0x13818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138188u;
    // 0x13818c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x138188u, 0x138190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138190u;
label_138190:
    // 0x138190: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x138190u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_138194:
    // 0x138194: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x138194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_138198:
    // 0x138198: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x138198u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_13819c:
    // 0x13819c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13819cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1381a0:
    // 0x1381a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1381a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1381a4:
    // 0x1381a4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1381a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1381a8:
    // 0x1381a8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1381a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1381ac:
    // 0x1381ac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1381acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1381b0:
    // 0x1381b0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1381b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1381b4:
    // 0x1381b4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1381b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_1381b8:
    // 0x1381b8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1381b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1381bc:
    // 0x1381bc: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1381bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_1381c0:
    // 0x1381c0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1381c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1381c4:
    // 0x1381c4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1381c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1381c8:
    // 0x1381c8: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1381c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1381cc:
    // 0x1381cc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1381ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1381d0:
    // 0x1381d0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1381d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1381d4:
    // 0x1381d4: 0xc136d44  jal         func_4DB510
label_1381d8:
    if (ctx->pc == 0x1381D8u) {
        ctx->pc = 0x1381D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381D4u;
        // 0x1381d8: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1381DCu;
        goto label_1381dc;
    }
    ctx->pc = 0x1381D4u;
    SET_GPR_U32(ctx, 31, 0x1381DCu);
    ctx->pc = 0x1381D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1381D4u;
    // 0x1381d8: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x1381D4u, 0x1381DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1381DCu;
label_1381dc:
    // 0x1381dc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1381dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1381e0:
    // 0x1381e0: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x1381e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1381e4:
    // 0x1381e4: 0x27aa0140  addiu       $t2, $sp, 0x140
    ctx->pc = 0x1381e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1381e8:
    // 0x1381e8: 0xafa90298  sw          $t1, 0x298($sp)
    ctx->pc = 0x1381e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 9));
label_1381ec:
    // 0x1381ec: 0xafaa02a0  sw          $t2, 0x2A0($sp)
    ctx->pc = 0x1381ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 10));
label_1381f0:
    // 0x1381f0: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x1381f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1381f4:
    // 0x1381f4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1381f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1381f8:
    // 0x1381f8: 0x27b30180  addiu       $s3, $sp, 0x180
    ctx->pc = 0x1381f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1381fc:
    // 0x1381fc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1381fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_138200:
    // 0x138200: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x138200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
label_138204:
    // 0x138204: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x138204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_138208:
    // 0x138208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13820c:
    // 0x13820c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x13820cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138210:
    // 0x138210: 0x16b40034  bne         $s5, $s4, . + 4 + (0x34 << 2)
label_138214:
    if (ctx->pc == 0x138214u) {
        ctx->pc = 0x138214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138210u;
        // 0x138214: 0xe6400208  swc1        $f0, 0x208($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 520), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138218u;
        goto label_138218;
    }
    ctx->pc = 0x138210u;
    {
        const bool branch_taken_0x138210 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        ctx->pc = 0x138214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138210u;
        // 0x138214: 0xe6400208  swc1        $f0, 0x208($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138210) {
            ctx->pc = 0x1382E4u;
            goto label_1382e4;
        }
    }
    ctx->pc = 0x138218u;
label_138218:
    // 0x138218: 0xae400238  sw          $zero, 0x238($s2)
    ctx->pc = 0x138218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 0));
label_13821c:
    // 0x13821c: 0x3c0b0071  lui         $t3, 0x71
    ctx->pc = 0x13821cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)113 << 16));
label_138220:
    // 0x138220: 0xae40023c  sw          $zero, 0x23C($s2)
    ctx->pc = 0x138220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 572), GPR_U32(ctx, 0));
label_138224:
    // 0x138224: 0x25664b00  addiu       $a2, $t3, 0x4B00
    ctx->pc = 0x138224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 19200));
label_138228:
    // 0x138228: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x138228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13822c:
    // 0x13822c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13822cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_138230:
    // 0x138230: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x138230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_138234:
    // 0x138234: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x138234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_138238:
    // 0x138238: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x138238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_13823c:
    // 0x13823c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13823cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_138240:
    // 0x138240: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x138240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_138244:
    // 0x138244: 0xc0cd8ec  jal         func_3363B0
label_138248:
    if (ctx->pc == 0x138248u) {
        ctx->pc = 0x138248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138244u;
        // 0x138248: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13824Cu;
        goto label_13824c;
    }
    ctx->pc = 0x138244u;
    SET_GPR_U32(ctx, 31, 0x13824Cu);
    ctx->pc = 0x138248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138244u;
    // 0x138248: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x138244u, 0x13824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13824Cu;
label_13824c:
    // 0x13824c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x13824cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_138250:
    // 0x138250: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x138250u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_138254:
    // 0x138254: 0x24641740  addiu       $a0, $v1, 0x1740
    ctx->pc = 0x138254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_138258:
    // 0x138258: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x138258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_13825c:
    // 0x13825c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x13825cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_138260:
    // 0x138260: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x138260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_138264:
    // 0x138264: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x138264u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_138268:
    // 0x138268: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x138268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_13826c:
    // 0x13826c: 0xc12e310  jal         func_4B8C40
label_138270:
    if (ctx->pc == 0x138270u) {
        ctx->pc = 0x138270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13826Cu;
        // 0x138270: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138274u;
        goto label_138274;
    }
    ctx->pc = 0x13826Cu;
    SET_GPR_U32(ctx, 31, 0x138274u);
    ctx->pc = 0x138270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13826Cu;
    // 0x138270: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x13826Cu, 0x138274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138274u;
label_138274:
    // 0x138274: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x138274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_138278:
    // 0x138278: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x138278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_13827c:
    // 0x13827c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13827cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_138280:
    // 0x138280: 0xc12e29c  jal         func_4B8A70
label_138284:
    if (ctx->pc == 0x138284u) {
        ctx->pc = 0x138284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138280u;
        // 0x138284: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138288u;
        goto label_138288;
    }
    ctx->pc = 0x138280u;
    SET_GPR_U32(ctx, 31, 0x138288u);
    ctx->pc = 0x138284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138280u;
    // 0x138284: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x138280u, 0x138288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138288u;
label_138288:
    // 0x138288: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x138288u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13828c:
    // 0x13828c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13828cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_138290:
    // 0x138290: 0x4409a000  mfc1        $t1, $f20
    ctx->pc = 0x138290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_138294:
    // 0x138294: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x138294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138298:
    // 0x138298: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x138298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13829c:
    // 0x13829c: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x13829cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_1382a0:
    // 0x1382a0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1382a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1382a4:
    // 0x1382a4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1382a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_1382a8:
    // 0x1382a8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1382a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1382ac:
    // 0x1382ac: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1382acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_1382b0:
    // 0x1382b0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1382b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1382b4:
    // 0x1382b4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1382b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_1382b8:
    // 0x1382b8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1382b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1382bc:
    // 0x1382bc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1382bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1382c0:
    // 0x1382c0: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1382c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1382c4:
    // 0x1382c4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1382c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1382c8:
    // 0x1382c8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1382c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1382cc:
    // 0x1382cc: 0xc136d44  jal         func_4DB510
label_1382d0:
    if (ctx->pc == 0x1382D0u) {
        ctx->pc = 0x1382D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382CCu;
        // 0x1382d0: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1382D4u;
        goto label_1382d4;
    }
    ctx->pc = 0x1382CCu;
    SET_GPR_U32(ctx, 31, 0x1382D4u);
    ctx->pc = 0x1382D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1382CCu;
    // 0x1382d0: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x1382CCu, 0x1382D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1382D4u;
label_1382d4:
    // 0x1382d4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1382d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1382d8:
    // 0x1382d8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1382d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1382dc:
    // 0x1382dc: 0x100000cc  b           . + 4 + (0xCC << 2)
label_1382e0:
    if (ctx->pc == 0x1382E0u) {
        ctx->pc = 0x1382E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382DCu;
        // 0x1382e0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1382E4u;
        goto label_1382e4;
    }
    ctx->pc = 0x1382DCu;
    {
        const bool branch_taken_0x1382dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1382E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382DCu;
        // 0x1382e0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1382dc) {
            ctx->pc = 0x138610u;
            goto label_138610;
        }
    }
    ctx->pc = 0x1382E4u;
label_1382e4:
    // 0x1382e4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x1382e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_1382e8:
    // 0x1382e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1382e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1382ec:
    // 0x1382ec: 0x2604b888  addiu       $a0, $s0, -0x4778
    ctx->pc = 0x1382ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949000));
label_1382f0:
    // 0x1382f0: 0xc0cd4fc  jal         func_3353F0
label_1382f4:
    if (ctx->pc == 0x1382F4u) {
        ctx->pc = 0x1382F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382F0u;
        // 0x1382f4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1382F8u;
        goto label_1382f8;
    }
    ctx->pc = 0x1382F0u;
    SET_GPR_U32(ctx, 31, 0x1382F8u);
    ctx->pc = 0x1382F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1382F0u;
    // 0x1382f4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x1382F0u, 0x1382F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1382F8u;
label_1382f8:
    // 0x1382f8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1382f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1382fc:
    // 0x1382fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1382fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138300:
    // 0x138300: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x138300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_138304:
    // 0x138304: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_138308:
    if (ctx->pc == 0x138308u) {
        ctx->pc = 0x138308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138304u;
        // 0x138308: 0xafaa0290  sw          $t2, 0x290($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13830Cu;
        goto label_13830c;
    }
    ctx->pc = 0x138304u;
    {
        const bool branch_taken_0x138304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138304u;
        // 0x138308: 0xafaa0290  sw          $t2, 0x290($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138304) {
            ctx->pc = 0x1383C4u;
            goto label_1383c4;
        }
    }
    ctx->pc = 0x13830Cu;
label_13830c:
    // 0x13830c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x13830cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_138310:
    // 0x138310: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x138310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_138314:
    // 0x138314: 0x24429020  addiu       $v0, $v0, -0x6FE0
    ctx->pc = 0x138314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938656));
label_138318:
    // 0x138318: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x138318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13831c:
    // 0x13831c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13831cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_138320:
    // 0x138320: 0x800008  jr          $a0
label_138324:
    if (ctx->pc == 0x138324u) {
        ctx->pc = 0x138328u;
        goto label_138328;
    }
    ctx->pc = 0x138320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138328u: goto label_138328;
            case 0x138330u: goto label_138330;
            case 0x138350u: goto label_138350;
            case 0x138364u: goto label_138364;
            case 0x138384u: goto label_138384;
            case 0x1383B0u: goto label_1383b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138320u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x138328u;
label_138328:
    // 0x138328: 0x10000026  b           . + 4 + (0x26 << 2)
label_13832c:
    if (ctx->pc == 0x13832Cu) {
        ctx->pc = 0x13832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138328u;
        // 0x13832c: 0xae40023c  sw          $zero, 0x23C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138330u;
        goto label_138330;
    }
    ctx->pc = 0x138328u;
    {
        const bool branch_taken_0x138328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138328u;
        // 0x13832c: 0xae40023c  sw          $zero, 0x23C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138328) {
            ctx->pc = 0x1383C4u;
            goto label_1383c4;
        }
    }
    ctx->pc = 0x138330u;
label_138330:
    // 0x138330: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x138330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
label_138334:
    // 0x138334: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x138334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_138338:
    // 0x138338: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x138338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13833c:
    // 0x13833c: 0x3c013ea9  lui         $at, 0x3EA9
    ctx->pc = 0x13833cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16041 << 16));
label_138340:
    // 0x138340: 0x3421c920  ori         $at, $at, 0xC920
    ctx->pc = 0x138340u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51488);
label_138344:
    // 0x138344: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x138344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_138348:
    // 0x138348: 0x10000015  b           . + 4 + (0x15 << 2)
label_13834c:
    if (ctx->pc == 0x13834Cu) {
        ctx->pc = 0x13834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138348u;
        // 0x13834c: 0xc6400208  lwc1        $f0, 0x208($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138350u;
        goto label_138350;
    }
    ctx->pc = 0x138348u;
    {
        const bool branch_taken_0x138348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138348u;
        // 0x13834c: 0xc6400208  lwc1        $f0, 0x208($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138348) {
            ctx->pc = 0x1383A0u;
            goto label_1383a0;
        }
    }
    ctx->pc = 0x138350u;
label_138350:
    // 0x138350: 0x3c01bdb2  lui         $at, 0xBDB2
    ctx->pc = 0x138350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48562 << 16));
label_138354:
    // 0x138354: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x138354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
label_138358:
    // 0x138358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13835c:
    // 0x13835c: 0x10000019  b           . + 4 + (0x19 << 2)
label_138360:
    if (ctx->pc == 0x138360u) {
        ctx->pc = 0x138360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13835Cu;
        // 0x138360: 0xe640023c  swc1        $f0, 0x23C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 572), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138364u;
        goto label_138364;
    }
    ctx->pc = 0x13835Cu;
    {
        const bool branch_taken_0x13835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13835Cu;
        // 0x138360: 0xe640023c  swc1        $f0, 0x23C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13835c) {
            ctx->pc = 0x1383C4u;
            goto label_1383c4;
        }
    }
    ctx->pc = 0x138364u;
label_138364:
    // 0x138364: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x138364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
label_138368:
    // 0x138368: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x138368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_13836c:
    // 0x13836c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13836cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_138370:
    // 0x138370: 0x3c013e64  lui         $at, 0x3E64
    ctx->pc = 0x138370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15972 << 16));
label_138374:
    // 0x138374: 0x3421c389  ori         $at, $at, 0xC389
    ctx->pc = 0x138374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50057);
label_138378:
    // 0x138378: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x138378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13837c:
    // 0x13837c: 0x10000008  b           . + 4 + (0x8 << 2)
label_138380:
    if (ctx->pc == 0x138380u) {
        ctx->pc = 0x138380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13837Cu;
        // 0x138380: 0xc6400208  lwc1        $f0, 0x208($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138384u;
        goto label_138384;
    }
    ctx->pc = 0x13837Cu;
    {
        const bool branch_taken_0x13837c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13837Cu;
        // 0x138380: 0xc6400208  lwc1        $f0, 0x208($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13837c) {
            ctx->pc = 0x1383A0u;
            goto label_1383a0;
        }
    }
    ctx->pc = 0x138384u;
label_138384:
    // 0x138384: 0xc6400208  lwc1        $f0, 0x208($s2)
    ctx->pc = 0x138384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138388:
    // 0x138388: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x138388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
label_13838c:
    // 0x13838c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x13838cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_138390:
    // 0x138390: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x138390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_138394:
    // 0x138394: 0x3c013dfa  lui         $at, 0x3DFA
    ctx->pc = 0x138394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15866 << 16));
label_138398:
    // 0x138398: 0x342135de  ori         $at, $at, 0x35DE
    ctx->pc = 0x138398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13790);
label_13839c:
    // 0x13839c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13839cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1383a0:
    // 0x1383a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1383a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1383a4:
    // 0x1383a4: 0xe642023c  swc1        $f2, 0x23C($s2)
    ctx->pc = 0x1383a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 572), bits); }
label_1383a8:
    // 0x1383a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1383ac:
    if (ctx->pc == 0x1383ACu) {
        ctx->pc = 0x1383ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383A8u;
        // 0x1383ac: 0xe6400208  swc1        $f0, 0x208($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 520), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1383B0u;
        goto label_1383b0;
    }
    ctx->pc = 0x1383A8u;
    {
        const bool branch_taken_0x1383a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1383ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383A8u;
        // 0x1383ac: 0xe6400208  swc1        $f0, 0x208($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383a8) {
            ctx->pc = 0x1383C4u;
            goto label_1383c4;
        }
    }
    ctx->pc = 0x1383B0u;
label_1383b0:
    // 0x1383b0: 0x3c01bd56  lui         $at, 0xBD56
    ctx->pc = 0x1383b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48470 << 16));
label_1383b4:
    // 0x1383b4: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x1383b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
label_1383b8:
    // 0x1383b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1383b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1383bc:
    // 0x1383bc: 0x0  nop
    ctx->pc = 0x1383bcu;
    // NOP
label_1383c0:
    // 0x1383c0: 0xe640023c  swc1        $f0, 0x23C($s2)
    ctx->pc = 0x1383c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 572), bits); }
label_1383c4:
    // 0x1383c4: 0xc641023c  lwc1        $f1, 0x23C($s2)
    ctx->pc = 0x1383c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1383c8:
    // 0x1383c8: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x1383c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_1383cc:
    // 0x1383cc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1383ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_1383d0:
    // 0x1383d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1383d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1383d4:
    // 0x1383d4: 0x0  nop
    ctx->pc = 0x1383d4u;
    // NOP
label_1383d8:
    // 0x1383d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1383d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1383dc:
    // 0x1383dc: 0x0  nop
    ctx->pc = 0x1383dcu;
    // NOP
label_1383e0:
    // 0x1383e0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1383e4:
    if (ctx->pc == 0x1383E4u) {
        ctx->pc = 0x1383E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383E0u;
        // 0x1383e4: 0x2604b888  addiu       $a0, $s0, -0x4778 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1383E8u;
        goto label_1383e8;
    }
    ctx->pc = 0x1383E0u;
    {
        const bool branch_taken_0x1383e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1383E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383E0u;
        // 0x1383e4: 0x2604b888  addiu       $a0, $s0, -0x4778 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383e0) {
            ctx->pc = 0x1383F4u;
            goto label_1383f4;
        }
    }
    ctx->pc = 0x1383E8u;
label_1383e8:
    // 0x1383e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1383e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1383ec:
    // 0x1383ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1383f0:
    if (ctx->pc == 0x1383F0u) {
        ctx->pc = 0x1383F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383ECu;
        // 0x1383f0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1383F4u;
        goto label_1383f4;
    }
    ctx->pc = 0x1383ECu;
    {
        const bool branch_taken_0x1383ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1383F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383ECu;
        // 0x1383f0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383ec) {
            ctx->pc = 0x1383FCu;
            goto label_1383fc;
        }
    }
    ctx->pc = 0x1383F4u;
label_1383f4:
    // 0x1383f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1383f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1383f8:
    // 0x1383f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1383f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1383fc:
    // 0x1383fc: 0xc0cd4fc  jal         func_3353F0
label_138400:
    if (ctx->pc == 0x138400u) {
        ctx->pc = 0x138404u;
        goto label_138404;
    }
    ctx->pc = 0x1383FCu;
    SET_GPR_U32(ctx, 31, 0x138404u);
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x1383FCu, 0x138404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138404u;
label_138404:
    // 0x138404: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x138404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138408:
    // 0x138408: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x138408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_13840c:
    // 0x13840c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_138410:
    if (ctx->pc == 0x138410u) {
        ctx->pc = 0x138410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13840Cu;
        // 0x138410: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138414u;
        goto label_138414;
    }
    ctx->pc = 0x13840Cu;
    {
        const bool branch_taken_0x13840c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13840Cu;
        // 0x138410: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13840c) {
            ctx->pc = 0x1384ACu;
            goto label_1384ac;
        }
    }
    ctx->pc = 0x138414u;
label_138414:
    // 0x138414: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x138414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_138418:
    // 0x138418: 0x24429040  addiu       $v0, $v0, -0x6FC0
    ctx->pc = 0x138418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938688));
label_13841c:
    // 0x13841c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13841cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_138420:
    // 0x138420: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x138420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_138424:
    // 0x138424: 0x800008  jr          $a0
label_138428:
    if (ctx->pc == 0x138428u) {
        ctx->pc = 0x13842Cu;
        goto label_13842c;
    }
    ctx->pc = 0x138424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13842Cu: goto label_13842c;
            case 0x138440u: goto label_138440;
            case 0x138454u: goto label_138454;
            case 0x13845Cu: goto label_13845c;
            case 0x138470u: goto label_138470;
            case 0x138484u: goto label_138484;
            case 0x138498u: goto label_138498;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138424u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13842Cu;
label_13842c:
    // 0x13842c: 0x3c01bda0  lui         $at, 0xBDA0
    ctx->pc = 0x13842cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48544 << 16));
label_138430:
    // 0x138430: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x138430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
label_138434:
    // 0x138434: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_138438:
    // 0x138438: 0x1000001c  b           . + 4 + (0x1C << 2)
label_13843c:
    if (ctx->pc == 0x13843Cu) {
        ctx->pc = 0x13843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138438u;
        // 0x13843c: 0xe6400238  swc1        $f0, 0x238($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138440u;
        goto label_138440;
    }
    ctx->pc = 0x138438u;
    {
        const bool branch_taken_0x138438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138438u;
        // 0x13843c: 0xe6400238  swc1        $f0, 0x238($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138438) {
            ctx->pc = 0x1384ACu;
            goto label_1384ac;
        }
    }
    ctx->pc = 0x138440u;
label_138440:
    // 0x138440: 0x3c013da0  lui         $at, 0x3DA0
    ctx->pc = 0x138440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15776 << 16));
label_138444:
    // 0x138444: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x138444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
label_138448:
    // 0x138448: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13844c:
    // 0x13844c: 0x10000017  b           . + 4 + (0x17 << 2)
label_138450:
    if (ctx->pc == 0x138450u) {
        ctx->pc = 0x138450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13844Cu;
        // 0x138450: 0xe6400238  swc1        $f0, 0x238($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138454u;
        goto label_138454;
    }
    ctx->pc = 0x13844Cu;
    {
        const bool branch_taken_0x13844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13844Cu;
        // 0x138450: 0xe6400238  swc1        $f0, 0x238($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13844c) {
            ctx->pc = 0x1384ACu;
            goto label_1384ac;
        }
    }
    ctx->pc = 0x138454u;
label_138454:
    // 0x138454: 0x10000015  b           . + 4 + (0x15 << 2)
label_138458:
    if (ctx->pc == 0x138458u) {
        ctx->pc = 0x138458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138454u;
        // 0x138458: 0xae400238  sw          $zero, 0x238($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13845Cu;
        goto label_13845c;
    }
    ctx->pc = 0x138454u;
    {
        const bool branch_taken_0x138454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138454u;
        // 0x138458: 0xae400238  sw          $zero, 0x238($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138454) {
            ctx->pc = 0x1384ACu;
            goto label_1384ac;
        }
    }
    ctx->pc = 0x13845Cu;
label_13845c:
    // 0x13845c: 0x3c013e0e  lui         $at, 0x3E0E
    ctx->pc = 0x13845cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15886 << 16));
label_138460:
    // 0x138460: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x138460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_138464:
    // 0x138464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_138468:
    // 0x138468: 0x10000010  b           . + 4 + (0x10 << 2)
label_13846c:
    if (ctx->pc == 0x13846Cu) {
        ctx->pc = 0x13846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138468u;
        // 0x13846c: 0xe6400238  swc1        $f0, 0x238($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138470u;
        goto label_138470;
    }
    ctx->pc = 0x138468u;
    {
        const bool branch_taken_0x138468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138468u;
        // 0x13846c: 0xe6400238  swc1        $f0, 0x238($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138468) {
            ctx->pc = 0x1384ACu;
            goto label_1384ac;
        }
    }
    ctx->pc = 0x138470u;
label_138470:
    // 0x138470: 0x3c01be0e  lui         $at, 0xBE0E
    ctx->pc = 0x138470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48654 << 16));
label_138474:
    // 0x138474: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x138474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_138478:
    // 0x138478: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13847c:
    // 0x13847c: 0x1000000b  b           . + 4 + (0xB << 2)
label_138480:
    if (ctx->pc == 0x138480u) {
        ctx->pc = 0x138480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13847Cu;
        // 0x138480: 0xe6400238  swc1        $f0, 0x238($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138484u;
        goto label_138484;
    }
    ctx->pc = 0x13847Cu;
    {
        const bool branch_taken_0x13847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13847Cu;
        // 0x138480: 0xe6400238  swc1        $f0, 0x238($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13847c) {
            ctx->pc = 0x1384ACu;
            goto label_1384ac;
        }
    }
    ctx->pc = 0x138484u;
label_138484:
    // 0x138484: 0x3c01be71  lui         $at, 0xBE71
    ctx->pc = 0x138484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48753 << 16));
label_138488:
    // 0x138488: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x138488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
label_13848c:
    // 0x13848c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13848cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_138490:
    // 0x138490: 0x10000006  b           . + 4 + (0x6 << 2)
label_138494:
    if (ctx->pc == 0x138494u) {
        ctx->pc = 0x138494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138490u;
        // 0x138494: 0xe6400238  swc1        $f0, 0x238($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138498u;
        goto label_138498;
    }
    ctx->pc = 0x138490u;
    {
        const bool branch_taken_0x138490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138490u;
        // 0x138494: 0xe6400238  swc1        $f0, 0x238($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138490) {
            ctx->pc = 0x1384ACu;
            goto label_1384ac;
        }
    }
    ctx->pc = 0x138498u;
label_138498:
    // 0x138498: 0x3c013e71  lui         $at, 0x3E71
    ctx->pc = 0x138498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15985 << 16));
label_13849c:
    // 0x13849c: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x13849cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
label_1384a0:
    // 0x1384a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1384a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1384a4:
    // 0x1384a4: 0x0  nop
    ctx->pc = 0x1384a4u;
    // NOP
label_1384a8:
    // 0x1384a8: 0xe6400238  swc1        $f0, 0x238($s2)
    ctx->pc = 0x1384a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 568), bits); }
label_1384ac:
    // 0x1384ac: 0xc6540238  lwc1        $f20, 0x238($s2)
    ctx->pc = 0x1384acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1384b0:
    // 0x1384b0: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x1384b0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_1384b4:
    // 0x1384b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1384b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1384b8:
    // 0x1384b8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1384b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1384bc:
    // 0x1384bc: 0x25631740  addiu       $v1, $t3, 0x1740
    ctx->pc = 0x1384bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 5952));
label_1384c0:
    // 0x1384c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1384c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1384c4:
    // 0x1384c4: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1384c4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_1384c8:
    // 0x1384c8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1384c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_1384cc:
    // 0x1384cc: 0xc12e310  jal         func_4B8C40
label_1384d0:
    if (ctx->pc == 0x1384D0u) {
        ctx->pc = 0x1384D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384CCu;
        // 0x1384d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1384D4u;
        goto label_1384d4;
    }
    ctx->pc = 0x1384CCu;
    SET_GPR_U32(ctx, 31, 0x1384D4u);
    ctx->pc = 0x1384D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1384CCu;
    // 0x1384d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1384CCu, 0x1384D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1384D4u;
label_1384d4:
    // 0x1384d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1384d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1384d8:
    // 0x1384d8: 0xc12e29c  jal         func_4B8A70
label_1384dc:
    if (ctx->pc == 0x1384DCu) {
        ctx->pc = 0x1384DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384D8u;
        // 0x1384dc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1384E0u;
        goto label_1384e0;
    }
    ctx->pc = 0x1384D8u;
    SET_GPR_U32(ctx, 31, 0x1384E0u);
    ctx->pc = 0x1384DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1384D8u;
    // 0x1384dc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1384D8u, 0x1384E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1384E0u;
label_1384e0:
    // 0x1384e0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1384e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1384e4:
    // 0x1384e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1384e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1384e8:
    // 0x1384e8: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x1384e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1384ec:
    // 0x1384ec: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1384ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1384f0:
    // 0x1384f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1384f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1384f4:
    // 0x1384f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1384f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1384f8:
    // 0x1384f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1384f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1384fc:
    // 0x1384fc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1384fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_138500:
    // 0x138500: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x138500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_138504:
    // 0x138504: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x138504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_138508:
    // 0x138508: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x138508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13850c:
    // 0x13850c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x13850cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_138510:
    // 0x138510: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x138510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138514:
    // 0x138514: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x138514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_138518:
    // 0x138518: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x138518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13851c:
    // 0x13851c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x13851cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_138520:
    // 0x138520: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x138520u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_138524:
    // 0x138524: 0xc136b30  jal         func_4DACC0
label_138528:
    if (ctx->pc == 0x138528u) {
        ctx->pc = 0x138528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138524u;
        // 0x138528: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13852Cu;
        goto label_13852c;
    }
    ctx->pc = 0x138524u;
    SET_GPR_U32(ctx, 31, 0x13852Cu);
    ctx->pc = 0x138528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138524u;
    // 0x138528: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x138524u, 0x13852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13852Cu;
label_13852c:
    // 0x13852c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x13852cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_138530:
    // 0x138530: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x138530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_138534:
    // 0x138534: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x138534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138538:
    // 0x138538: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x138538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13853c:
    // 0x13853c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13853cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_138540:
    // 0x138540: 0xc136d44  jal         func_4DB510
label_138544:
    if (ctx->pc == 0x138544u) {
        ctx->pc = 0x138544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138540u;
        // 0x138544: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138548u;
        goto label_138548;
    }
    ctx->pc = 0x138540u;
    SET_GPR_U32(ctx, 31, 0x138548u);
    ctx->pc = 0x138544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138540u;
    // 0x138544: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x138540u, 0x138548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138548u;
label_138548:
    // 0x138548: 0xc654023c  lwc1        $f20, 0x23C($s2)
    ctx->pc = 0x138548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13854c:
    // 0x13854c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13854cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_138550:
    // 0x138550: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x138550u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_138554:
    // 0x138554: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x138554u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_138558:
    // 0x138558: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x138558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_13855c:
    // 0x13855c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x13855cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_138560:
    // 0x138560: 0xc12e310  jal         func_4B8C40
label_138564:
    if (ctx->pc == 0x138564u) {
        ctx->pc = 0x138564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138560u;
        // 0x138564: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138568u;
        goto label_138568;
    }
    ctx->pc = 0x138560u;
    SET_GPR_U32(ctx, 31, 0x138568u);
    ctx->pc = 0x138564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138560u;
    // 0x138564: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x138560u, 0x138568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138568u;
label_138568:
    // 0x138568: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x138568u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13856c:
    // 0x13856c: 0xc12e29c  jal         func_4B8A70
label_138570:
    if (ctx->pc == 0x138570u) {
        ctx->pc = 0x138570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13856Cu;
        // 0x138570: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138574u;
        goto label_138574;
    }
    ctx->pc = 0x13856Cu;
    SET_GPR_U32(ctx, 31, 0x138574u);
    ctx->pc = 0x138570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13856Cu;
    // 0x138570: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x13856Cu, 0x138574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138574u;
label_138574:
    // 0x138574: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x138574u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_138578:
    // 0x138578: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x138578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13857c:
    // 0x13857c: 0x4409a800  mfc1        $t1, $f21
    ctx->pc = 0x13857cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_138580:
    // 0x138580: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x138580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_138584:
    // 0x138584: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x138584u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_138588:
    // 0x138588: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x138588u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_13858c:
    // 0x13858c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x13858cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_138590:
    // 0x138590: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x138590u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_138594:
    // 0x138594: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x138594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_138598:
    // 0x138598: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x138598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_13859c:
    // 0x13859c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x13859cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1385a0:
    // 0x1385a0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1385a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_1385a4:
    // 0x1385a4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1385a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1385a8:
    // 0x1385a8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1385a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1385ac:
    // 0x1385ac: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1385acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1385b0:
    // 0x1385b0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1385b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1385b4:
    // 0x1385b4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1385b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1385b8:
    // 0x1385b8: 0xc136b30  jal         func_4DACC0
label_1385bc:
    if (ctx->pc == 0x1385BCu) {
        ctx->pc = 0x1385BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385B8u;
        // 0x1385bc: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1385C0u;
        goto label_1385c0;
    }
    ctx->pc = 0x1385B8u;
    SET_GPR_U32(ctx, 31, 0x1385C0u);
    ctx->pc = 0x1385BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1385B8u;
    // 0x1385bc: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x1385B8u, 0x1385C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1385C0u;
label_1385c0:
    // 0x1385c0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1385c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1385c4:
    // 0x1385c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1385c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1385c8:
    // 0x1385c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1385c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1385cc:
    // 0x1385cc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1385ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1385d0:
    // 0x1385d0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1385d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1385d4:
    // 0x1385d4: 0xc136d44  jal         func_4DB510
label_1385d8:
    if (ctx->pc == 0x1385D8u) {
        ctx->pc = 0x1385D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385D4u;
        // 0x1385d8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1385DCu;
        goto label_1385dc;
    }
    ctx->pc = 0x1385D4u;
    SET_GPR_U32(ctx, 31, 0x1385DCu);
    ctx->pc = 0x1385D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1385D4u;
    // 0x1385d8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x1385D4u, 0x1385DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1385DCu;
label_1385dc:
    // 0x1385dc: 0xc6400238  lwc1        $f0, 0x238($s2)
    ctx->pc = 0x1385dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1385e0:
    // 0x1385e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1385e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1385e4:
    // 0x1385e4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1385e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1385e8:
    // 0x1385e8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1385e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1385ec:
    // 0x1385ec: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1385ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1385f0:
    // 0x1385f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1385f4:
    if (ctx->pc == 0x1385F4u) {
        ctx->pc = 0x1385F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385F0u;
        // 0x1385f4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1385F8u;
        goto label_1385f8;
    }
    ctx->pc = 0x1385F0u;
    {
        const bool branch_taken_0x1385f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1385F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385F0u;
        // 0x1385f4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385f0) {
            ctx->pc = 0x138610u;
            goto label_138610;
        }
    }
    ctx->pc = 0x1385F8u;
label_1385f8:
    // 0x1385f8: 0xc640023c  lwc1        $f0, 0x23C($s2)
    ctx->pc = 0x1385f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1385fc:
    // 0x1385fc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1385fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_138600:
    // 0x138600: 0x0  nop
    ctx->pc = 0x138600u;
    // NOP
label_138604:
    // 0x138604: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_138608:
    if (ctx->pc == 0x138608u) {
        ctx->pc = 0x138608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138604u;
        // 0x138608: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13860Cu;
        goto label_13860c;
    }
    ctx->pc = 0x138604u;
    {
        const bool branch_taken_0x138604 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138604u;
        // 0x138608: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138604) {
            ctx->pc = 0x138610u;
            goto label_138610;
        }
    }
    ctx->pc = 0x13860Cu;
label_13860c:
    // 0x13860c: 0xafaa0294  sw          $t2, 0x294($sp)
    ctx->pc = 0x13860cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 10));
label_138610:
    // 0x138610: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x138610u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_138614:
    // 0x138614: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x138614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_138618:
    // 0x138618: 0x8d6c27e4  lw          $t4, 0x27E4($t3)
    ctx->pc = 0x138618u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 10212)));
label_13861c:
    // 0x13861c: 0x24458fd0  addiu       $a1, $v0, -0x7030
    ctx->pc = 0x13861cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938576));
label_138620:
    // 0x138620: 0x3c090055  lui         $t1, 0x55
    ctx->pc = 0x138620u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)85 << 16));
label_138624:
    // 0x138624: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x138624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_138628:
    // 0x138628: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x138628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_13862c:
    // 0x13862c: 0x25288fe8  addiu       $t0, $t1, -0x7018
    ctx->pc = 0x13862cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294938600));
label_138630:
    // 0x138630: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x138630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_138634:
    // 0x138634: 0x24090137  addiu       $t1, $zero, 0x137
    ctx->pc = 0x138634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
label_138638:
    // 0x138638: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x138638u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_13863c:
    // 0x13863c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13863cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138640:
    // 0x138640: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x138640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_138644:
    // 0x138644: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x138644u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138648:
    // 0x138648: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x138648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_13864c:
    // 0x13864c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13864cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_138650:
    // 0x138650: 0x40f809  jalr        $v0
label_138654:
    if (ctx->pc == 0x138654u) {
        ctx->pc = 0x138654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138650u;
        // 0x138654: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138658u;
        goto label_138658;
    }
    ctx->pc = 0x138650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138658u);
        ctx->pc = 0x138654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138650u;
        // 0x138654: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138650u, 0x138658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138658u;
label_138658:
    // 0x138658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x138658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13865c:
    // 0x13865c: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_138660:
    if (ctx->pc == 0x138660u) {
        ctx->pc = 0x138660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13865Cu;
        // 0x138660: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138664u;
        goto label_138664;
    }
    ctx->pc = 0x13865Cu;
    {
        const bool branch_taken_0x13865c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13865c) {
            ctx->pc = 0x138660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13865Cu;
            // 0x138660: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138674u;
            goto label_138674;
        }
    }
    ctx->pc = 0x138664u;
label_138664:
    // 0x138664: 0xc0d0aa8  jal         func_342AA0
label_138668:
    if (ctx->pc == 0x138668u) {
        ctx->pc = 0x138668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138664u;
        // 0x138668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13866Cu;
        goto label_13866c;
    }
    ctx->pc = 0x138664u;
    SET_GPR_U32(ctx, 31, 0x13866Cu);
    ctx->pc = 0x138668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138664u;
    // 0x138668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AA0u, 0x138664u, 0x13866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13866Cu;
label_13866c:
    // 0x13866c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13866cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138670:
    // 0x138670: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x138670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_138674:
    // 0x138674: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x138674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
label_138678:
    // 0x138678: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x138678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
label_13867c:
    // 0x13867c: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x13867cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
label_138680:
    // 0x138680: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x138680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_138684:
    // 0x138684: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x138684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_138688:
    // 0x138688: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x138688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
label_13868c:
    // 0x13868c: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x13868cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_138690:
    // 0x138690: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x138690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
label_138694:
    // 0x138694: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x138694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
label_138698:
    // 0x138698: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x138698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
label_13869c:
    // 0x13869c: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x13869cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
label_1386a0:
    // 0x1386a0: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x1386a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
label_1386a4:
    // 0x1386a4: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x1386a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
label_1386a8:
    // 0x1386a8: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x1386a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
label_1386ac:
    // 0x1386ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1386acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1386b0:
    // 0x1386b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1386b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1386b4:
    // 0x1386b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1386b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1386b8:
    // 0x1386b8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1386b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1386bc:
    // 0x1386bc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1386bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1386c0:
    // 0x1386c0: 0x60f809  jalr        $v1
label_1386c4:
    if (ctx->pc == 0x1386C4u) {
        ctx->pc = 0x1386C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386C0u;
        // 0x1386c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1386C8u;
        goto label_1386c8;
    }
    ctx->pc = 0x1386C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1386C8u);
        ctx->pc = 0x1386C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386C0u;
        // 0x1386c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1386C0u, 0x1386C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1386C8u;
label_1386c8:
    // 0x1386c8: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1386c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_1386cc:
    // 0x1386cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1386ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1386d0:
    // 0x1386d0: 0xc0d065c  jal         func_341970
label_1386d4:
    if (ctx->pc == 0x1386D4u) {
        ctx->pc = 0x1386D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386D0u;
        // 0x1386d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1386D8u;
        goto label_1386d8;
    }
    ctx->pc = 0x1386D0u;
    SET_GPR_U32(ctx, 31, 0x1386D8u);
    ctx->pc = 0x1386D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1386D0u;
    // 0x1386d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341970u, 0x1386D0u, 0x1386D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1386D8u;
label_1386d8:
    // 0x1386d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1386d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1386dc:
    // 0x1386dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1386dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1386e0:
    // 0x1386e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1386e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1386e4:
    // 0x1386e4: 0xc0d06aa  jal         func_341AA8
label_1386e8:
    if (ctx->pc == 0x1386E8u) {
        ctx->pc = 0x1386E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386E4u;
        // 0x1386e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1386ECu;
        goto label_1386ec;
    }
    ctx->pc = 0x1386E4u;
    SET_GPR_U32(ctx, 31, 0x1386ECu);
    ctx->pc = 0x1386E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1386E4u;
    // 0x1386e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341AA8u, 0x1386E4u, 0x1386ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1386ECu;
label_1386ec:
    // 0x1386ec: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1386ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_1386f0:
    // 0x1386f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1386f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1386f4:
    // 0x1386f4: 0x8ee47198  lw          $a0, 0x7198($s7)
    ctx->pc = 0x1386f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 29080)));
label_1386f8:
    // 0x1386f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1386f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1386fc:
    // 0x1386fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1386fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_138700:
    // 0x138700: 0xc0d019a  jal         func_340668
label_138704:
    if (ctx->pc == 0x138704u) {
        ctx->pc = 0x138704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138700u;
        // 0x138704: 0xafa201c0  sw          $v0, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138708u;
        goto label_138708;
    }
    ctx->pc = 0x138700u;
    SET_GPR_U32(ctx, 31, 0x138708u);
    ctx->pc = 0x138704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138700u;
    // 0x138704: 0xafa201c0  sw          $v0, 0x1C0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340668u, 0x138700u, 0x138708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138708u;
label_138708:
    // 0x138708: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x138708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13870c:
    // 0x13870c: 0xc0d0704  jal         func_341C10
label_138710:
    if (ctx->pc == 0x138710u) {
        ctx->pc = 0x138710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13870Cu;
        // 0x138710: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138714u;
        goto label_138714;
    }
    ctx->pc = 0x13870Cu;
    SET_GPR_U32(ctx, 31, 0x138714u);
    ctx->pc = 0x138710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13870Cu;
    // 0x138710: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x13870Cu, 0x138714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138714u;
label_138714:
    // 0x138714: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x138714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_138718:
    // 0x138718: 0x7ba70030  lq          $a3, 0x30($sp)
    ctx->pc = 0x138718u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13871c:
    // 0x13871c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13871cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138720:
    // 0x138720: 0x34422812  ori         $v0, $v0, 0x2812
    ctx->pc = 0x138720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10258);
label_138724:
    // 0x138724: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x138724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_138728:
    // 0x138728: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x138728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_13872c:
    // 0x13872c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x13872cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_138730:
    // 0x138730: 0xafa50164  sw          $a1, 0x164($sp)
    ctx->pc = 0x138730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 5));
label_138734:
    // 0x138734: 0xafa60158  sw          $a2, 0x158($sp)
    ctx->pc = 0x138734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 6));
label_138738:
    // 0x138738: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x138738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_13873c:
    // 0x13873c: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x13873cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
label_138740:
    // 0x138740: 0xafa40154  sw          $a0, 0x154($sp)
    ctx->pc = 0x138740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 4));
label_138744:
    // 0x138744: 0xafb30140  sw          $s3, 0x140($sp)
    ctx->pc = 0x138744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 19));
label_138748:
    // 0x138748: 0xafb00144  sw          $s0, 0x144($sp)
    ctx->pc = 0x138748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 16));
label_13874c:
    // 0x13874c: 0xafb2014c  sw          $s2, 0x14C($sp)
    ctx->pc = 0x13874cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 18));
label_138750:
    // 0x138750: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x138750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
label_138754:
    // 0x138754: 0xe7b50174  swc1        $f21, 0x174($sp)
    ctx->pc = 0x138754u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_138758:
    // 0x138758: 0x7e070050  sq          $a3, 0x50($s0)
    ctx->pc = 0x138758u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 7));
label_13875c:
    // 0x13875c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_138760:
    // 0x138760: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x138760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_138764:
    // 0x138764: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x138764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_138768:
    // 0x138768: 0x60f809  jalr        $v1
label_13876c:
    if (ctx->pc == 0x13876Cu) {
        ctx->pc = 0x13876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138768u;
        // 0x13876c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138770u;
        goto label_138770;
    }
    ctx->pc = 0x138768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x138770u);
        ctx->pc = 0x13876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138768u;
        // 0x13876c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138768u, 0x138770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138770u;
label_138770:
    // 0x138770: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x138770u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_138774:
    // 0x138774: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_138778:
    // 0x138778: 0xc136b24  jal         func_4DAC90
label_13877c:
    if (ctx->pc == 0x13877Cu) {
        ctx->pc = 0x13877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138778u;
        // 0x13877c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138780u;
        goto label_138780;
    }
    ctx->pc = 0x138778u;
    SET_GPR_U32(ctx, 31, 0x138780u);
    ctx->pc = 0x13877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138778u;
    // 0x13877c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x138778u, 0x138780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138780u;
label_138780:
    // 0x138780: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x138780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_138784:
    // 0x138784: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x138784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_138788:
    // 0x138788: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x138788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_13878c:
    // 0x13878c: 0x8ee47198  lw          $a0, 0x7198($s7)
    ctx->pc = 0x13878cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 29080)));
label_138790:
    // 0x138790: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x138790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_138794:
    // 0x138794: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x138794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_138798:
    // 0x138798: 0xc0cf9fc  jal         func_33E7F0
label_13879c:
    if (ctx->pc == 0x13879Cu) {
        ctx->pc = 0x13879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138798u;
        // 0x13879c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387A0u;
        goto label_1387a0;
    }
    ctx->pc = 0x138798u;
    SET_GPR_U32(ctx, 31, 0x1387A0u);
    ctx->pc = 0x13879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138798u;
    // 0x13879c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x138798u, 0x1387A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1387A0u;
label_1387a0:
    // 0x1387a0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1387a4:
    if (ctx->pc == 0x1387A4u) {
        ctx->pc = 0x1387A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387A0u;
        // 0x1387a4: 0xc7a00100  lwc1        $f0, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387A8u;
        goto label_1387a8;
    }
    ctx->pc = 0x1387A0u;
    {
        const bool branch_taken_0x1387a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387A0u;
        // 0x1387a4: 0xc7a00100  lwc1        $f0, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387a0) {
            ctx->pc = 0x138830u;
            goto label_138830;
        }
    }
    ctx->pc = 0x1387A8u;
label_1387a8:
    // 0x1387a8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1387a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1387ac:
    // 0x1387ac: 0x0  nop
    ctx->pc = 0x1387acu;
    // NOP
label_1387b0:
    // 0x1387b0: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_1387b4:
    if (ctx->pc == 0x1387B4u) {
        ctx->pc = 0x1387B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387B0u;
        // 0x1387b4: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387B8u;
        goto label_1387b8;
    }
    ctx->pc = 0x1387B0u;
    {
        const bool branch_taken_0x1387b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1387B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387B0u;
        // 0x1387b4: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387b0) {
            ctx->pc = 0x138830u;
            goto label_138830;
        }
    }
    ctx->pc = 0x1387B8u;
label_1387b8:
    // 0x1387b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1387b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1387bc:
    // 0x1387bc: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x1387bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
label_1387c0:
    // 0x1387c0: 0xc0e44cc  jal         func_391330
label_1387c4:
    if (ctx->pc == 0x1387C4u) {
        ctx->pc = 0x1387C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387C0u;
        // 0x1387c4: 0x94450112  lhu         $a1, 0x112($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387C8u;
        goto label_1387c8;
    }
    ctx->pc = 0x1387C0u;
    SET_GPR_U32(ctx, 31, 0x1387C8u);
    ctx->pc = 0x1387C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1387C0u;
    // 0x1387c4: 0x94450112  lhu         $a1, 0x112($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x1387C0u, 0x1387C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1387C8u;
label_1387c8:
    // 0x1387c8: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x1387c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_1387cc:
    // 0x1387cc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1387ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1387d0:
    // 0x1387d0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_1387d4:
    if (ctx->pc == 0x1387D4u) {
        ctx->pc = 0x1387D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387D0u;
        // 0x1387d4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387D8u;
        goto label_1387d8;
    }
    ctx->pc = 0x1387D0u;
    {
        const bool branch_taken_0x1387d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1387D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387D0u;
        // 0x1387d4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387d0) {
            ctx->pc = 0x138830u;
            goto label_138830;
        }
    }
    ctx->pc = 0x1387D8u;
label_1387d8:
    // 0x1387d8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_1387dc:
    if (ctx->pc == 0x1387DCu) {
        ctx->pc = 0x1387DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387D8u;
        // 0x1387dc: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387E0u;
        goto label_1387e0;
    }
    ctx->pc = 0x1387D8u;
    {
        const bool branch_taken_0x1387d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1387DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387D8u;
        // 0x1387dc: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387d8) {
            ctx->pc = 0x138830u;
            goto label_138830;
        }
    }
    ctx->pc = 0x1387E0u;
label_1387e0:
    // 0x1387e0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1387e4:
    if (ctx->pc == 0x1387E4u) {
        ctx->pc = 0x1387E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387E0u;
        // 0x1387e4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387E8u;
        goto label_1387e8;
    }
    ctx->pc = 0x1387E0u;
    {
        const bool branch_taken_0x1387e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1387E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387E0u;
        // 0x1387e4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387e0) {
            ctx->pc = 0x138830u;
            goto label_138830;
        }
    }
    ctx->pc = 0x1387E8u;
label_1387e8:
    // 0x1387e8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1387ec:
    if (ctx->pc == 0x1387ECu) {
        ctx->pc = 0x1387ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387E8u;
        // 0x1387ec: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387F0u;
        goto label_1387f0;
    }
    ctx->pc = 0x1387E8u;
    {
        const bool branch_taken_0x1387e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1387ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387E8u;
        // 0x1387ec: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387e8) {
            ctx->pc = 0x138830u;
            goto label_138830;
        }
    }
    ctx->pc = 0x1387F0u;
label_1387f0:
    // 0x1387f0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1387f4:
    if (ctx->pc == 0x1387F4u) {
        ctx->pc = 0x1387F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387F0u;
        // 0x1387f4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387F8u;
        goto label_1387f8;
    }
    ctx->pc = 0x1387F0u;
    {
        const bool branch_taken_0x1387f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1387F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387F0u;
        // 0x1387f4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387f0) {
            ctx->pc = 0x138830u;
            goto label_138830;
        }
    }
    ctx->pc = 0x1387F8u;
label_1387f8:
    // 0x1387f8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1387f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1387fc:
    // 0x1387fc: 0xc136afa  jal         func_4DABE8
label_138800:
    if (ctx->pc == 0x138800u) {
        ctx->pc = 0x138800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387FCu;
        // 0x138800: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138804u;
        goto label_138804;
    }
    ctx->pc = 0x1387FCu;
    SET_GPR_U32(ctx, 31, 0x138804u);
    ctx->pc = 0x138800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1387FCu;
    // 0x138800: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1387FCu, 0x138804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138804u;
label_138804:
    // 0x138804: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x138804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_138808:
    // 0x138808: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x138808u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13880c:
    // 0x13880c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13880cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_138810:
    // 0x138810: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x138810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_138814:
    // 0x138814: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x138814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_138818:
    // 0x138818: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x138818u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13881c:
    // 0x13881c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13881cu;
    // VWAITQ (Q already resolved in this runtime)
label_138820:
    // 0x138820: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x138820u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_138824:
    // 0x138824: 0x482a1800  qmfc2.ni    $t2, $vf3
    ctx->pc = 0x138824u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[3]));
label_138828:
    // 0x138828: 0x448aa000  mtc1        $t2, $f20
    ctx->pc = 0x138828u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13882c:
    // 0x13882c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x13882cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_138830:
    // 0x138830: 0x8ee47198  lw          $a0, 0x7198($s7)
    ctx->pc = 0x138830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 29080)));
label_138834:
    // 0x138834: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x138834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_138838:
    // 0x138838: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x138838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_13883c:
    // 0x13883c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x13883cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_138840:
    // 0x138840: 0xc0d01c0  jal         func_340700
label_138844:
    if (ctx->pc == 0x138844u) {
        ctx->pc = 0x138844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138840u;
        // 0x138844: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138848u;
        goto label_138848;
    }
    ctx->pc = 0x138840u;
    SET_GPR_U32(ctx, 31, 0x138848u);
    ctx->pc = 0x138844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138840u;
    // 0x138844: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340700u, 0x138840u, 0x138848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138848u;
label_138848:
    // 0x138848: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x138848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13884c:
    // 0x13884c: 0x0  nop
    ctx->pc = 0x13884cu;
    // NOP
label_138850:
    // 0x138850: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_138854:
    if (ctx->pc == 0x138854u) {
        ctx->pc = 0x138854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138850u;
        // 0x138854: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138858u;
        goto label_138858;
    }
    ctx->pc = 0x138850u;
    {
        const bool branch_taken_0x138850 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x138850) {
            ctx->pc = 0x138854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138850u;
            // 0x138854: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138858u;
            goto label_138858;
        }
    }
    ctx->pc = 0x138858u;
label_138858:
    // 0x138858: 0x1280004f  beqz        $s4, . + 4 + (0x4F << 2)
label_13885c:
    if (ctx->pc == 0x13885Cu) {
        ctx->pc = 0x13885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138858u;
        // 0x13885c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138860u;
        goto label_138860;
    }
    ctx->pc = 0x138858u;
    {
        const bool branch_taken_0x138858 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138858u;
        // 0x13885c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138858) {
            ctx->pc = 0x138998u;
            goto label_138998;
        }
    }
    ctx->pc = 0x138860u;
label_138860:
    // 0x138860: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x138860u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_138864:
    // 0x138864: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x138864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_138868:
    // 0x138868: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x138868u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13886c:
    // 0x13886c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x13886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_138870:
    // 0x138870: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x138870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_138874:
    // 0x138874: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x138874u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_138878:
    // 0x138878: 0x7fa50200  sq          $a1, 0x200($sp)
    ctx->pc = 0x138878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 5));
label_13887c:
    // 0x13887c: 0x7fa40210  sq          $a0, 0x210($sp)
    ctx->pc = 0x13887cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 4));
label_138880:
    // 0x138880: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x138880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_138884:
    // 0x138884: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x138884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_138888:
    // 0x138888: 0x84c40058  lh          $a0, 0x58($a2)
    ctx->pc = 0x138888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 88)));
label_13888c:
    // 0x13888c: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x13888cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_138890:
    // 0x138890: 0x40f809  jalr        $v0
label_138894:
    if (ctx->pc == 0x138894u) {
        ctx->pc = 0x138894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138890u;
        // 0x138894: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138898u;
        goto label_138898;
    }
    ctx->pc = 0x138890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138898u);
        ctx->pc = 0x138894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138890u;
        // 0x138894: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138890u, 0x138898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138898u;
label_138898:
    // 0x138898: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x138898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_13889c:
    // 0x13889c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x13889cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1388a0:
    // 0x1388a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1388a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1388a4:
    // 0x1388a4: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1388a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1388a8:
    // 0x1388a8: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x1388a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1388ac:
    // 0x1388ac: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1388acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1388b0:
    // 0x1388b0: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x1388b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_1388b4:
    // 0x1388b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1388b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1388b8:
    // 0x1388b8: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x1388b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_1388bc:
    // 0x1388bc: 0x244a9010  addiu       $t2, $v0, -0x6FF0
    ctx->pc = 0x1388bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938640));
label_1388c0:
    // 0x1388c0: 0x694b0007  ldl         $t3, 0x7($t2)
    ctx->pc = 0x1388c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_1388c4:
    // 0x1388c4: 0x6d4b0000  ldr         $t3, 0x0($t2)
    ctx->pc = 0x1388c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_1388c8:
    // 0x1388c8: 0x6943000f  ldl         $v1, 0xF($t2)
    ctx->pc = 0x1388c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1388cc:
    // 0x1388cc: 0x6d430008  ldr         $v1, 0x8($t2)
    ctx->pc = 0x1388ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1388d0:
    // 0x1388d0: 0xb3ab0067  sdl         $t3, 0x67($sp)
    ctx->pc = 0x1388d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1388d4:
    // 0x1388d4: 0xb7ab0060  sdr         $t3, 0x60($sp)
    ctx->pc = 0x1388d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1388d8:
    // 0x1388d8: 0xb3a3006f  sdl         $v1, 0x6F($sp)
    ctx->pc = 0x1388d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1388dc:
    // 0x1388dc: 0xb7a30068  sdr         $v1, 0x68($sp)
    ctx->pc = 0x1388dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1388e0:
    // 0x1388e0: 0xc0d4336  jal         func_350CD8
label_1388e4:
    if (ctx->pc == 0x1388E4u) {
        ctx->pc = 0x1388E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388E0u;
        // 0x1388e4: 0xafa00240  sw          $zero, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1388E8u;
        goto label_1388e8;
    }
    ctx->pc = 0x1388E0u;
    SET_GPR_U32(ctx, 31, 0x1388E8u);
    ctx->pc = 0x1388E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1388E0u;
    // 0x1388e4: 0xafa00240  sw          $zero, 0x240($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x1388E0u, 0x1388E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1388E8u;
label_1388e8:
    // 0x1388e8: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x1388e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1388ec:
    // 0x1388ec: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1388ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1388f0:
    // 0x1388f0: 0x0  nop
    ctx->pc = 0x1388f0u;
    // NOP
label_1388f4:
    // 0x1388f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1388f8:
    if (ctx->pc == 0x1388F8u) {
        ctx->pc = 0x1388F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388F4u;
        // 0x1388f8: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1388FCu;
        goto label_1388fc;
    }
    ctx->pc = 0x1388F4u;
    {
        const bool branch_taken_0x1388f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1388F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388F4u;
        // 0x1388f8: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388f4) {
            ctx->pc = 0x138904u;
            goto label_138904;
        }
    }
    ctx->pc = 0x1388FCu;
label_1388fc:
    // 0x1388fc: 0x10000026  b           . + 4 + (0x26 << 2)
label_138900:
    if (ctx->pc == 0x138900u) {
        ctx->pc = 0x138900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388FCu;
        // 0x138900: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138904u;
        goto label_138904;
    }
    ctx->pc = 0x1388FCu;
    {
        const bool branch_taken_0x1388fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388FCu;
        // 0x138900: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388fc) {
            ctx->pc = 0x138998u;
            goto label_138998;
        }
    }
    ctx->pc = 0x138904u;
label_138904:
    // 0x138904: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x138904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138908:
    // 0x138908: 0xc46091d8  lwc1        $f0, -0x6E28($v1)
    ctx->pc = 0x138908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13890c:
    // 0x13890c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_138910:
    // 0x138910: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x138910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_138914:
    // 0x138914: 0x245101b8  addiu       $s1, $v0, 0x1B8
    ctx->pc = 0x138914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 440));
label_138918:
    // 0x138918: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x138918u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13891c:
    // 0x13891c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x13891cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_138920:
    // 0x138920: 0x845001b8  lh          $s0, 0x1B8($v0)
    ctx->pc = 0x138920u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_138924:
    // 0x138924: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x138924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_138928:
    // 0x138928: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x138928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13892c:
    // 0x13892c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x13892cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_138930:
    // 0x138930: 0x60f809  jalr        $v1
label_138934:
    if (ctx->pc == 0x138934u) {
        ctx->pc = 0x138934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138930u;
        // 0x138934: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138938u;
        goto label_138938;
    }
    ctx->pc = 0x138930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x138938u);
        ctx->pc = 0x138934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138930u;
        // 0x138934: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138930u, 0x138938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138938u;
label_138938:
    // 0x138938: 0xc7ac0244  lwc1        $f12, 0x244($sp)
    ctx->pc = 0x138938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13893c:
    // 0x13893c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x13893cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_138940:
    // 0x138940: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x138940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_138944:
    // 0x138944: 0xc136b24  jal         func_4DAC90
label_138948:
    if (ctx->pc == 0x138948u) {
        ctx->pc = 0x138948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138944u;
        // 0x138948: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13894Cu;
        goto label_13894c;
    }
    ctx->pc = 0x138944u;
    SET_GPR_U32(ctx, 31, 0x13894Cu);
    ctx->pc = 0x138948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138944u;
    // 0x138948: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x138944u, 0x13894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13894Cu;
label_13894c:
    // 0x13894c: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x13894cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_138950:
    // 0x138950: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x138950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_138954:
    // 0x138954: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x138954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_138958:
    // 0x138958: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x138958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_13895c:
    // 0x13895c: 0xc136b18  jal         func_4DAC60
label_138960:
    if (ctx->pc == 0x138960u) {
        ctx->pc = 0x138960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13895Cu;
        // 0x138960: 0x7fa20270  sq          $v0, 0x270($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138964u;
        goto label_138964;
    }
    ctx->pc = 0x13895Cu;
    SET_GPR_U32(ctx, 31, 0x138964u);
    ctx->pc = 0x138960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13895Cu;
    // 0x138960: 0x7fa20270  sq          $v0, 0x270($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13895Cu, 0x138964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138964u;
label_138964:
    // 0x138964: 0x7ba30280  lq          $v1, 0x280($sp)
    ctx->pc = 0x138964u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_138968:
    // 0x138968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13896c:
    // 0x13896c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x13896cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_138970:
    // 0x138970: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x138970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_138974:
    // 0x138974: 0x40f809  jalr        $v0
label_138978:
    if (ctx->pc == 0x138978u) {
        ctx->pc = 0x138978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138974u;
        // 0x138978: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13897Cu;
        goto label_13897c;
    }
    ctx->pc = 0x138974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13897Cu);
        ctx->pc = 0x138978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138974u;
        // 0x138978: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138974u, 0x13897Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13897Cu;
label_13897c:
    // 0x13897c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_138980:
    // 0x138980: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x138980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_138984:
    // 0x138984: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x138984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_138988:
    // 0x138988: 0x40f809  jalr        $v0
label_13898c:
    if (ctx->pc == 0x13898Cu) {
        ctx->pc = 0x13898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138988u;
        // 0x13898c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138990u;
        goto label_138990;
    }
    ctx->pc = 0x138988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138990u);
        ctx->pc = 0x13898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138988u;
        // 0x13898c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138988u, 0x138990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138990u;
label_138990:
    // 0x138990: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x138990u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_138994:
    // 0x138994: 0x7e4301f0  sq          $v1, 0x1F0($s2)
    ctx->pc = 0x138994u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 496), GPR_VEC(ctx, 3));
label_138998:
    // 0x138998: 0x1ea0000a  bgtz        $s5, . + 4 + (0xA << 2)
label_13899c:
    if (ctx->pc == 0x13899Cu) {
        ctx->pc = 0x13899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138998u;
        // 0x13899c: 0x3aa20001  xori        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1389A0u;
        goto label_1389a0;
    }
    ctx->pc = 0x138998u;
    {
        const bool branch_taken_0x138998 = (GPR_S32(ctx, 21) > 0);
        ctx->pc = 0x13899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138998u;
        // 0x13899c: 0x3aa20001  xori        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138998) {
            ctx->pc = 0x1389C4u;
            goto label_1389c4;
        }
    }
    ctx->pc = 0x1389A0u;
label_1389a0:
    // 0x1389a0: 0x1680fdcd  bnez        $s4, . + 4 + (-0x233 << 2)
label_1389a4:
    if (ctx->pc == 0x1389A4u) {
        ctx->pc = 0x1389A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389A0u;
        // 0x1389a4: 0xafb40290  sw          $s4, 0x290($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1389A8u;
        goto label_1389a8;
    }
    ctx->pc = 0x1389A0u;
    {
        const bool branch_taken_0x1389a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1389A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389A0u;
        // 0x1389a4: 0xafb40290  sw          $s4, 0x290($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389a0) {
            ctx->pc = 0x1380D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1380d8;
        }
    }
    ctx->pc = 0x1389A8u;
label_1389a8:
    // 0x1389a8: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
label_1389ac:
    if (ctx->pc == 0x1389ACu) {
        ctx->pc = 0x1389ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389A8u;
        // 0x1389ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1389B0u;
        goto label_1389b0;
    }
    ctx->pc = 0x1389A8u;
    {
        const bool branch_taken_0x1389a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1389ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389A8u;
        // 0x1389ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389a8) {
            ctx->pc = 0x1389CCu;
            goto label_1389cc;
        }
    }
    ctx->pc = 0x1389B0u;
label_1389b0:
    // 0x1389b0: 0x8fab0294  lw          $t3, 0x294($sp)
    ctx->pc = 0x1389b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_1389b4:
    // 0x1389b4: 0x5560fdc9  bnel        $t3, $zero, . + 4 + (-0x237 << 2)
label_1389b8:
    if (ctx->pc == 0x1389B8u) {
        ctx->pc = 0x1389B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389B4u;
        // 0x1389b8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1389BCu;
        goto label_1389bc;
    }
    ctx->pc = 0x1389B4u;
    {
        const bool branch_taken_0x1389b4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1389b4) {
            ctx->pc = 0x1389B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1389B4u;
            // 0x1389b8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1380DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1380dc;
        }
    }
    ctx->pc = 0x1389BCu;
label_1389bc:
    // 0x1389bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1389c0:
    if (ctx->pc == 0x1389C0u) {
        ctx->pc = 0x1389C4u;
        goto label_1389c4;
    }
    ctx->pc = 0x1389BCu;
    {
        const bool branch_taken_0x1389bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1389bc) {
            ctx->pc = 0x1389CCu;
            goto label_1389cc;
        }
    }
    ctx->pc = 0x1389C4u;
label_1389c4:
    // 0x1389c4: 0x282f00a  movz        $fp, $s4, $v0
    ctx->pc = 0x1389c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 20));
label_1389c8:
    // 0x1389c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1389c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1389cc:
    // 0x1389cc: 0xc0d0680  jal         func_341A00
label_1389d0:
    if (ctx->pc == 0x1389D0u) {
        ctx->pc = 0x1389D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389CCu;
        // 0x1389d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1389D4u;
        goto label_1389d4;
    }
    ctx->pc = 0x1389CCu;
    SET_GPR_U32(ctx, 31, 0x1389D4u);
    ctx->pc = 0x1389D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389CCu;
    // 0x1389d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A00u, 0x1389CCu, 0x1389D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389D4u;
label_1389d4:
    // 0x1389d4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1389d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1389d8:
    // 0x1389d8: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x1389d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_1389dc:
    // 0x1389dc: 0x1440fe08  bnez        $v0, . + 4 + (-0x1F8 << 2)
label_1389e0:
    if (ctx->pc == 0x1389E0u) {
        ctx->pc = 0x1389E4u;
        goto label_1389e4;
    }
    ctx->pc = 0x1389DCu;
    {
        const bool branch_taken_0x1389dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1389dc) {
            ctx->pc = 0x138200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138200;
        }
    }
    ctx->pc = 0x1389E4u;
label_1389e4:
    // 0x1389e4: 0x17c00009  bnez        $fp, . + 4 + (0x9 << 2)
label_1389e8:
    if (ctx->pc == 0x1389E8u) {
        ctx->pc = 0x1389E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389E4u;
        // 0x1389e8: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1389ECu;
        goto label_1389ec;
    }
    ctx->pc = 0x1389E4u;
    {
        const bool branch_taken_0x1389e4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1389E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389E4u;
        // 0x1389e8: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389e4) {
            ctx->pc = 0x138A0Cu;
            goto label_138a0c;
        }
    }
    ctx->pc = 0x1389ECu;
label_1389ec:
    // 0x1389ec: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1389ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_1389f0:
    // 0x1389f0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1389f4:
    if (ctx->pc == 0x1389F4u) {
        ctx->pc = 0x1389F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389F0u;
        // 0x1389f4: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1389F8u;
        goto label_1389f8;
    }
    ctx->pc = 0x1389F0u;
    {
        const bool branch_taken_0x1389f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1389f0) {
            ctx->pc = 0x1389F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1389F0u;
            // 0x1389f4: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138A0Cu;
            goto label_138a0c;
        }
    }
    ctx->pc = 0x1389F8u;
label_1389f8:
    // 0x1389f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1389f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1389fc:
    // 0x1389fc: 0xae400248  sw          $zero, 0x248($s2)
    ctx->pc = 0x1389fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 584), GPR_U32(ctx, 0));
label_138a00:
    // 0x138a00: 0xae42024c  sw          $v0, 0x24C($s2)
    ctx->pc = 0x138a00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 2));
label_138a04:
    // 0x138a04: 0x10000052  b           . + 4 + (0x52 << 2)
label_138a08:
    if (ctx->pc == 0x138A08u) {
        ctx->pc = 0x138A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A04u;
        // 0x138a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A0Cu;
        goto label_138a0c;
    }
    ctx->pc = 0x138A04u;
    {
        const bool branch_taken_0x138a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A04u;
        // 0x138a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a04) {
            ctx->pc = 0x138B50u;
            goto label_138b50;
        }
    }
    ctx->pc = 0x138A0Cu;
label_138a0c:
    // 0x138a0c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x138a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_138a10:
    // 0x138a10: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x138a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_138a14:
    // 0x138a14: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x138a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_138a18:
    // 0x138a18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_138a1c:
    // 0x138a1c: 0x7e420220  sq          $v0, 0x220($s2)
    ctx->pc = 0x138a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 544), GPR_VEC(ctx, 2));
label_138a20:
    // 0x138a20: 0xe6400234  swc1        $f0, 0x234($s2)
    ctx->pc = 0x138a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 564), bits); }
label_138a24:
    // 0x138a24: 0x8e05b734  lw          $a1, -0x48CC($s0)
    ctx->pc = 0x138a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_138a28:
    // 0x138a28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x138a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_138a2c:
    // 0x138a2c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x138a2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_138a30:
    // 0x138a30: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x138a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_138a34:
    // 0x138a34: 0x40f809  jalr        $v0
label_138a38:
    if (ctx->pc == 0x138A38u) {
        ctx->pc = 0x138A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A34u;
        // 0x138a38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A3Cu;
        goto label_138a3c;
    }
    ctx->pc = 0x138A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138A3Cu);
        ctx->pc = 0x138A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A34u;
        // 0x138a38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138A34u, 0x138A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138A3Cu;
label_138a3c:
    // 0x138a3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x138a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_138a40:
    // 0x138a40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_138a44:
    if (ctx->pc == 0x138A44u) {
        ctx->pc = 0x138A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A40u;
        // 0x138a44: 0x8e05b734  lw          $a1, -0x48CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A48u;
        goto label_138a48;
    }
    ctx->pc = 0x138A40u;
    {
        const bool branch_taken_0x138a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A40u;
        // 0x138a44: 0x8e05b734  lw          $a1, -0x48CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a40) {
            ctx->pc = 0x138A60u;
            goto label_138a60;
        }
    }
    ctx->pc = 0x138A48u;
label_138a48:
    // 0x138a48: 0x3c013e44  lui         $at, 0x3E44
    ctx->pc = 0x138a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15940 << 16));
label_138a4c:
    // 0x138a4c: 0x3421980a  ori         $at, $at, 0x980A
    ctx->pc = 0x138a4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38922);
label_138a50:
    // 0x138a50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_138a54:
    // 0x138a54: 0x0  nop
    ctx->pc = 0x138a54u;
    // NOP
label_138a58:
    // 0x138a58: 0xe6400234  swc1        $f0, 0x234($s2)
    ctx->pc = 0x138a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 564), bits); }
label_138a5c:
    // 0x138a5c: 0x8e05b734  lw          $a1, -0x48CC($s0)
    ctx->pc = 0x138a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_138a60:
    // 0x138a60: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x138a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_138a64:
    // 0x138a64: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x138a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_138a68:
    // 0x138a68: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x138a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_138a6c:
    // 0x138a6c: 0x40f809  jalr        $v0
label_138a70:
    if (ctx->pc == 0x138A70u) {
        ctx->pc = 0x138A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A6Cu;
        // 0x138a70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A74u;
        goto label_138a74;
    }
    ctx->pc = 0x138A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138A74u);
        ctx->pc = 0x138A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A6Cu;
        // 0x138a70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138A6Cu, 0x138A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138A74u;
label_138a74:
    // 0x138a74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x138a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_138a78:
    // 0x138a78: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_138a7c:
    if (ctx->pc == 0x138A7Cu) {
        ctx->pc = 0x138A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A78u;
        // 0x138a7c: 0xc6540234  lwc1        $f20, 0x234($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138A80u;
        goto label_138a80;
    }
    ctx->pc = 0x138A78u;
    {
        const bool branch_taken_0x138a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138a78) {
            ctx->pc = 0x138A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138A78u;
            // 0x138a7c: 0xc6540234  lwc1        $f20, 0x234($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x138A90u;
            goto label_138a90;
        }
    }
    ctx->pc = 0x138A80u;
label_138a80:
    // 0x138a80: 0xc6400234  lwc1        $f0, 0x234($s2)
    ctx->pc = 0x138a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138a84:
    // 0x138a84: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x138a84u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_138a88:
    // 0x138a88: 0xe6400234  swc1        $f0, 0x234($s2)
    ctx->pc = 0x138a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 564), bits); }
label_138a8c:
    // 0x138a8c: 0xc6540234  lwc1        $f20, 0x234($s2)
    ctx->pc = 0x138a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_138a90:
    // 0x138a90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x138a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_138a94:
    // 0x138a94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x138a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_138a98:
    // 0x138a98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_138a9c:
    // 0x138a9c: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x138a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_138aa0:
    // 0x138aa0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x138aa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_138aa4:
    // 0x138aa4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x138aa4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_138aa8:
    // 0x138aa8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x138aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_138aac:
    // 0x138aac: 0xc12e310  jal         func_4B8C40
label_138ab0:
    if (ctx->pc == 0x138AB0u) {
        ctx->pc = 0x138AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AACu;
        // 0x138ab0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138AB4u;
        goto label_138ab4;
    }
    ctx->pc = 0x138AACu;
    SET_GPR_U32(ctx, 31, 0x138AB4u);
    ctx->pc = 0x138AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138AACu;
    // 0x138ab0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x138AACu, 0x138AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138AB4u;
label_138ab4:
    // 0x138ab4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x138ab4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_138ab8:
    // 0x138ab8: 0xc12e29c  jal         func_4B8A70
label_138abc:
    if (ctx->pc == 0x138ABCu) {
        ctx->pc = 0x138ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AB8u;
        // 0x138abc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138AC0u;
        goto label_138ac0;
    }
    ctx->pc = 0x138AB8u;
    SET_GPR_U32(ctx, 31, 0x138AC0u);
    ctx->pc = 0x138ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138AB8u;
    // 0x138abc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x138AB8u, 0x138AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138AC0u;
label_138ac0:
    // 0x138ac0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x138ac0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_138ac4:
    // 0x138ac4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x138ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_138ac8:
    // 0x138ac8: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x138ac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_138acc:
    // 0x138acc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x138accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138ad0:
    // 0x138ad0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x138ad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_138ad4:
    // 0x138ad4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x138ad4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_138ad8:
    // 0x138ad8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x138ad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_138adc:
    // 0x138adc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x138adcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_138ae0:
    // 0x138ae0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x138ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_138ae4:
    // 0x138ae4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x138ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_138ae8:
    // 0x138ae8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x138ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_138aec:
    // 0x138aec: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x138aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_138af0:
    // 0x138af0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x138af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138af4:
    // 0x138af4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x138af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138af8:
    // 0x138af8: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x138af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_138afc:
    // 0x138afc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x138afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_138b00:
    // 0x138b00: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x138b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_138b04:
    // 0x138b04: 0xc136d44  jal         func_4DB510
label_138b08:
    if (ctx->pc == 0x138B08u) {
        ctx->pc = 0x138B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B04u;
        // 0x138b08: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138B0Cu;
        goto label_138b0c;
    }
    ctx->pc = 0x138B04u;
    SET_GPR_U32(ctx, 31, 0x138B0Cu);
    ctx->pc = 0x138B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138B04u;
    // 0x138b08: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x138B04u, 0x138B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138B0Cu;
label_138b0c:
    // 0x138b0c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x138b0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_138b10:
    // 0x138b10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x138b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138b14:
    // 0x138b14: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x138b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_138b18:
    // 0x138b18: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x138b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_138b1c:
    // 0x138b1c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x138b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_138b20:
    // 0x138b20: 0x846401c0  lh          $a0, 0x1C0($v1)
    ctx->pc = 0x138b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 448)));
label_138b24:
    // 0x138b24: 0x8c6201c4  lw          $v0, 0x1C4($v1)
    ctx->pc = 0x138b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
label_138b28:
    // 0x138b28: 0x40f809  jalr        $v0
label_138b2c:
    if (ctx->pc == 0x138B2Cu) {
        ctx->pc = 0x138B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B28u;
        // 0x138b2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138B30u;
        goto label_138b30;
    }
    ctx->pc = 0x138B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138B30u);
        ctx->pc = 0x138B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B28u;
        // 0x138b2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138B28u, 0x138B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138B30u;
label_138b30:
    // 0x138b30: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x138b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_138b34:
    // 0x138b34: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x138b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_138b38:
    // 0x138b38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x138b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_138b3c:
    // 0x138b3c: 0xc04828c  jal         func_120A30
label_138b40:
    if (ctx->pc == 0x138B40u) {
        ctx->pc = 0x138B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B3Cu;
        // 0x138b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138B44u;
        goto label_138b44;
    }
    ctx->pc = 0x138B3Cu;
    SET_GPR_U32(ctx, 31, 0x138B44u);
    ctx->pc = 0x138B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138B3Cu;
    // 0x138b40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x138B3Cu, 0x138B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138B44u;
label_138b44:
    // 0x138b44: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x138b44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_138b48:
    // 0x138b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138b4c:
    // 0x138b4c: 0x7e430210  sq          $v1, 0x210($s2)
    ctx->pc = 0x138b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 528), GPR_VEC(ctx, 3));
label_138b50:
    // 0x138b50: 0x7bb00340  lq          $s0, 0x340($sp)
    ctx->pc = 0x138b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 832)));
label_138b54:
    // 0x138b54: 0x7bb10330  lq          $s1, 0x330($sp)
    ctx->pc = 0x138b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_138b58:
    // 0x138b58: 0x7bb20320  lq          $s2, 0x320($sp)
    ctx->pc = 0x138b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_138b5c:
    // 0x138b5c: 0x7bb30310  lq          $s3, 0x310($sp)
    ctx->pc = 0x138b5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_138b60:
    // 0x138b60: 0x7bb40300  lq          $s4, 0x300($sp)
    ctx->pc = 0x138b60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_138b64:
    // 0x138b64: 0x7bb502f0  lq          $s5, 0x2F0($sp)
    ctx->pc = 0x138b64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_138b68:
    // 0x138b68: 0x7bb602e0  lq          $s6, 0x2E0($sp)
    ctx->pc = 0x138b68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_138b6c:
    // 0x138b6c: 0x7bb702d0  lq          $s7, 0x2D0($sp)
    ctx->pc = 0x138b6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_138b70:
    // 0x138b70: 0x7bbe02c0  lq          $fp, 0x2C0($sp)
    ctx->pc = 0x138b70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_138b74:
    // 0x138b74: 0xdfbf02b0  ld          $ra, 0x2B0($sp)
    ctx->pc = 0x138b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_138b78:
    // 0x138b78: 0xc7b60360  lwc1        $f22, 0x360($sp)
    ctx->pc = 0x138b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_138b7c:
    // 0x138b7c: 0xc7b50358  lwc1        $f21, 0x358($sp)
    ctx->pc = 0x138b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_138b80:
    // 0x138b80: 0xc7b40350  lwc1        $f20, 0x350($sp)
    ctx->pc = 0x138b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_138b84:
    // 0x138b84: 0x3e00008  jr          $ra
label_138b88:
    if (ctx->pc == 0x138B88u) {
        ctx->pc = 0x138B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B84u;
        // 0x138b88: 0x27bd0370  addiu       $sp, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138B8Cu;
        goto label_138b8c;
    }
    ctx->pc = 0x138B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B84u;
        // 0x138b88: 0x27bd0370  addiu       $sp, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138B8Cu;
label_138b8c:
    // 0x138b8c: 0x0  nop
    ctx->pc = 0x138b8cu;
    // NOP
    ctx->pc = 0x138b90u;
}
