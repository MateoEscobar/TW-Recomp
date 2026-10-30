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

// Function: sub_00249108
// Address: 0x249108 - 0x249b98
void sub_00249108_0x249108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249108_0x249108");
#endif

    switch (ctx->pc) {
        case 0x249108u: goto label_249108;
        case 0x24910cu: goto label_24910c;
        case 0x249110u: goto label_249110;
        case 0x249114u: goto label_249114;
        case 0x249118u: goto label_249118;
        case 0x24911cu: goto label_24911c;
        case 0x249120u: goto label_249120;
        case 0x249124u: goto label_249124;
        case 0x249128u: goto label_249128;
        case 0x24912cu: goto label_24912c;
        case 0x249130u: goto label_249130;
        case 0x249134u: goto label_249134;
        case 0x249138u: goto label_249138;
        case 0x24913cu: goto label_24913c;
        case 0x249140u: goto label_249140;
        case 0x249144u: goto label_249144;
        case 0x249148u: goto label_249148;
        case 0x24914cu: goto label_24914c;
        case 0x249150u: goto label_249150;
        case 0x249154u: goto label_249154;
        case 0x249158u: goto label_249158;
        case 0x24915cu: goto label_24915c;
        case 0x249160u: goto label_249160;
        case 0x249164u: goto label_249164;
        case 0x249168u: goto label_249168;
        case 0x24916cu: goto label_24916c;
        case 0x249170u: goto label_249170;
        case 0x249174u: goto label_249174;
        case 0x249178u: goto label_249178;
        case 0x24917cu: goto label_24917c;
        case 0x249180u: goto label_249180;
        case 0x249184u: goto label_249184;
        case 0x249188u: goto label_249188;
        case 0x24918cu: goto label_24918c;
        case 0x249190u: goto label_249190;
        case 0x249194u: goto label_249194;
        case 0x249198u: goto label_249198;
        case 0x24919cu: goto label_24919c;
        case 0x2491a0u: goto label_2491a0;
        case 0x2491a4u: goto label_2491a4;
        case 0x2491a8u: goto label_2491a8;
        case 0x2491acu: goto label_2491ac;
        case 0x2491b0u: goto label_2491b0;
        case 0x2491b4u: goto label_2491b4;
        case 0x2491b8u: goto label_2491b8;
        case 0x2491bcu: goto label_2491bc;
        case 0x2491c0u: goto label_2491c0;
        case 0x2491c4u: goto label_2491c4;
        case 0x2491c8u: goto label_2491c8;
        case 0x2491ccu: goto label_2491cc;
        case 0x2491d0u: goto label_2491d0;
        case 0x2491d4u: goto label_2491d4;
        case 0x2491d8u: goto label_2491d8;
        case 0x2491dcu: goto label_2491dc;
        case 0x2491e0u: goto label_2491e0;
        case 0x2491e4u: goto label_2491e4;
        case 0x2491e8u: goto label_2491e8;
        case 0x2491ecu: goto label_2491ec;
        case 0x2491f0u: goto label_2491f0;
        case 0x2491f4u: goto label_2491f4;
        case 0x2491f8u: goto label_2491f8;
        case 0x2491fcu: goto label_2491fc;
        case 0x249200u: goto label_249200;
        case 0x249204u: goto label_249204;
        case 0x249208u: goto label_249208;
        case 0x24920cu: goto label_24920c;
        case 0x249210u: goto label_249210;
        case 0x249214u: goto label_249214;
        case 0x249218u: goto label_249218;
        case 0x24921cu: goto label_24921c;
        case 0x249220u: goto label_249220;
        case 0x249224u: goto label_249224;
        case 0x249228u: goto label_249228;
        case 0x24922cu: goto label_24922c;
        case 0x249230u: goto label_249230;
        case 0x249234u: goto label_249234;
        case 0x249238u: goto label_249238;
        case 0x24923cu: goto label_24923c;
        case 0x249240u: goto label_249240;
        case 0x249244u: goto label_249244;
        case 0x249248u: goto label_249248;
        case 0x24924cu: goto label_24924c;
        case 0x249250u: goto label_249250;
        case 0x249254u: goto label_249254;
        case 0x249258u: goto label_249258;
        case 0x24925cu: goto label_24925c;
        case 0x249260u: goto label_249260;
        case 0x249264u: goto label_249264;
        case 0x249268u: goto label_249268;
        case 0x24926cu: goto label_24926c;
        case 0x249270u: goto label_249270;
        case 0x249274u: goto label_249274;
        case 0x249278u: goto label_249278;
        case 0x24927cu: goto label_24927c;
        case 0x249280u: goto label_249280;
        case 0x249284u: goto label_249284;
        case 0x249288u: goto label_249288;
        case 0x24928cu: goto label_24928c;
        case 0x249290u: goto label_249290;
        case 0x249294u: goto label_249294;
        case 0x249298u: goto label_249298;
        case 0x24929cu: goto label_24929c;
        case 0x2492a0u: goto label_2492a0;
        case 0x2492a4u: goto label_2492a4;
        case 0x2492a8u: goto label_2492a8;
        case 0x2492acu: goto label_2492ac;
        case 0x2492b0u: goto label_2492b0;
        case 0x2492b4u: goto label_2492b4;
        case 0x2492b8u: goto label_2492b8;
        case 0x2492bcu: goto label_2492bc;
        case 0x2492c0u: goto label_2492c0;
        case 0x2492c4u: goto label_2492c4;
        case 0x2492c8u: goto label_2492c8;
        case 0x2492ccu: goto label_2492cc;
        case 0x2492d0u: goto label_2492d0;
        case 0x2492d4u: goto label_2492d4;
        case 0x2492d8u: goto label_2492d8;
        case 0x2492dcu: goto label_2492dc;
        case 0x2492e0u: goto label_2492e0;
        case 0x2492e4u: goto label_2492e4;
        case 0x2492e8u: goto label_2492e8;
        case 0x2492ecu: goto label_2492ec;
        case 0x2492f0u: goto label_2492f0;
        case 0x2492f4u: goto label_2492f4;
        case 0x2492f8u: goto label_2492f8;
        case 0x2492fcu: goto label_2492fc;
        case 0x249300u: goto label_249300;
        case 0x249304u: goto label_249304;
        case 0x249308u: goto label_249308;
        case 0x24930cu: goto label_24930c;
        case 0x249310u: goto label_249310;
        case 0x249314u: goto label_249314;
        case 0x249318u: goto label_249318;
        case 0x24931cu: goto label_24931c;
        case 0x249320u: goto label_249320;
        case 0x249324u: goto label_249324;
        case 0x249328u: goto label_249328;
        case 0x24932cu: goto label_24932c;
        case 0x249330u: goto label_249330;
        case 0x249334u: goto label_249334;
        case 0x249338u: goto label_249338;
        case 0x24933cu: goto label_24933c;
        case 0x249340u: goto label_249340;
        case 0x249344u: goto label_249344;
        case 0x249348u: goto label_249348;
        case 0x24934cu: goto label_24934c;
        case 0x249350u: goto label_249350;
        case 0x249354u: goto label_249354;
        case 0x249358u: goto label_249358;
        case 0x24935cu: goto label_24935c;
        case 0x249360u: goto label_249360;
        case 0x249364u: goto label_249364;
        case 0x249368u: goto label_249368;
        case 0x24936cu: goto label_24936c;
        case 0x249370u: goto label_249370;
        case 0x249374u: goto label_249374;
        case 0x249378u: goto label_249378;
        case 0x24937cu: goto label_24937c;
        case 0x249380u: goto label_249380;
        case 0x249384u: goto label_249384;
        case 0x249388u: goto label_249388;
        case 0x24938cu: goto label_24938c;
        case 0x249390u: goto label_249390;
        case 0x249394u: goto label_249394;
        case 0x249398u: goto label_249398;
        case 0x24939cu: goto label_24939c;
        case 0x2493a0u: goto label_2493a0;
        case 0x2493a4u: goto label_2493a4;
        case 0x2493a8u: goto label_2493a8;
        case 0x2493acu: goto label_2493ac;
        case 0x2493b0u: goto label_2493b0;
        case 0x2493b4u: goto label_2493b4;
        case 0x2493b8u: goto label_2493b8;
        case 0x2493bcu: goto label_2493bc;
        case 0x2493c0u: goto label_2493c0;
        case 0x2493c4u: goto label_2493c4;
        case 0x2493c8u: goto label_2493c8;
        case 0x2493ccu: goto label_2493cc;
        case 0x2493d0u: goto label_2493d0;
        case 0x2493d4u: goto label_2493d4;
        case 0x2493d8u: goto label_2493d8;
        case 0x2493dcu: goto label_2493dc;
        case 0x2493e0u: goto label_2493e0;
        case 0x2493e4u: goto label_2493e4;
        case 0x2493e8u: goto label_2493e8;
        case 0x2493ecu: goto label_2493ec;
        case 0x2493f0u: goto label_2493f0;
        case 0x2493f4u: goto label_2493f4;
        case 0x2493f8u: goto label_2493f8;
        case 0x2493fcu: goto label_2493fc;
        case 0x249400u: goto label_249400;
        case 0x249404u: goto label_249404;
        case 0x249408u: goto label_249408;
        case 0x24940cu: goto label_24940c;
        case 0x249410u: goto label_249410;
        case 0x249414u: goto label_249414;
        case 0x249418u: goto label_249418;
        case 0x24941cu: goto label_24941c;
        case 0x249420u: goto label_249420;
        case 0x249424u: goto label_249424;
        case 0x249428u: goto label_249428;
        case 0x24942cu: goto label_24942c;
        case 0x249430u: goto label_249430;
        case 0x249434u: goto label_249434;
        case 0x249438u: goto label_249438;
        case 0x24943cu: goto label_24943c;
        case 0x249440u: goto label_249440;
        case 0x249444u: goto label_249444;
        case 0x249448u: goto label_249448;
        case 0x24944cu: goto label_24944c;
        case 0x249450u: goto label_249450;
        case 0x249454u: goto label_249454;
        case 0x249458u: goto label_249458;
        case 0x24945cu: goto label_24945c;
        case 0x249460u: goto label_249460;
        case 0x249464u: goto label_249464;
        case 0x249468u: goto label_249468;
        case 0x24946cu: goto label_24946c;
        case 0x249470u: goto label_249470;
        case 0x249474u: goto label_249474;
        case 0x249478u: goto label_249478;
        case 0x24947cu: goto label_24947c;
        case 0x249480u: goto label_249480;
        case 0x249484u: goto label_249484;
        case 0x249488u: goto label_249488;
        case 0x24948cu: goto label_24948c;
        case 0x249490u: goto label_249490;
        case 0x249494u: goto label_249494;
        case 0x249498u: goto label_249498;
        case 0x24949cu: goto label_24949c;
        case 0x2494a0u: goto label_2494a0;
        case 0x2494a4u: goto label_2494a4;
        case 0x2494a8u: goto label_2494a8;
        case 0x2494acu: goto label_2494ac;
        case 0x2494b0u: goto label_2494b0;
        case 0x2494b4u: goto label_2494b4;
        case 0x2494b8u: goto label_2494b8;
        case 0x2494bcu: goto label_2494bc;
        case 0x2494c0u: goto label_2494c0;
        case 0x2494c4u: goto label_2494c4;
        case 0x2494c8u: goto label_2494c8;
        case 0x2494ccu: goto label_2494cc;
        case 0x2494d0u: goto label_2494d0;
        case 0x2494d4u: goto label_2494d4;
        case 0x2494d8u: goto label_2494d8;
        case 0x2494dcu: goto label_2494dc;
        case 0x2494e0u: goto label_2494e0;
        case 0x2494e4u: goto label_2494e4;
        case 0x2494e8u: goto label_2494e8;
        case 0x2494ecu: goto label_2494ec;
        case 0x2494f0u: goto label_2494f0;
        case 0x2494f4u: goto label_2494f4;
        case 0x2494f8u: goto label_2494f8;
        case 0x2494fcu: goto label_2494fc;
        case 0x249500u: goto label_249500;
        case 0x249504u: goto label_249504;
        case 0x249508u: goto label_249508;
        case 0x24950cu: goto label_24950c;
        case 0x249510u: goto label_249510;
        case 0x249514u: goto label_249514;
        case 0x249518u: goto label_249518;
        case 0x24951cu: goto label_24951c;
        case 0x249520u: goto label_249520;
        case 0x249524u: goto label_249524;
        case 0x249528u: goto label_249528;
        case 0x24952cu: goto label_24952c;
        case 0x249530u: goto label_249530;
        case 0x249534u: goto label_249534;
        case 0x249538u: goto label_249538;
        case 0x24953cu: goto label_24953c;
        case 0x249540u: goto label_249540;
        case 0x249544u: goto label_249544;
        case 0x249548u: goto label_249548;
        case 0x24954cu: goto label_24954c;
        case 0x249550u: goto label_249550;
        case 0x249554u: goto label_249554;
        case 0x249558u: goto label_249558;
        case 0x24955cu: goto label_24955c;
        case 0x249560u: goto label_249560;
        case 0x249564u: goto label_249564;
        case 0x249568u: goto label_249568;
        case 0x24956cu: goto label_24956c;
        case 0x249570u: goto label_249570;
        case 0x249574u: goto label_249574;
        case 0x249578u: goto label_249578;
        case 0x24957cu: goto label_24957c;
        case 0x249580u: goto label_249580;
        case 0x249584u: goto label_249584;
        case 0x249588u: goto label_249588;
        case 0x24958cu: goto label_24958c;
        case 0x249590u: goto label_249590;
        case 0x249594u: goto label_249594;
        case 0x249598u: goto label_249598;
        case 0x24959cu: goto label_24959c;
        case 0x2495a0u: goto label_2495a0;
        case 0x2495a4u: goto label_2495a4;
        case 0x2495a8u: goto label_2495a8;
        case 0x2495acu: goto label_2495ac;
        case 0x2495b0u: goto label_2495b0;
        case 0x2495b4u: goto label_2495b4;
        case 0x2495b8u: goto label_2495b8;
        case 0x2495bcu: goto label_2495bc;
        case 0x2495c0u: goto label_2495c0;
        case 0x2495c4u: goto label_2495c4;
        case 0x2495c8u: goto label_2495c8;
        case 0x2495ccu: goto label_2495cc;
        case 0x2495d0u: goto label_2495d0;
        case 0x2495d4u: goto label_2495d4;
        case 0x2495d8u: goto label_2495d8;
        case 0x2495dcu: goto label_2495dc;
        case 0x2495e0u: goto label_2495e0;
        case 0x2495e4u: goto label_2495e4;
        case 0x2495e8u: goto label_2495e8;
        case 0x2495ecu: goto label_2495ec;
        case 0x2495f0u: goto label_2495f0;
        case 0x2495f4u: goto label_2495f4;
        case 0x2495f8u: goto label_2495f8;
        case 0x2495fcu: goto label_2495fc;
        case 0x249600u: goto label_249600;
        case 0x249604u: goto label_249604;
        case 0x249608u: goto label_249608;
        case 0x24960cu: goto label_24960c;
        case 0x249610u: goto label_249610;
        case 0x249614u: goto label_249614;
        case 0x249618u: goto label_249618;
        case 0x24961cu: goto label_24961c;
        case 0x249620u: goto label_249620;
        case 0x249624u: goto label_249624;
        case 0x249628u: goto label_249628;
        case 0x24962cu: goto label_24962c;
        case 0x249630u: goto label_249630;
        case 0x249634u: goto label_249634;
        case 0x249638u: goto label_249638;
        case 0x24963cu: goto label_24963c;
        case 0x249640u: goto label_249640;
        case 0x249644u: goto label_249644;
        case 0x249648u: goto label_249648;
        case 0x24964cu: goto label_24964c;
        case 0x249650u: goto label_249650;
        case 0x249654u: goto label_249654;
        case 0x249658u: goto label_249658;
        case 0x24965cu: goto label_24965c;
        case 0x249660u: goto label_249660;
        case 0x249664u: goto label_249664;
        case 0x249668u: goto label_249668;
        case 0x24966cu: goto label_24966c;
        case 0x249670u: goto label_249670;
        case 0x249674u: goto label_249674;
        case 0x249678u: goto label_249678;
        case 0x24967cu: goto label_24967c;
        case 0x249680u: goto label_249680;
        case 0x249684u: goto label_249684;
        case 0x249688u: goto label_249688;
        case 0x24968cu: goto label_24968c;
        case 0x249690u: goto label_249690;
        case 0x249694u: goto label_249694;
        case 0x249698u: goto label_249698;
        case 0x24969cu: goto label_24969c;
        case 0x2496a0u: goto label_2496a0;
        case 0x2496a4u: goto label_2496a4;
        case 0x2496a8u: goto label_2496a8;
        case 0x2496acu: goto label_2496ac;
        case 0x2496b0u: goto label_2496b0;
        case 0x2496b4u: goto label_2496b4;
        case 0x2496b8u: goto label_2496b8;
        case 0x2496bcu: goto label_2496bc;
        case 0x2496c0u: goto label_2496c0;
        case 0x2496c4u: goto label_2496c4;
        case 0x2496c8u: goto label_2496c8;
        case 0x2496ccu: goto label_2496cc;
        case 0x2496d0u: goto label_2496d0;
        case 0x2496d4u: goto label_2496d4;
        case 0x2496d8u: goto label_2496d8;
        case 0x2496dcu: goto label_2496dc;
        case 0x2496e0u: goto label_2496e0;
        case 0x2496e4u: goto label_2496e4;
        case 0x2496e8u: goto label_2496e8;
        case 0x2496ecu: goto label_2496ec;
        case 0x2496f0u: goto label_2496f0;
        case 0x2496f4u: goto label_2496f4;
        case 0x2496f8u: goto label_2496f8;
        case 0x2496fcu: goto label_2496fc;
        case 0x249700u: goto label_249700;
        case 0x249704u: goto label_249704;
        case 0x249708u: goto label_249708;
        case 0x24970cu: goto label_24970c;
        case 0x249710u: goto label_249710;
        case 0x249714u: goto label_249714;
        case 0x249718u: goto label_249718;
        case 0x24971cu: goto label_24971c;
        case 0x249720u: goto label_249720;
        case 0x249724u: goto label_249724;
        case 0x249728u: goto label_249728;
        case 0x24972cu: goto label_24972c;
        case 0x249730u: goto label_249730;
        case 0x249734u: goto label_249734;
        case 0x249738u: goto label_249738;
        case 0x24973cu: goto label_24973c;
        case 0x249740u: goto label_249740;
        case 0x249744u: goto label_249744;
        case 0x249748u: goto label_249748;
        case 0x24974cu: goto label_24974c;
        case 0x249750u: goto label_249750;
        case 0x249754u: goto label_249754;
        case 0x249758u: goto label_249758;
        case 0x24975cu: goto label_24975c;
        case 0x249760u: goto label_249760;
        case 0x249764u: goto label_249764;
        case 0x249768u: goto label_249768;
        case 0x24976cu: goto label_24976c;
        case 0x249770u: goto label_249770;
        case 0x249774u: goto label_249774;
        case 0x249778u: goto label_249778;
        case 0x24977cu: goto label_24977c;
        case 0x249780u: goto label_249780;
        case 0x249784u: goto label_249784;
        case 0x249788u: goto label_249788;
        case 0x24978cu: goto label_24978c;
        case 0x249790u: goto label_249790;
        case 0x249794u: goto label_249794;
        case 0x249798u: goto label_249798;
        case 0x24979cu: goto label_24979c;
        case 0x2497a0u: goto label_2497a0;
        case 0x2497a4u: goto label_2497a4;
        case 0x2497a8u: goto label_2497a8;
        case 0x2497acu: goto label_2497ac;
        case 0x2497b0u: goto label_2497b0;
        case 0x2497b4u: goto label_2497b4;
        case 0x2497b8u: goto label_2497b8;
        case 0x2497bcu: goto label_2497bc;
        case 0x2497c0u: goto label_2497c0;
        case 0x2497c4u: goto label_2497c4;
        case 0x2497c8u: goto label_2497c8;
        case 0x2497ccu: goto label_2497cc;
        case 0x2497d0u: goto label_2497d0;
        case 0x2497d4u: goto label_2497d4;
        case 0x2497d8u: goto label_2497d8;
        case 0x2497dcu: goto label_2497dc;
        case 0x2497e0u: goto label_2497e0;
        case 0x2497e4u: goto label_2497e4;
        case 0x2497e8u: goto label_2497e8;
        case 0x2497ecu: goto label_2497ec;
        case 0x2497f0u: goto label_2497f0;
        case 0x2497f4u: goto label_2497f4;
        case 0x2497f8u: goto label_2497f8;
        case 0x2497fcu: goto label_2497fc;
        case 0x249800u: goto label_249800;
        case 0x249804u: goto label_249804;
        case 0x249808u: goto label_249808;
        case 0x24980cu: goto label_24980c;
        case 0x249810u: goto label_249810;
        case 0x249814u: goto label_249814;
        case 0x249818u: goto label_249818;
        case 0x24981cu: goto label_24981c;
        case 0x249820u: goto label_249820;
        case 0x249824u: goto label_249824;
        case 0x249828u: goto label_249828;
        case 0x24982cu: goto label_24982c;
        case 0x249830u: goto label_249830;
        case 0x249834u: goto label_249834;
        case 0x249838u: goto label_249838;
        case 0x24983cu: goto label_24983c;
        case 0x249840u: goto label_249840;
        case 0x249844u: goto label_249844;
        case 0x249848u: goto label_249848;
        case 0x24984cu: goto label_24984c;
        case 0x249850u: goto label_249850;
        case 0x249854u: goto label_249854;
        case 0x249858u: goto label_249858;
        case 0x24985cu: goto label_24985c;
        case 0x249860u: goto label_249860;
        case 0x249864u: goto label_249864;
        case 0x249868u: goto label_249868;
        case 0x24986cu: goto label_24986c;
        case 0x249870u: goto label_249870;
        case 0x249874u: goto label_249874;
        case 0x249878u: goto label_249878;
        case 0x24987cu: goto label_24987c;
        case 0x249880u: goto label_249880;
        case 0x249884u: goto label_249884;
        case 0x249888u: goto label_249888;
        case 0x24988cu: goto label_24988c;
        case 0x249890u: goto label_249890;
        case 0x249894u: goto label_249894;
        case 0x249898u: goto label_249898;
        case 0x24989cu: goto label_24989c;
        case 0x2498a0u: goto label_2498a0;
        case 0x2498a4u: goto label_2498a4;
        case 0x2498a8u: goto label_2498a8;
        case 0x2498acu: goto label_2498ac;
        case 0x2498b0u: goto label_2498b0;
        case 0x2498b4u: goto label_2498b4;
        case 0x2498b8u: goto label_2498b8;
        case 0x2498bcu: goto label_2498bc;
        case 0x2498c0u: goto label_2498c0;
        case 0x2498c4u: goto label_2498c4;
        case 0x2498c8u: goto label_2498c8;
        case 0x2498ccu: goto label_2498cc;
        case 0x2498d0u: goto label_2498d0;
        case 0x2498d4u: goto label_2498d4;
        case 0x2498d8u: goto label_2498d8;
        case 0x2498dcu: goto label_2498dc;
        case 0x2498e0u: goto label_2498e0;
        case 0x2498e4u: goto label_2498e4;
        case 0x2498e8u: goto label_2498e8;
        case 0x2498ecu: goto label_2498ec;
        case 0x2498f0u: goto label_2498f0;
        case 0x2498f4u: goto label_2498f4;
        case 0x2498f8u: goto label_2498f8;
        case 0x2498fcu: goto label_2498fc;
        case 0x249900u: goto label_249900;
        case 0x249904u: goto label_249904;
        case 0x249908u: goto label_249908;
        case 0x24990cu: goto label_24990c;
        case 0x249910u: goto label_249910;
        case 0x249914u: goto label_249914;
        case 0x249918u: goto label_249918;
        case 0x24991cu: goto label_24991c;
        case 0x249920u: goto label_249920;
        case 0x249924u: goto label_249924;
        case 0x249928u: goto label_249928;
        case 0x24992cu: goto label_24992c;
        case 0x249930u: goto label_249930;
        case 0x249934u: goto label_249934;
        case 0x249938u: goto label_249938;
        case 0x24993cu: goto label_24993c;
        case 0x249940u: goto label_249940;
        case 0x249944u: goto label_249944;
        case 0x249948u: goto label_249948;
        case 0x24994cu: goto label_24994c;
        case 0x249950u: goto label_249950;
        case 0x249954u: goto label_249954;
        case 0x249958u: goto label_249958;
        case 0x24995cu: goto label_24995c;
        case 0x249960u: goto label_249960;
        case 0x249964u: goto label_249964;
        case 0x249968u: goto label_249968;
        case 0x24996cu: goto label_24996c;
        case 0x249970u: goto label_249970;
        case 0x249974u: goto label_249974;
        case 0x249978u: goto label_249978;
        case 0x24997cu: goto label_24997c;
        case 0x249980u: goto label_249980;
        case 0x249984u: goto label_249984;
        case 0x249988u: goto label_249988;
        case 0x24998cu: goto label_24998c;
        case 0x249990u: goto label_249990;
        case 0x249994u: goto label_249994;
        case 0x249998u: goto label_249998;
        case 0x24999cu: goto label_24999c;
        case 0x2499a0u: goto label_2499a0;
        case 0x2499a4u: goto label_2499a4;
        case 0x2499a8u: goto label_2499a8;
        case 0x2499acu: goto label_2499ac;
        case 0x2499b0u: goto label_2499b0;
        case 0x2499b4u: goto label_2499b4;
        case 0x2499b8u: goto label_2499b8;
        case 0x2499bcu: goto label_2499bc;
        case 0x2499c0u: goto label_2499c0;
        case 0x2499c4u: goto label_2499c4;
        case 0x2499c8u: goto label_2499c8;
        case 0x2499ccu: goto label_2499cc;
        case 0x2499d0u: goto label_2499d0;
        case 0x2499d4u: goto label_2499d4;
        case 0x2499d8u: goto label_2499d8;
        case 0x2499dcu: goto label_2499dc;
        case 0x2499e0u: goto label_2499e0;
        case 0x2499e4u: goto label_2499e4;
        case 0x2499e8u: goto label_2499e8;
        case 0x2499ecu: goto label_2499ec;
        case 0x2499f0u: goto label_2499f0;
        case 0x2499f4u: goto label_2499f4;
        case 0x2499f8u: goto label_2499f8;
        case 0x2499fcu: goto label_2499fc;
        case 0x249a00u: goto label_249a00;
        case 0x249a04u: goto label_249a04;
        case 0x249a08u: goto label_249a08;
        case 0x249a0cu: goto label_249a0c;
        case 0x249a10u: goto label_249a10;
        case 0x249a14u: goto label_249a14;
        case 0x249a18u: goto label_249a18;
        case 0x249a1cu: goto label_249a1c;
        case 0x249a20u: goto label_249a20;
        case 0x249a24u: goto label_249a24;
        case 0x249a28u: goto label_249a28;
        case 0x249a2cu: goto label_249a2c;
        case 0x249a30u: goto label_249a30;
        case 0x249a34u: goto label_249a34;
        case 0x249a38u: goto label_249a38;
        case 0x249a3cu: goto label_249a3c;
        case 0x249a40u: goto label_249a40;
        case 0x249a44u: goto label_249a44;
        case 0x249a48u: goto label_249a48;
        case 0x249a4cu: goto label_249a4c;
        case 0x249a50u: goto label_249a50;
        case 0x249a54u: goto label_249a54;
        case 0x249a58u: goto label_249a58;
        case 0x249a5cu: goto label_249a5c;
        case 0x249a60u: goto label_249a60;
        case 0x249a64u: goto label_249a64;
        case 0x249a68u: goto label_249a68;
        case 0x249a6cu: goto label_249a6c;
        case 0x249a70u: goto label_249a70;
        case 0x249a74u: goto label_249a74;
        case 0x249a78u: goto label_249a78;
        case 0x249a7cu: goto label_249a7c;
        case 0x249a80u: goto label_249a80;
        case 0x249a84u: goto label_249a84;
        case 0x249a88u: goto label_249a88;
        case 0x249a8cu: goto label_249a8c;
        case 0x249a90u: goto label_249a90;
        case 0x249a94u: goto label_249a94;
        case 0x249a98u: goto label_249a98;
        case 0x249a9cu: goto label_249a9c;
        case 0x249aa0u: goto label_249aa0;
        case 0x249aa4u: goto label_249aa4;
        case 0x249aa8u: goto label_249aa8;
        case 0x249aacu: goto label_249aac;
        case 0x249ab0u: goto label_249ab0;
        case 0x249ab4u: goto label_249ab4;
        case 0x249ab8u: goto label_249ab8;
        case 0x249abcu: goto label_249abc;
        case 0x249ac0u: goto label_249ac0;
        case 0x249ac4u: goto label_249ac4;
        case 0x249ac8u: goto label_249ac8;
        case 0x249accu: goto label_249acc;
        case 0x249ad0u: goto label_249ad0;
        case 0x249ad4u: goto label_249ad4;
        case 0x249ad8u: goto label_249ad8;
        case 0x249adcu: goto label_249adc;
        case 0x249ae0u: goto label_249ae0;
        case 0x249ae4u: goto label_249ae4;
        case 0x249ae8u: goto label_249ae8;
        case 0x249aecu: goto label_249aec;
        case 0x249af0u: goto label_249af0;
        case 0x249af4u: goto label_249af4;
        case 0x249af8u: goto label_249af8;
        case 0x249afcu: goto label_249afc;
        case 0x249b00u: goto label_249b00;
        case 0x249b04u: goto label_249b04;
        case 0x249b08u: goto label_249b08;
        case 0x249b0cu: goto label_249b0c;
        case 0x249b10u: goto label_249b10;
        case 0x249b14u: goto label_249b14;
        case 0x249b18u: goto label_249b18;
        case 0x249b1cu: goto label_249b1c;
        case 0x249b20u: goto label_249b20;
        case 0x249b24u: goto label_249b24;
        case 0x249b28u: goto label_249b28;
        case 0x249b2cu: goto label_249b2c;
        case 0x249b30u: goto label_249b30;
        case 0x249b34u: goto label_249b34;
        case 0x249b38u: goto label_249b38;
        case 0x249b3cu: goto label_249b3c;
        case 0x249b40u: goto label_249b40;
        case 0x249b44u: goto label_249b44;
        case 0x249b48u: goto label_249b48;
        case 0x249b4cu: goto label_249b4c;
        case 0x249b50u: goto label_249b50;
        case 0x249b54u: goto label_249b54;
        case 0x249b58u: goto label_249b58;
        case 0x249b5cu: goto label_249b5c;
        case 0x249b60u: goto label_249b60;
        case 0x249b64u: goto label_249b64;
        case 0x249b68u: goto label_249b68;
        case 0x249b6cu: goto label_249b6c;
        case 0x249b70u: goto label_249b70;
        case 0x249b74u: goto label_249b74;
        case 0x249b78u: goto label_249b78;
        case 0x249b7cu: goto label_249b7c;
        case 0x249b80u: goto label_249b80;
        case 0x249b84u: goto label_249b84;
        case 0x249b88u: goto label_249b88;
        case 0x249b8cu: goto label_249b8c;
        case 0x249b90u: goto label_249b90;
        case 0x249b94u: goto label_249b94;
        default: break;
    }

    ctx->pc = 0x249108u;

