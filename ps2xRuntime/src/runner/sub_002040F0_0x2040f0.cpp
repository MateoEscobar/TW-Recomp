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

// Function: sub_002040F0
// Address: 0x2040f0 - 0x204a78
void sub_002040F0_0x2040f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002040F0_0x2040f0");
#endif

    switch (ctx->pc) {
        case 0x2040f0u: goto label_2040f0;
        case 0x2040f4u: goto label_2040f4;
        case 0x2040f8u: goto label_2040f8;
        case 0x2040fcu: goto label_2040fc;
        case 0x204100u: goto label_204100;
        case 0x204104u: goto label_204104;
        case 0x204108u: goto label_204108;
        case 0x20410cu: goto label_20410c;
        case 0x204110u: goto label_204110;
        case 0x204114u: goto label_204114;
        case 0x204118u: goto label_204118;
        case 0x20411cu: goto label_20411c;
        case 0x204120u: goto label_204120;
        case 0x204124u: goto label_204124;
        case 0x204128u: goto label_204128;
        case 0x20412cu: goto label_20412c;
        case 0x204130u: goto label_204130;
        case 0x204134u: goto label_204134;
        case 0x204138u: goto label_204138;
        case 0x20413cu: goto label_20413c;
        case 0x204140u: goto label_204140;
        case 0x204144u: goto label_204144;
        case 0x204148u: goto label_204148;
        case 0x20414cu: goto label_20414c;
        case 0x204150u: goto label_204150;
        case 0x204154u: goto label_204154;
        case 0x204158u: goto label_204158;
        case 0x20415cu: goto label_20415c;
        case 0x204160u: goto label_204160;
        case 0x204164u: goto label_204164;
        case 0x204168u: goto label_204168;
        case 0x20416cu: goto label_20416c;
        case 0x204170u: goto label_204170;
        case 0x204174u: goto label_204174;
        case 0x204178u: goto label_204178;
        case 0x20417cu: goto label_20417c;
        case 0x204180u: goto label_204180;
        case 0x204184u: goto label_204184;
        case 0x204188u: goto label_204188;
        case 0x20418cu: goto label_20418c;
        case 0x204190u: goto label_204190;
        case 0x204194u: goto label_204194;
        case 0x204198u: goto label_204198;
        case 0x20419cu: goto label_20419c;
        case 0x2041a0u: goto label_2041a0;
        case 0x2041a4u: goto label_2041a4;
        case 0x2041a8u: goto label_2041a8;
        case 0x2041acu: goto label_2041ac;
        case 0x2041b0u: goto label_2041b0;
        case 0x2041b4u: goto label_2041b4;
        case 0x2041b8u: goto label_2041b8;
        case 0x2041bcu: goto label_2041bc;
        case 0x2041c0u: goto label_2041c0;
        case 0x2041c4u: goto label_2041c4;
        case 0x2041c8u: goto label_2041c8;
        case 0x2041ccu: goto label_2041cc;
        case 0x2041d0u: goto label_2041d0;
        case 0x2041d4u: goto label_2041d4;
        case 0x2041d8u: goto label_2041d8;
        case 0x2041dcu: goto label_2041dc;
        case 0x2041e0u: goto label_2041e0;
        case 0x2041e4u: goto label_2041e4;
        case 0x2041e8u: goto label_2041e8;
        case 0x2041ecu: goto label_2041ec;
        case 0x2041f0u: goto label_2041f0;
        case 0x2041f4u: goto label_2041f4;
        case 0x2041f8u: goto label_2041f8;
        case 0x2041fcu: goto label_2041fc;
        case 0x204200u: goto label_204200;
        case 0x204204u: goto label_204204;
        case 0x204208u: goto label_204208;
        case 0x20420cu: goto label_20420c;
        case 0x204210u: goto label_204210;
        case 0x204214u: goto label_204214;
        case 0x204218u: goto label_204218;
        case 0x20421cu: goto label_20421c;
        case 0x204220u: goto label_204220;
        case 0x204224u: goto label_204224;
        case 0x204228u: goto label_204228;
        case 0x20422cu: goto label_20422c;
        case 0x204230u: goto label_204230;
        case 0x204234u: goto label_204234;
        case 0x204238u: goto label_204238;
        case 0x20423cu: goto label_20423c;
        case 0x204240u: goto label_204240;
        case 0x204244u: goto label_204244;
        case 0x204248u: goto label_204248;
        case 0x20424cu: goto label_20424c;
        case 0x204250u: goto label_204250;
        case 0x204254u: goto label_204254;
        case 0x204258u: goto label_204258;
        case 0x20425cu: goto label_20425c;
        case 0x204260u: goto label_204260;
        case 0x204264u: goto label_204264;
        case 0x204268u: goto label_204268;
        case 0x20426cu: goto label_20426c;
        case 0x204270u: goto label_204270;
        case 0x204274u: goto label_204274;
        case 0x204278u: goto label_204278;
        case 0x20427cu: goto label_20427c;
        case 0x204280u: goto label_204280;
        case 0x204284u: goto label_204284;
        case 0x204288u: goto label_204288;
        case 0x20428cu: goto label_20428c;
        case 0x204290u: goto label_204290;
        case 0x204294u: goto label_204294;
        case 0x204298u: goto label_204298;
        case 0x20429cu: goto label_20429c;
        case 0x2042a0u: goto label_2042a0;
        case 0x2042a4u: goto label_2042a4;
        case 0x2042a8u: goto label_2042a8;
        case 0x2042acu: goto label_2042ac;
        case 0x2042b0u: goto label_2042b0;
        case 0x2042b4u: goto label_2042b4;
        case 0x2042b8u: goto label_2042b8;
        case 0x2042bcu: goto label_2042bc;
        case 0x2042c0u: goto label_2042c0;
        case 0x2042c4u: goto label_2042c4;
        case 0x2042c8u: goto label_2042c8;
        case 0x2042ccu: goto label_2042cc;
        case 0x2042d0u: goto label_2042d0;
        case 0x2042d4u: goto label_2042d4;
        case 0x2042d8u: goto label_2042d8;
        case 0x2042dcu: goto label_2042dc;
        case 0x2042e0u: goto label_2042e0;
        case 0x2042e4u: goto label_2042e4;
        case 0x2042e8u: goto label_2042e8;
        case 0x2042ecu: goto label_2042ec;
        case 0x2042f0u: goto label_2042f0;
        case 0x2042f4u: goto label_2042f4;
        case 0x2042f8u: goto label_2042f8;
        case 0x2042fcu: goto label_2042fc;
        case 0x204300u: goto label_204300;
        case 0x204304u: goto label_204304;
        case 0x204308u: goto label_204308;
        case 0x20430cu: goto label_20430c;
        case 0x204310u: goto label_204310;
        case 0x204314u: goto label_204314;
        case 0x204318u: goto label_204318;
        case 0x20431cu: goto label_20431c;
        case 0x204320u: goto label_204320;
        case 0x204324u: goto label_204324;
        case 0x204328u: goto label_204328;
        case 0x20432cu: goto label_20432c;
        case 0x204330u: goto label_204330;
        case 0x204334u: goto label_204334;
        case 0x204338u: goto label_204338;
        case 0x20433cu: goto label_20433c;
        case 0x204340u: goto label_204340;
        case 0x204344u: goto label_204344;
        case 0x204348u: goto label_204348;
        case 0x20434cu: goto label_20434c;
        case 0x204350u: goto label_204350;
        case 0x204354u: goto label_204354;
        case 0x204358u: goto label_204358;
        case 0x20435cu: goto label_20435c;
        case 0x204360u: goto label_204360;
        case 0x204364u: goto label_204364;
        case 0x204368u: goto label_204368;
        case 0x20436cu: goto label_20436c;
        case 0x204370u: goto label_204370;
        case 0x204374u: goto label_204374;
        case 0x204378u: goto label_204378;
        case 0x20437cu: goto label_20437c;
        case 0x204380u: goto label_204380;
        case 0x204384u: goto label_204384;
        case 0x204388u: goto label_204388;
        case 0x20438cu: goto label_20438c;
        case 0x204390u: goto label_204390;
        case 0x204394u: goto label_204394;
        case 0x204398u: goto label_204398;
        case 0x20439cu: goto label_20439c;
        case 0x2043a0u: goto label_2043a0;
        case 0x2043a4u: goto label_2043a4;
        case 0x2043a8u: goto label_2043a8;
        case 0x2043acu: goto label_2043ac;
        case 0x2043b0u: goto label_2043b0;
        case 0x2043b4u: goto label_2043b4;
        case 0x2043b8u: goto label_2043b8;
        case 0x2043bcu: goto label_2043bc;
        case 0x2043c0u: goto label_2043c0;
        case 0x2043c4u: goto label_2043c4;
        case 0x2043c8u: goto label_2043c8;
        case 0x2043ccu: goto label_2043cc;
        case 0x2043d0u: goto label_2043d0;
        case 0x2043d4u: goto label_2043d4;
        case 0x2043d8u: goto label_2043d8;
        case 0x2043dcu: goto label_2043dc;
        case 0x2043e0u: goto label_2043e0;
        case 0x2043e4u: goto label_2043e4;
        case 0x2043e8u: goto label_2043e8;
        case 0x2043ecu: goto label_2043ec;
        case 0x2043f0u: goto label_2043f0;
        case 0x2043f4u: goto label_2043f4;
        case 0x2043f8u: goto label_2043f8;
        case 0x2043fcu: goto label_2043fc;
        case 0x204400u: goto label_204400;
        case 0x204404u: goto label_204404;
        case 0x204408u: goto label_204408;
        case 0x20440cu: goto label_20440c;
        case 0x204410u: goto label_204410;
        case 0x204414u: goto label_204414;
        case 0x204418u: goto label_204418;
        case 0x20441cu: goto label_20441c;
        case 0x204420u: goto label_204420;
        case 0x204424u: goto label_204424;
        case 0x204428u: goto label_204428;
        case 0x20442cu: goto label_20442c;
        case 0x204430u: goto label_204430;
        case 0x204434u: goto label_204434;
        case 0x204438u: goto label_204438;
        case 0x20443cu: goto label_20443c;
        case 0x204440u: goto label_204440;
        case 0x204444u: goto label_204444;
        case 0x204448u: goto label_204448;
        case 0x20444cu: goto label_20444c;
        case 0x204450u: goto label_204450;
        case 0x204454u: goto label_204454;
        case 0x204458u: goto label_204458;
        case 0x20445cu: goto label_20445c;
        case 0x204460u: goto label_204460;
        case 0x204464u: goto label_204464;
        case 0x204468u: goto label_204468;
        case 0x20446cu: goto label_20446c;
        case 0x204470u: goto label_204470;
        case 0x204474u: goto label_204474;
        case 0x204478u: goto label_204478;
        case 0x20447cu: goto label_20447c;
        case 0x204480u: goto label_204480;
        case 0x204484u: goto label_204484;
        case 0x204488u: goto label_204488;
        case 0x20448cu: goto label_20448c;
        case 0x204490u: goto label_204490;
        case 0x204494u: goto label_204494;
        case 0x204498u: goto label_204498;
        case 0x20449cu: goto label_20449c;
        case 0x2044a0u: goto label_2044a0;
        case 0x2044a4u: goto label_2044a4;
        case 0x2044a8u: goto label_2044a8;
        case 0x2044acu: goto label_2044ac;
        case 0x2044b0u: goto label_2044b0;
        case 0x2044b4u: goto label_2044b4;
        case 0x2044b8u: goto label_2044b8;
        case 0x2044bcu: goto label_2044bc;
        case 0x2044c0u: goto label_2044c0;
        case 0x2044c4u: goto label_2044c4;
        case 0x2044c8u: goto label_2044c8;
        case 0x2044ccu: goto label_2044cc;
        case 0x2044d0u: goto label_2044d0;
        case 0x2044d4u: goto label_2044d4;
        case 0x2044d8u: goto label_2044d8;
        case 0x2044dcu: goto label_2044dc;
        case 0x2044e0u: goto label_2044e0;
        case 0x2044e4u: goto label_2044e4;
        case 0x2044e8u: goto label_2044e8;
        case 0x2044ecu: goto label_2044ec;
        case 0x2044f0u: goto label_2044f0;
        case 0x2044f4u: goto label_2044f4;
        case 0x2044f8u: goto label_2044f8;
        case 0x2044fcu: goto label_2044fc;
        case 0x204500u: goto label_204500;
        case 0x204504u: goto label_204504;
        case 0x204508u: goto label_204508;
        case 0x20450cu: goto label_20450c;
        case 0x204510u: goto label_204510;
        case 0x204514u: goto label_204514;
        case 0x204518u: goto label_204518;
        case 0x20451cu: goto label_20451c;
        case 0x204520u: goto label_204520;
        case 0x204524u: goto label_204524;
        case 0x204528u: goto label_204528;
        case 0x20452cu: goto label_20452c;
        case 0x204530u: goto label_204530;
        case 0x204534u: goto label_204534;
        case 0x204538u: goto label_204538;
        case 0x20453cu: goto label_20453c;
        case 0x204540u: goto label_204540;
        case 0x204544u: goto label_204544;
        case 0x204548u: goto label_204548;
        case 0x20454cu: goto label_20454c;
        case 0x204550u: goto label_204550;
        case 0x204554u: goto label_204554;
        case 0x204558u: goto label_204558;
        case 0x20455cu: goto label_20455c;
        case 0x204560u: goto label_204560;
        case 0x204564u: goto label_204564;
        case 0x204568u: goto label_204568;
        case 0x20456cu: goto label_20456c;
        case 0x204570u: goto label_204570;
        case 0x204574u: goto label_204574;
        case 0x204578u: goto label_204578;
        case 0x20457cu: goto label_20457c;
        case 0x204580u: goto label_204580;
        case 0x204584u: goto label_204584;
        case 0x204588u: goto label_204588;
        case 0x20458cu: goto label_20458c;
        case 0x204590u: goto label_204590;
        case 0x204594u: goto label_204594;
        case 0x204598u: goto label_204598;
        case 0x20459cu: goto label_20459c;
        case 0x2045a0u: goto label_2045a0;
        case 0x2045a4u: goto label_2045a4;
        case 0x2045a8u: goto label_2045a8;
        case 0x2045acu: goto label_2045ac;
        case 0x2045b0u: goto label_2045b0;
        case 0x2045b4u: goto label_2045b4;
        case 0x2045b8u: goto label_2045b8;
        case 0x2045bcu: goto label_2045bc;
        case 0x2045c0u: goto label_2045c0;
        case 0x2045c4u: goto label_2045c4;
        case 0x2045c8u: goto label_2045c8;
        case 0x2045ccu: goto label_2045cc;
        case 0x2045d0u: goto label_2045d0;
        case 0x2045d4u: goto label_2045d4;
        case 0x2045d8u: goto label_2045d8;
        case 0x2045dcu: goto label_2045dc;
        case 0x2045e0u: goto label_2045e0;
        case 0x2045e4u: goto label_2045e4;
        case 0x2045e8u: goto label_2045e8;
        case 0x2045ecu: goto label_2045ec;
        case 0x2045f0u: goto label_2045f0;
        case 0x2045f4u: goto label_2045f4;
        case 0x2045f8u: goto label_2045f8;
        case 0x2045fcu: goto label_2045fc;
        case 0x204600u: goto label_204600;
        case 0x204604u: goto label_204604;
        case 0x204608u: goto label_204608;
        case 0x20460cu: goto label_20460c;
        case 0x204610u: goto label_204610;
        case 0x204614u: goto label_204614;
        case 0x204618u: goto label_204618;
        case 0x20461cu: goto label_20461c;
        case 0x204620u: goto label_204620;
        case 0x204624u: goto label_204624;
        case 0x204628u: goto label_204628;
        case 0x20462cu: goto label_20462c;
        case 0x204630u: goto label_204630;
        case 0x204634u: goto label_204634;
        case 0x204638u: goto label_204638;
        case 0x20463cu: goto label_20463c;
        case 0x204640u: goto label_204640;
        case 0x204644u: goto label_204644;
        case 0x204648u: goto label_204648;
        case 0x20464cu: goto label_20464c;
        case 0x204650u: goto label_204650;
        case 0x204654u: goto label_204654;
        case 0x204658u: goto label_204658;
        case 0x20465cu: goto label_20465c;
        case 0x204660u: goto label_204660;
        case 0x204664u: goto label_204664;
        case 0x204668u: goto label_204668;
        case 0x20466cu: goto label_20466c;
        case 0x204670u: goto label_204670;
        case 0x204674u: goto label_204674;
        case 0x204678u: goto label_204678;
        case 0x20467cu: goto label_20467c;
        case 0x204680u: goto label_204680;
        case 0x204684u: goto label_204684;
        case 0x204688u: goto label_204688;
        case 0x20468cu: goto label_20468c;
        case 0x204690u: goto label_204690;
        case 0x204694u: goto label_204694;
        case 0x204698u: goto label_204698;
        case 0x20469cu: goto label_20469c;
        case 0x2046a0u: goto label_2046a0;
        case 0x2046a4u: goto label_2046a4;
        case 0x2046a8u: goto label_2046a8;
        case 0x2046acu: goto label_2046ac;
        case 0x2046b0u: goto label_2046b0;
        case 0x2046b4u: goto label_2046b4;
        case 0x2046b8u: goto label_2046b8;
        case 0x2046bcu: goto label_2046bc;
        case 0x2046c0u: goto label_2046c0;
        case 0x2046c4u: goto label_2046c4;
        case 0x2046c8u: goto label_2046c8;
        case 0x2046ccu: goto label_2046cc;
        case 0x2046d0u: goto label_2046d0;
        case 0x2046d4u: goto label_2046d4;
        case 0x2046d8u: goto label_2046d8;
        case 0x2046dcu: goto label_2046dc;
        case 0x2046e0u: goto label_2046e0;
        case 0x2046e4u: goto label_2046e4;
        case 0x2046e8u: goto label_2046e8;
        case 0x2046ecu: goto label_2046ec;
        case 0x2046f0u: goto label_2046f0;
        case 0x2046f4u: goto label_2046f4;
        case 0x2046f8u: goto label_2046f8;
        case 0x2046fcu: goto label_2046fc;
        case 0x204700u: goto label_204700;
        case 0x204704u: goto label_204704;
        case 0x204708u: goto label_204708;
        case 0x20470cu: goto label_20470c;
        case 0x204710u: goto label_204710;
        case 0x204714u: goto label_204714;
        case 0x204718u: goto label_204718;
        case 0x20471cu: goto label_20471c;
        case 0x204720u: goto label_204720;
        case 0x204724u: goto label_204724;
        case 0x204728u: goto label_204728;
        case 0x20472cu: goto label_20472c;
        case 0x204730u: goto label_204730;
        case 0x204734u: goto label_204734;
        case 0x204738u: goto label_204738;
        case 0x20473cu: goto label_20473c;
        case 0x204740u: goto label_204740;
        case 0x204744u: goto label_204744;
        case 0x204748u: goto label_204748;
        case 0x20474cu: goto label_20474c;
        case 0x204750u: goto label_204750;
        case 0x204754u: goto label_204754;
        case 0x204758u: goto label_204758;
        case 0x20475cu: goto label_20475c;
        case 0x204760u: goto label_204760;
        case 0x204764u: goto label_204764;
        case 0x204768u: goto label_204768;
        case 0x20476cu: goto label_20476c;
        case 0x204770u: goto label_204770;
        case 0x204774u: goto label_204774;
        case 0x204778u: goto label_204778;
        case 0x20477cu: goto label_20477c;
        case 0x204780u: goto label_204780;
        case 0x204784u: goto label_204784;
        case 0x204788u: goto label_204788;
        case 0x20478cu: goto label_20478c;
        case 0x204790u: goto label_204790;
        case 0x204794u: goto label_204794;
        case 0x204798u: goto label_204798;
        case 0x20479cu: goto label_20479c;
        case 0x2047a0u: goto label_2047a0;
        case 0x2047a4u: goto label_2047a4;
        case 0x2047a8u: goto label_2047a8;
        case 0x2047acu: goto label_2047ac;
        case 0x2047b0u: goto label_2047b0;
        case 0x2047b4u: goto label_2047b4;
        case 0x2047b8u: goto label_2047b8;
        case 0x2047bcu: goto label_2047bc;
        case 0x2047c0u: goto label_2047c0;
        case 0x2047c4u: goto label_2047c4;
        case 0x2047c8u: goto label_2047c8;
        case 0x2047ccu: goto label_2047cc;
        case 0x2047d0u: goto label_2047d0;
        case 0x2047d4u: goto label_2047d4;
        case 0x2047d8u: goto label_2047d8;
        case 0x2047dcu: goto label_2047dc;
        case 0x2047e0u: goto label_2047e0;
        case 0x2047e4u: goto label_2047e4;
        case 0x2047e8u: goto label_2047e8;
        case 0x2047ecu: goto label_2047ec;
        case 0x2047f0u: goto label_2047f0;
        case 0x2047f4u: goto label_2047f4;
        case 0x2047f8u: goto label_2047f8;
        case 0x2047fcu: goto label_2047fc;
        case 0x204800u: goto label_204800;
        case 0x204804u: goto label_204804;
        case 0x204808u: goto label_204808;
        case 0x20480cu: goto label_20480c;
        case 0x204810u: goto label_204810;
        case 0x204814u: goto label_204814;
        case 0x204818u: goto label_204818;
        case 0x20481cu: goto label_20481c;
        case 0x204820u: goto label_204820;
        case 0x204824u: goto label_204824;
        case 0x204828u: goto label_204828;
        case 0x20482cu: goto label_20482c;
        case 0x204830u: goto label_204830;
        case 0x204834u: goto label_204834;
        case 0x204838u: goto label_204838;
        case 0x20483cu: goto label_20483c;
        case 0x204840u: goto label_204840;
        case 0x204844u: goto label_204844;
        case 0x204848u: goto label_204848;
        case 0x20484cu: goto label_20484c;
        case 0x204850u: goto label_204850;
        case 0x204854u: goto label_204854;
        case 0x204858u: goto label_204858;
        case 0x20485cu: goto label_20485c;
        case 0x204860u: goto label_204860;
        case 0x204864u: goto label_204864;
        case 0x204868u: goto label_204868;
        case 0x20486cu: goto label_20486c;
        case 0x204870u: goto label_204870;
        case 0x204874u: goto label_204874;
        case 0x204878u: goto label_204878;
        case 0x20487cu: goto label_20487c;
        case 0x204880u: goto label_204880;
        case 0x204884u: goto label_204884;
        case 0x204888u: goto label_204888;
        case 0x20488cu: goto label_20488c;
        case 0x204890u: goto label_204890;
        case 0x204894u: goto label_204894;
        case 0x204898u: goto label_204898;
        case 0x20489cu: goto label_20489c;
        case 0x2048a0u: goto label_2048a0;
        case 0x2048a4u: goto label_2048a4;
        case 0x2048a8u: goto label_2048a8;
        case 0x2048acu: goto label_2048ac;
        case 0x2048b0u: goto label_2048b0;
        case 0x2048b4u: goto label_2048b4;
        case 0x2048b8u: goto label_2048b8;
        case 0x2048bcu: goto label_2048bc;
        case 0x2048c0u: goto label_2048c0;
        case 0x2048c4u: goto label_2048c4;
        case 0x2048c8u: goto label_2048c8;
        case 0x2048ccu: goto label_2048cc;
        case 0x2048d0u: goto label_2048d0;
        case 0x2048d4u: goto label_2048d4;
        case 0x2048d8u: goto label_2048d8;
        case 0x2048dcu: goto label_2048dc;
        case 0x2048e0u: goto label_2048e0;
        case 0x2048e4u: goto label_2048e4;
        case 0x2048e8u: goto label_2048e8;
        case 0x2048ecu: goto label_2048ec;
        case 0x2048f0u: goto label_2048f0;
        case 0x2048f4u: goto label_2048f4;
        case 0x2048f8u: goto label_2048f8;
        case 0x2048fcu: goto label_2048fc;
        case 0x204900u: goto label_204900;
        case 0x204904u: goto label_204904;
        case 0x204908u: goto label_204908;
        case 0x20490cu: goto label_20490c;
        case 0x204910u: goto label_204910;
        case 0x204914u: goto label_204914;
        case 0x204918u: goto label_204918;
        case 0x20491cu: goto label_20491c;
        case 0x204920u: goto label_204920;
        case 0x204924u: goto label_204924;
        case 0x204928u: goto label_204928;
        case 0x20492cu: goto label_20492c;
        case 0x204930u: goto label_204930;
        case 0x204934u: goto label_204934;
        case 0x204938u: goto label_204938;
        case 0x20493cu: goto label_20493c;
        case 0x204940u: goto label_204940;
        case 0x204944u: goto label_204944;
        case 0x204948u: goto label_204948;
        case 0x20494cu: goto label_20494c;
        case 0x204950u: goto label_204950;
        case 0x204954u: goto label_204954;
        case 0x204958u: goto label_204958;
        case 0x20495cu: goto label_20495c;
        case 0x204960u: goto label_204960;
        case 0x204964u: goto label_204964;
        case 0x204968u: goto label_204968;
        case 0x20496cu: goto label_20496c;
        case 0x204970u: goto label_204970;
        case 0x204974u: goto label_204974;
        case 0x204978u: goto label_204978;
        case 0x20497cu: goto label_20497c;
        case 0x204980u: goto label_204980;
        case 0x204984u: goto label_204984;
        case 0x204988u: goto label_204988;
        case 0x20498cu: goto label_20498c;
        case 0x204990u: goto label_204990;
        case 0x204994u: goto label_204994;
        case 0x204998u: goto label_204998;
        case 0x20499cu: goto label_20499c;
        case 0x2049a0u: goto label_2049a0;
        case 0x2049a4u: goto label_2049a4;
        case 0x2049a8u: goto label_2049a8;
        case 0x2049acu: goto label_2049ac;
        case 0x2049b0u: goto label_2049b0;
        case 0x2049b4u: goto label_2049b4;
        case 0x2049b8u: goto label_2049b8;
        case 0x2049bcu: goto label_2049bc;
        case 0x2049c0u: goto label_2049c0;
        case 0x2049c4u: goto label_2049c4;
        case 0x2049c8u: goto label_2049c8;
        case 0x2049ccu: goto label_2049cc;
        case 0x2049d0u: goto label_2049d0;
        case 0x2049d4u: goto label_2049d4;
        case 0x2049d8u: goto label_2049d8;
        case 0x2049dcu: goto label_2049dc;
        case 0x2049e0u: goto label_2049e0;
        case 0x2049e4u: goto label_2049e4;
        case 0x2049e8u: goto label_2049e8;
        case 0x2049ecu: goto label_2049ec;
        case 0x2049f0u: goto label_2049f0;
        case 0x2049f4u: goto label_2049f4;
        case 0x2049f8u: goto label_2049f8;
        case 0x2049fcu: goto label_2049fc;
        case 0x204a00u: goto label_204a00;
        case 0x204a04u: goto label_204a04;
        case 0x204a08u: goto label_204a08;
        case 0x204a0cu: goto label_204a0c;
        case 0x204a10u: goto label_204a10;
        case 0x204a14u: goto label_204a14;
        case 0x204a18u: goto label_204a18;
        case 0x204a1cu: goto label_204a1c;
        case 0x204a20u: goto label_204a20;
        case 0x204a24u: goto label_204a24;
        case 0x204a28u: goto label_204a28;
        case 0x204a2cu: goto label_204a2c;
        case 0x204a30u: goto label_204a30;
        case 0x204a34u: goto label_204a34;
        case 0x204a38u: goto label_204a38;
        case 0x204a3cu: goto label_204a3c;
        case 0x204a40u: goto label_204a40;
        case 0x204a44u: goto label_204a44;
        case 0x204a48u: goto label_204a48;
        case 0x204a4cu: goto label_204a4c;
        case 0x204a50u: goto label_204a50;
        case 0x204a54u: goto label_204a54;
        case 0x204a58u: goto label_204a58;
        case 0x204a5cu: goto label_204a5c;
        case 0x204a60u: goto label_204a60;
        case 0x204a64u: goto label_204a64;
        case 0x204a68u: goto label_204a68;
        case 0x204a6cu: goto label_204a6c;
        case 0x204a70u: goto label_204a70;
        case 0x204a74u: goto label_204a74;
        default: break;
    }

    ctx->pc = 0x2040f0u;

