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

// Function: sub_00289138
// Address: 0x289138 - 0x289d68
void sub_00289138_0x289138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289138_0x289138");
#endif

    switch (ctx->pc) {
        case 0x289138u: goto label_289138;
        case 0x28913cu: goto label_28913c;
        case 0x289140u: goto label_289140;
        case 0x289144u: goto label_289144;
        case 0x289148u: goto label_289148;
        case 0x28914cu: goto label_28914c;
        case 0x289150u: goto label_289150;
        case 0x289154u: goto label_289154;
        case 0x289158u: goto label_289158;
        case 0x28915cu: goto label_28915c;
        case 0x289160u: goto label_289160;
        case 0x289164u: goto label_289164;
        case 0x289168u: goto label_289168;
        case 0x28916cu: goto label_28916c;
        case 0x289170u: goto label_289170;
        case 0x289174u: goto label_289174;
        case 0x289178u: goto label_289178;
        case 0x28917cu: goto label_28917c;
        case 0x289180u: goto label_289180;
        case 0x289184u: goto label_289184;
        case 0x289188u: goto label_289188;
        case 0x28918cu: goto label_28918c;
        case 0x289190u: goto label_289190;
        case 0x289194u: goto label_289194;
        case 0x289198u: goto label_289198;
        case 0x28919cu: goto label_28919c;
        case 0x2891a0u: goto label_2891a0;
        case 0x2891a4u: goto label_2891a4;
        case 0x2891a8u: goto label_2891a8;
        case 0x2891acu: goto label_2891ac;
        case 0x2891b0u: goto label_2891b0;
        case 0x2891b4u: goto label_2891b4;
        case 0x2891b8u: goto label_2891b8;
        case 0x2891bcu: goto label_2891bc;
        case 0x2891c0u: goto label_2891c0;
        case 0x2891c4u: goto label_2891c4;
        case 0x2891c8u: goto label_2891c8;
        case 0x2891ccu: goto label_2891cc;
        case 0x2891d0u: goto label_2891d0;
        case 0x2891d4u: goto label_2891d4;
        case 0x2891d8u: goto label_2891d8;
        case 0x2891dcu: goto label_2891dc;
        case 0x2891e0u: goto label_2891e0;
        case 0x2891e4u: goto label_2891e4;
        case 0x2891e8u: goto label_2891e8;
        case 0x2891ecu: goto label_2891ec;
        case 0x2891f0u: goto label_2891f0;
        case 0x2891f4u: goto label_2891f4;
        case 0x2891f8u: goto label_2891f8;
        case 0x2891fcu: goto label_2891fc;
        case 0x289200u: goto label_289200;
        case 0x289204u: goto label_289204;
        case 0x289208u: goto label_289208;
        case 0x28920cu: goto label_28920c;
        case 0x289210u: goto label_289210;
        case 0x289214u: goto label_289214;
        case 0x289218u: goto label_289218;
        case 0x28921cu: goto label_28921c;
        case 0x289220u: goto label_289220;
        case 0x289224u: goto label_289224;
        case 0x289228u: goto label_289228;
        case 0x28922cu: goto label_28922c;
        case 0x289230u: goto label_289230;
        case 0x289234u: goto label_289234;
        case 0x289238u: goto label_289238;
        case 0x28923cu: goto label_28923c;
        case 0x289240u: goto label_289240;
        case 0x289244u: goto label_289244;
        case 0x289248u: goto label_289248;
        case 0x28924cu: goto label_28924c;
        case 0x289250u: goto label_289250;
        case 0x289254u: goto label_289254;
        case 0x289258u: goto label_289258;
        case 0x28925cu: goto label_28925c;
        case 0x289260u: goto label_289260;
        case 0x289264u: goto label_289264;
        case 0x289268u: goto label_289268;
        case 0x28926cu: goto label_28926c;
        case 0x289270u: goto label_289270;
        case 0x289274u: goto label_289274;
        case 0x289278u: goto label_289278;
        case 0x28927cu: goto label_28927c;
        case 0x289280u: goto label_289280;
        case 0x289284u: goto label_289284;
        case 0x289288u: goto label_289288;
        case 0x28928cu: goto label_28928c;
        case 0x289290u: goto label_289290;
        case 0x289294u: goto label_289294;
        case 0x289298u: goto label_289298;
        case 0x28929cu: goto label_28929c;
        case 0x2892a0u: goto label_2892a0;
        case 0x2892a4u: goto label_2892a4;
        case 0x2892a8u: goto label_2892a8;
        case 0x2892acu: goto label_2892ac;
        case 0x2892b0u: goto label_2892b0;
        case 0x2892b4u: goto label_2892b4;
        case 0x2892b8u: goto label_2892b8;
        case 0x2892bcu: goto label_2892bc;
        case 0x2892c0u: goto label_2892c0;
        case 0x2892c4u: goto label_2892c4;
        case 0x2892c8u: goto label_2892c8;
        case 0x2892ccu: goto label_2892cc;
        case 0x2892d0u: goto label_2892d0;
        case 0x2892d4u: goto label_2892d4;
        case 0x2892d8u: goto label_2892d8;
        case 0x2892dcu: goto label_2892dc;
        case 0x2892e0u: goto label_2892e0;
        case 0x2892e4u: goto label_2892e4;
        case 0x2892e8u: goto label_2892e8;
        case 0x2892ecu: goto label_2892ec;
        case 0x2892f0u: goto label_2892f0;
        case 0x2892f4u: goto label_2892f4;
        case 0x2892f8u: goto label_2892f8;
        case 0x2892fcu: goto label_2892fc;
        case 0x289300u: goto label_289300;
        case 0x289304u: goto label_289304;
        case 0x289308u: goto label_289308;
        case 0x28930cu: goto label_28930c;
        case 0x289310u: goto label_289310;
        case 0x289314u: goto label_289314;
        case 0x289318u: goto label_289318;
        case 0x28931cu: goto label_28931c;
        case 0x289320u: goto label_289320;
        case 0x289324u: goto label_289324;
        case 0x289328u: goto label_289328;
        case 0x28932cu: goto label_28932c;
        case 0x289330u: goto label_289330;
        case 0x289334u: goto label_289334;
        case 0x289338u: goto label_289338;
        case 0x28933cu: goto label_28933c;
        case 0x289340u: goto label_289340;
        case 0x289344u: goto label_289344;
        case 0x289348u: goto label_289348;
        case 0x28934cu: goto label_28934c;
        case 0x289350u: goto label_289350;
        case 0x289354u: goto label_289354;
        case 0x289358u: goto label_289358;
        case 0x28935cu: goto label_28935c;
        case 0x289360u: goto label_289360;
        case 0x289364u: goto label_289364;
        case 0x289368u: goto label_289368;
        case 0x28936cu: goto label_28936c;
        case 0x289370u: goto label_289370;
        case 0x289374u: goto label_289374;
        case 0x289378u: goto label_289378;
        case 0x28937cu: goto label_28937c;
        case 0x289380u: goto label_289380;
        case 0x289384u: goto label_289384;
        case 0x289388u: goto label_289388;
        case 0x28938cu: goto label_28938c;
        case 0x289390u: goto label_289390;
        case 0x289394u: goto label_289394;
        case 0x289398u: goto label_289398;
        case 0x28939cu: goto label_28939c;
        case 0x2893a0u: goto label_2893a0;
        case 0x2893a4u: goto label_2893a4;
        case 0x2893a8u: goto label_2893a8;
        case 0x2893acu: goto label_2893ac;
        case 0x2893b0u: goto label_2893b0;
        case 0x2893b4u: goto label_2893b4;
        case 0x2893b8u: goto label_2893b8;
        case 0x2893bcu: goto label_2893bc;
        case 0x2893c0u: goto label_2893c0;
        case 0x2893c4u: goto label_2893c4;
        case 0x2893c8u: goto label_2893c8;
        case 0x2893ccu: goto label_2893cc;
        case 0x2893d0u: goto label_2893d0;
        case 0x2893d4u: goto label_2893d4;
        case 0x2893d8u: goto label_2893d8;
        case 0x2893dcu: goto label_2893dc;
        case 0x2893e0u: goto label_2893e0;
        case 0x2893e4u: goto label_2893e4;
        case 0x2893e8u: goto label_2893e8;
        case 0x2893ecu: goto label_2893ec;
        case 0x2893f0u: goto label_2893f0;
        case 0x2893f4u: goto label_2893f4;
        case 0x2893f8u: goto label_2893f8;
        case 0x2893fcu: goto label_2893fc;
        case 0x289400u: goto label_289400;
        case 0x289404u: goto label_289404;
        case 0x289408u: goto label_289408;
        case 0x28940cu: goto label_28940c;
        case 0x289410u: goto label_289410;
        case 0x289414u: goto label_289414;
        case 0x289418u: goto label_289418;
        case 0x28941cu: goto label_28941c;
        case 0x289420u: goto label_289420;
        case 0x289424u: goto label_289424;
        case 0x289428u: goto label_289428;
        case 0x28942cu: goto label_28942c;
        case 0x289430u: goto label_289430;
        case 0x289434u: goto label_289434;
        case 0x289438u: goto label_289438;
        case 0x28943cu: goto label_28943c;
        case 0x289440u: goto label_289440;
        case 0x289444u: goto label_289444;
        case 0x289448u: goto label_289448;
        case 0x28944cu: goto label_28944c;
        case 0x289450u: goto label_289450;
        case 0x289454u: goto label_289454;
        case 0x289458u: goto label_289458;
        case 0x28945cu: goto label_28945c;
        case 0x289460u: goto label_289460;
        case 0x289464u: goto label_289464;
        case 0x289468u: goto label_289468;
        case 0x28946cu: goto label_28946c;
        case 0x289470u: goto label_289470;
        case 0x289474u: goto label_289474;
        case 0x289478u: goto label_289478;
        case 0x28947cu: goto label_28947c;
        case 0x289480u: goto label_289480;
        case 0x289484u: goto label_289484;
        case 0x289488u: goto label_289488;
        case 0x28948cu: goto label_28948c;
        case 0x289490u: goto label_289490;
        case 0x289494u: goto label_289494;
        case 0x289498u: goto label_289498;
        case 0x28949cu: goto label_28949c;
        case 0x2894a0u: goto label_2894a0;
        case 0x2894a4u: goto label_2894a4;
        case 0x2894a8u: goto label_2894a8;
        case 0x2894acu: goto label_2894ac;
        case 0x2894b0u: goto label_2894b0;
        case 0x2894b4u: goto label_2894b4;
        case 0x2894b8u: goto label_2894b8;
        case 0x2894bcu: goto label_2894bc;
        case 0x2894c0u: goto label_2894c0;
        case 0x2894c4u: goto label_2894c4;
        case 0x2894c8u: goto label_2894c8;
        case 0x2894ccu: goto label_2894cc;
        case 0x2894d0u: goto label_2894d0;
        case 0x2894d4u: goto label_2894d4;
        case 0x2894d8u: goto label_2894d8;
        case 0x2894dcu: goto label_2894dc;
        case 0x2894e0u: goto label_2894e0;
        case 0x2894e4u: goto label_2894e4;
        case 0x2894e8u: goto label_2894e8;
        case 0x2894ecu: goto label_2894ec;
        case 0x2894f0u: goto label_2894f0;
        case 0x2894f4u: goto label_2894f4;
        case 0x2894f8u: goto label_2894f8;
        case 0x2894fcu: goto label_2894fc;
        case 0x289500u: goto label_289500;
        case 0x289504u: goto label_289504;
        case 0x289508u: goto label_289508;
        case 0x28950cu: goto label_28950c;
        case 0x289510u: goto label_289510;
        case 0x289514u: goto label_289514;
        case 0x289518u: goto label_289518;
        case 0x28951cu: goto label_28951c;
        case 0x289520u: goto label_289520;
        case 0x289524u: goto label_289524;
        case 0x289528u: goto label_289528;
        case 0x28952cu: goto label_28952c;
        case 0x289530u: goto label_289530;
        case 0x289534u: goto label_289534;
        case 0x289538u: goto label_289538;
        case 0x28953cu: goto label_28953c;
        case 0x289540u: goto label_289540;
        case 0x289544u: goto label_289544;
        case 0x289548u: goto label_289548;
        case 0x28954cu: goto label_28954c;
        case 0x289550u: goto label_289550;
        case 0x289554u: goto label_289554;
        case 0x289558u: goto label_289558;
        case 0x28955cu: goto label_28955c;
        case 0x289560u: goto label_289560;
        case 0x289564u: goto label_289564;
        case 0x289568u: goto label_289568;
        case 0x28956cu: goto label_28956c;
        case 0x289570u: goto label_289570;
        case 0x289574u: goto label_289574;
        case 0x289578u: goto label_289578;
        case 0x28957cu: goto label_28957c;
        case 0x289580u: goto label_289580;
        case 0x289584u: goto label_289584;
        case 0x289588u: goto label_289588;
        case 0x28958cu: goto label_28958c;
        case 0x289590u: goto label_289590;
        case 0x289594u: goto label_289594;
        case 0x289598u: goto label_289598;
        case 0x28959cu: goto label_28959c;
        case 0x2895a0u: goto label_2895a0;
        case 0x2895a4u: goto label_2895a4;
        case 0x2895a8u: goto label_2895a8;
        case 0x2895acu: goto label_2895ac;
        case 0x2895b0u: goto label_2895b0;
        case 0x2895b4u: goto label_2895b4;
        case 0x2895b8u: goto label_2895b8;
        case 0x2895bcu: goto label_2895bc;
        case 0x2895c0u: goto label_2895c0;
        case 0x2895c4u: goto label_2895c4;
        case 0x2895c8u: goto label_2895c8;
        case 0x2895ccu: goto label_2895cc;
        case 0x2895d0u: goto label_2895d0;
        case 0x2895d4u: goto label_2895d4;
        case 0x2895d8u: goto label_2895d8;
        case 0x2895dcu: goto label_2895dc;
        case 0x2895e0u: goto label_2895e0;
        case 0x2895e4u: goto label_2895e4;
        case 0x2895e8u: goto label_2895e8;
        case 0x2895ecu: goto label_2895ec;
        case 0x2895f0u: goto label_2895f0;
        case 0x2895f4u: goto label_2895f4;
        case 0x2895f8u: goto label_2895f8;
        case 0x2895fcu: goto label_2895fc;
        case 0x289600u: goto label_289600;
        case 0x289604u: goto label_289604;
        case 0x289608u: goto label_289608;
        case 0x28960cu: goto label_28960c;
        case 0x289610u: goto label_289610;
        case 0x289614u: goto label_289614;
        case 0x289618u: goto label_289618;
        case 0x28961cu: goto label_28961c;
        case 0x289620u: goto label_289620;
        case 0x289624u: goto label_289624;
        case 0x289628u: goto label_289628;
        case 0x28962cu: goto label_28962c;
        case 0x289630u: goto label_289630;
        case 0x289634u: goto label_289634;
        case 0x289638u: goto label_289638;
        case 0x28963cu: goto label_28963c;
        case 0x289640u: goto label_289640;
        case 0x289644u: goto label_289644;
        case 0x289648u: goto label_289648;
        case 0x28964cu: goto label_28964c;
        case 0x289650u: goto label_289650;
        case 0x289654u: goto label_289654;
        case 0x289658u: goto label_289658;
        case 0x28965cu: goto label_28965c;
        case 0x289660u: goto label_289660;
        case 0x289664u: goto label_289664;
        case 0x289668u: goto label_289668;
        case 0x28966cu: goto label_28966c;
        case 0x289670u: goto label_289670;
        case 0x289674u: goto label_289674;
        case 0x289678u: goto label_289678;
        case 0x28967cu: goto label_28967c;
        case 0x289680u: goto label_289680;
        case 0x289684u: goto label_289684;
        case 0x289688u: goto label_289688;
        case 0x28968cu: goto label_28968c;
        case 0x289690u: goto label_289690;
        case 0x289694u: goto label_289694;
        case 0x289698u: goto label_289698;
        case 0x28969cu: goto label_28969c;
        case 0x2896a0u: goto label_2896a0;
        case 0x2896a4u: goto label_2896a4;
        case 0x2896a8u: goto label_2896a8;
        case 0x2896acu: goto label_2896ac;
        case 0x2896b0u: goto label_2896b0;
        case 0x2896b4u: goto label_2896b4;
        case 0x2896b8u: goto label_2896b8;
        case 0x2896bcu: goto label_2896bc;
        case 0x2896c0u: goto label_2896c0;
        case 0x2896c4u: goto label_2896c4;
        case 0x2896c8u: goto label_2896c8;
        case 0x2896ccu: goto label_2896cc;
        case 0x2896d0u: goto label_2896d0;
        case 0x2896d4u: goto label_2896d4;
        case 0x2896d8u: goto label_2896d8;
        case 0x2896dcu: goto label_2896dc;
        case 0x2896e0u: goto label_2896e0;
        case 0x2896e4u: goto label_2896e4;
        case 0x2896e8u: goto label_2896e8;
        case 0x2896ecu: goto label_2896ec;
        case 0x2896f0u: goto label_2896f0;
        case 0x2896f4u: goto label_2896f4;
        case 0x2896f8u: goto label_2896f8;
        case 0x2896fcu: goto label_2896fc;
        case 0x289700u: goto label_289700;
        case 0x289704u: goto label_289704;
        case 0x289708u: goto label_289708;
        case 0x28970cu: goto label_28970c;
        case 0x289710u: goto label_289710;
        case 0x289714u: goto label_289714;
        case 0x289718u: goto label_289718;
        case 0x28971cu: goto label_28971c;
        case 0x289720u: goto label_289720;
        case 0x289724u: goto label_289724;
        case 0x289728u: goto label_289728;
        case 0x28972cu: goto label_28972c;
        case 0x289730u: goto label_289730;
        case 0x289734u: goto label_289734;
        case 0x289738u: goto label_289738;
        case 0x28973cu: goto label_28973c;
        case 0x289740u: goto label_289740;
        case 0x289744u: goto label_289744;
        case 0x289748u: goto label_289748;
        case 0x28974cu: goto label_28974c;
        case 0x289750u: goto label_289750;
        case 0x289754u: goto label_289754;
        case 0x289758u: goto label_289758;
        case 0x28975cu: goto label_28975c;
        case 0x289760u: goto label_289760;
        case 0x289764u: goto label_289764;
        case 0x289768u: goto label_289768;
        case 0x28976cu: goto label_28976c;
        case 0x289770u: goto label_289770;
        case 0x289774u: goto label_289774;
        case 0x289778u: goto label_289778;
        case 0x28977cu: goto label_28977c;
        case 0x289780u: goto label_289780;
        case 0x289784u: goto label_289784;
        case 0x289788u: goto label_289788;
        case 0x28978cu: goto label_28978c;
        case 0x289790u: goto label_289790;
        case 0x289794u: goto label_289794;
        case 0x289798u: goto label_289798;
        case 0x28979cu: goto label_28979c;
        case 0x2897a0u: goto label_2897a0;
        case 0x2897a4u: goto label_2897a4;
        case 0x2897a8u: goto label_2897a8;
        case 0x2897acu: goto label_2897ac;
        case 0x2897b0u: goto label_2897b0;
        case 0x2897b4u: goto label_2897b4;
        case 0x2897b8u: goto label_2897b8;
        case 0x2897bcu: goto label_2897bc;
        case 0x2897c0u: goto label_2897c0;
        case 0x2897c4u: goto label_2897c4;
        case 0x2897c8u: goto label_2897c8;
        case 0x2897ccu: goto label_2897cc;
        case 0x2897d0u: goto label_2897d0;
        case 0x2897d4u: goto label_2897d4;
        case 0x2897d8u: goto label_2897d8;
        case 0x2897dcu: goto label_2897dc;
        case 0x2897e0u: goto label_2897e0;
        case 0x2897e4u: goto label_2897e4;
        case 0x2897e8u: goto label_2897e8;
        case 0x2897ecu: goto label_2897ec;
        case 0x2897f0u: goto label_2897f0;
        case 0x2897f4u: goto label_2897f4;
        case 0x2897f8u: goto label_2897f8;
        case 0x2897fcu: goto label_2897fc;
        case 0x289800u: goto label_289800;
        case 0x289804u: goto label_289804;
        case 0x289808u: goto label_289808;
        case 0x28980cu: goto label_28980c;
        case 0x289810u: goto label_289810;
        case 0x289814u: goto label_289814;
        case 0x289818u: goto label_289818;
        case 0x28981cu: goto label_28981c;
        case 0x289820u: goto label_289820;
        case 0x289824u: goto label_289824;
        case 0x289828u: goto label_289828;
        case 0x28982cu: goto label_28982c;
        case 0x289830u: goto label_289830;
        case 0x289834u: goto label_289834;
        case 0x289838u: goto label_289838;
        case 0x28983cu: goto label_28983c;
        case 0x289840u: goto label_289840;
        case 0x289844u: goto label_289844;
        case 0x289848u: goto label_289848;
        case 0x28984cu: goto label_28984c;
        case 0x289850u: goto label_289850;
        case 0x289854u: goto label_289854;
        case 0x289858u: goto label_289858;
        case 0x28985cu: goto label_28985c;
        case 0x289860u: goto label_289860;
        case 0x289864u: goto label_289864;
        case 0x289868u: goto label_289868;
        case 0x28986cu: goto label_28986c;
        case 0x289870u: goto label_289870;
        case 0x289874u: goto label_289874;
        case 0x289878u: goto label_289878;
        case 0x28987cu: goto label_28987c;
        case 0x289880u: goto label_289880;
        case 0x289884u: goto label_289884;
        case 0x289888u: goto label_289888;
        case 0x28988cu: goto label_28988c;
        case 0x289890u: goto label_289890;
        case 0x289894u: goto label_289894;
        case 0x289898u: goto label_289898;
        case 0x28989cu: goto label_28989c;
        case 0x2898a0u: goto label_2898a0;
        case 0x2898a4u: goto label_2898a4;
        case 0x2898a8u: goto label_2898a8;
        case 0x2898acu: goto label_2898ac;
        case 0x2898b0u: goto label_2898b0;
        case 0x2898b4u: goto label_2898b4;
        case 0x2898b8u: goto label_2898b8;
        case 0x2898bcu: goto label_2898bc;
        case 0x2898c0u: goto label_2898c0;
        case 0x2898c4u: goto label_2898c4;
        case 0x2898c8u: goto label_2898c8;
        case 0x2898ccu: goto label_2898cc;
        case 0x2898d0u: goto label_2898d0;
        case 0x2898d4u: goto label_2898d4;
        case 0x2898d8u: goto label_2898d8;
        case 0x2898dcu: goto label_2898dc;
        case 0x2898e0u: goto label_2898e0;
        case 0x2898e4u: goto label_2898e4;
        case 0x2898e8u: goto label_2898e8;
        case 0x2898ecu: goto label_2898ec;
        case 0x2898f0u: goto label_2898f0;
        case 0x2898f4u: goto label_2898f4;
        case 0x2898f8u: goto label_2898f8;
        case 0x2898fcu: goto label_2898fc;
        case 0x289900u: goto label_289900;
        case 0x289904u: goto label_289904;
        case 0x289908u: goto label_289908;
        case 0x28990cu: goto label_28990c;
        case 0x289910u: goto label_289910;
        case 0x289914u: goto label_289914;
        case 0x289918u: goto label_289918;
        case 0x28991cu: goto label_28991c;
        case 0x289920u: goto label_289920;
        case 0x289924u: goto label_289924;
        case 0x289928u: goto label_289928;
        case 0x28992cu: goto label_28992c;
        case 0x289930u: goto label_289930;
        case 0x289934u: goto label_289934;
        case 0x289938u: goto label_289938;
        case 0x28993cu: goto label_28993c;
        case 0x289940u: goto label_289940;
        case 0x289944u: goto label_289944;
        case 0x289948u: goto label_289948;
        case 0x28994cu: goto label_28994c;
        case 0x289950u: goto label_289950;
        case 0x289954u: goto label_289954;
        case 0x289958u: goto label_289958;
        case 0x28995cu: goto label_28995c;
        case 0x289960u: goto label_289960;
        case 0x289964u: goto label_289964;
        case 0x289968u: goto label_289968;
        case 0x28996cu: goto label_28996c;
        case 0x289970u: goto label_289970;
        case 0x289974u: goto label_289974;
        case 0x289978u: goto label_289978;
        case 0x28997cu: goto label_28997c;
        case 0x289980u: goto label_289980;
        case 0x289984u: goto label_289984;
        case 0x289988u: goto label_289988;
        case 0x28998cu: goto label_28998c;
        case 0x289990u: goto label_289990;
        case 0x289994u: goto label_289994;
        case 0x289998u: goto label_289998;
        case 0x28999cu: goto label_28999c;
        case 0x2899a0u: goto label_2899a0;
        case 0x2899a4u: goto label_2899a4;
        case 0x2899a8u: goto label_2899a8;
        case 0x2899acu: goto label_2899ac;
        case 0x2899b0u: goto label_2899b0;
        case 0x2899b4u: goto label_2899b4;
        case 0x2899b8u: goto label_2899b8;
        case 0x2899bcu: goto label_2899bc;
        case 0x2899c0u: goto label_2899c0;
        case 0x2899c4u: goto label_2899c4;
        case 0x2899c8u: goto label_2899c8;
        case 0x2899ccu: goto label_2899cc;
        case 0x2899d0u: goto label_2899d0;
        case 0x2899d4u: goto label_2899d4;
        case 0x2899d8u: goto label_2899d8;
        case 0x2899dcu: goto label_2899dc;
        case 0x2899e0u: goto label_2899e0;
        case 0x2899e4u: goto label_2899e4;
        case 0x2899e8u: goto label_2899e8;
        case 0x2899ecu: goto label_2899ec;
        case 0x2899f0u: goto label_2899f0;
        case 0x2899f4u: goto label_2899f4;
        case 0x2899f8u: goto label_2899f8;
        case 0x2899fcu: goto label_2899fc;
        case 0x289a00u: goto label_289a00;
        case 0x289a04u: goto label_289a04;
        case 0x289a08u: goto label_289a08;
        case 0x289a0cu: goto label_289a0c;
        case 0x289a10u: goto label_289a10;
        case 0x289a14u: goto label_289a14;
        case 0x289a18u: goto label_289a18;
        case 0x289a1cu: goto label_289a1c;
        case 0x289a20u: goto label_289a20;
        case 0x289a24u: goto label_289a24;
        case 0x289a28u: goto label_289a28;
        case 0x289a2cu: goto label_289a2c;
        case 0x289a30u: goto label_289a30;
        case 0x289a34u: goto label_289a34;
        case 0x289a38u: goto label_289a38;
        case 0x289a3cu: goto label_289a3c;
        case 0x289a40u: goto label_289a40;
        case 0x289a44u: goto label_289a44;
        case 0x289a48u: goto label_289a48;
        case 0x289a4cu: goto label_289a4c;
        case 0x289a50u: goto label_289a50;
        case 0x289a54u: goto label_289a54;
        case 0x289a58u: goto label_289a58;
        case 0x289a5cu: goto label_289a5c;
        case 0x289a60u: goto label_289a60;
        case 0x289a64u: goto label_289a64;
        case 0x289a68u: goto label_289a68;
        case 0x289a6cu: goto label_289a6c;
        case 0x289a70u: goto label_289a70;
        case 0x289a74u: goto label_289a74;
        case 0x289a78u: goto label_289a78;
        case 0x289a7cu: goto label_289a7c;
        case 0x289a80u: goto label_289a80;
        case 0x289a84u: goto label_289a84;
        case 0x289a88u: goto label_289a88;
        case 0x289a8cu: goto label_289a8c;
        case 0x289a90u: goto label_289a90;
        case 0x289a94u: goto label_289a94;
        case 0x289a98u: goto label_289a98;
        case 0x289a9cu: goto label_289a9c;
        case 0x289aa0u: goto label_289aa0;
        case 0x289aa4u: goto label_289aa4;
        case 0x289aa8u: goto label_289aa8;
        case 0x289aacu: goto label_289aac;
        case 0x289ab0u: goto label_289ab0;
        case 0x289ab4u: goto label_289ab4;
        case 0x289ab8u: goto label_289ab8;
        case 0x289abcu: goto label_289abc;
        case 0x289ac0u: goto label_289ac0;
        case 0x289ac4u: goto label_289ac4;
        case 0x289ac8u: goto label_289ac8;
        case 0x289accu: goto label_289acc;
        case 0x289ad0u: goto label_289ad0;
        case 0x289ad4u: goto label_289ad4;
        case 0x289ad8u: goto label_289ad8;
        case 0x289adcu: goto label_289adc;
        case 0x289ae0u: goto label_289ae0;
        case 0x289ae4u: goto label_289ae4;
        case 0x289ae8u: goto label_289ae8;
        case 0x289aecu: goto label_289aec;
        case 0x289af0u: goto label_289af0;
        case 0x289af4u: goto label_289af4;
        case 0x289af8u: goto label_289af8;
        case 0x289afcu: goto label_289afc;
        case 0x289b00u: goto label_289b00;
        case 0x289b04u: goto label_289b04;
        case 0x289b08u: goto label_289b08;
        case 0x289b0cu: goto label_289b0c;
        case 0x289b10u: goto label_289b10;
        case 0x289b14u: goto label_289b14;
        case 0x289b18u: goto label_289b18;
        case 0x289b1cu: goto label_289b1c;
        case 0x289b20u: goto label_289b20;
        case 0x289b24u: goto label_289b24;
        case 0x289b28u: goto label_289b28;
        case 0x289b2cu: goto label_289b2c;
        case 0x289b30u: goto label_289b30;
        case 0x289b34u: goto label_289b34;
        case 0x289b38u: goto label_289b38;
        case 0x289b3cu: goto label_289b3c;
        case 0x289b40u: goto label_289b40;
        case 0x289b44u: goto label_289b44;
        case 0x289b48u: goto label_289b48;
        case 0x289b4cu: goto label_289b4c;
        case 0x289b50u: goto label_289b50;
        case 0x289b54u: goto label_289b54;
        case 0x289b58u: goto label_289b58;
        case 0x289b5cu: goto label_289b5c;
        case 0x289b60u: goto label_289b60;
        case 0x289b64u: goto label_289b64;
        case 0x289b68u: goto label_289b68;
        case 0x289b6cu: goto label_289b6c;
        case 0x289b70u: goto label_289b70;
        case 0x289b74u: goto label_289b74;
        case 0x289b78u: goto label_289b78;
        case 0x289b7cu: goto label_289b7c;
        case 0x289b80u: goto label_289b80;
        case 0x289b84u: goto label_289b84;
        case 0x289b88u: goto label_289b88;
        case 0x289b8cu: goto label_289b8c;
        case 0x289b90u: goto label_289b90;
        case 0x289b94u: goto label_289b94;
        case 0x289b98u: goto label_289b98;
        case 0x289b9cu: goto label_289b9c;
        case 0x289ba0u: goto label_289ba0;
        case 0x289ba4u: goto label_289ba4;
        case 0x289ba8u: goto label_289ba8;
        case 0x289bacu: goto label_289bac;
        case 0x289bb0u: goto label_289bb0;
        case 0x289bb4u: goto label_289bb4;
        case 0x289bb8u: goto label_289bb8;
        case 0x289bbcu: goto label_289bbc;
        case 0x289bc0u: goto label_289bc0;
        case 0x289bc4u: goto label_289bc4;
        case 0x289bc8u: goto label_289bc8;
        case 0x289bccu: goto label_289bcc;
        case 0x289bd0u: goto label_289bd0;
        case 0x289bd4u: goto label_289bd4;
        case 0x289bd8u: goto label_289bd8;
        case 0x289bdcu: goto label_289bdc;
        case 0x289be0u: goto label_289be0;
        case 0x289be4u: goto label_289be4;
        case 0x289be8u: goto label_289be8;
        case 0x289becu: goto label_289bec;
        case 0x289bf0u: goto label_289bf0;
        case 0x289bf4u: goto label_289bf4;
        case 0x289bf8u: goto label_289bf8;
        case 0x289bfcu: goto label_289bfc;
        case 0x289c00u: goto label_289c00;
        case 0x289c04u: goto label_289c04;
        case 0x289c08u: goto label_289c08;
        case 0x289c0cu: goto label_289c0c;
        case 0x289c10u: goto label_289c10;
        case 0x289c14u: goto label_289c14;
        case 0x289c18u: goto label_289c18;
        case 0x289c1cu: goto label_289c1c;
        case 0x289c20u: goto label_289c20;
        case 0x289c24u: goto label_289c24;
        case 0x289c28u: goto label_289c28;
        case 0x289c2cu: goto label_289c2c;
        case 0x289c30u: goto label_289c30;
        case 0x289c34u: goto label_289c34;
        case 0x289c38u: goto label_289c38;
        case 0x289c3cu: goto label_289c3c;
        case 0x289c40u: goto label_289c40;
        case 0x289c44u: goto label_289c44;
        case 0x289c48u: goto label_289c48;
        case 0x289c4cu: goto label_289c4c;
        case 0x289c50u: goto label_289c50;
        case 0x289c54u: goto label_289c54;
        case 0x289c58u: goto label_289c58;
        case 0x289c5cu: goto label_289c5c;
        case 0x289c60u: goto label_289c60;
        case 0x289c64u: goto label_289c64;
        case 0x289c68u: goto label_289c68;
        case 0x289c6cu: goto label_289c6c;
        case 0x289c70u: goto label_289c70;
        case 0x289c74u: goto label_289c74;
        case 0x289c78u: goto label_289c78;
        case 0x289c7cu: goto label_289c7c;
        case 0x289c80u: goto label_289c80;
        case 0x289c84u: goto label_289c84;
        case 0x289c88u: goto label_289c88;
        case 0x289c8cu: goto label_289c8c;
        case 0x289c90u: goto label_289c90;
        case 0x289c94u: goto label_289c94;
        case 0x289c98u: goto label_289c98;
        case 0x289c9cu: goto label_289c9c;
        case 0x289ca0u: goto label_289ca0;
        case 0x289ca4u: goto label_289ca4;
        case 0x289ca8u: goto label_289ca8;
        case 0x289cacu: goto label_289cac;
        case 0x289cb0u: goto label_289cb0;
        case 0x289cb4u: goto label_289cb4;
        case 0x289cb8u: goto label_289cb8;
        case 0x289cbcu: goto label_289cbc;
        case 0x289cc0u: goto label_289cc0;
        case 0x289cc4u: goto label_289cc4;
        case 0x289cc8u: goto label_289cc8;
        case 0x289cccu: goto label_289ccc;
        case 0x289cd0u: goto label_289cd0;
        case 0x289cd4u: goto label_289cd4;
        case 0x289cd8u: goto label_289cd8;
        case 0x289cdcu: goto label_289cdc;
        case 0x289ce0u: goto label_289ce0;
        case 0x289ce4u: goto label_289ce4;
        case 0x289ce8u: goto label_289ce8;
        case 0x289cecu: goto label_289cec;
        case 0x289cf0u: goto label_289cf0;
        case 0x289cf4u: goto label_289cf4;
        case 0x289cf8u: goto label_289cf8;
        case 0x289cfcu: goto label_289cfc;
        case 0x289d00u: goto label_289d00;
        case 0x289d04u: goto label_289d04;
        case 0x289d08u: goto label_289d08;
        case 0x289d0cu: goto label_289d0c;
        case 0x289d10u: goto label_289d10;
        case 0x289d14u: goto label_289d14;
        case 0x289d18u: goto label_289d18;
        case 0x289d1cu: goto label_289d1c;
        case 0x289d20u: goto label_289d20;
        case 0x289d24u: goto label_289d24;
        case 0x289d28u: goto label_289d28;
        case 0x289d2cu: goto label_289d2c;
        case 0x289d30u: goto label_289d30;
        case 0x289d34u: goto label_289d34;
        case 0x289d38u: goto label_289d38;
        case 0x289d3cu: goto label_289d3c;
        case 0x289d40u: goto label_289d40;
        case 0x289d44u: goto label_289d44;
        case 0x289d48u: goto label_289d48;
        case 0x289d4cu: goto label_289d4c;
        case 0x289d50u: goto label_289d50;
        case 0x289d54u: goto label_289d54;
        case 0x289d58u: goto label_289d58;
        case 0x289d5cu: goto label_289d5c;
        case 0x289d60u: goto label_289d60;
        case 0x289d64u: goto label_289d64;
        default: break;
    }

    ctx->pc = 0x289138u;

