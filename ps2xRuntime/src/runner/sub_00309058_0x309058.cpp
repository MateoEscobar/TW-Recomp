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

// Function: sub_00309058
// Address: 0x309058 - 0x309a40
void sub_00309058_0x309058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309058_0x309058");
#endif

    switch (ctx->pc) {
        case 0x309058u: goto label_309058;
        case 0x30905cu: goto label_30905c;
        case 0x309060u: goto label_309060;
        case 0x309064u: goto label_309064;
        case 0x309068u: goto label_309068;
        case 0x30906cu: goto label_30906c;
        case 0x309070u: goto label_309070;
        case 0x309074u: goto label_309074;
        case 0x309078u: goto label_309078;
        case 0x30907cu: goto label_30907c;
        case 0x309080u: goto label_309080;
        case 0x309084u: goto label_309084;
        case 0x309088u: goto label_309088;
        case 0x30908cu: goto label_30908c;
        case 0x309090u: goto label_309090;
        case 0x309094u: goto label_309094;
        case 0x309098u: goto label_309098;
        case 0x30909cu: goto label_30909c;
        case 0x3090a0u: goto label_3090a0;
        case 0x3090a4u: goto label_3090a4;
        case 0x3090a8u: goto label_3090a8;
        case 0x3090acu: goto label_3090ac;
        case 0x3090b0u: goto label_3090b0;
        case 0x3090b4u: goto label_3090b4;
        case 0x3090b8u: goto label_3090b8;
        case 0x3090bcu: goto label_3090bc;
        case 0x3090c0u: goto label_3090c0;
        case 0x3090c4u: goto label_3090c4;
        case 0x3090c8u: goto label_3090c8;
        case 0x3090ccu: goto label_3090cc;
        case 0x3090d0u: goto label_3090d0;
        case 0x3090d4u: goto label_3090d4;
        case 0x3090d8u: goto label_3090d8;
        case 0x3090dcu: goto label_3090dc;
        case 0x3090e0u: goto label_3090e0;
        case 0x3090e4u: goto label_3090e4;
        case 0x3090e8u: goto label_3090e8;
        case 0x3090ecu: goto label_3090ec;
        case 0x3090f0u: goto label_3090f0;
        case 0x3090f4u: goto label_3090f4;
        case 0x3090f8u: goto label_3090f8;
        case 0x3090fcu: goto label_3090fc;
        case 0x309100u: goto label_309100;
        case 0x309104u: goto label_309104;
        case 0x309108u: goto label_309108;
        case 0x30910cu: goto label_30910c;
        case 0x309110u: goto label_309110;
        case 0x309114u: goto label_309114;
        case 0x309118u: goto label_309118;
        case 0x30911cu: goto label_30911c;
        case 0x309120u: goto label_309120;
        case 0x309124u: goto label_309124;
        case 0x309128u: goto label_309128;
        case 0x30912cu: goto label_30912c;
        case 0x309130u: goto label_309130;
        case 0x309134u: goto label_309134;
        case 0x309138u: goto label_309138;
        case 0x30913cu: goto label_30913c;
        case 0x309140u: goto label_309140;
        case 0x309144u: goto label_309144;
        case 0x309148u: goto label_309148;
        case 0x30914cu: goto label_30914c;
        case 0x309150u: goto label_309150;
        case 0x309154u: goto label_309154;
        case 0x309158u: goto label_309158;
        case 0x30915cu: goto label_30915c;
        case 0x309160u: goto label_309160;
        case 0x309164u: goto label_309164;
        case 0x309168u: goto label_309168;
        case 0x30916cu: goto label_30916c;
        case 0x309170u: goto label_309170;
        case 0x309174u: goto label_309174;
        case 0x309178u: goto label_309178;
        case 0x30917cu: goto label_30917c;
        case 0x309180u: goto label_309180;
        case 0x309184u: goto label_309184;
        case 0x309188u: goto label_309188;
        case 0x30918cu: goto label_30918c;
        case 0x309190u: goto label_309190;
        case 0x309194u: goto label_309194;
        case 0x309198u: goto label_309198;
        case 0x30919cu: goto label_30919c;
        case 0x3091a0u: goto label_3091a0;
        case 0x3091a4u: goto label_3091a4;
        case 0x3091a8u: goto label_3091a8;
        case 0x3091acu: goto label_3091ac;
        case 0x3091b0u: goto label_3091b0;
        case 0x3091b4u: goto label_3091b4;
        case 0x3091b8u: goto label_3091b8;
        case 0x3091bcu: goto label_3091bc;
        case 0x3091c0u: goto label_3091c0;
        case 0x3091c4u: goto label_3091c4;
        case 0x3091c8u: goto label_3091c8;
        case 0x3091ccu: goto label_3091cc;
        case 0x3091d0u: goto label_3091d0;
        case 0x3091d4u: goto label_3091d4;
        case 0x3091d8u: goto label_3091d8;
        case 0x3091dcu: goto label_3091dc;
        case 0x3091e0u: goto label_3091e0;
        case 0x3091e4u: goto label_3091e4;
        case 0x3091e8u: goto label_3091e8;
        case 0x3091ecu: goto label_3091ec;
        case 0x3091f0u: goto label_3091f0;
        case 0x3091f4u: goto label_3091f4;
        case 0x3091f8u: goto label_3091f8;
        case 0x3091fcu: goto label_3091fc;
        case 0x309200u: goto label_309200;
        case 0x309204u: goto label_309204;
        case 0x309208u: goto label_309208;
        case 0x30920cu: goto label_30920c;
        case 0x309210u: goto label_309210;
        case 0x309214u: goto label_309214;
        case 0x309218u: goto label_309218;
        case 0x30921cu: goto label_30921c;
        case 0x309220u: goto label_309220;
        case 0x309224u: goto label_309224;
        case 0x309228u: goto label_309228;
        case 0x30922cu: goto label_30922c;
        case 0x309230u: goto label_309230;
        case 0x309234u: goto label_309234;
        case 0x309238u: goto label_309238;
        case 0x30923cu: goto label_30923c;
        case 0x309240u: goto label_309240;
        case 0x309244u: goto label_309244;
        case 0x309248u: goto label_309248;
        case 0x30924cu: goto label_30924c;
        case 0x309250u: goto label_309250;
        case 0x309254u: goto label_309254;
        case 0x309258u: goto label_309258;
        case 0x30925cu: goto label_30925c;
        case 0x309260u: goto label_309260;
        case 0x309264u: goto label_309264;
        case 0x309268u: goto label_309268;
        case 0x30926cu: goto label_30926c;
        case 0x309270u: goto label_309270;
        case 0x309274u: goto label_309274;
        case 0x309278u: goto label_309278;
        case 0x30927cu: goto label_30927c;
        case 0x309280u: goto label_309280;
        case 0x309284u: goto label_309284;
        case 0x309288u: goto label_309288;
        case 0x30928cu: goto label_30928c;
        case 0x309290u: goto label_309290;
        case 0x309294u: goto label_309294;
        case 0x309298u: goto label_309298;
        case 0x30929cu: goto label_30929c;
        case 0x3092a0u: goto label_3092a0;
        case 0x3092a4u: goto label_3092a4;
        case 0x3092a8u: goto label_3092a8;
        case 0x3092acu: goto label_3092ac;
        case 0x3092b0u: goto label_3092b0;
        case 0x3092b4u: goto label_3092b4;
        case 0x3092b8u: goto label_3092b8;
        case 0x3092bcu: goto label_3092bc;
        case 0x3092c0u: goto label_3092c0;
        case 0x3092c4u: goto label_3092c4;
        case 0x3092c8u: goto label_3092c8;
        case 0x3092ccu: goto label_3092cc;
        case 0x3092d0u: goto label_3092d0;
        case 0x3092d4u: goto label_3092d4;
        case 0x3092d8u: goto label_3092d8;
        case 0x3092dcu: goto label_3092dc;
        case 0x3092e0u: goto label_3092e0;
        case 0x3092e4u: goto label_3092e4;
        case 0x3092e8u: goto label_3092e8;
        case 0x3092ecu: goto label_3092ec;
        case 0x3092f0u: goto label_3092f0;
        case 0x3092f4u: goto label_3092f4;
        case 0x3092f8u: goto label_3092f8;
        case 0x3092fcu: goto label_3092fc;
        case 0x309300u: goto label_309300;
        case 0x309304u: goto label_309304;
        case 0x309308u: goto label_309308;
        case 0x30930cu: goto label_30930c;
        case 0x309310u: goto label_309310;
        case 0x309314u: goto label_309314;
        case 0x309318u: goto label_309318;
        case 0x30931cu: goto label_30931c;
        case 0x309320u: goto label_309320;
        case 0x309324u: goto label_309324;
        case 0x309328u: goto label_309328;
        case 0x30932cu: goto label_30932c;
        case 0x309330u: goto label_309330;
        case 0x309334u: goto label_309334;
        case 0x309338u: goto label_309338;
        case 0x30933cu: goto label_30933c;
        case 0x309340u: goto label_309340;
        case 0x309344u: goto label_309344;
        case 0x309348u: goto label_309348;
        case 0x30934cu: goto label_30934c;
        case 0x309350u: goto label_309350;
        case 0x309354u: goto label_309354;
        case 0x309358u: goto label_309358;
        case 0x30935cu: goto label_30935c;
        case 0x309360u: goto label_309360;
        case 0x309364u: goto label_309364;
        case 0x309368u: goto label_309368;
        case 0x30936cu: goto label_30936c;
        case 0x309370u: goto label_309370;
        case 0x309374u: goto label_309374;
        case 0x309378u: goto label_309378;
        case 0x30937cu: goto label_30937c;
        case 0x309380u: goto label_309380;
        case 0x309384u: goto label_309384;
        case 0x309388u: goto label_309388;
        case 0x30938cu: goto label_30938c;
        case 0x309390u: goto label_309390;
        case 0x309394u: goto label_309394;
        case 0x309398u: goto label_309398;
        case 0x30939cu: goto label_30939c;
        case 0x3093a0u: goto label_3093a0;
        case 0x3093a4u: goto label_3093a4;
        case 0x3093a8u: goto label_3093a8;
        case 0x3093acu: goto label_3093ac;
        case 0x3093b0u: goto label_3093b0;
        case 0x3093b4u: goto label_3093b4;
        case 0x3093b8u: goto label_3093b8;
        case 0x3093bcu: goto label_3093bc;
        case 0x3093c0u: goto label_3093c0;
        case 0x3093c4u: goto label_3093c4;
        case 0x3093c8u: goto label_3093c8;
        case 0x3093ccu: goto label_3093cc;
        case 0x3093d0u: goto label_3093d0;
        case 0x3093d4u: goto label_3093d4;
        case 0x3093d8u: goto label_3093d8;
        case 0x3093dcu: goto label_3093dc;
        case 0x3093e0u: goto label_3093e0;
        case 0x3093e4u: goto label_3093e4;
        case 0x3093e8u: goto label_3093e8;
        case 0x3093ecu: goto label_3093ec;
        case 0x3093f0u: goto label_3093f0;
        case 0x3093f4u: goto label_3093f4;
        case 0x3093f8u: goto label_3093f8;
        case 0x3093fcu: goto label_3093fc;
        case 0x309400u: goto label_309400;
        case 0x309404u: goto label_309404;
        case 0x309408u: goto label_309408;
        case 0x30940cu: goto label_30940c;
        case 0x309410u: goto label_309410;
        case 0x309414u: goto label_309414;
        case 0x309418u: goto label_309418;
        case 0x30941cu: goto label_30941c;
        case 0x309420u: goto label_309420;
        case 0x309424u: goto label_309424;
        case 0x309428u: goto label_309428;
        case 0x30942cu: goto label_30942c;
        case 0x309430u: goto label_309430;
        case 0x309434u: goto label_309434;
        case 0x309438u: goto label_309438;
        case 0x30943cu: goto label_30943c;
        case 0x309440u: goto label_309440;
        case 0x309444u: goto label_309444;
        case 0x309448u: goto label_309448;
        case 0x30944cu: goto label_30944c;
        case 0x309450u: goto label_309450;
        case 0x309454u: goto label_309454;
        case 0x309458u: goto label_309458;
        case 0x30945cu: goto label_30945c;
        case 0x309460u: goto label_309460;
        case 0x309464u: goto label_309464;
        case 0x309468u: goto label_309468;
        case 0x30946cu: goto label_30946c;
        case 0x309470u: goto label_309470;
        case 0x309474u: goto label_309474;
        case 0x309478u: goto label_309478;
        case 0x30947cu: goto label_30947c;
        case 0x309480u: goto label_309480;
        case 0x309484u: goto label_309484;
        case 0x309488u: goto label_309488;
        case 0x30948cu: goto label_30948c;
        case 0x309490u: goto label_309490;
        case 0x309494u: goto label_309494;
        case 0x309498u: goto label_309498;
        case 0x30949cu: goto label_30949c;
        case 0x3094a0u: goto label_3094a0;
        case 0x3094a4u: goto label_3094a4;
        case 0x3094a8u: goto label_3094a8;
        case 0x3094acu: goto label_3094ac;
        case 0x3094b0u: goto label_3094b0;
        case 0x3094b4u: goto label_3094b4;
        case 0x3094b8u: goto label_3094b8;
        case 0x3094bcu: goto label_3094bc;
        case 0x3094c0u: goto label_3094c0;
        case 0x3094c4u: goto label_3094c4;
        case 0x3094c8u: goto label_3094c8;
        case 0x3094ccu: goto label_3094cc;
        case 0x3094d0u: goto label_3094d0;
        case 0x3094d4u: goto label_3094d4;
        case 0x3094d8u: goto label_3094d8;
        case 0x3094dcu: goto label_3094dc;
        case 0x3094e0u: goto label_3094e0;
        case 0x3094e4u: goto label_3094e4;
        case 0x3094e8u: goto label_3094e8;
        case 0x3094ecu: goto label_3094ec;
        case 0x3094f0u: goto label_3094f0;
        case 0x3094f4u: goto label_3094f4;
        case 0x3094f8u: goto label_3094f8;
        case 0x3094fcu: goto label_3094fc;
        case 0x309500u: goto label_309500;
        case 0x309504u: goto label_309504;
        case 0x309508u: goto label_309508;
        case 0x30950cu: goto label_30950c;
        case 0x309510u: goto label_309510;
        case 0x309514u: goto label_309514;
        case 0x309518u: goto label_309518;
        case 0x30951cu: goto label_30951c;
        case 0x309520u: goto label_309520;
        case 0x309524u: goto label_309524;
        case 0x309528u: goto label_309528;
        case 0x30952cu: goto label_30952c;
        case 0x309530u: goto label_309530;
        case 0x309534u: goto label_309534;
        case 0x309538u: goto label_309538;
        case 0x30953cu: goto label_30953c;
        case 0x309540u: goto label_309540;
        case 0x309544u: goto label_309544;
        case 0x309548u: goto label_309548;
        case 0x30954cu: goto label_30954c;
        case 0x309550u: goto label_309550;
        case 0x309554u: goto label_309554;
        case 0x309558u: goto label_309558;
        case 0x30955cu: goto label_30955c;
        case 0x309560u: goto label_309560;
        case 0x309564u: goto label_309564;
        case 0x309568u: goto label_309568;
        case 0x30956cu: goto label_30956c;
        case 0x309570u: goto label_309570;
        case 0x309574u: goto label_309574;
        case 0x309578u: goto label_309578;
        case 0x30957cu: goto label_30957c;
        case 0x309580u: goto label_309580;
        case 0x309584u: goto label_309584;
        case 0x309588u: goto label_309588;
        case 0x30958cu: goto label_30958c;
        case 0x309590u: goto label_309590;
        case 0x309594u: goto label_309594;
        case 0x309598u: goto label_309598;
        case 0x30959cu: goto label_30959c;
        case 0x3095a0u: goto label_3095a0;
        case 0x3095a4u: goto label_3095a4;
        case 0x3095a8u: goto label_3095a8;
        case 0x3095acu: goto label_3095ac;
        case 0x3095b0u: goto label_3095b0;
        case 0x3095b4u: goto label_3095b4;
        case 0x3095b8u: goto label_3095b8;
        case 0x3095bcu: goto label_3095bc;
        case 0x3095c0u: goto label_3095c0;
        case 0x3095c4u: goto label_3095c4;
        case 0x3095c8u: goto label_3095c8;
        case 0x3095ccu: goto label_3095cc;
        case 0x3095d0u: goto label_3095d0;
        case 0x3095d4u: goto label_3095d4;
        case 0x3095d8u: goto label_3095d8;
        case 0x3095dcu: goto label_3095dc;
        case 0x3095e0u: goto label_3095e0;
        case 0x3095e4u: goto label_3095e4;
        case 0x3095e8u: goto label_3095e8;
        case 0x3095ecu: goto label_3095ec;
        case 0x3095f0u: goto label_3095f0;
        case 0x3095f4u: goto label_3095f4;
        case 0x3095f8u: goto label_3095f8;
        case 0x3095fcu: goto label_3095fc;
        case 0x309600u: goto label_309600;
        case 0x309604u: goto label_309604;
        case 0x309608u: goto label_309608;
        case 0x30960cu: goto label_30960c;
        case 0x309610u: goto label_309610;
        case 0x309614u: goto label_309614;
        case 0x309618u: goto label_309618;
        case 0x30961cu: goto label_30961c;
        case 0x309620u: goto label_309620;
        case 0x309624u: goto label_309624;
        case 0x309628u: goto label_309628;
        case 0x30962cu: goto label_30962c;
        case 0x309630u: goto label_309630;
        case 0x309634u: goto label_309634;
        case 0x309638u: goto label_309638;
        case 0x30963cu: goto label_30963c;
        case 0x309640u: goto label_309640;
        case 0x309644u: goto label_309644;
        case 0x309648u: goto label_309648;
        case 0x30964cu: goto label_30964c;
        case 0x309650u: goto label_309650;
        case 0x309654u: goto label_309654;
        case 0x309658u: goto label_309658;
        case 0x30965cu: goto label_30965c;
        case 0x309660u: goto label_309660;
        case 0x309664u: goto label_309664;
        case 0x309668u: goto label_309668;
        case 0x30966cu: goto label_30966c;
        case 0x309670u: goto label_309670;
        case 0x309674u: goto label_309674;
        case 0x309678u: goto label_309678;
        case 0x30967cu: goto label_30967c;
        case 0x309680u: goto label_309680;
        case 0x309684u: goto label_309684;
        case 0x309688u: goto label_309688;
        case 0x30968cu: goto label_30968c;
        case 0x309690u: goto label_309690;
        case 0x309694u: goto label_309694;
        case 0x309698u: goto label_309698;
        case 0x30969cu: goto label_30969c;
        case 0x3096a0u: goto label_3096a0;
        case 0x3096a4u: goto label_3096a4;
        case 0x3096a8u: goto label_3096a8;
        case 0x3096acu: goto label_3096ac;
        case 0x3096b0u: goto label_3096b0;
        case 0x3096b4u: goto label_3096b4;
        case 0x3096b8u: goto label_3096b8;
        case 0x3096bcu: goto label_3096bc;
        case 0x3096c0u: goto label_3096c0;
        case 0x3096c4u: goto label_3096c4;
        case 0x3096c8u: goto label_3096c8;
        case 0x3096ccu: goto label_3096cc;
        case 0x3096d0u: goto label_3096d0;
        case 0x3096d4u: goto label_3096d4;
        case 0x3096d8u: goto label_3096d8;
        case 0x3096dcu: goto label_3096dc;
        case 0x3096e0u: goto label_3096e0;
        case 0x3096e4u: goto label_3096e4;
        case 0x3096e8u: goto label_3096e8;
        case 0x3096ecu: goto label_3096ec;
        case 0x3096f0u: goto label_3096f0;
        case 0x3096f4u: goto label_3096f4;
        case 0x3096f8u: goto label_3096f8;
        case 0x3096fcu: goto label_3096fc;
        case 0x309700u: goto label_309700;
        case 0x309704u: goto label_309704;
        case 0x309708u: goto label_309708;
        case 0x30970cu: goto label_30970c;
        case 0x309710u: goto label_309710;
        case 0x309714u: goto label_309714;
        case 0x309718u: goto label_309718;
        case 0x30971cu: goto label_30971c;
        case 0x309720u: goto label_309720;
        case 0x309724u: goto label_309724;
        case 0x309728u: goto label_309728;
        case 0x30972cu: goto label_30972c;
        case 0x309730u: goto label_309730;
        case 0x309734u: goto label_309734;
        case 0x309738u: goto label_309738;
        case 0x30973cu: goto label_30973c;
        case 0x309740u: goto label_309740;
        case 0x309744u: goto label_309744;
        case 0x309748u: goto label_309748;
        case 0x30974cu: goto label_30974c;
        case 0x309750u: goto label_309750;
        case 0x309754u: goto label_309754;
        case 0x309758u: goto label_309758;
        case 0x30975cu: goto label_30975c;
        case 0x309760u: goto label_309760;
        case 0x309764u: goto label_309764;
        case 0x309768u: goto label_309768;
        case 0x30976cu: goto label_30976c;
        case 0x309770u: goto label_309770;
        case 0x309774u: goto label_309774;
        case 0x309778u: goto label_309778;
        case 0x30977cu: goto label_30977c;
        case 0x309780u: goto label_309780;
        case 0x309784u: goto label_309784;
        case 0x309788u: goto label_309788;
        case 0x30978cu: goto label_30978c;
        case 0x309790u: goto label_309790;
        case 0x309794u: goto label_309794;
        case 0x309798u: goto label_309798;
        case 0x30979cu: goto label_30979c;
        case 0x3097a0u: goto label_3097a0;
        case 0x3097a4u: goto label_3097a4;
        case 0x3097a8u: goto label_3097a8;
        case 0x3097acu: goto label_3097ac;
        case 0x3097b0u: goto label_3097b0;
        case 0x3097b4u: goto label_3097b4;
        case 0x3097b8u: goto label_3097b8;
        case 0x3097bcu: goto label_3097bc;
        case 0x3097c0u: goto label_3097c0;
        case 0x3097c4u: goto label_3097c4;
        case 0x3097c8u: goto label_3097c8;
        case 0x3097ccu: goto label_3097cc;
        case 0x3097d0u: goto label_3097d0;
        case 0x3097d4u: goto label_3097d4;
        case 0x3097d8u: goto label_3097d8;
        case 0x3097dcu: goto label_3097dc;
        case 0x3097e0u: goto label_3097e0;
        case 0x3097e4u: goto label_3097e4;
        case 0x3097e8u: goto label_3097e8;
        case 0x3097ecu: goto label_3097ec;
        case 0x3097f0u: goto label_3097f0;
        case 0x3097f4u: goto label_3097f4;
        case 0x3097f8u: goto label_3097f8;
        case 0x3097fcu: goto label_3097fc;
        case 0x309800u: goto label_309800;
        case 0x309804u: goto label_309804;
        case 0x309808u: goto label_309808;
        case 0x30980cu: goto label_30980c;
        case 0x309810u: goto label_309810;
        case 0x309814u: goto label_309814;
        case 0x309818u: goto label_309818;
        case 0x30981cu: goto label_30981c;
        case 0x309820u: goto label_309820;
        case 0x309824u: goto label_309824;
        case 0x309828u: goto label_309828;
        case 0x30982cu: goto label_30982c;
        case 0x309830u: goto label_309830;
        case 0x309834u: goto label_309834;
        case 0x309838u: goto label_309838;
        case 0x30983cu: goto label_30983c;
        case 0x309840u: goto label_309840;
        case 0x309844u: goto label_309844;
        case 0x309848u: goto label_309848;
        case 0x30984cu: goto label_30984c;
        case 0x309850u: goto label_309850;
        case 0x309854u: goto label_309854;
        case 0x309858u: goto label_309858;
        case 0x30985cu: goto label_30985c;
        case 0x309860u: goto label_309860;
        case 0x309864u: goto label_309864;
        case 0x309868u: goto label_309868;
        case 0x30986cu: goto label_30986c;
        case 0x309870u: goto label_309870;
        case 0x309874u: goto label_309874;
        case 0x309878u: goto label_309878;
        case 0x30987cu: goto label_30987c;
        case 0x309880u: goto label_309880;
        case 0x309884u: goto label_309884;
        case 0x309888u: goto label_309888;
        case 0x30988cu: goto label_30988c;
        case 0x309890u: goto label_309890;
        case 0x309894u: goto label_309894;
        case 0x309898u: goto label_309898;
        case 0x30989cu: goto label_30989c;
        case 0x3098a0u: goto label_3098a0;
        case 0x3098a4u: goto label_3098a4;
        case 0x3098a8u: goto label_3098a8;
        case 0x3098acu: goto label_3098ac;
        case 0x3098b0u: goto label_3098b0;
        case 0x3098b4u: goto label_3098b4;
        case 0x3098b8u: goto label_3098b8;
        case 0x3098bcu: goto label_3098bc;
        case 0x3098c0u: goto label_3098c0;
        case 0x3098c4u: goto label_3098c4;
        case 0x3098c8u: goto label_3098c8;
        case 0x3098ccu: goto label_3098cc;
        case 0x3098d0u: goto label_3098d0;
        case 0x3098d4u: goto label_3098d4;
        case 0x3098d8u: goto label_3098d8;
        case 0x3098dcu: goto label_3098dc;
        case 0x3098e0u: goto label_3098e0;
        case 0x3098e4u: goto label_3098e4;
        case 0x3098e8u: goto label_3098e8;
        case 0x3098ecu: goto label_3098ec;
        case 0x3098f0u: goto label_3098f0;
        case 0x3098f4u: goto label_3098f4;
        case 0x3098f8u: goto label_3098f8;
        case 0x3098fcu: goto label_3098fc;
        case 0x309900u: goto label_309900;
        case 0x309904u: goto label_309904;
        case 0x309908u: goto label_309908;
        case 0x30990cu: goto label_30990c;
        case 0x309910u: goto label_309910;
        case 0x309914u: goto label_309914;
        case 0x309918u: goto label_309918;
        case 0x30991cu: goto label_30991c;
        case 0x309920u: goto label_309920;
        case 0x309924u: goto label_309924;
        case 0x309928u: goto label_309928;
        case 0x30992cu: goto label_30992c;
        case 0x309930u: goto label_309930;
        case 0x309934u: goto label_309934;
        case 0x309938u: goto label_309938;
        case 0x30993cu: goto label_30993c;
        case 0x309940u: goto label_309940;
        case 0x309944u: goto label_309944;
        case 0x309948u: goto label_309948;
        case 0x30994cu: goto label_30994c;
        case 0x309950u: goto label_309950;
        case 0x309954u: goto label_309954;
        case 0x309958u: goto label_309958;
        case 0x30995cu: goto label_30995c;
        case 0x309960u: goto label_309960;
        case 0x309964u: goto label_309964;
        case 0x309968u: goto label_309968;
        case 0x30996cu: goto label_30996c;
        case 0x309970u: goto label_309970;
        case 0x309974u: goto label_309974;
        case 0x309978u: goto label_309978;
        case 0x30997cu: goto label_30997c;
        case 0x309980u: goto label_309980;
        case 0x309984u: goto label_309984;
        case 0x309988u: goto label_309988;
        case 0x30998cu: goto label_30998c;
        case 0x309990u: goto label_309990;
        case 0x309994u: goto label_309994;
        case 0x309998u: goto label_309998;
        case 0x30999cu: goto label_30999c;
        case 0x3099a0u: goto label_3099a0;
        case 0x3099a4u: goto label_3099a4;
        case 0x3099a8u: goto label_3099a8;
        case 0x3099acu: goto label_3099ac;
        case 0x3099b0u: goto label_3099b0;
        case 0x3099b4u: goto label_3099b4;
        case 0x3099b8u: goto label_3099b8;
        case 0x3099bcu: goto label_3099bc;
        case 0x3099c0u: goto label_3099c0;
        case 0x3099c4u: goto label_3099c4;
        case 0x3099c8u: goto label_3099c8;
        case 0x3099ccu: goto label_3099cc;
        case 0x3099d0u: goto label_3099d0;
        case 0x3099d4u: goto label_3099d4;
        case 0x3099d8u: goto label_3099d8;
        case 0x3099dcu: goto label_3099dc;
        case 0x3099e0u: goto label_3099e0;
        case 0x3099e4u: goto label_3099e4;
        case 0x3099e8u: goto label_3099e8;
        case 0x3099ecu: goto label_3099ec;
        case 0x3099f0u: goto label_3099f0;
        case 0x3099f4u: goto label_3099f4;
        case 0x3099f8u: goto label_3099f8;
        case 0x3099fcu: goto label_3099fc;
        case 0x309a00u: goto label_309a00;
        case 0x309a04u: goto label_309a04;
        case 0x309a08u: goto label_309a08;
        case 0x309a0cu: goto label_309a0c;
        case 0x309a10u: goto label_309a10;
        case 0x309a14u: goto label_309a14;
        case 0x309a18u: goto label_309a18;
        case 0x309a1cu: goto label_309a1c;
        case 0x309a20u: goto label_309a20;
        case 0x309a24u: goto label_309a24;
        case 0x309a28u: goto label_309a28;
        case 0x309a2cu: goto label_309a2c;
        case 0x309a30u: goto label_309a30;
        case 0x309a34u: goto label_309a34;
        case 0x309a38u: goto label_309a38;
        case 0x309a3cu: goto label_309a3c;
        default: break;
    }

    ctx->pc = 0x309058u;

