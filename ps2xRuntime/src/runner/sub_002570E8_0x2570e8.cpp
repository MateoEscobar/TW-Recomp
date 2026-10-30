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

// Function: sub_002570E8
// Address: 0x2570e8 - 0x257ce8
void sub_002570E8_0x2570e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002570E8_0x2570e8");
#endif

    switch (ctx->pc) {
        case 0x2570e8u: goto label_2570e8;
        case 0x2570ecu: goto label_2570ec;
        case 0x2570f0u: goto label_2570f0;
        case 0x2570f4u: goto label_2570f4;
        case 0x2570f8u: goto label_2570f8;
        case 0x2570fcu: goto label_2570fc;
        case 0x257100u: goto label_257100;
        case 0x257104u: goto label_257104;
        case 0x257108u: goto label_257108;
        case 0x25710cu: goto label_25710c;
        case 0x257110u: goto label_257110;
        case 0x257114u: goto label_257114;
        case 0x257118u: goto label_257118;
        case 0x25711cu: goto label_25711c;
        case 0x257120u: goto label_257120;
        case 0x257124u: goto label_257124;
        case 0x257128u: goto label_257128;
        case 0x25712cu: goto label_25712c;
        case 0x257130u: goto label_257130;
        case 0x257134u: goto label_257134;
        case 0x257138u: goto label_257138;
        case 0x25713cu: goto label_25713c;
        case 0x257140u: goto label_257140;
        case 0x257144u: goto label_257144;
        case 0x257148u: goto label_257148;
        case 0x25714cu: goto label_25714c;
        case 0x257150u: goto label_257150;
        case 0x257154u: goto label_257154;
        case 0x257158u: goto label_257158;
        case 0x25715cu: goto label_25715c;
        case 0x257160u: goto label_257160;
        case 0x257164u: goto label_257164;
        case 0x257168u: goto label_257168;
        case 0x25716cu: goto label_25716c;
        case 0x257170u: goto label_257170;
        case 0x257174u: goto label_257174;
        case 0x257178u: goto label_257178;
        case 0x25717cu: goto label_25717c;
        case 0x257180u: goto label_257180;
        case 0x257184u: goto label_257184;
        case 0x257188u: goto label_257188;
        case 0x25718cu: goto label_25718c;
        case 0x257190u: goto label_257190;
        case 0x257194u: goto label_257194;
        case 0x257198u: goto label_257198;
        case 0x25719cu: goto label_25719c;
        case 0x2571a0u: goto label_2571a0;
        case 0x2571a4u: goto label_2571a4;
        case 0x2571a8u: goto label_2571a8;
        case 0x2571acu: goto label_2571ac;
        case 0x2571b0u: goto label_2571b0;
        case 0x2571b4u: goto label_2571b4;
        case 0x2571b8u: goto label_2571b8;
        case 0x2571bcu: goto label_2571bc;
        case 0x2571c0u: goto label_2571c0;
        case 0x2571c4u: goto label_2571c4;
        case 0x2571c8u: goto label_2571c8;
        case 0x2571ccu: goto label_2571cc;
        case 0x2571d0u: goto label_2571d0;
        case 0x2571d4u: goto label_2571d4;
        case 0x2571d8u: goto label_2571d8;
        case 0x2571dcu: goto label_2571dc;
        case 0x2571e0u: goto label_2571e0;
        case 0x2571e4u: goto label_2571e4;
        case 0x2571e8u: goto label_2571e8;
        case 0x2571ecu: goto label_2571ec;
        case 0x2571f0u: goto label_2571f0;
        case 0x2571f4u: goto label_2571f4;
        case 0x2571f8u: goto label_2571f8;
        case 0x2571fcu: goto label_2571fc;
        case 0x257200u: goto label_257200;
        case 0x257204u: goto label_257204;
        case 0x257208u: goto label_257208;
        case 0x25720cu: goto label_25720c;
        case 0x257210u: goto label_257210;
        case 0x257214u: goto label_257214;
        case 0x257218u: goto label_257218;
        case 0x25721cu: goto label_25721c;
        case 0x257220u: goto label_257220;
        case 0x257224u: goto label_257224;
        case 0x257228u: goto label_257228;
        case 0x25722cu: goto label_25722c;
        case 0x257230u: goto label_257230;
        case 0x257234u: goto label_257234;
        case 0x257238u: goto label_257238;
        case 0x25723cu: goto label_25723c;
        case 0x257240u: goto label_257240;
        case 0x257244u: goto label_257244;
        case 0x257248u: goto label_257248;
        case 0x25724cu: goto label_25724c;
        case 0x257250u: goto label_257250;
        case 0x257254u: goto label_257254;
        case 0x257258u: goto label_257258;
        case 0x25725cu: goto label_25725c;
        case 0x257260u: goto label_257260;
        case 0x257264u: goto label_257264;
        case 0x257268u: goto label_257268;
        case 0x25726cu: goto label_25726c;
        case 0x257270u: goto label_257270;
        case 0x257274u: goto label_257274;
        case 0x257278u: goto label_257278;
        case 0x25727cu: goto label_25727c;
        case 0x257280u: goto label_257280;
        case 0x257284u: goto label_257284;
        case 0x257288u: goto label_257288;
        case 0x25728cu: goto label_25728c;
        case 0x257290u: goto label_257290;
        case 0x257294u: goto label_257294;
        case 0x257298u: goto label_257298;
        case 0x25729cu: goto label_25729c;
        case 0x2572a0u: goto label_2572a0;
        case 0x2572a4u: goto label_2572a4;
        case 0x2572a8u: goto label_2572a8;
        case 0x2572acu: goto label_2572ac;
        case 0x2572b0u: goto label_2572b0;
        case 0x2572b4u: goto label_2572b4;
        case 0x2572b8u: goto label_2572b8;
        case 0x2572bcu: goto label_2572bc;
        case 0x2572c0u: goto label_2572c0;
        case 0x2572c4u: goto label_2572c4;
        case 0x2572c8u: goto label_2572c8;
        case 0x2572ccu: goto label_2572cc;
        case 0x2572d0u: goto label_2572d0;
        case 0x2572d4u: goto label_2572d4;
        case 0x2572d8u: goto label_2572d8;
        case 0x2572dcu: goto label_2572dc;
        case 0x2572e0u: goto label_2572e0;
        case 0x2572e4u: goto label_2572e4;
        case 0x2572e8u: goto label_2572e8;
        case 0x2572ecu: goto label_2572ec;
        case 0x2572f0u: goto label_2572f0;
        case 0x2572f4u: goto label_2572f4;
        case 0x2572f8u: goto label_2572f8;
        case 0x2572fcu: goto label_2572fc;
        case 0x257300u: goto label_257300;
        case 0x257304u: goto label_257304;
        case 0x257308u: goto label_257308;
        case 0x25730cu: goto label_25730c;
        case 0x257310u: goto label_257310;
        case 0x257314u: goto label_257314;
        case 0x257318u: goto label_257318;
        case 0x25731cu: goto label_25731c;
        case 0x257320u: goto label_257320;
        case 0x257324u: goto label_257324;
        case 0x257328u: goto label_257328;
        case 0x25732cu: goto label_25732c;
        case 0x257330u: goto label_257330;
        case 0x257334u: goto label_257334;
        case 0x257338u: goto label_257338;
        case 0x25733cu: goto label_25733c;
        case 0x257340u: goto label_257340;
        case 0x257344u: goto label_257344;
        case 0x257348u: goto label_257348;
        case 0x25734cu: goto label_25734c;
        case 0x257350u: goto label_257350;
        case 0x257354u: goto label_257354;
        case 0x257358u: goto label_257358;
        case 0x25735cu: goto label_25735c;
        case 0x257360u: goto label_257360;
        case 0x257364u: goto label_257364;
        case 0x257368u: goto label_257368;
        case 0x25736cu: goto label_25736c;
        case 0x257370u: goto label_257370;
        case 0x257374u: goto label_257374;
        case 0x257378u: goto label_257378;
        case 0x25737cu: goto label_25737c;
        case 0x257380u: goto label_257380;
        case 0x257384u: goto label_257384;
        case 0x257388u: goto label_257388;
        case 0x25738cu: goto label_25738c;
        case 0x257390u: goto label_257390;
        case 0x257394u: goto label_257394;
        case 0x257398u: goto label_257398;
        case 0x25739cu: goto label_25739c;
        case 0x2573a0u: goto label_2573a0;
        case 0x2573a4u: goto label_2573a4;
        case 0x2573a8u: goto label_2573a8;
        case 0x2573acu: goto label_2573ac;
        case 0x2573b0u: goto label_2573b0;
        case 0x2573b4u: goto label_2573b4;
        case 0x2573b8u: goto label_2573b8;
        case 0x2573bcu: goto label_2573bc;
        case 0x2573c0u: goto label_2573c0;
        case 0x2573c4u: goto label_2573c4;
        case 0x2573c8u: goto label_2573c8;
        case 0x2573ccu: goto label_2573cc;
        case 0x2573d0u: goto label_2573d0;
        case 0x2573d4u: goto label_2573d4;
        case 0x2573d8u: goto label_2573d8;
        case 0x2573dcu: goto label_2573dc;
        case 0x2573e0u: goto label_2573e0;
        case 0x2573e4u: goto label_2573e4;
        case 0x2573e8u: goto label_2573e8;
        case 0x2573ecu: goto label_2573ec;
        case 0x2573f0u: goto label_2573f0;
        case 0x2573f4u: goto label_2573f4;
        case 0x2573f8u: goto label_2573f8;
        case 0x2573fcu: goto label_2573fc;
        case 0x257400u: goto label_257400;
        case 0x257404u: goto label_257404;
        case 0x257408u: goto label_257408;
        case 0x25740cu: goto label_25740c;
        case 0x257410u: goto label_257410;
        case 0x257414u: goto label_257414;
        case 0x257418u: goto label_257418;
        case 0x25741cu: goto label_25741c;
        case 0x257420u: goto label_257420;
        case 0x257424u: goto label_257424;
        case 0x257428u: goto label_257428;
        case 0x25742cu: goto label_25742c;
        case 0x257430u: goto label_257430;
        case 0x257434u: goto label_257434;
        case 0x257438u: goto label_257438;
        case 0x25743cu: goto label_25743c;
        case 0x257440u: goto label_257440;
        case 0x257444u: goto label_257444;
        case 0x257448u: goto label_257448;
        case 0x25744cu: goto label_25744c;
        case 0x257450u: goto label_257450;
        case 0x257454u: goto label_257454;
        case 0x257458u: goto label_257458;
        case 0x25745cu: goto label_25745c;
        case 0x257460u: goto label_257460;
        case 0x257464u: goto label_257464;
        case 0x257468u: goto label_257468;
        case 0x25746cu: goto label_25746c;
        case 0x257470u: goto label_257470;
        case 0x257474u: goto label_257474;
        case 0x257478u: goto label_257478;
        case 0x25747cu: goto label_25747c;
        case 0x257480u: goto label_257480;
        case 0x257484u: goto label_257484;
        case 0x257488u: goto label_257488;
        case 0x25748cu: goto label_25748c;
        case 0x257490u: goto label_257490;
        case 0x257494u: goto label_257494;
        case 0x257498u: goto label_257498;
        case 0x25749cu: goto label_25749c;
        case 0x2574a0u: goto label_2574a0;
        case 0x2574a4u: goto label_2574a4;
        case 0x2574a8u: goto label_2574a8;
        case 0x2574acu: goto label_2574ac;
        case 0x2574b0u: goto label_2574b0;
        case 0x2574b4u: goto label_2574b4;
        case 0x2574b8u: goto label_2574b8;
        case 0x2574bcu: goto label_2574bc;
        case 0x2574c0u: goto label_2574c0;
        case 0x2574c4u: goto label_2574c4;
        case 0x2574c8u: goto label_2574c8;
        case 0x2574ccu: goto label_2574cc;
        case 0x2574d0u: goto label_2574d0;
        case 0x2574d4u: goto label_2574d4;
        case 0x2574d8u: goto label_2574d8;
        case 0x2574dcu: goto label_2574dc;
        case 0x2574e0u: goto label_2574e0;
        case 0x2574e4u: goto label_2574e4;
        case 0x2574e8u: goto label_2574e8;
        case 0x2574ecu: goto label_2574ec;
        case 0x2574f0u: goto label_2574f0;
        case 0x2574f4u: goto label_2574f4;
        case 0x2574f8u: goto label_2574f8;
        case 0x2574fcu: goto label_2574fc;
        case 0x257500u: goto label_257500;
        case 0x257504u: goto label_257504;
        case 0x257508u: goto label_257508;
        case 0x25750cu: goto label_25750c;
        case 0x257510u: goto label_257510;
        case 0x257514u: goto label_257514;
        case 0x257518u: goto label_257518;
        case 0x25751cu: goto label_25751c;
        case 0x257520u: goto label_257520;
        case 0x257524u: goto label_257524;
        case 0x257528u: goto label_257528;
        case 0x25752cu: goto label_25752c;
        case 0x257530u: goto label_257530;
        case 0x257534u: goto label_257534;
        case 0x257538u: goto label_257538;
        case 0x25753cu: goto label_25753c;
        case 0x257540u: goto label_257540;
        case 0x257544u: goto label_257544;
        case 0x257548u: goto label_257548;
        case 0x25754cu: goto label_25754c;
        case 0x257550u: goto label_257550;
        case 0x257554u: goto label_257554;
        case 0x257558u: goto label_257558;
        case 0x25755cu: goto label_25755c;
        case 0x257560u: goto label_257560;
        case 0x257564u: goto label_257564;
        case 0x257568u: goto label_257568;
        case 0x25756cu: goto label_25756c;
        case 0x257570u: goto label_257570;
        case 0x257574u: goto label_257574;
        case 0x257578u: goto label_257578;
        case 0x25757cu: goto label_25757c;
        case 0x257580u: goto label_257580;
        case 0x257584u: goto label_257584;
        case 0x257588u: goto label_257588;
        case 0x25758cu: goto label_25758c;
        case 0x257590u: goto label_257590;
        case 0x257594u: goto label_257594;
        case 0x257598u: goto label_257598;
        case 0x25759cu: goto label_25759c;
        case 0x2575a0u: goto label_2575a0;
        case 0x2575a4u: goto label_2575a4;
        case 0x2575a8u: goto label_2575a8;
        case 0x2575acu: goto label_2575ac;
        case 0x2575b0u: goto label_2575b0;
        case 0x2575b4u: goto label_2575b4;
        case 0x2575b8u: goto label_2575b8;
        case 0x2575bcu: goto label_2575bc;
        case 0x2575c0u: goto label_2575c0;
        case 0x2575c4u: goto label_2575c4;
        case 0x2575c8u: goto label_2575c8;
        case 0x2575ccu: goto label_2575cc;
        case 0x2575d0u: goto label_2575d0;
        case 0x2575d4u: goto label_2575d4;
        case 0x2575d8u: goto label_2575d8;
        case 0x2575dcu: goto label_2575dc;
        case 0x2575e0u: goto label_2575e0;
        case 0x2575e4u: goto label_2575e4;
        case 0x2575e8u: goto label_2575e8;
        case 0x2575ecu: goto label_2575ec;
        case 0x2575f0u: goto label_2575f0;
        case 0x2575f4u: goto label_2575f4;
        case 0x2575f8u: goto label_2575f8;
        case 0x2575fcu: goto label_2575fc;
        case 0x257600u: goto label_257600;
        case 0x257604u: goto label_257604;
        case 0x257608u: goto label_257608;
        case 0x25760cu: goto label_25760c;
        case 0x257610u: goto label_257610;
        case 0x257614u: goto label_257614;
        case 0x257618u: goto label_257618;
        case 0x25761cu: goto label_25761c;
        case 0x257620u: goto label_257620;
        case 0x257624u: goto label_257624;
        case 0x257628u: goto label_257628;
        case 0x25762cu: goto label_25762c;
        case 0x257630u: goto label_257630;
        case 0x257634u: goto label_257634;
        case 0x257638u: goto label_257638;
        case 0x25763cu: goto label_25763c;
        case 0x257640u: goto label_257640;
        case 0x257644u: goto label_257644;
        case 0x257648u: goto label_257648;
        case 0x25764cu: goto label_25764c;
        case 0x257650u: goto label_257650;
        case 0x257654u: goto label_257654;
        case 0x257658u: goto label_257658;
        case 0x25765cu: goto label_25765c;
        case 0x257660u: goto label_257660;
        case 0x257664u: goto label_257664;
        case 0x257668u: goto label_257668;
        case 0x25766cu: goto label_25766c;
        case 0x257670u: goto label_257670;
        case 0x257674u: goto label_257674;
        case 0x257678u: goto label_257678;
        case 0x25767cu: goto label_25767c;
        case 0x257680u: goto label_257680;
        case 0x257684u: goto label_257684;
        case 0x257688u: goto label_257688;
        case 0x25768cu: goto label_25768c;
        case 0x257690u: goto label_257690;
        case 0x257694u: goto label_257694;
        case 0x257698u: goto label_257698;
        case 0x25769cu: goto label_25769c;
        case 0x2576a0u: goto label_2576a0;
        case 0x2576a4u: goto label_2576a4;
        case 0x2576a8u: goto label_2576a8;
        case 0x2576acu: goto label_2576ac;
        case 0x2576b0u: goto label_2576b0;
        case 0x2576b4u: goto label_2576b4;
        case 0x2576b8u: goto label_2576b8;
        case 0x2576bcu: goto label_2576bc;
        case 0x2576c0u: goto label_2576c0;
        case 0x2576c4u: goto label_2576c4;
        case 0x2576c8u: goto label_2576c8;
        case 0x2576ccu: goto label_2576cc;
        case 0x2576d0u: goto label_2576d0;
        case 0x2576d4u: goto label_2576d4;
        case 0x2576d8u: goto label_2576d8;
        case 0x2576dcu: goto label_2576dc;
        case 0x2576e0u: goto label_2576e0;
        case 0x2576e4u: goto label_2576e4;
        case 0x2576e8u: goto label_2576e8;
        case 0x2576ecu: goto label_2576ec;
        case 0x2576f0u: goto label_2576f0;
        case 0x2576f4u: goto label_2576f4;
        case 0x2576f8u: goto label_2576f8;
        case 0x2576fcu: goto label_2576fc;
        case 0x257700u: goto label_257700;
        case 0x257704u: goto label_257704;
        case 0x257708u: goto label_257708;
        case 0x25770cu: goto label_25770c;
        case 0x257710u: goto label_257710;
        case 0x257714u: goto label_257714;
        case 0x257718u: goto label_257718;
        case 0x25771cu: goto label_25771c;
        case 0x257720u: goto label_257720;
        case 0x257724u: goto label_257724;
        case 0x257728u: goto label_257728;
        case 0x25772cu: goto label_25772c;
        case 0x257730u: goto label_257730;
        case 0x257734u: goto label_257734;
        case 0x257738u: goto label_257738;
        case 0x25773cu: goto label_25773c;
        case 0x257740u: goto label_257740;
        case 0x257744u: goto label_257744;
        case 0x257748u: goto label_257748;
        case 0x25774cu: goto label_25774c;
        case 0x257750u: goto label_257750;
        case 0x257754u: goto label_257754;
        case 0x257758u: goto label_257758;
        case 0x25775cu: goto label_25775c;
        case 0x257760u: goto label_257760;
        case 0x257764u: goto label_257764;
        case 0x257768u: goto label_257768;
        case 0x25776cu: goto label_25776c;
        case 0x257770u: goto label_257770;
        case 0x257774u: goto label_257774;
        case 0x257778u: goto label_257778;
        case 0x25777cu: goto label_25777c;
        case 0x257780u: goto label_257780;
        case 0x257784u: goto label_257784;
        case 0x257788u: goto label_257788;
        case 0x25778cu: goto label_25778c;
        case 0x257790u: goto label_257790;
        case 0x257794u: goto label_257794;
        case 0x257798u: goto label_257798;
        case 0x25779cu: goto label_25779c;
        case 0x2577a0u: goto label_2577a0;
        case 0x2577a4u: goto label_2577a4;
        case 0x2577a8u: goto label_2577a8;
        case 0x2577acu: goto label_2577ac;
        case 0x2577b0u: goto label_2577b0;
        case 0x2577b4u: goto label_2577b4;
        case 0x2577b8u: goto label_2577b8;
        case 0x2577bcu: goto label_2577bc;
        case 0x2577c0u: goto label_2577c0;
        case 0x2577c4u: goto label_2577c4;
        case 0x2577c8u: goto label_2577c8;
        case 0x2577ccu: goto label_2577cc;
        case 0x2577d0u: goto label_2577d0;
        case 0x2577d4u: goto label_2577d4;
        case 0x2577d8u: goto label_2577d8;
        case 0x2577dcu: goto label_2577dc;
        case 0x2577e0u: goto label_2577e0;
        case 0x2577e4u: goto label_2577e4;
        case 0x2577e8u: goto label_2577e8;
        case 0x2577ecu: goto label_2577ec;
        case 0x2577f0u: goto label_2577f0;
        case 0x2577f4u: goto label_2577f4;
        case 0x2577f8u: goto label_2577f8;
        case 0x2577fcu: goto label_2577fc;
        case 0x257800u: goto label_257800;
        case 0x257804u: goto label_257804;
        case 0x257808u: goto label_257808;
        case 0x25780cu: goto label_25780c;
        case 0x257810u: goto label_257810;
        case 0x257814u: goto label_257814;
        case 0x257818u: goto label_257818;
        case 0x25781cu: goto label_25781c;
        case 0x257820u: goto label_257820;
        case 0x257824u: goto label_257824;
        case 0x257828u: goto label_257828;
        case 0x25782cu: goto label_25782c;
        case 0x257830u: goto label_257830;
        case 0x257834u: goto label_257834;
        case 0x257838u: goto label_257838;
        case 0x25783cu: goto label_25783c;
        case 0x257840u: goto label_257840;
        case 0x257844u: goto label_257844;
        case 0x257848u: goto label_257848;
        case 0x25784cu: goto label_25784c;
        case 0x257850u: goto label_257850;
        case 0x257854u: goto label_257854;
        case 0x257858u: goto label_257858;
        case 0x25785cu: goto label_25785c;
        case 0x257860u: goto label_257860;
        case 0x257864u: goto label_257864;
        case 0x257868u: goto label_257868;
        case 0x25786cu: goto label_25786c;
        case 0x257870u: goto label_257870;
        case 0x257874u: goto label_257874;
        case 0x257878u: goto label_257878;
        case 0x25787cu: goto label_25787c;
        case 0x257880u: goto label_257880;
        case 0x257884u: goto label_257884;
        case 0x257888u: goto label_257888;
        case 0x25788cu: goto label_25788c;
        case 0x257890u: goto label_257890;
        case 0x257894u: goto label_257894;
        case 0x257898u: goto label_257898;
        case 0x25789cu: goto label_25789c;
        case 0x2578a0u: goto label_2578a0;
        case 0x2578a4u: goto label_2578a4;
        case 0x2578a8u: goto label_2578a8;
        case 0x2578acu: goto label_2578ac;
        case 0x2578b0u: goto label_2578b0;
        case 0x2578b4u: goto label_2578b4;
        case 0x2578b8u: goto label_2578b8;
        case 0x2578bcu: goto label_2578bc;
        case 0x2578c0u: goto label_2578c0;
        case 0x2578c4u: goto label_2578c4;
        case 0x2578c8u: goto label_2578c8;
        case 0x2578ccu: goto label_2578cc;
        case 0x2578d0u: goto label_2578d0;
        case 0x2578d4u: goto label_2578d4;
        case 0x2578d8u: goto label_2578d8;
        case 0x2578dcu: goto label_2578dc;
        case 0x2578e0u: goto label_2578e0;
        case 0x2578e4u: goto label_2578e4;
        case 0x2578e8u: goto label_2578e8;
        case 0x2578ecu: goto label_2578ec;
        case 0x2578f0u: goto label_2578f0;
        case 0x2578f4u: goto label_2578f4;
        case 0x2578f8u: goto label_2578f8;
        case 0x2578fcu: goto label_2578fc;
        case 0x257900u: goto label_257900;
        case 0x257904u: goto label_257904;
        case 0x257908u: goto label_257908;
        case 0x25790cu: goto label_25790c;
        case 0x257910u: goto label_257910;
        case 0x257914u: goto label_257914;
        case 0x257918u: goto label_257918;
        case 0x25791cu: goto label_25791c;
        case 0x257920u: goto label_257920;
        case 0x257924u: goto label_257924;
        case 0x257928u: goto label_257928;
        case 0x25792cu: goto label_25792c;
        case 0x257930u: goto label_257930;
        case 0x257934u: goto label_257934;
        case 0x257938u: goto label_257938;
        case 0x25793cu: goto label_25793c;
        case 0x257940u: goto label_257940;
        case 0x257944u: goto label_257944;
        case 0x257948u: goto label_257948;
        case 0x25794cu: goto label_25794c;
        case 0x257950u: goto label_257950;
        case 0x257954u: goto label_257954;
        case 0x257958u: goto label_257958;
        case 0x25795cu: goto label_25795c;
        case 0x257960u: goto label_257960;
        case 0x257964u: goto label_257964;
        case 0x257968u: goto label_257968;
        case 0x25796cu: goto label_25796c;
        case 0x257970u: goto label_257970;
        case 0x257974u: goto label_257974;
        case 0x257978u: goto label_257978;
        case 0x25797cu: goto label_25797c;
        case 0x257980u: goto label_257980;
        case 0x257984u: goto label_257984;
        case 0x257988u: goto label_257988;
        case 0x25798cu: goto label_25798c;
        case 0x257990u: goto label_257990;
        case 0x257994u: goto label_257994;
        case 0x257998u: goto label_257998;
        case 0x25799cu: goto label_25799c;
        case 0x2579a0u: goto label_2579a0;
        case 0x2579a4u: goto label_2579a4;
        case 0x2579a8u: goto label_2579a8;
        case 0x2579acu: goto label_2579ac;
        case 0x2579b0u: goto label_2579b0;
        case 0x2579b4u: goto label_2579b4;
        case 0x2579b8u: goto label_2579b8;
        case 0x2579bcu: goto label_2579bc;
        case 0x2579c0u: goto label_2579c0;
        case 0x2579c4u: goto label_2579c4;
        case 0x2579c8u: goto label_2579c8;
        case 0x2579ccu: goto label_2579cc;
        case 0x2579d0u: goto label_2579d0;
        case 0x2579d4u: goto label_2579d4;
        case 0x2579d8u: goto label_2579d8;
        case 0x2579dcu: goto label_2579dc;
        case 0x2579e0u: goto label_2579e0;
        case 0x2579e4u: goto label_2579e4;
        case 0x2579e8u: goto label_2579e8;
        case 0x2579ecu: goto label_2579ec;
        case 0x2579f0u: goto label_2579f0;
        case 0x2579f4u: goto label_2579f4;
        case 0x2579f8u: goto label_2579f8;
        case 0x2579fcu: goto label_2579fc;
        case 0x257a00u: goto label_257a00;
        case 0x257a04u: goto label_257a04;
        case 0x257a08u: goto label_257a08;
        case 0x257a0cu: goto label_257a0c;
        case 0x257a10u: goto label_257a10;
        case 0x257a14u: goto label_257a14;
        case 0x257a18u: goto label_257a18;
        case 0x257a1cu: goto label_257a1c;
        case 0x257a20u: goto label_257a20;
        case 0x257a24u: goto label_257a24;
        case 0x257a28u: goto label_257a28;
        case 0x257a2cu: goto label_257a2c;
        case 0x257a30u: goto label_257a30;
        case 0x257a34u: goto label_257a34;
        case 0x257a38u: goto label_257a38;
        case 0x257a3cu: goto label_257a3c;
        case 0x257a40u: goto label_257a40;
        case 0x257a44u: goto label_257a44;
        case 0x257a48u: goto label_257a48;
        case 0x257a4cu: goto label_257a4c;
        case 0x257a50u: goto label_257a50;
        case 0x257a54u: goto label_257a54;
        case 0x257a58u: goto label_257a58;
        case 0x257a5cu: goto label_257a5c;
        case 0x257a60u: goto label_257a60;
        case 0x257a64u: goto label_257a64;
        case 0x257a68u: goto label_257a68;
        case 0x257a6cu: goto label_257a6c;
        case 0x257a70u: goto label_257a70;
        case 0x257a74u: goto label_257a74;
        case 0x257a78u: goto label_257a78;
        case 0x257a7cu: goto label_257a7c;
        case 0x257a80u: goto label_257a80;
        case 0x257a84u: goto label_257a84;
        case 0x257a88u: goto label_257a88;
        case 0x257a8cu: goto label_257a8c;
        case 0x257a90u: goto label_257a90;
        case 0x257a94u: goto label_257a94;
        case 0x257a98u: goto label_257a98;
        case 0x257a9cu: goto label_257a9c;
        case 0x257aa0u: goto label_257aa0;
        case 0x257aa4u: goto label_257aa4;
        case 0x257aa8u: goto label_257aa8;
        case 0x257aacu: goto label_257aac;
        case 0x257ab0u: goto label_257ab0;
        case 0x257ab4u: goto label_257ab4;
        case 0x257ab8u: goto label_257ab8;
        case 0x257abcu: goto label_257abc;
        case 0x257ac0u: goto label_257ac0;
        case 0x257ac4u: goto label_257ac4;
        case 0x257ac8u: goto label_257ac8;
        case 0x257accu: goto label_257acc;
        case 0x257ad0u: goto label_257ad0;
        case 0x257ad4u: goto label_257ad4;
        case 0x257ad8u: goto label_257ad8;
        case 0x257adcu: goto label_257adc;
        case 0x257ae0u: goto label_257ae0;
        case 0x257ae4u: goto label_257ae4;
        case 0x257ae8u: goto label_257ae8;
        case 0x257aecu: goto label_257aec;
        case 0x257af0u: goto label_257af0;
        case 0x257af4u: goto label_257af4;
        case 0x257af8u: goto label_257af8;
        case 0x257afcu: goto label_257afc;
        case 0x257b00u: goto label_257b00;
        case 0x257b04u: goto label_257b04;
        case 0x257b08u: goto label_257b08;
        case 0x257b0cu: goto label_257b0c;
        case 0x257b10u: goto label_257b10;
        case 0x257b14u: goto label_257b14;
        case 0x257b18u: goto label_257b18;
        case 0x257b1cu: goto label_257b1c;
        case 0x257b20u: goto label_257b20;
        case 0x257b24u: goto label_257b24;
        case 0x257b28u: goto label_257b28;
        case 0x257b2cu: goto label_257b2c;
        case 0x257b30u: goto label_257b30;
        case 0x257b34u: goto label_257b34;
        case 0x257b38u: goto label_257b38;
        case 0x257b3cu: goto label_257b3c;
        case 0x257b40u: goto label_257b40;
        case 0x257b44u: goto label_257b44;
        case 0x257b48u: goto label_257b48;
        case 0x257b4cu: goto label_257b4c;
        case 0x257b50u: goto label_257b50;
        case 0x257b54u: goto label_257b54;
        case 0x257b58u: goto label_257b58;
        case 0x257b5cu: goto label_257b5c;
        case 0x257b60u: goto label_257b60;
        case 0x257b64u: goto label_257b64;
        case 0x257b68u: goto label_257b68;
        case 0x257b6cu: goto label_257b6c;
        case 0x257b70u: goto label_257b70;
        case 0x257b74u: goto label_257b74;
        case 0x257b78u: goto label_257b78;
        case 0x257b7cu: goto label_257b7c;
        case 0x257b80u: goto label_257b80;
        case 0x257b84u: goto label_257b84;
        case 0x257b88u: goto label_257b88;
        case 0x257b8cu: goto label_257b8c;
        case 0x257b90u: goto label_257b90;
        case 0x257b94u: goto label_257b94;
        case 0x257b98u: goto label_257b98;
        case 0x257b9cu: goto label_257b9c;
        case 0x257ba0u: goto label_257ba0;
        case 0x257ba4u: goto label_257ba4;
        case 0x257ba8u: goto label_257ba8;
        case 0x257bacu: goto label_257bac;
        case 0x257bb0u: goto label_257bb0;
        case 0x257bb4u: goto label_257bb4;
        case 0x257bb8u: goto label_257bb8;
        case 0x257bbcu: goto label_257bbc;
        case 0x257bc0u: goto label_257bc0;
        case 0x257bc4u: goto label_257bc4;
        case 0x257bc8u: goto label_257bc8;
        case 0x257bccu: goto label_257bcc;
        case 0x257bd0u: goto label_257bd0;
        case 0x257bd4u: goto label_257bd4;
        case 0x257bd8u: goto label_257bd8;
        case 0x257bdcu: goto label_257bdc;
        case 0x257be0u: goto label_257be0;
        case 0x257be4u: goto label_257be4;
        case 0x257be8u: goto label_257be8;
        case 0x257becu: goto label_257bec;
        case 0x257bf0u: goto label_257bf0;
        case 0x257bf4u: goto label_257bf4;
        case 0x257bf8u: goto label_257bf8;
        case 0x257bfcu: goto label_257bfc;
        case 0x257c00u: goto label_257c00;
        case 0x257c04u: goto label_257c04;
        case 0x257c08u: goto label_257c08;
        case 0x257c0cu: goto label_257c0c;
        case 0x257c10u: goto label_257c10;
        case 0x257c14u: goto label_257c14;
        case 0x257c18u: goto label_257c18;
        case 0x257c1cu: goto label_257c1c;
        case 0x257c20u: goto label_257c20;
        case 0x257c24u: goto label_257c24;
        case 0x257c28u: goto label_257c28;
        case 0x257c2cu: goto label_257c2c;
        case 0x257c30u: goto label_257c30;
        case 0x257c34u: goto label_257c34;
        case 0x257c38u: goto label_257c38;
        case 0x257c3cu: goto label_257c3c;
        case 0x257c40u: goto label_257c40;
        case 0x257c44u: goto label_257c44;
        case 0x257c48u: goto label_257c48;
        case 0x257c4cu: goto label_257c4c;
        case 0x257c50u: goto label_257c50;
        case 0x257c54u: goto label_257c54;
        case 0x257c58u: goto label_257c58;
        case 0x257c5cu: goto label_257c5c;
        case 0x257c60u: goto label_257c60;
        case 0x257c64u: goto label_257c64;
        case 0x257c68u: goto label_257c68;
        case 0x257c6cu: goto label_257c6c;
        case 0x257c70u: goto label_257c70;
        case 0x257c74u: goto label_257c74;
        case 0x257c78u: goto label_257c78;
        case 0x257c7cu: goto label_257c7c;
        case 0x257c80u: goto label_257c80;
        case 0x257c84u: goto label_257c84;
        case 0x257c88u: goto label_257c88;
        case 0x257c8cu: goto label_257c8c;
        case 0x257c90u: goto label_257c90;
        case 0x257c94u: goto label_257c94;
        case 0x257c98u: goto label_257c98;
        case 0x257c9cu: goto label_257c9c;
        case 0x257ca0u: goto label_257ca0;
        case 0x257ca4u: goto label_257ca4;
        case 0x257ca8u: goto label_257ca8;
        case 0x257cacu: goto label_257cac;
        case 0x257cb0u: goto label_257cb0;
        case 0x257cb4u: goto label_257cb4;
        case 0x257cb8u: goto label_257cb8;
        case 0x257cbcu: goto label_257cbc;
        case 0x257cc0u: goto label_257cc0;
        case 0x257cc4u: goto label_257cc4;
        case 0x257cc8u: goto label_257cc8;
        case 0x257cccu: goto label_257ccc;
        case 0x257cd0u: goto label_257cd0;
        case 0x257cd4u: goto label_257cd4;
        case 0x257cd8u: goto label_257cd8;
        case 0x257cdcu: goto label_257cdc;
        case 0x257ce0u: goto label_257ce0;
        case 0x257ce4u: goto label_257ce4;
        default: break;
    }

    ctx->pc = 0x2570e8u;