label_249108:
    // 0x249108: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x249108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24910c:
    // 0x24910c: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x24910cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_249110:
    // 0x249110: 0x8c4304f4  lw          $v1, 0x4F4($v0)
    ctx->pc = 0x249110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1268)));
label_249114:
    // 0x249114: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x249114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_249118:
    // 0x249118: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x249118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_24911c:
    // 0x24911c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x24911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_249120:
    // 0x249120: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x249120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_249124:
    // 0x249124: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x249124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249128:
    // 0x249128: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x249128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_24912c:
    // 0x24912c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x24912cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_249130:
    // 0x249130: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x249130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_249134:
    // 0x249134: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x249134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_249138:
    // 0x249138: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x249138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_24913c:
    // 0x24913c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x24913cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_249140:
    // 0x249140: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x249140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_249144:
    // 0x249144: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x249144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_249148:
    // 0x249148: 0x14800285  bnez        $a0, . + 4 + (0x285 << 2)
label_24914c:
    if (ctx->pc == 0x24914Cu) {
        ctx->pc = 0x24914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249148u;
        // 0x24914c: 0xac4304f4  sw          $v1, 0x4F4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249150u;
        goto label_249150;
    }
    ctx->pc = 0x249148u;
    {
        const bool branch_taken_0x249148 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249148u;
        // 0x24914c: 0xac4304f4  sw          $v1, 0x4F4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249148) {
            ctx->pc = 0x249B60u;
            goto label_249b60;
        }
    }
    ctx->pc = 0x249150u;
label_249150:
    // 0x249150: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x249150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_249154:
    // 0x249154: 0xc05c322  jal         func_170C88
label_249158:
    if (ctx->pc == 0x249158u) {
        ctx->pc = 0x249158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249154u;
        // 0x249158: 0x8c4471a0  lw          $a0, 0x71A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24915Cu;
        goto label_24915c;
    }
    ctx->pc = 0x249154u;
    SET_GPR_U32(ctx, 31, 0x24915Cu);
    ctx->pc = 0x249158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249154u;
    // 0x249158: 0x8c4471a0  lw          $a0, 0x71A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170C88u, 0x249154u, 0x24915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24915Cu;
label_24915c:
    // 0x24915c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x24915cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_249160:
    // 0x249160: 0xc05c74e  jal         func_171D38
label_249164:
    if (ctx->pc == 0x249164u) {
        ctx->pc = 0x249164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249160u;
        // 0x249164: 0x8c4471a4  lw          $a0, 0x71A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249168u;
        goto label_249168;
    }
    ctx->pc = 0x249160u;
    SET_GPR_U32(ctx, 31, 0x249168u);
    ctx->pc = 0x249164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249160u;
    // 0x249164: 0x8c4471a4  lw          $a0, 0x71A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D38u, 0x249160u, 0x249168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249168u;
label_249168:
    // 0x249168: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x249168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_24916c:
    // 0x24916c: 0xc06115a  jal         func_184568
label_249170:
    if (ctx->pc == 0x249170u) {
        ctx->pc = 0x249170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24916Cu;
        // 0x249170: 0x8c4471a8  lw          $a0, 0x71A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249174u;
        goto label_249174;
    }
    ctx->pc = 0x24916Cu;
    SET_GPR_U32(ctx, 31, 0x249174u);
    ctx->pc = 0x249170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24916Cu;
    // 0x249170: 0x8c4471a8  lw          $a0, 0x71A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184568u, 0x24916Cu, 0x249174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249174u;
label_249174:
    // 0x249174: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x249174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_249178:
    // 0x249178: 0x8c4471ac  lw          $a0, 0x71AC($v0)
    ctx->pc = 0x249178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29100)));
label_24917c:
    // 0x24917c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_249180:
    if (ctx->pc == 0x249180u) {
        ctx->pc = 0x249180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24917Cu;
        // 0x249180: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249184u;
        goto label_249184;
    }
    ctx->pc = 0x24917Cu;
    {
        const bool branch_taken_0x24917c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24917Cu;
        // 0x249180: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24917c) {
            ctx->pc = 0x249190u;
            goto label_249190;
        }
    }
    ctx->pc = 0x249184u;
label_249184:
    // 0x249184: 0xc05e4de  jal         func_179378