label_309058:
    // 0x309058: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x309058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_30905c:
    // 0x30905c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30905cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309060:
    // 0x309060: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x309060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_309064:
    // 0x309064: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x309064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_309068:
    // 0x309068: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x309068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30906c:
    // 0x30906c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x30906cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_309070:
    // 0x309070: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x309070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_309074:
    // 0x309074: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x309074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309078:
    // 0x309078: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x309078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_30907c:
    // 0x30907c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30907cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_309080:
    // 0x309080: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x309080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_309084:
    // 0x309084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_309088:
    // 0x309088: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x309088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30908c:
    // 0x30908c: 0xc137826  jal         func_4DE098
label_309090:
    if (ctx->pc == 0x309090u) {
        ctx->pc = 0x309090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30908Cu;
        // 0x309090: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309094u;
        goto label_309094;
    }
    ctx->pc = 0x30908Cu;
    SET_GPR_U32(ctx, 31, 0x309094u);
    ctx->pc = 0x309090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30908Cu;
    // 0x309090: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30908Cu, 0x309094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309094u;
label_309094:
    // 0x309094: 0xc0e409a  jal         func_390268
label_309098:
    if (ctx->pc == 0x309098u) {
        ctx->pc = 0x309098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309094u;
        // 0x309098: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30909Cu;
        goto label_30909c;
    }
    ctx->pc = 0x309094u;
    SET_GPR_U32(ctx, 31, 0x30909Cu);
    ctx->pc = 0x309098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309094u;
    // 0x309098: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x309094u, 0x30909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30909Cu;