label_289138:
    // 0x289138: 0x27bdfc30  addiu       $sp, $sp, -0x3D0
    ctx->pc = 0x289138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966320));
label_28913c:
    // 0x28913c: 0x7fb00380  sq          $s0, 0x380($sp)
    ctx->pc = 0x28913cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 16));
label_289140:
    // 0x289140: 0x7fb10370  sq          $s1, 0x370($sp)
    ctx->pc = 0x289140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 17));
label_289144:
    // 0x289144: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x289144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_289148:
    // 0x289148: 0x7fb20360  sq          $s2, 0x360($sp)
    ctx->pc = 0x289148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 18));
label_28914c:
    // 0x28914c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28914cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_289150:
    // 0x289150: 0x7fb70310  sq          $s7, 0x310($sp)
    ctx->pc = 0x289150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 23));
label_289154:
    // 0x289154: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x289154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_289158:
    // 0x289158: 0xe7b703a8  swc1        $f23, 0x3A8($sp)
    ctx->pc = 0x289158u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 936), bits); }
label_28915c:
    // 0x28915c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x28915cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_289160:
    // 0x289160: 0x7fb30350  sq          $s3, 0x350($sp)
    ctx->pc = 0x289160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 19));
label_289164:
    // 0x289164: 0x7fb40340  sq          $s4, 0x340($sp)
    ctx->pc = 0x289164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 20));