label_2570e8:
    // 0x2570e8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2570e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_2570ec:
    // 0x2570ec: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x2570ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_2570f0:
    // 0x2570f0: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x2570f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_2570f4:
    // 0x2570f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2570f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2570f8:
    // 0x2570f8: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x2570f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_2570fc:
    // 0x2570fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2570fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_257100:
    // 0x257100: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x257100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_257104:
    // 0x257104: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x257104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_257108:
    // 0x257108: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x257108u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_25710c:
    // 0x25710c: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x25710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_257110:
    // 0x257110: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x257110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_257114:
    // 0x257114: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x257114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_257118:
    // 0x257118: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x257118u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25711c:
    // 0x25711c: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x25711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_257120:
    // 0x257120: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x257120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_257124:
    // 0x257124: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x257124u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_257128:
    // 0x257128: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x257128u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_25712c:
    // 0x25712c: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x25712cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_257130:
    // 0x257130: 0xc089bfc  jal         func_226FF0
label_257134:
    if (ctx->pc == 0x257134u) {
        ctx->pc = 0x257134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257130u;
        // 0x257134: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x257138u;
        goto label_257138;
    }
    ctx->pc = 0x257130u;
    SET_GPR_U32(ctx, 31, 0x257138u);
    ctx->pc = 0x257134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257130u;
    // 0x257134: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x257130u, 0x257138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257138u;