label_249188:
    if (ctx->pc == 0x249188u) {
        ctx->pc = 0x24918Cu;
        goto label_24918c;
    }
    ctx->pc = 0x249184u;
    SET_GPR_U32(ctx, 31, 0x24918Cu);
    ctx->pc = 0x179378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179378u, 0x249184u, 0x24918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24918Cu;
label_24918c:
    // 0x24918c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x24918cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_249190:
    // 0x249190: 0x24705348  addiu       $s0, $v1, 0x5348
    ctx->pc = 0x249190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21320));
label_249194:
    // 0x249194: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x249194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_249198:
    // 0x249198: 0x10400271  beqz        $v0, . + 4 + (0x271 << 2)
label_24919c:
    if (ctx->pc == 0x24919Cu) {
        ctx->pc = 0x24919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249198u;
        // 0x24919c: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2491A0u;
        goto label_2491a0;
    }
    ctx->pc = 0x249198u;
    {
        const bool branch_taken_0x249198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249198u;
        // 0x24919c: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249198) {
            ctx->pc = 0x249B60u;
            goto label_249b60;
        }
    }
    ctx->pc = 0x2491A0u;
label_2491a0:
    // 0x2491a0: 0xc05152a  jal         func_1454A8
label_2491a4:
    if (ctx->pc == 0x2491A4u) {
        ctx->pc = 0x2491A8u;
        goto label_2491a8;
    }
    ctx->pc = 0x2491A0u;
    SET_GPR_U32(ctx, 31, 0x2491A8u);
    ctx->pc = 0x1454A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454A8u, 0x2491A0u, 0x2491A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2491A8u;
label_2491a8:
    // 0x2491a8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2491a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2491ac:
    // 0x2491ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2491acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2491b0:
    // 0x2491b0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2491b4:
    if (ctx->pc == 0x2491B4u) {
        ctx->pc = 0x2491B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491B0u;
        // 0x2491b4: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2491B8u;
        goto label_2491b8;
    }
    ctx->pc = 0x2491B0u;
    {
        const bool branch_taken_0x2491b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2491B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491B0u;
        // 0x2491b4: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491b0) {
            ctx->pc = 0x2491C4u;
            goto label_2491c4;
        }
    }
    ctx->pc = 0x2491B8u;
label_2491b8:
    // 0x2491b8: 0xc0a4f1a  jal         func_293C68
label_2491bc:
    if (ctx->pc == 0x2491BCu) {
        ctx->pc = 0x2491C0u;
        goto label_2491c0;
    }
    ctx->pc = 0x2491B8u;
    SET_GPR_U32(ctx, 31, 0x2491C0u);
    ctx->pc = 0x293C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293C68u, 0x2491B8u, 0x2491C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2491C0u;
label_2491c0:
    // 0x2491c0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2491c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2491c4:
    // 0x2491c4: 0x24500f50  addiu       $s0, $v0, 0xF50
    ctx->pc = 0x2491c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
label_2491c8:
    // 0x2491c8: 0x26110a50  addiu       $s1, $s0, 0xA50
    ctx->pc = 0x2491c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_2491cc:
    // 0x2491cc: 0x0  nop
    ctx->pc = 0x2491ccu;
    // NOP
label_2491d0:
    // 0x2491d0: 0xc05181e  jal         func_146078
label_2491d4:
    if (ctx->pc == 0x2491D4u) {
        ctx->pc = 0x2491D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491D0u;
        // 0x2491d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2491D8u;
        goto label_2491d8;
    }
    ctx->pc = 0x2491D0u;
    SET_GPR_U32(ctx, 31, 0x2491D8u);
    ctx->pc = 0x2491D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2491D0u;
    // 0x2491d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x2491D0u, 0x2491D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2491D8u;
label_2491d8:
    // 0x2491d8: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x2491d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_2491dc:
    // 0x2491dc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2491dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2491e0:
    // 0x2491e0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2491e4:
    if (ctx->pc == 0x2491E4u) {
        ctx->pc = 0x2491E8u;
        goto label_2491e8;
    }
    ctx->pc = 0x2491E0u;
    {
        const bool branch_taken_0x2491e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2491e0) {
            ctx->pc = 0x2491D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2491d0;
        }
    }
    ctx->pc = 0x2491E8u;
label_2491e8:
    // 0x2491e8: 0x26905348  addiu       $s0, $s4, 0x5348
    ctx->pc = 0x2491e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 21320));
label_2491ec:
    // 0x2491ec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2491ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2491f0:
    // 0x2491f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2491f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2491f4:
    // 0x2491f4: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
label_2491f8:
    if (ctx->pc == 0x2491F8u) {
        ctx->pc = 0x2491F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491F4u;
        // 0x2491f8: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2491FCu;
        goto label_2491fc;
    }
    ctx->pc = 0x2491F4u;
    {
        const bool branch_taken_0x2491f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2491f4) {
            ctx->pc = 0x2491F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2491F4u;
            // 0x2491f8: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249208u;
            goto label_249208;
        }
    }
    ctx->pc = 0x2491FCu;
label_2491fc:
    // 0x2491fc: 0xc05b45c  jal         func_16D170
label_249200:
    if (ctx->pc == 0x249200u) {
        ctx->pc = 0x249204u;
        goto label_249204;
    }
    ctx->pc = 0x2491FCu;
    SET_GPR_U32(ctx, 31, 0x249204u);
    ctx->pc = 0x16D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D170u, 0x2491FCu, 0x249204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249204u;
label_249204:
    // 0x249204: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x249204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_249208:
    // 0x249208: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
label_24920c:
    if (ctx->pc == 0x24920Cu) {
        ctx->pc = 0x24920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249208u;
        // 0x24920c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249210u;
        goto label_249210;
    }
    ctx->pc = 0x249208u;
    {
        const bool branch_taken_0x249208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x249208) {
            ctx->pc = 0x24920Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249208u;
            // 0x24920c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24921Cu;
            goto label_24921c;
        }
    }
    ctx->pc = 0x249210u;
label_249210:
    // 0x249210: 0xc0a4eca  jal         func_293B28
label_249214:
    if (ctx->pc == 0x249214u) {
        ctx->pc = 0x249214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249210u;
        // 0x249214: 0x8e4404f4  lw          $a0, 0x4F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249218u;
        goto label_249218;
    }
    ctx->pc = 0x249210u;
    SET_GPR_U32(ctx, 31, 0x249218u);
    ctx->pc = 0x249214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249210u;
    // 0x249214: 0x8e4404f4  lw          $a0, 0x4F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293B28u, 0x249210u, 0x249218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249218u;
label_249218:
    // 0x249218: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x249218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_24921c:
    // 0x24921c: 0x14510012  bne         $v0, $s1, . + 4 + (0x12 << 2)
label_249220:
    if (ctx->pc == 0x249220u) {
        ctx->pc = 0x249220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24921Cu;
        // 0x249220: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249224u;
        goto label_249224;
    }
    ctx->pc = 0x24921Cu;
    {
        const bool branch_taken_0x24921c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x249220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24921Cu;
        // 0x249220: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24921c) {
            ctx->pc = 0x249268u;
            goto label_249268;
        }
    }
    ctx->pc = 0x249224u;
label_249224:
    // 0x249224: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x249224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249228:
    // 0x249228: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x249228u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_24922c:
    // 0x24922c: 0x0  nop
    ctx->pc = 0x24922cu;
    // NOP
label_249230:
    // 0x249230: 0xc0e402c  jal         func_3900B0
label_249234:
    if (ctx->pc == 0x249234u) {
        ctx->pc = 0x249234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249230u;
        // 0x249234: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249238u;
        goto label_249238;
    }
    ctx->pc = 0x249230u;
    SET_GPR_U32(ctx, 31, 0x249238u);
    ctx->pc = 0x249234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249230u;
    // 0x249234: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x249230u, 0x249238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249238u;
label_249238:
    // 0x249238: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24923c:
    if (ctx->pc == 0x24923Cu) {
        ctx->pc = 0x24923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249238u;
        // 0x24923c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249240u;
        goto label_249240;
    }
    ctx->pc = 0x249238u;
    {
        const bool branch_taken_0x249238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249238u;
        // 0x24923c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249238) {
            ctx->pc = 0x24924Cu;
            goto label_24924c;
        }
    }
    ctx->pc = 0x249240u;
label_249240:
    // 0x249240: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x249240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249244:
    // 0x249244: 0xc08ef5e  jal         func_23BD78
label_249248:
    if (ctx->pc == 0x249248u) {
        ctx->pc = 0x249248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249244u;
        // 0x249248: 0xc46c02cc  lwc1        $f12, 0x2CC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24924Cu;
        goto label_24924c;
    }
    ctx->pc = 0x249244u;
    SET_GPR_U32(ctx, 31, 0x24924Cu);
    ctx->pc = 0x249248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249244u;
    // 0x249248: 0xc46c02cc  lwc1        $f12, 0x2CC($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD78u, 0x249244u, 0x24924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24924Cu;
label_24924c:
    // 0x24924c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24924cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_249250:
    // 0x249250: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x249250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
label_249254:
    // 0x249254: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_249258:
    if (ctx->pc == 0x249258u) {
        ctx->pc = 0x249258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249254u;
        // 0x249258: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24925Cu;
        goto label_24925c;
    }
    ctx->pc = 0x249254u;
    {
        const bool branch_taken_0x249254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249254u;
        // 0x249258: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249254) {
            ctx->pc = 0x249230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249230;
        }
    }
    ctx->pc = 0x24925Cu;
label_24925c:
    // 0x24925c: 0xc04155c  jal         func_105570
label_249260:
    if (ctx->pc == 0x249260u) {
        ctx->pc = 0x249264u;
        goto label_249264;
    }
    ctx->pc = 0x24925Cu;
    SET_GPR_U32(ctx, 31, 0x249264u);
    ctx->pc = 0x105570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105570u, 0x24925Cu, 0x249264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249264u;
label_249264:
    // 0x249264: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x249264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_249268:
    // 0x249268: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x249268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_24926c:
    // 0x24926c: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x24926cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_249270:
    // 0x249270: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_249274:
    if (ctx->pc == 0x249274u) {
        ctx->pc = 0x249274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249270u;
        // 0x249274: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249278u;
        goto label_249278;
    }
    ctx->pc = 0x249270u;
    {
        const bool branch_taken_0x249270 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x249274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249270u;
        // 0x249274: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249270) {
            ctx->pc = 0x24928Cu;
            goto label_24928c;
        }
    }
    ctx->pc = 0x249278u;
label_249278:
    // 0x249278: 0xc0e409a  jal         func_390268
label_24927c:
    if (ctx->pc == 0x24927Cu) {
        ctx->pc = 0x24927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249278u;
        // 0x24927c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249280u;
        goto label_249280;
    }
    ctx->pc = 0x249278u;
    SET_GPR_U32(ctx, 31, 0x249280u);
    ctx->pc = 0x24927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249278u;
    // 0x24927c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x249278u, 0x249280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249280u;
label_249280:
    // 0x249280: 0xc087502  jal         func_21D408
label_249284:
    if (ctx->pc == 0x249284u) {
        ctx->pc = 0x249284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249280u;
        // 0x249284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249288u;
        goto label_249288;
    }
    ctx->pc = 0x249280u;
    SET_GPR_U32(ctx, 31, 0x249288u);
    ctx->pc = 0x249284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249280u;
    // 0x249284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x249280u, 0x249288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249288u;
label_249288:
    // 0x249288: 0x8c53020c  lw          $s3, 0x20C($v0)
    ctx->pc = 0x249288u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_24928c:
    // 0x24928c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24928cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_249290:
    // 0x249290: 0xc103840  jal         func_40E100
label_249294:
    if (ctx->pc == 0x249294u) {
        ctx->pc = 0x249294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249290u;
        // 0x249294: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249298u;
        goto label_249298;
    }
    ctx->pc = 0x249290u;
    SET_GPR_U32(ctx, 31, 0x249298u);
    ctx->pc = 0x249294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249290u;
    // 0x249294: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E100u, 0x249290u, 0x249298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249298u;
label_249298:
    // 0x249298: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x249298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_24929c:
    // 0x24929c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24929cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2492a0:
    // 0x2492a0: 0x0  nop
    ctx->pc = 0x2492a0u;
    // NOP
label_2492a4:
    // 0x2492a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2492a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2492a8:
    // 0x2492a8: 0x0  nop
    ctx->pc = 0x2492a8u;
    // NOP
label_2492ac:
    // 0x2492ac: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_2492b0:
    if (ctx->pc == 0x2492B0u) {
        ctx->pc = 0x2492B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492ACu;
        // 0x2492b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2492B4u;
        goto label_2492b4;
    }
    ctx->pc = 0x2492ACu;
    {
        const bool branch_taken_0x2492ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2492B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492ACu;
        // 0x2492b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2492ac) {
            ctx->pc = 0x2492FCu;
            goto label_2492fc;
        }
    }
    ctx->pc = 0x2492B4u;
label_2492b4:
    // 0x2492b4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2492b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2492b8:
    // 0x2492b8: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2492b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2492bc:
    // 0x2492bc: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_2492c0:
    if (ctx->pc == 0x2492C0u) {
        ctx->pc = 0x2492C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492BCu;
        // 0x2492c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2492C4u;
        goto label_2492c4;
    }
    ctx->pc = 0x2492BCu;
    {
        const bool branch_taken_0x2492bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2492C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492BCu;
        // 0x2492c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2492bc) {
            ctx->pc = 0x2492FCu;
            goto label_2492fc;
        }
    }
    ctx->pc = 0x2492C4u;
label_2492c4:
    // 0x2492c4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x2492c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_2492c8:
    // 0x2492c8: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x2492c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_2492cc:
    // 0x2492cc: 0x0  nop
    ctx->pc = 0x2492ccu;
    // NOP
label_2492d0:
    // 0x2492d0: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x2492d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_2492d4:
    // 0x2492d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2492d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2492d8:
    // 0x2492d8: 0xc0e409a  jal         func_390268
label_2492dc:
    if (ctx->pc == 0x2492DCu) {
        ctx->pc = 0x2492DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492D8u;
        // 0x2492dc: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2492E0u;
        goto label_2492e0;
    }
    ctx->pc = 0x2492D8u;
    SET_GPR_U32(ctx, 31, 0x2492E0u);
    ctx->pc = 0x2492DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2492D8u;
    // 0x2492dc: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2492D8u, 0x2492E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2492E0u;
label_2492e0:
    // 0x2492e0: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x2492e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_2492e4:
    // 0x2492e4: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x2492e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_2492e8:
    // 0x2492e8: 0xa460014a  sh          $zero, 0x14A($v1)
    ctx->pc = 0x2492e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 330), (uint16_t)GPR_U32(ctx, 0));
label_2492ec:
    // 0x2492ec: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x2492ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_2492f0:
    // 0x2492f0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2492f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2492f4:
    // 0x2492f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2492f8:
    if (ctx->pc == 0x2492F8u) {
        ctx->pc = 0x2492F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492F4u;
        // 0x2492f8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2492FCu;
        goto label_2492fc;
    }
    ctx->pc = 0x2492F4u;
    {
        const bool branch_taken_0x2492f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2492F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492F4u;
        // 0x2492f8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2492f4) {
            ctx->pc = 0x2492D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2492d0;
        }
    }
    ctx->pc = 0x2492FCu;
label_2492fc:
    // 0x2492fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2492fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249300:
    // 0x249300: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x249300u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_249304:
    // 0x249304: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x249304u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
label_249308:
    // 0x249308: 0x3c120061  lui         $s2, 0x61
    ctx->pc = 0x249308u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)97 << 16));
label_24930c:
    // 0x24930c: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x24930cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_249310:
    // 0x249310: 0xc0e402c  jal         func_3900B0
label_249314:
    if (ctx->pc == 0x249314u) {
        ctx->pc = 0x249314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249310u;
        // 0x249314: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249318u;
        goto label_249318;
    }
    ctx->pc = 0x249310u;
    SET_GPR_U32(ctx, 31, 0x249318u);
    ctx->pc = 0x249314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249310u;
    // 0x249314: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x249310u, 0x249318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249318u;
label_249318:
    // 0x249318: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x249318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24931c:
    // 0x24931c: 0x52000048  beql        $s0, $zero, . + 4 + (0x48 << 2)
label_249320:
    if (ctx->pc == 0x249320u) {
        ctx->pc = 0x249320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24931Cu;
        // 0x249320: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249324u;
        goto label_249324;
    }
    ctx->pc = 0x24931Cu;
    {
        const bool branch_taken_0x24931c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24931c) {
            ctx->pc = 0x249320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24931Cu;
            // 0x249320: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249440u;
            goto label_249440;
        }
    }
    ctx->pc = 0x249324u;
label_249324:
    // 0x249324: 0x8e0206c4  lw          $v0, 0x6C4($s0)
    ctx->pc = 0x249324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1732)));
label_249328:
    // 0x249328: 0x10560017  beq         $v0, $s6, . + 4 + (0x17 << 2)
label_24932c:
    if (ctx->pc == 0x24932Cu) {
        ctx->pc = 0x24932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249328u;
        // 0x24932c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249330u;
        goto label_249330;
    }
    ctx->pc = 0x249328u;
    {
        const bool branch_taken_0x249328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x24932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249328u;
        // 0x24932c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249328) {
            ctx->pc = 0x249388u;
            goto label_249388;
        }
    }
    ctx->pc = 0x249330u;
label_249330:
    // 0x249330: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x249330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_249334:
    // 0x249334: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x249334u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_249338:
    // 0x249338: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x249338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_24933c:
    // 0x24933c: 0x60f809  jalr        $v1
label_249340:
    if (ctx->pc == 0x249340u) {
        ctx->pc = 0x249340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24933Cu;
        // 0x249340: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249344u;
        goto label_249344;
    }
    ctx->pc = 0x24933Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x249344u);
        ctx->pc = 0x249340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24933Cu;
        // 0x249340: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24933Cu, 0x249344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249344u;