label_289168:
    // 0x289168: 0x7fb50330  sq          $s5, 0x330($sp)
    ctx->pc = 0x289168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 21));
label_28916c:
    // 0x28916c: 0x7fb60320  sq          $s6, 0x320($sp)
    ctx->pc = 0x28916cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 22));
label_289170:
    // 0x289170: 0x7fbe0300  sq          $fp, 0x300($sp)
    ctx->pc = 0x289170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 30));
label_289174:
    // 0x289174: 0xffbf02f0  sd          $ra, 0x2F0($sp)
    ctx->pc = 0x289174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 31));
label_289178:
    // 0x289178: 0xe7ba03c0  swc1        $f26, 0x3C0($sp)
    ctx->pc = 0x289178u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 960), bits); }
label_28917c:
    // 0x28917c: 0xe7b903b8  swc1        $f25, 0x3B8($sp)
    ctx->pc = 0x28917cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 952), bits); }
label_289180:
    // 0x289180: 0xe7b803b0  swc1        $f24, 0x3B0($sp)
    ctx->pc = 0x289180u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 944), bits); }
label_289184:
    // 0x289184: 0xe7b603a0  swc1        $f22, 0x3A0($sp)
    ctx->pc = 0x289184u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
label_289188:
    // 0x289188: 0xe7b50398  swc1        $f21, 0x398($sp)
    ctx->pc = 0x289188u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 920), bits); }
label_28918c:
    // 0x28918c: 0xe7b40390  swc1        $f20, 0x390($sp)
    ctx->pc = 0x28918cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
label_289190:
    // 0x289190: 0x9242002a  lbu         $v0, 0x2A($s2)
    ctx->pc = 0x289190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 42)));
label_289194:
    // 0x289194: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_289198:
    if (ctx->pc == 0x289198u) {
        ctx->pc = 0x289198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289194u;
        // 0x289198: 0x460065c6  mov.s       $f23, $f12 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28919Cu;
        goto label_28919c;
    }
    ctx->pc = 0x289194u;
    {
        const bool branch_taken_0x289194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289194u;
        // 0x289198: 0x460065c6  mov.s       $f23, $f12 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289194) {
            ctx->pc = 0x2891DCu;
            goto label_2891dc;
        }
    }
    ctx->pc = 0x28919Cu;
label_28919c:
    // 0x28919c: 0x96420032  lhu         $v0, 0x32($s2)
    ctx->pc = 0x28919cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_2891a0:
    // 0x2891a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2891a4:
    if (ctx->pc == 0x2891A4u) {
        ctx->pc = 0x2891A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891A0u;
        // 0x2891a4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2891A8u;
        goto label_2891a8;
    }
    ctx->pc = 0x2891A0u;
    {
        const bool branch_taken_0x2891a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2891A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891A0u;
        // 0x2891a4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891a0) {
            ctx->pc = 0x2891ACu;
            goto label_2891ac;
        }
    }
    ctx->pc = 0x2891A8u;
label_2891a8:
    // 0x2891a8: 0xa6420032  sh          $v0, 0x32($s2)
    ctx->pc = 0x2891a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 50), (uint16_t)GPR_U32(ctx, 2));
label_2891ac:
    // 0x2891ac: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2891acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2891b0:
    // 0x2891b0: 0x8c6200ec  lw          $v0, 0xEC($v1)
    ctx->pc = 0x2891b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
label_2891b4:
    // 0x2891b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2891b8:
    if (ctx->pc == 0x2891B8u) {
        ctx->pc = 0x2891B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891B4u;
        // 0x2891b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2891BCu;
        goto label_2891bc;
    }
    ctx->pc = 0x2891B4u;
    {
        const bool branch_taken_0x2891b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2891B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891B4u;
        // 0x2891b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891b4) {
            ctx->pc = 0x2891DCu;
            goto label_2891dc;
        }
    }
    ctx->pc = 0x2891BCu;
label_2891bc:
    // 0x2891bc: 0x8c760000  lw          $s6, 0x0($v1)
    ctx->pc = 0x2891bcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2891c0:
    // 0x2891c0: 0x82c40333  lb          $a0, 0x333($s6)
    ctx->pc = 0x2891c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 819)));
label_2891c4:
    // 0x2891c4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2891c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2891c8:
    // 0x2891c8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2891cc:
    if (ctx->pc == 0x2891CCu) {
        ctx->pc = 0x2891CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891C8u;
        // 0x2891cc: 0x92420028  lbu         $v0, 0x28($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2891D0u;
        goto label_2891d0;
    }
    ctx->pc = 0x2891C8u;
    {
        const bool branch_taken_0x2891c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2891c8) {
            ctx->pc = 0x2891CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2891C8u;
            // 0x2891cc: 0x92420028  lbu         $v0, 0x28($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2891E4u;
            goto label_2891e4;
        }
    }
    ctx->pc = 0x2891D0u;
label_2891d0:
    // 0x2891d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2891d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2891d4:
    // 0x2891d4: 0xc0a22dc  jal         func_288B70
label_2891d8:
    if (ctx->pc == 0x2891D8u) {
        ctx->pc = 0x2891D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891D4u;
        // 0x2891d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2891DCu;
        goto label_2891dc;
    }
    ctx->pc = 0x2891D4u;
    SET_GPR_U32(ctx, 31, 0x2891DCu);
    ctx->pc = 0x2891D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2891D4u;
    // 0x2891d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B70u, 0x2891D4u, 0x2891DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2891DCu;
label_2891dc:
    // 0x2891dc: 0x100002ce  b           . + 4 + (0x2CE << 2)
label_2891e0:
    if (ctx->pc == 0x2891E0u) {
        ctx->pc = 0x2891E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891DCu;
        // 0x2891e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2891E4u;
        goto label_2891e4;
    }
    ctx->pc = 0x2891DCu;
    {
        const bool branch_taken_0x2891dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2891E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891DCu;
        // 0x2891e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891dc) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x2891E4u;
label_2891e4:
    // 0x2891e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2891e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2891e8:
    // 0x2891e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2891e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2891ec:
    // 0x2891ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2891ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2891f0:
    // 0x2891f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2891f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2891f4:
    // 0x2891f4: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2891f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2891f8:
    // 0x2891f8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2891fc:
    if (ctx->pc == 0x2891FCu) {
        ctx->pc = 0x2891FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891F8u;
        // 0x2891fc: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289200u;
        goto label_289200;
    }
    ctx->pc = 0x2891F8u;
    {
        const bool branch_taken_0x2891f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2891FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891F8u;
        // 0x2891fc: 0xa2420028  sb          $v0, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891f8) {
            ctx->pc = 0x289218u;
            goto label_289218;
        }
    }
    ctx->pc = 0x289200u;
label_289200:
    // 0x289200: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x289200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_289204:
    // 0x289204: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x289204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_289208:
    // 0x289208: 0x104600c4  beq         $v0, $a2, . + 4 + (0xC4 << 2)
label_28920c:
    if (ctx->pc == 0x28920Cu) {
        ctx->pc = 0x28920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289208u;
        // 0x28920c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289210u;
        goto label_289210;
    }
    ctx->pc = 0x289208u;
    {
        const bool branch_taken_0x289208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x28920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289208u;
        // 0x28920c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289208) {
            ctx->pc = 0x28951Cu;
            goto label_28951c;
        }
    }
    ctx->pc = 0x289210u;
label_289210:
    // 0x289210: 0x100002c2  b           . + 4 + (0x2C2 << 2)
label_289214:
    if (ctx->pc == 0x289214u) {
        ctx->pc = 0x289214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289210u;
        // 0x289214: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289218u;
        goto label_289218;
    }
    ctx->pc = 0x289210u;
    {
        const bool branch_taken_0x289210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289210u;
        // 0x289214: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289210) {
            ctx->pc = 0x289D1Cu;
            goto label_289d1c;
        }
    }
    ctx->pc = 0x289218u;
label_289218:
    // 0x289218: 0xa2400028  sb          $zero, 0x28($s2)
    ctx->pc = 0x289218u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 0));
label_28921c:
    // 0x28921c: 0x26c40090  addiu       $a0, $s6, 0x90
    ctx->pc = 0x28921cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
label_289220:
    // 0x289220: 0xafa402e4  sw          $a0, 0x2E4($sp)
    ctx->pc = 0x289220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 4));
label_289224:
    // 0x289224: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x289224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_289228:
    // 0x289228: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x289228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_28922c:
    // 0x28922c: 0x3c01ce6e  lui         $at, 0xCE6E
    ctx->pc = 0x28922cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52846 << 16));
label_289230:
    // 0x289230: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x289230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_289234:
    // 0x289234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289238:
    // 0x289238: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x289238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_28923c:
    // 0x28923c: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x28923cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_289240:
    // 0x289240: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x289240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_289244:
    // 0x289244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x289244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_289248:
    // 0x289248: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x289248u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_28924c:
    // 0x28924c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x28924cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_289250:
    // 0x289250: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x289250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_289254:
    // 0x289254: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x289254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_289258:
    // 0x289258: 0x14a60007  bne         $a1, $a2, . + 4 + (0x7 << 2)
label_28925c:
    if (ctx->pc == 0x28925Cu) {
        ctx->pc = 0x28925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289258u;
        // 0x28925c: 0xc6d601ac  lwc1        $f22, 0x1AC($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x289260u;
        goto label_289260;
    }
    ctx->pc = 0x289258u;
    {
        const bool branch_taken_0x289258 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x28925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289258u;
        // 0x28925c: 0xc6d601ac  lwc1        $f22, 0x1AC($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289258) {
            ctx->pc = 0x289278u;
            goto label_289278;
        }
    }
    ctx->pc = 0x289260u;
label_289260:
    // 0x289260: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x289260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_289264:
    // 0x289264: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x289264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_289268:
    // 0x289268: 0xc08abac  jal         func_22AEB0
label_28926c:
    if (ctx->pc == 0x28926Cu) {
        ctx->pc = 0x28926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289268u;
        // 0x28926c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x289270u;
        goto label_289270;
    }
    ctx->pc = 0x289268u;
    SET_GPR_U32(ctx, 31, 0x289270u);
    ctx->pc = 0x28926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289268u;
    // 0x28926c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AEB0u, 0x289268u, 0x289270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289270u;
label_289270:
    // 0x289270: 0x504000ab  beql        $v0, $zero, . + 4 + (0xAB << 2)
label_289274:
    if (ctx->pc == 0x289274u) {
        ctx->pc = 0x289274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289270u;
        // 0x289274: 0x7a430000  lq          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289278u;
        goto label_289278;
    }
    ctx->pc = 0x289270u;
    {
        const bool branch_taken_0x289270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289270) {
            ctx->pc = 0x289274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289270u;
            // 0x289274: 0x7a430000  lq          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289520u;
            goto label_289520;
        }
    }
    ctx->pc = 0x289278u;
label_289278:
    // 0x289278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28927c:
    // 0x28927c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x28927cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_289280:
    // 0x289280: 0xc136afa  jal         func_4DABE8
label_289284:
    if (ctx->pc == 0x289284u) {
        ctx->pc = 0x289284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289280u;
        // 0x289284: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289288u;
        goto label_289288;
    }
    ctx->pc = 0x289280u;
    SET_GPR_U32(ctx, 31, 0x289288u);
    ctx->pc = 0x289284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289280u;
    // 0x289284: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x289280u, 0x289288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289288u;
label_289288:
    // 0x289288: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x289288u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28928c:
    // 0x28928c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x28928cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_289290:
    // 0x289290: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x289290u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_289294:
    // 0x289294: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x289294u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_289298:
    // 0x289298: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x289298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_28929c:
    // 0x28929c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x28929cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2892a0:
    // 0x2892a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2892a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2892a4:
    // 0x2892a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2892a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2892a8:
    // 0x2892a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2892a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2892ac:
    // 0x2892ac: 0x0  nop
    ctx->pc = 0x2892acu;
    // NOP
label_2892b0:
    // 0x2892b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2892b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2892b4:
    // 0x2892b4: 0x0  nop
    ctx->pc = 0x2892b4u;
    // NOP
label_2892b8:
    // 0x2892b8: 0x4501ffc8  bc1t        . + 4 + (-0x38 << 2)
label_2892bc:
    if (ctx->pc == 0x2892BCu) {
        ctx->pc = 0x2892BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892B8u;
        // 0x2892bc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2892C0u;
        goto label_2892c0;
    }
    ctx->pc = 0x2892B8u;
    {
        const bool branch_taken_0x2892b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2892BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892B8u;
        // 0x2892bc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892b8) {
            ctx->pc = 0x2891DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2891dc;
        }
    }
    ctx->pc = 0x2892C0u;
label_2892c0:
    // 0x2892c0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2892c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2892c4:
    // 0x2892c4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2892c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2892c8:
    // 0x2892c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2892c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2892cc:
    // 0x2892cc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2892ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2892d0:
    // 0x2892d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2892d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2892d4:
    // 0x2892d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2892d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2892d8:
    // 0x2892d8: 0x0  nop
    ctx->pc = 0x2892d8u;
    // NOP
label_2892dc:
    // 0x2892dc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2892e0:
    if (ctx->pc == 0x2892E0u) {
        ctx->pc = 0x2892E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892DCu;
        // 0x2892e0: 0x46020542  mul.s       $f21, $f0, $f2 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2892E4u;
        goto label_2892e4;
    }
    ctx->pc = 0x2892DCu;
    {
        const bool branch_taken_0x2892dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2892E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892DCu;
        // 0x2892e0: 0x46020542  mul.s       $f21, $f0, $f2 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892dc) {
            ctx->pc = 0x289310u;
            goto label_289310;
        }
    }
    ctx->pc = 0x2892E4u;
label_2892e4:
    // 0x2892e4: 0x92420029  lbu         $v0, 0x29($s2)
    ctx->pc = 0x2892e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
label_2892e8:
    // 0x2892e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2892e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2892ec:
    // 0x2892ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2892ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2892f0:
    // 0x2892f0: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x2892f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2892f4:
    // 0x2892f4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2892f8:
    if (ctx->pc == 0x2892F8u) {
        ctx->pc = 0x2892F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892F4u;
        // 0x2892f8: 0xa2420029  sb          $v0, 0x29($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2892FCu;
        goto label_2892fc;
    }
    ctx->pc = 0x2892F4u;
    {
        const bool branch_taken_0x2892f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2892F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892F4u;
        // 0x2892f8: 0xa2420029  sb          $v0, 0x29($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892f4) {
            ctx->pc = 0x289314u;
            goto label_289314;
        }
    }
    ctx->pc = 0x2892FCu;
label_2892fc:
    // 0x2892fc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2892fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_289300:
    // 0x289300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289304:
    // 0x289304: 0xa2400029  sb          $zero, 0x29($s2)
    ctx->pc = 0x289304u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 0));
label_289308:
    // 0x289308: 0x10000002  b           . + 4 + (0x2 << 2)
label_28930c:
    if (ctx->pc == 0x28930Cu) {
        ctx->pc = 0x28930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289308u;
        // 0x28930c: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x289310u;
        goto label_289310;
    }
    ctx->pc = 0x289308u;
    {
        const bool branch_taken_0x289308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289308u;
        // 0x28930c: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289308) {
            ctx->pc = 0x289314u;
            goto label_289314;
        }
    }
    ctx->pc = 0x289310u;
label_289310:
    // 0x289310: 0xa2400029  sb          $zero, 0x29($s2)
    ctx->pc = 0x289310u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 0));
label_289314:
    // 0x289314: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x289314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_289318:
    // 0x289318: 0x4615a800  add.s       $f0, $f21, $f21
    ctx->pc = 0x289318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_28931c:
    // 0x28931c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x28931cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_289320:
    // 0x289320: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_289324:
    // 0x289324: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x289324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_289328:
    // 0x289328: 0x460c0329  min.s       $f12, $f0, $f12
    ctx->pc = 0x289328u;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[12]);
label_28932c:
    // 0x28932c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x28932cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_289330:
    // 0x289330: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x289330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_289334:
    // 0x289334: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x289334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_289338:
    // 0x289338: 0xc089d2a  jal         func_2274A8
label_28933c:
    if (ctx->pc == 0x28933Cu) {
        ctx->pc = 0x28933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289338u;
        // 0x28933c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289340u;
        goto label_289340;
    }
    ctx->pc = 0x289338u;
    SET_GPR_U32(ctx, 31, 0x289340u);
    ctx->pc = 0x28933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289338u;
    // 0x28933c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x289338u, 0x289340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289340u;
label_289340:
    // 0x289340: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x289340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289344:
    // 0x289344: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x289344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_289348:
    // 0x289348: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x289348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_28934c:
    // 0x28934c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_289350:
    if (ctx->pc == 0x289350u) {
        ctx->pc = 0x289350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28934Cu;
        // 0x289350: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289354u;
        goto label_289354;
    }
    ctx->pc = 0x28934Cu;
    {
        const bool branch_taken_0x28934c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28934Cu;
        // 0x289350: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28934c) {
            ctx->pc = 0x289394u;
            goto label_289394;
        }
    }
    ctx->pc = 0x289354u;
label_289354:
    // 0x289354: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x289354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
label_289358:
    // 0x289358: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28935c:
    // 0x28935c: 0x9250002b  lbu         $s0, 0x2B($s2)
    ctx->pc = 0x28935cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 43)));