label_257138:
    // 0x257138: 0xc0e57ce  jal         func_395F38
label_25713c:
    if (ctx->pc == 0x25713Cu) {
        ctx->pc = 0x25713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257138u;
        // 0x25713c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257140u;
        goto label_257140;
    }
    ctx->pc = 0x257138u;
    SET_GPR_U32(ctx, 31, 0x257140u);
    ctx->pc = 0x25713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257138u;
    // 0x25713c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x257138u, 0x257140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257140u;
label_257140:
    // 0x257140: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x257140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_257144:
    // 0x257144: 0xc087502  jal         func_21D408
label_257148:
    if (ctx->pc == 0x257148u) {
        ctx->pc = 0x257148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257144u;
        // 0x257148: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25714Cu;
        goto label_25714c;
    }
    ctx->pc = 0x257144u;
    SET_GPR_U32(ctx, 31, 0x25714Cu);
    ctx->pc = 0x257148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257144u;
    // 0x257148: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x257144u, 0x25714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25714Cu;
label_25714c:
    // 0x25714c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x25714cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_257150:
    // 0x257150: 0xc089b98  jal         func_226E60
label_257154:
    if (ctx->pc == 0x257154u) {
        ctx->pc = 0x257154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257150u;
        // 0x257154: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257158u;
        goto label_257158;
    }
    ctx->pc = 0x257150u;
    SET_GPR_U32(ctx, 31, 0x257158u);
    ctx->pc = 0x257154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257150u;
    // 0x257154: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x257150u, 0x257158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257158u;
label_257158:
    // 0x257158: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x257158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25715c:
    // 0x25715c: 0xc089baa  jal         func_226EA8
label_257160:
    if (ctx->pc == 0x257160u) {
        ctx->pc = 0x257160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25715Cu;
        // 0x257160: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257164u;
        goto label_257164;
    }
    ctx->pc = 0x25715Cu;
    SET_GPR_U32(ctx, 31, 0x257164u);
    ctx->pc = 0x257160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25715Cu;
    // 0x257160: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226EA8u, 0x25715Cu, 0x257164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257164u;
label_257164:
    // 0x257164: 0x8e042c04  lw          $a0, 0x2C04($s0)
    ctx->pc = 0x257164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
label_257168:
    // 0x257168: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x257168u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25716c:
    // 0x25716c: 0xc0e44cc  jal         func_391330
label_257170:
    if (ctx->pc == 0x257170u) {
        ctx->pc = 0x257170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25716Cu;
        // 0x257170: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257174u;
        goto label_257174;
    }
    ctx->pc = 0x25716Cu;
    SET_GPR_U32(ctx, 31, 0x257174u);
    ctx->pc = 0x257170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25716Cu;
    // 0x257170: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x25716Cu, 0x257174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257174u;