label_30909c:
    // 0x30909c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30909cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3090a0:
    // 0x3090a0: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_3090a4:
    if (ctx->pc == 0x3090A4u) {
        ctx->pc = 0x3090A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090A0u;
        // 0x3090a4: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3090A8u;
        goto label_3090a8;
    }
    ctx->pc = 0x3090A0u;
    {
        const bool branch_taken_0x3090a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3090a0) {
            ctx->pc = 0x3090A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3090A0u;
            // 0x3090a4: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3090B8u;
            goto label_3090b8;
        }
    }
    ctx->pc = 0x3090A8u;
label_3090a8:
    // 0x3090a8: 0xc087502  jal         func_21D408
label_3090ac:
    if (ctx->pc == 0x3090ACu) {
        ctx->pc = 0x3090ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090A8u;
        // 0x3090ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3090B0u;
        goto label_3090b0;
    }
    ctx->pc = 0x3090A8u;
    SET_GPR_U32(ctx, 31, 0x3090B0u);
    ctx->pc = 0x3090ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3090A8u;
    // 0x3090ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3090A8u, 0x3090B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3090B0u;
label_3090b0:
    // 0x3090b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3090b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3090b4:
    // 0x3090b4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x3090b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3090b8:
    // 0x3090b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3090b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3090bc:
    // 0x3090bc: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
label_3090c0:
    if (ctx->pc == 0x3090C0u) {
        ctx->pc = 0x3090C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090BCu;
        // 0x3090c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3090C4u;
        goto label_3090c4;
    }
    ctx->pc = 0x3090BCu;
    {
        const bool branch_taken_0x3090bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3090C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090BCu;
        // 0x3090c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3090bc) {
            ctx->pc = 0x3090D4u;
            goto label_3090d4;
        }
    }
    ctx->pc = 0x3090C4u;
label_3090c4:
    // 0x3090c4: 0x10c2020b  beq         $a2, $v0, . + 4 + (0x20B << 2)
label_3090c8:
    if (ctx->pc == 0x3090C8u) {
        ctx->pc = 0x3090C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090C4u;
        // 0x3090c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3090CCu;
        goto label_3090cc;
    }
    ctx->pc = 0x3090C4u;
    {
        const bool branch_taken_0x3090c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3090C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090C4u;
        // 0x3090c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3090c4) {
            ctx->pc = 0x3098F4u;
            goto label_3098f4;
        }
    }
    ctx->pc = 0x3090CCu;
label_3090cc:
    // 0x3090cc: 0x10000253  b           . + 4 + (0x253 << 2)
label_3090d0:
    if (ctx->pc == 0x3090D0u) {
        ctx->pc = 0x3090D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090CCu;
        // 0x3090d0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3090D4u;
        goto label_3090d4;
    }
    ctx->pc = 0x3090CCu;
    {
        const bool branch_taken_0x3090cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3090D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090CCu;
        // 0x3090d0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3090cc) {
            ctx->pc = 0x309A1Cu;
            goto label_309a1c;
        }
    }
    ctx->pc = 0x3090D4u;
label_3090d4:
    // 0x3090d4: 0x92630024  lbu         $v1, 0x24($s3)
    ctx->pc = 0x3090d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
label_3090d8:
    // 0x3090d8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x3090d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3090dc:
    // 0x3090dc: 0x1040024d  beqz        $v0, . + 4 + (0x24D << 2)
label_3090e0:
    if (ctx->pc == 0x3090E0u) {
        ctx->pc = 0x3090E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090DCu;
        // 0x3090e0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3090E4u;
        goto label_3090e4;
    }
    ctx->pc = 0x3090DCu;
    {
        const bool branch_taken_0x3090dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3090E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090DCu;
        // 0x3090e0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3090dc) {
            ctx->pc = 0x309A14u;
            goto label_309a14;
        }
    }
    ctx->pc = 0x3090E4u;
label_3090e4:
    // 0x3090e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3090e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3090e8:
    // 0x3090e8: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x3090e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
label_3090ec:
    // 0x3090ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3090ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3090f0:
    // 0x3090f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3090f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3090f4:
    // 0x3090f4: 0x800008  jr          $a0
label_3090f8:
    if (ctx->pc == 0x3090F8u) {
        ctx->pc = 0x3090FCu;
        goto label_3090fc;
    }
    ctx->pc = 0x3090F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3090FCu: goto label_3090fc;
            case 0x309248u: goto label_309248;
            case 0x309284u: goto label_309284;
            case 0x309864u: goto label_309864;
            case 0x309A14u: goto label_309a14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3090F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3090FCu;
label_3090fc:
    // 0x3090fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3090fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_309100:
    // 0x309100: 0xc088b90  jal         func_222E40
label_309104:
    if (ctx->pc == 0x309104u) {
        ctx->pc = 0x309104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309100u;
        // 0x309104: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309108u;
        goto label_309108;
    }
    ctx->pc = 0x309100u;
    SET_GPR_U32(ctx, 31, 0x309108u);
    ctx->pc = 0x309104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309100u;
    // 0x309104: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x309100u, 0x309108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309108u;
label_309108:
    // 0x309108: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x309108u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_30910c:
    // 0x30910c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x30910cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_309110:
    // 0x309110: 0xa6029416  sh          $v0, -0x6BEA($s0)
    ctx->pc = 0x309110u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4294939670), (uint16_t)GPR_U32(ctx, 2));
label_309114:
    // 0x309114: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x309114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_309118:
    // 0x309118: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x309118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30911c:
    // 0x30911c: 0x40f809  jalr        $v0
label_309120:
    if (ctx->pc == 0x309120u) {
        ctx->pc = 0x309120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30911Cu;
        // 0x309120: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309124u;
        goto label_309124;
    }
    ctx->pc = 0x30911Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x309124u);
        ctx->pc = 0x309120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30911Cu;
        // 0x309120: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30911Cu, 0x309124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309124u;
label_309124:
    // 0x309124: 0xc08df0e  jal         func_237C38
label_309128:
    if (ctx->pc == 0x309128u) {
        ctx->pc = 0x309128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309124u;
        // 0x309128: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30912Cu;
        goto label_30912c;
    }
    ctx->pc = 0x309124u;
    SET_GPR_U32(ctx, 31, 0x30912Cu);
    ctx->pc = 0x309128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309124u;
    // 0x309128: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237C38u, 0x309124u, 0x30912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30912Cu;
label_30912c:
    // 0x30912c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30912cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_309130:
    // 0x309130: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x309130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_309134:
    // 0x309134: 0x8c46941c  lw          $a2, -0x6BE4($v0)
    ctx->pc = 0x309134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939676)));
label_309138:
    // 0x309138: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x309138u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_30913c:
    // 0x30913c: 0x2484b4f0  addiu       $a0, $a0, -0x4B10
    ctx->pc = 0x30913cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948080));
label_309140:
    // 0x309140: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x309140u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_309144:
    // 0x309144: 0xe6609418  swc1        $f0, -0x6BE8($s3)
    ctx->pc = 0x309144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294939672), bits); }
label_309148:
    // 0x309148: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x309148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30914c:
    // 0x30914c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x30914cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_309150:
    // 0x309150: 0xc070ca0  jal         func_1C3280
label_309154:
    if (ctx->pc == 0x309154u) {
        ctx->pc = 0x309154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309150u;
        // 0x309154: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309158u;
        goto label_309158;
    }
    ctx->pc = 0x309150u;
    SET_GPR_U32(ctx, 31, 0x309158u);
    ctx->pc = 0x309154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309150u;
    // 0x309154: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3280u, 0x309150u, 0x309158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309158u;
label_309158:
    // 0x309158: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x309158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30915c:
    // 0x30915c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30915cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309160:
    // 0x309160: 0x84449414  lh          $a0, -0x6BEC($v0)
    ctx->pc = 0x309160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294939668)));
label_309164:
    // 0x309164: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_309168:
    if (ctx->pc == 0x309168u) {
        ctx->pc = 0x309168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309164u;
        // 0x309168: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30916Cu;
        goto label_30916c;
    }
    ctx->pc = 0x309164u;
    {
        const bool branch_taken_0x309164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x309168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309164u;
        // 0x309168: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309164) {
            ctx->pc = 0x309180u;
            goto label_309180;
        }
    }
    ctx->pc = 0x30916Cu;
label_30916c:
    // 0x30916c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_309170:
    // 0x309170: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
label_309174:
    if (ctx->pc == 0x309174u) {
        ctx->pc = 0x309174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309170u;
        // 0x309174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309178u;
        goto label_309178;
    }
    ctx->pc = 0x309170u;
    {
        const bool branch_taken_0x309170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x309174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309170u;
        // 0x309174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309170) {
            ctx->pc = 0x3091E0u;
            goto label_3091e0;
        }
    }
    ctx->pc = 0x309178u;
label_309178:
    // 0x309178: 0x10000228  b           . + 4 + (0x228 << 2)
label_30917c:
    if (ctx->pc == 0x30917Cu) {
        ctx->pc = 0x30917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309178u;
        // 0x30917c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309180u;
        goto label_309180;
    }
    ctx->pc = 0x309178u;
    {
        const bool branch_taken_0x309178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309178u;
        // 0x30917c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309178) {
            ctx->pc = 0x309A1Cu;
            goto label_309a1c;
        }
    }
    ctx->pc = 0x309180u;
label_309180:
    // 0x309180: 0xc6619418  lwc1        $f1, -0x6BE8($s3)
    ctx->pc = 0x309180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294939672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309184:
    // 0x309184: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x309184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
label_309188:
    // 0x309188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x309188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30918c:
    // 0x30918c: 0x0  nop
    ctx->pc = 0x30918cu;
    // NOP
label_309190:
    // 0x309190: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x309190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309194:
    // 0x309194: 0x0  nop
    ctx->pc = 0x309194u;
    // NOP
label_309198:
    // 0x309198: 0x4500021e  bc1f        . + 4 + (0x21E << 2)
label_30919c:
    if (ctx->pc == 0x30919Cu) {
        ctx->pc = 0x30919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309198u;
        // 0x30919c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3091A0u;
        goto label_3091a0;
    }
    ctx->pc = 0x309198u;
    {
        const bool branch_taken_0x309198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309198u;
        // 0x30919c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309198) {
            ctx->pc = 0x309A14u;
            goto label_309a14;
        }
    }
    ctx->pc = 0x3091A0u;
label_3091a0:
    // 0x3091a0: 0xc0a3658  jal         func_28D960
label_3091a4:
    if (ctx->pc == 0x3091A4u) {
        ctx->pc = 0x3091A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091A0u;
        // 0x3091a4: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3091A8u;
        goto label_3091a8;
    }
    ctx->pc = 0x3091A0u;
    SET_GPR_U32(ctx, 31, 0x3091A8u);
    ctx->pc = 0x3091A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3091A0u;
    // 0x3091a4: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x3091A0u, 0x3091A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3091A8u;
label_3091a8:
    // 0x3091a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3091a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3091ac:
    // 0x3091ac: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x3091acu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_3091b0:
    // 0x3091b0: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
label_3091b4:
    if (ctx->pc == 0x3091B4u) {
        ctx->pc = 0x3091B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091B0u;
        // 0x3091b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3091B8u;
        goto label_3091b8;
    }
    ctx->pc = 0x3091B0u;
    {
        const bool branch_taken_0x3091b0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3091B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091B0u;
        // 0x3091b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091b0) {
            ctx->pc = 0x3091D4u;
            goto label_3091d4;
        }
    }
    ctx->pc = 0x3091B8u;
label_3091b8:
    // 0x3091b8: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x3091b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_3091bc:
    // 0x3091bc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3091bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3091c0:
    // 0x3091c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3091c4:
    if (ctx->pc == 0x3091C4u) {
        ctx->pc = 0x3091C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091C0u;
        // 0x3091c4: 0x240200c3  addiu       $v0, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3091C8u;
        goto label_3091c8;
    }
    ctx->pc = 0x3091C0u;
    {
        const bool branch_taken_0x3091c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3091C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091C0u;
        // 0x3091c4: 0x240200c3  addiu       $v0, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091c0) {
            ctx->pc = 0x3091D8u;
            goto label_3091d8;
        }
    }
    ctx->pc = 0x3091C8u;
label_3091c8:
    // 0x3091c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3091c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3091cc:
    // 0x3091cc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3091ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3091d0:
    // 0x3091d0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x3091d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3091d4:
    // 0x3091d4: 0x240200c3  addiu       $v0, $zero, 0xC3
    ctx->pc = 0x3091d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
label_3091d8:
    // 0x3091d8: 0x10000018  b           . + 4 + (0x18 << 2)
label_3091dc:
    if (ctx->pc == 0x3091DCu) {
        ctx->pc = 0x3091DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091D8u;
        // 0x3091dc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3091E0u;
        goto label_3091e0;
    }
    ctx->pc = 0x3091D8u;
    {
        const bool branch_taken_0x3091d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3091DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091D8u;
        // 0x3091dc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091d8) {
            ctx->pc = 0x30923Cu;
            goto label_30923c;
        }
    }
    ctx->pc = 0x3091E0u;
label_3091e0:
    // 0x3091e0: 0xc6619418  lwc1        $f1, -0x6BE8($s3)
    ctx->pc = 0x3091e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294939672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3091e4:
    // 0x3091e4: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x3091e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_3091e8:
    // 0x3091e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3091e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3091ec:
    // 0x3091ec: 0x0  nop
    ctx->pc = 0x3091ecu;
    // NOP