label_289360:
    // 0x289360: 0x46166301  sub.s       $f12, $f12, $f22
    ctx->pc = 0x289360u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[22]);
label_289364:
    // 0x289364: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x289364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_289368:
    // 0x289368: 0xc10b1c6  jal         func_42C718
label_28936c:
    if (ctx->pc == 0x28936Cu) {
        ctx->pc = 0x28936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289368u;
        // 0x28936c: 0xa242002b  sb          $v0, 0x2B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289370u;
        goto label_289370;
    }
    ctx->pc = 0x289368u;
    SET_GPR_U32(ctx, 31, 0x289370u);
    ctx->pc = 0x28936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289368u;
    // 0x28936c: 0xa242002b  sb          $v0, 0x2B($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x289368u, 0x289370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289370u;
label_289370:
    // 0x289370: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x289370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_289374:
    // 0x289374: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x289374u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_289378:
    // 0x289378: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_28937c:
    if (ctx->pc == 0x28937Cu) {
        ctx->pc = 0x289380u;
        goto label_289380;
    }
    ctx->pc = 0x289378u;
    {
        const bool branch_taken_0x289378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x289378) {
            ctx->pc = 0x28938Cu;
            goto label_28938c;
        }
    }
    ctx->pc = 0x289380u;
label_289380:
    // 0x289380: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x289380u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_289384:
    // 0x289384: 0x10000003  b           . + 4 + (0x3 << 2)
label_289388:
    if (ctx->pc == 0x289388u) {
        ctx->pc = 0x289388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289384u;
        // 0x289388: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28938Cu;
        goto label_28938c;
    }
    ctx->pc = 0x289384u;
    {
        const bool branch_taken_0x289384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289384u;
        // 0x289388: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289384) {
            ctx->pc = 0x289394u;
            goto label_289394;
        }
    }
    ctx->pc = 0x28938Cu;
label_28938c:
    // 0x28938c: 0xc0a22b4  jal         func_288AD0
label_289390:
    if (ctx->pc == 0x289390u) {
        ctx->pc = 0x289390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28938Cu;
        // 0x289390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289394u;
        goto label_289394;
    }
    ctx->pc = 0x28938Cu;
    SET_GPR_U32(ctx, 31, 0x289394u);
    ctx->pc = 0x289390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28938Cu;
    // 0x289390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288AD0u, 0x28938Cu, 0x289394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289394u;
label_289394:
    // 0x289394: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x289394u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_289398:
    // 0x289398: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x289398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_28939c:
    // 0x28939c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x28939cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2893a0:
    // 0x2893a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2893a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2893a4:
    // 0x2893a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2893a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2893a8:
    // 0x2893a8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2893a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2893ac:
    // 0x2893ac: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x2893acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2893b0:
    // 0x2893b0: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x2893b0u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2893b4:
    // 0x2893b4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2893b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2893b8:
    // 0x2893b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2893b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2893bc:
    // 0x2893bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2893bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2893c0:
    // 0x2893c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2893c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2893c4:
    // 0x2893c4: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2893c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2893c8:
    // 0x2893c8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2893c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2893cc:
    // 0x2893cc: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2893ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2893d0:
    // 0x2893d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2893d0u;
    // VWAITQ (Q already resolved in this runtime)
label_2893d4:
    // 0x2893d4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2893d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2893d8:
    // 0x2893d8: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x2893d8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_2893dc:
    // 0x2893dc: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x2893dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
label_2893e0:
    // 0x2893e0: 0x4488a000  mtc1        $t0, $f20
    ctx->pc = 0x2893e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2893e4:
    // 0x2893e4: 0x0  nop
    ctx->pc = 0x2893e4u;
    // NOP
label_2893e8:
    // 0x2893e8: 0x0  nop
    ctx->pc = 0x2893e8u;
    // NOP
label_2893ec:
    // 0x2893ec: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x2893ecu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
label_2893f0:
    // 0x2893f0: 0xc136b24  jal         func_4DAC90
label_2893f4:
    if (ctx->pc == 0x2893F4u) {
        ctx->pc = 0x2893F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2893F0u;
        // 0x2893f4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2893F8u;
        goto label_2893f8;
    }
    ctx->pc = 0x2893F0u;
    SET_GPR_U32(ctx, 31, 0x2893F8u);
    ctx->pc = 0x2893F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2893F0u;
    // 0x2893f4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2893F0u, 0x2893F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893F8u;
label_2893f8:
    // 0x2893f8: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x2893f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_2893fc:
    // 0x2893fc: 0x4617a501  sub.s       $f20, $f20, $f23
    ctx->pc = 0x2893fcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
label_289400:
    // 0x289400: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x289400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_289404:
    // 0x289404: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x289404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_289408:
    // 0x289408: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x289408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
label_28940c:
    // 0x28940c: 0x4614ab29  min.s       $f12, $f21, $f20
    ctx->pc = 0x28940cu;
    ctx->f[12] = std::min(ctx->f[21], ctx->f[20]);
label_289410:
    // 0x289410: 0xc136b24  jal         func_4DAC90
label_289414:
    if (ctx->pc == 0x289414u) {
        ctx->pc = 0x289418u;
        goto label_289418;
    }
    ctx->pc = 0x289410u;
    SET_GPR_U32(ctx, 31, 0x289418u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x289410u, 0x289418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289418u;
label_289418:
    // 0x289418: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x289418u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_28941c:
    // 0x28941c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28941cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_289420:
    // 0x289420: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x289420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289424:
    // 0x289424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_289428:
    // 0x289428: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x289428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_28942c:
    // 0x28942c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x28942cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_289430:
    // 0x289430: 0x27a80210  addiu       $t0, $sp, 0x210
    ctx->pc = 0x289430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_289434:
    // 0x289434: 0x27a90220  addiu       $t1, $sp, 0x220
    ctx->pc = 0x289434u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_289438:
    // 0x289438: 0xc0a2332  jal         func_288CC8
label_28943c:
    if (ctx->pc == 0x28943Cu) {
        ctx->pc = 0x28943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289438u;
        // 0x28943c: 0x27aa02e0  addiu       $t2, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289440u;
        goto label_289440;
    }
    ctx->pc = 0x289438u;
    SET_GPR_U32(ctx, 31, 0x289440u);
    ctx->pc = 0x28943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289438u;
    // 0x28943c: 0x27aa02e0  addiu       $t2, $sp, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288CC8u, 0x289438u, 0x289440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289440u;
label_289440:
    // 0x289440: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x289440u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289444:
    // 0x289444: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
label_289448:
    if (ctx->pc == 0x289448u) {
        ctx->pc = 0x28944Cu;
        goto label_28944c;
    }
    ctx->pc = 0x289444u;
    {
        const bool branch_taken_0x289444 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x289444) {
            ctx->pc = 0x289460u;
            goto label_289460;
        }
    }
    ctx->pc = 0x28944Cu;
label_28944c:
    // 0x28944c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x28944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_289450:
    // 0x289450: 0x10400231  beqz        $v0, . + 4 + (0x231 << 2)
label_289454:
    if (ctx->pc == 0x289454u) {
        ctx->pc = 0x289454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289450u;
        // 0x289454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289458u;
        goto label_289458;
    }
    ctx->pc = 0x289450u;
    {
        const bool branch_taken_0x289450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289450u;
        // 0x289454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289450) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x289458u;
label_289458:
    // 0x289458: 0x10000031  b           . + 4 + (0x31 << 2)
label_28945c:
    if (ctx->pc == 0x28945Cu) {
        ctx->pc = 0x28945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289458u;
        // 0x28945c: 0x7a430000  lq          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289460u;
        goto label_289460;
    }
    ctx->pc = 0x289458u;
    {
        const bool branch_taken_0x289458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289458u;
        // 0x28945c: 0x7a430000  lq          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289458) {
            ctx->pc = 0x289520u;
            goto label_289520;
        }
    }
    ctx->pc = 0x289460u;
label_289460:
    // 0x289460: 0xc087502  jal         func_21D408
label_289464:
    if (ctx->pc == 0x289464u) {
        ctx->pc = 0x289464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289460u;
        // 0x289464: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289468u;
        goto label_289468;
    }
    ctx->pc = 0x289460u;
    SET_GPR_U32(ctx, 31, 0x289468u);
    ctx->pc = 0x289464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289460u;
    // 0x289464: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x289460u, 0x289468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289468u;
label_289468:
    // 0x289468: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x289468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28946c:
    // 0x28946c: 0x8ec201a4  lw          $v0, 0x1A4($s6)
    ctx->pc = 0x28946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 420)));
label_289470:
    // 0x289470: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_289474:
    if (ctx->pc == 0x289474u) {
        ctx->pc = 0x289474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289470u;
        // 0x289474: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289478u;
        goto label_289478;
    }
    ctx->pc = 0x289470u;
    {
        const bool branch_taken_0x289470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289470u;
        // 0x289474: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289470) {
            ctx->pc = 0x2894A4u;
            goto label_2894a4;
        }
    }
    ctx->pc = 0x289478u;
label_289478:
    // 0x289478: 0xc08750a  jal         func_21D428
label_28947c:
    if (ctx->pc == 0x28947Cu) {
        ctx->pc = 0x28947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289478u;
        // 0x28947c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289480u;
        goto label_289480;
    }
    ctx->pc = 0x289478u;
    SET_GPR_U32(ctx, 31, 0x289480u);
    ctx->pc = 0x28947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289478u;
    // 0x28947c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x289478u, 0x289480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289480u;
label_289480:
    // 0x289480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289484:
    // 0x289484: 0xc0a58bc  jal         func_2962F0
label_289488:
    if (ctx->pc == 0x289488u) {
        ctx->pc = 0x289488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289484u;
        // 0x289488: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28948Cu;
        goto label_28948c;
    }
    ctx->pc = 0x289484u;
    SET_GPR_U32(ctx, 31, 0x28948Cu);
    ctx->pc = 0x289488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289484u;
    // 0x289488: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962F0u, 0x289484u, 0x28948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28948Cu;
label_28948c:
    // 0x28948c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28948cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_289490:
    // 0x289490: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_289494:
    if (ctx->pc == 0x289494u) {
        ctx->pc = 0x289494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289490u;
        // 0x289494: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289498u;
        goto label_289498;
    }
    ctx->pc = 0x289490u;
    {
        const bool branch_taken_0x289490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x289494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289490u;
        // 0x289494: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289490) {
            ctx->pc = 0x2894A4u;
            goto label_2894a4;
        }
    }
    ctx->pc = 0x289498u;
label_289498:
    // 0x289498: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x289498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_28949c:
    // 0x28949c: 0xc0a2318  jal         func_288C60
label_2894a0:
    if (ctx->pc == 0x2894A0u) {
        ctx->pc = 0x2894A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28949Cu;
        // 0x2894a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2894A4u;
        goto label_2894a4;
    }
    ctx->pc = 0x28949Cu;
    SET_GPR_U32(ctx, 31, 0x2894A4u);
    ctx->pc = 0x2894A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28949Cu;
    // 0x2894a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C60u, 0x28949Cu, 0x2894A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2894A4u;
label_2894a4:
    // 0x2894a4: 0xc7ac02e0  lwc1        $f12, 0x2E0($sp)
    ctx->pc = 0x2894a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2894a8:
    // 0x2894a8: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x2894a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_2894ac:
    // 0x2894ac: 0xc136b24  jal         func_4DAC90
label_2894b0:
    if (ctx->pc == 0x2894B0u) {
        ctx->pc = 0x2894B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2894ACu;
        // 0x2894b0: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2894B4u;
        goto label_2894b4;
    }
    ctx->pc = 0x2894ACu;
    SET_GPR_U32(ctx, 31, 0x2894B4u);
    ctx->pc = 0x2894B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2894ACu;
    // 0x2894b0: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2894ACu, 0x2894B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2894B4u;
label_2894b4:
    // 0x2894b4: 0x7ba20240  lq          $v0, 0x240($sp)
    ctx->pc = 0x2894b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_2894b8:
    // 0x2894b8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2894b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2894bc:
    // 0x2894bc: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2894bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2894c0:
    // 0x2894c0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2894c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2894c4:
    // 0x2894c4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2894c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2894c8:
    // 0x2894c8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2894c8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2894cc:
    // 0x2894cc: 0x4483d000  mtc1        $v1, $f26
    ctx->pc = 0x2894ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_2894d0:
    // 0x2894d0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x2894d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2894d4:
    // 0x2894d4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_2894d8:
    if (ctx->pc == 0x2894D8u) {
        ctx->pc = 0x2894D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2894D4u;
        // 0x2894d8: 0x7fa20230  sq          $v0, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2894DCu;
        goto label_2894dc;
    }
    ctx->pc = 0x2894D4u;
    {
        const bool branch_taken_0x2894d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2894D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2894D4u;
        // 0x2894d8: 0x7fa20230  sq          $v0, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894d4) {
            ctx->pc = 0x28952Cu;
            goto label_28952c;
        }
    }
    ctx->pc = 0x2894DCu;
label_2894dc:
    // 0x2894dc: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x2894dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_2894e0:
    // 0x2894e0: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2894e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2894e4:
    // 0x2894e4: 0xc136afa  jal         func_4DABE8
label_2894e8:
    if (ctx->pc == 0x2894E8u) {
        ctx->pc = 0x2894E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2894E4u;
        // 0x2894e8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2894ECu;
        goto label_2894ec;
    }
    ctx->pc = 0x2894E4u;
    SET_GPR_U32(ctx, 31, 0x2894ECu);
    ctx->pc = 0x2894E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2894E4u;
    // 0x2894e8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2894E4u, 0x2894ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2894ECu;
label_2894ec:
    // 0x2894ec: 0x7ba20240  lq          $v0, 0x240($sp)
    ctx->pc = 0x2894ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_2894f0:
    // 0x2894f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2894f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2894f4:
    // 0x2894f4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2894f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2894f8:
    // 0x2894f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2894f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2894fc:
    // 0x2894fc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2894fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_289500:
    // 0x289500: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x289500u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_289504:
    // 0x289504: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x289504u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289508:
    // 0x289508: 0x0  nop
    ctx->pc = 0x289508u;
    // NOP
label_28950c:
    // 0x28950c: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x28950cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289510:
    // 0x289510: 0x0  nop
    ctx->pc = 0x289510u;
    // NOP
label_289514:
    // 0x289514: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_289518:
    if (ctx->pc == 0x289518u) {
        ctx->pc = 0x289518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289514u;
        // 0x289518: 0x7fa20230  sq          $v0, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28951Cu;
        goto label_28951c;
    }
    ctx->pc = 0x289514u;
    {
        const bool branch_taken_0x289514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289514u;
        // 0x289518: 0x7fa20230  sq          $v0, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289514) {
            ctx->pc = 0x28952Cu;
            goto label_28952c;
        }
    }
    ctx->pc = 0x28951Cu;
label_28951c:
    // 0x28951c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x28951cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_289520:
    // 0x289520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_289524:
    // 0x289524: 0x100001fc  b           . + 4 + (0x1FC << 2)
label_289528:
    if (ctx->pc == 0x289528u) {
        ctx->pc = 0x289528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289524u;
        // 0x289528: 0x7ee30000  sq          $v1, 0x0($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28952Cu;
        goto label_28952c;
    }
    ctx->pc = 0x289524u;
    {
        const bool branch_taken_0x289524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289524u;
        // 0x289528: 0x7ee30000  sq          $v1, 0x0($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289524) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x28952Cu;
label_28952c:
    // 0x28952c: 0xc7ac02e0  lwc1        $f12, 0x2E0($sp)
    ctx->pc = 0x28952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_289530:
    // 0x289530: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x289530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_289534:
    // 0x289534: 0xc136b24  jal         func_4DAC90
label_289538:
    if (ctx->pc == 0x289538u) {
        ctx->pc = 0x289538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289534u;
        // 0x289538: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28953Cu;
        goto label_28953c;
    }
    ctx->pc = 0x289534u;
    SET_GPR_U32(ctx, 31, 0x28953Cu);
    ctx->pc = 0x289538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289534u;
    // 0x289538: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x289534u, 0x28953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28953Cu;
label_28953c:
    // 0x28953c: 0x7ba20250  lq          $v0, 0x250($sp)
    ctx->pc = 0x28953cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_289540:
    // 0x289540: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x289540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_289544:
    // 0x289544: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x289544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_289548:
    // 0x289548: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x289548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28954c:
    // 0x28954c: 0xc136b18  jal         func_4DAC60
label_289550:
    if (ctx->pc == 0x289550u) {
        ctx->pc = 0x289550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28954Cu;
        // 0x289550: 0x7fa20240  sq          $v0, 0x240($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289554u;
        goto label_289554;
    }
    ctx->pc = 0x28954Cu;
    SET_GPR_U32(ctx, 31, 0x289554u);
    ctx->pc = 0x289550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28954Cu;
    // 0x289550: 0x7fa20240  sq          $v0, 0x240($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x28954Cu, 0x289554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289554u;
label_289554:
    // 0x289554: 0x7ba30250  lq          $v1, 0x250($sp)
    ctx->pc = 0x289554u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_289558:
    // 0x289558: 0x26a40090  addiu       $a0, $s5, 0x90
    ctx->pc = 0x289558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_28955c:
    // 0x28955c: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x28955cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
label_289560:
    // 0x289560: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x289560u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_289564:
    // 0x289564: 0x25064b00  addiu       $a2, $t0, 0x4B00
    ctx->pc = 0x289564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 19200));
label_289568:
    // 0x289568: 0x7fa30230  sq          $v1, 0x230($sp)
    ctx->pc = 0x289568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 3));
label_28956c:
    // 0x28956c: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x28956cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_289570:
    // 0x289570: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x289570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_289574:
    // 0x289574: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x289574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_289578:
    // 0x289578: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x289578u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28957c:
    // 0x28957c: 0x7fa30230  sq          $v1, 0x230($sp)
    ctx->pc = 0x28957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 3));
label_289580:
    // 0x289580: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x289580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_289584:
    // 0x289584: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_289588:
    if (ctx->pc == 0x289588u) {
        ctx->pc = 0x289588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289584u;
        // 0x289588: 0x27b00260  addiu       $s0, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28958Cu;
        goto label_28958c;
    }
    ctx->pc = 0x289584u;
    {
        const bool branch_taken_0x289584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289584u;
        // 0x289588: 0x27b00260  addiu       $s0, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289584) {
            ctx->pc = 0x2895C4u;
            goto label_2895c4;
        }
    }
    ctx->pc = 0x28958Cu;