label_257174:
    // 0x257174: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x257174u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_257178:
    // 0x257178: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x257178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_25717c:
    // 0x25717c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_257180:
    if (ctx->pc == 0x257180u) {
        ctx->pc = 0x257180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25717Cu;
        // 0x257180: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257184u;
        goto label_257184;
    }
    ctx->pc = 0x25717Cu;
    {
        const bool branch_taken_0x25717c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25717c) {
            ctx->pc = 0x257180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25717Cu;
            // 0x257180: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257194u;
            goto label_257194;
        }
    }
    ctx->pc = 0x257184u;
label_257184:
    // 0x257184: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x257184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_257188:
    // 0x257188: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x257188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_25718c:
    // 0x25718c: 0x1000000b  b           . + 4 + (0xB << 2)
label_257190:
    if (ctx->pc == 0x257190u) {
        ctx->pc = 0x257194u;
        goto label_257194;
    }
    ctx->pc = 0x25718Cu;
    {
        const bool branch_taken_0x25718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25718c) {
            ctx->pc = 0x2571BCu;
            goto label_2571bc;
        }
    }
    ctx->pc = 0x257194u;
label_257194:
    // 0x257194: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x257194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257198:
    // 0x257198: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x257198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_25719c:
    // 0x25719c: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x25719cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_2571a0:
    // 0x2571a0: 0x60f809  jalr        $v1
label_2571a4:
    if (ctx->pc == 0x2571A4u) {
        ctx->pc = 0x2571A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571A0u;
        // 0x2571a4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2571A8u;
        goto label_2571a8;
    }
    ctx->pc = 0x2571A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2571A8u);
        ctx->pc = 0x2571A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571A0u;
        // 0x2571a4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2571A0u, 0x2571A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2571A8u;
label_2571a8:
    // 0x2571a8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2571a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2571ac:
    // 0x2571ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2571acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2571b0:
    // 0x2571b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2571b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2571b4:
    // 0x2571b4: 0x0  nop
    ctx->pc = 0x2571b4u;
    // NOP
label_2571b8:
    // 0x2571b8: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x2571b8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2571bc:
    // 0x2571bc: 0xc087408  jal         func_21D020
label_2571c0:
    if (ctx->pc == 0x2571C0u) {
        ctx->pc = 0x2571C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571BCu;
        // 0x2571c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2571C4u;
        goto label_2571c4;
    }
    ctx->pc = 0x2571BCu;
    SET_GPR_U32(ctx, 31, 0x2571C4u);
    ctx->pc = 0x2571C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2571BCu;
    // 0x2571c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x2571BCu, 0x2571C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2571C4u;
label_2571c4:
    // 0x2571c4: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2571c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2571c8:
    // 0x2571c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2571c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2571cc:
    // 0x2571cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2571ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2571d0:
    // 0x2571d0: 0x0  nop
    ctx->pc = 0x2571d0u;
    // NOP
label_2571d4:
    // 0x2571d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2571d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2571d8:
    // 0x2571d8: 0x0  nop
    ctx->pc = 0x2571d8u;
    // NOP
label_2571dc:
    // 0x2571dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2571e0:
    if (ctx->pc == 0x2571E0u) {
        ctx->pc = 0x2571E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571DCu;
        // 0x2571e0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2571E4u;
        goto label_2571e4;
    }
    ctx->pc = 0x2571DCu;
    {
        const bool branch_taken_0x2571dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2571E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571DCu;
        // 0x2571e0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571dc) {
            ctx->pc = 0x2571F4u;
            goto label_2571f4;
        }
    }
    ctx->pc = 0x2571E4u;
label_2571e4:
    // 0x2571e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2571e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2571e8:
    // 0x2571e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2571e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2571ec:
    // 0x2571ec: 0x0  nop
    ctx->pc = 0x2571ecu;
    // NOP
label_2571f0:
    // 0x2571f0: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x2571f0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_2571f4:
    // 0x2571f4: 0x866301be  lh          $v1, 0x1BE($s3)
    ctx->pc = 0x2571f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
label_2571f8:
    // 0x2571f8: 0x2444d838  addiu       $a0, $v0, -0x27C8
    ctx->pc = 0x2571f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957112));
label_2571fc:
    // 0x2571fc: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x2571fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_257200:
    // 0x257200: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_257204:
    if (ctx->pc == 0x257204u) {
        ctx->pc = 0x257204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257200u;
        // 0x257204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257208u;
        goto label_257208;
    }
    ctx->pc = 0x257200u;
    {
        const bool branch_taken_0x257200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x257204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257200u;
        // 0x257204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257200) {
            ctx->pc = 0x257238u;
            goto label_257238;
        }
    }
    ctx->pc = 0x257208u;
label_257208:
    // 0x257208: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x257208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25720c:
    // 0x25720c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_257210:
    if (ctx->pc == 0x257210u) {
        ctx->pc = 0x257210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25720Cu;
        // 0x257210: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257214u;
        goto label_257214;
    }
    ctx->pc = 0x25720Cu;
    {
        const bool branch_taken_0x25720c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x257210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25720Cu;
        // 0x257210: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25720c) {
            ctx->pc = 0x257224u;
            goto label_257224;
        }
    }
    ctx->pc = 0x257214u;
label_257214:
    // 0x257214: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x257214u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_257218:
    // 0x257218: 0x866201c0  lh          $v0, 0x1C0($s3)
    ctx->pc = 0x257218u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 448)));
label_25721c:
    // 0x25721c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_257220:
    if (ctx->pc == 0x257220u) {
        ctx->pc = 0x257220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25721Cu;
        // 0x257220: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257224u;
        goto label_257224;
    }
    ctx->pc = 0x25721Cu;
    {
        const bool branch_taken_0x25721c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x257220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25721Cu;
        // 0x257220: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25721c) {
            ctx->pc = 0x257234u;
            goto label_257234;
        }
    }
    ctx->pc = 0x257224u;
label_257224:
    // 0x257224: 0x8e6301c0  lw          $v1, 0x1C0($s3)
    ctx->pc = 0x257224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
label_257228:
    // 0x257228: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x257228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
label_25722c:
    // 0x25722c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_257230:
    if (ctx->pc == 0x257230u) {
        ctx->pc = 0x257234u;
        goto label_257234;
    }
    ctx->pc = 0x25722Cu;
    {
        const bool branch_taken_0x25722c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25722c) {
            ctx->pc = 0x257238u;
            goto label_257238;
        }
    }
    ctx->pc = 0x257234u;
label_257234:
    // 0x257234: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x257234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257238:
    // 0x257238: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
label_25723c:
    if (ctx->pc == 0x25723Cu) {
        ctx->pc = 0x257240u;
        goto label_257240;
    }
    ctx->pc = 0x257238u;
    {
        const bool branch_taken_0x257238 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x257238) {
            ctx->pc = 0x25732Cu;
            goto label_25732c;
        }
    }
    ctx->pc = 0x257240u;
label_257240:
    // 0x257240: 0x5620003f  bnel        $s1, $zero, . + 4 + (0x3F << 2)
label_257244:
    if (ctx->pc == 0x257244u) {
        ctx->pc = 0x257244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257240u;
        // 0x257244: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257248u;
        goto label_257248;
    }
    ctx->pc = 0x257240u;
    {
        const bool branch_taken_0x257240 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x257240) {
            ctx->pc = 0x257244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257240u;
            // 0x257244: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257340u;
            goto label_257340;
        }
    }
    ctx->pc = 0x257248u;
label_257248:
    // 0x257248: 0xc6740630  lwc1        $f20, 0x630($s3)
    ctx->pc = 0x257248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25724c:
    // 0x25724c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x25724cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_257250:
    // 0x257250: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x257250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_257254:
    // 0x257254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_257258:
    // 0x257258: 0x26111720  addiu       $s1, $s0, 0x1720
    ctx->pc = 0x257258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5920));
label_25725c:
    // 0x25725c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x25725cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_257260:
    // 0x257260: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x257260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_257264:
    // 0x257264: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x257264u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_257268:
    // 0x257268: 0x0  nop
    ctx->pc = 0x257268u;
    // NOP
label_25726c:
    // 0x25726c: 0x0  nop
    ctx->pc = 0x25726cu;
    // NOP
label_257270:
    // 0x257270: 0x4616ad43  div.s       $f21, $f21, $f22
    ctx->pc = 0x257270u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
label_257274:
    // 0x257274: 0xc12e310  jal         func_4B8C40
label_257278:
    if (ctx->pc == 0x257278u) {
        ctx->pc = 0x257278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257274u;
        // 0x257278: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25727Cu;
        goto label_25727c;
    }
    ctx->pc = 0x257274u;
    SET_GPR_U32(ctx, 31, 0x25727Cu);
    ctx->pc = 0x257278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257274u;
    // 0x257278: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x257274u, 0x25727Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25727Cu;
label_25727c:
    // 0x25727c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x25727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_257280:
    // 0x257280: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x257280u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_257284:
    // 0x257284: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x257284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257288:
    // 0x257288: 0xc6031720  lwc1        $f3, 0x1720($s0)
    ctx->pc = 0x257288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25728c:
    // 0x25728c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x25728cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_257290:
    // 0x257290: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x257290u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_257294:
    // 0x257294: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x257294u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_257298:
    // 0x257298: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x257298u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_25729c:
    // 0x25729c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x25729cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2572a0:
    // 0x2572a0: 0xc12e29c  jal         func_4B8A70
label_2572a4:
    if (ctx->pc == 0x2572A4u) {
        ctx->pc = 0x2572A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572A0u;
        // 0x2572a4: 0xe7a30000  swc1        $f3, 0x0($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2572A8u;
        goto label_2572a8;
    }
    ctx->pc = 0x2572A0u;
    SET_GPR_U32(ctx, 31, 0x2572A8u);
    ctx->pc = 0x2572A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2572A0u;
    // 0x2572a4: 0xe7a30000  swc1        $f3, 0x0($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2572A0u, 0x2572A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2572A8u;
label_2572a8:
    // 0x2572a8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2572a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2572ac:
    // 0x2572ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2572acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2572b0:
    // 0x2572b0: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x2572b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_2572b4:
    // 0x2572b4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2572b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2572b8:
    // 0x2572b8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2572b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2572bc:
    // 0x2572bc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2572bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2572c0:
    // 0x2572c0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2572c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2572c4:
    // 0x2572c4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2572c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2572c8:
    // 0x2572c8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2572c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2572cc:
    // 0x2572cc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2572ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2572d0:
    // 0x2572d0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2572d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2572d4:
    // 0x2572d4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2572d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2572d8:
    // 0x2572d8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2572d8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2572dc:
    // 0x2572dc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2572dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2572e0:
    // 0x2572e0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2572e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2572e4:
    // 0x2572e4: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2572e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2572e8:
    // 0x2572e8: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2572e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2572ec:
    // 0x2572ec: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2572ecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2572f0:
    // 0x2572f0: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2572f0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2572f4:
    // 0x2572f4: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2572f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2572f8:
    // 0x2572f8: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2572f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2572fc:
    // 0x2572fc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2572fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_257300:
    // 0x257300: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x257300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_257304:
    // 0x257304: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x257304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_257308:
    // 0x257308: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x257308u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_25730c:
    // 0x25730c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x25730cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_257310:
    // 0x257310: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x257310u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_257314:
    // 0x257314: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x257314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_257318:
    // 0x257318: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x257318u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
label_25731c:
    // 0x25731c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x25731cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_257320:
    // 0x257320: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x257320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_257324:
    // 0x257324: 0x10000260  b           . + 4 + (0x260 << 2)
label_257328:
    if (ctx->pc == 0x257328u) {
        ctx->pc = 0x257328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257324u;
        // 0x257328: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25732Cu;
        goto label_25732c;
    }
    ctx->pc = 0x257324u;
    {
        const bool branch_taken_0x257324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257324u;
        // 0x257328: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257324) {
            ctx->pc = 0x257CA8u;
            goto label_257ca8;
        }
    }
    ctx->pc = 0x25732Cu;
label_25732c:
    // 0x25732c: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
label_257330:
    if (ctx->pc == 0x257330u) {
        ctx->pc = 0x257330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25732Cu;
        // 0x257330: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257334u;
        goto label_257334;
    }
    ctx->pc = 0x25732Cu;
    {
        const bool branch_taken_0x25732c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x25732c) {
            ctx->pc = 0x257330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25732Cu;
            // 0x257330: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257340u;
            goto label_257340;
        }
    }
    ctx->pc = 0x257334u;
label_257334:
    // 0x257334: 0x12a0022f  beqz        $s5, . + 4 + (0x22F << 2)
label_257338:
    if (ctx->pc == 0x257338u) {
        ctx->pc = 0x25733Cu;
        goto label_25733c;
    }
    ctx->pc = 0x257334u;
    {
        const bool branch_taken_0x257334 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x257334) {
            ctx->pc = 0x257BF4u;
            goto label_257bf4;
        }
    }
    ctx->pc = 0x25733Cu;
label_25733c:
    // 0x25733c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x25733cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_257340:
    // 0x257340: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x257340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_257344:
    // 0x257344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x257344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_257348:
    // 0x257348: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x257348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_25734c:
    // 0x25734c: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x25734cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_257350:
    // 0x257350: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x257350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_257354:
    // 0x257354: 0x40f809  jalr        $v0
label_257358:
    if (ctx->pc == 0x257358u) {
        ctx->pc = 0x257358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257354u;
        // 0x257358: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25735Cu;
        goto label_25735c;
    }
    ctx->pc = 0x257354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25735Cu);
        ctx->pc = 0x257358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257354u;
        // 0x257358: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257354u, 0x25735Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25735Cu;