label_249344:
    // 0x249344: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x249344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_249348:
    // 0x249348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24934c:
    // 0x24934c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x24934cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_249350:
    // 0x249350: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x249350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_249354:
    // 0x249354: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x249354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_249358:
    // 0x249358: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x249358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_24935c:
    // 0x24935c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x24935cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_249360:
    // 0x249360: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x249360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249364:
    // 0x249364: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x249364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_249368:
    // 0x249368: 0xc08997c  jal         func_2265F0
label_24936c:
    if (ctx->pc == 0x24936Cu) {
        ctx->pc = 0x24936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249368u;
        // 0x24936c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x249370u;
        goto label_249370;
    }
    ctx->pc = 0x249368u;
    SET_GPR_U32(ctx, 31, 0x249370u);
    ctx->pc = 0x24936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249368u;
    // 0x24936c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x249368u, 0x249370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249370u;
label_249370:
    // 0x249370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_249374:
    if (ctx->pc == 0x249374u) {
        ctx->pc = 0x249374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249370u;
        // 0x249374: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249378u;
        goto label_249378;
    }
    ctx->pc = 0x249370u;
    {
        const bool branch_taken_0x249370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249370u;
        // 0x249374: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249370) {
            ctx->pc = 0x249388u;
            goto label_249388;
        }
    }
    ctx->pc = 0x249378u;
label_249378:
    // 0x249378: 0x8e0606c4  lw          $a2, 0x6C4($s0)
    ctx->pc = 0x249378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1732)));
label_24937c:
    // 0x24937c: 0x8c44cf14  lw          $a0, -0x30EC($v0)
    ctx->pc = 0x24937cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954772)));
label_249380:
    // 0x249380: 0xc0670fc  jal         func_19C3F0
label_249384:
    if (ctx->pc == 0x249384u) {
        ctx->pc = 0x249384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249380u;
        // 0x249384: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249388u;
        goto label_249388;
    }
    ctx->pc = 0x249380u;
    SET_GPR_U32(ctx, 31, 0x249388u);
    ctx->pc = 0x249384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249380u;
    // 0x249384: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C3F0u, 0x249380u, 0x249388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249388u;
label_249388:
    // 0x249388: 0xc087502  jal         func_21D408
label_24938c:
    if (ctx->pc == 0x24938Cu) {
        ctx->pc = 0x24938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249388u;
        // 0x24938c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249390u;
        goto label_249390;
    }
    ctx->pc = 0x249388u;
    SET_GPR_U32(ctx, 31, 0x249390u);
    ctx->pc = 0x24938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249388u;
    // 0x24938c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x249388u, 0x249390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249390u;
label_249390:
    // 0x249390: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x249390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_249394:
    // 0x249394: 0x54730005  bnel        $v1, $s3, . + 4 + (0x5 << 2)
label_249398:
    if (ctx->pc == 0x249398u) {
        ctx->pc = 0x249398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249394u;
        // 0x249398: 0x820201b0  lb          $v0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24939Cu;
        goto label_24939c;
    }
    ctx->pc = 0x249394u;
    {
        const bool branch_taken_0x249394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x249394) {
            ctx->pc = 0x249398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249394u;
            // 0x249398: 0x820201b0  lb          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2493ACu;
            goto label_2493ac;
        }
    }
    ctx->pc = 0x24939Cu;
label_24939c:
    // 0x24939c: 0x26a40840  addiu       $a0, $s5, 0x840
    ctx->pc = 0x24939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2112));
label_2493a0:
    // 0x2493a0: 0xc06ce58  jal         func_1B3960
label_2493a4:
    if (ctx->pc == 0x2493A4u) {
        ctx->pc = 0x2493A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493A0u;
        // 0x2493a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2493A8u;
        goto label_2493a8;
    }
    ctx->pc = 0x2493A0u;
    SET_GPR_U32(ctx, 31, 0x2493A8u);
    ctx->pc = 0x2493A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2493A0u;
    // 0x2493a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3960u, 0x2493A0u, 0x2493A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493A8u;
label_2493a8:
    // 0x2493a8: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2493a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_2493ac:
    // 0x2493ac: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2493acu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2493b0:
    // 0x2493b0: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_2493b4:
    if (ctx->pc == 0x2493B4u) {
        ctx->pc = 0x2493B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493B0u;
        // 0x2493b4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2493B8u;
        goto label_2493b8;
    }
    ctx->pc = 0x2493B0u;
    {
        const bool branch_taken_0x2493b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2493b0) {
            ctx->pc = 0x2493B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2493B0u;
            // 0x2493b4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249440u;
            goto label_249440;
        }
    }
    ctx->pc = 0x2493B8u;
label_2493b8:
    // 0x2493b8: 0xc0874fa  jal         func_21D3E8
label_2493bc:
    if (ctx->pc == 0x2493BCu) {
        ctx->pc = 0x2493BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493B8u;
        // 0x2493bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2493C0u;
        goto label_2493c0;
    }
    ctx->pc = 0x2493B8u;
    SET_GPR_U32(ctx, 31, 0x2493C0u);
    ctx->pc = 0x2493BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2493B8u;
    // 0x2493bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2493B8u, 0x2493C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493C0u;
label_2493c0:
    // 0x2493c0: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_2493c4:
    if (ctx->pc == 0x2493C4u) {
        ctx->pc = 0x2493C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493C0u;
        // 0x2493c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2493C8u;
        goto label_2493c8;
    }
    ctx->pc = 0x2493C0u;
    {
        const bool branch_taken_0x2493c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2493c0) {
            ctx->pc = 0x2493C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2493C0u;
            // 0x2493c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249440u;
            goto label_249440;
        }
    }
    ctx->pc = 0x2493C8u;
label_2493c8:
    // 0x2493c8: 0xc087502  jal         func_21D408
label_2493cc:
    if (ctx->pc == 0x2493CCu) {
        ctx->pc = 0x2493CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493C8u;
        // 0x2493cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2493D0u;
        goto label_2493d0;
    }
    ctx->pc = 0x2493C8u;
    SET_GPR_U32(ctx, 31, 0x2493D0u);
    ctx->pc = 0x2493CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2493C8u;
    // 0x2493cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2493C8u, 0x2493D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493D0u;
label_2493d0:
    // 0x2493d0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2493d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2493d4:
    // 0x2493d4: 0x8c6205e8  lw          $v0, 0x5E8($v1)
    ctx->pc = 0x2493d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1512)));
label_2493d8:
    // 0x2493d8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2493dc:
    if (ctx->pc == 0x2493DCu) {
        ctx->pc = 0x2493DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493D8u;
        // 0x2493dc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2493E0u;
        goto label_2493e0;
    }
    ctx->pc = 0x2493D8u;
    {
        const bool branch_taken_0x2493d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2493DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493D8u;
        // 0x2493dc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2493d8) {
            ctx->pc = 0x24943Cu;
            goto label_24943c;
        }
    }
    ctx->pc = 0x2493E0u;
label_2493e0:
    // 0x2493e0: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2493e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2493e4:
    // 0x2493e4: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x2493e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_2493e8:
    // 0x2493e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2493ec:
    if (ctx->pc == 0x2493ECu) {
        ctx->pc = 0x2493ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493E8u;
        // 0x2493ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2493F0u;
        goto label_2493f0;
    }
    ctx->pc = 0x2493E8u;
    {
        const bool branch_taken_0x2493e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2493ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493E8u;
        // 0x2493ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2493e8) {
            ctx->pc = 0x2493FCu;
            goto label_2493fc;
        }
    }
    ctx->pc = 0x2493F0u;
label_2493f0:
    // 0x2493f0: 0xc107444  jal         func_41D110
label_2493f4:
    if (ctx->pc == 0x2493F4u) {
        ctx->pc = 0x2493F8u;
        goto label_2493f8;
    }
    ctx->pc = 0x2493F0u;
    SET_GPR_U32(ctx, 31, 0x2493F8u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x2493F0u, 0x2493F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493F8u;
label_2493f8:
    // 0x2493f8: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2493f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2493fc:
    // 0x2493fc: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_249400:
    if (ctx->pc == 0x249400u) {
        ctx->pc = 0x249400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493FCu;
        // 0x249400: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249404u;
        goto label_249404;
    }
    ctx->pc = 0x2493FCu;
    {
        const bool branch_taken_0x2493fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2493fc) {
            ctx->pc = 0x249400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2493FCu;
            // 0x249400: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249440u;
            goto label_249440;
        }
    }
    ctx->pc = 0x249404u;
label_249404:
    // 0x249404: 0xc073a8e  jal         func_1CEA38
label_249408:
    if (ctx->pc == 0x249408u) {
        ctx->pc = 0x249408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249404u;
        // 0x249408: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24940Cu;
        goto label_24940c;
    }
    ctx->pc = 0x249404u;
    SET_GPR_U32(ctx, 31, 0x24940Cu);
    ctx->pc = 0x249408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249404u;
    // 0x249408: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x249404u, 0x24940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24940Cu;
label_24940c:
    // 0x24940c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_249410:
    if (ctx->pc == 0x249410u) {
        ctx->pc = 0x249410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24940Cu;
        // 0x249410: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249414u;
        goto label_249414;
    }
    ctx->pc = 0x24940Cu;
    {
        const bool branch_taken_0x24940c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24940Cu;
        // 0x249410: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24940c) {
            ctx->pc = 0x24943Cu;
            goto label_24943c;
        }
    }
    ctx->pc = 0x249414u;
label_249414:
    // 0x249414: 0x8c45489c  lw          $a1, 0x489C($v0)
    ctx->pc = 0x249414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_249418:
    // 0x249418: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x249418u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_24941c:
    // 0x24941c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x24941cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_249420:
    // 0x249420: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_249424:
    if (ctx->pc == 0x249424u) {
        ctx->pc = 0x249424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249420u;
        // 0x249424: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249428u;
        goto label_249428;
    }
    ctx->pc = 0x249420u;
    {
        const bool branch_taken_0x249420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249420u;
        // 0x249424: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249420) {
            ctx->pc = 0x24943Cu;
            goto label_24943c;
        }
    }
    ctx->pc = 0x249428u;
label_249428:
    // 0x249428: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x249428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_24942c:
    // 0x24942c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x24942cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_249430:
    // 0x249430: 0x26449250  addiu       $a0, $s2, -0x6DB0
    ctx->pc = 0x249430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939216));
label_249434:
    // 0x249434: 0xc07387a  jal         func_1CE1E8
label_249438:
    if (ctx->pc == 0x249438u) {
        ctx->pc = 0x249438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249434u;
        // 0x249438: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24943Cu;
        goto label_24943c;
    }
    ctx->pc = 0x249434u;
    SET_GPR_U32(ctx, 31, 0x24943Cu);
    ctx->pc = 0x249438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249434u;
    // 0x249438: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x249434u, 0x24943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24943Cu;
label_24943c:
    // 0x24943c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24943cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_249440:
    // 0x249440: 0x2a22003c  slti        $v0, $s1, 0x3C
    ctx->pc = 0x249440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)60) ? 1 : 0);
label_249444:
    // 0x249444: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_249448:
    if (ctx->pc == 0x249448u) {
        ctx->pc = 0x249448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249444u;
        // 0x249448: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24944Cu;
        goto label_24944c;
    }
    ctx->pc = 0x249444u;
    {
        const bool branch_taken_0x249444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249444u;
        // 0x249448: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249444) {
            ctx->pc = 0x249310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249310;
        }
    }
    ctx->pc = 0x24944Cu;
label_24944c:
    // 0x24944c: 0x26825348  addiu       $v0, $s4, 0x5348
    ctx->pc = 0x24944cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21320));
label_249450:
    // 0x249450: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x249450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249454:
    // 0x249454: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x249454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_249458:
    // 0x249458: 0x1464001e  bne         $v1, $a0, . + 4 + (0x1E << 2)
label_24945c:
    if (ctx->pc == 0x24945Cu) {
        ctx->pc = 0x24945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249458u;
        // 0x24945c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249460u;
        goto label_249460;
    }
    ctx->pc = 0x249458u;
    {
        const bool branch_taken_0x249458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249458u;
        // 0x24945c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249458) {
            ctx->pc = 0x2494D4u;
            goto label_2494d4;
        }
    }
    ctx->pc = 0x249460u;
label_249460:
    // 0x249460: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x249460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249464:
    // 0x249464: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x249464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249468:
    // 0x249468: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x249468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_24946c:
    // 0x24946c: 0x0  nop
    ctx->pc = 0x24946cu;
    // NOP
label_249470:
    // 0x249470: 0xc0e402c  jal         func_3900B0
label_249474:
    if (ctx->pc == 0x249474u) {
        ctx->pc = 0x249474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249470u;
        // 0x249474: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249478u;
        goto label_249478;
    }
    ctx->pc = 0x249470u;
    SET_GPR_U32(ctx, 31, 0x249478u);
    ctx->pc = 0x249474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249470u;
    // 0x249474: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x249470u, 0x249478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249478u;
label_249478:
    // 0x249478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x249478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24947c:
    // 0x24947c: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_249480:
    if (ctx->pc == 0x249480u) {
        ctx->pc = 0x249480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24947Cu;
        // 0x249480: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249484u;
        goto label_249484;
    }
    ctx->pc = 0x24947Cu;
    {
        const bool branch_taken_0x24947c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24947c) {
            ctx->pc = 0x249480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24947Cu;
            // 0x249480: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2494C0u;
            goto label_2494c0;
        }
    }
    ctx->pc = 0x249484u;
label_249484:
    // 0x249484: 0xc08f5e4  jal         func_23D790
label_249488:
    if (ctx->pc == 0x249488u) {
        ctx->pc = 0x249488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249484u;
        // 0x249488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24948Cu;
        goto label_24948c;
    }
    ctx->pc = 0x249484u;
    SET_GPR_U32(ctx, 31, 0x24948Cu);
    ctx->pc = 0x249488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249484u;
    // 0x249488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D790u, 0x249484u, 0x24948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24948Cu;
label_24948c:
    // 0x24948c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_249490:
    if (ctx->pc == 0x249490u) {
        ctx->pc = 0x249494u;
        goto label_249494;
    }
    ctx->pc = 0x24948Cu;
    {
        const bool branch_taken_0x24948c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24948c) {
            ctx->pc = 0x2494B0u;
            goto label_2494b0;
        }
    }
    ctx->pc = 0x249494u;
label_249494:
    // 0x249494: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x249494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_249498:
    // 0x249498: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x249498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_24949c:
    // 0x24949c: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x24949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_2494a0:
    // 0x2494a0: 0x40f809  jalr        $v0
label_2494a4:
    if (ctx->pc == 0x2494A4u) {
        ctx->pc = 0x2494A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494A0u;
        // 0x2494a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2494A8u;
        goto label_2494a8;
    }
    ctx->pc = 0x2494A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2494A8u);
        ctx->pc = 0x2494A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494A0u;
        // 0x2494a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2494A0u, 0x2494A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2494A8u;
label_2494a8:
    // 0x2494a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2494ac:
    if (ctx->pc == 0x2494ACu) {
        ctx->pc = 0x2494ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494A8u;
        // 0x2494ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2494B0u;
        goto label_2494b0;
    }
    ctx->pc = 0x2494A8u;
    {
        const bool branch_taken_0x2494a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2494ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494A8u;
        // 0x2494ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494a8) {
            ctx->pc = 0x2494C0u;
            goto label_2494c0;
        }
    }
    ctx->pc = 0x2494B0u;
label_2494b0:
    // 0x2494b0: 0xc08ef28  jal         func_23BCA0
label_2494b4:
    if (ctx->pc == 0x2494B4u) {
        ctx->pc = 0x2494B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494B0u;
        // 0x2494b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2494B8u;
        goto label_2494b8;
    }
    ctx->pc = 0x2494B0u;
    SET_GPR_U32(ctx, 31, 0x2494B8u);
    ctx->pc = 0x2494B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2494B0u;
    // 0x2494b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x2494B0u, 0x2494B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2494B8u;
label_2494b8:
    // 0x2494b8: 0xa0520460  sb          $s2, 0x460($v0)
    ctx->pc = 0x2494b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1120), (uint8_t)GPR_U32(ctx, 18));
label_2494bc:
    // 0x2494bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2494bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2494c0:
    // 0x2494c0: 0x2a22003c  slti        $v0, $s1, 0x3C
    ctx->pc = 0x2494c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)60) ? 1 : 0);
label_2494c4:
    // 0x2494c4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_2494c8:
    if (ctx->pc == 0x2494C8u) {
        ctx->pc = 0x2494C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494C4u;
        // 0x2494c8: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2494CCu;
        goto label_2494cc;
    }
    ctx->pc = 0x2494C4u;
    {
        const bool branch_taken_0x2494c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2494C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494C4u;
        // 0x2494c8: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494c4) {
            ctx->pc = 0x249470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249470;
        }
    }
    ctx->pc = 0x2494CCu;
label_2494cc:
    // 0x2494cc: 0x26825348  addiu       $v0, $s4, 0x5348
    ctx->pc = 0x2494ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21320));
label_2494d0:
    // 0x2494d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2494d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2494d4:
    // 0x2494d4: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2494d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2494d8:
    // 0x2494d8: 0x1483019a  bne         $a0, $v1, . + 4 + (0x19A << 2)
label_2494dc:
    if (ctx->pc == 0x2494DCu) {
        ctx->pc = 0x2494DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494D8u;
        // 0x2494dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2494E0u;
        goto label_2494e0;
    }
    ctx->pc = 0x2494D8u;
    {
        const bool branch_taken_0x2494d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2494DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494D8u;
        // 0x2494dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494d8) {
            ctx->pc = 0x249B44u;
            goto label_249b44;
        }
    }
    ctx->pc = 0x2494E0u;