label_2040f0:
    // 0x2040f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2040f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2040f4:
    // 0x2040f4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2040f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2040f8:
    // 0x2040f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2040f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2040fc:
    // 0x2040fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2040fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_204100:
    // 0x204100: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x204100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_204104:
    // 0x204104: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x204104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_204108:
    // 0x204108: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x204108u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_20410c:
    // 0x20410c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204110:
    // 0x204110: 0xc071fa0  jal         func_1C7E80
label_204114:
    if (ctx->pc == 0x204114u) {
        ctx->pc = 0x204114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204110u;
        // 0x204114: 0x263327e4  addiu       $s3, $s1, 0x27E4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 10212));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204118u;
        goto label_204118;
    }
    ctx->pc = 0x204110u;
    SET_GPR_U32(ctx, 31, 0x204118u);
    ctx->pc = 0x204114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204110u;
    // 0x204114: 0x263327e4  addiu       $s3, $s1, 0x27E4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 10212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E80u, 0x204110u, 0x204118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204118u;
label_204118:
    // 0x204118: 0xc0579e4  jal         func_15E790
label_20411c:
    if (ctx->pc == 0x20411Cu) {
        ctx->pc = 0x204120u;
        goto label_204120;
    }
    ctx->pc = 0x204118u;
    SET_GPR_U32(ctx, 31, 0x204120u);
    ctx->pc = 0x15E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E790u, 0x204118u, 0x204120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204120u;