label_3091f0:
    // 0x3091f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3091f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3091f4:
    // 0x3091f4: 0x0  nop
    ctx->pc = 0x3091f4u;
    // NOP
label_3091f8:
    // 0x3091f8: 0x45000206  bc1f        . + 4 + (0x206 << 2)
label_3091fc:
    if (ctx->pc == 0x3091FCu) {
        ctx->pc = 0x3091FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091F8u;
        // 0x3091fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309200u;
        goto label_309200;
    }
    ctx->pc = 0x3091F8u;
    {
        const bool branch_taken_0x3091f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3091FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091F8u;
        // 0x3091fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091f8) {
            ctx->pc = 0x309A14u;
            goto label_309a14;
        }
    }
    ctx->pc = 0x309200u;
label_309200:
    // 0x309200: 0xc0a3658  jal         func_28D960
label_309204:
    if (ctx->pc == 0x309204u) {
        ctx->pc = 0x309204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309200u;
        // 0x309204: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309208u;
        goto label_309208;
    }
    ctx->pc = 0x309200u;
    SET_GPR_U32(ctx, 31, 0x309208u);
    ctx->pc = 0x309204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309200u;
    // 0x309204: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x309200u, 0x309208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309208u;
label_309208:
    // 0x309208: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x309208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_30920c:
    // 0x30920c: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x30920cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_309210:
    // 0x309210: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
label_309214:
    if (ctx->pc == 0x309214u) {
        ctx->pc = 0x309214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309210u;
        // 0x309214: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309218u;
        goto label_309218;
    }
    ctx->pc = 0x309210u;
    {
        const bool branch_taken_0x309210 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x309214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309210u;
        // 0x309214: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309210) {
            ctx->pc = 0x309234u;
            goto label_309234;
        }
    }
    ctx->pc = 0x309218u;
label_309218:
    // 0x309218: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x309218u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_30921c:
    // 0x30921c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30921cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_309220:
    // 0x309220: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_309224:
    if (ctx->pc == 0x309224u) {
        ctx->pc = 0x309224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309220u;
        // 0x309224: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309228u;
        goto label_309228;
    }
    ctx->pc = 0x309220u;
    {
        const bool branch_taken_0x309220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309220u;
        // 0x309224: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309220) {
            ctx->pc = 0x309238u;
            goto label_309238;
        }
    }
    ctx->pc = 0x309228u;
label_309228:
    // 0x309228: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x309228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_30922c:
    // 0x30922c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x30922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_309230:
    // 0x309230: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x309230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_309234:
    // 0x309234: 0x240200c4  addiu       $v0, $zero, 0xC4
    ctx->pc = 0x309234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_309238:
    // 0x309238: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x309238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30923c:
    // 0x30923c: 0xa4820024  sh          $v0, 0x24($a0)
    ctx->pc = 0x30923cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 2));
label_309240:
    // 0x309240: 0x100001f4  b           . + 4 + (0x1F4 << 2)
label_309244:
    if (ctx->pc == 0x309244u) {
        ctx->pc = 0x309244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309240u;
        // 0x309244: 0xa6239414  sh          $v1, -0x6BEC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4294939668), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309248u;
        goto label_309248;
    }
    ctx->pc = 0x309240u;
    {
        const bool branch_taken_0x309240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309240u;
        // 0x309244: 0xa6239414  sh          $v1, -0x6BEC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4294939668), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309240) {
            ctx->pc = 0x309A14u;
            goto label_309a14;
        }
    }
    ctx->pc = 0x309248u;
label_309248:
    // 0x309248: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x309248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30924c:
    // 0x30924c: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x30924cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
label_309250:
    // 0x309250: 0x2610b4f0  addiu       $s0, $s0, -0x4B10
    ctx->pc = 0x309250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948080));
label_309254:
    // 0x309254: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x309254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_309258:
    // 0x309258: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x309258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30925c:
    // 0x30925c: 0x40f809  jalr        $v0
label_309260:
    if (ctx->pc == 0x309260u) {
        ctx->pc = 0x309260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30925Cu;
        // 0x309260: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309264u;
        goto label_309264;
    }
    ctx->pc = 0x30925Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x309264u);
        ctx->pc = 0x309260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30925Cu;
        // 0x309260: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30925Cu, 0x309264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309264u;
label_309264:
    // 0x309264: 0xc08df0e  jal         func_237C38
label_309268:
    if (ctx->pc == 0x309268u) {
        ctx->pc = 0x309268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309264u;
        // 0x309268: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30926Cu;
        goto label_30926c;
    }
    ctx->pc = 0x309264u;
    SET_GPR_U32(ctx, 31, 0x30926Cu);
    ctx->pc = 0x309268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309264u;
    // 0x309268: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237C38u, 0x309264u, 0x30926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30926Cu;
label_30926c:
    // 0x30926c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30926cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_309270:
    // 0x309270: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x309270u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_309274:
    // 0x309274: 0x8c469420  lw          $a2, -0x6BE0($v0)
    ctx->pc = 0x309274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939680)));
label_309278:
    // 0x309278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30927c:
    // 0x30927c: 0x100001c1  b           . + 4 + (0x1C1 << 2)
label_309280:
    if (ctx->pc == 0x309280u) {
        ctx->pc = 0x309280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30927Cu;
        // 0x309280: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x309284u;
        goto label_309284;
    }
    ctx->pc = 0x30927Cu;
    {
        const bool branch_taken_0x30927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30927Cu;
        // 0x309280: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30927c) {
            ctx->pc = 0x309984u;
            goto label_309984;
        }
    }
    ctx->pc = 0x309284u;
label_309284:
    // 0x309284: 0x92630025  lbu         $v1, 0x25($s3)
    ctx->pc = 0x309284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
label_309288:
    // 0x309288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30928c:
    // 0x30928c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_309290:
    if (ctx->pc == 0x309290u) {
        ctx->pc = 0x309290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30928Cu;
        // 0x309290: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x309294u;
        goto label_309294;
    }
    ctx->pc = 0x30928Cu;
    {
        const bool branch_taken_0x30928c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x309290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30928Cu;
        // 0x309290: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30928c) {
            ctx->pc = 0x3092B8u;
            goto label_3092b8;
        }
    }
    ctx->pc = 0x309294u;
label_309294:
    // 0x309294: 0x144001e0  bnez        $v0, . + 4 + (0x1E0 << 2)
label_309298:
    if (ctx->pc == 0x309298u) {
        ctx->pc = 0x309298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309294u;
        // 0x309298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30929Cu;
        goto label_30929c;
    }
    ctx->pc = 0x309294u;
    {
        const bool branch_taken_0x309294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309294u;
        // 0x309298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309294) {
            ctx->pc = 0x309A18u;
            goto label_309a18;
        }
    }
    ctx->pc = 0x30929Cu;
label_30929c:
    // 0x30929c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3092a0:
    // 0x3092a0: 0x106200d7  beq         $v1, $v0, . + 4 + (0xD7 << 2)
label_3092a4:
    if (ctx->pc == 0x3092A4u) {
        ctx->pc = 0x3092A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092A0u;
        // 0x3092a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3092A8u;
        goto label_3092a8;
    }
    ctx->pc = 0x3092A0u;
    {
        const bool branch_taken_0x3092a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3092A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092A0u;
        // 0x3092a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3092a0) {
            ctx->pc = 0x309600u;
            goto label_309600;
        }
    }
    ctx->pc = 0x3092A8u;
label_3092a8:
    // 0x3092a8: 0x1062011f  beq         $v1, $v0, . + 4 + (0x11F << 2)
label_3092ac:
    if (ctx->pc == 0x3092ACu) {
        ctx->pc = 0x3092ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092A8u;
        // 0x3092ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3092B0u;
        goto label_3092b0;
    }
    ctx->pc = 0x3092A8u;
    {
        const bool branch_taken_0x3092a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3092ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092A8u;
        // 0x3092ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3092a8) {
            ctx->pc = 0x309728u;
            goto label_309728;
        }
    }
    ctx->pc = 0x3092B0u;
label_3092b0:
    // 0x3092b0: 0x100001da  b           . + 4 + (0x1DA << 2)
label_3092b4:
    if (ctx->pc == 0x3092B4u) {
        ctx->pc = 0x3092B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092B0u;
        // 0x3092b4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3092B8u;
        goto label_3092b8;
    }
    ctx->pc = 0x3092B0u;
    {
        const bool branch_taken_0x3092b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3092B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092B0u;
        // 0x3092b4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3092b0) {
            ctx->pc = 0x309A1Cu;
            goto label_309a1c;
        }
    }
    ctx->pc = 0x3092B8u;
label_3092b8:
    // 0x3092b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3092b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3092bc:
    // 0x3092bc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3092bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3092c0:
    // 0x3092c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3092c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3092c4:
    // 0x3092c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3092c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3092c8:
    // 0x3092c8: 0x40f809  jalr        $v0
label_3092cc:
    if (ctx->pc == 0x3092CCu) {
        ctx->pc = 0x3092CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092C8u;
        // 0x3092cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3092D0u;
        goto label_3092d0;
    }
    ctx->pc = 0x3092C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3092D0u);
        ctx->pc = 0x3092CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092C8u;
        // 0x3092cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3092C8u, 0x3092D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3092D0u;
label_3092d0:
    // 0x3092d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3092d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3092d4:
    // 0x3092d4: 0xc08e884  jal         func_23A210
label_3092d8:
    if (ctx->pc == 0x3092D8u) {
        ctx->pc = 0x3092D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092D4u;
        // 0x3092d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3092DCu;
        goto label_3092dc;
    }
    ctx->pc = 0x3092D4u;
    SET_GPR_U32(ctx, 31, 0x3092DCu);
    ctx->pc = 0x3092D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3092D4u;
    // 0x3092d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A210u, 0x3092D4u, 0x3092DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092DCu;
label_3092dc:
    // 0x3092dc: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x3092dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_3092e0:
    // 0x3092e0: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3092e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_3092e4:
    // 0x3092e4: 0x24a5b520  addiu       $a1, $a1, -0x4AE0
    ctx->pc = 0x3092e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948128));
label_3092e8:
    // 0x3092e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3092e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3092ec:
    // 0x3092ec: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3092ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3092f0:
    // 0x3092f0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3092f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3092f4:
    // 0x3092f4: 0x40f809  jalr        $v0
label_3092f8:
    if (ctx->pc == 0x3092F8u) {
        ctx->pc = 0x3092F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092F4u;
        // 0x3092f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3092FCu;
        goto label_3092fc;
    }
    ctx->pc = 0x3092F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3092FCu);
        ctx->pc = 0x3092F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092F4u;
        // 0x3092f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3092F4u, 0x3092FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3092FCu;
label_3092fc:
    // 0x3092fc: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x3092fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_309300:
    // 0x309300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x309300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309304:
    // 0x309304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x309304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309308:
    // 0x309308: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x309308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_30930c:
    // 0x30930c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x30930cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_309310:
    // 0x309310: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x309310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_309314:
    // 0x309314: 0x60f809  jalr        $v1
label_309318:
    if (ctx->pc == 0x309318u) {
        ctx->pc = 0x309318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309314u;
        // 0x309318: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30931Cu;
        goto label_30931c;
    }
    ctx->pc = 0x309314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30931Cu);
        ctx->pc = 0x309318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309314u;
        // 0x309318: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309314u, 0x30931Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30931Cu;
label_30931c:
    // 0x30931c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x30931cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_309320:
    // 0x309320: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x309320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_309324:
    // 0x309324: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x309324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_309328:
    // 0x309328: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x309328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_30932c:
    // 0x30932c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x30932cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_309330:
    // 0x309330: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_309334:
    if (ctx->pc == 0x309334u) {
        ctx->pc = 0x309334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309330u;
        // 0x309334: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309338u;
        goto label_309338;
    }
    ctx->pc = 0x309330u;
    {
        const bool branch_taken_0x309330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x309334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309330u;
        // 0x309334: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309330) {
            ctx->pc = 0x3093F8u;
            goto label_3093f8;
        }
    }
    ctx->pc = 0x309338u;
label_309338:
    // 0x309338: 0x24421388  addiu       $v0, $v0, 0x1388
    ctx->pc = 0x309338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
label_30933c:
    // 0x30933c: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x30933cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_309340:
    // 0x309340: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x309340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_309344:
    // 0x309344: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x309344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_309348:
    // 0x309348: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x309348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30934c:
    // 0x30934c: 0x40f809  jalr        $v0
label_309350:
    if (ctx->pc == 0x309350u) {
        ctx->pc = 0x309350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30934Cu;
        // 0x309350: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309354u;
        goto label_309354;
    }
    ctx->pc = 0x30934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x309354u);
        ctx->pc = 0x309350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30934Cu;
        // 0x309350: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30934Cu, 0x309354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309354u;
label_309354:
    // 0x309354: 0xc08df0e  jal         func_237C38
label_309358:
    if (ctx->pc == 0x309358u) {
        ctx->pc = 0x309358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309354u;
        // 0x309358: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30935Cu;
        goto label_30935c;
    }
    ctx->pc = 0x309354u;
    SET_GPR_U32(ctx, 31, 0x30935Cu);
    ctx->pc = 0x309358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309354u;
    // 0x309358: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237C38u, 0x309354u, 0x30935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30935Cu;
label_30935c:
    // 0x30935c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x30935cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_309360:
    // 0x309360: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x309360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_309364:
    // 0x309364: 0x0  nop
    ctx->pc = 0x309364u;
    // NOP
label_309368:
    // 0x309368: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x309368u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30936c:
    // 0x30936c: 0x0  nop
    ctx->pc = 0x30936cu;
    // NOP
label_309370:
    // 0x309370: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_309374:
    if (ctx->pc == 0x309374u) {
        ctx->pc = 0x309374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309370u;
        // 0x309374: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309378u;
        goto label_309378;
    }
    ctx->pc = 0x309370u;
    {
        const bool branch_taken_0x309370 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x309374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309370u;
        // 0x309374: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309370) {
            ctx->pc = 0x3093BCu;
            goto label_3093bc;
        }
    }
    ctx->pc = 0x309378u;
label_309378:
    // 0x309378: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x309378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_30937c:
    // 0x30937c: 0x24a5b538  addiu       $a1, $a1, -0x4AC8
    ctx->pc = 0x30937cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948152));
label_309380:
    // 0x309380: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x309380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_309384:
    // 0x309384: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x309384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_309388:
    // 0x309388: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x309388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_30938c:
    // 0x30938c: 0x40f809  jalr        $v0
label_309390:
    if (ctx->pc == 0x309390u) {
        ctx->pc = 0x309390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30938Cu;
        // 0x309390: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309394u;
        goto label_309394;
    }
    ctx->pc = 0x30938Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x309394u);
        ctx->pc = 0x309390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30938Cu;
        // 0x309390: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30938Cu, 0x309394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309394u;