label_2494e0:
    // 0x2494e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2494e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2494e4:
    // 0x2494e4: 0x8c6204fc  lw          $v0, 0x4FC($v1)
    ctx->pc = 0x2494e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1276)));
label_2494e8:
    // 0x2494e8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_2494ec:
    if (ctx->pc == 0x2494ECu) {
        ctx->pc = 0x2494ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494E8u;
        // 0x2494ec: 0xac6404fc  sw          $a0, 0x4FC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1276), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2494F0u;
        goto label_2494f0;
    }
    ctx->pc = 0x2494E8u;
    {
        const bool branch_taken_0x2494e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2494e8) {
            ctx->pc = 0x2494ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2494E8u;
            // 0x2494ec: 0xac6404fc  sw          $a0, 0x4FC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 1276), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2494F4u;
            goto label_2494f4;
        }
    }
    ctx->pc = 0x2494F0u;
label_2494f0:
    // 0x2494f0: 0xac6004fc  sw          $zero, 0x4FC($v1)
    ctx->pc = 0x2494f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1276), GPR_U32(ctx, 0));
label_2494f4:
    // 0x2494f4: 0x241e003b  addiu       $fp, $zero, 0x3B
    ctx->pc = 0x2494f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_2494f8:
    // 0x2494f8: 0x8c6204fc  lw          $v0, 0x4FC($v1)
    ctx->pc = 0x2494f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1276)));
label_2494fc:
    // 0x2494fc: 0x10000186  b           . + 4 + (0x186 << 2)
label_249500:
    if (ctx->pc == 0x249500u) {
        ctx->pc = 0x249500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494FCu;
        // 0x249500: 0x2f00b  movn        $fp, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249504u;
        goto label_249504;
    }
    ctx->pc = 0x2494FCu;
    {
        const bool branch_taken_0x2494fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494FCu;
        // 0x249500: 0x2f00b  movn        $fp, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494fc) {
            ctx->pc = 0x249B18u;
            goto label_249b18;
        }
    }
    ctx->pc = 0x249504u;
label_249504:
    // 0x249504: 0x0  nop
    ctx->pc = 0x249504u;
    // NOP
label_249508:
    // 0x249508: 0xc0e402c  jal         func_3900B0
label_24950c:
    if (ctx->pc == 0x24950Cu) {
        ctx->pc = 0x24950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249508u;
        // 0x24950c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249510u;
        goto label_249510;
    }
    ctx->pc = 0x249508u;
    SET_GPR_U32(ctx, 31, 0x249510u);
    ctx->pc = 0x24950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249508u;
    // 0x24950c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x249508u, 0x249510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249510u;
label_249510:
    // 0x249510: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x249510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249514:
    // 0x249514: 0x1220017c  beqz        $s1, . + 4 + (0x17C << 2)
label_249518:
    if (ctx->pc == 0x249518u) {
        ctx->pc = 0x249518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249514u;
        // 0x249518: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24951Cu;
        goto label_24951c;
    }
    ctx->pc = 0x249514u;
    {
        const bool branch_taken_0x249514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x249518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249514u;
        // 0x249518: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249514) {
            ctx->pc = 0x249B08u;
            goto label_249b08;
        }
    }
    ctx->pc = 0x24951Cu;
label_24951c:
    // 0x24951c: 0x8e3700d4  lw          $s7, 0xD4($s1)
    ctx->pc = 0x24951cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_249520:
    // 0x249520: 0x12e0017a  beqz        $s7, . + 4 + (0x17A << 2)
label_249524:
    if (ctx->pc == 0x249524u) {
        ctx->pc = 0x249524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249520u;
        // 0x249524: 0x8c6204fc  lw          $v0, 0x4FC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249528u;
        goto label_249528;
    }
    ctx->pc = 0x249520u;
    {
        const bool branch_taken_0x249520 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x249524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249520u;
        // 0x249524: 0x8c6204fc  lw          $v0, 0x4FC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249520) {
            ctx->pc = 0x249B0Cu;
            goto label_249b0c;
        }
    }
    ctx->pc = 0x249528u;
label_249528:
    // 0x249528: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x249528u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_24952c:
    // 0x24952c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24952cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_249530:
    // 0x249530: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x249530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_249534:
    // 0x249534: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x249534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_249538:
    // 0x249538: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
label_24953c:
    if (ctx->pc == 0x24953Cu) {
        ctx->pc = 0x24953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249538u;
        // 0x24953c: 0x8c6204fc  lw          $v0, 0x4FC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249540u;
        goto label_249540;
    }
    ctx->pc = 0x249538u;
    {
        const bool branch_taken_0x249538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249538u;
        // 0x24953c: 0x8c6204fc  lw          $v0, 0x4FC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249538) {
            ctx->pc = 0x249B0Cu;
            goto label_249b0c;
        }
    }
    ctx->pc = 0x249540u;
label_249540:
    // 0x249540: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x249540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_249544:
    // 0x249544: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x249544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
label_249548:
    // 0x249548: 0xc08997c  jal         func_2265F0
label_24954c:
    if (ctx->pc == 0x24954Cu) {
        ctx->pc = 0x24954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249548u;
        // 0x24954c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249550u;
        goto label_249550;
    }
    ctx->pc = 0x249548u;
    SET_GPR_U32(ctx, 31, 0x249550u);
    ctx->pc = 0x24954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249548u;
    // 0x24954c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x249548u, 0x249550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249550u;
label_249550:
    // 0x249550: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_249554:
    if (ctx->pc == 0x249554u) {
        ctx->pc = 0x249558u;
        goto label_249558;
    }
    ctx->pc = 0x249550u;
    {
        const bool branch_taken_0x249550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249550) {
            ctx->pc = 0x2495B4u;
            goto label_2495b4;
        }
    }
    ctx->pc = 0x249558u;
label_249558:
    // 0x249558: 0xc08a0f2  jal         func_2283C8
label_24955c:
    if (ctx->pc == 0x24955Cu) {
        ctx->pc = 0x24955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249558u;
        // 0x24955c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249560u;
        goto label_249560;
    }
    ctx->pc = 0x249558u;
    SET_GPR_U32(ctx, 31, 0x249560u);
    ctx->pc = 0x24955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249558u;
    // 0x24955c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283C8u, 0x249558u, 0x249560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249560u;
label_249560:
    // 0x249560: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_249564:
    if (ctx->pc == 0x249564u) {
        ctx->pc = 0x249568u;
        goto label_249568;
    }
    ctx->pc = 0x249560u;
    {
        const bool branch_taken_0x249560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249560) {
            ctx->pc = 0x2495B4u;
            goto label_2495b4;
        }
    }
    ctx->pc = 0x249568u;
label_249568:
    // 0x249568: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x249568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_24956c:
    // 0x24956c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_249570:
    if (ctx->pc == 0x249570u) {
        ctx->pc = 0x249570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24956Cu;
        // 0x249570: 0x24830004  addiu       $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249574u;
        goto label_249574;
    }
    ctx->pc = 0x24956Cu;
    {
        const bool branch_taken_0x24956c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24956Cu;
        // 0x249570: 0x24830004  addiu       $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24956c) {
            ctx->pc = 0x2495A0u;
            goto label_2495a0;
        }
    }
    ctx->pc = 0x249574u;
label_249574:
    // 0x249574: 0x90640027  lbu         $a0, 0x27($v1)
    ctx->pc = 0x249574u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 39)));
label_249578:
    // 0x249578: 0x2c82000b  sltiu       $v0, $a0, 0xB
    ctx->pc = 0x249578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_24957c:
    // 0x24957c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_249580:
    if (ctx->pc == 0x249580u) {
        ctx->pc = 0x249580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24957Cu;
        // 0x249580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249584u;
        goto label_249584;
    }
    ctx->pc = 0x24957Cu;
    {
        const bool branch_taken_0x24957c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24957c) {
            ctx->pc = 0x249580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24957Cu;
            // 0x249580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2495A4u;
            goto label_2495a4;
        }
    }
    ctx->pc = 0x249584u;
label_249584:
    // 0x249584: 0x2482fff6  addiu       $v0, $a0, -0xA
    ctx->pc = 0x249584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967286));
label_249588:
    // 0x249588: 0xa0620027  sb          $v0, 0x27($v1)
    ctx->pc = 0x249588u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 39), (uint8_t)GPR_U32(ctx, 2));
label_24958c:
    // 0x24958c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x24958cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_249590:
    // 0x249590: 0xc137c02  jal         func_4DF008
label_249594:
    if (ctx->pc == 0x249594u) {
        ctx->pc = 0x249594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249590u;
        // 0x249594: 0x8c850024  lw          $a1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249598u;
        goto label_249598;
    }
    ctx->pc = 0x249590u;
    SET_GPR_U32(ctx, 31, 0x249598u);
    ctx->pc = 0x249594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249590u;
    // 0x249594: 0x8c850024  lw          $a1, 0x24($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF008u, 0x249590u, 0x249598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249598u;
label_249598:
    // 0x249598: 0x1000006b  b           . + 4 + (0x6B << 2)
label_24959c:
    if (ctx->pc == 0x24959Cu) {
        ctx->pc = 0x2495A0u;
        goto label_2495a0;
    }
    ctx->pc = 0x249598u;
    {
        const bool branch_taken_0x249598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249598) {
            ctx->pc = 0x249748u;
            goto label_249748;
        }
    }
    ctx->pc = 0x2495A0u;
label_2495a0:
    // 0x2495a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2495a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2495a4:
    // 0x2495a4: 0xc0871f2  jal         func_21C7C8
label_2495a8:
    if (ctx->pc == 0x2495A8u) {
        ctx->pc = 0x2495A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495A4u;
        // 0x2495a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2495ACu;
        goto label_2495ac;
    }
    ctx->pc = 0x2495A4u;
    SET_GPR_U32(ctx, 31, 0x2495ACu);
    ctx->pc = 0x2495A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2495A4u;
    // 0x2495a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C7C8u, 0x2495A4u, 0x2495ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2495ACu;
label_2495ac:
    // 0x2495ac: 0x10000156  b           . + 4 + (0x156 << 2)
label_2495b0:
    if (ctx->pc == 0x2495B0u) {
        ctx->pc = 0x2495B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495ACu;
        // 0x2495b0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2495B4u;
        goto label_2495b4;
    }
    ctx->pc = 0x2495ACu;
    {
        const bool branch_taken_0x2495ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495ACu;
        // 0x2495b0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495ac) {
            ctx->pc = 0x249B08u;
            goto label_249b08;
        }
    }
    ctx->pc = 0x2495B4u;
label_2495b4:
    // 0x2495b4: 0xc089f66  jal         func_227D98
label_2495b8:
    if (ctx->pc == 0x2495B8u) {
        ctx->pc = 0x2495B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495B4u;
        // 0x2495b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2495BCu;
        goto label_2495bc;
    }
    ctx->pc = 0x2495B4u;
    SET_GPR_U32(ctx, 31, 0x2495BCu);
    ctx->pc = 0x2495B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2495B4u;
    // 0x2495b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x2495B4u, 0x2495BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2495BCu;
label_2495bc:
    // 0x2495bc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2495c0:
    if (ctx->pc == 0x2495C0u) {
        ctx->pc = 0x2495C4u;
        goto label_2495c4;
    }
    ctx->pc = 0x2495BCu;
    {
        const bool branch_taken_0x2495bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2495bc) {
            ctx->pc = 0x249610u;
            goto label_249610;
        }
    }
    ctx->pc = 0x2495C4u;
label_2495c4:
    // 0x2495c4: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2495c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2495c8:
    // 0x2495c8: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2495c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
label_2495cc:
    // 0x2495cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2495ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2495d0:
    // 0x2495d0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2495d4:
    if (ctx->pc == 0x2495D4u) {
        ctx->pc = 0x2495D8u;
        goto label_2495d8;
    }
    ctx->pc = 0x2495D0u;
    {
        const bool branch_taken_0x2495d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2495d0) {
            ctx->pc = 0x249610u;
            goto label_249610;
        }
    }
    ctx->pc = 0x2495D8u;
label_2495d8:
    // 0x2495d8: 0xc08a0f2  jal         func_2283C8
label_2495dc:
    if (ctx->pc == 0x2495DCu) {
        ctx->pc = 0x2495DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495D8u;
        // 0x2495dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2495E0u;
        goto label_2495e0;
    }
    ctx->pc = 0x2495D8u;
    SET_GPR_U32(ctx, 31, 0x2495E0u);
    ctx->pc = 0x2495DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2495D8u;
    // 0x2495dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283C8u, 0x2495D8u, 0x2495E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2495E0u;
label_2495e0:
    // 0x2495e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2495e4:
    if (ctx->pc == 0x2495E4u) {
        ctx->pc = 0x2495E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495E0u;
        // 0x2495e4: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2495E8u;
        goto label_2495e8;
    }
    ctx->pc = 0x2495E0u;
    {
        const bool branch_taken_0x2495e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2495E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495E0u;
        // 0x2495e4: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495e0) {
            ctx->pc = 0x249610u;
            goto label_249610;
        }
    }
    ctx->pc = 0x2495E8u;
label_2495e8:
    // 0x2495e8: 0x8ee400f0  lw          $a0, 0xF0($s7)
    ctx->pc = 0x2495e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 240)));
label_2495ec:
    // 0x2495ec: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x2495ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2495f0:
    // 0x2495f0: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2495f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2495f4:
    // 0x2495f4: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2495f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2495f8:
    // 0x2495f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2495fc:
    if (ctx->pc == 0x2495FCu) {
        ctx->pc = 0x249600u;
        goto label_249600;
    }
    ctx->pc = 0x2495F8u;
    {
        const bool branch_taken_0x2495f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2495f8) {
            ctx->pc = 0x249610u;
            goto label_249610;
        }
    }
    ctx->pc = 0x249600u;
label_249600:
    // 0x249600: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x249600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_249604:
    // 0x249604: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x249604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_249608:
    // 0x249608: 0xc089974  jal         func_2265D0
label_24960c:
    if (ctx->pc == 0x24960Cu) {
        ctx->pc = 0x24960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249608u;
        // 0x24960c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249610u;
        goto label_249610;
    }
    ctx->pc = 0x249608u;
    SET_GPR_U32(ctx, 31, 0x249610u);
    ctx->pc = 0x24960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249608u;
    // 0x24960c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x249608u, 0x249610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249610u;
label_249610:
    // 0x249610: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x249610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_249614:
    // 0x249614: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x249614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_249618:
    // 0x249618: 0xc08997c  jal         func_2265F0
label_24961c:
    if (ctx->pc == 0x24961Cu) {
        ctx->pc = 0x24961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249618u;
        // 0x24961c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249620u;
        goto label_249620;
    }
    ctx->pc = 0x249618u;
    SET_GPR_U32(ctx, 31, 0x249620u);
    ctx->pc = 0x24961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249618u;
    // 0x24961c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x249618u, 0x249620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249620u;
label_249620:
    // 0x249620: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_249624:
    if (ctx->pc == 0x249624u) {
        ctx->pc = 0x249624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249620u;
        // 0x249624: 0x3c0500c1  lui         $a1, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249628u;
        goto label_249628;
    }
    ctx->pc = 0x249620u;
    {
        const bool branch_taken_0x249620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249620u;
        // 0x249624: 0x3c0500c1  lui         $a1, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249620) {
            ctx->pc = 0x24967Cu;
            goto label_24967c;
        }
    }
    ctx->pc = 0x249628u;
label_249628:
    // 0x249628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24962c:
    // 0x24962c: 0xc089998  jal         func_226660
label_249630:
    if (ctx->pc == 0x249630u) {
        ctx->pc = 0x249630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24962Cu;
        // 0x249630: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249634u;
        goto label_249634;
    }
    ctx->pc = 0x24962Cu;
    SET_GPR_U32(ctx, 31, 0x249634u);
    ctx->pc = 0x249630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24962Cu;
    // 0x249630: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x24962Cu, 0x249634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249634u;
label_249634:
    // 0x249634: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_249638:
    if (ctx->pc == 0x249638u) {
        ctx->pc = 0x24963Cu;
        goto label_24963c;
    }
    ctx->pc = 0x249634u;
    {
        const bool branch_taken_0x249634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249634) {
            ctx->pc = 0x24967Cu;
            goto label_24967c;
        }
    }
    ctx->pc = 0x24963Cu;
label_24963c:
    // 0x24963c: 0xc089fe4  jal         func_227F90
label_249640:
    if (ctx->pc == 0x249640u) {
        ctx->pc = 0x249640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24963Cu;
        // 0x249640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249644u;
        goto label_249644;
    }
    ctx->pc = 0x24963Cu;
    SET_GPR_U32(ctx, 31, 0x249644u);
    ctx->pc = 0x249640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24963Cu;
    // 0x249640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x24963Cu, 0x249644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249644u;
label_249644:
    // 0x249644: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_249648:
    if (ctx->pc == 0x249648u) {
        ctx->pc = 0x24964Cu;
        goto label_24964c;
    }
    ctx->pc = 0x249644u;
    {
        const bool branch_taken_0x249644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249644) {
            ctx->pc = 0x24967Cu;
            goto label_24967c;
        }
    }
    ctx->pc = 0x24964Cu;
label_24964c:
    // 0x24964c: 0xc095018  jal         func_254060
label_249650:
    if (ctx->pc == 0x249650u) {
        ctx->pc = 0x249650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24964Cu;
        // 0x249650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249654u;
        goto label_249654;
    }
    ctx->pc = 0x24964Cu;
    SET_GPR_U32(ctx, 31, 0x249654u);
    ctx->pc = 0x249650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24964Cu;
    // 0x249650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x24964Cu, 0x249654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249654u;
label_249654:
    // 0x249654: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x249654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
label_249658:
    // 0x249658: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24965c:
    if (ctx->pc == 0x24965Cu) {
        ctx->pc = 0x249660u;
        goto label_249660;
    }
    ctx->pc = 0x249658u;
    {
        const bool branch_taken_0x249658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249658) {
            ctx->pc = 0x24967Cu;
            goto label_24967c;
        }
    }
    ctx->pc = 0x249660u;