label_204120:
    // 0x204120: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x204120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_204124:
    // 0x204124: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x204124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_204128:
    // 0x204128: 0x8e2b27e4  lw          $t3, 0x27E4($s1)
    ctx->pc = 0x204128u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_20412c:
    // 0x20412c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x20412cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_204130:
    // 0x204130: 0x245285b0  addiu       $s2, $v0, -0x7A50
    ctx->pc = 0x204130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935984));
label_204134:
    // 0x204134: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x204134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_204138:
    // 0x204138: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x204138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_20413c:
    // 0x20413c: 0x24a585a0  addiu       $a1, $a1, -0x7A60
    ctx->pc = 0x20413cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935968));
label_204140:
    // 0x204140: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x204140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_204144:
    // 0x204144: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x204144u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204148:
    // 0x204148: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x204148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20414c:
    // 0x20414c: 0x24090192  addiu       $t1, $zero, 0x192
    ctx->pc = 0x20414cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 402));
label_204150:
    // 0x204150: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x204150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_204154:
    // 0x204154: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x204154u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204158:
    // 0x204158: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x204158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_20415c:
    // 0x20415c: 0x40f809  jalr        $v0
label_204160:
    if (ctx->pc == 0x204160u) {
        ctx->pc = 0x204160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20415Cu;
        // 0x204160: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204164u;
        goto label_204164;
    }
    ctx->pc = 0x20415Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204164u);
        ctx->pc = 0x204160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20415Cu;
        // 0x204160: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20415Cu, 0x204164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204164u;
label_204164:
    // 0x204164: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_204168:
    if (ctx->pc == 0x204168u) {
        ctx->pc = 0x204168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204164u;
        // 0x204168: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20416Cu;
        goto label_20416c;
    }
    ctx->pc = 0x204164u;
    {
        const bool branch_taken_0x204164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204164) {
            ctx->pc = 0x204168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204164u;
            // 0x204168: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204178u;
            goto label_204178;
        }
    }
    ctx->pc = 0x20416Cu;
label_20416c:
    // 0x20416c: 0xc081dee  jal         func_2077B8
label_204170:
    if (ctx->pc == 0x204170u) {
        ctx->pc = 0x204170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20416Cu;
        // 0x204170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204174u;
        goto label_204174;
    }
    ctx->pc = 0x20416Cu;
    SET_GPR_U32(ctx, 31, 0x204174u);
    ctx->pc = 0x204170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20416Cu;
    // 0x204170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2077B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2077B8u, 0x20416Cu, 0x204174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204174u;
label_204174:
    // 0x204174: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x204174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_204178:
    // 0x204178: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x204178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20417c:
    // 0x20417c: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x20417cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_204180:
    // 0x204180: 0x24a585f0  addiu       $a1, $a1, -0x7A10
    ctx->pc = 0x204180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936048));
label_204184:
    // 0x204184: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x204184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_204188:
    // 0x204188: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x204188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20418c:
    // 0x20418c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20418cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_204190:
    // 0x204190: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x204190u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204194:
    // 0x204194: 0x24090193  addiu       $t1, $zero, 0x193
    ctx->pc = 0x204194u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 403));
label_204198:
    // 0x204198: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x204198u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20419c:
    // 0x20419c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20419cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2041a0:
    // 0x2041a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2041a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2041a4:
    // 0x2041a4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2041a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2041a8:
    // 0x2041a8: 0x40f809  jalr        $v0