label_25735c:
    // 0x25735c: 0x26650090  addiu       $a1, $s3, 0x90
    ctx->pc = 0x25735cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_257360:
    // 0x257360: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x257360u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_257364:
    // 0x257364: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x257364u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_257368:
    // 0x257368: 0x24f64b00  addiu       $s6, $a3, 0x4B00
    ctx->pc = 0x257368u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_25736c:
    // 0x25736c: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x25736cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_257370:
    // 0x257370: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x257370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_257374:
    // 0x257374: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x257374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_257378:
    // 0x257378: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x257378u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25737c:
    // 0x25737c: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x25737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_257380:
    // 0x257380: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x257380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_257384:
    // 0x257384: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x257384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_257388:
    // 0x257388: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x257388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_25738c:
    // 0x25738c: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x25738cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_257390:
    // 0x257390: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x257390u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_257394:
    // 0x257394: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x257394u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_257398:
    // 0x257398: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x257398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_25739c:
    // 0x25739c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x25739cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2573a0:
    // 0x2573a0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2573a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2573a4:
    // 0x2573a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2573a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2573a8:
    // 0x2573a8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2573a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2573ac:
    // 0x2573ac: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2573acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2573b0:
    // 0x2573b0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2573b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2573b4:
    // 0x2573b4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2573b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2573b8:
    // 0x2573b8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2573b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2573bc:
    // 0x2573bc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2573bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2573c0:
    // 0x2573c0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2573c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2573c4:
    // 0x2573c4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2573c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2573c8:
    // 0x2573c8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2573c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2573cc:
    // 0x2573cc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2573ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2573d0:
    // 0x2573d0: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x2573d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_2573d4:
    // 0x2573d4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2573d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2573d8:
    // 0x2573d8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2573d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2573dc:
    // 0x2573dc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2573dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2573e0:
    // 0x2573e0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2573e0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2573e4:
    // 0x2573e4: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x2573e4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_2573e8:
    // 0x2573e8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2573e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2573ec:
    // 0x2573ec: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2573ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2573f0:
    // 0x2573f0: 0xafa500c4  sw          $a1, 0xC4($sp)
    ctx->pc = 0x2573f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 5));
label_2573f4:
    // 0x2573f4: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x2573f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_2573f8:
    // 0x2573f8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2573f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_2573fc:
    // 0x2573fc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2573fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_257400:
    // 0x257400: 0x122000a5  beqz        $s1, . + 4 + (0xA5 << 2)
label_257404:
    if (ctx->pc == 0x257404u) {
        ctx->pc = 0x257404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257400u;
        // 0x257404: 0x7fa40060  sq          $a0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257408u;
        goto label_257408;
    }
    ctx->pc = 0x257400u;
    {
        const bool branch_taken_0x257400 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x257404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257400u;
        // 0x257404: 0x7fa40060  sq          $a0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257400) {
            ctx->pc = 0x257698u;
            goto label_257698;
        }
    }
    ctx->pc = 0x257408u;
label_257408:
    // 0x257408: 0x26300090  addiu       $s0, $s1, 0x90
    ctx->pc = 0x257408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_25740c:
    // 0x25740c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25740cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_257410:
    // 0x257410: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x257410u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_257414:
    // 0x257414: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x257414u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_257418:
    // 0x257418: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x257418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_25741c:
    // 0x25741c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x25741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_257420:
    // 0x257420: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x257420u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_257424:
    // 0x257424: 0xc088ed2  jal         func_223B48
label_257428:
    if (ctx->pc == 0x257428u) {
        ctx->pc = 0x257428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257424u;
        // 0x257428: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25742Cu;
        goto label_25742c;
    }
    ctx->pc = 0x257424u;
    SET_GPR_U32(ctx, 31, 0x25742Cu);
    ctx->pc = 0x257428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257424u;
    // 0x257428: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x257424u, 0x25742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25742Cu;
label_25742c:
    // 0x25742c: 0x54400072  bnel        $v0, $zero, . + 4 + (0x72 << 2)
label_257430:
    if (ctx->pc == 0x257430u) {
        ctx->pc = 0x257430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25742Cu;
        // 0x257430: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257434u;
        goto label_257434;
    }
    ctx->pc = 0x25742Cu;
    {
        const bool branch_taken_0x25742c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25742c) {
            ctx->pc = 0x257430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25742Cu;
            // 0x257430: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2575F8u;
            goto label_2575f8;
        }
    }
    ctx->pc = 0x257434u;
label_257434:
    // 0x257434: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x257434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_257438:
    // 0x257438: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_25743c:
    if (ctx->pc == 0x25743Cu) {
        ctx->pc = 0x25743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257438u;
        // 0x25743c: 0x8fc42c04  lw          $a0, 0x2C04($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257440u;
        goto label_257440;
    }
    ctx->pc = 0x257438u;
    {
        const bool branch_taken_0x257438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257438u;
        // 0x25743c: 0x8fc42c04  lw          $a0, 0x2C04($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257438) {
            ctx->pc = 0x2575D8u;
            goto label_2575d8;
        }
    }
    ctx->pc = 0x257440u;
label_257440:
    // 0x257440: 0xc0e44cc  jal         func_391330
label_257444:
    if (ctx->pc == 0x257444u) {
        ctx->pc = 0x257444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257440u;
        // 0x257444: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257448u;
        goto label_257448;
    }
    ctx->pc = 0x257440u;
    SET_GPR_U32(ctx, 31, 0x257448u);
    ctx->pc = 0x257444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257440u;
    // 0x257444: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x257440u, 0x257448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257448u;
label_257448:
    // 0x257448: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x257448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25744c:
    // 0x25744c: 0x82030087  lb          $v1, 0x87($s0)
    ctx->pc = 0x25744cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 135)));
label_257450:
    // 0x257450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257454:
    // 0x257454: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_257458:
    if (ctx->pc == 0x257458u) {
        ctx->pc = 0x257458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257454u;
        // 0x257458: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25745Cu;
        goto label_25745c;
    }
    ctx->pc = 0x257454u;
    {
        const bool branch_taken_0x257454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x257458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257454u;
        // 0x257458: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257454) {
            ctx->pc = 0x257464u;
            goto label_257464;
        }
    }
    ctx->pc = 0x25745Cu;
label_25745c:
    // 0x25745c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_257460:
    if (ctx->pc == 0x257460u) {
        ctx->pc = 0x257460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25745Cu;
        // 0x257460: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257464u;
        goto label_257464;
    }
    ctx->pc = 0x25745Cu;
    {
        const bool branch_taken_0x25745c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25745c) {
            ctx->pc = 0x257460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25745Cu;
            // 0x257460: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257488u;
            goto label_257488;
        }
    }
    ctx->pc = 0x257464u;
label_257464:
    // 0x257464: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x257464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_257468:
    // 0x257468: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x257468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25746c:
    // 0x25746c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x25746cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_257470:
    // 0x257470: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x257470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_257474:
    // 0x257474: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x257474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_257478:
    // 0x257478: 0x60f809  jalr        $v1
label_25747c:
    if (ctx->pc == 0x25747Cu) {
        ctx->pc = 0x25747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257478u;
        // 0x25747c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257480u;
        goto label_257480;
    }
    ctx->pc = 0x257478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x257480u);
        ctx->pc = 0x25747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257478u;
        // 0x25747c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257478u, 0x257480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x257480u;
label_257480:
    // 0x257480: 0x10000032  b           . + 4 + (0x32 << 2)
label_257484:
    if (ctx->pc == 0x257484u) {
        ctx->pc = 0x257484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257480u;
        // 0x257484: 0x86a30002  lh          $v1, 0x2($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257488u;
        goto label_257488;
    }
    ctx->pc = 0x257480u;
    {
        const bool branch_taken_0x257480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257480u;
        // 0x257484: 0x86a30002  lh          $v1, 0x2($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257480) {
            ctx->pc = 0x25754Cu;
            goto label_25754c;
        }
    }
    ctx->pc = 0x257488u;
label_257488:
    // 0x257488: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x257488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_25748c:
    // 0x25748c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x25748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_257490:
    // 0x257490: 0x40f809  jalr        $v0
label_257494:
    if (ctx->pc == 0x257494u) {
        ctx->pc = 0x257494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257490u;
        // 0x257494: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257498u;
        goto label_257498;
    }
    ctx->pc = 0x257490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x257498u);
        ctx->pc = 0x257494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257490u;
        // 0x257494: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257490u, 0x257498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x257498u;
label_257498:
    // 0x257498: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x257498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_25749c:
    // 0x25749c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25749cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2574a0:
    // 0x2574a0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2574a4:
    if (ctx->pc == 0x2574A4u) {
        ctx->pc = 0x2574A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574A0u;
        // 0x2574a4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2574A8u;
        goto label_2574a8;
    }
    ctx->pc = 0x2574A0u;
    {
        const bool branch_taken_0x2574a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2574A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574A0u;
        // 0x2574a4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2574a0) {
            ctx->pc = 0x257510u;
            goto label_257510;
        }
    }
    ctx->pc = 0x2574A8u;
label_2574a8:
    // 0x2574a8: 0x82030086  lb          $v1, 0x86($s0)
    ctx->pc = 0x2574a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 134)));
label_2574ac:
    // 0x2574ac: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_2574b0:
    if (ctx->pc == 0x2574B0u) {
        ctx->pc = 0x2574B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574ACu;
        // 0x2574b0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2574B4u;
        goto label_2574b4;
    }
    ctx->pc = 0x2574ACu;
    {
        const bool branch_taken_0x2574ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2574B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574ACu;
        // 0x2574b0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2574ac) {
            ctx->pc = 0x257510u;
            goto label_257510;
        }
    }
    ctx->pc = 0x2574B4u;
label_2574b4:
    // 0x2574b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2574b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2574b8:
    // 0x2574b8: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x2574b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2574bc:
    // 0x2574bc: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x2574bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_2574c0:
    // 0x2574c0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2574c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2574c4:
    // 0x2574c4: 0x40f809  jalr        $v0
label_2574c8:
    if (ctx->pc == 0x2574C8u) {
        ctx->pc = 0x2574C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574C4u;
        // 0x2574c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2574CCu;
        goto label_2574cc;
    }
    ctx->pc = 0x2574C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2574CCu);
        ctx->pc = 0x2574C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574C4u;
        // 0x2574c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2574C4u, 0x2574CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2574CCu;
label_2574cc:
    // 0x2574cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2574ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2574d0:
    // 0x2574d0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2574d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2574d4:
    // 0x2574d4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2574d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2574d8:
    // 0x2574d8: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x2574d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_2574dc:
    // 0x2574dc: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2574dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2574e0:
    // 0x2574e0: 0x40f809  jalr        $v0
label_2574e4:
    if (ctx->pc == 0x2574E4u) {
        ctx->pc = 0x2574E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574E0u;
        // 0x2574e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2574E8u;
        goto label_2574e8;
    }
    ctx->pc = 0x2574E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2574E8u);
        ctx->pc = 0x2574E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574E0u;
        // 0x2574e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2574E0u, 0x2574E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2574E8u;
label_2574e8:
    // 0x2574e8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2574e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2574ec:
    // 0x2574ec: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2574ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2574f0:
    // 0x2574f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2574f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2574f4:
    // 0x2574f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2574f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2574f8:
    // 0x2574f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2574f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2574fc:
    // 0x2574fc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2574fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_257500:
    // 0x257500: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x257500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_257504:
    // 0x257504: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x257504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_257508:
    // 0x257508: 0x1000000f  b           . + 4 + (0xF << 2)
label_25750c:
    if (ctx->pc == 0x25750Cu) {
        ctx->pc = 0x25750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257508u;
        // 0x25750c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x257510u;
        goto label_257510;
    }
    ctx->pc = 0x257508u;
    {
        const bool branch_taken_0x257508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257508u;
        // 0x25750c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257508) {
            ctx->pc = 0x257548u;
            goto label_257548;
        }
    }
    ctx->pc = 0x257510u;
label_257510:
    // 0x257510: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x257510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_257514:
    // 0x257514: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x257514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_257518:
    // 0x257518: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x257518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_25751c:
    // 0x25751c: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x25751cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_257520:
    // 0x257520: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x257520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_257524:
    // 0x257524: 0x40f809  jalr        $v0
label_257528:
    if (ctx->pc == 0x257528u) {
        ctx->pc = 0x257528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257524u;
        // 0x257528: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25752Cu;
        goto label_25752c;
    }
    ctx->pc = 0x257524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25752Cu);
        ctx->pc = 0x257528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257524u;
        // 0x257528: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257524u, 0x25752Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25752Cu;
label_25752c:
    // 0x25752c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x25752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257530:
    // 0x257530: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x257530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_257534:
    // 0x257534: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x257534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_257538:
    // 0x257538: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x257538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25753c:
    // 0x25753c: 0x0  nop
    ctx->pc = 0x25753cu;
    // NOP