label_28958c:
    // 0x28958c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x28958cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_289590:
    // 0x289590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289594:
    // 0x289594: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x289594u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_289598:
    // 0x289598: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x289598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_28959c:
    // 0x28959c: 0xc0cd8ec  jal         func_3363B0
label_2895a0:
    if (ctx->pc == 0x2895A0u) {
        ctx->pc = 0x2895A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28959Cu;
        // 0x2895a0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2895A4u;
        goto label_2895a4;
    }
    ctx->pc = 0x28959Cu;
    SET_GPR_U32(ctx, 31, 0x2895A4u);
    ctx->pc = 0x2895A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28959Cu;
    // 0x2895a0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x28959Cu, 0x2895A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895A4u;
label_2895a4:
    // 0x2895a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2895a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2895a8:
    // 0x2895a8: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x2895a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_2895ac:
    // 0x2895ac: 0xc136b18  jal         func_4DAC60
label_2895b0:
    if (ctx->pc == 0x2895B0u) {
        ctx->pc = 0x2895B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2895ACu;
        // 0x2895b0: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2895B4u;
        goto label_2895b4;
    }
    ctx->pc = 0x2895ACu;
    SET_GPR_U32(ctx, 31, 0x2895B4u);
    ctx->pc = 0x2895B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2895ACu;
    // 0x2895b0: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x2895ACu, 0x2895B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895B4u;
label_2895b4:
    // 0x2895b4: 0x7ba20270  lq          $v0, 0x270($sp)
    ctx->pc = 0x2895b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_2895b8:
    // 0x2895b8: 0x7fa20240  sq          $v0, 0x240($sp)
    ctx->pc = 0x2895b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
label_2895bc:
    // 0x2895bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_2895c0:
    if (ctx->pc == 0x2895C0u) {
        ctx->pc = 0x2895C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2895BCu;
        // 0x2895c0: 0x7fa20250  sq          $v0, 0x250($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2895C4u;
        goto label_2895c4;
    }
    ctx->pc = 0x2895BCu;
    {
        const bool branch_taken_0x2895bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2895C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2895BCu;
        // 0x2895c0: 0x7fa20250  sq          $v0, 0x250($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895bc) {
            ctx->pc = 0x2895D4u;
            goto label_2895d4;
        }
    }
    ctx->pc = 0x2895C4u;
label_2895c4:
    // 0x2895c4: 0xc087502  jal         func_21D408
label_2895c8:
    if (ctx->pc == 0x2895C8u) {
        ctx->pc = 0x2895C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2895C4u;
        // 0x2895c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2895CCu;
        goto label_2895cc;
    }
    ctx->pc = 0x2895C4u;
    SET_GPR_U32(ctx, 31, 0x2895CCu);
    ctx->pc = 0x2895C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2895C4u;
    // 0x2895c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2895C4u, 0x2895CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895CCu;
label_2895cc:
    // 0x2895cc: 0x78430090  lq          $v1, 0x90($v0)
    ctx->pc = 0x2895ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 144)));
label_2895d0:
    // 0x2895d0: 0x7fa30240  sq          $v1, 0x240($sp)
    ctx->pc = 0x2895d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 3));
label_2895d4:
    // 0x2895d4: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x2895d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_2895d8:
    // 0x2895d8: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x2895d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_2895dc:
    // 0x2895dc: 0xc136afa  jal         func_4DABE8
label_2895e0:
    if (ctx->pc == 0x2895E0u) {
        ctx->pc = 0x2895E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2895DCu;
        // 0x2895e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2895E4u;
        goto label_2895e4;
    }
    ctx->pc = 0x2895DCu;
    SET_GPR_U32(ctx, 31, 0x2895E4u);
    ctx->pc = 0x2895E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2895DCu;
    // 0x2895e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2895DCu, 0x2895E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895E4u;
label_2895e4:
    // 0x2895e4: 0x7ba30270  lq          $v1, 0x270($sp)
    ctx->pc = 0x2895e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_2895e8:
    // 0x2895e8: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x2895e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_2895ec:
    // 0x2895ec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2895ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2895f0:
    // 0x2895f0: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x2895f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2895f4:
    // 0x2895f4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2895f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2895f8:
    // 0x2895f8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2895f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2895fc:
    // 0x2895fc: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x2895fcu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_289600:
    // 0x289600: 0x4a0003bf  vwaitq
    ctx->pc = 0x289600u;
    // VWAITQ (Q already resolved in this runtime)
label_289604:
    // 0x289604: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x289604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_289608:
    // 0x289608: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x289608u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_28960c:
    // 0x28960c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x28960cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_289610:
    // 0x289610: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x289610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
label_289614:
    // 0x289614: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x289614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_289618:
    // 0x289618: 0x7fa30260  sq          $v1, 0x260($sp)
    ctx->pc = 0x289618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 3));
label_28961c:
    // 0x28961c: 0xc136afa  jal         func_4DABE8
label_289620:
    if (ctx->pc == 0x289620u) {
        ctx->pc = 0x289620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28961Cu;
        // 0x289620: 0x7fa20270  sq          $v0, 0x270($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289624u;
        goto label_289624;
    }
    ctx->pc = 0x28961Cu;
    SET_GPR_U32(ctx, 31, 0x289624u);
    ctx->pc = 0x289620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28961Cu;
    // 0x289620: 0x7fa20270  sq          $v0, 0x270($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x28961Cu, 0x289624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289624u;
label_289624:
    // 0x289624: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x289624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_289628:
    // 0x289628: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x289628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_28962c:
    // 0x28962c: 0x24674b00  addiu       $a3, $v1, 0x4B00
    ctx->pc = 0x28962cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_289630:
    // 0x289630: 0x8fa802e4  lw          $t0, 0x2E4($sp)
    ctx->pc = 0x289630u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
label_289634:
    // 0x289634: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x289634u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_289638:
    // 0x289638: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x289638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_28963c:
    // 0x28963c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x28963cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_289640:
    // 0x289640: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x289640u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_289644:
    // 0x289644: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x289644u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_289648:
    // 0x289648: 0x4a0003bf  vwaitq
    ctx->pc = 0x289648u;
    // VWAITQ (Q already resolved in this runtime)
label_28964c:
    // 0x28964c: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x28964cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_289650:
    // 0x289650: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x289650u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_289654:
    // 0x289654: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x289654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
label_289658:
    // 0x289658: 0x7fa30260  sq          $v1, 0x260($sp)
    ctx->pc = 0x289658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 3));
label_28965c:
    // 0x28965c: 0x7ba60210  lq          $a2, 0x210($sp)
    ctx->pc = 0x28965cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_289660:
    // 0x289660: 0x85050002  lh          $a1, 0x2($t0)
    ctx->pc = 0x289660u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_289664:
    // 0x289664: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x289664u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_289668:
    // 0x289668: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x289668u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_28966c:
    // 0x28966c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x28966cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_289670:
    // 0x289670: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x289670u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_289674:
    // 0x289674: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x289674u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_289678:
    // 0x289678: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x289678u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_28967c:
    // 0x28967c: 0x7ba20250  lq          $v0, 0x250($sp)
    ctx->pc = 0x28967cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_289680:
    // 0x289680: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x289680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_289684:
    // 0x289684: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x289684u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_289688:
    // 0x289688: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x289688u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_28968c:
    // 0x28968c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x28968cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_289690:
    // 0x289690: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x289690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_289694:
    // 0x289694: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x289694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_289698:
    // 0x289698: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x289698u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_28969c:
    // 0x28969c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x28969cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2896a0:
    // 0x2896a0: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x2896a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2896a4:
    // 0x2896a4: 0x7fa30280  sq          $v1, 0x280($sp)
    ctx->pc = 0x2896a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 3));
label_2896a8:
    // 0x2896a8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2896a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_2896ac:
    // 0x2896ac: 0x4488c000  mtc1        $t0, $f24
    ctx->pc = 0x2896acu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_2896b0:
    // 0x2896b0: 0xc0cd916  jal         func_336458
label_2896b4:
    if (ctx->pc == 0x2896B4u) {
        ctx->pc = 0x2896B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896B0u;
        // 0x2896b4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2896B8u;
        goto label_2896b8;
    }
    ctx->pc = 0x2896B0u;
    SET_GPR_U32(ctx, 31, 0x2896B8u);
    ctx->pc = 0x2896B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2896B0u;
    // 0x2896b4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336458u, 0x2896B0u, 0x2896B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2896B8u;
label_2896b8:
    // 0x2896b8: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x2896b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_2896bc:
    // 0x2896bc: 0x7ba30280  lq          $v1, 0x280($sp)
    ctx->pc = 0x2896bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_2896c0:
    // 0x2896c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2896c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2896c4:
    // 0x2896c4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2896c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2896c8:
    // 0x2896c8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2896c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2896cc:
    // 0x2896cc: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x2896ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2896d0:
    // 0x2896d0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2896d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2896d4:
    // 0x2896d4: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2896d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
label_2896d8:
    // 0x2896d8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2896d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2896dc:
    // 0x2896dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2896dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2896e0:
    // 0x2896e0: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x2896e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
label_2896e4:
    // 0x2896e4: 0xc12e29c  jal         func_4B8A70
label_2896e8:
    if (ctx->pc == 0x2896E8u) {
        ctx->pc = 0x2896E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896E4u;
        // 0x2896e8: 0x7fa20290  sq          $v0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2896ECu;
        goto label_2896ec;
    }
    ctx->pc = 0x2896E4u;
    SET_GPR_U32(ctx, 31, 0x2896ECu);
    ctx->pc = 0x2896E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2896E4u;
    // 0x2896e8: 0x7fa20290  sq          $v0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2896E4u, 0x2896ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2896ECu;
label_2896ec:
    // 0x2896ec: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x2896ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
label_2896f0:
    // 0x2896f0: 0x342166f4  ori         $at, $at, 0x66F4
    ctx->pc = 0x2896f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26356);
label_2896f4:
    // 0x2896f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2896f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2896f8:
    // 0x2896f8: 0xc12e29c  jal         func_4B8A70
label_2896fc:
    if (ctx->pc == 0x2896FCu) {
        ctx->pc = 0x2896FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896F8u;
        // 0x2896fc: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x289700u;
        goto label_289700;
    }
    ctx->pc = 0x2896F8u;
    SET_GPR_U32(ctx, 31, 0x289700u);
    ctx->pc = 0x2896FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2896F8u;
    // 0x2896fc: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2896F8u, 0x289700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289700u;
label_289700:
    // 0x289700: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x289700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_289704:
    // 0x289704: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x289704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_289708:
    // 0x289708: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28970c:
    // 0x28970c: 0xc12e29c  jal         func_4B8A70
label_289710:
    if (ctx->pc == 0x289710u) {
        ctx->pc = 0x289710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28970Cu;
        // 0x289710: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x289714u;
        goto label_289714;
    }
    ctx->pc = 0x28970Cu;
    SET_GPR_U32(ctx, 31, 0x289714u);
    ctx->pc = 0x289710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28970Cu;
    // 0x289710: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x28970Cu, 0x289714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289714u;
label_289714:
    // 0x289714: 0xc6b501ac  lwc1        $f21, 0x1AC($s5)
    ctx->pc = 0x289714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_289718:
    // 0x289718: 0x4615b036  c.le.s      $f22, $f21
    ctx->pc = 0x289718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28971c:
    // 0x28971c: 0x0  nop
    ctx->pc = 0x28971cu;
    // NOP
label_289720:
    // 0x289720: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_289724:
    if (ctx->pc == 0x289724u) {
        ctx->pc = 0x289724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289720u;
        // 0x289724: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x289728u;
        goto label_289728;
    }
    ctx->pc = 0x289720u;
    {
        const bool branch_taken_0x289720 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289720u;
        // 0x289724: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289720) {
            ctx->pc = 0x289740u;
            goto label_289740;
        }
    }
    ctx->pc = 0x289728u;
label_289728:
    // 0x289728: 0x4616a832  c.eq.s      $f21, $f22
    ctx->pc = 0x289728u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28972c:
    // 0x28972c: 0x0  nop
    ctx->pc = 0x28972cu;
    // NOP
label_289730:
    // 0x289730: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_289734:
    if (ctx->pc == 0x289734u) {
        ctx->pc = 0x289734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289730u;
        // 0x289734: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289738u;
        goto label_289738;
    }
    ctx->pc = 0x289730u;
    {
        const bool branch_taken_0x289730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289730u;
        // 0x289734: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289730) {
            ctx->pc = 0x289744u;
            goto label_289744;
        }
    }
    ctx->pc = 0x289738u;
label_289738:
    // 0x289738: 0x10000002  b           . + 4 + (0x2 << 2)
label_28973c:
    if (ctx->pc == 0x28973Cu) {
        ctx->pc = 0x28973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289738u;
        // 0x28973c: 0x2d5982b  sltu        $s3, $s6, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x289740u;
        goto label_289740;
    }
    ctx->pc = 0x289738u;
    {
        const bool branch_taken_0x289738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289738u;
        // 0x28973c: 0x2d5982b  sltu        $s3, $s6, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289738) {
            ctx->pc = 0x289744u;
            goto label_289744;
        }
    }
    ctx->pc = 0x289740u;
label_289740:
    // 0x289740: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x289740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_289744:
    // 0x289744: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x289744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_289748:
    // 0x289748: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_28974c:
    if (ctx->pc == 0x28974Cu) {
        ctx->pc = 0x28974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289748u;
        // 0x28974c: 0xc6200114  lwc1        $f0, 0x114($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x289750u;
        goto label_289750;
    }
    ctx->pc = 0x289748u;
    {
        const bool branch_taken_0x289748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289748) {
            ctx->pc = 0x28974Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289748u;
            // 0x28974c: 0xc6200114  lwc1        $f0, 0x114($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x289770u;
            goto label_289770;
        }
    }
    ctx->pc = 0x289750u;
label_289750:
    // 0x289750: 0xc6a101ac  lwc1        $f1, 0x1AC($s5)
    ctx->pc = 0x289750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289754:
    // 0x289754: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x289754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_289758:
    // 0x289758: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x289758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_28975c:
    // 0x28975c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28975cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289760:
    // 0x289760: 0x0  nop
    ctx->pc = 0x289760u;
    // NOP
label_289764:
    // 0x289764: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289768:
    // 0x289768: 0x1000000d  b           . + 4 + (0xD << 2)
label_28976c:
    if (ctx->pc == 0x28976Cu) {
        ctx->pc = 0x289770u;
        goto label_289770;
    }
    ctx->pc = 0x289768u;
    {
        const bool branch_taken_0x289768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289768) {
            ctx->pc = 0x2897A0u;
            goto label_2897a0;
        }
    }
    ctx->pc = 0x289770u;
label_289770:
    // 0x289770: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x289770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_289774:
    // 0x289774: 0x0  nop
    ctx->pc = 0x289774u;
    // NOP
label_289778:
    // 0x289778: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x289778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28977c:
    // 0x28977c: 0x0  nop
    ctx->pc = 0x28977cu;
    // NOP
label_289780:
    // 0x289780: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_289784:
    if (ctx->pc == 0x289784u) {
        ctx->pc = 0x289784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289780u;
        // 0x289784: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289788u;
        goto label_289788;
    }
    ctx->pc = 0x289780u;
    {
        const bool branch_taken_0x289780 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x289784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289780u;
        // 0x289784: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289780) {
            ctx->pc = 0x289864u;
            goto label_289864;
        }
    }
    ctx->pc = 0x289788u;
label_289788:
    // 0x289788: 0x262300a0  addiu       $v1, $s1, 0xA0
    ctx->pc = 0x289788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_28978c:
    // 0x28978c: 0x94620032  lhu         $v0, 0x32($v1)
    ctx->pc = 0x28978cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
label_289790:
    // 0x289790: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_289794:
    if (ctx->pc == 0x289794u) {
        ctx->pc = 0x289798u;
        goto label_289798;
    }
    ctx->pc = 0x289790u;
    {
        const bool branch_taken_0x289790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289790) {
            ctx->pc = 0x2897ACu;
            goto label_2897ac;
        }
    }
    ctx->pc = 0x289798u;
label_289798:
    // 0x289798: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x289798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28979c:
    // 0x28979c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28979cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2897a0:
    // 0x2897a0: 0x0  nop
    ctx->pc = 0x2897a0u;
    // NOP
label_2897a4:
    // 0x2897a4: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
label_2897a8:
    if (ctx->pc == 0x2897A8u) {
        ctx->pc = 0x2897A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897A4u;
        // 0x2897a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2897ACu;
        goto label_2897ac;
    }
    ctx->pc = 0x2897A4u;
    {
        const bool branch_taken_0x2897a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2897A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897A4u;
        // 0x2897a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2897a4) {
            ctx->pc = 0x289864u;
            goto label_289864;
        }
    }
    ctx->pc = 0x2897ACu;
label_2897ac:
    // 0x2897ac: 0x4618b836  c.le.s      $f23, $f24
    ctx->pc = 0x2897acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2897b0:
    // 0x2897b0: 0x0  nop
    ctx->pc = 0x2897b0u;
    // NOP
label_2897b4:
    // 0x2897b4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2897b8:
    if (ctx->pc == 0x2897B8u) {
        ctx->pc = 0x2897BCu;
        goto label_2897bc;
    }
    ctx->pc = 0x2897B4u;
    {
        const bool branch_taken_0x2897b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2897b4) {
            ctx->pc = 0x2897F0u;
            goto label_2897f0;
        }
    }
    ctx->pc = 0x2897BCu;
label_2897bc:
    // 0x2897bc: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2897bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_2897c0:
    // 0x2897c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2897c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2897c4:
    // 0x2897c4: 0x0  nop
    ctx->pc = 0x2897c4u;
    // NOP
label_2897c8:
    // 0x2897c8: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_2897cc:
    if (ctx->pc == 0x2897CCu) {
        ctx->pc = 0x2897CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897C8u;
        // 0x2897cc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2897D0u;
        goto label_2897d0;
    }
    ctx->pc = 0x2897C8u;
    {
        const bool branch_taken_0x2897c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2897CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897C8u;
        // 0x2897cc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2897c8) {
            ctx->pc = 0x289864u;
            goto label_289864;
        }
    }
    ctx->pc = 0x2897D0u;