label_2041ac:
    if (ctx->pc == 0x2041ACu) {
        ctx->pc = 0x2041ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041A8u;
        // 0x2041ac: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2041B0u;
        goto label_2041b0;
    }
    ctx->pc = 0x2041A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2041B0u);
        ctx->pc = 0x2041ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041A8u;
        // 0x2041ac: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2041A8u, 0x2041B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2041B0u;
label_2041b0:
    // 0x2041b0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2041b4:
    if (ctx->pc == 0x2041B4u) {
        ctx->pc = 0x2041B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041B0u;
        // 0x2041b4: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2041B8u;
        goto label_2041b8;
    }
    ctx->pc = 0x2041B0u;
    {
        const bool branch_taken_0x2041b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2041b0) {
            ctx->pc = 0x2041B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2041B0u;
            // 0x2041b4: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2041C4u;
            goto label_2041c4;
        }
    }
    ctx->pc = 0x2041B8u;
label_2041b8:
    // 0x2041b8: 0xc082970  jal         func_20A5C0
label_2041bc:
    if (ctx->pc == 0x2041BCu) {
        ctx->pc = 0x2041BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041B8u;
        // 0x2041bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2041C0u;
        goto label_2041c0;
    }
    ctx->pc = 0x2041B8u;
    SET_GPR_U32(ctx, 31, 0x2041C0u);
    ctx->pc = 0x2041BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041B8u;
    // 0x2041bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A5C0u, 0x2041B8u, 0x2041C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041C0u;
label_2041c0:
    // 0x2041c0: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2041c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_2041c4:
    // 0x2041c4: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2041c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2041c8:
    // 0x2041c8: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x2041c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_2041cc:
    // 0x2041cc: 0x24a58600  addiu       $a1, $a1, -0x7A00
    ctx->pc = 0x2041ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936064));
label_2041d0:
    // 0x2041d0: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x2041d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2041d4:
    // 0x2041d4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2041d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2041d8:
    // 0x2041d8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2041d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2041dc:
    // 0x2041dc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2041dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2041e0:
    // 0x2041e0: 0x24090194  addiu       $t1, $zero, 0x194
    ctx->pc = 0x2041e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
label_2041e4:
    // 0x2041e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2041e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2041e8:
    // 0x2041e8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2041e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2041ec:
    // 0x2041ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2041ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2041f0:
    // 0x2041f0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2041f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2041f4:
    // 0x2041f4: 0x40f809  jalr        $v0
label_2041f8:
    if (ctx->pc == 0x2041F8u) {
        ctx->pc = 0x2041F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041F4u;
        // 0x2041f8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2041FCu;
        goto label_2041fc;
    }
    ctx->pc = 0x2041F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2041FCu);
        ctx->pc = 0x2041F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041F4u;
        // 0x2041f8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2041F4u, 0x2041FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2041FCu;
label_2041fc:
    // 0x2041fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_204200:
    if (ctx->pc == 0x204200u) {
        ctx->pc = 0x204200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041FCu;
        // 0x204200: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204204u;
        goto label_204204;
    }
    ctx->pc = 0x2041FCu;
    {
        const bool branch_taken_0x2041fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2041fc) {
            ctx->pc = 0x204200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2041FCu;
            // 0x204200: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204210u;
            goto label_204210;
        }
    }
    ctx->pc = 0x204204u;
label_204204:
    // 0x204204: 0xc08346e  jal         func_20D1B8
label_204208:
    if (ctx->pc == 0x204208u) {
        ctx->pc = 0x204208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204204u;
        // 0x204208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20420Cu;
        goto label_20420c;
    }
    ctx->pc = 0x204204u;
    SET_GPR_U32(ctx, 31, 0x20420Cu);
    ctx->pc = 0x204208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204204u;
    // 0x204208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D1B8u, 0x204204u, 0x20420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20420Cu;
label_20420c:
    // 0x20420c: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x20420cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_204210:
    // 0x204210: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x204210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_204214:
    // 0x204214: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x204214u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_204218:
    // 0x204218: 0x24a58618  addiu       $a1, $a1, -0x79E8
    ctx->pc = 0x204218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936088));
label_20421c:
    // 0x20421c: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x20421cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_204220:
    // 0x204220: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x204220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_204224:
    // 0x204224: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x204224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_204228:
    // 0x204228: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x204228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20422c:
    // 0x20422c: 0x24090195  addiu       $t1, $zero, 0x195
    ctx->pc = 0x20422cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
label_204230:
    // 0x204230: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x204230u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204234:
    // 0x204234: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x204234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_204238:
    // 0x204238: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x204238u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20423c:
    // 0x20423c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_204240:
    // 0x204240: 0x40f809  jalr        $v0
label_204244:
    if (ctx->pc == 0x204244u) {
        ctx->pc = 0x204244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204240u;
        // 0x204244: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204248u;
        goto label_204248;
    }
    ctx->pc = 0x204240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204248u);
        ctx->pc = 0x204244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204240u;
        // 0x204244: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204240u, 0x204248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204248u;
label_204248:
    // 0x204248: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20424c:
    if (ctx->pc == 0x20424Cu) {
        ctx->pc = 0x20424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204248u;
        // 0x20424c: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204250u;
        goto label_204250;
    }
    ctx->pc = 0x204248u;
    {
        const bool branch_taken_0x204248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204248) {
            ctx->pc = 0x20424Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204248u;
            // 0x20424c: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20425Cu;
            goto label_20425c;
        }
    }
    ctx->pc = 0x204250u;
label_204250:
    // 0x204250: 0xc0826f0  jal         func_209BC0
label_204254:
    if (ctx->pc == 0x204254u) {
        ctx->pc = 0x204254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204250u;
        // 0x204254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204258u;
        goto label_204258;
    }
    ctx->pc = 0x204250u;
    SET_GPR_U32(ctx, 31, 0x204258u);
    ctx->pc = 0x204254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204250u;
    // 0x204254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209BC0u, 0x204250u, 0x204258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204258u;
label_204258:
    // 0x204258: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x204258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_20425c:
    // 0x20425c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20425cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_204260:
    // 0x204260: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x204260u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_204264:
    // 0x204264: 0x24a58620  addiu       $a1, $a1, -0x79E0
    ctx->pc = 0x204264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936096));
label_204268:
    // 0x204268: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x204268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_20426c:
    // 0x20426c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20426cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_204270:
    // 0x204270: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x204270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_204274:
    // 0x204274: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x204274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204278:
    // 0x204278: 0x24090196  addiu       $t1, $zero, 0x196
    ctx->pc = 0x204278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 406));
label_20427c:
    // 0x20427c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20427cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204280:
    // 0x204280: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x204280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_204284:
    // 0x204284: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x204284u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204288:
    // 0x204288: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x204288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20428c:
    // 0x20428c: 0x40f809  jalr        $v0
label_204290:
    if (ctx->pc == 0x204290u) {
        ctx->pc = 0x204290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20428Cu;
        // 0x204290: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204294u;
        goto label_204294;
    }
    ctx->pc = 0x20428Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204294u);
        ctx->pc = 0x204290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20428Cu;
        // 0x204290: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20428Cu, 0x204294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204294u;
label_204294:
    // 0x204294: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_204298:
    if (ctx->pc == 0x204298u) {
        ctx->pc = 0x204298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204294u;
        // 0x204298: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20429Cu;
        goto label_20429c;
    }
    ctx->pc = 0x204294u;
    {
        const bool branch_taken_0x204294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204294) {
            ctx->pc = 0x204298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204294u;
            // 0x204298: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2042A8u;
            goto label_2042a8;
        }
    }
    ctx->pc = 0x20429Cu;
label_20429c:
    // 0x20429c: 0xc081bfc  jal         func_206FF0
label_2042a0:
    if (ctx->pc == 0x2042A0u) {
        ctx->pc = 0x2042A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20429Cu;
        // 0x2042a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2042A4u;
        goto label_2042a4;
    }
    ctx->pc = 0x20429Cu;
    SET_GPR_U32(ctx, 31, 0x2042A4u);
    ctx->pc = 0x2042A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20429Cu;
    // 0x2042a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206FF0u, 0x20429Cu, 0x2042A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042A4u;
label_2042a4:
    // 0x2042a4: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x2042a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_2042a8:
    // 0x2042a8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2042a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2042ac:
    // 0x2042ac: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x2042acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_2042b0:
    // 0x2042b0: 0x24a58630  addiu       $a1, $a1, -0x79D0
    ctx->pc = 0x2042b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936112));
label_2042b4:
    // 0x2042b4: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x2042b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2042b8:
    // 0x2042b8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2042b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2042bc:
    // 0x2042bc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2042bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2042c0:
    // 0x2042c0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2042c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2042c4:
    // 0x2042c4: 0x24090197  addiu       $t1, $zero, 0x197
    ctx->pc = 0x2042c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 407));
label_2042c8:
    // 0x2042c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2042c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2042cc:
    // 0x2042cc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2042ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2042d0:
    // 0x2042d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2042d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2042d4:
    // 0x2042d4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2042d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2042d8:
    // 0x2042d8: 0x40f809  jalr        $v0
label_2042dc:
    if (ctx->pc == 0x2042DCu) {
        ctx->pc = 0x2042DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042D8u;
        // 0x2042dc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2042E0u;
        goto label_2042e0;
    }
    ctx->pc = 0x2042D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2042E0u);
        ctx->pc = 0x2042DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042D8u;
        // 0x2042dc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2042D8u, 0x2042E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2042E0u;
label_2042e0:
    // 0x2042e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2042e4:
    if (ctx->pc == 0x2042E4u) {
        ctx->pc = 0x2042E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042E0u;
        // 0x2042e4: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2042E8u;
        goto label_2042e8;
    }
    ctx->pc = 0x2042E0u;
    {
        const bool branch_taken_0x2042e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2042e0) {
            ctx->pc = 0x2042E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2042E0u;
            // 0x2042e4: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2042F4u;
            goto label_2042f4;
        }
    }
    ctx->pc = 0x2042E8u;
label_2042e8:
    // 0x2042e8: 0xc082c08  jal         func_20B020
label_2042ec:
    if (ctx->pc == 0x2042ECu) {
        ctx->pc = 0x2042ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042E8u;
        // 0x2042ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2042F0u;
        goto label_2042f0;
    }
    ctx->pc = 0x2042E8u;
    SET_GPR_U32(ctx, 31, 0x2042F0u);
    ctx->pc = 0x2042ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2042E8u;
    // 0x2042ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B020u, 0x2042E8u, 0x2042F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042F0u;
label_2042f0:
    // 0x2042f0: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x2042f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_2042f4:
    // 0x2042f4: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2042f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2042f8:
    // 0x2042f8: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x2042f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_2042fc:
    // 0x2042fc: 0x24a58640  addiu       $a1, $a1, -0x79C0
    ctx->pc = 0x2042fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936128));
label_204300:
    // 0x204300: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x204300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_204304:
    // 0x204304: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x204304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_204308:
    // 0x204308: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x204308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20430c:
    // 0x20430c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x20430cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204310:
    // 0x204310: 0x24090198  addiu       $t1, $zero, 0x198
    ctx->pc = 0x204310u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_204314:
    // 0x204314: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x204314u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204318:
    // 0x204318: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x204318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20431c:
    // 0x20431c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20431cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204320:
    // 0x204320: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x204320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_204324:
    // 0x204324: 0x40f809  jalr        $v0