label_309394:
    // 0x309394: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x309394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_309398:
    // 0x309398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x309398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30939c:
    // 0x30939c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30939cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3093a0:
    // 0x3093a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3093a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3093a4:
    // 0x3093a4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x3093a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_3093a8:
    // 0x3093a8: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x3093a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3093ac:
    // 0x3093ac: 0x60f809  jalr        $v1
label_3093b0:
    if (ctx->pc == 0x3093B0u) {
        ctx->pc = 0x3093B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093ACu;
        // 0x3093b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3093B4u;
        goto label_3093b4;
    }
    ctx->pc = 0x3093ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3093B4u);
        ctx->pc = 0x3093B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093ACu;
        // 0x3093b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3093ACu, 0x3093B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3093B4u;
label_3093b4:
    // 0x3093b4: 0x10000011  b           . + 4 + (0x11 << 2)
label_3093b8:
    if (ctx->pc == 0x3093B8u) {
        ctx->pc = 0x3093B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093B4u;
        // 0x3093b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3093BCu;
        goto label_3093bc;
    }
    ctx->pc = 0x3093B4u;
    {
        const bool branch_taken_0x3093b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3093B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093B4u;
        // 0x3093b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3093b4) {
            ctx->pc = 0x3093FCu;
            goto label_3093fc;
        }
    }
    ctx->pc = 0x3093BCu;
label_3093bc:
    // 0x3093bc: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3093bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_3093c0:
    // 0x3093c0: 0x24a5b548  addiu       $a1, $a1, -0x4AB8
    ctx->pc = 0x3093c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948168));
label_3093c4:
    // 0x3093c4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3093c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3093c8:
    // 0x3093c8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3093c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3093cc:
    // 0x3093cc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3093ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3093d0:
    // 0x3093d0: 0x40f809  jalr        $v0
label_3093d4:
    if (ctx->pc == 0x3093D4u) {
        ctx->pc = 0x3093D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093D0u;
        // 0x3093d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3093D8u;
        goto label_3093d8;
    }
    ctx->pc = 0x3093D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3093D8u);
        ctx->pc = 0x3093D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093D0u;
        // 0x3093d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3093D0u, 0x3093D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3093D8u;
label_3093d8:
    // 0x3093d8: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x3093d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_3093dc:
    // 0x3093dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3093dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3093e0:
    // 0x3093e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3093e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3093e4:
    // 0x3093e4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3093e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3093e8:
    // 0x3093e8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x3093e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_3093ec:
    // 0x3093ec: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x3093ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3093f0:
    // 0x3093f0: 0x60f809  jalr        $v1
label_3093f4:
    if (ctx->pc == 0x3093F4u) {
        ctx->pc = 0x3093F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093F0u;
        // 0x3093f4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3093F8u;
        goto label_3093f8;
    }
    ctx->pc = 0x3093F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3093F8u);
        ctx->pc = 0x3093F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093F0u;
        // 0x3093f4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3093F0u, 0x3093F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3093F8u;
label_3093f8:
    // 0x3093f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3093f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3093fc:
    // 0x3093fc: 0xc0a3658  jal         func_28D960
label_309400:
    if (ctx->pc == 0x309400u) {
        ctx->pc = 0x309400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093FCu;
        // 0x309400: 0x24050093  addiu       $a1, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309404u;
        goto label_309404;
    }
    ctx->pc = 0x3093FCu;
    SET_GPR_U32(ctx, 31, 0x309404u);
    ctx->pc = 0x309400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3093FCu;
    // 0x309400: 0x24050093  addiu       $a1, $zero, 0x93 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x3093FCu, 0x309404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309404u;
label_309404:
    // 0x309404: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x309404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_309408:
    // 0x309408: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x309408u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_30940c:
    // 0x30940c: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
label_309410:
    if (ctx->pc == 0x309410u) {
        ctx->pc = 0x309410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30940Cu;
        // 0x309410: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309414u;
        goto label_309414;
    }
    ctx->pc = 0x30940Cu;
    {
        const bool branch_taken_0x30940c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x309410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30940Cu;
        // 0x309410: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30940c) {
            ctx->pc = 0x309430u;
            goto label_309430;
        }
    }
    ctx->pc = 0x309414u;
label_309414:
    // 0x309414: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x309414u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_309418:
    // 0x309418: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x309418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_30941c:
    // 0x30941c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_309420:
    if (ctx->pc == 0x309420u) {
        ctx->pc = 0x309420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30941Cu;
        // 0x309420: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309424u;
        goto label_309424;
    }
    ctx->pc = 0x30941Cu;
    {
        const bool branch_taken_0x30941c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30941c) {
            ctx->pc = 0x309420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30941Cu;
            // 0x309420: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309434u;
            goto label_309434;
        }
    }
    ctx->pc = 0x309424u;
label_309424:
    // 0x309424: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x309424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_309428:
    // 0x309428: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x309428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_30942c:
    // 0x30942c: 0x8c540040  lw          $s4, 0x40($v0)
    ctx->pc = 0x30942cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_309430:
    // 0x309430: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x309430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_309434:
    // 0x309434: 0x12000178  beqz        $s0, . + 4 + (0x178 << 2)
label_309438:
    if (ctx->pc == 0x309438u) {
        ctx->pc = 0x309438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309434u;
        // 0x309438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30943Cu;
        goto label_30943c;
    }
    ctx->pc = 0x309434u;
    {
        const bool branch_taken_0x309434 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309434u;
        // 0x309438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309434) {
            ctx->pc = 0x309A18u;
            goto label_309a18;
        }
    }
    ctx->pc = 0x30943Cu;
label_30943c:
    // 0x30943c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_309440:
    // 0x309440: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x309440u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_309444:
    // 0x309444: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x309444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_309448:
    // 0x309448: 0x40f809  jalr        $v0
label_30944c:
    if (ctx->pc == 0x30944Cu) {
        ctx->pc = 0x30944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309448u;
        // 0x30944c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309450u;
        goto label_309450;
    }
    ctx->pc = 0x309448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x309450u);
        ctx->pc = 0x30944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309448u;
        // 0x30944c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309448u, 0x309450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309450u;
label_309450:
    // 0x309450: 0x24030093  addiu       $v1, $zero, 0x93
    ctx->pc = 0x309450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_309454:
    // 0x309454: 0x14430170  bne         $v0, $v1, . + 4 + (0x170 << 2)
label_309458:
    if (ctx->pc == 0x309458u) {
        ctx->pc = 0x309458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309454u;
        // 0x309458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30945Cu;
        goto label_30945c;
    }
    ctx->pc = 0x309454u;
    {
        const bool branch_taken_0x309454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x309458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309454u;
        // 0x309458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309454) {
            ctx->pc = 0x309A18u;
            goto label_309a18;
        }
    }
    ctx->pc = 0x30945Cu;
label_30945c:
    // 0x30945c: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x30945cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_309460:
    // 0x309460: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x309460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_309464:
    // 0x309464: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
label_309468:
    if (ctx->pc == 0x309468u) {
        ctx->pc = 0x309468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309464u;
        // 0x309468: 0x8ea2b734  lw          $v0, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30946Cu;
        goto label_30946c;
    }
    ctx->pc = 0x309464u;
    {
        const bool branch_taken_0x309464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x309468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309464u;
        // 0x309468: 0x8ea2b734  lw          $v0, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309464) {
            ctx->pc = 0x309570u;
            goto label_309570;
        }
    }
    ctx->pc = 0x30946Cu;
label_30946c:
    // 0x30946c: 0xc088bbc  jal         func_222EF0
label_309470:
    if (ctx->pc == 0x309470u) {
        ctx->pc = 0x309470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30946Cu;
        // 0x309470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309474u;
        goto label_309474;
    }
    ctx->pc = 0x30946Cu;
    SET_GPR_U32(ctx, 31, 0x309474u);
    ctx->pc = 0x309470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30946Cu;
    // 0x309470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x30946Cu, 0x309474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309474u;
label_309474:
    // 0x309474: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x309474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_309478:
    // 0x309478: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x309478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30947c:
    // 0x30947c: 0x0  nop
    ctx->pc = 0x30947cu;
    // NOP
label_309480:
    // 0x309480: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x309480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_309484:
    // 0x309484: 0x0  nop
    ctx->pc = 0x309484u;
    // NOP
label_309488:
    // 0x309488: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_30948c:
    if (ctx->pc == 0x30948Cu) {
        ctx->pc = 0x30948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309488u;
        // 0x30948c: 0x8ea2b734  lw          $v0, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309490u;
        goto label_309490;
    }
    ctx->pc = 0x309488u;
    {
        const bool branch_taken_0x309488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309488u;
        // 0x30948c: 0x8ea2b734  lw          $v0, -0x48CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309488) {
            ctx->pc = 0x309570u;
            goto label_309570;
        }
    }
    ctx->pc = 0x309490u;
label_309490:
    // 0x309490: 0xc0a36c8  jal         func_28DB20
label_309494:
    if (ctx->pc == 0x309494u) {
        ctx->pc = 0x309494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309490u;
        // 0x309494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309498u;
        goto label_309498;
    }
    ctx->pc = 0x309490u;
    SET_GPR_U32(ctx, 31, 0x309498u);
    ctx->pc = 0x309494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309490u;
    // 0x309494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x309490u, 0x309498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309498u;
label_309498:
    // 0x309498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x309498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30949c:
    // 0x30949c: 0xc0a3658  jal         func_28D960
label_3094a0:
    if (ctx->pc == 0x3094A0u) {
        ctx->pc = 0x3094A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30949Cu;
        // 0x3094a0: 0x24050093  addiu       $a1, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3094A4u;
        goto label_3094a4;
    }
    ctx->pc = 0x30949Cu;
    SET_GPR_U32(ctx, 31, 0x3094A4u);
    ctx->pc = 0x3094A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30949Cu;
    // 0x3094a0: 0x24050093  addiu       $a1, $zero, 0x93 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x30949Cu, 0x3094A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094A4u;
label_3094a4:
    // 0x3094a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3094a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3094a8:
    // 0x3094a8: 0x8243002c  lb          $v1, 0x2C($s2)
    ctx->pc = 0x3094a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_3094ac:
    // 0x3094ac: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x3094acu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_3094b0:
    // 0x3094b0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3094b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3094b4:
    // 0x3094b4: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_3094b8:
    if (ctx->pc == 0x3094B8u) {
        ctx->pc = 0x3094B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3094B4u;
        // 0x3094b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3094BCu;
        goto label_3094bc;
    }
    ctx->pc = 0x3094B4u;
    {
        const bool branch_taken_0x3094b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3094b4) {
            ctx->pc = 0x3094B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3094B4u;
            // 0x3094b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3094DCu;
            goto label_3094dc;
        }
    }
    ctx->pc = 0x3094BCu;
label_3094bc:
    // 0x3094bc: 0x0  nop
    ctx->pc = 0x3094bcu;
    // NOP
label_3094c0:
    // 0x3094c0: 0xc0a35f6  jal         func_28D7D8
label_3094c4:
    if (ctx->pc == 0x3094C4u) {
        ctx->pc = 0x3094C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3094C0u;
        // 0x3094c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3094C8u;
        goto label_3094c8;
    }
    ctx->pc = 0x3094C0u;
    SET_GPR_U32(ctx, 31, 0x3094C8u);
    ctx->pc = 0x3094C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3094C0u;
    // 0x3094c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x3094C0u, 0x3094C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094C8u;
label_3094c8:
    // 0x3094c8: 0x8243002c  lb          $v1, 0x2C($s2)
    ctx->pc = 0x3094c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_3094cc:
    // 0x3094cc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3094ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3094d0:
    // 0x3094d0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_3094d4:
    if (ctx->pc == 0x3094D4u) {
        ctx->pc = 0x3094D8u;
        goto label_3094d8;
    }
    ctx->pc = 0x3094D0u;
    {
        const bool branch_taken_0x3094d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3094d0) {
            ctx->pc = 0x3094C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3094c0;
        }
    }
    ctx->pc = 0x3094D8u;
label_3094d8:
    // 0x3094d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3094d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3094dc:
    // 0x3094dc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3094dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3094e0:
    // 0x3094e0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3094e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3094e4:
    // 0x3094e4: 0x40f809  jalr        $v0
label_3094e8:
    if (ctx->pc == 0x3094E8u) {
        ctx->pc = 0x3094E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3094E4u;
        // 0x3094e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3094ECu;
        goto label_3094ec;
    }
    ctx->pc = 0x3094E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3094ECu);
        ctx->pc = 0x3094E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3094E4u;
        // 0x3094e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3094E4u, 0x3094ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3094ECu;
label_3094ec:
    // 0x3094ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3094ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3094f0:
    // 0x3094f0: 0xc08d70a  jal         func_235C28
label_3094f4:
    if (ctx->pc == 0x3094F4u) {
        ctx->pc = 0x3094F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3094F0u;
        // 0x3094f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3094F8u;
        goto label_3094f8;
    }
    ctx->pc = 0x3094F0u;
    SET_GPR_U32(ctx, 31, 0x3094F8u);
    ctx->pc = 0x3094F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3094F0u;
    // 0x3094f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235C28u, 0x3094F0u, 0x3094F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3094F8u;
label_3094f8:
    // 0x3094f8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3094f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3094fc:
    // 0x3094fc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3094fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_309500:
    // 0x309500: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x309500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_309504:
    // 0x309504: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x309504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_309508:
    // 0x309508: 0xa685001a  sh          $a1, 0x1A($s4)
    ctx->pc = 0x309508u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 26), (uint16_t)GPR_U32(ctx, 5));
label_30950c:
    // 0x30950c: 0xa6820010  sh          $v0, 0x10($s4)
    ctx->pc = 0x30950cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 2));
label_309510:
    // 0x309510: 0xa6830016  sh          $v1, 0x16($s4)
    ctx->pc = 0x309510u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 22), (uint16_t)GPR_U32(ctx, 3));
label_309514:
    // 0x309514: 0xa6840018  sh          $a0, 0x18($s4)
    ctx->pc = 0x309514u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 24), (uint16_t)GPR_U32(ctx, 4));
label_309518:
    // 0x309518: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x309518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30951c:
    // 0x30951c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30951cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_309520:
    // 0x309520: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x309520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_309524:
    // 0x309524: 0x40f809  jalr        $v0
label_309528:
    if (ctx->pc == 0x309528u) {
        ctx->pc = 0x309528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309524u;
        // 0x309528: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30952Cu;
        goto label_30952c;
    }
    ctx->pc = 0x309524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30952Cu);
        ctx->pc = 0x309528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309524u;
        // 0x309528: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309524u, 0x30952Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30952Cu;
label_30952c:
    // 0x30952c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x30952cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_309530:
    // 0x309530: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x309530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_309534:
    // 0x309534: 0xc105712  jal         func_415C48