label_2897d0:
    // 0x2897d0: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2897d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2897d4:
    // 0x2897d4: 0x0  nop
    ctx->pc = 0x2897d4u;
    // NOP
label_2897d8:
    // 0x2897d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2897dc:
    if (ctx->pc == 0x2897DCu) {
        ctx->pc = 0x2897E0u;
        goto label_2897e0;
    }
    ctx->pc = 0x2897D8u;
    {
        const bool branch_taken_0x2897d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2897d8) {
            ctx->pc = 0x2897F0u;
            goto label_2897f0;
        }
    }
    ctx->pc = 0x2897E0u;
label_2897e0:
    // 0x2897e0: 0x1260fe7e  beqz        $s3, . + 4 + (-0x182 << 2)
label_2897e4:
    if (ctx->pc == 0x2897E4u) {
        ctx->pc = 0x2897E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897E0u;
        // 0x2897e4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2897E8u;
        goto label_2897e8;
    }
    ctx->pc = 0x2897E0u;
    {
        const bool branch_taken_0x2897e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2897E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897E0u;
        // 0x2897e4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2897e0) {
            ctx->pc = 0x2891DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2891dc;
        }
    }
    ctx->pc = 0x2897E8u;
label_2897e8:
    // 0x2897e8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2897ec:
    if (ctx->pc == 0x2897ECu) {
        ctx->pc = 0x2897ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897E8u;
        // 0x2897ec: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2897F0u;
        goto label_2897f0;
    }
    ctx->pc = 0x2897E8u;
    {
        const bool branch_taken_0x2897e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2897ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897E8u;
        // 0x2897ec: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2897e8) {
            ctx->pc = 0x289868u;
            goto label_289868;
        }
    }
    ctx->pc = 0x2897F0u;
label_2897f0:
    // 0x2897f0: 0x4618c836  c.le.s      $f25, $f24
    ctx->pc = 0x2897f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2897f4:
    // 0x2897f4: 0x0  nop
    ctx->pc = 0x2897f4u;
    // NOP
label_2897f8:
    // 0x2897f8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2897fc:
    if (ctx->pc == 0x2897FCu) {
        ctx->pc = 0x289800u;
        goto label_289800;
    }
    ctx->pc = 0x2897F8u;
    {
        const bool branch_taken_0x2897f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2897f8) {
            ctx->pc = 0x28982Cu;
            goto label_28982c;
        }
    }
    ctx->pc = 0x289800u;
label_289800:
    // 0x289800: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x289800u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_289804:
    // 0x289804: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x289804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289808:
    // 0x289808: 0x0  nop
    ctx->pc = 0x289808u;
    // NOP
label_28980c:
    // 0x28980c: 0x45010015  bc1t        . + 4 + (0x15 << 2)
label_289810:
    if (ctx->pc == 0x289810u) {
        ctx->pc = 0x289810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28980Cu;
        // 0x289810: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289814u;
        goto label_289814;
    }
    ctx->pc = 0x28980Cu;
    {
        const bool branch_taken_0x28980c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x289810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28980Cu;
        // 0x289810: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28980c) {
            ctx->pc = 0x289864u;
            goto label_289864;
        }
    }
    ctx->pc = 0x289814u;
label_289814:
    // 0x289814: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x289814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289818:
    // 0x289818: 0x0  nop
    ctx->pc = 0x289818u;
    // NOP
label_28981c:
    // 0x28981c: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_289820:
    if (ctx->pc == 0x289820u) {
        ctx->pc = 0x289820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28981Cu;
        // 0x289820: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289824u;
        goto label_289824;
    }
    ctx->pc = 0x28981Cu;
    {
        const bool branch_taken_0x28981c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28981c) {
            ctx->pc = 0x289820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28981Cu;
            // 0x289820: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289864u;
            goto label_289864;
        }
    }
    ctx->pc = 0x289824u;
label_289824:
    // 0x289824: 0x10000010  b           . + 4 + (0x10 << 2)
label_289828:
    if (ctx->pc == 0x289828u) {
        ctx->pc = 0x289828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289824u;
        // 0x289828: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28982Cu;
        goto label_28982c;
    }
    ctx->pc = 0x289824u;
    {
        const bool branch_taken_0x289824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289824u;
        // 0x289828: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289824) {
            ctx->pc = 0x289868u;
            goto label_289868;
        }
    }
    ctx->pc = 0x28982Cu;
label_28982c:
    // 0x28982c: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x28982cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289830:
    // 0x289830: 0x0  nop
    ctx->pc = 0x289830u;
    // NOP
label_289834:
    // 0x289834: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_289838:
    if (ctx->pc == 0x289838u) {
        ctx->pc = 0x289838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289834u;
        // 0x289838: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28983Cu;
        goto label_28983c;
    }
    ctx->pc = 0x289834u;
    {
        const bool branch_taken_0x289834 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289834u;
        // 0x289838: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289834) {
            ctx->pc = 0x289864u;
            goto label_289864;
        }
    }
    ctx->pc = 0x28983Cu;
label_28983c:
    // 0x28983c: 0x16600136  bnez        $s3, . + 4 + (0x136 << 2)
label_289840:
    if (ctx->pc == 0x289840u) {
        ctx->pc = 0x289840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28983Cu;
        // 0x289840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289844u;
        goto label_289844;
    }
    ctx->pc = 0x28983Cu;
    {
        const bool branch_taken_0x28983c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x289840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28983Cu;
        // 0x289840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28983c) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x289844u;
label_289844:
    // 0x289844: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x289844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_289848:
    // 0x289848: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28984c:
    // 0x28984c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28984cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_289850:
    // 0x289850: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x289850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_289854:
    // 0x289854: 0xc0a232c  jal         func_288CB0
label_289858:
    if (ctx->pc == 0x289858u) {
        ctx->pc = 0x289858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289854u;
        // 0x289858: 0x460cb302  mul.s       $f12, $f22, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28985Cu;
        goto label_28985c;
    }
    ctx->pc = 0x289854u;
    SET_GPR_U32(ctx, 31, 0x28985Cu);
    ctx->pc = 0x289858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289854u;
    // 0x289858: 0x460cb302  mul.s       $f12, $f22, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x288CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288CB0u, 0x289854u, 0x28985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28985Cu;
label_28985c:
    // 0x28985c: 0x1000012e  b           . + 4 + (0x12E << 2)
label_289860:
    if (ctx->pc == 0x289860u) {
        ctx->pc = 0x289860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28985Cu;
        // 0x289860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289864u;
        goto label_289864;
    }
    ctx->pc = 0x28985Cu;
    {
        const bool branch_taken_0x28985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28985Cu;
        // 0x289860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28985c) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x289864u;
label_289864:
    // 0x289864: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x289864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_289868:
    // 0x289868: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x289868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_28986c:
    // 0x28986c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x28986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_289870:
    // 0x289870: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_289874:
    if (ctx->pc == 0x289874u) {
        ctx->pc = 0x289874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289870u;
        // 0x289874: 0x3282b  sltu        $a1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x289878u;
        goto label_289878;
    }
    ctx->pc = 0x289870u;
    {
        const bool branch_taken_0x289870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289870u;
        // 0x289874: 0x3282b  sltu        $a1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289870) {
            ctx->pc = 0x2898D8u;
            goto label_2898d8;
        }
    }
    ctx->pc = 0x289878u;
label_289878:
    // 0x289878: 0x90820016  lbu         $v0, 0x16($a0)
    ctx->pc = 0x289878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
label_28987c:
    // 0x28987c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x28987cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_289880:
    // 0x289880: 0x14650016  bne         $v1, $a1, . + 4 + (0x16 << 2)
label_289884:
    if (ctx->pc == 0x289884u) {
        ctx->pc = 0x289884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289880u;
        // 0x289884: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289888u;
        goto label_289888;
    }
    ctx->pc = 0x289880u;
    {
        const bool branch_taken_0x289880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x289884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289880u;
        // 0x289884: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289880) {
            ctx->pc = 0x2898DCu;
            goto label_2898dc;
        }
    }
    ctx->pc = 0x289888u;
label_289888:
    // 0x289888: 0x263100e0  addiu       $s1, $s1, 0xE0
    ctx->pc = 0x289888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_28988c:
    // 0x28988c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28988cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_289890:
    // 0x289890: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x289890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_289894:
    // 0x289894: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_289898:
    if (ctx->pc == 0x289898u) {
        ctx->pc = 0x28989Cu;
        goto label_28989c;
    }
    ctx->pc = 0x289894u;
    {
        const bool branch_taken_0x289894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x289894) {
            ctx->pc = 0x2898DCu;
            goto label_2898dc;
        }
    }
    ctx->pc = 0x28989Cu;
label_28989c:
    // 0x28989c: 0xc0a6c92  jal         func_29B248
label_2898a0:
    if (ctx->pc == 0x2898A0u) {
        ctx->pc = 0x2898A4u;
        goto label_2898a4;
    }
    ctx->pc = 0x28989Cu;
    SET_GPR_U32(ctx, 31, 0x2898A4u);
    ctx->pc = 0x29B248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B248u, 0x28989Cu, 0x2898A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2898A4u;
label_2898a4:
    // 0x2898a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2898a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2898a8:
    // 0x2898a8: 0xc0a6c92  jal         func_29B248
label_2898ac:
    if (ctx->pc == 0x2898ACu) {
        ctx->pc = 0x2898ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898A8u;
        // 0x2898ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2898B0u;
        goto label_2898b0;
    }
    ctx->pc = 0x2898A8u;
    SET_GPR_U32(ctx, 31, 0x2898B0u);
    ctx->pc = 0x2898ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2898A8u;
    // 0x2898ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B248u, 0x2898A8u, 0x2898B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2898B0u;
label_2898b0:
    // 0x2898b0: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
label_2898b4:
    if (ctx->pc == 0x2898B4u) {
        ctx->pc = 0x2898B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898B0u;
        // 0x2898b4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2898B8u;
        goto label_2898b8;
    }
    ctx->pc = 0x2898B0u;
    {
        const bool branch_taken_0x2898b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2898B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898B0u;
        // 0x2898b4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898b0) {
            ctx->pc = 0x2898DCu;
            goto label_2898dc;
        }
    }
    ctx->pc = 0x2898B8u;
label_2898b8:
    // 0x2898b8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2898b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2898bc:
    // 0x2898bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2898bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2898c0:
    // 0x2898c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2898c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2898c4:
    // 0x2898c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2898c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2898c8:
    // 0x2898c8: 0xc0a232c  jal         func_288CB0
label_2898cc:
    if (ctx->pc == 0x2898CCu) {
        ctx->pc = 0x2898CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898C8u;
        // 0x2898cc: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2898D0u;
        goto label_2898d0;
    }
    ctx->pc = 0x2898C8u;
    SET_GPR_U32(ctx, 31, 0x2898D0u);
    ctx->pc = 0x2898CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2898C8u;
    // 0x2898cc: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x288CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288CB0u, 0x2898C8u, 0x2898D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2898D0u;
label_2898d0:
    // 0x2898d0: 0x10000111  b           . + 4 + (0x111 << 2)
label_2898d4:
    if (ctx->pc == 0x2898D4u) {
        ctx->pc = 0x2898D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898D0u;
        // 0x2898d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2898D8u;
        goto label_2898d8;
    }
    ctx->pc = 0x2898D0u;
    {
        const bool branch_taken_0x2898d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898D0u;
        // 0x2898d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898d0) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x2898D8u;
label_2898d8:
    // 0x2898d8: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2898d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2898dc:
    // 0x2898dc: 0x129e0055  beq         $s4, $fp, . + 4 + (0x55 << 2)
label_2898e0:
    if (ctx->pc == 0x2898E0u) {
        ctx->pc = 0x2898E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898DCu;
        // 0x2898e0: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2898E4u;
        goto label_2898e4;
    }
    ctx->pc = 0x2898DCu;
    {
        const bool branch_taken_0x2898dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 30));
        ctx->pc = 0x2898E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898DCu;
        // 0x2898e0: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898dc) {
            ctx->pc = 0x289A34u;
            goto label_289a34;
        }
    }
    ctx->pc = 0x2898E4u;
label_2898e4:
    // 0x2898e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2898e8:
    if (ctx->pc == 0x2898E8u) {
        ctx->pc = 0x2898E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898E4u;
        // 0x2898e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2898ECu;
        goto label_2898ec;
    }
    ctx->pc = 0x2898E4u;
    {
        const bool branch_taken_0x2898e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898E4u;
        // 0x2898e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898e4) {
            ctx->pc = 0x2898FCu;
            goto label_2898fc;
        }
    }
    ctx->pc = 0x2898ECu;
label_2898ec:
    // 0x2898ec: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_2898f0:
    if (ctx->pc == 0x2898F0u) {
        ctx->pc = 0x2898F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898ECu;
        // 0x2898f0: 0x8fa202e4  lw          $v0, 0x2E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2898F4u;
        goto label_2898f4;
    }
    ctx->pc = 0x2898ECu;
    {
        const bool branch_taken_0x2898ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898ECu;
        // 0x2898f0: 0x8fa202e4  lw          $v0, 0x2E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898ec) {
            ctx->pc = 0x289914u;
            goto label_289914;
        }
    }
    ctx->pc = 0x2898F4u;
label_2898f4:
    // 0x2898f4: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_2898f8:
    if (ctx->pc == 0x2898F8u) {
        ctx->pc = 0x2898F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898F4u;
        // 0x2898f8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2898FCu;
        goto label_2898fc;
    }
    ctx->pc = 0x2898F4u;
    {
        const bool branch_taken_0x2898f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898F4u;
        // 0x2898f8: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898f4) {
            ctx->pc = 0x289C7Cu;
            goto label_289c7c;
        }
    }
    ctx->pc = 0x2898FCu;
label_2898fc:
    // 0x2898fc: 0x12820079  beq         $s4, $v0, . + 4 + (0x79 << 2)
label_289900:
    if (ctx->pc == 0x289900u) {
        ctx->pc = 0x289900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898FCu;
        // 0x289900: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289904u;
        goto label_289904;
    }
    ctx->pc = 0x2898FCu;
    {
        const bool branch_taken_0x2898fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x289900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898FCu;
        // 0x289900: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898fc) {
            ctx->pc = 0x289AE4u;
            goto label_289ae4;
        }
    }
    ctx->pc = 0x289904u;
label_289904:
    // 0x289904: 0x128200a2  beq         $s4, $v0, . + 4 + (0xA2 << 2)
label_289908:
    if (ctx->pc == 0x289908u) {
        ctx->pc = 0x289908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289904u;
        // 0x289908: 0x8fa202e4  lw          $v0, 0x2E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28990Cu;
        goto label_28990c;
    }
    ctx->pc = 0x289904u;
    {
        const bool branch_taken_0x289904 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x289908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289904u;
        // 0x289908: 0x8fa202e4  lw          $v0, 0x2E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289904) {
            ctx->pc = 0x289B90u;
            goto label_289b90;
        }
    }
    ctx->pc = 0x28990Cu;
label_28990c:
    // 0x28990c: 0x100000db  b           . + 4 + (0xDB << 2)
label_289910:
    if (ctx->pc == 0x289910u) {
        ctx->pc = 0x289910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28990Cu;
        // 0x289910: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289914u;
        goto label_289914;
    }
    ctx->pc = 0x28990Cu;
    {
        const bool branch_taken_0x28990c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28990Cu;
        // 0x289910: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28990c) {
            ctx->pc = 0x289C7Cu;
            goto label_289c7c;
        }
    }
    ctx->pc = 0x289914u;
label_289914:
    // 0x289914: 0x7ba30270  lq          $v1, 0x270($sp)
    ctx->pc = 0x289914u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_289918:
    // 0x289918: 0x7ba20250  lq          $v0, 0x250($sp)
    ctx->pc = 0x289918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_28991c:
    // 0x28991c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x28991cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_289920:
    // 0x289920: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x289920u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_289924:
    // 0x289924: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x289924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_289928:
    // 0x289928: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x289928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_28992c:
    // 0x28992c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x28992cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_289930:
    // 0x289930: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x289930u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_289934:
    // 0x289934: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x289934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_289938:
    // 0x289938: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x289938u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28993c:
    // 0x28993c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28993cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_289940:
    // 0x289940: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_289944:
    // 0x289944: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x289944u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289948:
    // 0x289948: 0x0  nop
    ctx->pc = 0x289948u;
    // NOP
label_28994c:
    // 0x28994c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_289950:
    if (ctx->pc == 0x289950u) {
        ctx->pc = 0x289950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28994Cu;
        // 0x289950: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289954u;
        goto label_289954;
    }
    ctx->pc = 0x28994Cu;
    {
        const bool branch_taken_0x28994c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28994Cu;
        // 0x289950: 0x27a402b0  addiu       $a0, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28994c) {
            ctx->pc = 0x28995Cu;
            goto label_28995c;
        }
    }
    ctx->pc = 0x289954u;
label_289954:
    // 0x289954: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x289954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_289958:
    // 0x289958: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28995c:
    // 0x28995c: 0xc136b24  jal         func_4DAC90
label_289960:
    if (ctx->pc == 0x289960u) {
        ctx->pc = 0x289960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28995Cu;
        // 0x289960: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289964u;
        goto label_289964;
    }
    ctx->pc = 0x28995Cu;
    SET_GPR_U32(ctx, 31, 0x289964u);
    ctx->pc = 0x289960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28995Cu;
    // 0x289960: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x28995Cu, 0x289964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289964u;
label_289964:
    // 0x289964: 0x7ba202b0  lq          $v0, 0x2B0($sp)
    ctx->pc = 0x289964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_289968:
    // 0x289968: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x289968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_28996c:
    // 0x28996c: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x28996cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_289970:
    // 0x289970: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x289970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_289974:
    // 0x289974: 0xc136b18  jal         func_4DAC60
label_289978:
    if (ctx->pc == 0x289978u) {
        ctx->pc = 0x289978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289974u;
        // 0x289978: 0x7fa202a0  sq          $v0, 0x2A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28997Cu;
        goto label_28997c;
    }
    ctx->pc = 0x289974u;
    SET_GPR_U32(ctx, 31, 0x28997Cu);
    ctx->pc = 0x289978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289974u;
    // 0x289978: 0x7fa202a0  sq          $v0, 0x2A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x289974u, 0x28997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28997Cu;