label_257540:
    // 0x257540: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x257540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_257544:
    // 0x257544: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x257544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_257548:
    // 0x257548: 0x86a30002  lh          $v1, 0x2($s5)
    ctx->pc = 0x257548u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_25754c:
    // 0x25754c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x25754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_257550:
    // 0x257550: 0x24454b00  addiu       $a1, $v0, 0x4B00
    ctx->pc = 0x257550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_257554:
    // 0x257554: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x257554u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_257558:
    // 0x257558: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x257558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_25755c:
    // 0x25755c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25755cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_257560:
    // 0x257560: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x257560u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_257564:
    // 0x257564: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x257564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_257568:
    // 0x257568: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x257568u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_25756c:
    // 0x25756c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x25756cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257570:
    // 0x257570: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x257570u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_257574:
    // 0x257574: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x257574u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_257578:
    // 0x257578: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x257578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_25757c:
    // 0x25757c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x25757cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257580:
    // 0x257580: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x257580u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_257584:
    // 0x257584: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x257584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257588:
    // 0x257588: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x257588u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25758c:
    // 0x25758c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x25758cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257590:
    // 0x257590: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x257590u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257594:
    // 0x257594: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x257594u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_257598:
    // 0x257598: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x257598u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_25759c:
    // 0x25759c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x25759cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2575a0:
    // 0x2575a0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2575a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2575a4:
    // 0x2575a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2575a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_2575a8:
    // 0x2575a8: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x2575a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2575ac:
    // 0x2575ac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2575acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2575b0:
    // 0x2575b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2575b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2575b4:
    // 0x2575b4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2575b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2575b8:
    // 0x2575b8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2575b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2575bc:
    // 0x2575bc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2575bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2575c0:
    // 0x2575c0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2575c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2575c4:
    // 0x2575c4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2575c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2575c8:
    // 0x2575c8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2575c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2575cc:
    // 0x2575cc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2575ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2575d0:
    // 0x2575d0: 0x10000068  b           . + 4 + (0x68 << 2)
label_2575d4:
    if (ctx->pc == 0x2575D4u) {
        ctx->pc = 0x2575D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575D0u;
        // 0x2575d4: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2575D8u;
        goto label_2575d8;
    }
    ctx->pc = 0x2575D0u;
    {
        const bool branch_taken_0x2575d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2575D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575D0u;
        // 0x2575d4: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575d0) {
            ctx->pc = 0x257774u;
            goto label_257774;
        }
    }
    ctx->pc = 0x2575D8u;
label_2575d8:
    // 0x2575d8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2575d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2575dc:
    // 0x2575dc: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x2575dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_2575e0:
    // 0x2575e0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2575e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2575e4:
    // 0x2575e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2575e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2575e8:
    // 0x2575e8: 0x0  nop
    ctx->pc = 0x2575e8u;
    // NOP
label_2575ec:
    // 0x2575ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2575ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2575f0:
    // 0x2575f0: 0x10000060  b           . + 4 + (0x60 << 2)
label_2575f4:
    if (ctx->pc == 0x2575F4u) {
        ctx->pc = 0x2575F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575F0u;
        // 0x2575f4: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2575F8u;
        goto label_2575f8;
    }
    ctx->pc = 0x2575F0u;
    {
        const bool branch_taken_0x2575f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2575F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2575F0u;
        // 0x2575f4: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2575f0) {
            ctx->pc = 0x257774u;
            goto label_257774;
        }
    }
    ctx->pc = 0x2575F8u;
label_2575f8:
    // 0x2575f8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2575f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2575fc:
    // 0x2575fc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2575fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_257600:
    // 0x257600: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x257600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_257604:
    // 0x257604: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x257604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_257608:
    // 0x257608: 0x40f809  jalr        $v0
label_25760c:
    if (ctx->pc == 0x25760Cu) {
        ctx->pc = 0x25760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257608u;
        // 0x25760c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257610u;
        goto label_257610;
    }
    ctx->pc = 0x257608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x257610u);
        ctx->pc = 0x25760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257608u;
        // 0x25760c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257608u, 0x257610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x257610u;
label_257610:
    // 0x257610: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x257610u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_257614:
    // 0x257614: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x257614u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_257618:
    // 0x257618: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x257618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_25761c:
    // 0x25761c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x25761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_257620:
    // 0x257620: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x257620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_257624:
    // 0x257624: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x257624u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_257628:
    // 0x257628: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x257628u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_25762c:
    // 0x25762c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x25762cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257630:
    // 0x257630: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x257630u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_257634:
    // 0x257634: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x257634u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_257638:
    // 0x257638: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x257638u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_25763c:
    // 0x25763c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x25763cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257640:
    // 0x257640: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x257640u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_257644:
    // 0x257644: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x257644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257648:
    // 0x257648: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x257648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25764c:
    // 0x25764c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x25764cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257650:
    // 0x257650: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x257650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257654:
    // 0x257654: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x257654u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_257658:
    // 0x257658: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x257658u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_25765c:
    // 0x25765c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x25765cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257660:
    // 0x257660: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x257660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257664:
    // 0x257664: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x257664u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_257668:
    // 0x257668: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x257668u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25766c:
    // 0x25766c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x25766cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_257670:
    // 0x257670: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x257670u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_257674:
    // 0x257674: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x257674u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257678:
    // 0x257678: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x257678u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_25767c:
    // 0x25767c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x25767cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_257680:
    // 0x257680: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x257680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_257684:
    // 0x257684: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x257684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_257688:
    // 0x257688: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x257688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_25768c:
    // 0x25768c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x25768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_257690:
    // 0x257690: 0x10000038  b           . + 4 + (0x38 << 2)
label_257694:
    if (ctx->pc == 0x257694u) {
        ctx->pc = 0x257694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257690u;
        // 0x257694: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257698u;
        goto label_257698;
    }
    ctx->pc = 0x257690u;
    {
        const bool branch_taken_0x257690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257690u;
        // 0x257694: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257690) {
            ctx->pc = 0x257774u;
            goto label_257774;
        }
    }
    ctx->pc = 0x257698u;
label_257698:
    // 0x257698: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x257698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25769c:
    // 0x25769c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2576a0:
    // 0x2576a0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2576a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2576a4:
    // 0x2576a4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2576a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2576a8:
    // 0x2576a8: 0x60f809  jalr        $v1
label_2576ac:
    if (ctx->pc == 0x2576ACu) {
        ctx->pc = 0x2576ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576A8u;
        // 0x2576ac: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576B0u;
        goto label_2576b0;
    }
    ctx->pc = 0x2576A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2576B0u);
        ctx->pc = 0x2576ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576A8u;
        // 0x2576ac: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2576A8u, 0x2576B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2576B0u;
label_2576b0:
    // 0x2576b0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2576b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2576b4:
    // 0x2576b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2576b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2576b8:
    // 0x2576b8: 0xc0e57ce  jal         func_395F38
label_2576bc:
    if (ctx->pc == 0x2576BCu) {
        ctx->pc = 0x2576BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576B8u;
        // 0x2576bc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576C0u;
        goto label_2576c0;
    }
    ctx->pc = 0x2576B8u;
    SET_GPR_U32(ctx, 31, 0x2576C0u);
    ctx->pc = 0x2576BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2576B8u;
    // 0x2576bc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2576B8u, 0x2576C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576C0u;
label_2576c0:
    // 0x2576c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2576c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2576c4:
    // 0x2576c4: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
label_2576c8:
    if (ctx->pc == 0x2576C8u) {
        ctx->pc = 0x2576C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576C4u;
        // 0x2576c8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576CCu;
        goto label_2576cc;
    }
    ctx->pc = 0x2576C4u;
    {
        const bool branch_taken_0x2576c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2576C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576C4u;
        // 0x2576c8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576c4) {
            ctx->pc = 0x257774u;
            goto label_257774;
        }
    }
    ctx->pc = 0x2576CCu;
label_2576cc:
    // 0x2576cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2576ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2576d0:
    // 0x2576d0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2576d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2576d4:
    // 0x2576d4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2576d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2576d8:
    // 0x2576d8: 0x60f809  jalr        $v1
label_2576dc:
    if (ctx->pc == 0x2576DCu) {
        ctx->pc = 0x2576DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576D8u;
        // 0x2576dc: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576E0u;
        goto label_2576e0;
    }
    ctx->pc = 0x2576D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2576E0u);
        ctx->pc = 0x2576DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576D8u;
        // 0x2576dc: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2576D8u, 0x2576E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2576E0u;
label_2576e0:
    // 0x2576e0: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x2576e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_2576e4:
    // 0x2576e4: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2576e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2576e8:
    // 0x2576e8: 0xc0e44cc  jal         func_391330
label_2576ec:
    if (ctx->pc == 0x2576ECu) {
        ctx->pc = 0x2576ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576E8u;
        // 0x2576ec: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576F0u;
        goto label_2576f0;
    }
    ctx->pc = 0x2576E8u;
    SET_GPR_U32(ctx, 31, 0x2576F0u);
    ctx->pc = 0x2576ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2576E8u;
    // 0x2576ec: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2576E8u, 0x2576F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576F0u;
label_2576f0:
    // 0x2576f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2576f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2576f4:
    // 0x2576f4: 0xc0e45f6  jal         func_3917D8
label_2576f8:
    if (ctx->pc == 0x2576F8u) {
        ctx->pc = 0x2576F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2576F4u;
        // 0x2576f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2576FCu;
        goto label_2576fc;
    }
    ctx->pc = 0x2576F4u;
    SET_GPR_U32(ctx, 31, 0x2576FCu);
    ctx->pc = 0x2576F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2576F4u;
    // 0x2576f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3917D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3917D8u, 0x2576F4u, 0x2576FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576FCu;
label_2576fc:
    // 0x2576fc: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x2576fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_257700:
    // 0x257700: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x257700u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_257704:
    // 0x257704: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x257704u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_257708:
    // 0x257708: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x257708u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_25770c:
    // 0x25770c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x25770cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257710:
    // 0x257710: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x257710u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_257714:
    // 0x257714: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x257714u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_257718:
    // 0x257718: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x257718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_25771c:
    // 0x25771c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x25771cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257720:
    // 0x257720: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x257720u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_257724:
    // 0x257724: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x257724u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257728:
    // 0x257728: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x257728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25772c:
    // 0x25772c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x25772cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257730:
    // 0x257730: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x257730u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257734:
    // 0x257734: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x257734u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_257738:
    // 0x257738: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x257738u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_25773c:
    // 0x25773c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x25773cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257740:
    // 0x257740: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x257740u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257744:
    // 0x257744: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x257744u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_257748:
    // 0x257748: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x257748u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25774c:
    // 0x25774c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x25774cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_257750:
    // 0x257750: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x257750u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_257754:
    // 0x257754: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x257754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257758:
    // 0x257758: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x257758u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_25775c:
    // 0x25775c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x25775cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_257760:
    // 0x257760: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x257760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_257764:
    // 0x257764: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x257764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_257768:
    // 0x257768: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x257768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_25776c:
    // 0x25776c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x25776cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_257770:
    // 0x257770: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x257770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
label_257774:
    // 0x257774: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x257774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_257778:
    // 0x257778: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x257778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_25777c:
    // 0x25777c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x25777cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_257780:
    // 0x257780: 0x84650002  lh          $a1, 0x2($v1)
    ctx->pc = 0x257780u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_257784:
    // 0x257784: 0x24834b00  addiu       $v1, $a0, 0x4B00
    ctx->pc = 0x257784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_257788:
    // 0x257788: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x257788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_25778c:
    // 0x25778c: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x25778cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_257790:
    // 0x257790: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x257790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_257794:
    // 0x257794: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x257794u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_257798:
    // 0x257798: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x257798u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_25779c:
    // 0x25779c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x25779cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2577a0:
    // 0x2577a0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2577a0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2577a4:
    // 0x2577a4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2577a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2577a8:
    // 0x2577a8: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2577a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_2577ac:
    // 0x2577ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2577acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2577b0:
    // 0x2577b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2577b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2577b4:
    // 0x2577b4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2577b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2577b8:
    // 0x2577b8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2577b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2577bc:
    // 0x2577bc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2577bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2577c0:
    // 0x2577c0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2577c0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_2577c4:
    // 0x2577c4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2577c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2577c8:
    // 0x2577c8: 0x4bc1006c  vsub.xyz    $vf1, $vf0, $vf1
    ctx->pc = 0x2577c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2577cc:
    // 0x2577cc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2577ccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2577d0:
    // 0x2577d0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2577d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2577d4:
    // 0x2577d4: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x2577d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2577d8:
    // 0x2577d8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2577d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2577dc:
    // 0x2577dc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2577dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2577e0:
    // 0x2577e0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2577e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2577e4:
    // 0x2577e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2577e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2577e8:
    // 0x2577e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2577e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2577ec:
    // 0x2577ec: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2577ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2577f0:
    // 0x2577f0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2577f0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2577f4:
    // 0x2577f4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2577f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2577f8:
    // 0x2577f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2577f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2577fc:
    // 0x2577fc: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2577fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257800:
    // 0x257800: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x257800u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_257804:
    // 0x257804: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x257804u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257808:
    // 0x257808: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x257808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25780c:
    // 0x25780c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x25780cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257810:
    // 0x257810: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x257810u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257814:
    // 0x257814: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x257814u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_257818:
    // 0x257818: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x257818u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_25781c:
    // 0x25781c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x25781cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257820:
    // 0x257820: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x257820u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257824:
    // 0x257824: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x257824u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_257828:
    // 0x257828: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x257828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_25782c:
    // 0x25782c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x25782cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257830:
    // 0x257830: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x257830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257834:
    // 0x257834: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x257834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257838:
    // 0x257838: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x257838u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_25783c:
    // 0x25783c: 0x4a0003bf  vwaitq
    ctx->pc = 0x25783cu;
    // VWAITQ (Q already resolved in this runtime)
label_257840:
    // 0x257840: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x257840u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_257844:
    // 0x257844: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x257844u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_257848:
    // 0x257848: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x257848u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