label_309538:
    if (ctx->pc == 0x309538u) {
        ctx->pc = 0x309538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309534u;
        // 0x309538: 0x2484b558  addiu       $a0, $a0, -0x4AA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30953Cu;
        goto label_30953c;
    }
    ctx->pc = 0x309534u;
    SET_GPR_U32(ctx, 31, 0x30953Cu);
    ctx->pc = 0x309538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309534u;
    // 0x309538: 0x2484b558  addiu       $a0, $a0, -0x4AA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x309534u, 0x30953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30953Cu;
label_30953c:
    // 0x30953c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30953cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_309540:
    // 0x309540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_309544:
    // 0x309544: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x309544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_309548:
    // 0x309548: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x309548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_30954c:
    // 0x30954c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30954cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_309550:
    // 0x309550: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x309550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_309554:
    // 0x309554: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x309554u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_309558:
    // 0x309558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x309558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30955c:
    // 0x30955c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30955cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309560:
    // 0x309560: 0xc0b68b0  jal         func_2DA2C0
label_309564:
    if (ctx->pc == 0x309564u) {
        ctx->pc = 0x309564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309560u;
        // 0x309564: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309568u;
        goto label_309568;
    }
    ctx->pc = 0x309560u;
    SET_GPR_U32(ctx, 31, 0x309568u);
    ctx->pc = 0x309564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309560u;
    // 0x309564: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x309560u, 0x309568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309568u;
label_309568:
    // 0x309568: 0x1000012b  b           . + 4 + (0x12B << 2)
label_30956c:
    if (ctx->pc == 0x30956Cu) {
        ctx->pc = 0x30956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309568u;
        // 0x30956c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309570u;
        goto label_309570;
    }
    ctx->pc = 0x309568u;
    {
        const bool branch_taken_0x309568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309568u;
        // 0x30956c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309568) {
            ctx->pc = 0x309A18u;
            goto label_309a18;
        }
    }
    ctx->pc = 0x309570u;
label_309570:
    // 0x309570: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x309570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_309574:
    // 0x309574: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x309574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_309578:
    // 0x309578: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x309578u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_30957c:
    // 0x30957c: 0x10600126  beqz        $v1, . + 4 + (0x126 << 2)
label_309580:
    if (ctx->pc == 0x309580u) {
        ctx->pc = 0x309580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30957Cu;
        // 0x309580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309584u;
        goto label_309584;
    }
    ctx->pc = 0x30957Cu;
    {
        const bool branch_taken_0x30957c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x309580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30957Cu;
        // 0x309580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30957c) {
            ctx->pc = 0x309A18u;
            goto label_309a18;
        }
    }
    ctx->pc = 0x309584u;
label_309584:
    // 0x309584: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x309584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_309588:
    // 0x309588: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x309588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30958c:
    // 0x30958c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_309590:
    // 0x309590: 0x40f809  jalr        $v0
label_309594:
    if (ctx->pc == 0x309594u) {
        ctx->pc = 0x309594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309590u;
        // 0x309594: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309598u;
        goto label_309598;
    }
    ctx->pc = 0x309590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x309598u);
        ctx->pc = 0x309594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309590u;
        // 0x309594: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309590u, 0x309598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309598u;
label_309598:
    // 0x309598: 0x86670030  lh          $a3, 0x30($s3)
    ctx->pc = 0x309598u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_30959c:
    // 0x30959c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x30959cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3095a0:
    // 0x3095a0: 0x24631320  addiu       $v1, $v1, 0x1320
    ctx->pc = 0x3095a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4896));
label_3095a4:
    // 0x3095a4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x3095a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_3095a8:
    // 0x3095a8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x3095a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3095ac:
    // 0x3095ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3095acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3095b0:
    // 0x3095b0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x3095b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_3095b4:
    // 0x3095b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3095b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3095b8:
    // 0x3095b8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x3095b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3095bc:
    // 0x3095bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3095bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3095c0:
    // 0x3095c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3095c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3095c4:
    // 0x3095c4: 0xc08e568  jal         func_2395A0
label_3095c8:
    if (ctx->pc == 0x3095C8u) {
        ctx->pc = 0x3095C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3095C4u;
        // 0x3095c8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3095CCu;
        goto label_3095cc;
    }
    ctx->pc = 0x3095C4u;
    SET_GPR_U32(ctx, 31, 0x3095CCu);
    ctx->pc = 0x3095C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3095C4u;
    // 0x3095c8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395A0u, 0x3095C4u, 0x3095CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3095CCu;
label_3095cc:
    // 0x3095cc: 0x96620030  lhu         $v0, 0x30($s3)
    ctx->pc = 0x3095ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_3095d0:
    // 0x3095d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3095d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3095d4:
    // 0x3095d4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x3095d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3095d8:
    // 0x3095d8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x3095d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_3095dc:
    // 0x3095dc: 0x2863000d  slti        $v1, $v1, 0xD
    ctx->pc = 0x3095dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
label_3095e0:
    // 0x3095e0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_3095e4:
    if (ctx->pc == 0x3095E4u) {
        ctx->pc = 0x3095E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3095E0u;
        // 0x3095e4: 0xa6620030  sh          $v0, 0x30($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3095E8u;
        goto label_3095e8;
    }
    ctx->pc = 0x3095E0u;
    {
        const bool branch_taken_0x3095e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3095E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3095E0u;
        // 0x3095e4: 0xa6620030  sh          $v0, 0x30($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3095e0) {
            ctx->pc = 0x3095ECu;
            goto label_3095ec;
        }
    }
    ctx->pc = 0x3095E8u;
label_3095e8:
    // 0x3095e8: 0xa6600030  sh          $zero, 0x30($s3)
    ctx->pc = 0x3095e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 0));
label_3095ec:
    // 0x3095ec: 0x8ea3b734  lw          $v1, -0x48CC($s5)
    ctx->pc = 0x3095ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948660)));
label_3095f0:
    // 0x3095f0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x3095f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_3095f4:
    // 0x3095f4: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x3095f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_3095f8:
    // 0x3095f8: 0x10000106  b           . + 4 + (0x106 << 2)
label_3095fc:
    if (ctx->pc == 0x3095FCu) {
        ctx->pc = 0x3095FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3095F8u;
        // 0x3095fc: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309600u;
        goto label_309600;
    }
    ctx->pc = 0x3095F8u;
    {
        const bool branch_taken_0x3095f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3095FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3095F8u;
        // 0x3095fc: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3095f8) {
            ctx->pc = 0x309A14u;
            goto label_309a14;
        }
    }
    ctx->pc = 0x309600u;
label_309600:
    // 0x309600: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x309600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_309604:
    // 0x309604: 0xc0a3658  jal         func_28D960
label_309608:
    if (ctx->pc == 0x309608u) {
        ctx->pc = 0x309608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309604u;
        // 0x309608: 0x24050093  addiu       $a1, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30960Cu;
        goto label_30960c;
    }
    ctx->pc = 0x309604u;
    SET_GPR_U32(ctx, 31, 0x30960Cu);
    ctx->pc = 0x309608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309604u;
    // 0x309608: 0x24050093  addiu       $a1, $zero, 0x93 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x309604u, 0x30960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30960Cu;
label_30960c:
    // 0x30960c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x30960cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_309610:
    // 0x309610: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x309610u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_309614:
    // 0x309614: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
label_309618:
    if (ctx->pc == 0x309618u) {
        ctx->pc = 0x309618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309614u;
        // 0x309618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30961Cu;
        goto label_30961c;
    }
    ctx->pc = 0x309614u;
    {
        const bool branch_taken_0x309614 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x309618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309614u;
        // 0x309618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309614) {
            ctx->pc = 0x309638u;
            goto label_309638;
        }
    }
    ctx->pc = 0x30961Cu;
label_30961c:
    // 0x30961c: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x30961cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_309620:
    // 0x309620: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x309620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_309624:
    // 0x309624: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_309628:
    if (ctx->pc == 0x309628u) {
        ctx->pc = 0x309628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309624u;
        // 0x309628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30962Cu;
        goto label_30962c;
    }
    ctx->pc = 0x309624u;
    {
        const bool branch_taken_0x309624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309624) {
            ctx->pc = 0x309628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309624u;
            // 0x309628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309638u;
            goto label_309638;
        }
    }
    ctx->pc = 0x30962Cu;
label_30962c:
    // 0x30962c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x30962cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_309630:
    // 0x309630: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x309630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_309634:
    // 0x309634: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x309634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_309638:
    // 0x309638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x309638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30963c:
    // 0x30963c: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_309640:
    if (ctx->pc == 0x309640u) {
        ctx->pc = 0x309640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30963Cu;
        // 0x309640: 0x96620026  lhu         $v0, 0x26($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309644u;
        goto label_309644;
    }
    ctx->pc = 0x30963Cu;
    {
        const bool branch_taken_0x30963c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30963c) {
            ctx->pc = 0x309640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30963Cu;
            // 0x309640: 0x96620026  lhu         $v0, 0x26($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30968Cu;
            goto label_30968c;
        }
    }
    ctx->pc = 0x309644u;
label_309644:
    // 0x309644: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x309644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_309648:
    // 0x309648: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x309648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30964c:
    // 0x30964c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_309650:
    // 0x309650: 0x40f809  jalr        $v0
label_309654:
    if (ctx->pc == 0x309654u) {
        ctx->pc = 0x309654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309650u;
        // 0x309654: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309658u;
        goto label_309658;
    }
    ctx->pc = 0x309650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x309658u);
        ctx->pc = 0x309654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309650u;
        // 0x309654: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309650u, 0x309658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309658u;
label_309658:
    // 0x309658: 0x24030093  addiu       $v1, $zero, 0x93
    ctx->pc = 0x309658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_30965c:
    // 0x30965c: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_309660:
    if (ctx->pc == 0x309660u) {
        ctx->pc = 0x309660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30965Cu;
        // 0x309660: 0x96620026  lhu         $v0, 0x26($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309664u;
        goto label_309664;
    }
    ctx->pc = 0x30965Cu;
    {
        const bool branch_taken_0x30965c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30965c) {
            ctx->pc = 0x309660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30965Cu;
            // 0x309660: 0x96620026  lhu         $v0, 0x26($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30968Cu;
            goto label_30968c;
        }
    }
    ctx->pc = 0x309664u;
label_309664:
    // 0x309664: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x309664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_309668:
    // 0x309668: 0x240300ca  addiu       $v1, $zero, 0xCA
    ctx->pc = 0x309668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
label_30966c:
    // 0x30966c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_309670:
    if (ctx->pc == 0x309670u) {
        ctx->pc = 0x309670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30966Cu;
        // 0x309670: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309674u;
        goto label_309674;
    }
    ctx->pc = 0x30966Cu;
    {
        const bool branch_taken_0x30966c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x309670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30966Cu;
        // 0x309670: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30966c) {
            ctx->pc = 0x309688u;
            goto label_309688;
        }
    }
    ctx->pc = 0x309674u;
label_309674:
    // 0x309674: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x309674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
label_309678:
    // 0x309678: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x309678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_30967c:
    // 0x30967c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x30967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_309680:
    // 0x309680: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x309680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_309684:
    // 0x309684: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x309684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_309688:
    // 0x309688: 0x96620026  lhu         $v0, 0x26($s3)
    ctx->pc = 0x309688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
label_30968c:
    // 0x30968c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_309690:
    // 0x309690: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x309690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_309694:
    // 0x309694: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x309694u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_309698:
    // 0x309698: 0x186000de  blez        $v1, . + 4 + (0xDE << 2)
label_30969c:
    if (ctx->pc == 0x30969Cu) {
        ctx->pc = 0x30969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309698u;
        // 0x30969c: 0xa6620026  sh          $v0, 0x26($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3096A0u;
        goto label_3096a0;
    }
    ctx->pc = 0x309698u;
    {
        const bool branch_taken_0x309698 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x30969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309698u;
        // 0x30969c: 0xa6620026  sh          $v0, 0x26($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309698) {
            ctx->pc = 0x309A14u;
            goto label_309a14;
        }
    }
    ctx->pc = 0x3096A0u;
label_3096a0:
    // 0x3096a0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3096a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3096a4:
    // 0x3096a4: 0x144000dc  bnez        $v0, . + 4 + (0xDC << 2)
label_3096a8:
    if (ctx->pc == 0x3096A8u) {
        ctx->pc = 0x3096A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096A4u;
        // 0x3096a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3096ACu;
        goto label_3096ac;
    }
    ctx->pc = 0x3096A4u;
    {
        const bool branch_taken_0x3096a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3096A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096A4u;
        // 0x3096a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096a4) {
            ctx->pc = 0x309A18u;
            goto label_309a18;
        }
    }
    ctx->pc = 0x3096ACu;
label_3096ac:
    // 0x3096ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3096acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3096b0:
    // 0x3096b0: 0x146200d9  bne         $v1, $v0, . + 4 + (0xD9 << 2)
label_3096b4:
    if (ctx->pc == 0x3096B4u) {
        ctx->pc = 0x3096B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096B0u;
        // 0x3096b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3096B8u;
        goto label_3096b8;
    }
    ctx->pc = 0x3096B0u;
    {
        const bool branch_taken_0x3096b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3096B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096B0u;
        // 0x3096b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096b0) {
            ctx->pc = 0x309A18u;
            goto label_309a18;
        }
    }
    ctx->pc = 0x3096B8u;
label_3096b8:
    // 0x3096b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3096b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3096bc:
    // 0x3096bc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3096bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3096c0:
    // 0x3096c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3096c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3096c4:
    // 0x3096c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3096c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3096c8:
    // 0x3096c8: 0x40f809  jalr        $v0
label_3096cc:
    if (ctx->pc == 0x3096CCu) {
        ctx->pc = 0x3096CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096C8u;
        // 0x3096cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3096D0u;
        goto label_3096d0;
    }
    ctx->pc = 0x3096C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3096D0u);
        ctx->pc = 0x3096CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096C8u;
        // 0x3096cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3096C8u, 0x3096D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3096D0u;
label_3096d0:
    // 0x3096d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3096d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3096d4:
    // 0x3096d4: 0xc08d70a  jal         func_235C28
label_3096d8:
    if (ctx->pc == 0x3096D8u) {
        ctx->pc = 0x3096D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096D4u;
        // 0x3096d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3096DCu;
        goto label_3096dc;
    }
    ctx->pc = 0x3096D4u;
    SET_GPR_U32(ctx, 31, 0x3096DCu);
    ctx->pc = 0x3096D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3096D4u;
    // 0x3096d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235C28u, 0x3096D4u, 0x3096DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3096DCu;
label_3096dc:
    // 0x3096dc: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x3096dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_3096e0:
    // 0x3096e0: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x3096e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3096e4:
    // 0x3096e4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3096e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3096e8:
    // 0x3096e8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3096e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3096ec:
    // 0x3096ec: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3096ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3096f0:
    // 0x3096f0: 0x40f809  jalr        $v0