label_28997c:
    // 0x28997c: 0x7ba202b0  lq          $v0, 0x2B0($sp)
    ctx->pc = 0x28997cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_289980:
    // 0x289980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_289984:
    // 0x289984: 0xc7ac02e0  lwc1        $f12, 0x2E0($sp)
    ctx->pc = 0x289984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_289988:
    // 0x289988: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x289988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28998c:
    // 0x28998c: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x28998cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
label_289990:
    // 0x289990: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x289990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_289994:
    // 0x289994: 0xc0a2404  jal         func_289010
label_289998:
    if (ctx->pc == 0x289998u) {
        ctx->pc = 0x289998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289994u;
        // 0x289998: 0x7fa20290  sq          $v0, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28999Cu;
        goto label_28999c;
    }
    ctx->pc = 0x289994u;
    SET_GPR_U32(ctx, 31, 0x28999Cu);
    ctx->pc = 0x289998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289994u;
    // 0x289998: 0x7fa20290  sq          $v0, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289010u, 0x289994u, 0x28999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28999Cu;
label_28999c:
    // 0x28999c: 0x144000de  bnez        $v0, . + 4 + (0xDE << 2)
label_2899a0:
    if (ctx->pc == 0x2899A0u) {
        ctx->pc = 0x2899A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28999Cu;
        // 0x2899a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2899A4u;
        goto label_2899a4;
    }
    ctx->pc = 0x28999Cu;
    {
        const bool branch_taken_0x28999c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2899A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28999Cu;
        // 0x2899a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28999c) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x2899A4u;
label_2899a4:
    // 0x2899a4: 0xc087502  jal         func_21D408
label_2899a8:
    if (ctx->pc == 0x2899A8u) {
        ctx->pc = 0x2899A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899A4u;
        // 0x2899a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2899ACu;
        goto label_2899ac;
    }
    ctx->pc = 0x2899A4u;
    SET_GPR_U32(ctx, 31, 0x2899ACu);
    ctx->pc = 0x2899A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899A4u;
    // 0x2899a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2899A4u, 0x2899ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899ACu;
label_2899ac:
    // 0x2899ac: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2899acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2899b0:
    // 0x2899b0: 0xc0a3fa4  jal         func_28FE90
label_2899b4:
    if (ctx->pc == 0x2899B4u) {
        ctx->pc = 0x2899B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899B0u;
        // 0x2899b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2899B8u;
        goto label_2899b8;
    }
    ctx->pc = 0x2899B0u;
    SET_GPR_U32(ctx, 31, 0x2899B8u);
    ctx->pc = 0x2899B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899B0u;
    // 0x2899b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2899B0u, 0x2899B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899B8u;
label_2899b8:
    // 0x2899b8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2899b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2899bc:
    // 0x2899bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2899bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2899c0:
    // 0x2899c0: 0x27b00290  addiu       $s0, $sp, 0x290
    ctx->pc = 0x2899c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_2899c4:
    // 0x2899c4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2899c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2899c8:
    // 0x2899c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2899c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2899cc:
    // 0x2899cc: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2899ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2899d0:
    // 0x2899d0: 0x40f809  jalr        $v0
label_2899d4:
    if (ctx->pc == 0x2899D4u) {
        ctx->pc = 0x2899D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899D0u;
        // 0x2899d4: 0x2c52821  addu        $a1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2899D8u;
        goto label_2899d8;
    }
    ctx->pc = 0x2899D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2899D8u);
        ctx->pc = 0x2899D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899D0u;
        // 0x2899d4: 0x2c52821  addu        $a1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2899D0u, 0x2899D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2899D8u;
label_2899d8:
    // 0x2899d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2899d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2899dc:
    // 0x2899dc: 0xc0a7ac4  jal         func_29EB10
label_2899e0:
    if (ctx->pc == 0x2899E0u) {
        ctx->pc = 0x2899E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899DCu;
        // 0x2899e0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2899E4u;
        goto label_2899e4;
    }
    ctx->pc = 0x2899DCu;
    SET_GPR_U32(ctx, 31, 0x2899E4u);
    ctx->pc = 0x2899E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2899DCu;
    // 0x2899e0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB10u, 0x2899DCu, 0x2899E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899E4u;
label_2899e4:
    // 0x2899e4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2899e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2899e8:
    // 0x2899e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2899e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2899ec:
    // 0x2899ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2899ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2899f0:
    // 0x2899f0: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x2899f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_2899f4:
    // 0x2899f4: 0x2446fff8  addiu       $a2, $v0, -0x8
    ctx->pc = 0x2899f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_2899f8:
    // 0x2899f8: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x2899f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_2899fc:
    // 0x2899fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2899fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289a00:
    // 0x289a00: 0xc0a78d4  jal         func_29E350
label_289a04:
    if (ctx->pc == 0x289A04u) {
        ctx->pc = 0x289A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A00u;
        // 0x289a04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289A08u;
        goto label_289a08;
    }
    ctx->pc = 0x289A00u;
    SET_GPR_U32(ctx, 31, 0x289A08u);
    ctx->pc = 0x289A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A00u;
    // 0x289a04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E350u, 0x289A00u, 0x289A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A08u;
label_289a08:
    // 0x289a08: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x289a08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_289a0c:
    // 0x289a0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_289a10:
    // 0x289a10: 0xc7ac02e0  lwc1        $f12, 0x2E0($sp)
    ctx->pc = 0x289a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_289a14:
    // 0x289a14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x289a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_289a18:
    // 0x289a18: 0x7fa20280  sq          $v0, 0x280($sp)
    ctx->pc = 0x289a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
label_289a1c:
    // 0x289a1c: 0xc0a2404  jal         func_289010
label_289a20:
    if (ctx->pc == 0x289A20u) {
        ctx->pc = 0x289A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A1Cu;
        // 0x289a20: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289A24u;
        goto label_289a24;
    }
    ctx->pc = 0x289A1Cu;
    SET_GPR_U32(ctx, 31, 0x289A24u);
    ctx->pc = 0x289A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A1Cu;
    // 0x289a20: 0x27a60280  addiu       $a2, $sp, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289010u, 0x289A1Cu, 0x289A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A24u;
label_289a24:
    // 0x289a24: 0x145e00bc  bne         $v0, $fp, . + 4 + (0xBC << 2)
label_289a28:
    if (ctx->pc == 0x289A28u) {
        ctx->pc = 0x289A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A24u;
        // 0x289a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289A2Cu;
        goto label_289a2c;
    }
    ctx->pc = 0x289A24u;
    {
        const bool branch_taken_0x289a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x289A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A24u;
        // 0x289a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a24) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x289A2Cu;
label_289a2c:
    // 0x289a2c: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_289a30:
    if (ctx->pc == 0x289A30u) {
        ctx->pc = 0x289A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A2Cu;
        // 0x289a30: 0x7ba20280  lq          $v0, 0x280($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289A34u;
        goto label_289a34;
    }
    ctx->pc = 0x289A2Cu;
    {
        const bool branch_taken_0x289a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A2Cu;
        // 0x289a30: 0x7ba20280  lq          $v0, 0x280($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a2c) {
            ctx->pc = 0x289D10u;
            goto label_289d10;
        }
    }
    ctx->pc = 0x289A34u;
label_289a34:
    // 0x289a34: 0x1660000e  bnez        $s3, . + 4 + (0xE << 2)
label_289a38:
    if (ctx->pc == 0x289A38u) {
        ctx->pc = 0x289A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A34u;
        // 0x289a38: 0x27b10230  addiu       $s1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289A3Cu;
        goto label_289a3c;
    }
    ctx->pc = 0x289A34u;
    {
        const bool branch_taken_0x289a34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x289A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A34u;
        // 0x289a38: 0x27b10230  addiu       $s1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a34) {
            ctx->pc = 0x289A70u;
            goto label_289a70;
        }
    }
    ctx->pc = 0x289A3Cu;
label_289a3c:
    // 0x289a3c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x289a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_289a40:
    // 0x289a40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289a44:
    // 0x289a44: 0x0  nop
    ctx->pc = 0x289a44u;
    // NOP
label_289a48:
    // 0x289a48: 0x4600d034  c.lt.s      $f26, $f0
    ctx->pc = 0x289a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289a4c:
    // 0x289a4c: 0x0  nop
    ctx->pc = 0x289a4cu;
    // NOP
label_289a50:
    // 0x289a50: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_289a54:
    if (ctx->pc == 0x289A54u) {
        ctx->pc = 0x289A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A50u;
        // 0x289a54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289A58u;
        goto label_289a58;
    }
    ctx->pc = 0x289A50u;
    {
        const bool branch_taken_0x289a50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A50u;
        // 0x289a54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a50) {
            ctx->pc = 0x289A74u;
            goto label_289a74;
        }
    }
    ctx->pc = 0x289A58u;
label_289a58:
    // 0x289a58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x289a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_289a5c:
    // 0x289a5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_289a60:
    // 0x289a60: 0xc0a232c  jal         func_288CB0
label_289a64:
    if (ctx->pc == 0x289A64u) {
        ctx->pc = 0x289A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A60u;
        // 0x289a64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289A68u;
        goto label_289a68;
    }
    ctx->pc = 0x289A60u;
    SET_GPR_U32(ctx, 31, 0x289A68u);
    ctx->pc = 0x289A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A60u;
    // 0x289a64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288CB0u, 0x289A60u, 0x289A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A68u;
label_289a68:
    // 0x289a68: 0x100000ab  b           . + 4 + (0xAB << 2)
label_289a6c:
    if (ctx->pc == 0x289A6Cu) {
        ctx->pc = 0x289A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A68u;
        // 0x289a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289A70u;
        goto label_289a70;
    }
    ctx->pc = 0x289A68u;
    {
        const bool branch_taken_0x289a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A68u;
        // 0x289a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a68) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x289A70u;
label_289a70:
    // 0x289a70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x289a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_289a74:
    // 0x289a74: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x289a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_289a78:
    // 0x289a78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x289a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289a7c:
    // 0x289a7c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x289a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_289a80:
    // 0x289a80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x289a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_289a84:
    // 0x289a84: 0xc0cdcc2  jal         func_337308
label_289a88:
    if (ctx->pc == 0x289A88u) {
        ctx->pc = 0x289A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A84u;
        // 0x289a88: 0x27a70240  addiu       $a3, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289A8Cu;
        goto label_289a8c;
    }
    ctx->pc = 0x289A84u;
    SET_GPR_U32(ctx, 31, 0x289A8Cu);
    ctx->pc = 0x289A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A84u;
    // 0x289a88: 0x27a70240  addiu       $a3, $sp, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337308u, 0x289A84u, 0x289A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289A8Cu;
label_289a8c:
    // 0x289a8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x289a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_289a90:
    // 0x289a90: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_289a94:
    if (ctx->pc == 0x289A94u) {
        ctx->pc = 0x289A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A90u;
        // 0x289a94: 0x27b00270  addiu       $s0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289A98u;
        goto label_289a98;
    }
    ctx->pc = 0x289A90u;
    {
        const bool branch_taken_0x289a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x289A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A90u;
        // 0x289a94: 0x27b00270  addiu       $s0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a90) {
            ctx->pc = 0x289AA0u;
            goto label_289aa0;
        }
    }
    ctx->pc = 0x289A98u;
label_289a98:
    // 0x289a98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_289a9c:
    // 0x289a9c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x289a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_289aa0:
    // 0x289aa0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x289aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_289aa4:
    // 0x289aa4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x289aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289aa8:
    // 0x289aa8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x289aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289aac:
    // 0x289aac: 0xc0a22f8  jal         func_288BE0
label_289ab0:
    if (ctx->pc == 0x289AB0u) {
        ctx->pc = 0x289AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AACu;
        // 0x289ab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289AB4u;
        goto label_289ab4;
    }
    ctx->pc = 0x289AACu;
    SET_GPR_U32(ctx, 31, 0x289AB4u);
    ctx->pc = 0x289AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289AACu;
    // 0x289ab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288BE0u, 0x289AACu, 0x289AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289AB4u;
label_289ab4:
    // 0x289ab4: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x289ab4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_289ab8:
    // 0x289ab8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x289ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_289abc:
    // 0x289abc: 0xc136b24  jal         func_4DAC90
label_289ac0:
    if (ctx->pc == 0x289AC0u) {
        ctx->pc = 0x289AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289ABCu;
        // 0x289ac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289AC4u;
        goto label_289ac4;
    }
    ctx->pc = 0x289ABCu;
    SET_GPR_U32(ctx, 31, 0x289AC4u);
    ctx->pc = 0x289AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289ABCu;
    // 0x289ac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x289ABCu, 0x289AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289AC4u;
label_289ac4:
    // 0x289ac4: 0x7ba202b0  lq          $v0, 0x2B0($sp)
    ctx->pc = 0x289ac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_289ac8:
    // 0x289ac8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x289ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_289acc:
    // 0x289acc: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x289accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_289ad0:
    // 0x289ad0: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x289ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_289ad4:
    // 0x289ad4: 0xc136b18  jal         func_4DAC60
label_289ad8:
    if (ctx->pc == 0x289AD8u) {
        ctx->pc = 0x289AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AD4u;
        // 0x289ad8: 0x7fa202a0  sq          $v0, 0x2A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289ADCu;
        goto label_289adc;
    }
    ctx->pc = 0x289AD4u;
    SET_GPR_U32(ctx, 31, 0x289ADCu);
    ctx->pc = 0x289AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289AD4u;
    // 0x289ad8: 0x7fa202a0  sq          $v0, 0x2A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x289AD4u, 0x289ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289ADCu;
label_289adc:
    // 0x289adc: 0x10000063  b           . + 4 + (0x63 << 2)
label_289ae0:
    if (ctx->pc == 0x289AE0u) {
        ctx->pc = 0x289AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289ADCu;
        // 0x289ae0: 0x7ba202b0  lq          $v0, 0x2B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289AE4u;
        goto label_289ae4;
    }
    ctx->pc = 0x289ADCu;
    {
        const bool branch_taken_0x289adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289ADCu;
        // 0x289ae0: 0x7ba202b0  lq          $v0, 0x2B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289adc) {
            ctx->pc = 0x289C6Cu;
            goto label_289c6c;
        }
    }
    ctx->pc = 0x289AE4u;
label_289ae4:
    // 0x289ae4: 0x1660000d  bnez        $s3, . + 4 + (0xD << 2)
label_289ae8:
    if (ctx->pc == 0x289AE8u) {
        ctx->pc = 0x289AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AE4u;
        // 0x289ae8: 0x27b10230  addiu       $s1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289AECu;
        goto label_289aec;
    }
    ctx->pc = 0x289AE4u;
    {
        const bool branch_taken_0x289ae4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x289AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289AE4u;
        // 0x289ae8: 0x27b10230  addiu       $s1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ae4) {
            ctx->pc = 0x289B1Cu;
            goto label_289b1c;
        }
    }
    ctx->pc = 0x289AECu;
label_289aec:
    // 0x289aec: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x289aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_289af0:
    // 0x289af0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289af4:
    // 0x289af4: 0x0  nop
    ctx->pc = 0x289af4u;
    // NOP
label_289af8:
    // 0x289af8: 0x4600d034  c.lt.s      $f26, $f0
    ctx->pc = 0x289af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289afc:
    // 0x289afc: 0x0  nop
    ctx->pc = 0x289afcu;
    // NOP
label_289b00:
    // 0x289b00: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_289b04:
    if (ctx->pc == 0x289B04u) {
        ctx->pc = 0x289B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B00u;
        // 0x289b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289B08u;
        goto label_289b08;
    }
    ctx->pc = 0x289B00u;
    {
        const bool branch_taken_0x289b00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B00u;
        // 0x289b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b00) {
            ctx->pc = 0x289B1Cu;
            goto label_289b1c;
        }
    }
    ctx->pc = 0x289B08u;
label_289b08:
    // 0x289b08: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x289b08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_289b0c:
    // 0x289b0c: 0xc0a232c  jal         func_288CB0
label_289b10:
    if (ctx->pc == 0x289B10u) {
        ctx->pc = 0x289B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B0Cu;
        // 0x289b10: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289B14u;
        goto label_289b14;
    }
    ctx->pc = 0x289B0Cu;
    SET_GPR_U32(ctx, 31, 0x289B14u);
    ctx->pc = 0x289B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B0Cu;
    // 0x289b10: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288CB0u, 0x289B0Cu, 0x289B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B14u;
label_289b14:
    // 0x289b14: 0x10000080  b           . + 4 + (0x80 << 2)
label_289b18:
    if (ctx->pc == 0x289B18u) {
        ctx->pc = 0x289B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B14u;
        // 0x289b18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289B1Cu;
        goto label_289b1c;
    }
    ctx->pc = 0x289B14u;
    {
        const bool branch_taken_0x289b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B14u;
        // 0x289b18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b14) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x289B1Cu;
label_289b1c:
    // 0x289b1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x289b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_289b20:
    // 0x289b20: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x289b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_289b24:
    // 0x289b24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x289b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289b28:
    // 0x289b28: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x289b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_289b2c:
    // 0x289b2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x289b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_289b30:
    // 0x289b30: 0xc0cdcc2  jal         func_337308
label_289b34:
    if (ctx->pc == 0x289B34u) {
        ctx->pc = 0x289B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B30u;
        // 0x289b34: 0x27a70240  addiu       $a3, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289B38u;
        goto label_289b38;
    }
    ctx->pc = 0x289B30u;
    SET_GPR_U32(ctx, 31, 0x289B38u);
    ctx->pc = 0x289B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B30u;
    // 0x289b34: 0x27a70240  addiu       $a3, $sp, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337308u, 0x289B30u, 0x289B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B38u;
label_289b38:
    // 0x289b38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x289b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_289b3c:
    // 0x289b3c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_289b40:
    if (ctx->pc == 0x289B40u) {
        ctx->pc = 0x289B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B3Cu;
        // 0x289b40: 0x27b00270  addiu       $s0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289B44u;
        goto label_289b44;
    }
    ctx->pc = 0x289B3Cu;
    {
        const bool branch_taken_0x289b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x289B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B3Cu;
        // 0x289b40: 0x27b00270  addiu       $s0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b3c) {
            ctx->pc = 0x289B4Cu;
            goto label_289b4c;
        }
    }
    ctx->pc = 0x289B44u;
label_289b44:
    // 0x289b44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_289b48:
    // 0x289b48: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x289b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_289b4c:
    // 0x289b4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x289b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_289b50:
    // 0x289b50: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x289b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289b54:
    // 0x289b54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x289b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289b58:
    // 0x289b58: 0xc0a22f8  jal         func_288BE0