label_204328:
    if (ctx->pc == 0x204328u) {
        ctx->pc = 0x204328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204324u;
        // 0x204328: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20432Cu;
        goto label_20432c;
    }
    ctx->pc = 0x204324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20432Cu);
        ctx->pc = 0x204328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204324u;
        // 0x204328: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204324u, 0x20432Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20432Cu;
label_20432c:
    // 0x20432c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_204330:
    if (ctx->pc == 0x204330u) {
        ctx->pc = 0x204330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20432Cu;
        // 0x204330: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204334u;
        goto label_204334;
    }
    ctx->pc = 0x20432Cu;
    {
        const bool branch_taken_0x20432c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20432c) {
            ctx->pc = 0x204330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20432Cu;
            // 0x204330: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204340u;
            goto label_204340;
        }
    }
    ctx->pc = 0x204334u;
label_204334:
    // 0x204334: 0xc082f20  jal         func_20BC80
label_204338:
    if (ctx->pc == 0x204338u) {
        ctx->pc = 0x204338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204334u;
        // 0x204338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20433Cu;
        goto label_20433c;
    }
    ctx->pc = 0x204334u;
    SET_GPR_U32(ctx, 31, 0x20433Cu);
    ctx->pc = 0x204338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204334u;
    // 0x204338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BC80u, 0x204334u, 0x20433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20433Cu;
label_20433c:
    // 0x20433c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x20433cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_204340:
    // 0x204340: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x204340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_204344:
    // 0x204344: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x204344u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_204348:
    // 0x204348: 0x24a58650  addiu       $a1, $a1, -0x79B0
    ctx->pc = 0x204348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936144));
label_20434c:
    // 0x20434c: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x20434cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_204350:
    // 0x204350: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x204350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_204354:
    // 0x204354: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x204354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_204358:
    // 0x204358: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x204358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20435c:
    // 0x20435c: 0x24090199  addiu       $t1, $zero, 0x199
    ctx->pc = 0x20435cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
label_204360:
    // 0x204360: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x204360u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204364:
    // 0x204364: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x204364u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_204368:
    // 0x204368: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x204368u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20436c:
    // 0x20436c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20436cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_204370:
    // 0x204370: 0x40f809  jalr        $v0
label_204374:
    if (ctx->pc == 0x204374u) {
        ctx->pc = 0x204374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204370u;
        // 0x204374: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204378u;
        goto label_204378;
    }
    ctx->pc = 0x204370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204378u);
        ctx->pc = 0x204374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204370u;
        // 0x204374: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204370u, 0x204378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204378u;
label_204378:
    // 0x204378: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20437c:
    if (ctx->pc == 0x20437Cu) {
        ctx->pc = 0x20437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204378u;
        // 0x20437c: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204380u;
        goto label_204380;
    }
    ctx->pc = 0x204378u;
    {
        const bool branch_taken_0x204378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204378) {
            ctx->pc = 0x20437Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204378u;
            // 0x20437c: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20438Cu;
            goto label_20438c;
        }
    }
    ctx->pc = 0x204380u;
label_204380:
    // 0x204380: 0xc0813c2  jal         func_204F08
label_204384:
    if (ctx->pc == 0x204384u) {
        ctx->pc = 0x204384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204380u;
        // 0x204384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204388u;
        goto label_204388;
    }
    ctx->pc = 0x204380u;
    SET_GPR_U32(ctx, 31, 0x204388u);
    ctx->pc = 0x204384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204380u;
    // 0x204384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204F08u, 0x204380u, 0x204388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204388u;
label_204388:
    // 0x204388: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x204388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_20438c:
    // 0x20438c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20438cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_204390:
    // 0x204390: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x204390u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_204394:
    // 0x204394: 0x24a58660  addiu       $a1, $a1, -0x79A0
    ctx->pc = 0x204394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936160));
label_204398:
    // 0x204398: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x204398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_20439c:
    // 0x20439c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20439cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2043a0:
    // 0x2043a0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2043a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2043a4:
    // 0x2043a4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2043a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2043a8:
    // 0x2043a8: 0x2409019a  addiu       $t1, $zero, 0x19A
    ctx->pc = 0x2043a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
label_2043ac:
    // 0x2043ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2043acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2043b0:
    // 0x2043b0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2043b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2043b4:
    // 0x2043b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2043b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2043b8:
    // 0x2043b8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2043b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2043bc:
    // 0x2043bc: 0x40f809  jalr        $v0
label_2043c0:
    if (ctx->pc == 0x2043C0u) {
        ctx->pc = 0x2043C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043BCu;
        // 0x2043c0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2043C4u;
        goto label_2043c4;
    }
    ctx->pc = 0x2043BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2043C4u);
        ctx->pc = 0x2043C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043BCu;
        // 0x2043c0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2043BCu, 0x2043C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2043C4u;
label_2043c4:
    // 0x2043c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2043c8:
    if (ctx->pc == 0x2043C8u) {
        ctx->pc = 0x2043C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043C4u;
        // 0x2043c8: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2043CCu;
        goto label_2043cc;
    }
    ctx->pc = 0x2043C4u;
    {
        const bool branch_taken_0x2043c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2043c4) {
            ctx->pc = 0x2043C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2043C4u;
            // 0x2043c8: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2043D8u;
            goto label_2043d8;
        }
    }
    ctx->pc = 0x2043CCu;
label_2043cc:
    // 0x2043cc: 0xc08241a  jal         func_209068
label_2043d0:
    if (ctx->pc == 0x2043D0u) {
        ctx->pc = 0x2043D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043CCu;
        // 0x2043d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2043D4u;
        goto label_2043d4;
    }
    ctx->pc = 0x2043CCu;
    SET_GPR_U32(ctx, 31, 0x2043D4u);
    ctx->pc = 0x2043D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2043CCu;
    // 0x2043d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209068u, 0x2043CCu, 0x2043D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043D4u;
label_2043d4:
    // 0x2043d4: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x2043d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_2043d8:
    // 0x2043d8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2043d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2043dc:
    // 0x2043dc: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x2043dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_2043e0:
    // 0x2043e0: 0x24a58668  addiu       $a1, $a1, -0x7998
    ctx->pc = 0x2043e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936168));
label_2043e4:
    // 0x2043e4: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x2043e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2043e8:
    // 0x2043e8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2043e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2043ec:
    // 0x2043ec: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2043ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2043f0:
    // 0x2043f0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2043f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2043f4:
    // 0x2043f4: 0x2409019b  addiu       $t1, $zero, 0x19B
    ctx->pc = 0x2043f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 411));
label_2043f8:
    // 0x2043f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2043f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2043fc:
    // 0x2043fc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2043fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_204400:
    // 0x204400: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x204400u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204404:
    // 0x204404: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x204404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_204408:
    // 0x204408: 0x40f809  jalr        $v0
label_20440c:
    if (ctx->pc == 0x20440Cu) {
        ctx->pc = 0x20440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204408u;
        // 0x20440c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204410u;
        goto label_204410;
    }
    ctx->pc = 0x204408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204410u);
        ctx->pc = 0x20440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204408u;
        // 0x20440c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204408u, 0x204410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204410u;
label_204410:
    // 0x204410: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_204414:
    if (ctx->pc == 0x204414u) {
        ctx->pc = 0x204414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204410u;
        // 0x204414: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204418u;
        goto label_204418;
    }
    ctx->pc = 0x204410u;
    {
        const bool branch_taken_0x204410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204410) {
            ctx->pc = 0x204414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204410u;
            // 0x204414: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204424u;
            goto label_204424;
        }
    }
    ctx->pc = 0x204418u;
label_204418:
    // 0x204418: 0xc080c44  jal         func_203110
label_20441c:
    if (ctx->pc == 0x20441Cu) {
        ctx->pc = 0x20441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204418u;
        // 0x20441c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204420u;
        goto label_204420;
    }
    ctx->pc = 0x204418u;
    SET_GPR_U32(ctx, 31, 0x204420u);
    ctx->pc = 0x20441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204418u;
    // 0x20441c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203110u, 0x204418u, 0x204420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204420u;
label_204420:
    // 0x204420: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x204420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_204424:
    // 0x204424: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x204424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_204428:
    // 0x204428: 0x24a58678  addiu       $a1, $a1, -0x7988
    ctx->pc = 0x204428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936184));
label_20442c:
    // 0x20442c: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x20442cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_204430:
    // 0x204430: 0x8e6c0000  lw          $t4, 0x0($s3)
    ctx->pc = 0x204430u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_204434:
    // 0x204434: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x204434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_204438:
    // 0x204438: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x204438u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20443c:
    // 0x20443c: 0x2409019c  addiu       $t1, $zero, 0x19C
    ctx->pc = 0x20443cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 412));
label_204440:
    // 0x204440: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x204440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_204444:
    // 0x204444: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x204444u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204448:
    // 0x204448: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x204448u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20444c:
    // 0x20444c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20444cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_204450:
    // 0x204450: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x204450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_204454:
    // 0x204454: 0x40f809  jalr        $v0
label_204458:
    if (ctx->pc == 0x204458u) {
        ctx->pc = 0x204458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204454u;
        // 0x204458: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20445Cu;
        goto label_20445c;
    }
    ctx->pc = 0x204454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20445Cu);
        ctx->pc = 0x204458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204454u;
        // 0x204458: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204454u, 0x20445Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20445Cu;
label_20445c:
    // 0x20445c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_204460:
    if (ctx->pc == 0x204460u) {
        ctx->pc = 0x204460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20445Cu;
        // 0x204460: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204464u;
        goto label_204464;
    }
    ctx->pc = 0x20445Cu;
    {
        const bool branch_taken_0x20445c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20445c) {
            ctx->pc = 0x204460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20445Cu;
            // 0x204460: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204470u;
            goto label_204470;
        }
    }
    ctx->pc = 0x204464u;
label_204464:
    // 0x204464: 0xc081654  jal         func_205950
label_204468:
    if (ctx->pc == 0x204468u) {
        ctx->pc = 0x204468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204464u;
        // 0x204468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20446Cu;
        goto label_20446c;
    }
    ctx->pc = 0x204464u;
    SET_GPR_U32(ctx, 31, 0x20446Cu);
    ctx->pc = 0x204468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204464u;
    // 0x204468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205950u, 0x204464u, 0x20446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20446Cu;
label_20446c:
    // 0x20446c: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x20446cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_204470:
    // 0x204470: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x204470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_204474:
    // 0x204474: 0x24a58688  addiu       $a1, $a1, -0x7978
    ctx->pc = 0x204474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936200));
label_204478:
    // 0x204478: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x204478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_20447c:
    // 0x20447c: 0x8e6c0000  lw          $t4, 0x0($s3)
    ctx->pc = 0x20447cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_204480:
    // 0x204480: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x204480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_204484:
    // 0x204484: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x204484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204488:
    // 0x204488: 0x2409019d  addiu       $t1, $zero, 0x19D
    ctx->pc = 0x204488u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 413));