label_249660:
    // 0x249660: 0xc0899e8  jal         func_2267A0
label_249664:
    if (ctx->pc == 0x249664u) {
        ctx->pc = 0x249664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249660u;
        // 0x249664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249668u;
        goto label_249668;
    }
    ctx->pc = 0x249660u;
    SET_GPR_U32(ctx, 31, 0x249668u);
    ctx->pc = 0x249664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249660u;
    // 0x249664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x249660u, 0x249668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249668u;
label_249668:
    // 0x249668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24966c:
    // 0x24966c: 0xc099f92  jal         func_267E48
label_249670:
    if (ctx->pc == 0x249670u) {
        ctx->pc = 0x249670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24966Cu;
        // 0x249670: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249674u;
        goto label_249674;
    }
    ctx->pc = 0x24966Cu;
    SET_GPR_U32(ctx, 31, 0x249674u);
    ctx->pc = 0x249670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24966Cu;
    // 0x249670: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267E48u, 0x24966Cu, 0x249674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249674u;
label_249674:
    // 0x249674: 0x10000124  b           . + 4 + (0x124 << 2)
label_249678:
    if (ctx->pc == 0x249678u) {
        ctx->pc = 0x249678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249674u;
        // 0x249678: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24967Cu;
        goto label_24967c;
    }
    ctx->pc = 0x249674u;
    {
        const bool branch_taken_0x249674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249674u;
        // 0x249678: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249674) {
            ctx->pc = 0x249B08u;
            goto label_249b08;
        }
    }
    ctx->pc = 0x24967Cu;
label_24967c:
    // 0x24967c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x24967cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_249680:
    // 0x249680: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x249680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
label_249684:
    // 0x249684: 0xc08997c  jal         func_2265F0
label_249688:
    if (ctx->pc == 0x249688u) {
        ctx->pc = 0x249688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249684u;
        // 0x249688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24968Cu;
        goto label_24968c;
    }
    ctx->pc = 0x249684u;
    SET_GPR_U32(ctx, 31, 0x24968Cu);
    ctx->pc = 0x249688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249684u;
    // 0x249688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x249684u, 0x24968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24968Cu;
label_24968c:
    // 0x24968c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_249690:
    if (ctx->pc == 0x249690u) {
        ctx->pc = 0x249690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24968Cu;
        // 0x249690: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249694u;
        goto label_249694;
    }
    ctx->pc = 0x24968Cu;
    {
        const bool branch_taken_0x24968c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24968Cu;
        // 0x249690: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24968c) {
            ctx->pc = 0x249758u;
            goto label_249758;
        }
    }
    ctx->pc = 0x249694u;
label_249694:
    // 0x249694: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x249694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_249698:
    // 0x249698: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x249698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24969c:
    // 0x24969c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24969cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2496a0:
    // 0x2496a0: 0x40f809  jalr        $v0
label_2496a4:
    if (ctx->pc == 0x2496A4u) {
        ctx->pc = 0x2496A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496A0u;
        // 0x2496a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2496A8u;
        goto label_2496a8;
    }
    ctx->pc = 0x2496A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2496A8u);
        ctx->pc = 0x2496A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496A0u;
        // 0x2496a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2496A0u, 0x2496A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2496A8u;
label_2496a8:
    // 0x2496a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2496a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2496ac:
    // 0x2496ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2496acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2496b0:
    // 0x2496b0: 0xc06cad6  jal         func_1B2B58
label_2496b4:
    if (ctx->pc == 0x2496B4u) {
        ctx->pc = 0x2496B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496B0u;
        // 0x2496b4: 0x24440840  addiu       $a0, $v0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2496B8u;
        goto label_2496b8;
    }
    ctx->pc = 0x2496B0u;
    SET_GPR_U32(ctx, 31, 0x2496B8u);
    ctx->pc = 0x2496B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2496B0u;
    // 0x2496b4: 0x24440840  addiu       $a0, $v0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B58u, 0x2496B0u, 0x2496B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2496B8u;
label_2496b8:
    // 0x2496b8: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x2496b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2496bc:
    // 0x2496bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2496bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2496c0:
    // 0x2496c0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2496c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2496c4:
    // 0x2496c4: 0xc44dcc60  lwc1        $f13, -0x33A0($v0)
    ctx->pc = 0x2496c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2496c8:
    // 0x2496c8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2496c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2496cc:
    // 0x2496cc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2496ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2496d0:
    // 0x2496d0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2496d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2496d4:
    // 0x2496d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2496d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2496d8:
    // 0x2496d8: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2496d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2496dc:
    // 0x2496dc: 0xc0480e0  jal         func_120380
label_2496e0:
    if (ctx->pc == 0x2496E0u) {
        ctx->pc = 0x2496E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496DCu;
        // 0x2496e0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2496E4u;
        goto label_2496e4;
    }
    ctx->pc = 0x2496DCu;
    SET_GPR_U32(ctx, 31, 0x2496E4u);
    ctx->pc = 0x2496E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2496DCu;
    // 0x2496e0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120380u, 0x2496DCu, 0x2496E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2496E4u;
label_2496e4:
    // 0x2496e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2496e8:
    if (ctx->pc == 0x2496E8u) {
        ctx->pc = 0x2496E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496E4u;
        // 0x2496e8: 0x8e44b734  lw          $a0, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2496ECu;
        goto label_2496ec;
    }
    ctx->pc = 0x2496E4u;
    {
        const bool branch_taken_0x2496e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2496E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496E4u;
        // 0x2496e8: 0x8e44b734  lw          $a0, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496e4) {
            ctx->pc = 0x249704u;
            goto label_249704;
        }
    }
    ctx->pc = 0x2496ECu;
label_2496ec:
    // 0x2496ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2496ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2496f0:
    // 0x2496f0: 0x8c450790  lw          $a1, 0x790($v0)
    ctx->pc = 0x2496f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1936)));
label_2496f4:
    // 0x2496f4: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2496f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2496f8:
    // 0x2496f8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2496f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2496fc:
    // 0x2496fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2496fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_249700:
    // 0x249700: 0xac6200f0  sw          $v0, 0xF0($v1)
    ctx->pc = 0x249700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
label_249704:
    // 0x249704: 0x8e42b734  lw          $v0, -0x48CC($s2)
    ctx->pc = 0x249704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
label_249708:
    // 0x249708: 0x8ee300f0  lw          $v1, 0xF0($s7)
    ctx->pc = 0x249708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 240)));
label_24970c:
    // 0x24970c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24970cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_249710:
    // 0x249710: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x249710u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_249714:
    // 0x249714: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_249718:
    if (ctx->pc == 0x249718u) {
        ctx->pc = 0x249718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249714u;
        // 0x249718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24971Cu;
        goto label_24971c;
    }
    ctx->pc = 0x249714u;
    {
        const bool branch_taken_0x249714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249714u;
        // 0x249718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249714) {
            ctx->pc = 0x249748u;
            goto label_249748;
        }
    }
    ctx->pc = 0x24971Cu;
label_24971c:
    // 0x24971c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x24971cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_249720:
    // 0x249720: 0xc089998  jal         func_226660
label_249724:
    if (ctx->pc == 0x249724u) {
        ctx->pc = 0x249724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249720u;
        // 0x249724: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249728u;
        goto label_249728;
    }
    ctx->pc = 0x249720u;
    SET_GPR_U32(ctx, 31, 0x249728u);
    ctx->pc = 0x249724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249720u;
    // 0x249724: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x249720u, 0x249728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249728u;
label_249728:
    // 0x249728: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_24972c:
    if (ctx->pc == 0x24972Cu) {
        ctx->pc = 0x249730u;
        goto label_249730;
    }
    ctx->pc = 0x249728u;
    {
        const bool branch_taken_0x249728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249728) {
            ctx->pc = 0x249748u;
            goto label_249748;
        }
    }
    ctx->pc = 0x249730u;
label_249730:
    // 0x249730: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x249730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_249734:
    // 0x249734: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x249734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
label_249738:
    // 0x249738: 0xc089974  jal         func_2265D0
label_24973c:
    if (ctx->pc == 0x24973Cu) {
        ctx->pc = 0x24973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249738u;
        // 0x24973c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249740u;
        goto label_249740;
    }
    ctx->pc = 0x249738u;
    SET_GPR_U32(ctx, 31, 0x249740u);
    ctx->pc = 0x24973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249738u;
    // 0x24973c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x249738u, 0x249740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249740u;
label_249740:
    // 0x249740: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_249744:
    if (ctx->pc == 0x249744u) {
        ctx->pc = 0x249744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249740u;
        // 0x249744: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249748u;
        goto label_249748;
    }
    ctx->pc = 0x249740u;
    {
        const bool branch_taken_0x249740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249740u;
        // 0x249744: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249740) {
            ctx->pc = 0x249B08u;
            goto label_249b08;
        }
    }
    ctx->pc = 0x249748u;
label_249748:
    // 0x249748: 0xc095bca  jal         func_256F28
label_24974c:
    if (ctx->pc == 0x24974Cu) {
        ctx->pc = 0x24974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249748u;
        // 0x24974c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249750u;
        goto label_249750;
    }
    ctx->pc = 0x249748u;
    SET_GPR_U32(ctx, 31, 0x249750u);
    ctx->pc = 0x24974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249748u;
    // 0x24974c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F28u, 0x249748u, 0x249750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249750u;
label_249750:
    // 0x249750: 0x100000ed  b           . + 4 + (0xED << 2)
label_249754:
    if (ctx->pc == 0x249754u) {
        ctx->pc = 0x249754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249750u;
        // 0x249754: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249758u;
        goto label_249758;
    }
    ctx->pc = 0x249750u;
    {
        const bool branch_taken_0x249750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249750u;
        // 0x249754: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249750) {
            ctx->pc = 0x249B08u;
            goto label_249b08;
        }
    }
    ctx->pc = 0x249758u;
label_249758:
    // 0x249758: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x249758u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_24975c:
    // 0x24975c: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x24975cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
label_249760:
    // 0x249760: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x249760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_249764:
    // 0x249764: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_249768:
    if (ctx->pc == 0x249768u) {
        ctx->pc = 0x249768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249764u;
        // 0x249768: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24976Cu;
        goto label_24976c;
    }
    ctx->pc = 0x249764u;
    {
        const bool branch_taken_0x249764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249764u;
        // 0x249768: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249764) {
            ctx->pc = 0x249860u;
            goto label_249860;
        }
    }
    ctx->pc = 0x24976Cu;
label_24976c:
    // 0x24976c: 0xc089f76  jal         func_227DD8
label_249770:
    if (ctx->pc == 0x249770u) {
        ctx->pc = 0x249770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24976Cu;
        // 0x249770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249774u;
        goto label_249774;
    }
    ctx->pc = 0x24976Cu;
    SET_GPR_U32(ctx, 31, 0x249774u);
    ctx->pc = 0x249770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24976Cu;
    // 0x249770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x24976Cu, 0x249774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249774u;
label_249774:
    // 0x249774: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_249778:
    if (ctx->pc == 0x249778u) {
        ctx->pc = 0x249778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249774u;
        // 0x249778: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24977Cu;
        goto label_24977c;
    }
    ctx->pc = 0x249774u;
    {
        const bool branch_taken_0x249774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249774u;
        // 0x249778: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249774) {
            ctx->pc = 0x24985Cu;
            goto label_24985c;
        }
    }
    ctx->pc = 0x24977Cu;
label_24977c:
    // 0x24977c: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x24977cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_249780:
    // 0x249780: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x249780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_249784:
    // 0x249784: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x249784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_249788:
    // 0x249788: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x249788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_24978c:
    // 0x24978c: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x24978cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_249790:
    // 0x249790: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x249790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_249794:
    // 0x249794: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_249798:
    if (ctx->pc == 0x249798u) {
        ctx->pc = 0x249798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249794u;
        // 0x249798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24979Cu;
        goto label_24979c;
    }
    ctx->pc = 0x249794u;
    {
        const bool branch_taken_0x249794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249794u;
        // 0x249798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249794) {
            ctx->pc = 0x24985Cu;
            goto label_24985c;
        }
    }
    ctx->pc = 0x24979Cu;
label_24979c:
    // 0x24979c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x24979cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2497a0:
    // 0x2497a0: 0xc089998  jal         func_226660
label_2497a4:
    if (ctx->pc == 0x2497A4u) {
        ctx->pc = 0x2497A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497A0u;
        // 0x2497a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497A8u;
        goto label_2497a8;
    }
    ctx->pc = 0x2497A0u;
    SET_GPR_U32(ctx, 31, 0x2497A8u);
    ctx->pc = 0x2497A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2497A0u;
    // 0x2497a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2497A0u, 0x2497A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2497A8u;
label_2497a8:
    // 0x2497a8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_2497ac:
    if (ctx->pc == 0x2497ACu) {
        ctx->pc = 0x2497ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497A8u;
        // 0x2497ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497B0u;
        goto label_2497b0;
    }
    ctx->pc = 0x2497A8u;
    {
        const bool branch_taken_0x2497a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2497ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497A8u;
        // 0x2497ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497a8) {
            ctx->pc = 0x249860u;
            goto label_249860;
        }
    }
    ctx->pc = 0x2497B0u;
label_2497b0:
    // 0x2497b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2497b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2497b4:
    // 0x2497b4: 0x26300090  addiu       $s0, $s1, 0x90
    ctx->pc = 0x2497b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_2497b8:
    // 0x2497b8: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2497b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2497bc:
    // 0x2497bc: 0xc44dcc60  lwc1        $f13, -0x33A0($v0)
    ctx->pc = 0x2497bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2497c0:
    // 0x2497c0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2497c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2497c4:
    // 0x2497c4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2497c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2497c8:
    // 0x2497c8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2497c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2497cc:
    // 0x2497cc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2497ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2497d0:
    // 0x2497d0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2497d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2497d4:
    // 0x2497d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2497d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2497d8:
    // 0x2497d8: 0xc0480e0  jal         func_120380
label_2497dc:
    if (ctx->pc == 0x2497DCu) {
        ctx->pc = 0x2497DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497D8u;
        // 0x2497dc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497E0u;
        goto label_2497e0;
    }
    ctx->pc = 0x2497D8u;
    SET_GPR_U32(ctx, 31, 0x2497E0u);
    ctx->pc = 0x2497DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2497D8u;
    // 0x2497dc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120380u, 0x2497D8u, 0x2497E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2497E0u;
label_2497e0:
    // 0x2497e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2497e4:
    if (ctx->pc == 0x2497E4u) {
        ctx->pc = 0x2497E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497E0u;
        // 0x2497e4: 0x8e44b734  lw          $a0, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497E8u;
        goto label_2497e8;
    }
    ctx->pc = 0x2497E0u;
    {
        const bool branch_taken_0x2497e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2497E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497E0u;
        // 0x2497e4: 0x8e44b734  lw          $a0, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497e0) {
            ctx->pc = 0x249804u;
            goto label_249804;
        }
    }
    ctx->pc = 0x2497E8u;
label_2497e8:
    // 0x2497e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2497e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2497ec:
    // 0x2497ec: 0x8c450794  lw          $a1, 0x794($v0)
    ctx->pc = 0x2497ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1940)));
label_2497f0:
    // 0x2497f0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2497f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2497f4:
    // 0x2497f4: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x2497f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2497f8:
    // 0x2497f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2497f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2497fc:
    // 0x2497fc: 0x10000017  b           . + 4 + (0x17 << 2)
label_249800:
    if (ctx->pc == 0x249800u) {
        ctx->pc = 0x249800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497FCu;
        // 0x249800: 0xac4300f0  sw          $v1, 0xF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249804u;
        goto label_249804;
    }
    ctx->pc = 0x2497FCu;
    {
        const bool branch_taken_0x2497fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497FCu;
        // 0x249800: 0xac4300f0  sw          $v1, 0xF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497fc) {
            ctx->pc = 0x24985Cu;
            goto label_24985c;
        }
    }
    ctx->pc = 0x249804u;
label_249804:
    // 0x249804: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x249804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_249808:
    // 0x249808: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x249808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
label_24980c:
    // 0x24980c: 0xc089974  jal         func_2265D0
label_249810:
    if (ctx->pc == 0x249810u) {
        ctx->pc = 0x249810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24980Cu;
        // 0x249810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249814u;
        goto label_249814;
    }
    ctx->pc = 0x24980Cu;
    SET_GPR_U32(ctx, 31, 0x249814u);
    ctx->pc = 0x249810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24980Cu;
    // 0x249810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x24980Cu, 0x249814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249814u;
label_249814:
    // 0x249814: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x249814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_249818:
    // 0x249818: 0xc089988  jal         func_226620
label_24981c:
    if (ctx->pc == 0x24981Cu) {
        ctx->pc = 0x24981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249818u;
        // 0x24981c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249820u;
        goto label_249820;
    }
    ctx->pc = 0x249818u;
    SET_GPR_U32(ctx, 31, 0x249820u);
    ctx->pc = 0x24981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249818u;
    // 0x24981c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x249818u, 0x249820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249820u;
label_249820:
    // 0x249820: 0xc0873c8  jal         func_21CF20
label_249824:
    if (ctx->pc == 0x249824u) {
        ctx->pc = 0x249824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249820u;
        // 0x249824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249828u;
        goto label_249828;
    }
    ctx->pc = 0x249820u;
    SET_GPR_U32(ctx, 31, 0x249828u);
    ctx->pc = 0x249824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249820u;
    // 0x249824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CF20u, 0x249820u, 0x249828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249828u;
label_249828:
    // 0x249828: 0x8e45b734  lw          $a1, -0x48CC($s2)
    ctx->pc = 0x249828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
label_24982c:
    // 0x24982c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24982cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_249830:
    // 0x249830: 0x8c460790  lw          $a2, 0x790($v0)
    ctx->pc = 0x249830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1936)));