label_25784c:
    // 0x25784c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x25784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_257850:
    // 0x257850: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x257850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_257854:
    // 0x257854: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x257854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257858:
    // 0x257858: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x257858u;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
label_25785c:
    // 0x25785c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25785cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_257860:
    // 0x257860: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x257860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_257864:
    // 0x257864: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x257864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257868:
    // 0x257868: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x257868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_25786c:
    // 0x25786c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_257870:
    if (ctx->pc == 0x257870u) {
        ctx->pc = 0x257870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25786Cu;
        // 0x257870: 0x7fa40050  sq          $a0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257874u;
        goto label_257874;
    }
    ctx->pc = 0x25786Cu;
    {
        const bool branch_taken_0x25786c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25786Cu;
        // 0x257870: 0x7fa40050  sq          $a0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25786c) {
            ctx->pc = 0x2578A4u;
            goto label_2578a4;
        }
    }
    ctx->pc = 0x257874u;
label_257874:
    // 0x257874: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x257874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_257878:
    // 0x257878: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x257878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_25787c:
    // 0x25787c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25787cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_257880:
    // 0x257880: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x257880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257884:
    // 0x257884: 0x0  nop
    ctx->pc = 0x257884u;
    // NOP
label_257888:
    // 0x257888: 0x0  nop
    ctx->pc = 0x257888u;
    // NOP
label_25788c:
    // 0x25788c: 0x46000004  c1          0x4
    ctx->pc = 0x25788cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_257890:
    // 0x257890: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x257890u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_257894:
    // 0x257894: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_257898:
    if (ctx->pc == 0x257898u) {
        ctx->pc = 0x257898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257894u;
        // 0x257898: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25789Cu;
        goto label_25789c;
    }
    ctx->pc = 0x257894u;
    {
        const bool branch_taken_0x257894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257894u;
        // 0x257898: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257894) {
            ctx->pc = 0x2578A0u;
            goto label_2578a0;
        }
    }
    ctx->pc = 0x25789Cu;
label_25789c:
    // 0x25789c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25789cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2578a0:
    // 0x2578a0: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x2578a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2578a4:
    // 0x2578a4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2578a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2578a8:
    // 0x2578a8: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x2578a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_2578ac:
    // 0x2578ac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2578acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2578b0:
    // 0x2578b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2578b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2578b4:
    // 0x2578b4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2578b4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2578b8:
    // 0x2578b8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2578b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2578bc:
    // 0x2578bc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2578bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2578c0:
    // 0x2578c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2578c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2578c4:
    // 0x2578c4: 0x0  nop
    ctx->pc = 0x2578c4u;
    // NOP
label_2578c8:
    // 0x2578c8: 0x0  nop
    ctx->pc = 0x2578c8u;
    // NOP
label_2578cc:
    // 0x2578cc: 0x4616ad43  div.s       $f21, $f21, $f22
    ctx->pc = 0x2578ccu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
label_2578d0:
    // 0x2578d0: 0x450000c8  bc1f        . + 4 + (0xC8 << 2)
label_2578d4:
    if (ctx->pc == 0x2578D4u) {
        ctx->pc = 0x2578D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578D0u;
        // 0x2578d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2578D8u;
        goto label_2578d8;
    }
    ctx->pc = 0x2578D0u;
    {
        const bool branch_taken_0x2578d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2578D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578D0u;
        // 0x2578d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578d0) {
            ctx->pc = 0x257BF4u;
            goto label_257bf4;
        }
    }
    ctx->pc = 0x2578D8u;
label_2578d8:
    // 0x2578d8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2578d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2578dc:
    // 0x2578dc: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x2578dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
label_2578e0:
    // 0x2578e0: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x2578e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_2578e4:
    // 0x2578e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2578e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2578e8:
    // 0x2578e8: 0x24421720  addiu       $v0, $v0, 0x1720
    ctx->pc = 0x2578e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5920));
label_2578ec:
    // 0x2578ec: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2578ecu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2578f0:
    // 0x2578f0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2578f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2578f4:
    // 0x2578f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2578f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2578f8:
    // 0x2578f8: 0x0  nop
    ctx->pc = 0x2578f8u;
    // NOP
label_2578fc:
    // 0x2578fc: 0x0  nop
    ctx->pc = 0x2578fcu;
    // NOP
label_257900:
    // 0x257900: 0x46140084  c1          0x140084
    ctx->pc = 0x257900u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_257904:
    // 0x257904: 0x0  nop
    ctx->pc = 0x257904u;
    // NOP
label_257908:
    // 0x257908: 0x0  nop
    ctx->pc = 0x257908u;
    // NOP
label_25790c:
    // 0x25790c: 0x46151043  div.s       $f1, $f2, $f21
    ctx->pc = 0x25790cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[21]); }
label_257910:
    // 0x257910: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_257914:
    if (ctx->pc == 0x257914u) {
        ctx->pc = 0x257914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257910u;
        // 0x257914: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257918u;
        goto label_257918;
    }
    ctx->pc = 0x257910u;
    {
        const bool branch_taken_0x257910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257910u;
        // 0x257914: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257910) {
            ctx->pc = 0x257928u;
            goto label_257928;
        }
    }
    ctx->pc = 0x257918u;
label_257918:
    // 0x257918: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x257918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_25791c:
    // 0x25791c: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x25791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_257920:
    // 0x257920: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x257920u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_257924:
    // 0x257924: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x257924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_257928:
    // 0x257928: 0x7a440000  lq          $a0, 0x0($s2)
    ctx->pc = 0x257928u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_25792c:
    // 0x25792c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x25792cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_257930:
    // 0x257930: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x257930u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_257934:
    // 0x257934: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x257934u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_257938:
    // 0x257938: 0x3c0140fa  lui         $at, 0x40FA
    ctx->pc = 0x257938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16634 << 16));
label_25793c:
    // 0x25793c: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x25793cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_257940:
    // 0x257940: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_257944:
    // 0x257944: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x257944u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_257948:
    // 0x257948: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x257948u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_25794c:
    // 0x25794c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x25794cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_257950:
    // 0x257950: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x257950u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_257954:
    // 0x257954: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x257954u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
label_257958:
    // 0x257958: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x257958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_25795c:
    // 0x25795c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25795cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_257960:
    // 0x257960: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x257960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_257964:
    // 0x257964: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x257964u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_257968:
    // 0x257968: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x257968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_25796c:
    // 0x25796c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25796cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_257970:
    // 0x257970: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x257970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_257974:
    // 0x257974: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x257974u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_257978:
    // 0x257978: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x257978u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_25797c:
    // 0x25797c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x25797cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_257980:
    // 0x257980: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x257980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_257984:
    // 0x257984: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x257984u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_257988:
    // 0x257988: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x257988u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_25798c:
    // 0x25798c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x25798cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257990:
    // 0x257990: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x257990u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_257994:
    // 0x257994: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x257994u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_257998:
    // 0x257998: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x257998u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
label_25799c:
    // 0x25799c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x25799cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_2579a0:
    // 0x2579a0: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x2579a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2579a4:
    // 0x2579a4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2579a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2579a8:
    // 0x2579a8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2579a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2579ac:
    // 0x2579ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2579acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2579b0:
    // 0x2579b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2579b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2579b4:
    // 0x2579b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2579b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2579b8:
    // 0x2579b8: 0x144000bb  bnez        $v0, . + 4 + (0xBB << 2)
label_2579bc:
    if (ctx->pc == 0x2579BCu) {
        ctx->pc = 0x2579BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579B8u;
        // 0x2579bc: 0x7fa40070  sq          $a0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2579C0u;
        goto label_2579c0;
    }
    ctx->pc = 0x2579B8u;
    {
        const bool branch_taken_0x2579b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2579BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579B8u;
        // 0x2579bc: 0x7fa40070  sq          $a0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579b8) {
            ctx->pc = 0x257CA8u;
            goto label_257ca8;
        }
    }
    ctx->pc = 0x2579C0u;
label_2579c0:
    // 0x2579c0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2579c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2579c4:
    // 0x2579c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2579c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2579c8:
    // 0x2579c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2579c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2579cc:
    // 0x2579cc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2579d0:
    if (ctx->pc == 0x2579D0u) {
        ctx->pc = 0x2579D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579CCu;
        // 0x2579d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2579D4u;
        goto label_2579d4;
    }
    ctx->pc = 0x2579CCu;
    {
        const bool branch_taken_0x2579cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2579D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579CCu;
        // 0x2579d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579cc) {
            ctx->pc = 0x2579ECu;
            goto label_2579ec;
        }
    }
    ctx->pc = 0x2579D4u;
label_2579d4:
    // 0x2579d4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2579d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_2579d8:
    // 0x2579d8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2579d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2579dc:
    // 0x2579dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2579dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2579e0:
    // 0x2579e0: 0xc44048b4  lwc1        $f0, 0x48B4($v0)
    ctx->pc = 0x2579e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2579e4:
    // 0x2579e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2579e8:
    if (ctx->pc == 0x2579E8u) {
        ctx->pc = 0x2579E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579E4u;
        // 0x2579e8: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2579ECu;
        goto label_2579ec;
    }
    ctx->pc = 0x2579E4u;
    {
        const bool branch_taken_0x2579e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2579E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579E4u;
        // 0x2579e8: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579e4) {
            ctx->pc = 0x2579F0u;
            goto label_2579f0;
        }
    }
    ctx->pc = 0x2579ECu;
label_2579ec:
    // 0x2579ec: 0xc45548b4  lwc1        $f21, 0x48B4($v0)
    ctx->pc = 0x2579ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2579f0:
    // 0x2579f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2579f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2579f4:
    // 0x2579f4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2579f8:
    if (ctx->pc == 0x2579F8u) {
        ctx->pc = 0x2579F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579F4u;
        // 0x2579f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2579FCu;
        goto label_2579fc;
    }
    ctx->pc = 0x2579F4u;
    {
        const bool branch_taken_0x2579f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2579F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579F4u;
        // 0x2579f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579f4) {
            ctx->pc = 0x257A14u;
            goto label_257a14;
        }
    }
    ctx->pc = 0x2579FCu;
label_2579fc:
    // 0x2579fc: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2579fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_257a00:
    // 0x257a00: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x257a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_257a04:
    // 0x257a04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x257a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_257a08:
    // 0x257a08: 0xc44048b0  lwc1        $f0, 0x48B0($v0)
    ctx->pc = 0x257a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257a0c:
    // 0x257a0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_257a10:
    if (ctx->pc == 0x257A10u) {
        ctx->pc = 0x257A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A0Cu;
        // 0x257a10: 0x460105c2  mul.s       $f23, $f0, $f1 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x257A14u;
        goto label_257a14;
    }
    ctx->pc = 0x257A0Cu;
    {
        const bool branch_taken_0x257a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A0Cu;
        // 0x257a10: 0x460105c2  mul.s       $f23, $f0, $f1 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a0c) {
            ctx->pc = 0x257A18u;
            goto label_257a18;
        }
    }
    ctx->pc = 0x257A14u;
label_257a14:
    // 0x257a14: 0xc45748b0  lwc1        $f23, 0x48B0($v0)
    ctx->pc = 0x257a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_257a18:
    // 0x257a18: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x257a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_257a1c:
    // 0x257a1c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x257a1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_257a20:
    // 0x257a20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x257a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_257a24:
    // 0x257a24: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x257a24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_257a28:
    // 0x257a28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x257a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_257a2c:
    // 0x257a2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x257a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_257a30:
    // 0x257a30: 0x2631b898  addiu       $s1, $s1, -0x4768
    ctx->pc = 0x257a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949016));
label_257a34:
    // 0x257a34: 0x46141502  mul.s       $f20, $f2, $f20
    ctx->pc = 0x257a34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_257a38:
    // 0x257a38: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x257a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_257a3c:
    // 0x257a3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x257a3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_257a40:
    // 0x257a40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_257a44:
    // 0x257a44: 0x4601a529  min.s       $f20, $f20, $f1
    ctx->pc = 0x257a44u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[1]);
label_257a48:
    // 0x257a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_257a4c:
    // 0x257a4c: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x257a4cu;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
label_257a50:
    // 0x257a50: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x257a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_257a54:
    // 0x257a54: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x257a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_257a58:
    // 0x257a58: 0xc0cd550  jal         func_335540
label_257a5c:
    if (ctx->pc == 0x257A5Cu) {
        ctx->pc = 0x257A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A58u;
        // 0x257a5c: 0x26901740  addiu       $s0, $s4, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257A60u;
        goto label_257a60;
    }
    ctx->pc = 0x257A58u;
    SET_GPR_U32(ctx, 31, 0x257A60u);
    ctx->pc = 0x257A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257A58u;
    // 0x257a5c: 0x26901740  addiu       $s0, $s4, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x257A58u, 0x257A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A60u;
label_257a60:
    // 0x257a60: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x257a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_257a64:
    // 0x257a64: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x257a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_257a68:
    // 0x257a68: 0x46160542  mul.s       $f21, $f0, $f22
    ctx->pc = 0x257a68u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_257a6c:
    // 0x257a6c: 0xc12e310  jal         func_4B8C40
label_257a70:
    if (ctx->pc == 0x257A70u) {
        ctx->pc = 0x257A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A6Cu;
        // 0x257a70: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x257A74u;
        goto label_257a74;
    }
    ctx->pc = 0x257A6Cu;
    SET_GPR_U32(ctx, 31, 0x257A74u);
    ctx->pc = 0x257A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257A6Cu;
    // 0x257a70: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x257A6Cu, 0x257A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A74u;