label_20448c:
    // 0x20448c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20448cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_204490:
    // 0x204490: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x204490u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204494:
    // 0x204494: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x204494u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204498:
    // 0x204498: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x204498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20449c:
    // 0x20449c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2044a0:
    // 0x2044a0: 0x40f809  jalr        $v0
label_2044a4:
    if (ctx->pc == 0x2044A4u) {
        ctx->pc = 0x2044A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044A0u;
        // 0x2044a4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2044A8u;
        goto label_2044a8;
    }
    ctx->pc = 0x2044A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2044A8u);
        ctx->pc = 0x2044A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044A0u;
        // 0x2044a4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2044A0u, 0x2044A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2044A8u;
label_2044a8:
    // 0x2044a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2044ac:
    if (ctx->pc == 0x2044ACu) {
        ctx->pc = 0x2044ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044A8u;
        // 0x2044ac: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2044B0u;
        goto label_2044b0;
    }
    ctx->pc = 0x2044A8u;
    {
        const bool branch_taken_0x2044a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2044a8) {
            ctx->pc = 0x2044ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2044A8u;
            // 0x2044ac: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2044BCu;
            goto label_2044bc;
        }
    }
    ctx->pc = 0x2044B0u;
label_2044b0:
    // 0x2044b0: 0xc08197c  jal         func_2065F0
label_2044b4:
    if (ctx->pc == 0x2044B4u) {
        ctx->pc = 0x2044B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044B0u;
        // 0x2044b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2044B8u;
        goto label_2044b8;
    }
    ctx->pc = 0x2044B0u;
    SET_GPR_U32(ctx, 31, 0x2044B8u);
    ctx->pc = 0x2044B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2044B0u;
    // 0x2044b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2065F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2065F0u, 0x2044B0u, 0x2044B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2044B8u;
label_2044b8:
    // 0x2044b8: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x2044b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_2044bc:
    // 0x2044bc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2044bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2044c0:
    // 0x2044c0: 0x24a58698  addiu       $a1, $a1, -0x7968
    ctx->pc = 0x2044c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936216));
label_2044c4:
    // 0x2044c4: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x2044c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2044c8:
    // 0x2044c8: 0x8e6c0000  lw          $t4, 0x0($s3)
    ctx->pc = 0x2044c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2044cc:
    // 0x2044cc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2044ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2044d0:
    // 0x2044d0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2044d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2044d4:
    // 0x2044d4: 0x2409019e  addiu       $t1, $zero, 0x19E
    ctx->pc = 0x2044d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 414));
label_2044d8:
    // 0x2044d8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2044d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2044dc:
    // 0x2044dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2044dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2044e0:
    // 0x2044e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2044e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2044e4:
    // 0x2044e4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2044e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2044e8:
    // 0x2044e8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2044e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2044ec:
    // 0x2044ec: 0x40f809  jalr        $v0
label_2044f0:
    if (ctx->pc == 0x2044F0u) {
        ctx->pc = 0x2044F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044ECu;
        // 0x2044f0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2044F4u;
        goto label_2044f4;
    }
    ctx->pc = 0x2044ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2044F4u);
        ctx->pc = 0x2044F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044ECu;
        // 0x2044f0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2044ECu, 0x2044F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2044F4u;
label_2044f4:
    // 0x2044f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2044f8:
    if (ctx->pc == 0x2044F8u) {
        ctx->pc = 0x2044F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044F4u;
        // 0x2044f8: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2044FCu;
        goto label_2044fc;
    }
    ctx->pc = 0x2044F4u;
    {
        const bool branch_taken_0x2044f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2044f4) {
            ctx->pc = 0x2044F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2044F4u;
            // 0x2044f8: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204508u;
            goto label_204508;
        }
    }
    ctx->pc = 0x2044FCu;
label_2044fc:
    // 0x2044fc: 0xc0820c8  jal         func_208320
label_204500:
    if (ctx->pc == 0x204500u) {
        ctx->pc = 0x204500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044FCu;
        // 0x204500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204504u;
        goto label_204504;
    }
    ctx->pc = 0x2044FCu;
    SET_GPR_U32(ctx, 31, 0x204504u);
    ctx->pc = 0x204500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2044FCu;
    // 0x204500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208320u, 0x2044FCu, 0x204504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204504u;
label_204504:
    // 0x204504: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x204504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_204508:
    // 0x204508: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x204508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20450c:
    // 0x20450c: 0x24a586a8  addiu       $a1, $a1, -0x7958
    ctx->pc = 0x20450cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936232));
label_204510:
    // 0x204510: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x204510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204514:
    // 0x204514: 0x8e6c0000  lw          $t4, 0x0($s3)
    ctx->pc = 0x204514u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_204518:
    // 0x204518: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x204518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_20451c:
    // 0x20451c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20451cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_204520:
    // 0x204520: 0x2409019f  addiu       $t1, $zero, 0x19F
    ctx->pc = 0x204520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
label_204524:
    // 0x204524: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x204524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_204528:
    // 0x204528: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x204528u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20452c:
    // 0x20452c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20452cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204530:
    // 0x204530: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x204530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_204534:
    // 0x204534: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x204534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_204538:
    // 0x204538: 0x40f809  jalr        $v0
label_20453c:
    if (ctx->pc == 0x20453Cu) {
        ctx->pc = 0x20453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204538u;
        // 0x20453c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204540u;
        goto label_204540;
    }
    ctx->pc = 0x204538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204540u);
        ctx->pc = 0x20453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204538u;
        // 0x20453c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204538u, 0x204540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204540u;
label_204540:
    // 0x204540: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_204544:
    if (ctx->pc == 0x204544u) {
        ctx->pc = 0x204544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204540u;
        // 0x204544: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204548u;
        goto label_204548;
    }
    ctx->pc = 0x204540u;
    {
        const bool branch_taken_0x204540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204540) {
            ctx->pc = 0x204544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204540u;
            // 0x204544: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204554u;
            goto label_204554;
        }
    }
    ctx->pc = 0x204548u;
label_204548:
    // 0x204548: 0xc083234  jal         func_20C8D0
label_20454c:
    if (ctx->pc == 0x20454Cu) {
        ctx->pc = 0x20454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204548u;
        // 0x20454c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204550u;
        goto label_204550;
    }
    ctx->pc = 0x204548u;
    SET_GPR_U32(ctx, 31, 0x204550u);
    ctx->pc = 0x20454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204548u;
    // 0x20454c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C8D0u, 0x204548u, 0x204550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204550u;
label_204550:
    // 0x204550: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x204550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
label_204554:
    // 0x204554: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204558:
    // 0x204558: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20455c:
    // 0x20455c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x20455cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_204560:
    // 0x204560: 0x8e080070  lw          $t0, 0x70($s0)
    ctx->pc = 0x204560u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_204564:
    // 0x204564: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x204564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204568:
    // 0x204568: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_20456c:
    // 0x20456c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x20456cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204570:
    // 0x204570: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_204574:
    // 0x204574: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x204574u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204578:
    // 0x204578: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204578u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_20457c:
    // 0x20457c: 0x120f809  jalr        $t1
label_204580:
    if (ctx->pc == 0x204580u) {
        ctx->pc = 0x204580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20457Cu;
        // 0x204580: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204584u;
        goto label_204584;
    }
    ctx->pc = 0x20457Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x204584u);
        ctx->pc = 0x204580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20457Cu;
        // 0x204580: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20457Cu, 0x204584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204584u;
label_204584:
    // 0x204584: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204588:
    // 0x204588: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x204588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20458c:
    // 0x20458c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x20458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_204590:
    // 0x204590: 0x8e080068  lw          $t0, 0x68($s0)
    ctx->pc = 0x204590u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_204594:
    // 0x204594: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x204594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204598:
    // 0x204598: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_20459c:
    // 0x20459c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x20459cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2045a0:
    // 0x2045a0: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x2045a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_2045a4:
    // 0x2045a4: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x2045a4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2045a8:
    // 0x2045a8: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x2045a8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2045ac:
    // 0x2045ac: 0x120f809  jalr        $t1
label_2045b0:
    if (ctx->pc == 0x2045B0u) {
        ctx->pc = 0x2045B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045ACu;
        // 0x2045b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2045B4u;
        goto label_2045b4;
    }
    ctx->pc = 0x2045ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x2045B4u);
        ctx->pc = 0x2045B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045ACu;
        // 0x2045b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2045ACu, 0x2045B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2045B4u;
label_2045b4:
    // 0x2045b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2045b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2045b8:
    // 0x2045b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2045b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2045bc:
    // 0x2045bc: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2045bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_2045c0:
    // 0x2045c0: 0x8e08006c  lw          $t0, 0x6C($s0)
    ctx->pc = 0x2045c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_2045c4:
    // 0x2045c4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x2045c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2045c8:
    // 0x2045c8: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x2045c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2045cc:
    // 0x2045cc: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x2045ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2045d0:
    // 0x2045d0: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x2045d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_2045d4:
    // 0x2045d4: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x2045d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2045d8:
    // 0x2045d8: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x2045d8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2045dc:
    // 0x2045dc: 0x120f809  jalr        $t1
label_2045e0:
    if (ctx->pc == 0x2045E0u) {
        ctx->pc = 0x2045E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045DCu;
        // 0x2045e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2045E4u;
        goto label_2045e4;
    }
    ctx->pc = 0x2045DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x2045E4u);
        ctx->pc = 0x2045E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045DCu;
        // 0x2045e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2045DCu, 0x2045E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2045E4u;
label_2045e4:
    // 0x2045e4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2045e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2045e8:
    // 0x2045e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2045e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2045ec:
    // 0x2045ec: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2045ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2045f0:
    // 0x2045f0: 0x8e080070  lw          $t0, 0x70($s0)
    ctx->pc = 0x2045f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2045f4:
    // 0x2045f4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x2045f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2045f8:
    // 0x2045f8: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x2045f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2045fc:
    // 0x2045fc: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x2045fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204600:
    // 0x204600: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_204604:
    // 0x204604: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x204604u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204608:
    // 0x204608: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204608u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_20460c:
    // 0x20460c: 0x120f809  jalr        $t1
label_204610:
    if (ctx->pc == 0x204610u) {
        ctx->pc = 0x204610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20460Cu;
        // 0x204610: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204614u;
        goto label_204614;
    }
    ctx->pc = 0x20460Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x204614u);
        ctx->pc = 0x204610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20460Cu;
        // 0x204610: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20460Cu, 0x204614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204614u;
label_204614:
    // 0x204614: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204618:
    // 0x204618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20461c:
    // 0x20461c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x20461cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_204620:
    // 0x204620: 0x8e080070  lw          $t0, 0x70($s0)
    ctx->pc = 0x204620u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_204624:
    // 0x204624: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x204624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204628:
    // 0x204628: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_20462c:
    // 0x20462c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x20462cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204630:
    // 0x204630: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_204634:
    // 0x204634: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x204634u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204638:
    // 0x204638: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204638u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_20463c:
    // 0x20463c: 0x120f809  jalr        $t1