label_289b5c:
    if (ctx->pc == 0x289B5Cu) {
        ctx->pc = 0x289B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B58u;
        // 0x289b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289B60u;
        goto label_289b60;
    }
    ctx->pc = 0x289B58u;
    SET_GPR_U32(ctx, 31, 0x289B60u);
    ctx->pc = 0x289B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B58u;
    // 0x289b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288BE0u, 0x289B58u, 0x289B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B60u;
label_289b60:
    // 0x289b60: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x289b60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_289b64:
    // 0x289b64: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x289b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_289b68:
    // 0x289b68: 0xc136b24  jal         func_4DAC90
label_289b6c:
    if (ctx->pc == 0x289B6Cu) {
        ctx->pc = 0x289B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B68u;
        // 0x289b6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289B70u;
        goto label_289b70;
    }
    ctx->pc = 0x289B68u;
    SET_GPR_U32(ctx, 31, 0x289B70u);
    ctx->pc = 0x289B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B68u;
    // 0x289b6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x289B68u, 0x289B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B70u;
label_289b70:
    // 0x289b70: 0x7ba202b0  lq          $v0, 0x2B0($sp)
    ctx->pc = 0x289b70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_289b74:
    // 0x289b74: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x289b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_289b78:
    // 0x289b78: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x289b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_289b7c:
    // 0x289b7c: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x289b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_289b80:
    // 0x289b80: 0xc136b18  jal         func_4DAC60
label_289b84:
    if (ctx->pc == 0x289B84u) {
        ctx->pc = 0x289B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B80u;
        // 0x289b84: 0x7fa202a0  sq          $v0, 0x2A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289B88u;
        goto label_289b88;
    }
    ctx->pc = 0x289B80u;
    SET_GPR_U32(ctx, 31, 0x289B88u);
    ctx->pc = 0x289B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B80u;
    // 0x289b84: 0x7fa202a0  sq          $v0, 0x2A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x289B80u, 0x289B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B88u;
label_289b88:
    // 0x289b88: 0x10000038  b           . + 4 + (0x38 << 2)
label_289b8c:
    if (ctx->pc == 0x289B8Cu) {
        ctx->pc = 0x289B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B88u;
        // 0x289b8c: 0x7ba202b0  lq          $v0, 0x2B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289B90u;
        goto label_289b90;
    }
    ctx->pc = 0x289B88u;
    {
        const bool branch_taken_0x289b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B88u;
        // 0x289b8c: 0x7ba202b0  lq          $v0, 0x2B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b88) {
            ctx->pc = 0x289C6Cu;
            goto label_289c6c;
        }
    }
    ctx->pc = 0x289B90u;
label_289b90:
    // 0x289b90: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
label_289b94:
    if (ctx->pc == 0x289B94u) {
        ctx->pc = 0x289B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B90u;
        // 0x289b94: 0x7ba30260  lq          $v1, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289B98u;
        goto label_289b98;
    }
    ctx->pc = 0x289B90u;
    {
        const bool branch_taken_0x289b90 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x289B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B90u;
        // 0x289b94: 0x7ba30260  lq          $v1, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b90) {
            ctx->pc = 0x289BB4u;
            goto label_289bb4;
        }
    }
    ctx->pc = 0x289B98u;
label_289b98:
    // 0x289b98: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x289b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_289b9c:
    // 0x289b9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289ba0:
    // 0x289ba0: 0x0  nop
    ctx->pc = 0x289ba0u;
    // NOP
label_289ba4:
    // 0x289ba4: 0x4600d034  c.lt.s      $f26, $f0
    ctx->pc = 0x289ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289ba8:
    // 0x289ba8: 0x0  nop
    ctx->pc = 0x289ba8u;
    // NOP
label_289bac:
    // 0x289bac: 0x4501ffaa  bc1t        . + 4 + (-0x56 << 2)
label_289bb0:
    if (ctx->pc == 0x289BB0u) {
        ctx->pc = 0x289BB4u;
        goto label_289bb4;
    }
    ctx->pc = 0x289BACu;
    {
        const bool branch_taken_0x289bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289bac) {
            ctx->pc = 0x289A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289a58;
        }
    }
    ctx->pc = 0x289BB4u;
label_289bb4:
    // 0x289bb4: 0x7ba20270  lq          $v0, 0x270($sp)
    ctx->pc = 0x289bb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_289bb8:
    // 0x289bb8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x289bb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_289bbc:
    // 0x289bbc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x289bbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_289bc0:
    // 0x289bc0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x289bc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_289bc4:
    // 0x289bc4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x289bc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_289bc8:
    // 0x289bc8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x289bc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_289bcc:
    // 0x289bcc: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x289bccu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_289bd0:
    // 0x289bd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x289bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_289bd4:
    // 0x289bd4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x289bd4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289bd8:
    // 0x289bd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_289bdc:
    // 0x289bdc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x289bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_289be0:
    // 0x289be0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x289be0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289be4:
    // 0x289be4: 0x0  nop
    ctx->pc = 0x289be4u;
    // NOP
label_289be8:
    // 0x289be8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_289bec:
    if (ctx->pc == 0x289BECu) {
        ctx->pc = 0x289BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289BE8u;
        // 0x289bec: 0x27b102b0  addiu       $s1, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289BF0u;
        goto label_289bf0;
    }
    ctx->pc = 0x289BE8u;
    {
        const bool branch_taken_0x289be8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289BE8u;
        // 0x289bec: 0x27b102b0  addiu       $s1, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289be8) {
            ctx->pc = 0x289BF8u;
            goto label_289bf8;
        }
    }
    ctx->pc = 0x289BF0u;
label_289bf0:
    // 0x289bf0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x289bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_289bf4:
    // 0x289bf4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x289bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_289bf8:
    // 0x289bf8: 0xc087502  jal         func_21D408
label_289bfc:
    if (ctx->pc == 0x289BFCu) {
        ctx->pc = 0x289BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289BF8u;
        // 0x289bfc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289C00u;
        goto label_289c00;
    }
    ctx->pc = 0x289BF8u;
    SET_GPR_U32(ctx, 31, 0x289C00u);
    ctx->pc = 0x289BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289BF8u;
    // 0x289bfc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x289BF8u, 0x289C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C00u;
label_289c00:
    // 0x289c00: 0xc7a002e0  lwc1        $f0, 0x2E0($sp)
    ctx->pc = 0x289c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289c04:
    // 0x289c04: 0x27b00230  addiu       $s0, $sp, 0x230
    ctx->pc = 0x289c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_289c08:
    // 0x289c08: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x289c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_289c0c:
    // 0x289c0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_289c10:
    // 0x289c10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x289c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289c14:
    // 0x289c14: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x289c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289c18:
    // 0x289c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289c1c:
    // 0x289c1c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x289c1cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_289c20:
    // 0x289c20: 0xc0a23d0  jal         func_288F40
label_289c24:
    if (ctx->pc == 0x289C24u) {
        ctx->pc = 0x289C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C20u;
        // 0x289c24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289C28u;
        goto label_289c28;
    }
    ctx->pc = 0x289C20u;
    SET_GPR_U32(ctx, 31, 0x289C28u);
    ctx->pc = 0x289C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C20u;
    // 0x289c24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F40u, 0x289C20u, 0x289C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C28u;
label_289c28:
    // 0x289c28: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x289c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_289c2c:
    // 0x289c2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x289c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289c30:
    // 0x289c30: 0xc136b18  jal         func_4DAC60
label_289c34:
    if (ctx->pc == 0x289C34u) {
        ctx->pc = 0x289C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C30u;
        // 0x289c34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289C38u;
        goto label_289c38;
    }
    ctx->pc = 0x289C30u;
    SET_GPR_U32(ctx, 31, 0x289C38u);
    ctx->pc = 0x289C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C30u;
    // 0x289c34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x289C30u, 0x289C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C38u;
label_289c38:
    // 0x289c38: 0x7ba202c0  lq          $v0, 0x2C0($sp)
    ctx->pc = 0x289c38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_289c3c:
    // 0x289c3c: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x289c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_289c40:
    // 0x289c40: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x289c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_289c44:
    // 0x289c44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x289c44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_289c48:
    // 0x289c48: 0xc136b24  jal         func_4DAC90
label_289c4c:
    if (ctx->pc == 0x289C4Cu) {
        ctx->pc = 0x289C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C48u;
        // 0x289c4c: 0x7fa202a0  sq          $v0, 0x2A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289C50u;
        goto label_289c50;
    }
    ctx->pc = 0x289C48u;
    SET_GPR_U32(ctx, 31, 0x289C50u);
    ctx->pc = 0x289C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C48u;
    // 0x289c4c: 0x7fa202a0  sq          $v0, 0x2A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x289C48u, 0x289C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C50u;
label_289c50:
    // 0x289c50: 0x7ba202d0  lq          $v0, 0x2D0($sp)
    ctx->pc = 0x289c50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_289c54:
    // 0x289c54: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x289c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_289c58:
    // 0x289c58: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x289c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_289c5c:
    // 0x289c5c: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x289c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_289c60:
    // 0x289c60: 0xc136b18  jal         func_4DAC60
label_289c64:
    if (ctx->pc == 0x289C64u) {
        ctx->pc = 0x289C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C60u;
        // 0x289c64: 0x7fa202c0  sq          $v0, 0x2C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289C68u;
        goto label_289c68;
    }
    ctx->pc = 0x289C60u;
    SET_GPR_U32(ctx, 31, 0x289C68u);
    ctx->pc = 0x289C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C60u;
    // 0x289c64: 0x7fa202c0  sq          $v0, 0x2C0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x289C60u, 0x289C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C68u;
label_289c68:
    // 0x289c68: 0x7ba202d0  lq          $v0, 0x2D0($sp)
    ctx->pc = 0x289c68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_289c6c:
    // 0x289c6c: 0x7fa20280  sq          $v0, 0x280($sp)
    ctx->pc = 0x289c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
label_289c70:
    // 0x289c70: 0x7fa20290  sq          $v0, 0x290($sp)
    ctx->pc = 0x289c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
label_289c74:
    // 0x289c74: 0x8fa202e4  lw          $v0, 0x2E4($sp)
    ctx->pc = 0x289c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
label_289c78:
    // 0x289c78: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x289c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_289c7c:
    // 0x289c7c: 0x27b00290  addiu       $s0, $sp, 0x290
    ctx->pc = 0x289c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_289c80:
    // 0x289c80: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x289c80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_289c84:
    // 0x289c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289c88:
    // 0x289c88: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x289c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_289c8c:
    // 0x289c8c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x289c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_289c90:
    // 0x289c90: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x289c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_289c94:
    // 0x289c94: 0xc0cd8c2  jal         func_336308
label_289c98:
    if (ctx->pc == 0x289C98u) {
        ctx->pc = 0x289C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C94u;
        // 0x289c98: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289C9Cu;
        goto label_289c9c;
    }
    ctx->pc = 0x289C94u;
    SET_GPR_U32(ctx, 31, 0x289C9Cu);
    ctx->pc = 0x289C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C94u;
    // 0x289c98: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x289C94u, 0x289C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C9Cu;
label_289c9c:
    // 0x289c9c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x289c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_289ca0:
    // 0x289ca0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289ca4:
    // 0x289ca4: 0x27a70280  addiu       $a3, $sp, 0x280
    ctx->pc = 0x289ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_289ca8:
    // 0x289ca8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x289ca8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_289cac:
    // 0x289cac: 0xc0bf364  jal         func_2FCD90
label_289cb0:
    if (ctx->pc == 0x289CB0u) {
        ctx->pc = 0x289CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289CACu;
        // 0x289cb0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289CB4u;
        goto label_289cb4;
    }
    ctx->pc = 0x289CACu;
    SET_GPR_U32(ctx, 31, 0x289CB4u);
    ctx->pc = 0x289CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289CACu;
    // 0x289cb0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCD90u, 0x289CACu, 0x289CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CB4u;
label_289cb4:
    // 0x289cb4: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x289cb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_289cb8:
    // 0x289cb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_289cbc:
    // 0x289cbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x289cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_289cc0:
    // 0x289cc0: 0x0  nop
    ctx->pc = 0x289cc0u;
    // NOP
label_289cc4:
    // 0x289cc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289cc8:
    // 0x289cc8: 0x0  nop
    ctx->pc = 0x289cc8u;
    // NOP
label_289ccc:
    // 0x289ccc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_289cd0:
    if (ctx->pc == 0x289CD0u) {
        ctx->pc = 0x289CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289CCCu;
        // 0x289cd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289CD4u;
        goto label_289cd4;
    }
    ctx->pc = 0x289CCCu;
    {
        const bool branch_taken_0x289ccc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289CCCu;
        // 0x289cd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ccc) {
            ctx->pc = 0x289CF0u;
            goto label_289cf0;
        }
    }
    ctx->pc = 0x289CD4u;
label_289cd4:
    // 0x289cd4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x289cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_289cd8:
    // 0x289cd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_289cdc:
    // 0x289cdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x289cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_289ce0:
    // 0x289ce0: 0xc0a232c  jal         func_288CB0
label_289ce4:
    if (ctx->pc == 0x289CE4u) {
        ctx->pc = 0x289CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289CE0u;
        // 0x289ce4: 0x460cb302  mul.s       $f12, $f22, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x289CE8u;
        goto label_289ce8;
    }
    ctx->pc = 0x289CE0u;
    SET_GPR_U32(ctx, 31, 0x289CE8u);
    ctx->pc = 0x289CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289CE0u;
    // 0x289ce4: 0x460cb302  mul.s       $f12, $f22, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x288CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288CB0u, 0x289CE0u, 0x289CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CE8u;
label_289ce8:
    // 0x289ce8: 0x1000000b  b           . + 4 + (0xB << 2)
label_289cec:
    if (ctx->pc == 0x289CECu) {
        ctx->pc = 0x289CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289CE8u;
        // 0x289cec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289CF0u;
        goto label_289cf0;
    }
    ctx->pc = 0x289CE8u;
    {
        const bool branch_taken_0x289ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289CE8u;
        // 0x289cec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ce8) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x289CF0u;
label_289cf0:
    // 0x289cf0: 0xc7ac02e0  lwc1        $f12, 0x2E0($sp)
    ctx->pc = 0x289cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_289cf4:
    // 0x289cf4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x289cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_289cf8:
    // 0x289cf8: 0xc0a2404  jal         func_289010
label_289cfc:
    if (ctx->pc == 0x289CFCu) {
        ctx->pc = 0x289CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289CF8u;
        // 0x289cfc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289D00u;
        goto label_289d00;
    }
    ctx->pc = 0x289CF8u;
    SET_GPR_U32(ctx, 31, 0x289D00u);
    ctx->pc = 0x289CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289CF8u;
    // 0x289cfc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289010u, 0x289CF8u, 0x289D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D00u;
label_289d00:
    // 0x289d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x289d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_289d04:
    // 0x289d04: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_289d08:
    if (ctx->pc == 0x289D08u) {
        ctx->pc = 0x289D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D04u;
        // 0x289d08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289D0Cu;
        goto label_289d0c;
    }
    ctx->pc = 0x289D04u;
    {
        const bool branch_taken_0x289d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x289D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D04u;
        // 0x289d08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d04) {
            ctx->pc = 0x289D18u;
            goto label_289d18;
        }
    }
    ctx->pc = 0x289D0Cu;
label_289d0c:
    // 0x289d0c: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x289d0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_289d10:
    // 0x289d10: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x289d10u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
label_289d14:
    // 0x289d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_289d18:
    // 0x289d18: 0x7bb00380  lq          $s0, 0x380($sp)
    ctx->pc = 0x289d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
label_289d1c:
    // 0x289d1c: 0x7bb10370  lq          $s1, 0x370($sp)
    ctx->pc = 0x289d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_289d20:
    // 0x289d20: 0x7bb20360  lq          $s2, 0x360($sp)
    ctx->pc = 0x289d20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_289d24:
    // 0x289d24: 0x7bb30350  lq          $s3, 0x350($sp)
    ctx->pc = 0x289d24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_289d28:
    // 0x289d28: 0x7bb40340  lq          $s4, 0x340($sp)
    ctx->pc = 0x289d28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 832)));
label_289d2c:
    // 0x289d2c: 0x7bb50330  lq          $s5, 0x330($sp)
    ctx->pc = 0x289d2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_289d30:
    // 0x289d30: 0x7bb60320  lq          $s6, 0x320($sp)
    ctx->pc = 0x289d30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_289d34:
    // 0x289d34: 0x7bb70310  lq          $s7, 0x310($sp)
    ctx->pc = 0x289d34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_289d38:
    // 0x289d38: 0x7bbe0300  lq          $fp, 0x300($sp)
    ctx->pc = 0x289d38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_289d3c:
    // 0x289d3c: 0xdfbf02f0  ld          $ra, 0x2F0($sp)
    ctx->pc = 0x289d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 752)));
label_289d40:
    // 0x289d40: 0xc7ba03c0  lwc1        $f26, 0x3C0($sp)
    ctx->pc = 0x289d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_289d44:
    // 0x289d44: 0xc7b903b8  lwc1        $f25, 0x3B8($sp)
    ctx->pc = 0x289d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_289d48:
    // 0x289d48: 0xc7b803b0  lwc1        $f24, 0x3B0($sp)
    ctx->pc = 0x289d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_289d4c:
    // 0x289d4c: 0xc7b703a8  lwc1        $f23, 0x3A8($sp)
    ctx->pc = 0x289d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_289d50:
    // 0x289d50: 0xc7b603a0  lwc1        $f22, 0x3A0($sp)
    ctx->pc = 0x289d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_289d54:
    // 0x289d54: 0xc7b50398  lwc1        $f21, 0x398($sp)
    ctx->pc = 0x289d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_289d58:
    // 0x289d58: 0xc7b40390  lwc1        $f20, 0x390($sp)
    ctx->pc = 0x289d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_289d5c:
    // 0x289d5c: 0x3e00008  jr          $ra
label_289d60:
    if (ctx->pc == 0x289D60u) {
        ctx->pc = 0x289D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D5Cu;
        // 0x289d60: 0x27bd03d0  addiu       $sp, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289D64u;
        goto label_289d64;
    }
    ctx->pc = 0x289D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D5Cu;
        // 0x289d60: 0x27bd03d0  addiu       $sp, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289D64u;
label_289d64:
    // 0x289d64: 0x0  nop
    ctx->pc = 0x289d64u;
    // NOP
    ctx->pc = 0x289d68u;
}