label_249834:
    // 0x249834: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x249834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_249838:
    // 0x249838: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x249838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_24983c:
    // 0x24983c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x24983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_249840:
    // 0x249840: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x249840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
label_249844:
    // 0x249844: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x249844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_249848:
    // 0x249848: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x249848u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_24984c:
    // 0x24984c: 0x24635390  addiu       $v1, $v1, 0x5390
    ctx->pc = 0x24984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21392));
label_249850:
    // 0x249850: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x249850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_249854:
    // 0x249854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_249858:
    // 0x249858: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x249858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_24985c:
    // 0x24985c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24985cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_249860:
    // 0x249860: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x249860u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249864:
    // 0x249864: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x249864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_249868:
    // 0x249868: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x249868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24986c:
    // 0x24986c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x24986cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_249870:
    // 0x249870: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
label_249874:
    if (ctx->pc == 0x249874u) {
        ctx->pc = 0x249874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249870u;
        // 0x249874: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249878u;
        goto label_249878;
    }
    ctx->pc = 0x249870u;
    {
        const bool branch_taken_0x249870 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x249874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249870u;
        // 0x249874: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249870) {
            ctx->pc = 0x2498ECu;
            goto label_2498ec;
        }
    }
    ctx->pc = 0x249878u;
label_249878:
    // 0x249878: 0x24130228  addiu       $s3, $zero, 0x228
    ctx->pc = 0x249878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_24987c:
    // 0x24987c: 0x0  nop
    ctx->pc = 0x24987cu;
    // NOP
label_249880:
    // 0x249880: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x249880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_249884:
    // 0x249884: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x249884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_249888:
    // 0x249888: 0xc0e409a  jal         func_390268
label_24988c:
    if (ctx->pc == 0x24988Cu) {
        ctx->pc = 0x24988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249888u;
        // 0x24988c: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249890u;
        goto label_249890;
    }
    ctx->pc = 0x249888u;
    SET_GPR_U32(ctx, 31, 0x249890u);
    ctx->pc = 0x24988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249888u;
    // 0x24988c: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x249888u, 0x249890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249890u;
label_249890:
    // 0x249890: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x249890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249894:
    // 0x249894: 0xc087502  jal         func_21D408
label_249898:
    if (ctx->pc == 0x249898u) {
        ctx->pc = 0x249898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249894u;
        // 0x249898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24989Cu;
        goto label_24989c;
    }
    ctx->pc = 0x249894u;
    SET_GPR_U32(ctx, 31, 0x24989Cu);
    ctx->pc = 0x249898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249894u;
    // 0x249898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x249894u, 0x24989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24989Cu;
label_24989c:
    // 0x24989c: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x24989cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2498a0:
    // 0x2498a0: 0xc087502  jal         func_21D408
label_2498a4:
    if (ctx->pc == 0x2498A4u) {
        ctx->pc = 0x2498A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498A0u;
        // 0x2498a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498A8u;
        goto label_2498a8;
    }
    ctx->pc = 0x2498A0u;
    SET_GPR_U32(ctx, 31, 0x2498A8u);
    ctx->pc = 0x2498A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2498A0u;
    // 0x2498a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2498A0u, 0x2498A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2498A8u;
label_2498a8:
    // 0x2498a8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2498a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2498ac:
    // 0x2498ac: 0x16030009  bne         $s0, $v1, . + 4 + (0x9 << 2)
label_2498b0:
    if (ctx->pc == 0x2498B0u) {
        ctx->pc = 0x2498B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498ACu;
        // 0x2498b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498B4u;
        goto label_2498b4;
    }
    ctx->pc = 0x2498ACu;
    {
        const bool branch_taken_0x2498ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2498B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498ACu;
        // 0x2498b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2498ac) {
            ctx->pc = 0x2498D4u;
            goto label_2498d4;
        }
    }
    ctx->pc = 0x2498B4u;
label_2498b4:
    // 0x2498b4: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x2498b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_2498b8:
    // 0x2498b8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2498b8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2498bc:
    // 0x2498bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2498c0:
    if (ctx->pc == 0x2498C0u) {
        ctx->pc = 0x2498C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498BCu;
        // 0x2498c0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498C4u;
        goto label_2498c4;
    }
    ctx->pc = 0x2498BCu;
    {
        const bool branch_taken_0x2498bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2498C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498BCu;
        // 0x2498c0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2498bc) {
            ctx->pc = 0x2498D0u;
            goto label_2498d0;
        }
    }
    ctx->pc = 0x2498C4u;
label_2498c4:
    // 0x2498c4: 0xc089f76  jal         func_227DD8
label_2498c8:
    if (ctx->pc == 0x2498C8u) {
        ctx->pc = 0x2498C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498C4u;
        // 0x2498c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498CCu;
        goto label_2498cc;
    }
    ctx->pc = 0x2498C4u;
    SET_GPR_U32(ctx, 31, 0x2498CCu);
    ctx->pc = 0x2498C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2498C4u;
    // 0x2498c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2498C4u, 0x2498CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2498CCu;
label_2498cc:
    // 0x2498cc: 0x2a2b00a  movz        $s6, $s5, $v0
    ctx->pc = 0x2498ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 21));
label_2498d0:
    // 0x2498d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2498d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2498d4:
    // 0x2498d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2498d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2498d8:
    // 0x2498d8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2498d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2498dc:
    // 0x2498dc: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2498dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2498e0:
    // 0x2498e0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2498e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2498e4:
    // 0x2498e4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_2498e8:
    if (ctx->pc == 0x2498E8u) {
        ctx->pc = 0x2498E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498E4u;
        // 0x2498e8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498ECu;
        goto label_2498ec;
    }
    ctx->pc = 0x2498E4u;
    {
        const bool branch_taken_0x2498e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2498E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498E4u;
        // 0x2498e8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2498e4) {
            ctx->pc = 0x249880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249880;
        }
    }
    ctx->pc = 0x2498ECu;
label_2498ec:
    // 0x2498ec: 0x52a00042  beql        $s5, $zero, . + 4 + (0x42 << 2)
label_2498f0:
    if (ctx->pc == 0x2498F0u) {
        ctx->pc = 0x2498F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498ECu;
        // 0x2498f0: 0xde2300e0  ld          $v1, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498F4u;
        goto label_2498f4;
    }
    ctx->pc = 0x2498ECu;
    {
        const bool branch_taken_0x2498ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2498ec) {
            ctx->pc = 0x2498F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2498ECu;
            // 0x2498f0: 0xde2300e0  ld          $v1, 0xE0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2499F8u;
            goto label_2499f8;
        }
    }
    ctx->pc = 0x2498F4u;
label_2498f4:
    // 0x2498f4: 0xc089f76  jal         func_227DD8
label_2498f8:
    if (ctx->pc == 0x2498F8u) {
        ctx->pc = 0x2498F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498F4u;
        // 0x2498f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2498FCu;
        goto label_2498fc;
    }
    ctx->pc = 0x2498F4u;
    SET_GPR_U32(ctx, 31, 0x2498FCu);
    ctx->pc = 0x2498F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2498F4u;
    // 0x2498f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2498F4u, 0x2498FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2498FCu;
label_2498fc:
    // 0x2498fc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_249900:
    if (ctx->pc == 0x249900u) {
        ctx->pc = 0x249900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498FCu;
        // 0x249900: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249904u;
        goto label_249904;
    }
    ctx->pc = 0x2498FCu;
    {
        const bool branch_taken_0x2498fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2498FCu;
        // 0x249900: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2498fc) {
            ctx->pc = 0x249944u;
            goto label_249944;
        }
    }
    ctx->pc = 0x249904u;
label_249904:
    // 0x249904: 0xc088edc  jal         func_223B70
label_249908:
    if (ctx->pc == 0x249908u) {
        ctx->pc = 0x249908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249904u;
        // 0x249908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24990Cu;
        goto label_24990c;
    }
    ctx->pc = 0x249904u;
    SET_GPR_U32(ctx, 31, 0x24990Cu);
    ctx->pc = 0x249908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249904u;
    // 0x249908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x249904u, 0x24990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24990Cu;
label_24990c:
    // 0x24990c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_249910:
    if (ctx->pc == 0x249910u) {
        ctx->pc = 0x249910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24990Cu;
        // 0x249910: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249914u;
        goto label_249914;
    }
    ctx->pc = 0x24990Cu;
    {
        const bool branch_taken_0x24990c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24990Cu;
        // 0x249910: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24990c) {
            ctx->pc = 0x249944u;
            goto label_249944;
        }
    }
    ctx->pc = 0x249914u;
label_249914:
    // 0x249914: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x249914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_249918:
    // 0x249918: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x249918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24991c:
    // 0x24991c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_249920:
    // 0x249920: 0x40f809  jalr        $v0
label_249924:
    if (ctx->pc == 0x249924u) {
        ctx->pc = 0x249924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249920u;
        // 0x249924: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249928u;
        goto label_249928;
    }
    ctx->pc = 0x249920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x249928u);
        ctx->pc = 0x249924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249920u;
        // 0x249924: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249920u, 0x249928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249928u;
label_249928:
    // 0x249928: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x249928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_24992c:
    // 0x24992c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24992cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249930:
    // 0x249930: 0x24640840  addiu       $a0, $v1, 0x840
    ctx->pc = 0x249930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
label_249934:
    // 0x249934: 0xc06cc08  jal         func_1B3020
label_249938:
    if (ctx->pc == 0x249938u) {
        ctx->pc = 0x249938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249934u;
        // 0x249938: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24993Cu;
        goto label_24993c;
    }
    ctx->pc = 0x249934u;
    SET_GPR_U32(ctx, 31, 0x24993Cu);
    ctx->pc = 0x249938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249934u;
    // 0x249938: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3020u, 0x249934u, 0x24993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24993Cu;
label_24993c:
    // 0x24993c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_249940:
    if (ctx->pc == 0x249940u) {
        ctx->pc = 0x249940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24993Cu;
        // 0x249940: 0xde2300e0  ld          $v1, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249944u;
        goto label_249944;
    }
    ctx->pc = 0x24993Cu;
    {
        const bool branch_taken_0x24993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24993Cu;
        // 0x249940: 0xde2300e0  ld          $v1, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24993c) {
            ctx->pc = 0x2499F8u;
            goto label_2499f8;
        }
    }
    ctx->pc = 0x249944u;
label_249944:
    // 0x249944: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x249944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_249948:
    // 0x249948: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x249948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
label_24994c:
    // 0x24994c: 0x54600021  bnel        $v1, $zero, . + 4 + (0x21 << 2)
label_249950:
    if (ctx->pc == 0x249950u) {
        ctx->pc = 0x249950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24994Cu;
        // 0x249950: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249954u;
        goto label_249954;
    }
    ctx->pc = 0x24994Cu;
    {
        const bool branch_taken_0x24994c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24994c) {
            ctx->pc = 0x249950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24994Cu;
            // 0x249950: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2499D4u;
            goto label_2499d4;
        }
    }
    ctx->pc = 0x249954u;
label_249954:
    // 0x249954: 0xc089f76  jal         func_227DD8
label_249958:
    if (ctx->pc == 0x249958u) {
        ctx->pc = 0x249958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249954u;
        // 0x249958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24995Cu;
        goto label_24995c;
    }
    ctx->pc = 0x249954u;
    SET_GPR_U32(ctx, 31, 0x24995Cu);
    ctx->pc = 0x249958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249954u;
    // 0x249958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x249954u, 0x24995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24995Cu;
label_24995c:
    // 0x24995c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_249960:
    if (ctx->pc == 0x249960u) {
        ctx->pc = 0x249964u;
        goto label_249964;
    }
    ctx->pc = 0x24995Cu;
    {
        const bool branch_taken_0x24995c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24995c) {
            ctx->pc = 0x249994u;
            goto label_249994;
        }
    }
    ctx->pc = 0x249964u;
label_249964:
    // 0x249964: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x249964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_249968:
    // 0x249968: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x249968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24996c:
    // 0x24996c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_249970:
    // 0x249970: 0x40f809  jalr        $v0
label_249974:
    if (ctx->pc == 0x249974u) {
        ctx->pc = 0x249974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249970u;
        // 0x249974: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249978u;
        goto label_249978;
    }
    ctx->pc = 0x249970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x249978u);
        ctx->pc = 0x249974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249970u;
        // 0x249974: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249970u, 0x249978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249978u;
label_249978:
    // 0x249978: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x249978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24997c:
    // 0x24997c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24997cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249980:
    // 0x249980: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x249980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_249984:
    // 0x249984: 0xc06cc08  jal         func_1B3020
label_249988:
    if (ctx->pc == 0x249988u) {
        ctx->pc = 0x249988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249984u;
        // 0x249988: 0x24440840  addiu       $a0, $v0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24998Cu;
        goto label_24998c;
    }
    ctx->pc = 0x249984u;
    SET_GPR_U32(ctx, 31, 0x24998Cu);
    ctx->pc = 0x249988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249984u;
    // 0x249988: 0x24440840  addiu       $a0, $v0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3020u, 0x249984u, 0x24998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24998Cu;
label_24998c:
    // 0x24998c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_249990:
    if (ctx->pc == 0x249990u) {
        ctx->pc = 0x249990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24998Cu;
        // 0x249990: 0xde2300e0  ld          $v1, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249994u;
        goto label_249994;
    }
    ctx->pc = 0x24998Cu;
    {
        const bool branch_taken_0x24998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24998Cu;
        // 0x249990: 0xde2300e0  ld          $v1, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24998c) {
            ctx->pc = 0x2499F8u;
            goto label_2499f8;
        }
    }
    ctx->pc = 0x249994u;
label_249994:
    // 0x249994: 0xc088edc  jal         func_223B70
label_249998:
    if (ctx->pc == 0x249998u) {
        ctx->pc = 0x249998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249994u;
        // 0x249998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24999Cu;
        goto label_24999c;
    }
    ctx->pc = 0x249994u;
    SET_GPR_U32(ctx, 31, 0x24999Cu);
    ctx->pc = 0x249998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249994u;
    // 0x249998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x249994u, 0x24999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24999Cu;
label_24999c:
    // 0x24999c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_2499a0:
    if (ctx->pc == 0x2499A0u) {
        ctx->pc = 0x2499A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24999Cu;
        // 0x2499a0: 0xde2300e0  ld          $v1, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499A4u;
        goto label_2499a4;
    }
    ctx->pc = 0x24999Cu;
    {
        const bool branch_taken_0x24999c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24999c) {
            ctx->pc = 0x2499A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24999Cu;
            // 0x2499a0: 0xde2300e0  ld          $v1, 0xE0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2499F8u;
            goto label_2499f8;
        }
    }
    ctx->pc = 0x2499A4u;
label_2499a4:
    // 0x2499a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2499a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2499a8:
    // 0x2499a8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2499a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2499ac:
    // 0x2499ac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2499acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2499b0:
    // 0x2499b0: 0x40f809  jalr        $v0
label_2499b4:
    if (ctx->pc == 0x2499B4u) {
        ctx->pc = 0x2499B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499B0u;
        // 0x2499b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499B8u;
        goto label_2499b8;
    }
    ctx->pc = 0x2499B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2499B8u);
        ctx->pc = 0x2499B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499B0u;
        // 0x2499b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2499B0u, 0x2499B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2499B8u;
label_2499b8:
    // 0x2499b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2499b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2499bc:
    // 0x2499bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2499bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2499c0:
    // 0x2499c0: 0x24640840  addiu       $a0, $v1, 0x840
    ctx->pc = 0x2499c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
label_2499c4:
    // 0x2499c4: 0xc06cc08  jal         func_1B3020
label_2499c8:
    if (ctx->pc == 0x2499C8u) {
        ctx->pc = 0x2499C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499C4u;
        // 0x2499c8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499CCu;
        goto label_2499cc;
    }
    ctx->pc = 0x2499C4u;
    SET_GPR_U32(ctx, 31, 0x2499CCu);
    ctx->pc = 0x2499C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2499C4u;
    // 0x2499c8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3020u, 0x2499C4u, 0x2499CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499CCu;
label_2499cc:
    // 0x2499cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_2499d0:
    if (ctx->pc == 0x2499D0u) {
        ctx->pc = 0x2499D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499CCu;
        // 0x2499d0: 0xde2300e0  ld          $v1, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499D4u;
        goto label_2499d4;
    }
    ctx->pc = 0x2499CCu;
    {
        const bool branch_taken_0x2499cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2499D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499CCu;
        // 0x2499d0: 0xde2300e0  ld          $v1, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499cc) {
            ctx->pc = 0x2499F8u;
            goto label_2499f8;
        }
    }
    ctx->pc = 0x2499D4u;
label_2499d4:
    // 0x2499d4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2499d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2499d8:
    // 0x2499d8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2499d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2499dc:
    // 0x2499dc: 0x40f809  jalr        $v0
label_2499e0:
    if (ctx->pc == 0x2499E0u) {
        ctx->pc = 0x2499E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499DCu;
        // 0x2499e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499E4u;
        goto label_2499e4;
    }
    ctx->pc = 0x2499DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2499E4u);
        ctx->pc = 0x2499E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499DCu;
        // 0x2499e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2499DCu, 0x2499E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2499E4u;
label_2499e4:
    // 0x2499e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2499e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2499e8:
    // 0x2499e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2499e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2499ec:
    // 0x2499ec: 0xc06cad6  jal         func_1B2B58
label_2499f0:
    if (ctx->pc == 0x2499F0u) {
        ctx->pc = 0x2499F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499ECu;
        // 0x2499f0: 0x24440840  addiu       $a0, $v0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499F4u;
        goto label_2499f4;
    }
    ctx->pc = 0x2499ECu;
    SET_GPR_U32(ctx, 31, 0x2499F4u);
    ctx->pc = 0x2499F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2499ECu;
    // 0x2499f0: 0x24440840  addiu       $a0, $v0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B58u, 0x2499ECu, 0x2499F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499F4u;