label_204640:
    if (ctx->pc == 0x204640u) {
        ctx->pc = 0x204640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20463Cu;
        // 0x204640: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204644u;
        goto label_204644;
    }
    ctx->pc = 0x20463Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x204644u);
        ctx->pc = 0x204640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20463Cu;
        // 0x204640: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20463Cu, 0x204644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204644u;
label_204644:
    // 0x204644: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204648:
    // 0x204648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20464c:
    // 0x20464c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x20464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_204650:
    // 0x204650: 0x8e08007c  lw          $t0, 0x7C($s0)
    ctx->pc = 0x204650u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_204654:
    // 0x204654: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x204654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204658:
    // 0x204658: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_20465c:
    // 0x20465c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x20465cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204660:
    // 0x204660: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_204664:
    // 0x204664: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x204664u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204668:
    // 0x204668: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204668u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_20466c:
    // 0x20466c: 0x120f809  jalr        $t1
label_204670:
    if (ctx->pc == 0x204670u) {
        ctx->pc = 0x204670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20466Cu;
        // 0x204670: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204674u;
        goto label_204674;
    }
    ctx->pc = 0x20466Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x204674u);
        ctx->pc = 0x204670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20466Cu;
        // 0x204670: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20466Cu, 0x204674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204674u;
label_204674:
    // 0x204674: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204678:
    // 0x204678: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20467c:
    // 0x20467c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x20467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_204680:
    // 0x204680: 0x8e080080  lw          $t0, 0x80($s0)
    ctx->pc = 0x204680u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_204684:
    // 0x204684: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x204684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204688:
    // 0x204688: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_20468c:
    // 0x20468c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x20468cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204690:
    // 0x204690: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_204694:
    // 0x204694: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x204694u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204698:
    // 0x204698: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204698u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_20469c:
    // 0x20469c: 0x120f809  jalr        $t1
label_2046a0:
    if (ctx->pc == 0x2046A0u) {
        ctx->pc = 0x2046A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20469Cu;
        // 0x2046a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046A4u;
        goto label_2046a4;
    }
    ctx->pc = 0x20469Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x2046A4u);
        ctx->pc = 0x2046A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20469Cu;
        // 0x2046a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20469Cu, 0x2046A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2046A4u;
label_2046a4:
    // 0x2046a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2046a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2046a8:
    // 0x2046a8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2046a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2046ac:
    // 0x2046ac: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2046acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2046b0:
    // 0x2046b0: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x2046b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2046b4:
    // 0x2046b4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x2046b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2046b8:
    // 0x2046b8: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x2046b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2046bc:
    // 0x2046bc: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x2046bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2046c0:
    // 0x2046c0: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x2046c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_2046c4:
    // 0x2046c4: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x2046c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2046c8:
    // 0x2046c8: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x2046c8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2046cc:
    // 0x2046cc: 0x120f809  jalr        $t1
label_2046d0:
    if (ctx->pc == 0x2046D0u) {
        ctx->pc = 0x2046D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046CCu;
        // 0x2046d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046D4u;
        goto label_2046d4;
    }
    ctx->pc = 0x2046CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x2046D4u);
        ctx->pc = 0x2046D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046CCu;
        // 0x2046d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2046CCu, 0x2046D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2046D4u;
label_2046d4:
    // 0x2046d4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2046d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2046d8:
    // 0x2046d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2046d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2046dc:
    // 0x2046dc: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2046dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2046e0:
    // 0x2046e0: 0x8e080088  lw          $t0, 0x88($s0)
    ctx->pc = 0x2046e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2046e4:
    // 0x2046e4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x2046e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2046e8:
    // 0x2046e8: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x2046e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2046ec:
    // 0x2046ec: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x2046ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2046f0:
    // 0x2046f0: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x2046f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_2046f4:
    // 0x2046f4: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x2046f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2046f8:
    // 0x2046f8: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x2046f8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2046fc:
    // 0x2046fc: 0x120f809  jalr        $t1
label_204700:
    if (ctx->pc == 0x204700u) {
        ctx->pc = 0x204700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046FCu;
        // 0x204700: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204704u;
        goto label_204704;
    }
    ctx->pc = 0x2046FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x204704u);
        ctx->pc = 0x204700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046FCu;
        // 0x204700: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2046FCu, 0x204704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204704u;
label_204704:
    // 0x204704: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204708:
    // 0x204708: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x204708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20470c:
    // 0x20470c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x20470cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_204710:
    // 0x204710: 0x8e080074  lw          $t0, 0x74($s0)
    ctx->pc = 0x204710u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_204714:
    // 0x204714: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x204714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204718:
    // 0x204718: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_20471c:
    // 0x20471c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x20471cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204720:
    // 0x204720: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_204724:
    // 0x204724: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x204724u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204728:
    // 0x204728: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204728u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_20472c:
    // 0x20472c: 0x120f809  jalr        $t1
label_204730:
    if (ctx->pc == 0x204730u) {
        ctx->pc = 0x204730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20472Cu;
        // 0x204730: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204734u;
        goto label_204734;
    }
    ctx->pc = 0x20472Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x204734u);
        ctx->pc = 0x204730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20472Cu;
        // 0x204730: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20472Cu, 0x204734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204734u;
label_204734:
    // 0x204734: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204738:
    // 0x204738: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x204738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20473c:
    // 0x20473c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x20473cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_204740:
    // 0x204740: 0x8e080078  lw          $t0, 0x78($s0)
    ctx->pc = 0x204740u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_204744:
    // 0x204744: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x204744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204748:
    // 0x204748: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_20474c:
    // 0x20474c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x20474cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204750:
    // 0x204750: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_204754:
    // 0x204754: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x204754u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204758:
    // 0x204758: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204758u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_20475c:
    // 0x20475c: 0x120f809  jalr        $t1
label_204760:
    if (ctx->pc == 0x204760u) {
        ctx->pc = 0x204760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20475Cu;
        // 0x204760: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204764u;
        goto label_204764;
    }
    ctx->pc = 0x20475Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x204764u);
        ctx->pc = 0x204760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20475Cu;
        // 0x204760: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20475Cu, 0x204764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204764u;
label_204764:
    // 0x204764: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204768:
    // 0x204768: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x204768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20476c:
    // 0x20476c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x20476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_204770:
    // 0x204770: 0x8e080064  lw          $t0, 0x64($s0)
    ctx->pc = 0x204770u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_204774:
    // 0x204774: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x204774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204778:
    // 0x204778: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_20477c:
    // 0x20477c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x20477cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204780:
    // 0x204780: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_204784:
    // 0x204784: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x204784u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204788:
    // 0x204788: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204788u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_20478c:
    // 0x20478c: 0x120f809  jalr        $t1
label_204790:
    if (ctx->pc == 0x204790u) {
        ctx->pc = 0x204790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20478Cu;
        // 0x204790: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204794u;
        goto label_204794;
    }
    ctx->pc = 0x20478Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x204794u);
        ctx->pc = 0x204790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20478Cu;
        // 0x204790: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20478Cu, 0x204794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204794u;
label_204794:
    // 0x204794: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204798:
    // 0x204798: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20479c:
    // 0x20479c: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x20479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_2047a0:
    // 0x2047a0: 0x8e08007c  lw          $t0, 0x7C($s0)
    ctx->pc = 0x2047a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_2047a4:
    // 0x2047a4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x2047a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2047a8:
    // 0x2047a8: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x2047a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2047ac:
    // 0x2047ac: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x2047acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2047b0:
    // 0x2047b0: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x2047b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_2047b4:
    // 0x2047b4: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x2047b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2047b8:
    // 0x2047b8: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x2047b8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2047bc:
    // 0x2047bc: 0x120f809  jalr        $t1
label_2047c0:
    if (ctx->pc == 0x2047C0u) {
        ctx->pc = 0x2047C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047BCu;
        // 0x2047c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2047C4u;
        goto label_2047c4;
    }
    ctx->pc = 0x2047BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x2047C4u);
        ctx->pc = 0x2047C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047BCu;
        // 0x2047c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2047BCu, 0x2047C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2047C4u;
label_2047c4:
    // 0x2047c4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2047c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2047c8:
    // 0x2047c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2047c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2047cc:
    // 0x2047cc: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x2047ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_2047d0:
    // 0x2047d0: 0x8e080080  lw          $t0, 0x80($s0)
    ctx->pc = 0x2047d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_2047d4:
    // 0x2047d4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x2047d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2047d8:
    // 0x2047d8: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x2047d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2047dc:
    // 0x2047dc: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x2047dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2047e0:
    // 0x2047e0: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x2047e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_2047e4:
    // 0x2047e4: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x2047e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2047e8:
    // 0x2047e8: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x2047e8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2047ec:
    // 0x2047ec: 0x120f809  jalr        $t1
label_2047f0:
    if (ctx->pc == 0x2047F0u) {
        ctx->pc = 0x2047F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047ECu;
        // 0x2047f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2047F4u;
        goto label_2047f4;
    }
    ctx->pc = 0x2047ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x2047F4u);
        ctx->pc = 0x2047F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047ECu;
        // 0x2047f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2047ECu, 0x2047F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2047F4u;
label_2047f4:
    // 0x2047f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2047f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2047f8:
    // 0x2047f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2047f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2047fc:
    // 0x2047fc: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x2047fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_204800:
    // 0x204800: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x204800u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_204804:
    // 0x204804: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x204804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204808:
    // 0x204808: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_20480c:
    // 0x20480c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x20480cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204810:
    // 0x204810: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_204814:
    // 0x204814: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x204814u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204818:
    // 0x204818: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204818u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_20481c:
    // 0x20481c: 0x120f809  jalr        $t1
label_204820:
    if (ctx->pc == 0x204820u) {
        ctx->pc = 0x204820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20481Cu;
        // 0x204820: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204824u;
        goto label_204824;
    }
    ctx->pc = 0x20481Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x204824u);
        ctx->pc = 0x204820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20481Cu;
        // 0x204820: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20481Cu, 0x204824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204824u;
label_204824:
    // 0x204824: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204828:
    // 0x204828: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x204828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20482c:
    // 0x20482c: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x20482cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_204830:
    // 0x204830: 0x8e080088  lw          $t0, 0x88($s0)
    ctx->pc = 0x204830u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_204834:
    // 0x204834: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x204834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204838:
    // 0x204838: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_20483c:
    // 0x20483c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x20483cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204840:
    // 0x204840: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_204844:
    // 0x204844: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x204844u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204848:
    // 0x204848: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204848u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_20484c:
    // 0x20484c: 0x120f809  jalr        $t1
label_204850:
    if (ctx->pc == 0x204850u) {
        ctx->pc = 0x204850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20484Cu;
        // 0x204850: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204854u;
        goto label_204854;
    }
    ctx->pc = 0x20484Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x204854u);
        ctx->pc = 0x204850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20484Cu;
        // 0x204850: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20484Cu, 0x204854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204854u;
label_204854:
    // 0x204854: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204858:
    // 0x204858: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20485c:
    // 0x20485c: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x20485cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_204860:
    // 0x204860: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x204860u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_204864:
    // 0x204864: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x204864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204868:
    // 0x204868: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_20486c:
    // 0x20486c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x20486cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204870:
    // 0x204870: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_204874:
    // 0x204874: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x204874u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204878:
    // 0x204878: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204878u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_20487c:
    // 0x20487c: 0x120f809  jalr        $t1