label_257a74:
    // 0x257a74: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x257a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_257a78:
    // 0x257a78: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x257a78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_257a7c:
    // 0x257a7c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x257a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257a80:
    // 0x257a80: 0xc6831740  lwc1        $f3, 0x1740($s4)
    ctx->pc = 0x257a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_257a84:
    // 0x257a84: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x257a84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_257a88:
    // 0x257a88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x257a88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_257a8c:
    // 0x257a8c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x257a8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_257a90:
    // 0x257a90: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x257a90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_257a94:
    // 0x257a94: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x257a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_257a98:
    // 0x257a98: 0xc12e29c  jal         func_4B8A70
label_257a9c:
    if (ctx->pc == 0x257A9Cu) {
        ctx->pc = 0x257A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A98u;
        // 0x257a9c: 0xe7a30060  swc1        $f3, 0x60($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x257AA0u;
        goto label_257aa0;
    }
    ctx->pc = 0x257A98u;
    SET_GPR_U32(ctx, 31, 0x257AA0u);
    ctx->pc = 0x257A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257A98u;
    // 0x257a9c: 0xe7a30060  swc1        $f3, 0x60($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x257A98u, 0x257AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257AA0u;
label_257aa0:
    // 0x257aa0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x257aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_257aa4:
    // 0x257aa4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x257aa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_257aa8:
    // 0x257aa8: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x257aa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_257aac:
    // 0x257aac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x257aacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_257ab0:
    // 0x257ab0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x257ab0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_257ab4:
    // 0x257ab4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x257ab4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257ab8:
    // 0x257ab8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x257ab8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_257abc:
    // 0x257abc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x257abcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_257ac0:
    // 0x257ac0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x257ac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257ac4:
    // 0x257ac4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x257ac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257ac8:
    // 0x257ac8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x257ac8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_257acc:
    // 0x257acc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x257accu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257ad0:
    // 0x257ad0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x257ad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_257ad4:
    // 0x257ad4: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x257ad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257ad8:
    // 0x257ad8: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x257ad8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257adc:
    // 0x257adc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x257adcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_257ae0:
    // 0x257ae0: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x257ae0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257ae4:
    // 0x257ae4: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x257ae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257ae8:
    // 0x257ae8: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x257ae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257aec:
    // 0x257aec: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x257aecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_257af0:
    // 0x257af0: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x257af0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
label_257af4:
    // 0x257af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_257af8:
    // 0x257af8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x257af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_257afc:
    // 0x257afc: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x257afcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_257b00:
    // 0x257b00: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x257b00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_257b04:
    // 0x257b04: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x257b04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_257b08:
    // 0x257b08: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x257b08u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_257b0c:
    // 0x257b0c: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x257b0cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257b10:
    // 0x257b10: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x257b10u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_257b14:
    // 0x257b14: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x257b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_257b18:
    // 0x257b18: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x257b18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_257b1c:
    // 0x257b1c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x257b1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257b20:
    // 0x257b20: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x257b20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257b24:
    // 0x257b24: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x257b24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257b28:
    // 0x257b28: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x257b28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_257b2c:
    // 0x257b2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x257b2cu;
    // VWAITQ (Q already resolved in this runtime)
label_257b30:
    // 0x257b30: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x257b30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_257b34:
    // 0x257b34: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x257b34u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_257b38:
    // 0x257b38: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x257b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_257b3c:
    // 0x257b3c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x257b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_257b40:
    // 0x257b40: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x257b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_257b44:
    // 0x257b44: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x257b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_257b48:
    // 0x257b48: 0xc0cd550  jal         func_335540
label_257b4c:
    if (ctx->pc == 0x257B4Cu) {
        ctx->pc = 0x257B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B48u;
        // 0x257b4c: 0x7fa50070  sq          $a1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257B50u;
        goto label_257b50;
    }
    ctx->pc = 0x257B48u;
    SET_GPR_U32(ctx, 31, 0x257B50u);
    ctx->pc = 0x257B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B48u;
    // 0x257b4c: 0x7fa50070  sq          $a1, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335540u, 0x257B48u, 0x257B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B50u;
label_257b50:
    // 0x257b50: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x257b50u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_257b54:
    // 0x257b54: 0x4617a002  mul.s       $f0, $f20, $f23
    ctx->pc = 0x257b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
label_257b58:
    // 0x257b58: 0x46160582  mul.s       $f22, $f0, $f22
    ctx->pc = 0x257b58u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_257b5c:
    // 0x257b5c: 0xc12e310  jal         func_4B8C40
label_257b60:
    if (ctx->pc == 0x257B60u) {
        ctx->pc = 0x257B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B5Cu;
        // 0x257b60: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x257B64u;
        goto label_257b64;
    }
    ctx->pc = 0x257B5Cu;
    SET_GPR_U32(ctx, 31, 0x257B64u);
    ctx->pc = 0x257B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B5Cu;
    // 0x257b60: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x257B5Cu, 0x257B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B64u;
label_257b64:
    // 0x257b64: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x257b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_257b68:
    // 0x257b68: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x257b68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_257b6c:
    // 0x257b6c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x257b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_257b70:
    // 0x257b70: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x257b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_257b74:
    // 0x257b74: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x257b74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_257b78:
    // 0x257b78: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x257b78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_257b7c:
    // 0x257b7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x257b7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_257b80:
    // 0x257b80: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x257b80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_257b84:
    // 0x257b84: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x257b84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_257b88:
    // 0x257b88: 0xc12e29c  jal         func_4B8A70
label_257b8c:
    if (ctx->pc == 0x257B8Cu) {
        ctx->pc = 0x257B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B88u;
        // 0x257b8c: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x257B90u;
        goto label_257b90;
    }
    ctx->pc = 0x257B88u;
    SET_GPR_U32(ctx, 31, 0x257B90u);
    ctx->pc = 0x257B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B88u;
    // 0x257b8c: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x257B88u, 0x257B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B90u;
label_257b90:
    // 0x257b90: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x257b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_257b94:
    // 0x257b94: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x257b94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_257b98:
    // 0x257b98: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x257b98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_257b9c:
    // 0x257b9c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x257b9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_257ba0:
    // 0x257ba0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x257ba0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_257ba4:
    // 0x257ba4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x257ba4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257ba8:
    // 0x257ba8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x257ba8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_257bac:
    // 0x257bac: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x257bacu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_257bb0:
    // 0x257bb0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x257bb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257bb4:
    // 0x257bb4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x257bb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257bb8:
    // 0x257bb8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x257bb8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_257bbc:
    // 0x257bbc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x257bbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257bc0:
    // 0x257bc0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x257bc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_257bc4:
    // 0x257bc4: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x257bc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257bc8:
    // 0x257bc8: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x257bc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257bcc:
    // 0x257bcc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x257bccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_257bd0:
    // 0x257bd0: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x257bd0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_257bd4:
    // 0x257bd4: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x257bd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257bd8:
    // 0x257bd8: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x257bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_257bdc:
    // 0x257bdc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x257bdcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_257be0:
    // 0x257be0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x257be0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_257be4:
    // 0x257be4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x257be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_257be8:
    // 0x257be8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x257be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_257bec:
    // 0x257bec: 0x1000002e  b           . + 4 + (0x2E << 2)
label_257bf0:
    if (ctx->pc == 0x257BF0u) {
        ctx->pc = 0x257BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BECu;
        // 0x257bf0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257BF4u;
        goto label_257bf4;
    }
    ctx->pc = 0x257BECu;
    {
        const bool branch_taken_0x257bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BECu;
        // 0x257bf0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bec) {
            ctx->pc = 0x257CA8u;
            goto label_257ca8;
        }
    }
    ctx->pc = 0x257BF4u;
label_257bf4:
    // 0x257bf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x257bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_257bf8:
    // 0x257bf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x257bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_257bfc:
    // 0x257bfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x257bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_257c00:
    // 0x257c00: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x257c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_257c04:
    // 0x257c04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x257c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_257c08:
    // 0x257c08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_257c0c:
    // 0x257c0c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x257c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_257c10:
    // 0x257c10: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x257c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_257c14:
    // 0x257c14: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x257c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_257c18:
    // 0x257c18: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x257c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_257c1c:
    // 0x257c1c: 0xc089000  jal         func_224000
label_257c20:
    if (ctx->pc == 0x257C20u) {
        ctx->pc = 0x257C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C1Cu;
        // 0x257c20: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x257C24u;
        goto label_257c24;
    }
    ctx->pc = 0x257C1Cu;
    SET_GPR_U32(ctx, 31, 0x257C24u);
    ctx->pc = 0x257C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257C1Cu;
    // 0x257c20: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x257C1Cu, 0x257C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257C24u;
label_257c24:
    // 0x257c24: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_257c28:
    if (ctx->pc == 0x257C28u) {
        ctx->pc = 0x257C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C24u;
        // 0x257c28: 0x8e6301a8  lw          $v1, 0x1A8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257C2Cu;
        goto label_257c2c;
    }
    ctx->pc = 0x257C24u;
    {
        const bool branch_taken_0x257c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257c24) {
            ctx->pc = 0x257C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257C24u;
            // 0x257c28: 0x8e6301a8  lw          $v1, 0x1A8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257C40u;
            goto label_257c40;
        }
    }
    ctx->pc = 0x257C2Cu;
label_257c2c:
    // 0x257c2c: 0xc088fd6  jal         func_223F58
label_257c30:
    if (ctx->pc == 0x257C30u) {
        ctx->pc = 0x257C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257C2Cu;
        // 0x257c30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257C34u;
        goto label_257c34;
    }
    ctx->pc = 0x257C2Cu;
    SET_GPR_U32(ctx, 31, 0x257C34u);
    ctx->pc = 0x257C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257C2Cu;
    // 0x257c30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223F58u, 0x257C2Cu, 0x257C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257C34u;
label_257c34:
    // 0x257c34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_257c38:
    if (ctx->pc == 0x257C38u) {
        ctx->pc = 0x257C3Cu;
        goto label_257c3c;
    }
    ctx->pc = 0x257C34u;
    {
        const bool branch_taken_0x257c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257c34) {
            ctx->pc = 0x257C58u;
            goto label_257c58;
        }
    }
    ctx->pc = 0x257C3Cu;
label_257c3c:
    // 0x257c3c: 0x8e6301a8  lw          $v1, 0x1A8($s3)
    ctx->pc = 0x257c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
label_257c40:
    // 0x257c40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x257c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_257c44:
    // 0x257c44: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x257c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_257c48:
    // 0x257c48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_257c4c:
    if (ctx->pc == 0x257C4Cu) {
        ctx->pc = 0x257C50u;
        goto label_257c50;
    }
    ctx->pc = 0x257C48u;
    {
        const bool branch_taken_0x257c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257c48) {
            ctx->pc = 0x257C58u;
            goto label_257c58;
        }
    }
    ctx->pc = 0x257C50u;
label_257c50:
    // 0x257c50: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x257c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_257c54:
    // 0x257c54: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x257c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_257c58:
    // 0x257c58: 0x0  nop
    ctx->pc = 0x257c58u;
    // NOP
label_257c5c:
    // 0x257c5c: 0x0  nop
    ctx->pc = 0x257c5cu;
    // NOP
label_257c60:
    // 0x257c60: 0x4616ad43  div.s       $f21, $f21, $f22
    ctx->pc = 0x257c60u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
label_257c64:
    // 0x257c64: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x257c64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_257c68:
    // 0x257c68: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x257c68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_257c6c:
    // 0x257c6c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x257c6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257c70:
    // 0x257c70: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x257c70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257c74:
    // 0x257c74: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x257c74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_257c78:
    // 0x257c78: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x257c78u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_257c7c:
    // 0x257c7c: 0x4a0003bf  vwaitq
    ctx->pc = 0x257c7cu;
    // VWAITQ (Q already resolved in this runtime)
label_257c80:
    // 0x257c80: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x257c80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_257c84:
    // 0x257c84: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x257c84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_257c88:
    // 0x257c88: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x257c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_257c8c:
    // 0x257c8c: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x257c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_257c90:
    // 0x257c90: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x257c90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_257c94:
    // 0x257c94: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x257c94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_257c98:
    // 0x257c98: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x257c98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_257c9c:
    // 0x257c9c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x257c9cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_257ca0:
    // 0x257ca0: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x257ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
label_257ca4:
    // 0x257ca4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x257ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_257ca8:
    // 0x257ca8: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x257ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_257cac:
    // 0x257cac: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x257cacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_257cb0:
    // 0x257cb0: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x257cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_257cb4:
    // 0x257cb4: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x257cb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_257cb8:
    // 0x257cb8: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x257cb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_257cbc:
    // 0x257cbc: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x257cbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_257cc0:
    // 0x257cc0: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x257cc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_257cc4:
    // 0x257cc4: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x257cc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_257cc8:
    // 0x257cc8: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x257cc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_257ccc:
    // 0x257ccc: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x257cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_257cd0:
    // 0x257cd0: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x257cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_257cd4:
    // 0x257cd4: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x257cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_257cd8:
    // 0x257cd8: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x257cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_257cdc:
    // 0x257cdc: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x257cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_257ce0:
    // 0x257ce0: 0x3e00008  jr          $ra
label_257ce4:
    if (ctx->pc == 0x257CE4u) {
        ctx->pc = 0x257CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CE0u;
        // 0x257ce4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257CE8u;
        goto label_fallthrough_0x257ce0;
    }
    ctx->pc = 0x257CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CE0u;
        // 0x257ce4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x257ce0:
    ctx->pc = 0x257CE8u;
}