label_2499f4:
    // 0x2499f4: 0xde2300e0  ld          $v1, 0xE0($s1)
    ctx->pc = 0x2499f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2499f8:
    // 0x2499f8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2499f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2499fc:
    // 0x2499fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2499fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_249a00:
    // 0x249a00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x249a00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_249a04:
    // 0x249a04: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_249a08:
    if (ctx->pc == 0x249A08u) {
        ctx->pc = 0x249A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A04u;
        // 0x249a08: 0x310ba  dsrl        $v0, $v1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A0Cu;
        goto label_249a0c;
    }
    ctx->pc = 0x249A04u;
    {
        const bool branch_taken_0x249a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A04u;
        // 0x249a08: 0x310ba  dsrl        $v0, $v1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a04) {
            ctx->pc = 0x249AFCu;
            goto label_249afc;
        }
    }
    ctx->pc = 0x249A0Cu;
label_249a0c:
    // 0x249a0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x249a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_249a10:
    // 0x249a10: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_249a14:
    if (ctx->pc == 0x249A14u) {
        ctx->pc = 0x249A18u;
        goto label_249a18;
    }
    ctx->pc = 0x249A10u;
    {
        const bool branch_taken_0x249a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249a10) {
            ctx->pc = 0x249AFCu;
            goto label_249afc;
        }
    }
    ctx->pc = 0x249A18u;
label_249a18:
    // 0x249a18: 0xc089f76  jal         func_227DD8
label_249a1c:
    if (ctx->pc == 0x249A1Cu) {
        ctx->pc = 0x249A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A18u;
        // 0x249a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A20u;
        goto label_249a20;
    }
    ctx->pc = 0x249A18u;
    SET_GPR_U32(ctx, 31, 0x249A20u);
    ctx->pc = 0x249A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A18u;
    // 0x249a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x249A18u, 0x249A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A20u;
label_249a20:
    // 0x249a20: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_249a24:
    if (ctx->pc == 0x249A24u) {
        ctx->pc = 0x249A28u;
        goto label_249a28;
    }
    ctx->pc = 0x249A20u;
    {
        const bool branch_taken_0x249a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249a20) {
            ctx->pc = 0x249AFCu;
            goto label_249afc;
        }
    }
    ctx->pc = 0x249A28u;
label_249a28:
    // 0x249a28: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x249a28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_249a2c:
    // 0x249a2c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x249a2cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_249a30:
    // 0x249a30: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_249a34:
    if (ctx->pc == 0x249A34u) {
        ctx->pc = 0x249A38u;
        goto label_249a38;
    }
    ctx->pc = 0x249A30u;
    {
        const bool branch_taken_0x249a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249a30) {
            ctx->pc = 0x249AD4u;
            goto label_249ad4;
        }
    }
    ctx->pc = 0x249A38u;
label_249a38:
    // 0x249a38: 0x16c00026  bnez        $s6, . + 4 + (0x26 << 2)
label_249a3c:
    if (ctx->pc == 0x249A3Cu) {
        ctx->pc = 0x249A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A38u;
        // 0x249a3c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A40u;
        goto label_249a40;
    }
    ctx->pc = 0x249A38u;
    {
        const bool branch_taken_0x249a38 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x249A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A38u;
        // 0x249a3c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a38) {
            ctx->pc = 0x249AD4u;
            goto label_249ad4;
        }
    }
    ctx->pc = 0x249A40u;
label_249a40:
    // 0x249a40: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x249a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_249a44:
    // 0x249a44: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x249a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
label_249a48:
    // 0x249a48: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_249a4c:
    if (ctx->pc == 0x249A4Cu) {
        ctx->pc = 0x249A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A48u;
        // 0x249a4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A50u;
        goto label_249a50;
    }
    ctx->pc = 0x249A48u;
    {
        const bool branch_taken_0x249a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A48u;
        // 0x249a4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a48) {
            ctx->pc = 0x249AD4u;
            goto label_249ad4;
        }
    }
    ctx->pc = 0x249A50u;
label_249a50:
    // 0x249a50: 0xc089a54  jal         func_226950
label_249a54:
    if (ctx->pc == 0x249A54u) {
        ctx->pc = 0x249A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A50u;
        // 0x249a54: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A58u;
        goto label_249a58;
    }
    ctx->pc = 0x249A50u;
    SET_GPR_U32(ctx, 31, 0x249A58u);
    ctx->pc = 0x249A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A50u;
    // 0x249a54: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226950u, 0x249A50u, 0x249A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A58u;
label_249a58:
    // 0x249a58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x249a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249a5c:
    // 0x249a5c: 0x8ee300f0  lw          $v1, 0xF0($s7)
    ctx->pc = 0x249a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 240)));
label_249a60:
    // 0x249a60: 0x8e42b734  lw          $v0, -0x48CC($s2)
    ctx->pc = 0x249a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
label_249a64:
    // 0x249a64: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x249a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_249a68:
    // 0x249a68: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x249a68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_249a6c:
    // 0x249a6c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_249a70:
    if (ctx->pc == 0x249A70u) {
        ctx->pc = 0x249A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A6Cu;
        // 0x249a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A74u;
        goto label_249a74;
    }
    ctx->pc = 0x249A6Cu;
    {
        const bool branch_taken_0x249a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A6Cu;
        // 0x249a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a6c) {
            ctx->pc = 0x249AD4u;
            goto label_249ad4;
        }
    }
    ctx->pc = 0x249A74u;
label_249a74:
    // 0x249a74: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x249a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_249a78:
    // 0x249a78: 0xc089998  jal         func_226660
label_249a7c:
    if (ctx->pc == 0x249A7Cu) {
        ctx->pc = 0x249A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A78u;
        // 0x249a7c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A80u;
        goto label_249a80;
    }
    ctx->pc = 0x249A78u;
    SET_GPR_U32(ctx, 31, 0x249A80u);
    ctx->pc = 0x249A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A78u;
    // 0x249a7c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x249A78u, 0x249A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A80u;
label_249a80:
    // 0x249a80: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_249a84:
    if (ctx->pc == 0x249A84u) {
        ctx->pc = 0x249A88u;
        goto label_249a88;
    }
    ctx->pc = 0x249A80u;
    {
        const bool branch_taken_0x249a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249a80) {
            ctx->pc = 0x249AD4u;
            goto label_249ad4;
        }
    }
    ctx->pc = 0x249A88u;
label_249a88:
    // 0x249a88: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_249a8c:
    if (ctx->pc == 0x249A8Cu) {
        ctx->pc = 0x249A90u;
        goto label_249a90;
    }
    ctx->pc = 0x249A88u;
    {
        const bool branch_taken_0x249a88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x249a88) {
            ctx->pc = 0x249AA0u;
            goto label_249aa0;
        }
    }
    ctx->pc = 0x249A90u;
label_249a90:
    // 0x249a90: 0xc08a11a  jal         func_228468
label_249a94:
    if (ctx->pc == 0x249A94u) {
        ctx->pc = 0x249A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A90u;
        // 0x249a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A98u;
        goto label_249a98;
    }
    ctx->pc = 0x249A90u;
    SET_GPR_U32(ctx, 31, 0x249A98u);
    ctx->pc = 0x249A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A90u;
    // 0x249a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228468u, 0x249A90u, 0x249A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A98u;
label_249a98:
    // 0x249a98: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_249a9c:
    if (ctx->pc == 0x249A9Cu) {
        ctx->pc = 0x249AA0u;
        goto label_249aa0;
    }
    ctx->pc = 0x249A98u;
    {
        const bool branch_taken_0x249a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249a98) {
            ctx->pc = 0x249AD4u;
            goto label_249ad4;
        }
    }
    ctx->pc = 0x249AA0u;
label_249aa0:
    // 0x249aa0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x249aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_249aa4:
    // 0x249aa4: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x249aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
label_249aa8:
    // 0x249aa8: 0xc089974  jal         func_2265D0
label_249aac:
    if (ctx->pc == 0x249AACu) {
        ctx->pc = 0x249AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AA8u;
        // 0x249aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AB0u;
        goto label_249ab0;
    }
    ctx->pc = 0x249AA8u;
    SET_GPR_U32(ctx, 31, 0x249AB0u);
    ctx->pc = 0x249AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249AA8u;
    // 0x249aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x249AA8u, 0x249AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249AB0u;
label_249ab0:
    // 0x249ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_249ab4:
    // 0x249ab4: 0xc089988  jal         func_226620
label_249ab8:
    if (ctx->pc == 0x249AB8u) {
        ctx->pc = 0x249AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AB4u;
        // 0x249ab8: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249ABCu;
        goto label_249abc;
    }
    ctx->pc = 0x249AB4u;
    SET_GPR_U32(ctx, 31, 0x249ABCu);
    ctx->pc = 0x249AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249AB4u;
    // 0x249ab8: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x249AB4u, 0x249ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249ABCu;
label_249abc:
    // 0x249abc: 0x8e45b734  lw          $a1, -0x48CC($s2)
    ctx->pc = 0x249abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
label_249ac0:
    // 0x249ac0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x249ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_249ac4:
    // 0x249ac4: 0x8c64078c  lw          $a0, 0x78C($v1)
    ctx->pc = 0x249ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1932)));
label_249ac8:
    // 0x249ac8: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x249ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_249acc:
    // 0x249acc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x249accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_249ad0:
    // 0x249ad0: 0xaee200f0  sw          $v0, 0xF0($s7)
    ctx->pc = 0x249ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 240), GPR_U32(ctx, 2));
label_249ad4:
    // 0x249ad4: 0xc088442  jal         func_221108
label_249ad8:
    if (ctx->pc == 0x249AD8u) {
        ctx->pc = 0x249AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AD4u;
        // 0x249ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249ADCu;
        goto label_249adc;
    }
    ctx->pc = 0x249AD4u;
    SET_GPR_U32(ctx, 31, 0x249ADCu);
    ctx->pc = 0x249AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249AD4u;
    // 0x249ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221108u, 0x249AD4u, 0x249ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249ADCu;
label_249adc:
    // 0x249adc: 0xc095bca  jal         func_256F28
label_249ae0:
    if (ctx->pc == 0x249AE0u) {
        ctx->pc = 0x249AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249ADCu;
        // 0x249ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AE4u;
        goto label_249ae4;
    }
    ctx->pc = 0x249ADCu;
    SET_GPR_U32(ctx, 31, 0x249AE4u);
    ctx->pc = 0x249AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249ADCu;
    // 0x249ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F28u, 0x249ADCu, 0x249AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249AE4u;
label_249ae4:
    // 0x249ae4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_249ae8:
    if (ctx->pc == 0x249AE8u) {
        ctx->pc = 0x249AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AE4u;
        // 0x249ae8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AECu;
        goto label_249aec;
    }
    ctx->pc = 0x249AE4u;
    {
        const bool branch_taken_0x249ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AE4u;
        // 0x249ae8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ae4) {
            ctx->pc = 0x249B08u;
            goto label_249b08;
        }
    }
    ctx->pc = 0x249AECu;
label_249aec:
    // 0x249aec: 0xc0997dc  jal         func_265F70
label_249af0:
    if (ctx->pc == 0x249AF0u) {
        ctx->pc = 0x249AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AECu;
        // 0x249af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AF4u;
        goto label_249af4;
    }
    ctx->pc = 0x249AECu;
    SET_GPR_U32(ctx, 31, 0x249AF4u);
    ctx->pc = 0x249AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249AECu;
    // 0x249af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F70u, 0x249AECu, 0x249AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249AF4u;
label_249af4:
    // 0x249af4: 0x10000004  b           . + 4 + (0x4 << 2)
label_249af8:
    if (ctx->pc == 0x249AF8u) {
        ctx->pc = 0x249AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AF4u;
        // 0x249af8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AFCu;
        goto label_249afc;
    }
    ctx->pc = 0x249AF4u;
    {
        const bool branch_taken_0x249af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AF4u;
        // 0x249af8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249af4) {
            ctx->pc = 0x249B08u;
            goto label_249b08;
        }
    }
    ctx->pc = 0x249AFCu;
label_249afc:
    // 0x249afc: 0xc09539e  jal         func_254E78
label_249b00:
    if (ctx->pc == 0x249B00u) {
        ctx->pc = 0x249B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AFCu;
        // 0x249b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B04u;
        goto label_249b04;
    }
    ctx->pc = 0x249AFCu;
    SET_GPR_U32(ctx, 31, 0x249B04u);
    ctx->pc = 0x249B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249AFCu;
    // 0x249b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E78u, 0x249AFCu, 0x249B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B04u;
label_249b04:
    // 0x249b04: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x249b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_249b08:
    // 0x249b08: 0x8c6204fc  lw          $v0, 0x4FC($v1)
    ctx->pc = 0x249b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1276)));
label_249b0c:
    // 0x249b0c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_249b10:
    if (ctx->pc == 0x249B10u) {
        ctx->pc = 0x249B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B0Cu;
        // 0x249b10: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B14u;
        goto label_249b14;
    }
    ctx->pc = 0x249B0Cu;
    {
        const bool branch_taken_0x249b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249b0c) {
            ctx->pc = 0x249B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249B0Cu;
            // 0x249b10: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249B18u;
            goto label_249b18;
        }
    }
    ctx->pc = 0x249B14u;
label_249b14:
    // 0x249b14: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x249b14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_249b18:
    // 0x249b18: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x249b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_249b1c:
    // 0x249b1c: 0x8c6204fc  lw          $v0, 0x4FC($v1)
    ctx->pc = 0x249b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1276)));
label_249b20:
    // 0x249b20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_249b24:
    if (ctx->pc == 0x249B24u) {
        ctx->pc = 0x249B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B20u;
        // 0x249b24: 0x2bc2003c  slti        $v0, $fp, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B28u;
        goto label_249b28;
    }
    ctx->pc = 0x249B20u;
    {
        const bool branch_taken_0x249b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B20u;
        // 0x249b24: 0x2bc2003c  slti        $v0, $fp, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b20) {
            ctx->pc = 0x249B38u;
            goto label_249b38;
        }
    }
    ctx->pc = 0x249B28u;
label_249b28:
    // 0x249b28: 0x1440fe77  bnez        $v0, . + 4 + (-0x189 << 2)
label_249b2c:
    if (ctx->pc == 0x249B2Cu) {
        ctx->pc = 0x249B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B28u;
        // 0x249b2c: 0x1e2400  sll         $a0, $fp, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B30u;
        goto label_249b30;
    }
    ctx->pc = 0x249B28u;
    {
        const bool branch_taken_0x249b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B28u;
        // 0x249b2c: 0x1e2400  sll         $a0, $fp, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b28) {
            ctx->pc = 0x249508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249508;
        }
    }
    ctx->pc = 0x249B30u;
label_249b30:
    // 0x249b30: 0x10000004  b           . + 4 + (0x4 << 2)
label_249b34:
    if (ctx->pc == 0x249B34u) {
        ctx->pc = 0x249B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B30u;
        // 0x249b34: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B38u;
        goto label_249b38;
    }
    ctx->pc = 0x249B30u;
    {
        const bool branch_taken_0x249b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B30u;
        // 0x249b34: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b30) {
            ctx->pc = 0x249B44u;
            goto label_249b44;
        }
    }
    ctx->pc = 0x249B38u;
label_249b38:
    // 0x249b38: 0x7c1fe73  bgez        $fp, . + 4 + (-0x18D << 2)
label_249b3c:
    if (ctx->pc == 0x249B3Cu) {
        ctx->pc = 0x249B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B38u;
        // 0x249b3c: 0x1e2400  sll         $a0, $fp, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B40u;
        goto label_249b40;
    }
    ctx->pc = 0x249B38u;
    {
        const bool branch_taken_0x249b38 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x249B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B38u;
        // 0x249b3c: 0x1e2400  sll         $a0, $fp, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b38) {
            ctx->pc = 0x249508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249508;
        }
    }
    ctx->pc = 0x249B40u;
label_249b40:
    // 0x249b40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x249b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_249b44:
    // 0x249b44: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x249b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_249b48:
    // 0x249b48: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x249b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_249b4c:
    // 0x249b4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x249b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_249b50:
    // 0x249b50: 0xc44002cc  lwc1        $f0, 0x2CC($v0)
    ctx->pc = 0x249b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249b54:
    // 0x249b54: 0x460c0328  max.s       $f12, $f0, $f12
    ctx->pc = 0x249b54u;
    ctx->f[12] = std::max(ctx->f[0], ctx->f[12]);
label_249b58:
    // 0x249b58: 0xc047a1e  jal         func_11E878
label_249b5c:
    if (ctx->pc == 0x249B5Cu) {
        ctx->pc = 0x249B60u;
        goto label_249b60;
    }
    ctx->pc = 0x249B58u;
    SET_GPR_U32(ctx, 31, 0x249B60u);
    ctx->pc = 0x11E878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E878u, 0x249B58u, 0x249B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B60u;
label_249b60:
    // 0x249b60: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x249b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_249b64:
    // 0x249b64: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x249b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_249b68:
    // 0x249b68: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x249b68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_249b6c:
    // 0x249b6c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x249b6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_249b70:
    // 0x249b70: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x249b70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_249b74:
    // 0x249b74: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x249b74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_249b78:
    // 0x249b78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x249b78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_249b7c:
    // 0x249b7c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x249b7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_249b80:
    // 0x249b80: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x249b80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_249b84:
    // 0x249b84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x249b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_249b88:
    // 0x249b88: 0x3e00008  jr          $ra
label_249b8c:
    if (ctx->pc == 0x249B8Cu) {
        ctx->pc = 0x249B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B88u;
        // 0x249b8c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B90u;
        goto label_249b90;
    }
    ctx->pc = 0x249B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B88u;
        // 0x249b8c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249B90u;
label_249b90:
    // 0x249b90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x249b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_249b94:
    // 0x249b94: 0x0  nop
    ctx->pc = 0x249b94u;
    // NOP
    ctx->pc = 0x249b98u;
}