label_204880:
    if (ctx->pc == 0x204880u) {
        ctx->pc = 0x204880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20487Cu;
        // 0x204880: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204884u;
        goto label_204884;
    }
    ctx->pc = 0x20487Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x204884u);
        ctx->pc = 0x204880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20487Cu;
        // 0x204880: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20487Cu, 0x204884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204884u;
label_204884:
    // 0x204884: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204888:
    // 0x204888: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x204888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20488c:
    // 0x20488c: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x20488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_204890:
    // 0x204890: 0x8e080080  lw          $t0, 0x80($s0)
    ctx->pc = 0x204890u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_204894:
    // 0x204894: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x204894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204898:
    // 0x204898: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_20489c:
    // 0x20489c: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x20489cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2048a0:
    // 0x2048a0: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x2048a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_2048a4:
    // 0x2048a4: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x2048a4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2048a8:
    // 0x2048a8: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x2048a8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2048ac:
    // 0x2048ac: 0x120f809  jalr        $t1
label_2048b0:
    if (ctx->pc == 0x2048B0u) {
        ctx->pc = 0x2048B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048ACu;
        // 0x2048b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2048B4u;
        goto label_2048b4;
    }
    ctx->pc = 0x2048ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x2048B4u);
        ctx->pc = 0x2048B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048ACu;
        // 0x2048b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2048ACu, 0x2048B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2048B4u;
label_2048b4:
    // 0x2048b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2048b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2048b8:
    // 0x2048b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2048b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2048bc:
    // 0x2048bc: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x2048bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2048c0:
    // 0x2048c0: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x2048c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_2048c4:
    // 0x2048c4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x2048c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2048c8:
    // 0x2048c8: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x2048c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_2048cc:
    // 0x2048cc: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x2048ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2048d0:
    // 0x2048d0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x2048d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2048d4:
    // 0x2048d4: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x2048d4u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2048d8:
    // 0x2048d8: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2048d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_2048dc:
    // 0x2048dc: 0x120f809  jalr        $t1
label_2048e0:
    if (ctx->pc == 0x2048E0u) {
        ctx->pc = 0x2048E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048DCu;
        // 0x2048e0: 0x3280a  movz        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2048E4u;
        goto label_2048e4;
    }
    ctx->pc = 0x2048DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x2048E4u);
        ctx->pc = 0x2048E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048DCu;
        // 0x2048e0: 0x3280a  movz        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2048DCu, 0x2048E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2048E4u;
label_2048e4:
    // 0x2048e4: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x2048e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_2048e8:
    // 0x2048e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2048e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2048ec:
    // 0x2048ec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2048ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2048f0:
    // 0x2048f0: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x2048f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2048f4:
    // 0x2048f4: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x2048f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2048f8:
    // 0x2048f8: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x2048f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_2048fc:
    // 0x2048fc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2048fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_204900:
    // 0x204900: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x204900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_204904:
    // 0x204904: 0x40f809  jalr        $v0
label_204908:
    if (ctx->pc == 0x204908u) {
        ctx->pc = 0x204908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204904u;
        // 0x204908: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20490Cu;
        goto label_20490c;
    }
    ctx->pc = 0x204904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20490Cu);
        ctx->pc = 0x204908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204904u;
        // 0x204908: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204904u, 0x20490Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20490Cu;
label_20490c:
    // 0x20490c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20490cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204910:
    // 0x204910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204914:
    // 0x204914: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x204914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_204918:
    // 0x204918: 0x8e080090  lw          $t0, 0x90($s0)
    ctx->pc = 0x204918u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20491c:
    // 0x20491c: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x20491cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_204920:
    // 0x204920: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x204920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_204924:
    // 0x204924: 0x8c69001c  lw          $t1, 0x1C($v1)
    ctx->pc = 0x204924u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_204928:
    // 0x204928: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_20492c:
    // 0x20492c: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x20492cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204930:
    // 0x204930: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204930u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_204934:
    // 0x204934: 0x120f809  jalr        $t1
label_204938:
    if (ctx->pc == 0x204938u) {
        ctx->pc = 0x204938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204934u;
        // 0x204938: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20493Cu;
        goto label_20493c;
    }
    ctx->pc = 0x204934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x20493Cu);
        ctx->pc = 0x204938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204934u;
        // 0x204938: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204934u, 0x20493Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20493Cu;
label_20493c:
    // 0x20493c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204940:
    // 0x204940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204944:
    // 0x204944: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x204944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_204948:
    // 0x204948: 0x8e080094  lw          $t0, 0x94($s0)
    ctx->pc = 0x204948u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20494c:
    // 0x20494c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x20494cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204950:
    // 0x204950: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_204954:
    // 0x204954: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x204954u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204958:
    // 0x204958: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_20495c:
    // 0x20495c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x20495cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204960:
    // 0x204960: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204960u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_204964:
    // 0x204964: 0x120f809  jalr        $t1
label_204968:
    if (ctx->pc == 0x204968u) {
        ctx->pc = 0x204968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204964u;
        // 0x204968: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20496Cu;
        goto label_20496c;
    }
    ctx->pc = 0x204964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x20496Cu);
        ctx->pc = 0x204968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204964u;
        // 0x204968: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204964u, 0x20496Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20496Cu;
label_20496c:
    // 0x20496c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204970:
    // 0x204970: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204974:
    // 0x204974: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x204974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_204978:
    // 0x204978: 0x8e080098  lw          $t0, 0x98($s0)
    ctx->pc = 0x204978u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_20497c:
    // 0x20497c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x20497cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204980:
    // 0x204980: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_204984:
    // 0x204984: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x204984u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204988:
    // 0x204988: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_20498c:
    // 0x20498c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x20498cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204990:
    // 0x204990: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204990u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_204994:
    // 0x204994: 0x120f809  jalr        $t1
label_204998:
    if (ctx->pc == 0x204998u) {
        ctx->pc = 0x204998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204994u;
        // 0x204998: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20499Cu;
        goto label_20499c;
    }
    ctx->pc = 0x204994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x20499Cu);
        ctx->pc = 0x204998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204994u;
        // 0x204998: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204994u, 0x20499Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20499Cu;
label_20499c:
    // 0x20499c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2049a0:
    // 0x2049a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2049a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2049a4:
    // 0x2049a4: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x2049a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2049a8:
    // 0x2049a8: 0x8e08008c  lw          $t0, 0x8C($s0)
    ctx->pc = 0x2049a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2049ac:
    // 0x2049ac: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x2049acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2049b0:
    // 0x2049b0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x2049b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2049b4:
    // 0x2049b4: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x2049b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2049b8:
    // 0x2049b8: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x2049b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_2049bc:
    // 0x2049bc: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x2049bcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2049c0:
    // 0x2049c0: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x2049c0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2049c4:
    // 0x2049c4: 0x120f809  jalr        $t1
label_2049c8:
    if (ctx->pc == 0x2049C8u) {
        ctx->pc = 0x2049C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049C4u;
        // 0x2049c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2049CCu;
        goto label_2049cc;
    }
    ctx->pc = 0x2049C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x2049CCu);
        ctx->pc = 0x2049C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049C4u;
        // 0x2049c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2049C4u, 0x2049CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2049CCu;
label_2049cc:
    // 0x2049cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2049ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2049d0:
    // 0x2049d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2049d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2049d4:
    // 0x2049d4: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x2049d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2049d8:
    // 0x2049d8: 0x8e08008c  lw          $t0, 0x8C($s0)
    ctx->pc = 0x2049d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2049dc:
    // 0x2049dc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x2049dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2049e0:
    // 0x2049e0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x2049e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2049e4:
    // 0x2049e4: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x2049e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2049e8:
    // 0x2049e8: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x2049e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_2049ec:
    // 0x2049ec: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x2049ecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2049f0:
    // 0x2049f0: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x2049f0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2049f4:
    // 0x2049f4: 0x120f809  jalr        $t1
label_2049f8:
    if (ctx->pc == 0x2049F8u) {
        ctx->pc = 0x2049F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049F4u;
        // 0x2049f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2049FCu;
        goto label_2049fc;
    }
    ctx->pc = 0x2049F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x2049FCu);
        ctx->pc = 0x2049F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049F4u;
        // 0x2049f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2049F4u, 0x2049FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2049FCu;
label_2049fc:
    // 0x2049fc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2049fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204a00:
    // 0x204a00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204a04:
    // 0x204a04: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x204a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_204a08:
    // 0x204a08: 0x8e08007c  lw          $t0, 0x7C($s0)
    ctx->pc = 0x204a08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_204a0c:
    // 0x204a0c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x204a0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204a10:
    // 0x204a10: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_204a14:
    // 0x204a14: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x204a14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204a18:
    // 0x204a18: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_204a1c:
    // 0x204a1c: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x204a1cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204a20:
    // 0x204a20: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x204a20u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_204a24:
    // 0x204a24: 0x120f809  jalr        $t1
label_204a28:
    if (ctx->pc == 0x204A28u) {
        ctx->pc = 0x204A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A24u;
        // 0x204a28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204A2Cu;
        goto label_204a2c;
    }
    ctx->pc = 0x204A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x204A2Cu);
        ctx->pc = 0x204A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A24u;
        // 0x204a28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204A24u, 0x204A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204A2Cu;
label_204a2c:
    // 0x204a2c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204a30:
    // 0x204a30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_204a34:
    // 0x204a34: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x204a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_204a38:
    // 0x204a38: 0x8e080064  lw          $t0, 0x64($s0)
    ctx->pc = 0x204a38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_204a3c:
    // 0x204a3c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x204a3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_204a40:
    // 0x204a40: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x204a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_204a44:
    // 0x204a44: 0x25070070  addiu       $a3, $t0, 0x70
    ctx->pc = 0x204a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
label_204a48:
    // 0x204a48: 0x8c49001c  lw          $t1, 0x1C($v0)
    ctx->pc = 0x204a48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_204a4c:
    // 0x204a4c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x204a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_204a50:
    // 0x204a50: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x204a50u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_204a54:
    // 0x204a54: 0x120f809  jalr        $t1
label_204a58:
    if (ctx->pc == 0x204A58u) {
        ctx->pc = 0x204A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A54u;
        // 0x204a58: 0x8380a  movz        $a3, $zero, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204A5Cu;
        goto label_204a5c;
    }
    ctx->pc = 0x204A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x204A5Cu);
        ctx->pc = 0x204A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A54u;
        // 0x204a58: 0x8380a  movz        $a3, $zero, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204A54u, 0x204A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204A5Cu;
label_204a5c:
    // 0x204a5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x204a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_204a60:
    // 0x204a60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x204a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_204a64:
    // 0x204a64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204a64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204a68:
    // 0x204a68: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x204a68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_204a6c:
    // 0x204a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204a70:
    // 0x204a70: 0x3e00008  jr          $ra
label_204a74:
    if (ctx->pc == 0x204A74u) {
        ctx->pc = 0x204A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A70u;
        // 0x204a74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204A78u;
        goto label_fallthrough_0x204a70;
    }
    ctx->pc = 0x204A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A70u;
        // 0x204a74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x204a70:
    ctx->pc = 0x204A78u;
}