label_3096f4:
    if (ctx->pc == 0x3096F4u) {
        ctx->pc = 0x3096F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096F0u;
        // 0x3096f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3096F8u;
        goto label_3096f8;
    }
    ctx->pc = 0x3096F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3096F8u);
        ctx->pc = 0x3096F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096F0u;
        // 0x3096f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3096F0u, 0x3096F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3096F8u;
label_3096f8:
    // 0x3096f8: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x3096f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_3096fc:
    // 0x3096fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3096fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309700:
    // 0x309700: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x309700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309704:
    // 0x309704: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x309704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_309708:
    // 0x309708: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x309708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_30970c:
    // 0x30970c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x30970cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_309710:
    // 0x309710: 0x60f809  jalr        $v1
label_309714:
    if (ctx->pc == 0x309714u) {
        ctx->pc = 0x309714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309710u;
        // 0x309714: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309718u;
        goto label_309718;
    }
    ctx->pc = 0x309710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x309718u);
        ctx->pc = 0x309714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309710u;
        // 0x309714: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309710u, 0x309718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309718u;
label_309718:
    // 0x309718: 0xc0c1a14  jal         func_306850
label_30971c:
    if (ctx->pc == 0x30971Cu) {
        ctx->pc = 0x30971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309718u;
        // 0x30971c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309720u;
        goto label_309720;
    }
    ctx->pc = 0x309718u;
    SET_GPR_U32(ctx, 31, 0x309720u);
    ctx->pc = 0x30971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309718u;
    // 0x30971c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306850u, 0x309718u, 0x309720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309720u;
label_309720:
    // 0x309720: 0x100000bd  b           . + 4 + (0xBD << 2)
label_309724:
    if (ctx->pc == 0x309724u) {
        ctx->pc = 0x309724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309720u;
        // 0x309724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309728u;
        goto label_309728;
    }
    ctx->pc = 0x309720u;
    {
        const bool branch_taken_0x309720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309720u;
        // 0x309724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309720) {
            ctx->pc = 0x309A18u;
            goto label_309a18;
        }
    }
    ctx->pc = 0x309728u;
label_309728:
    // 0x309728: 0x56200013  bnel        $s1, $zero, . + 4 + (0x13 << 2)
label_30972c:
    if (ctx->pc == 0x30972Cu) {
        ctx->pc = 0x30972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309728u;
        // 0x30972c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309730u;
        goto label_309730;
    }
    ctx->pc = 0x309728u;
    {
        const bool branch_taken_0x309728 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x309728) {
            ctx->pc = 0x30972Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309728u;
            // 0x30972c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309778u;
            goto label_309778;
        }
    }
    ctx->pc = 0x309730u;
label_309730:
    // 0x309730: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x309730u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_309734:
    // 0x309734: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x309734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_309738:
    // 0x309738: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x309738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_30973c:
    // 0x30973c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x30973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_309740:
    // 0x309740: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x309740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_309744:
    // 0x309744: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x309744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_309748:
    // 0x309748: 0x40f809  jalr        $v0
label_30974c:
    if (ctx->pc == 0x30974Cu) {
        ctx->pc = 0x30974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309748u;
        // 0x30974c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309750u;
        goto label_309750;
    }
    ctx->pc = 0x309748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x309750u);
        ctx->pc = 0x30974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309748u;
        // 0x30974c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309748u, 0x309750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309750u;
label_309750:
    // 0x309750: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x309750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_309754:
    // 0x309754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x309754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309758:
    // 0x309758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x309758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30975c:
    // 0x30975c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x30975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_309760:
    // 0x309760: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x309760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_309764:
    // 0x309764: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x309764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_309768:
    // 0x309768: 0x60f809  jalr        $v1
label_30976c:
    if (ctx->pc == 0x30976Cu) {
        ctx->pc = 0x30976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309768u;
        // 0x30976c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309770u;
        goto label_309770;
    }
    ctx->pc = 0x309768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x309770u);
        ctx->pc = 0x30976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309768u;
        // 0x30976c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309768u, 0x309770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309770u;
label_309770:
    // 0x309770: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_309774:
    if (ctx->pc == 0x309774u) {
        ctx->pc = 0x309774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309770u;
        // 0x309774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309778u;
        goto label_309778;
    }
    ctx->pc = 0x309770u;
    {
        const bool branch_taken_0x309770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309770u;
        // 0x309774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309770) {
            ctx->pc = 0x309A18u;
            goto label_309a18;
        }
    }
    ctx->pc = 0x309778u;
label_309778:
    // 0x309778: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x309778u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
label_30977c:
    // 0x30977c: 0x2610b4f0  addiu       $s0, $s0, -0x4B10
    ctx->pc = 0x30977cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948080));
label_309780:
    // 0x309780: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x309780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_309784:
    // 0x309784: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x309784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_309788:
    // 0x309788: 0x40f809  jalr        $v0
label_30978c:
    if (ctx->pc == 0x30978Cu) {
        ctx->pc = 0x30978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309788u;
        // 0x30978c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309790u;
        goto label_309790;
    }
    ctx->pc = 0x309788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x309790u);
        ctx->pc = 0x30978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309788u;
        // 0x30978c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309788u, 0x309790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309790u;
label_309790:
    // 0x309790: 0xc08df0e  jal         func_237C38
label_309794:
    if (ctx->pc == 0x309794u) {
        ctx->pc = 0x309794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309790u;
        // 0x309794: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309798u;
        goto label_309798;
    }
    ctx->pc = 0x309790u;
    SET_GPR_U32(ctx, 31, 0x309798u);
    ctx->pc = 0x309794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309790u;
    // 0x309794: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237C38u, 0x309790u, 0x309798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309798u;
label_309798:
    // 0x309798: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x309798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30979c:
    // 0x30979c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x30979cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_3097a0:
    // 0x3097a0: 0x8c46941c  lw          $a2, -0x6BE4($v0)
    ctx->pc = 0x3097a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939676)));
label_3097a4:
    // 0x3097a4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3097a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3097a8:
    // 0x3097a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3097a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3097ac:
    // 0x3097ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3097acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3097b0:
    // 0x3097b0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x3097b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_3097b4:
    // 0x3097b4: 0xc070ca0  jal         func_1C3280
label_3097b8:
    if (ctx->pc == 0x3097B8u) {
        ctx->pc = 0x3097B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097B4u;
        // 0x3097b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3097BCu;
        goto label_3097bc;
    }
    ctx->pc = 0x3097B4u;
    SET_GPR_U32(ctx, 31, 0x3097BCu);
    ctx->pc = 0x3097B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3097B4u;
    // 0x3097b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3280u, 0x3097B4u, 0x3097BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3097BCu;
label_3097bc:
    // 0x3097bc: 0xc0a36c8  jal         func_28DB20
label_3097c0:
    if (ctx->pc == 0x3097C0u) {
        ctx->pc = 0x3097C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097BCu;
        // 0x3097c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3097C4u;
        goto label_3097c4;
    }
    ctx->pc = 0x3097BCu;
    SET_GPR_U32(ctx, 31, 0x3097C4u);
    ctx->pc = 0x3097C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3097BCu;
    // 0x3097c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x3097BCu, 0x3097C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3097C4u;
label_3097c4:
    // 0x3097c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3097c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3097c8:
    // 0x3097c8: 0xc0a3658  jal         func_28D960
label_3097cc:
    if (ctx->pc == 0x3097CCu) {
        ctx->pc = 0x3097CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097C8u;
        // 0x3097cc: 0x24050093  addiu       $a1, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3097D0u;
        goto label_3097d0;
    }
    ctx->pc = 0x3097C8u;
    SET_GPR_U32(ctx, 31, 0x3097D0u);
    ctx->pc = 0x3097CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3097C8u;
    // 0x3097cc: 0x24050093  addiu       $a1, $zero, 0x93 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x3097C8u, 0x3097D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3097D0u;
label_3097d0:
    // 0x3097d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3097d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3097d4:
    // 0x3097d4: 0x8243002c  lb          $v1, 0x2C($s2)
    ctx->pc = 0x3097d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_3097d8:
    // 0x3097d8: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x3097d8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_3097dc:
    // 0x3097dc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3097dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3097e0:
    // 0x3097e0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3097e4:
    if (ctx->pc == 0x3097E4u) {
        ctx->pc = 0x3097E8u;
        goto label_3097e8;
    }
    ctx->pc = 0x3097E0u;
    {
        const bool branch_taken_0x3097e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3097e0) {
            ctx->pc = 0x309800u;
            goto label_309800;
        }
    }
    ctx->pc = 0x3097E8u;
label_3097e8:
    // 0x3097e8: 0xc0a35f6  jal         func_28D7D8
label_3097ec:
    if (ctx->pc == 0x3097ECu) {
        ctx->pc = 0x3097ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097E8u;
        // 0x3097ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3097F0u;
        goto label_3097f0;
    }
    ctx->pc = 0x3097E8u;
    SET_GPR_U32(ctx, 31, 0x3097F0u);
    ctx->pc = 0x3097ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3097E8u;
    // 0x3097ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x3097E8u, 0x3097F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3097F0u;
label_3097f0:
    // 0x3097f0: 0x8243002c  lb          $v1, 0x2C($s2)
    ctx->pc = 0x3097f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_3097f4:
    // 0x3097f4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3097f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3097f8:
    // 0x3097f8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_3097fc:
    if (ctx->pc == 0x3097FCu) {
        ctx->pc = 0x309800u;
        goto label_309800;
    }
    ctx->pc = 0x3097F8u;
    {
        const bool branch_taken_0x3097f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3097f8) {
            ctx->pc = 0x3097E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3097e8;
        }
    }
    ctx->pc = 0x309800u;
label_309800:
    // 0x309800: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
label_309804:
    if (ctx->pc == 0x309804u) {
        ctx->pc = 0x309804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309800u;
        // 0x309804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309808u;
        goto label_309808;
    }
    ctx->pc = 0x309800u;
    {
        const bool branch_taken_0x309800 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x309804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309800u;
        // 0x309804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309800) {
            ctx->pc = 0x309824u;
            goto label_309824;
        }
    }
    ctx->pc = 0x309808u;
label_309808:
    // 0x309808: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x309808u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_30980c:
    // 0x30980c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30980cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_309810:
    // 0x309810: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_309814:
    if (ctx->pc == 0x309814u) {
        ctx->pc = 0x309814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309810u;
        // 0x309814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309818u;
        goto label_309818;
    }
    ctx->pc = 0x309810u;
    {
        const bool branch_taken_0x309810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309810) {
            ctx->pc = 0x309814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309810u;
            // 0x309814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309824u;
            goto label_309824;
        }
    }
    ctx->pc = 0x309818u;
label_309818:
    // 0x309818: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x309818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_30981c:
    // 0x30981c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x30981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_309820:
    // 0x309820: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x309820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_309824:
    // 0x309824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x309824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_309828:
    // 0x309828: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x309828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_30982c:
    // 0x30982c: 0x2442fed2  addiu       $v0, $v0, -0x12E
    ctx->pc = 0x30982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966994));
label_309830:
    // 0x309830: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x309830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_309834:
    // 0x309834: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
label_309838:
    if (ctx->pc == 0x309838u) {
        ctx->pc = 0x309838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309834u;
        // 0x309838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30983Cu;
        goto label_30983c;
    }
    ctx->pc = 0x309834u;
    {
        const bool branch_taken_0x309834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309834u;
        // 0x309838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309834) {
            ctx->pc = 0x309A18u;
            goto label_309a18;
        }
    }
    ctx->pc = 0x30983Cu;
label_30983c:
    // 0x30983c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x30983cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_309840:
    // 0x309840: 0xae400220  sw          $zero, 0x220($s2)
    ctx->pc = 0x309840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 0));
label_309844:
    // 0x309844: 0xae40021c  sw          $zero, 0x21C($s2)
    ctx->pc = 0x309844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 540), GPR_U32(ctx, 0));
label_309848:
    // 0x309848: 0x2404012e  addiu       $a0, $zero, 0x12E
    ctx->pc = 0x309848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
label_30984c:
    // 0x30984c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x30984cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_309850:
    // 0x309850: 0xa6040010  sh          $a0, 0x10($s0)
    ctx->pc = 0x309850u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 4));
label_309854:
    // 0x309854: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x309854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_309858:
    // 0x309858: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x309858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_30985c:
    // 0x30985c: 0x1000006d  b           . + 4 + (0x6D << 2)
label_309860:
    if (ctx->pc == 0x309860u) {
        ctx->pc = 0x309860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30985Cu;
        // 0x309860: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309864u;
        goto label_309864;
    }
    ctx->pc = 0x30985Cu;
    {
        const bool branch_taken_0x30985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30985Cu;
        // 0x309860: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30985c) {
            ctx->pc = 0x309A14u;
            goto label_309a14;
        }
    }
    ctx->pc = 0x309864u;
label_309864:
    // 0x309864: 0xc0a36c8  jal         func_28DB20
label_309868:
    if (ctx->pc == 0x309868u) {
        ctx->pc = 0x309868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309864u;
        // 0x309868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30986Cu;
        goto label_30986c;
    }
    ctx->pc = 0x309864u;
    SET_GPR_U32(ctx, 31, 0x30986Cu);
    ctx->pc = 0x309868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309864u;
    // 0x309868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x309864u, 0x30986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30986Cu;
label_30986c:
    // 0x30986c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30986cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_309870:
    // 0x309870: 0xc0a3658  jal         func_28D960
label_309874:
    if (ctx->pc == 0x309874u) {
        ctx->pc = 0x309874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309870u;
        // 0x309874: 0x24050094  addiu       $a1, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309878u;
        goto label_309878;
    }
    ctx->pc = 0x309870u;
    SET_GPR_U32(ctx, 31, 0x309878u);
    ctx->pc = 0x309874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309870u;
    // 0x309874: 0x24050094  addiu       $a1, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x309870u, 0x309878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309878u;
label_309878:
    // 0x309878: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x309878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_30987c:
    // 0x30987c: 0x8243002c  lb          $v1, 0x2C($s2)
    ctx->pc = 0x30987cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_309880:
    // 0x309880: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x309880u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_309884:
    // 0x309884: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x309884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_309888:
    // 0x309888: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_30988c:
    if (ctx->pc == 0x30988Cu) {
        ctx->pc = 0x309890u;
        goto label_309890;
    }
    ctx->pc = 0x309888u;
    {
        const bool branch_taken_0x309888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309888) {
            ctx->pc = 0x3098A8u;
            goto label_3098a8;
        }
    }
    ctx->pc = 0x309890u;
label_309890:
    // 0x309890: 0xc0a35f6  jal         func_28D7D8
label_309894:
    if (ctx->pc == 0x309894u) {
        ctx->pc = 0x309894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309890u;
        // 0x309894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309898u;
        goto label_309898;
    }
    ctx->pc = 0x309890u;
    SET_GPR_U32(ctx, 31, 0x309898u);
    ctx->pc = 0x309894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309890u;
    // 0x309894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x309890u, 0x309898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309898u;
label_309898:
    // 0x309898: 0x8243002c  lb          $v1, 0x2C($s2)
    ctx->pc = 0x309898u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_30989c:
    // 0x30989c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x30989cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3098a0:
    // 0x3098a0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_3098a4:
    if (ctx->pc == 0x3098A4u) {
        ctx->pc = 0x3098A8u;
        goto label_3098a8;
    }
    ctx->pc = 0x3098A0u;
    {
        const bool branch_taken_0x3098a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3098a0) {
            ctx->pc = 0x309890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309890;
        }
    }
    ctx->pc = 0x3098A8u;
label_3098a8:
    // 0x3098a8: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
label_3098ac:
    if (ctx->pc == 0x3098ACu) {
        ctx->pc = 0x3098ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098A8u;
        // 0x3098ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3098B0u;
        goto label_3098b0;
    }
    ctx->pc = 0x3098A8u;
    {
        const bool branch_taken_0x3098a8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3098ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098A8u;
        // 0x3098ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3098a8) {
            ctx->pc = 0x3098CCu;
            goto label_3098cc;
        }
    }
    ctx->pc = 0x3098B0u;
label_3098b0:
    // 0x3098b0: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x3098b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_3098b4:
    // 0x3098b4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3098b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3098b8:
    // 0x3098b8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3098bc:
    if (ctx->pc == 0x3098BCu) {
        ctx->pc = 0x3098BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098B8u;
        // 0x3098bc: 0x84a20010  lh          $v0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3098C0u;
        goto label_3098c0;
    }
    ctx->pc = 0x3098B8u;
    {
        const bool branch_taken_0x3098b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3098b8) {
            ctx->pc = 0x3098BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3098B8u;
            // 0x3098bc: 0x84a20010  lh          $v0, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3098D0u;
            goto label_3098d0;
        }
    }
    ctx->pc = 0x3098C0u;
label_3098c0:
    // 0x3098c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3098c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3098c4:
    // 0x3098c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3098c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3098c8:
    // 0x3098c8: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x3098c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3098cc:
    // 0x3098cc: 0x84a20010  lh          $v0, 0x10($a1)
    ctx->pc = 0x3098ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_3098d0:
    // 0x3098d0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3098d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3098d4:
    // 0x3098d4: 0x1043004f  beq         $v0, $v1, . + 4 + (0x4F << 2)
label_3098d8:
    if (ctx->pc == 0x3098D8u) {
        ctx->pc = 0x3098D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098D4u;
        // 0x3098d8: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3098DCu;
        goto label_3098dc;
    }
    ctx->pc = 0x3098D4u;
    {
        const bool branch_taken_0x3098d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3098D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098D4u;
        // 0x3098d8: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3098d4) {
            ctx->pc = 0x309A14u;
            goto label_309a14;
        }
    }
    ctx->pc = 0x3098DCu;
label_3098dc:
    // 0x3098dc: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x3098dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
label_3098e0:
    // 0x3098e0: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x3098e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_3098e4:
    // 0x3098e4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x3098e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_3098e8:
    // 0x3098e8: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x3098e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_3098ec:
    // 0x3098ec: 0x10000049  b           . + 4 + (0x49 << 2)
label_3098f0:
    if (ctx->pc == 0x3098F0u) {
        ctx->pc = 0x3098F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098ECu;
        // 0x3098f0: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3098F4u;
        goto label_3098f4;
    }
    ctx->pc = 0x3098ECu;
    {
        const bool branch_taken_0x3098ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3098F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098ECu;
        // 0x3098f0: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3098ec) {
            ctx->pc = 0x309A14u;
            goto label_309a14;
        }
    }
    ctx->pc = 0x3098F4u;
label_3098f4:
    // 0x3098f4: 0x92630024  lbu         $v1, 0x24($s3)
    ctx->pc = 0x3098f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
label_3098f8:
    // 0x3098f8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x3098f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3098fc:
    // 0x3098fc: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_309900:
    if (ctx->pc == 0x309900u) {
        ctx->pc = 0x309900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098FCu;
        // 0x309900: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309904u;
        goto label_309904;
    }
    ctx->pc = 0x3098FCu;
    {
        const bool branch_taken_0x3098fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098FCu;
        // 0x309900: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3098fc) {
            ctx->pc = 0x309A14u;
            goto label_309a14;
        }
    }
    ctx->pc = 0x309904u;
label_309904:
    // 0x309904: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x309904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_309908:
    // 0x309908: 0x2442b5a0  addiu       $v0, $v0, -0x4A60
    ctx->pc = 0x309908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948256));
label_30990c:
    // 0x30990c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30990cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_309910:
    // 0x309910: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x309910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_309914:
    // 0x309914: 0x800008  jr          $a0
label_309918:
    if (ctx->pc == 0x309918u) {
        ctx->pc = 0x30991Cu;
        goto label_30991c;
    }
    ctx->pc = 0x309914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30991Cu: goto label_30991c;
            case 0x30999Cu: goto label_30999c;
            case 0x309A14u: goto label_309a14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309914u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30991Cu;
label_30991c:
    // 0x30991c: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x30991cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_309920:
    // 0x309920: 0x8e02b310  lw          $v0, -0x4CF0($s0)
    ctx->pc = 0x309920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947600)));
label_309924:
    // 0x309924: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_309928:
    if (ctx->pc == 0x309928u) {
        ctx->pc = 0x309928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309924u;
        // 0x309928: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30992Cu;
        goto label_30992c;
    }
    ctx->pc = 0x309924u;
    {
        const bool branch_taken_0x309924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309924u;
        // 0x309928: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309924) {
            ctx->pc = 0x309970u;
            goto label_309970;
        }
    }
    ctx->pc = 0x30992Cu;
label_30992c:
    // 0x30992c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30992cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_309930:
    // 0x309930: 0x8c459404  lw          $a1, -0x6BFC($v0)
    ctx->pc = 0x309930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939652)));
label_309934:
    // 0x309934: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x309934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_309938:
    // 0x309938: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x309938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30993c:
    // 0x30993c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_309940:
    // 0x309940: 0x40f809  jalr        $v0
label_309944:
    if (ctx->pc == 0x309944u) {
        ctx->pc = 0x309944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309940u;
        // 0x309944: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309948u;
        goto label_309948;
    }
    ctx->pc = 0x309940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x309948u);
        ctx->pc = 0x309944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309940u;
        // 0x309944: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309940u, 0x309948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309948u;
label_309948:
    // 0x309948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x309948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30994c:
    // 0x30994c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x30994cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_309950:
    // 0x309950: 0xc08e064  jal         func_238190
label_309954:
    if (ctx->pc == 0x309954u) {
        ctx->pc = 0x309954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309950u;
        // 0x309954: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309958u;
        goto label_309958;
    }
    ctx->pc = 0x309950u;
    SET_GPR_U32(ctx, 31, 0x309958u);
    ctx->pc = 0x309954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309950u;
    // 0x309954: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238190u, 0x309950u, 0x309958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309958u;
label_309958:
    // 0x309958: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x309958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_30995c:
    // 0x30995c: 0xc107b3a  jal         func_41ECE8
label_309960:
    if (ctx->pc == 0x309960u) {
        ctx->pc = 0x309960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30995Cu;
        // 0x309960: 0x2484b568  addiu       $a0, $a0, -0x4A98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309964u;
        goto label_309964;
    }
    ctx->pc = 0x30995Cu;
    SET_GPR_U32(ctx, 31, 0x309964u);
    ctx->pc = 0x309960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30995Cu;
    // 0x309960: 0x2484b568  addiu       $a0, $a0, -0x4A98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ECE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ECE8u, 0x30995Cu, 0x309964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309964u;
label_309964:
    // 0x309964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309968:
    // 0x309968: 0xae02b310  sw          $v0, -0x4CF0($s0)
    ctx->pc = 0x309968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294947600), GPR_U32(ctx, 2));
label_30996c:
    // 0x30996c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30996cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_309970:
    // 0x309970: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x309970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_309974:
    // 0x309974: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x309974u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_309978:
    // 0x309978: 0x8c46941c  lw          $a2, -0x6BE4($v0)
    ctx->pc = 0x309978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939676)));
label_30997c:
    // 0x30997c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30997cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_309980:
    // 0x309980: 0x2484b4f0  addiu       $a0, $a0, -0x4B10
    ctx->pc = 0x309980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948080));
label_309984:
    // 0x309984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x309984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309988:
    // 0x309988: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x309988u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_30998c:
    // 0x30998c: 0xc070ca0  jal         func_1C3280
label_309990:
    if (ctx->pc == 0x309990u) {
        ctx->pc = 0x309990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30998Cu;
        // 0x309990: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309994u;
        goto label_309994;
    }
    ctx->pc = 0x30998Cu;
    SET_GPR_U32(ctx, 31, 0x309994u);
    ctx->pc = 0x309990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30998Cu;
    // 0x309990: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3280u, 0x30998Cu, 0x309994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309994u;
label_309994:
    // 0x309994: 0x10000020  b           . + 4 + (0x20 << 2)
label_309998:
    if (ctx->pc == 0x309998u) {
        ctx->pc = 0x309998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309994u;
        // 0x309998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30999Cu;
        goto label_30999c;
    }
    ctx->pc = 0x309994u;
    {
        const bool branch_taken_0x309994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309994u;
        // 0x309998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309994) {
            ctx->pc = 0x309A18u;
            goto label_309a18;
        }
    }
    ctx->pc = 0x30999Cu;
label_30999c:
    // 0x30999c: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x30999cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3099a0:
    // 0x3099a0: 0x8e02b310  lw          $v0, -0x4CF0($s0)
    ctx->pc = 0x3099a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947600)));
label_3099a4:
    // 0x3099a4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_3099a8:
    if (ctx->pc == 0x3099A8u) {
        ctx->pc = 0x3099A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099A4u;
        // 0x3099a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3099ACu;
        goto label_3099ac;
    }
    ctx->pc = 0x3099A4u;
    {
        const bool branch_taken_0x3099a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3099A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099A4u;
        // 0x3099a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3099a4) {
            ctx->pc = 0x3099F0u;
            goto label_3099f0;
        }
    }
    ctx->pc = 0x3099ACu;
label_3099ac:
    // 0x3099ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3099acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3099b0:
    // 0x3099b0: 0x8c459408  lw          $a1, -0x6BF8($v0)
    ctx->pc = 0x3099b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939656)));
label_3099b4:
    // 0x3099b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3099b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3099b8:
    // 0x3099b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3099b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3099bc:
    // 0x3099bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3099bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3099c0:
    // 0x3099c0: 0x40f809  jalr        $v0
label_3099c4:
    if (ctx->pc == 0x3099C4u) {
        ctx->pc = 0x3099C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099C0u;
        // 0x3099c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3099C8u;
        goto label_3099c8;
    }
    ctx->pc = 0x3099C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3099C8u);
        ctx->pc = 0x3099C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099C0u;
        // 0x3099c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3099C0u, 0x3099C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3099C8u;
label_3099c8:
    // 0x3099c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3099c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3099cc:
    // 0x3099cc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3099ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3099d0:
    // 0x3099d0: 0xc08e064  jal         func_238190
label_3099d4:
    if (ctx->pc == 0x3099D4u) {
        ctx->pc = 0x3099D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099D0u;
        // 0x3099d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3099D8u;
        goto label_3099d8;
    }
    ctx->pc = 0x3099D0u;
    SET_GPR_U32(ctx, 31, 0x3099D8u);
    ctx->pc = 0x3099D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3099D0u;
    // 0x3099d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238190u, 0x3099D0u, 0x3099D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3099D8u;
label_3099d8:
    // 0x3099d8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x3099d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_3099dc:
    // 0x3099dc: 0xc107b3a  jal         func_41ECE8
label_3099e0:
    if (ctx->pc == 0x3099E0u) {
        ctx->pc = 0x3099E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099DCu;
        // 0x3099e0: 0x2484b568  addiu       $a0, $a0, -0x4A98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3099E4u;
        goto label_3099e4;
    }
    ctx->pc = 0x3099DCu;
    SET_GPR_U32(ctx, 31, 0x3099E4u);
    ctx->pc = 0x3099E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3099DCu;
    // 0x3099e0: 0x2484b568  addiu       $a0, $a0, -0x4A98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ECE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ECE8u, 0x3099DCu, 0x3099E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3099E4u;
label_3099e4:
    // 0x3099e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3099e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3099e8:
    // 0x3099e8: 0xae02b310  sw          $v0, -0x4CF0($s0)
    ctx->pc = 0x3099e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294947600), GPR_U32(ctx, 2));
label_3099ec:
    // 0x3099ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3099ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3099f0:
    // 0x3099f0: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3099f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_3099f4:
    // 0x3099f4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x3099f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_3099f8:
    // 0x3099f8: 0x8c469420  lw          $a2, -0x6BE0($v0)
    ctx->pc = 0x3099f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939680)));
label_3099fc:
    // 0x3099fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3099fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_309a00:
    // 0x309a00: 0x2484b4f0  addiu       $a0, $a0, -0x4B10
    ctx->pc = 0x309a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948080));
label_309a04:
    // 0x309a04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x309a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309a08:
    // 0x309a08: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x309a08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_309a0c:
    // 0x309a0c: 0xc070ca0  jal         func_1C3280
label_309a10:
    if (ctx->pc == 0x309A10u) {
        ctx->pc = 0x309A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A0Cu;
        // 0x309a10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309A14u;
        goto label_309a14;
    }
    ctx->pc = 0x309A0Cu;
    SET_GPR_U32(ctx, 31, 0x309A14u);
    ctx->pc = 0x309A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309A0Cu;
    // 0x309a10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3280u, 0x309A0Cu, 0x309A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309A14u;
label_309a14:
    // 0x309a14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309a18:
    // 0x309a18: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x309a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_309a1c:
    // 0x309a1c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x309a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_309a20:
    // 0x309a20: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x309a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_309a24:
    // 0x309a24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x309a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_309a28:
    // 0x309a28: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x309a28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_309a2c:
    // 0x309a2c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x309a2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_309a30:
    // 0x309a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x309a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_309a34:
    // 0x309a34: 0x3e00008  jr          $ra
label_309a38:
    if (ctx->pc == 0x309A38u) {
        ctx->pc = 0x309A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A34u;
        // 0x309a38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309A3Cu;
        goto label_309a3c;
    }
    ctx->pc = 0x309A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A34u;
        // 0x309a38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309A3Cu;
label_309a3c:
    // 0x309a3c: 0x0  nop
    ctx->pc = 0x309a3cu;
    // NOP
    ctx->pc = 0x309a40u;
}
