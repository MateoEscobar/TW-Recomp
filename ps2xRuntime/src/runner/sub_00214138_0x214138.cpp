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

// Function: sub_00214138
// Address: 0x214138 - 0x214bc8
void sub_00214138_0x214138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214138_0x214138");
#endif

    switch (ctx->pc) {
        case 0x214138u: goto label_214138;
        case 0x21413cu: goto label_21413c;
        case 0x214140u: goto label_214140;
        case 0x214144u: goto label_214144;
        case 0x214148u: goto label_214148;
        case 0x21414cu: goto label_21414c;
        case 0x214150u: goto label_214150;
        case 0x214154u: goto label_214154;
        case 0x214158u: goto label_214158;
        case 0x21415cu: goto label_21415c;
        case 0x214160u: goto label_214160;
        case 0x214164u: goto label_214164;
        case 0x214168u: goto label_214168;
        case 0x21416cu: goto label_21416c;
        case 0x214170u: goto label_214170;
        case 0x214174u: goto label_214174;
        case 0x214178u: goto label_214178;
        case 0x21417cu: goto label_21417c;
        case 0x214180u: goto label_214180;
        case 0x214184u: goto label_214184;
        case 0x214188u: goto label_214188;
        case 0x21418cu: goto label_21418c;
        case 0x214190u: goto label_214190;
        case 0x214194u: goto label_214194;
        case 0x214198u: goto label_214198;
        case 0x21419cu: goto label_21419c;
        case 0x2141a0u: goto label_2141a0;
        case 0x2141a4u: goto label_2141a4;
        case 0x2141a8u: goto label_2141a8;
        case 0x2141acu: goto label_2141ac;
        case 0x2141b0u: goto label_2141b0;
        case 0x2141b4u: goto label_2141b4;
        case 0x2141b8u: goto label_2141b8;
        case 0x2141bcu: goto label_2141bc;
        case 0x2141c0u: goto label_2141c0;
        case 0x2141c4u: goto label_2141c4;
        case 0x2141c8u: goto label_2141c8;
        case 0x2141ccu: goto label_2141cc;
        case 0x2141d0u: goto label_2141d0;
        case 0x2141d4u: goto label_2141d4;
        case 0x2141d8u: goto label_2141d8;
        case 0x2141dcu: goto label_2141dc;
        case 0x2141e0u: goto label_2141e0;
        case 0x2141e4u: goto label_2141e4;
        case 0x2141e8u: goto label_2141e8;
        case 0x2141ecu: goto label_2141ec;
        case 0x2141f0u: goto label_2141f0;
        case 0x2141f4u: goto label_2141f4;
        case 0x2141f8u: goto label_2141f8;
        case 0x2141fcu: goto label_2141fc;
        case 0x214200u: goto label_214200;
        case 0x214204u: goto label_214204;
        case 0x214208u: goto label_214208;
        case 0x21420cu: goto label_21420c;
        case 0x214210u: goto label_214210;
        case 0x214214u: goto label_214214;
        case 0x214218u: goto label_214218;
        case 0x21421cu: goto label_21421c;
        case 0x214220u: goto label_214220;
        case 0x214224u: goto label_214224;
        case 0x214228u: goto label_214228;
        case 0x21422cu: goto label_21422c;
        case 0x214230u: goto label_214230;
        case 0x214234u: goto label_214234;
        case 0x214238u: goto label_214238;
        case 0x21423cu: goto label_21423c;
        case 0x214240u: goto label_214240;
        case 0x214244u: goto label_214244;
        case 0x214248u: goto label_214248;
        case 0x21424cu: goto label_21424c;
        case 0x214250u: goto label_214250;
        case 0x214254u: goto label_214254;
        case 0x214258u: goto label_214258;
        case 0x21425cu: goto label_21425c;
        case 0x214260u: goto label_214260;
        case 0x214264u: goto label_214264;
        case 0x214268u: goto label_214268;
        case 0x21426cu: goto label_21426c;
        case 0x214270u: goto label_214270;
        case 0x214274u: goto label_214274;
        case 0x214278u: goto label_214278;
        case 0x21427cu: goto label_21427c;
        case 0x214280u: goto label_214280;
        case 0x214284u: goto label_214284;
        case 0x214288u: goto label_214288;
        case 0x21428cu: goto label_21428c;
        case 0x214290u: goto label_214290;
        case 0x214294u: goto label_214294;
        case 0x214298u: goto label_214298;
        case 0x21429cu: goto label_21429c;
        case 0x2142a0u: goto label_2142a0;
        case 0x2142a4u: goto label_2142a4;
        case 0x2142a8u: goto label_2142a8;
        case 0x2142acu: goto label_2142ac;
        case 0x2142b0u: goto label_2142b0;
        case 0x2142b4u: goto label_2142b4;
        case 0x2142b8u: goto label_2142b8;
        case 0x2142bcu: goto label_2142bc;
        case 0x2142c0u: goto label_2142c0;
        case 0x2142c4u: goto label_2142c4;
        case 0x2142c8u: goto label_2142c8;
        case 0x2142ccu: goto label_2142cc;
        case 0x2142d0u: goto label_2142d0;
        case 0x2142d4u: goto label_2142d4;
        case 0x2142d8u: goto label_2142d8;
        case 0x2142dcu: goto label_2142dc;
        case 0x2142e0u: goto label_2142e0;
        case 0x2142e4u: goto label_2142e4;
        case 0x2142e8u: goto label_2142e8;
        case 0x2142ecu: goto label_2142ec;
        case 0x2142f0u: goto label_2142f0;
        case 0x2142f4u: goto label_2142f4;
        case 0x2142f8u: goto label_2142f8;
        case 0x2142fcu: goto label_2142fc;
        case 0x214300u: goto label_214300;
        case 0x214304u: goto label_214304;
        case 0x214308u: goto label_214308;
        case 0x21430cu: goto label_21430c;
        case 0x214310u: goto label_214310;
        case 0x214314u: goto label_214314;
        case 0x214318u: goto label_214318;
        case 0x21431cu: goto label_21431c;
        case 0x214320u: goto label_214320;
        case 0x214324u: goto label_214324;
        case 0x214328u: goto label_214328;
        case 0x21432cu: goto label_21432c;
        case 0x214330u: goto label_214330;
        case 0x214334u: goto label_214334;
        case 0x214338u: goto label_214338;
        case 0x21433cu: goto label_21433c;
        case 0x214340u: goto label_214340;
        case 0x214344u: goto label_214344;
        case 0x214348u: goto label_214348;
        case 0x21434cu: goto label_21434c;
        case 0x214350u: goto label_214350;
        case 0x214354u: goto label_214354;
        case 0x214358u: goto label_214358;
        case 0x21435cu: goto label_21435c;
        case 0x214360u: goto label_214360;
        case 0x214364u: goto label_214364;
        case 0x214368u: goto label_214368;
        case 0x21436cu: goto label_21436c;
        case 0x214370u: goto label_214370;
        case 0x214374u: goto label_214374;
        case 0x214378u: goto label_214378;
        case 0x21437cu: goto label_21437c;
        case 0x214380u: goto label_214380;
        case 0x214384u: goto label_214384;
        case 0x214388u: goto label_214388;
        case 0x21438cu: goto label_21438c;
        case 0x214390u: goto label_214390;
        case 0x214394u: goto label_214394;
        case 0x214398u: goto label_214398;
        case 0x21439cu: goto label_21439c;
        case 0x2143a0u: goto label_2143a0;
        case 0x2143a4u: goto label_2143a4;
        case 0x2143a8u: goto label_2143a8;
        case 0x2143acu: goto label_2143ac;
        case 0x2143b0u: goto label_2143b0;
        case 0x2143b4u: goto label_2143b4;
        case 0x2143b8u: goto label_2143b8;
        case 0x2143bcu: goto label_2143bc;
        case 0x2143c0u: goto label_2143c0;
        case 0x2143c4u: goto label_2143c4;
        case 0x2143c8u: goto label_2143c8;
        case 0x2143ccu: goto label_2143cc;
        case 0x2143d0u: goto label_2143d0;
        case 0x2143d4u: goto label_2143d4;
        case 0x2143d8u: goto label_2143d8;
        case 0x2143dcu: goto label_2143dc;
        case 0x2143e0u: goto label_2143e0;
        case 0x2143e4u: goto label_2143e4;
        case 0x2143e8u: goto label_2143e8;
        case 0x2143ecu: goto label_2143ec;
        case 0x2143f0u: goto label_2143f0;
        case 0x2143f4u: goto label_2143f4;
        case 0x2143f8u: goto label_2143f8;
        case 0x2143fcu: goto label_2143fc;
        case 0x214400u: goto label_214400;
        case 0x214404u: goto label_214404;
        case 0x214408u: goto label_214408;
        case 0x21440cu: goto label_21440c;
        case 0x214410u: goto label_214410;
        case 0x214414u: goto label_214414;
        case 0x214418u: goto label_214418;
        case 0x21441cu: goto label_21441c;
        case 0x214420u: goto label_214420;
        case 0x214424u: goto label_214424;
        case 0x214428u: goto label_214428;
        case 0x21442cu: goto label_21442c;
        case 0x214430u: goto label_214430;
        case 0x214434u: goto label_214434;
        case 0x214438u: goto label_214438;
        case 0x21443cu: goto label_21443c;
        case 0x214440u: goto label_214440;
        case 0x214444u: goto label_214444;
        case 0x214448u: goto label_214448;
        case 0x21444cu: goto label_21444c;
        case 0x214450u: goto label_214450;
        case 0x214454u: goto label_214454;
        case 0x214458u: goto label_214458;
        case 0x21445cu: goto label_21445c;
        case 0x214460u: goto label_214460;
        case 0x214464u: goto label_214464;
        case 0x214468u: goto label_214468;
        case 0x21446cu: goto label_21446c;
        case 0x214470u: goto label_214470;
        case 0x214474u: goto label_214474;
        case 0x214478u: goto label_214478;
        case 0x21447cu: goto label_21447c;
        case 0x214480u: goto label_214480;
        case 0x214484u: goto label_214484;
        case 0x214488u: goto label_214488;
        case 0x21448cu: goto label_21448c;
        case 0x214490u: goto label_214490;
        case 0x214494u: goto label_214494;
        case 0x214498u: goto label_214498;
        case 0x21449cu: goto label_21449c;
        case 0x2144a0u: goto label_2144a0;
        case 0x2144a4u: goto label_2144a4;
        case 0x2144a8u: goto label_2144a8;
        case 0x2144acu: goto label_2144ac;
        case 0x2144b0u: goto label_2144b0;
        case 0x2144b4u: goto label_2144b4;
        case 0x2144b8u: goto label_2144b8;
        case 0x2144bcu: goto label_2144bc;
        case 0x2144c0u: goto label_2144c0;
        case 0x2144c4u: goto label_2144c4;
        case 0x2144c8u: goto label_2144c8;
        case 0x2144ccu: goto label_2144cc;
        case 0x2144d0u: goto label_2144d0;
        case 0x2144d4u: goto label_2144d4;
        case 0x2144d8u: goto label_2144d8;
        case 0x2144dcu: goto label_2144dc;
        case 0x2144e0u: goto label_2144e0;
        case 0x2144e4u: goto label_2144e4;
        case 0x2144e8u: goto label_2144e8;
        case 0x2144ecu: goto label_2144ec;
        case 0x2144f0u: goto label_2144f0;
        case 0x2144f4u: goto label_2144f4;
        case 0x2144f8u: goto label_2144f8;
        case 0x2144fcu: goto label_2144fc;
        case 0x214500u: goto label_214500;
        case 0x214504u: goto label_214504;
        case 0x214508u: goto label_214508;
        case 0x21450cu: goto label_21450c;
        case 0x214510u: goto label_214510;
        case 0x214514u: goto label_214514;
        case 0x214518u: goto label_214518;
        case 0x21451cu: goto label_21451c;
        case 0x214520u: goto label_214520;
        case 0x214524u: goto label_214524;
        case 0x214528u: goto label_214528;
        case 0x21452cu: goto label_21452c;
        case 0x214530u: goto label_214530;
        case 0x214534u: goto label_214534;
        case 0x214538u: goto label_214538;
        case 0x21453cu: goto label_21453c;
        case 0x214540u: goto label_214540;
        case 0x214544u: goto label_214544;
        case 0x214548u: goto label_214548;
        case 0x21454cu: goto label_21454c;
        case 0x214550u: goto label_214550;
        case 0x214554u: goto label_214554;
        case 0x214558u: goto label_214558;
        case 0x21455cu: goto label_21455c;
        case 0x214560u: goto label_214560;
        case 0x214564u: goto label_214564;
        case 0x214568u: goto label_214568;
        case 0x21456cu: goto label_21456c;
        case 0x214570u: goto label_214570;
        case 0x214574u: goto label_214574;
        case 0x214578u: goto label_214578;
        case 0x21457cu: goto label_21457c;
        case 0x214580u: goto label_214580;
        case 0x214584u: goto label_214584;
        case 0x214588u: goto label_214588;
        case 0x21458cu: goto label_21458c;
        case 0x214590u: goto label_214590;
        case 0x214594u: goto label_214594;
        case 0x214598u: goto label_214598;
        case 0x21459cu: goto label_21459c;
        case 0x2145a0u: goto label_2145a0;
        case 0x2145a4u: goto label_2145a4;
        case 0x2145a8u: goto label_2145a8;
        case 0x2145acu: goto label_2145ac;
        case 0x2145b0u: goto label_2145b0;
        case 0x2145b4u: goto label_2145b4;
        case 0x2145b8u: goto label_2145b8;
        case 0x2145bcu: goto label_2145bc;
        case 0x2145c0u: goto label_2145c0;
        case 0x2145c4u: goto label_2145c4;
        case 0x2145c8u: goto label_2145c8;
        case 0x2145ccu: goto label_2145cc;
        case 0x2145d0u: goto label_2145d0;
        case 0x2145d4u: goto label_2145d4;
        case 0x2145d8u: goto label_2145d8;
        case 0x2145dcu: goto label_2145dc;
        case 0x2145e0u: goto label_2145e0;
        case 0x2145e4u: goto label_2145e4;
        case 0x2145e8u: goto label_2145e8;
        case 0x2145ecu: goto label_2145ec;
        case 0x2145f0u: goto label_2145f0;
        case 0x2145f4u: goto label_2145f4;
        case 0x2145f8u: goto label_2145f8;
        case 0x2145fcu: goto label_2145fc;
        case 0x214600u: goto label_214600;
        case 0x214604u: goto label_214604;
        case 0x214608u: goto label_214608;
        case 0x21460cu: goto label_21460c;
        case 0x214610u: goto label_214610;
        case 0x214614u: goto label_214614;
        case 0x214618u: goto label_214618;
        case 0x21461cu: goto label_21461c;
        case 0x214620u: goto label_214620;
        case 0x214624u: goto label_214624;
        case 0x214628u: goto label_214628;
        case 0x21462cu: goto label_21462c;
        case 0x214630u: goto label_214630;
        case 0x214634u: goto label_214634;
        case 0x214638u: goto label_214638;
        case 0x21463cu: goto label_21463c;
        case 0x214640u: goto label_214640;
        case 0x214644u: goto label_214644;
        case 0x214648u: goto label_214648;
        case 0x21464cu: goto label_21464c;
        case 0x214650u: goto label_214650;
        case 0x214654u: goto label_214654;
        case 0x214658u: goto label_214658;
        case 0x21465cu: goto label_21465c;
        case 0x214660u: goto label_214660;
        case 0x214664u: goto label_214664;
        case 0x214668u: goto label_214668;
        case 0x21466cu: goto label_21466c;
        case 0x214670u: goto label_214670;
        case 0x214674u: goto label_214674;
        case 0x214678u: goto label_214678;
        case 0x21467cu: goto label_21467c;
        case 0x214680u: goto label_214680;
        case 0x214684u: goto label_214684;
        case 0x214688u: goto label_214688;
        case 0x21468cu: goto label_21468c;
        case 0x214690u: goto label_214690;
        case 0x214694u: goto label_214694;
        case 0x214698u: goto label_214698;
        case 0x21469cu: goto label_21469c;
        case 0x2146a0u: goto label_2146a0;
        case 0x2146a4u: goto label_2146a4;
        case 0x2146a8u: goto label_2146a8;
        case 0x2146acu: goto label_2146ac;
        case 0x2146b0u: goto label_2146b0;
        case 0x2146b4u: goto label_2146b4;
        case 0x2146b8u: goto label_2146b8;
        case 0x2146bcu: goto label_2146bc;
        case 0x2146c0u: goto label_2146c0;
        case 0x2146c4u: goto label_2146c4;
        case 0x2146c8u: goto label_2146c8;
        case 0x2146ccu: goto label_2146cc;
        case 0x2146d0u: goto label_2146d0;
        case 0x2146d4u: goto label_2146d4;
        case 0x2146d8u: goto label_2146d8;
        case 0x2146dcu: goto label_2146dc;
        case 0x2146e0u: goto label_2146e0;
        case 0x2146e4u: goto label_2146e4;
        case 0x2146e8u: goto label_2146e8;
        case 0x2146ecu: goto label_2146ec;
        case 0x2146f0u: goto label_2146f0;
        case 0x2146f4u: goto label_2146f4;
        case 0x2146f8u: goto label_2146f8;
        case 0x2146fcu: goto label_2146fc;
        case 0x214700u: goto label_214700;
        case 0x214704u: goto label_214704;
        case 0x214708u: goto label_214708;
        case 0x21470cu: goto label_21470c;
        case 0x214710u: goto label_214710;
        case 0x214714u: goto label_214714;
        case 0x214718u: goto label_214718;
        case 0x21471cu: goto label_21471c;
        case 0x214720u: goto label_214720;
        case 0x214724u: goto label_214724;
        case 0x214728u: goto label_214728;
        case 0x21472cu: goto label_21472c;
        case 0x214730u: goto label_214730;
        case 0x214734u: goto label_214734;
        case 0x214738u: goto label_214738;
        case 0x21473cu: goto label_21473c;
        case 0x214740u: goto label_214740;
        case 0x214744u: goto label_214744;
        case 0x214748u: goto label_214748;
        case 0x21474cu: goto label_21474c;
        case 0x214750u: goto label_214750;
        case 0x214754u: goto label_214754;
        case 0x214758u: goto label_214758;
        case 0x21475cu: goto label_21475c;
        case 0x214760u: goto label_214760;
        case 0x214764u: goto label_214764;
        case 0x214768u: goto label_214768;
        case 0x21476cu: goto label_21476c;
        case 0x214770u: goto label_214770;
        case 0x214774u: goto label_214774;
        case 0x214778u: goto label_214778;
        case 0x21477cu: goto label_21477c;
        case 0x214780u: goto label_214780;
        case 0x214784u: goto label_214784;
        case 0x214788u: goto label_214788;
        case 0x21478cu: goto label_21478c;
        case 0x214790u: goto label_214790;
        case 0x214794u: goto label_214794;
        case 0x214798u: goto label_214798;
        case 0x21479cu: goto label_21479c;
        case 0x2147a0u: goto label_2147a0;
        case 0x2147a4u: goto label_2147a4;
        case 0x2147a8u: goto label_2147a8;
        case 0x2147acu: goto label_2147ac;
        case 0x2147b0u: goto label_2147b0;
        case 0x2147b4u: goto label_2147b4;
        case 0x2147b8u: goto label_2147b8;
        case 0x2147bcu: goto label_2147bc;
        case 0x2147c0u: goto label_2147c0;
        case 0x2147c4u: goto label_2147c4;
        case 0x2147c8u: goto label_2147c8;
        case 0x2147ccu: goto label_2147cc;
        case 0x2147d0u: goto label_2147d0;
        case 0x2147d4u: goto label_2147d4;
        case 0x2147d8u: goto label_2147d8;
        case 0x2147dcu: goto label_2147dc;
        case 0x2147e0u: goto label_2147e0;
        case 0x2147e4u: goto label_2147e4;
        case 0x2147e8u: goto label_2147e8;
        case 0x2147ecu: goto label_2147ec;
        case 0x2147f0u: goto label_2147f0;
        case 0x2147f4u: goto label_2147f4;
        case 0x2147f8u: goto label_2147f8;
        case 0x2147fcu: goto label_2147fc;
        case 0x214800u: goto label_214800;
        case 0x214804u: goto label_214804;
        case 0x214808u: goto label_214808;
        case 0x21480cu: goto label_21480c;
        case 0x214810u: goto label_214810;
        case 0x214814u: goto label_214814;
        case 0x214818u: goto label_214818;
        case 0x21481cu: goto label_21481c;
        case 0x214820u: goto label_214820;
        case 0x214824u: goto label_214824;
        case 0x214828u: goto label_214828;
        case 0x21482cu: goto label_21482c;
        case 0x214830u: goto label_214830;
        case 0x214834u: goto label_214834;
        case 0x214838u: goto label_214838;
        case 0x21483cu: goto label_21483c;
        case 0x214840u: goto label_214840;
        case 0x214844u: goto label_214844;
        case 0x214848u: goto label_214848;
        case 0x21484cu: goto label_21484c;
        case 0x214850u: goto label_214850;
        case 0x214854u: goto label_214854;
        case 0x214858u: goto label_214858;
        case 0x21485cu: goto label_21485c;
        case 0x214860u: goto label_214860;
        case 0x214864u: goto label_214864;
        case 0x214868u: goto label_214868;
        case 0x21486cu: goto label_21486c;
        case 0x214870u: goto label_214870;
        case 0x214874u: goto label_214874;
        case 0x214878u: goto label_214878;
        case 0x21487cu: goto label_21487c;
        case 0x214880u: goto label_214880;
        case 0x214884u: goto label_214884;
        case 0x214888u: goto label_214888;
        case 0x21488cu: goto label_21488c;
        case 0x214890u: goto label_214890;
        case 0x214894u: goto label_214894;
        case 0x214898u: goto label_214898;
        case 0x21489cu: goto label_21489c;
        case 0x2148a0u: goto label_2148a0;
        case 0x2148a4u: goto label_2148a4;
        case 0x2148a8u: goto label_2148a8;
        case 0x2148acu: goto label_2148ac;
        case 0x2148b0u: goto label_2148b0;
        case 0x2148b4u: goto label_2148b4;
        case 0x2148b8u: goto label_2148b8;
        case 0x2148bcu: goto label_2148bc;
        case 0x2148c0u: goto label_2148c0;
        case 0x2148c4u: goto label_2148c4;
        case 0x2148c8u: goto label_2148c8;
        case 0x2148ccu: goto label_2148cc;
        case 0x2148d0u: goto label_2148d0;
        case 0x2148d4u: goto label_2148d4;
        case 0x2148d8u: goto label_2148d8;
        case 0x2148dcu: goto label_2148dc;
        case 0x2148e0u: goto label_2148e0;
        case 0x2148e4u: goto label_2148e4;
        case 0x2148e8u: goto label_2148e8;
        case 0x2148ecu: goto label_2148ec;
        case 0x2148f0u: goto label_2148f0;
        case 0x2148f4u: goto label_2148f4;
        case 0x2148f8u: goto label_2148f8;
        case 0x2148fcu: goto label_2148fc;
        case 0x214900u: goto label_214900;
        case 0x214904u: goto label_214904;
        case 0x214908u: goto label_214908;
        case 0x21490cu: goto label_21490c;
        case 0x214910u: goto label_214910;
        case 0x214914u: goto label_214914;
        case 0x214918u: goto label_214918;
        case 0x21491cu: goto label_21491c;
        case 0x214920u: goto label_214920;
        case 0x214924u: goto label_214924;
        case 0x214928u: goto label_214928;
        case 0x21492cu: goto label_21492c;
        case 0x214930u: goto label_214930;
        case 0x214934u: goto label_214934;
        case 0x214938u: goto label_214938;
        case 0x21493cu: goto label_21493c;
        case 0x214940u: goto label_214940;
        case 0x214944u: goto label_214944;
        case 0x214948u: goto label_214948;
        case 0x21494cu: goto label_21494c;
        case 0x214950u: goto label_214950;
        case 0x214954u: goto label_214954;
        case 0x214958u: goto label_214958;
        case 0x21495cu: goto label_21495c;
        case 0x214960u: goto label_214960;
        case 0x214964u: goto label_214964;
        case 0x214968u: goto label_214968;
        case 0x21496cu: goto label_21496c;
        case 0x214970u: goto label_214970;
        case 0x214974u: goto label_214974;
        case 0x214978u: goto label_214978;
        case 0x21497cu: goto label_21497c;
        case 0x214980u: goto label_214980;
        case 0x214984u: goto label_214984;
        case 0x214988u: goto label_214988;
        case 0x21498cu: goto label_21498c;
        case 0x214990u: goto label_214990;
        case 0x214994u: goto label_214994;
        case 0x214998u: goto label_214998;
        case 0x21499cu: goto label_21499c;
        case 0x2149a0u: goto label_2149a0;
        case 0x2149a4u: goto label_2149a4;
        case 0x2149a8u: goto label_2149a8;
        case 0x2149acu: goto label_2149ac;
        case 0x2149b0u: goto label_2149b0;
        case 0x2149b4u: goto label_2149b4;
        case 0x2149b8u: goto label_2149b8;
        case 0x2149bcu: goto label_2149bc;
        case 0x2149c0u: goto label_2149c0;
        case 0x2149c4u: goto label_2149c4;
        case 0x2149c8u: goto label_2149c8;
        case 0x2149ccu: goto label_2149cc;
        case 0x2149d0u: goto label_2149d0;
        case 0x2149d4u: goto label_2149d4;
        case 0x2149d8u: goto label_2149d8;
        case 0x2149dcu: goto label_2149dc;
        case 0x2149e0u: goto label_2149e0;
        case 0x2149e4u: goto label_2149e4;
        case 0x2149e8u: goto label_2149e8;
        case 0x2149ecu: goto label_2149ec;
        case 0x2149f0u: goto label_2149f0;
        case 0x2149f4u: goto label_2149f4;
        case 0x2149f8u: goto label_2149f8;
        case 0x2149fcu: goto label_2149fc;
        case 0x214a00u: goto label_214a00;
        case 0x214a04u: goto label_214a04;
        case 0x214a08u: goto label_214a08;
        case 0x214a0cu: goto label_214a0c;
        case 0x214a10u: goto label_214a10;
        case 0x214a14u: goto label_214a14;
        case 0x214a18u: goto label_214a18;
        case 0x214a1cu: goto label_214a1c;
        case 0x214a20u: goto label_214a20;
        case 0x214a24u: goto label_214a24;
        case 0x214a28u: goto label_214a28;
        case 0x214a2cu: goto label_214a2c;
        case 0x214a30u: goto label_214a30;
        case 0x214a34u: goto label_214a34;
        case 0x214a38u: goto label_214a38;
        case 0x214a3cu: goto label_214a3c;
        case 0x214a40u: goto label_214a40;
        case 0x214a44u: goto label_214a44;
        case 0x214a48u: goto label_214a48;
        case 0x214a4cu: goto label_214a4c;
        case 0x214a50u: goto label_214a50;
        case 0x214a54u: goto label_214a54;
        case 0x214a58u: goto label_214a58;
        case 0x214a5cu: goto label_214a5c;
        case 0x214a60u: goto label_214a60;
        case 0x214a64u: goto label_214a64;
        case 0x214a68u: goto label_214a68;
        case 0x214a6cu: goto label_214a6c;
        case 0x214a70u: goto label_214a70;
        case 0x214a74u: goto label_214a74;
        case 0x214a78u: goto label_214a78;
        case 0x214a7cu: goto label_214a7c;
        case 0x214a80u: goto label_214a80;
        case 0x214a84u: goto label_214a84;
        case 0x214a88u: goto label_214a88;
        case 0x214a8cu: goto label_214a8c;
        case 0x214a90u: goto label_214a90;
        case 0x214a94u: goto label_214a94;
        case 0x214a98u: goto label_214a98;
        case 0x214a9cu: goto label_214a9c;
        case 0x214aa0u: goto label_214aa0;
        case 0x214aa4u: goto label_214aa4;
        case 0x214aa8u: goto label_214aa8;
        case 0x214aacu: goto label_214aac;
        case 0x214ab0u: goto label_214ab0;
        case 0x214ab4u: goto label_214ab4;
        case 0x214ab8u: goto label_214ab8;
        case 0x214abcu: goto label_214abc;
        case 0x214ac0u: goto label_214ac0;
        case 0x214ac4u: goto label_214ac4;
        case 0x214ac8u: goto label_214ac8;
        case 0x214accu: goto label_214acc;
        case 0x214ad0u: goto label_214ad0;
        case 0x214ad4u: goto label_214ad4;
        case 0x214ad8u: goto label_214ad8;
        case 0x214adcu: goto label_214adc;
        case 0x214ae0u: goto label_214ae0;
        case 0x214ae4u: goto label_214ae4;
        case 0x214ae8u: goto label_214ae8;
        case 0x214aecu: goto label_214aec;
        case 0x214af0u: goto label_214af0;
        case 0x214af4u: goto label_214af4;
        case 0x214af8u: goto label_214af8;
        case 0x214afcu: goto label_214afc;
        case 0x214b00u: goto label_214b00;
        case 0x214b04u: goto label_214b04;
        case 0x214b08u: goto label_214b08;
        case 0x214b0cu: goto label_214b0c;
        case 0x214b10u: goto label_214b10;
        case 0x214b14u: goto label_214b14;
        case 0x214b18u: goto label_214b18;
        case 0x214b1cu: goto label_214b1c;
        case 0x214b20u: goto label_214b20;
        case 0x214b24u: goto label_214b24;
        case 0x214b28u: goto label_214b28;
        case 0x214b2cu: goto label_214b2c;
        case 0x214b30u: goto label_214b30;
        case 0x214b34u: goto label_214b34;
        case 0x214b38u: goto label_214b38;
        case 0x214b3cu: goto label_214b3c;
        case 0x214b40u: goto label_214b40;
        case 0x214b44u: goto label_214b44;
        case 0x214b48u: goto label_214b48;
        case 0x214b4cu: goto label_214b4c;
        case 0x214b50u: goto label_214b50;
        case 0x214b54u: goto label_214b54;
        case 0x214b58u: goto label_214b58;
        case 0x214b5cu: goto label_214b5c;
        case 0x214b60u: goto label_214b60;
        case 0x214b64u: goto label_214b64;
        case 0x214b68u: goto label_214b68;
        case 0x214b6cu: goto label_214b6c;
        case 0x214b70u: goto label_214b70;
        case 0x214b74u: goto label_214b74;
        case 0x214b78u: goto label_214b78;
        case 0x214b7cu: goto label_214b7c;
        case 0x214b80u: goto label_214b80;
        case 0x214b84u: goto label_214b84;
        case 0x214b88u: goto label_214b88;
        case 0x214b8cu: goto label_214b8c;
        case 0x214b90u: goto label_214b90;
        case 0x214b94u: goto label_214b94;
        case 0x214b98u: goto label_214b98;
        case 0x214b9cu: goto label_214b9c;
        case 0x214ba0u: goto label_214ba0;
        case 0x214ba4u: goto label_214ba4;
        case 0x214ba8u: goto label_214ba8;
        case 0x214bacu: goto label_214bac;
        case 0x214bb0u: goto label_214bb0;
        case 0x214bb4u: goto label_214bb4;
        case 0x214bb8u: goto label_214bb8;
        case 0x214bbcu: goto label_214bbc;
        case 0x214bc0u: goto label_214bc0;
        case 0x214bc4u: goto label_214bc4;
        default: break;
    }

    ctx->pc = 0x214138u;

label_214138:
    // 0x214138: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x214138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_21413c:
    // 0x21413c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x21413cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_214140:
    // 0x214140: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x214140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_214144:
    // 0x214144: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x214144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_214148:
    // 0x214148: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x214148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_21414c:
    // 0x21414c: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x21414cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_214150:
    // 0x214150: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x214150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_214154:
    // 0x214154: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x214154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_214158:
    // 0x214158: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x214158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_21415c:
    // 0x21415c: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x21415cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_214160:
    // 0x214160: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x214160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_214164:
    // 0x214164: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x214164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_214168:
    // 0x214168: 0xc0847be  jal         func_211EF8
label_21416c:
    if (ctx->pc == 0x21416Cu) {
        ctx->pc = 0x21416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214168u;
        // 0x21416c: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x214170u;
        goto label_214170;
    }
    ctx->pc = 0x214168u;
    SET_GPR_U32(ctx, 31, 0x214170u);
    ctx->pc = 0x21416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214168u;
    // 0x21416c: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EF8u, 0x214168u, 0x214170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214170u;
label_214170:
    // 0x214170: 0x8e6240fc  lw          $v0, 0x40FC($s3)
    ctx->pc = 0x214170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16636)));
label_214174:
    // 0x214174: 0x10400288  beqz        $v0, . + 4 + (0x288 << 2)
label_214178:
    if (ctx->pc == 0x214178u) {
        ctx->pc = 0x214178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214174u;
        // 0x214178: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21417Cu;
        goto label_21417c;
    }
    ctx->pc = 0x214174u;
    {
        const bool branch_taken_0x214174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214174u;
        // 0x214178: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214174) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x21417Cu;
label_21417c:
    // 0x21417c: 0x8e6240f8  lw          $v0, 0x40F8($s3)
    ctx->pc = 0x21417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16632)));
label_214180:
    // 0x214180: 0x10400285  beqz        $v0, . + 4 + (0x285 << 2)
label_214184:
    if (ctx->pc == 0x214184u) {
        ctx->pc = 0x214184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214180u;
        // 0x214184: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214188u;
        goto label_214188;
    }
    ctx->pc = 0x214180u;
    {
        const bool branch_taken_0x214180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214180u;
        // 0x214184: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214180) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214188u;
label_214188:
    // 0x214188: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x214188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_21418c:
    // 0x21418c: 0xc107458  jal         func_41D160
label_214190:
    if (ctx->pc == 0x214190u) {
        ctx->pc = 0x214190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21418Cu;
        // 0x214190: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214194u;
        goto label_214194;
    }
    ctx->pc = 0x21418Cu;
    SET_GPR_U32(ctx, 31, 0x214194u);
    ctx->pc = 0x214190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21418Cu;
    // 0x214190: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x21418Cu, 0x214194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214194u;
label_214194:
    // 0x214194: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_214198:
    if (ctx->pc == 0x214198u) {
        ctx->pc = 0x214198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214194u;
        // 0x214198: 0x8e6440f4  lw          $a0, 0x40F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21419Cu;
        goto label_21419c;
    }
    ctx->pc = 0x214194u;
    {
        const bool branch_taken_0x214194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214194) {
            ctx->pc = 0x214198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214194u;
            // 0x214198: 0x8e6440f4  lw          $a0, 0x40F4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2141E0u;
            goto label_2141e0;
        }
    }
    ctx->pc = 0x21419Cu;
label_21419c:
    // 0x21419c: 0xc047ab8  jal         func_11EAE0
label_2141a0:
    if (ctx->pc == 0x2141A0u) {
        ctx->pc = 0x2141A4u;
        goto label_2141a4;
    }
    ctx->pc = 0x21419Cu;
    SET_GPR_U32(ctx, 31, 0x2141A4u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x21419Cu, 0x2141A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2141A4u;
label_2141a4:
    // 0x2141a4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2141a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2141a8:
    // 0x2141a8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2141ac:
    if (ctx->pc == 0x2141ACu) {
        ctx->pc = 0x2141ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141A8u;
        // 0x2141ac: 0x8e6440f4  lw          $a0, 0x40F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2141B0u;
        goto label_2141b0;
    }
    ctx->pc = 0x2141A8u;
    {
        const bool branch_taken_0x2141a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2141ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141A8u;
        // 0x2141ac: 0x8e6440f4  lw          $a0, 0x40F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141a8) {
            ctx->pc = 0x2141E0u;
            goto label_2141e0;
        }
    }
    ctx->pc = 0x2141B0u;
label_2141b0:
    // 0x2141b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2141b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2141b4:
    // 0x2141b4: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
label_2141b8:
    if (ctx->pc == 0x2141B8u) {
        ctx->pc = 0x2141B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141B4u;
        // 0x2141b8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2141BCu;
        goto label_2141bc;
    }
    ctx->pc = 0x2141B4u;
    {
        const bool branch_taken_0x2141b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2141B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141B4u;
        // 0x2141b8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141b4) {
            ctx->pc = 0x2141E4u;
            goto label_2141e4;
        }
    }
    ctx->pc = 0x2141BCu;
label_2141bc:
    // 0x2141bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2141bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2141c0:
    // 0x2141c0: 0x8c43b1a4  lw          $v1, -0x4E5C($v0)
    ctx->pc = 0x2141c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947236)));
label_2141c4:
    // 0x2141c4: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
label_2141c8:
    if (ctx->pc == 0x2141C8u) {
        ctx->pc = 0x2141C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141C4u;
        // 0x2141c8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2141CCu;
        goto label_2141cc;
    }
    ctx->pc = 0x2141C4u;
    {
        const bool branch_taken_0x2141c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2141C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141C4u;
        // 0x2141c8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141c4) {
            ctx->pc = 0x2141E4u;
            goto label_2141e4;
        }
    }
    ctx->pc = 0x2141CCu;
label_2141cc:
    // 0x2141cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2141ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2141d0:
    // 0x2141d0: 0x2442fa30  addiu       $v0, $v0, -0x5D0
    ctx->pc = 0x2141d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965808));
label_2141d4:
    // 0x2141d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2141d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2141d8:
    // 0x2141d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2141dc:
    if (ctx->pc == 0x2141DCu) {
        ctx->pc = 0x2141DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141D8u;
        // 0x2141dc: 0x7e6340e0  sq          $v1, 0x40E0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 16608), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2141E0u;
        goto label_2141e0;
    }
    ctx->pc = 0x2141D8u;
    {
        const bool branch_taken_0x2141d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2141DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141D8u;
        // 0x2141dc: 0x7e6340e0  sq          $v1, 0x40E0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 16608), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141d8) {
            ctx->pc = 0x2141F8u;
            goto label_2141f8;
        }
    }
    ctx->pc = 0x2141E0u;
label_2141e0:
    // 0x2141e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2141e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2141e4:
    // 0x2141e4: 0x2463fa10  addiu       $v1, $v1, -0x5F0
    ctx->pc = 0x2141e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965776));
label_2141e8:
    // 0x2141e8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2141e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2141ec:
    // 0x2141ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2141ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2141f0:
    // 0x2141f0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2141f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2141f4:
    // 0x2141f4: 0x7e6240e0  sq          $v0, 0x40E0($s3)
    ctx->pc = 0x2141f4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16608), GPR_VEC(ctx, 2));
label_2141f8:
    // 0x2141f8: 0x8e6240f8  lw          $v0, 0x40F8($s3)
    ctx->pc = 0x2141f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16632)));
label_2141fc:
    // 0x2141fc: 0x10400265  beqz        $v0, . + 4 + (0x265 << 2)
label_214200:
    if (ctx->pc == 0x214200u) {
        ctx->pc = 0x214200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141FCu;
        // 0x214200: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214204u;
        goto label_214204;
    }
    ctx->pc = 0x2141FCu;
    {
        const bool branch_taken_0x2141fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141FCu;
        // 0x214200: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141fc) {
            ctx->pc = 0x214B94u;
            goto label_214b94;
        }
    }
    ctx->pc = 0x214204u;
label_214204:
    // 0x214204: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x214204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214208:
    // 0x214208: 0x267200b0  addiu       $s2, $s3, 0xB0
    ctx->pc = 0x214208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_21420c:
    // 0x21420c: 0x26620570  addiu       $v0, $s3, 0x570
    ctx->pc = 0x21420cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1392));
label_214210:
    // 0x214210: 0x26630760  addiu       $v1, $s3, 0x760
    ctx->pc = 0x214210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1888));
label_214214:
    // 0x214214: 0x26640460  addiu       $a0, $s3, 0x460
    ctx->pc = 0x214214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1120));
label_214218:
    // 0x214218: 0x26654148  addiu       $a1, $s3, 0x4148
    ctx->pc = 0x214218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16712));
label_21421c:
    // 0x21421c: 0x26664144  addiu       $a2, $s3, 0x4144
    ctx->pc = 0x21421cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16708));
label_214220:
    // 0x214220: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x214220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_214224:
    // 0x214224: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x214224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_214228:
    // 0x214228: 0x26683de0  addiu       $t0, $s3, 0x3DE0
    ctx->pc = 0x214228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 15840));
label_21422c:
    // 0x21422c: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x21422cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_214230:
    // 0x214230: 0x26623ee0  addiu       $v0, $s3, 0x3EE0
    ctx->pc = 0x214230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16096));
label_214234:
    // 0x214234: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x214234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_214238:
    // 0x214238: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x214238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_21423c:
    // 0x21423c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x21423cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_214240:
    // 0x214240: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x214240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_214244:
    // 0x214244: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x214244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
label_214248:
    // 0x214248: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x214248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_21424c:
    // 0x21424c: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x21424cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
label_214250:
    // 0x214250: 0x26660400  addiu       $a2, $s3, 0x400
    ctx->pc = 0x214250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
label_214254:
    // 0x214254: 0x26670e30  addiu       $a3, $s3, 0xE30
    ctx->pc = 0x214254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 3632));
label_214258:
    // 0x214258: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x214258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
label_21425c:
    // 0x21425c: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x21425cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_214260:
    // 0x214260: 0x26681260  addiu       $t0, $s3, 0x1260
    ctx->pc = 0x214260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4704));
label_214264:
    // 0x214264: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x214264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_214268:
    // 0x214268: 0x26621690  addiu       $v0, $s3, 0x1690
    ctx->pc = 0x214268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5776));
label_21426c:
    // 0x21426c: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x21426cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
label_214270:
    // 0x214270: 0x26631ac0  addiu       $v1, $s3, 0x1AC0
    ctx->pc = 0x214270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 6848));
label_214274:
    // 0x214274: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x214274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
label_214278:
    // 0x214278: 0x26643480  addiu       $a0, $s3, 0x3480
    ctx->pc = 0x214278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 13440));
label_21427c:
    // 0x21427c: 0xafa60084  sw          $a2, 0x84($sp)
    ctx->pc = 0x21427cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
label_214280:
    // 0x214280: 0x26651ef0  addiu       $a1, $s3, 0x1EF0
    ctx->pc = 0x214280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 7920));
label_214284:
    // 0x214284: 0xafa70088  sw          $a3, 0x88($sp)
    ctx->pc = 0x214284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 7));
label_214288:
    // 0x214288: 0x26663fe0  addiu       $a2, $s3, 0x3FE0
    ctx->pc = 0x214288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16352));
label_21428c:
    // 0x21428c: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x21428cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_214290:
    // 0x214290: 0x267402a0  addiu       $s4, $s3, 0x2A0
    ctx->pc = 0x214290u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 672));
label_214294:
    // 0x214294: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x214294u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_214298:
    // 0x214298: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x214298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_21429c:
    // 0x21429c: 0x26763ce0  addiu       $s6, $s3, 0x3CE0
    ctx->pc = 0x21429cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 15584));
label_2142a0:
    // 0x2142a0: 0xafa80070  sw          $t0, 0x70($sp)
    ctx->pc = 0x2142a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 8));
label_2142a4:
    // 0x2142a4: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2142a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_2142a8:
    // 0x2142a8: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x2142a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_2142ac:
    // 0x2142ac: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x2142acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
label_2142b0:
    // 0x2142b0: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x2142b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
label_2142b4:
    // 0x2142b4: 0xafa6008c  sw          $a2, 0x8C($sp)
    ctx->pc = 0x2142b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 6));
label_2142b8:
    // 0x2142b8: 0xafa70064  sw          $a3, 0x64($sp)
    ctx->pc = 0x2142b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 7));
label_2142bc:
    // 0x2142bc: 0x0  nop
    ctx->pc = 0x2142bcu;
    // NOP
label_2142c0:
    // 0x2142c0: 0x8ee3489c  lw          $v1, 0x489C($s7)
    ctx->pc = 0x2142c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
label_2142c4:
    // 0x2142c4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2142c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2142c8:
    // 0x2142c8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2142c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2142cc:
    // 0x2142cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2142d0:
    if (ctx->pc == 0x2142D0u) {
        ctx->pc = 0x2142D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142CCu;
        // 0x2142d0: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2142D4u;
        goto label_2142d4;
    }
    ctx->pc = 0x2142CCu;
    {
        const bool branch_taken_0x2142cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2142D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142CCu;
        // 0x2142d0: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142cc) {
            ctx->pc = 0x2142F4u;
            goto label_2142f4;
        }
    }
    ctx->pc = 0x2142D4u;
label_2142d4:
    // 0x2142d4: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x2142d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_2142d8:
    // 0x2142d8: 0xc0e409a  jal         func_390268
label_2142dc:
    if (ctx->pc == 0x2142DCu) {
        ctx->pc = 0x2142DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142D8u;
        // 0x2142dc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2142E0u;
        goto label_2142e0;
    }
    ctx->pc = 0x2142D8u;
    SET_GPR_U32(ctx, 31, 0x2142E0u);
    ctx->pc = 0x2142DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2142D8u;
    // 0x2142dc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2142D8u, 0x2142E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142E0u;
label_2142e0:
    // 0x2142e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2142e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2142e4:
    // 0x2142e4: 0x8e6340f4  lw          $v1, 0x40F4($s3)
    ctx->pc = 0x2142e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
label_2142e8:
    // 0x2142e8: 0x8ea20380  lw          $v0, 0x380($s5)
    ctx->pc = 0x2142e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 896)));
label_2142ec:
    // 0x2142ec: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
label_2142f0:
    if (ctx->pc == 0x2142F0u) {
        ctx->pc = 0x2142F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142ECu;
        // 0x2142f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2142F4u;
        goto label_2142f4;
    }
    ctx->pc = 0x2142ECu;
    {
        const bool branch_taken_0x2142ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2142F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142ECu;
        // 0x2142f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142ec) {
            ctx->pc = 0x2142C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2142c0;
        }
    }
    ctx->pc = 0x2142F4u;
label_2142f4:
    // 0x2142f4: 0xc084ddc  jal         func_213770
label_2142f8:
    if (ctx->pc == 0x2142F8u) {
        ctx->pc = 0x2142F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142F4u;
        // 0x2142f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2142FCu;
        goto label_2142fc;
    }
    ctx->pc = 0x2142F4u;
    SET_GPR_U32(ctx, 31, 0x2142FCu);
    ctx->pc = 0x2142F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2142F4u;
    // 0x2142f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213770u, 0x2142F4u, 0x2142FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142FCu;
label_2142fc:
    // 0x2142fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2142fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_214300:
    // 0x214300: 0x8e624130  lw          $v0, 0x4130($s3)
    ctx->pc = 0x214300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16688)));
label_214304:
    // 0x214304: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_214308:
    if (ctx->pc == 0x214308u) {
        ctx->pc = 0x214308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214304u;
        // 0x214308: 0x8e6240f4  lw          $v0, 0x40F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21430Cu;
        goto label_21430c;
    }
    ctx->pc = 0x214304u;
    {
        const bool branch_taken_0x214304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214304) {
            ctx->pc = 0x214308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214304u;
            // 0x214308: 0x8e6240f4  lw          $v0, 0x40F4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21432Cu;
            goto label_21432c;
        }
    }
    ctx->pc = 0x21430Cu;
label_21430c:
    // 0x21430c: 0x86644140  lh          $a0, 0x4140($s3)
    ctx->pc = 0x21430cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16704)));
label_214310:
    // 0x214310: 0xc05a916  jal         func_16A458
label_214314:
    if (ctx->pc == 0x214314u) {
        ctx->pc = 0x214314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214310u;
        // 0x214314: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214318u;
        goto label_214318;
    }
    ctx->pc = 0x214310u;
    SET_GPR_U32(ctx, 31, 0x214318u);
    ctx->pc = 0x214314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214310u;
    // 0x214314: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A458u, 0x214310u, 0x214318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214318u;
label_214318:
    // 0x214318: 0xae62413c  sw          $v0, 0x413C($s3)
    ctx->pc = 0x214318u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16700), GPR_U32(ctx, 2));
label_21431c:
    // 0x21431c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21431cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_214320:
    // 0x214320: 0xc084f9a  jal         func_213E68
label_214324:
    if (ctx->pc == 0x214324u) {
        ctx->pc = 0x214324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214320u;
        // 0x214324: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214328u;
        goto label_214328;
    }
    ctx->pc = 0x214320u;
    SET_GPR_U32(ctx, 31, 0x214328u);
    ctx->pc = 0x214324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214320u;
    // 0x214324: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213E68u, 0x214320u, 0x214328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214328u;
label_214328:
    // 0x214328: 0x8e6240f4  lw          $v0, 0x40F4($s3)
    ctx->pc = 0x214328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
label_21432c:
    // 0x21432c: 0x24170240  addiu       $s7, $zero, 0x240
    ctx->pc = 0x21432cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_214330:
    // 0x214330: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x214330u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_214334:
    // 0x214334: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x214334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_214338:
    // 0x214338: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x214338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_21433c:
    // 0x21433c: 0x2510fa40  addiu       $s0, $t0, -0x5C0
    ctx->pc = 0x21433cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965824));
label_214340:
    // 0x214340: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_214344:
    // 0x214344: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x214344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214348:
    // 0x214348: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x214348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_21434c:
    // 0x21434c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x21434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_214350:
    // 0x214350: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x214350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_214354:
    // 0x214354: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x214354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214358:
    // 0x214358: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x214358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21435c:
    // 0x21435c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x21435cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_214360:
    // 0x214360: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x214360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_214364:
    // 0x214364: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x214364u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_214368:
    // 0x214368: 0xc06e520  jal         func_1B9480
label_21436c:
    if (ctx->pc == 0x21436Cu) {
        ctx->pc = 0x21436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214368u;
        // 0x21436c: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x214370u;
        goto label_214370;
    }
    ctx->pc = 0x214368u;
    SET_GPR_U32(ctx, 31, 0x214370u);
    ctx->pc = 0x21436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214368u;
    // 0x21436c: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9480u, 0x214368u, 0x214370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214370u;
label_214370:
    // 0x214370: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x214370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_214374:
    // 0x214374: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x214374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_214378:
    // 0x214378: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x214378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_21437c:
    // 0x21437c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x21437cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_214380:
    // 0x214380: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x214380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_214384:
    // 0x214384: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x214384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_214388:
    // 0x214388: 0xb262031f  sdl         $v0, 0x31F($s3)
    ctx->pc = 0x214388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 799); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21438c:
    // 0x21438c: 0xb6620318  sdr         $v0, 0x318($s3)
    ctx->pc = 0x21438cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 792); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_214390:
    // 0x214390: 0xb2630327  sdl         $v1, 0x327($s3)
    ctx->pc = 0x214390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_214394:
    // 0x214394: 0xb6630320  sdr         $v1, 0x320($s3)
    ctx->pc = 0x214394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_214398:
    // 0x214398: 0xc06e520  jal         func_1B9480
label_21439c:
    if (ctx->pc == 0x21439Cu) {
        ctx->pc = 0x21439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214398u;
        // 0x21439c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2143A0u;
        goto label_2143a0;
    }
    ctx->pc = 0x214398u;
    SET_GPR_U32(ctx, 31, 0x2143A0u);
    ctx->pc = 0x21439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214398u;
    // 0x21439c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9480u, 0x214398u, 0x2143A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2143A0u;
label_2143a0:
    // 0x2143a0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2143a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2143a4:
    // 0x2143a4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2143a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2143a8:
    // 0x2143a8: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x2143a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2143ac:
    // 0x2143ac: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x2143acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2143b0:
    // 0x2143b0: 0xb2620eef  sdl         $v0, 0xEEF($s3)
    ctx->pc = 0x2143b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3823); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2143b4:
    // 0x2143b4: 0xb6620ee8  sdr         $v0, 0xEE8($s3)
    ctx->pc = 0x2143b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2143b8:
    // 0x2143b8: 0xb2630ef7  sdl         $v1, 0xEF7($s3)
    ctx->pc = 0x2143b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3831); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2143bc:
    // 0x2143bc: 0xb6630ef0  sdr         $v1, 0xEF0($s3)
    ctx->pc = 0x2143bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3824); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2143c0:
    // 0x2143c0: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x2143c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2143c4:
    // 0x2143c4: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x2143c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2143c8:
    // 0x2143c8: 0x6ba7000f  ldl         $a3, 0xF($sp)
    ctx->pc = 0x2143c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2143cc:
    // 0x2143cc: 0x6fa70008  ldr         $a3, 0x8($sp)
    ctx->pc = 0x2143ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2143d0:
    // 0x2143d0: 0xb266131f  sdl         $a2, 0x131F($s3)
    ctx->pc = 0x2143d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4895); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2143d4:
    // 0x2143d4: 0xb6661318  sdr         $a2, 0x1318($s3)
    ctx->pc = 0x2143d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4888); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2143d8:
    // 0x2143d8: 0xb2671327  sdl         $a3, 0x1327($s3)
    ctx->pc = 0x2143d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4903); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2143dc:
    // 0x2143dc: 0xb6671320  sdr         $a3, 0x1320($s3)
    ctx->pc = 0x2143dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4896); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2143e0:
    // 0x2143e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2143e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2143e4:
    // 0x2143e4: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2143e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2143e8:
    // 0x2143e8: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2143e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2143ec:
    // 0x2143ec: 0x6ba6000f  ldl         $a2, 0xF($sp)
    ctx->pc = 0x2143ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2143f0:
    // 0x2143f0: 0x6fa60008  ldr         $a2, 0x8($sp)
    ctx->pc = 0x2143f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2143f4:
    // 0x2143f4: 0xb263174f  sdl         $v1, 0x174F($s3)
    ctx->pc = 0x2143f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 5967); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2143f8:
    // 0x2143f8: 0xb6631748  sdr         $v1, 0x1748($s3)
    ctx->pc = 0x2143f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 5960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2143fc:
    // 0x2143fc: 0xb2661757  sdl         $a2, 0x1757($s3)
    ctx->pc = 0x2143fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 5975); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_214400:
    // 0x214400: 0xb6661750  sdr         $a2, 0x1750($s3)
    ctx->pc = 0x214400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 5968); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_214404:
    // 0x214404: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x214404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_214408:
    // 0x214408: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x214408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_21440c:
    // 0x21440c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x21440cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_214410:
    // 0x214410: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x214410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_214414:
    // 0x214414: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x214414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_214418:
    // 0x214418: 0xb2621b7f  sdl         $v0, 0x1B7F($s3)
    ctx->pc = 0x214418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7039); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21441c:
    // 0x21441c: 0xb6621b78  sdr         $v0, 0x1B78($s3)
    ctx->pc = 0x21441cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7032); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_214420:
    // 0x214420: 0xb2631b87  sdl         $v1, 0x1B87($s3)
    ctx->pc = 0x214420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7047); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_214424:
    // 0x214424: 0xb6631b80  sdr         $v1, 0x1B80($s3)
    ctx->pc = 0x214424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7040); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_214428:
    // 0x214428: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x214428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21442c:
    // 0x21442c: 0x8e6740f4  lw          $a3, 0x40F4($s3)
    ctx->pc = 0x21442cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
label_214430:
    // 0x214430: 0x7a6840e0  lq          $t0, 0x40E0($s3)
    ctx->pc = 0x214430u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 19), 16608)));
label_214434:
    // 0x214434: 0xf73818  mult        $a3, $a3, $s7
    ctx->pc = 0x214434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_214438:
    // 0x214438: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x214438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_21443c:
    // 0x21443c: 0x786200e0  lq          $v0, 0xE0($v1)
    ctx->pc = 0x21443cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 224)));
label_214440:
    // 0x214440: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x214440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_214444:
    // 0x214444: 0x7e620860  sq          $v0, 0x860($s3)
    ctx->pc = 0x214444u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 2144), GPR_VEC(ctx, 2));
label_214448:
    // 0x214448: 0x78e300a0  lq          $v1, 0xA0($a3)
    ctx->pc = 0x214448u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 160)));
label_21444c:
    // 0x21444c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21444cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_214450:
    // 0x214450: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x214450u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_214454:
    // 0x214454: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x214454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_214458:
    // 0x214458: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x214458u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21445c:
    // 0x21445c: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x21445cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
label_214460:
    // 0x214460: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x214460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_214464:
    // 0x214464: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x214464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
label_214468:
    // 0x214468: 0xc06e4dc  jal         func_1B9370
label_21446c:
    if (ctx->pc == 0x21446Cu) {
        ctx->pc = 0x21446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214468u;
        // 0x21446c: 0x7fa80020  sq          $t0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214470u;
        goto label_214470;
    }
    ctx->pc = 0x214468u;
    SET_GPR_U32(ctx, 31, 0x214470u);
    ctx->pc = 0x21446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214468u;
    // 0x21446c: 0x7fa80020  sq          $t0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x214468u, 0x214470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214470u;
label_214470:
    // 0x214470: 0x8e6740f4  lw          $a3, 0x40F4($s3)
    ctx->pc = 0x214470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
label_214474:
    // 0x214474: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x214474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214478:
    // 0x214478: 0x7a6340e0  lq          $v1, 0x40E0($s3)
    ctx->pc = 0x214478u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 16608)));
label_21447c:
    // 0x21447c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21447cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_214480:
    // 0x214480: 0xf71018  mult        $v0, $a3, $s7
    ctx->pc = 0x214480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_214484:
    // 0x214484: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x214484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_214488:
    // 0x214488: 0x503821  addu        $a3, $v0, $s0
    ctx->pc = 0x214488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_21448c:
    // 0x21448c: 0x78e200b0  lq          $v0, 0xB0($a3)
    ctx->pc = 0x21448cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 176)));
label_214490:
    // 0x214490: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x214490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_214494:
    // 0x214494: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x214494u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_214498:
    // 0x214498: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x214498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21449c:
    // 0x21449c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21449cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2144a0:
    // 0x2144a0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2144a0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2144a4:
    // 0x2144a4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2144a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2144a8:
    // 0x2144a8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2144a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2144ac:
    // 0x2144ac: 0xc073464  jal         func_1CD190
label_2144b0:
    if (ctx->pc == 0x2144B0u) {
        ctx->pc = 0x2144B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144ACu;
        // 0x2144b0: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2144B4u;
        goto label_2144b4;
    }
    ctx->pc = 0x2144ACu;
    SET_GPR_U32(ctx, 31, 0x2144B4u);
    ctx->pc = 0x2144B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144ACu;
    // 0x2144b0: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x2144ACu, 0x2144B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144B4u;
label_2144b4:
    // 0x2144b4: 0x240200d9  addiu       $v0, $zero, 0xD9
    ctx->pc = 0x2144b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
label_2144b8:
    // 0x2144b8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2144b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2144bc:
    // 0x2144bc: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x2144bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_2144c0:
    // 0x2144c0: 0x2403009e  addiu       $v1, $zero, 0x9E
    ctx->pc = 0x2144c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_2144c4:
    // 0x2144c4: 0xae870070  sw          $a3, 0x70($s4)
    ctx->pc = 0x2144c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 7));
label_2144c8:
    // 0x2144c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2144c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2144cc:
    // 0x2144cc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2144ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2144d0:
    // 0x2144d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2144d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2144d4:
    // 0x2144d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2144d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2144d8:
    // 0x2144d8: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x2144d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_2144dc:
    // 0x2144dc: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x2144dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_2144e0:
    // 0x2144e0: 0xc073472  jal         func_1CD1C8
label_2144e4:
    if (ctx->pc == 0x2144E4u) {
        ctx->pc = 0x2144E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144E0u;
        // 0x2144e4: 0xa2260003  sb          $a2, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2144E8u;
        goto label_2144e8;
    }
    ctx->pc = 0x2144E0u;
    SET_GPR_U32(ctx, 31, 0x2144E8u);
    ctx->pc = 0x2144E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144E0u;
    // 0x2144e4: 0xa2260003  sb          $a2, 0x3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x2144E0u, 0x2144E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144E8u;
label_2144e8:
    // 0x2144e8: 0x8e6640f4  lw          $a2, 0x40F4($s3)
    ctx->pc = 0x2144e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
label_2144ec:
    // 0x2144ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2144ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2144f0:
    // 0x2144f0: 0x7a6340e0  lq          $v1, 0x40E0($s3)
    ctx->pc = 0x2144f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 16608)));
label_2144f4:
    // 0x2144f4: 0xd73018  mult        $a2, $a2, $s7
    ctx->pc = 0x2144f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2144f8:
    // 0x2144f8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2144f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2144fc:
    // 0x2144fc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2144fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_214500:
    // 0x214500: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x214500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_214504:
    // 0x214504: 0x78e200c0  lq          $v0, 0xC0($a3)
    ctx->pc = 0x214504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 192)));
label_214508:
    // 0x214508: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x214508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_21450c:
    // 0x21450c: 0xc4cc00d0  lwc1        $f12, 0xD0($a2)
    ctx->pc = 0x21450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_214510:
    // 0x214510: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x214510u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_214514:
    // 0x214514: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x214514u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_214518:
    // 0x214518: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x214518u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21451c:
    // 0x21451c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21451cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_214520:
    // 0x214520: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x214520u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_214524:
    // 0x214524: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x214524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_214528:
    // 0x214528: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x214528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_21452c:
    // 0x21452c: 0xc068848  jal         func_1A2120
label_214530:
    if (ctx->pc == 0x214530u) {
        ctx->pc = 0x214530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21452Cu;
        // 0x214530: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214534u;
        goto label_214534;
    }
    ctx->pc = 0x21452Cu;
    SET_GPR_U32(ctx, 31, 0x214534u);
    ctx->pc = 0x214530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21452Cu;
    // 0x214530: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x21452Cu, 0x214534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214534u;
label_214534:
    // 0x214534: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x214534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_214538:
    // 0x214538: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x214538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_21453c:
    // 0x21453c: 0xc06db90  jal         func_1B6E40
label_214540:
    if (ctx->pc == 0x214540u) {
        ctx->pc = 0x214540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21453Cu;
        // 0x214540: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214544u;
        goto label_214544;
    }
    ctx->pc = 0x21453Cu;
    SET_GPR_U32(ctx, 31, 0x214544u);
    ctx->pc = 0x214540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21453Cu;
    // 0x214540: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E40u, 0x21453Cu, 0x214544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214544u;
label_214544:
    // 0x214544: 0xc047e6c  jal         func_11F9B0
label_214548:
    if (ctx->pc == 0x214548u) {
        ctx->pc = 0x214548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214544u;
        // 0x214548: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21454Cu;
        goto label_21454c;
    }
    ctx->pc = 0x214544u;
    SET_GPR_U32(ctx, 31, 0x21454Cu);
    ctx->pc = 0x214548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214544u;
    // 0x214548: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x214544u, 0x21454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21454Cu;
label_21454c:
    // 0x21454c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_214550:
    if (ctx->pc == 0x214550u) {
        ctx->pc = 0x214550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21454Cu;
        // 0x214550: 0x8e6340f4  lw          $v1, 0x40F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214554u;
        goto label_214554;
    }
    ctx->pc = 0x21454Cu;
    {
        const bool branch_taken_0x21454c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21454c) {
            ctx->pc = 0x214550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21454Cu;
            // 0x214550: 0x8e6340f4  lw          $v1, 0x40F4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214574u;
            goto label_214574;
        }
    }
    ctx->pc = 0x214554u;
label_214554:
    // 0x214554: 0xc047e6c  jal         func_11F9B0
label_214558:
    if (ctx->pc == 0x214558u) {
        ctx->pc = 0x214558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214554u;
        // 0x214558: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21455Cu;
        goto label_21455c;
    }
    ctx->pc = 0x214554u;
    SET_GPR_U32(ctx, 31, 0x21455Cu);
    ctx->pc = 0x214558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214554u;
    // 0x214558: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x214554u, 0x21455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21455Cu;
label_21455c:
    // 0x21455c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21455cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_214560:
    // 0x214560: 0x846401f8  lh          $a0, 0x1F8($v1)
    ctx->pc = 0x214560u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 504)));
label_214564:
    // 0x214564: 0x8c6501fc  lw          $a1, 0x1FC($v1)
    ctx->pc = 0x214564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_214568:
    // 0x214568: 0xa0f809  jalr        $a1
label_21456c:
    if (ctx->pc == 0x21456Cu) {
        ctx->pc = 0x21456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214568u;
        // 0x21456c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214570u;
        goto label_214570;
    }
    ctx->pc = 0x214568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x214570u);
        ctx->pc = 0x21456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214568u;
        // 0x21456c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214568u, 0x214570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214570u;
label_214570:
    // 0x214570: 0x8e6340f4  lw          $v1, 0x40F4($s3)
    ctx->pc = 0x214570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
label_214574:
    // 0x214574: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x214574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_214578:
    // 0x214578: 0x7a6540e0  lq          $a1, 0x40E0($s3)
    ctx->pc = 0x214578u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 16608)));
label_21457c:
    // 0x21457c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21457cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_214580:
    // 0x214580: 0x771818  mult        $v1, $v1, $s7
    ctx->pc = 0x214580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_214584:
    // 0x214584: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x214584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_214588:
    // 0x214588: 0xc4c00090  lwc1        $f0, 0x90($a2)
    ctx->pc = 0x214588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21458c:
    // 0x21458c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x21458cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_214590:
    // 0x214590: 0x78620080  lq          $v0, 0x80($v1)
    ctx->pc = 0x214590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 128)));
label_214594:
    // 0x214594: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x214594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_214598:
    // 0x214598: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x214598u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21459c:
    // 0x21459c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x21459cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2145a0:
    // 0x2145a0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2145a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2145a4:
    // 0x2145a4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2145a4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2145a8:
    // 0x2145a8: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x2145a8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_2145ac:
    // 0x2145ac: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2145acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2145b0:
    // 0x2145b0: 0xc4c00094  lwc1        $f0, 0x94($a2)
    ctx->pc = 0x2145b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2145b4:
    // 0x2145b4: 0x7e650010  sq          $a1, 0x10($s3)
    ctx->pc = 0x2145b4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 5));
label_2145b8:
    // 0x2145b8: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x2145b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_2145bc:
    // 0x2145bc: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x2145bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
label_2145c0:
    // 0x2145c0: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x2145c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
label_2145c4:
    // 0x2145c4: 0x8eb00650  lw          $s0, 0x650($s5)
    ctx->pc = 0x2145c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1616)));
label_2145c8:
    // 0x2145c8: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x2145c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2145cc:
    // 0x2145cc: 0xc088c98  jal         func_223260
label_2145d0:
    if (ctx->pc == 0x2145D0u) {
        ctx->pc = 0x2145D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145CCu;
        // 0x2145d0: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2145D4u;
        goto label_2145d4;
    }
    ctx->pc = 0x2145CCu;
    SET_GPR_U32(ctx, 31, 0x2145D4u);
    ctx->pc = 0x2145D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2145CCu;
    // 0x2145d0: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x2145CCu, 0x2145D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2145D4u;
label_2145d4:
    // 0x2145d4: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x2145d4u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2145d8:
    // 0x2145d8: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2145dc:
    if (ctx->pc == 0x2145DCu) {
        ctx->pc = 0x2145E0u;
        goto label_2145e0;
    }
    ctx->pc = 0x2145D8u;
    {
        const bool branch_taken_0x2145d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2145d8) {
            ctx->pc = 0x21460Cu;
            goto label_21460c;
        }
    }
    ctx->pc = 0x2145E0u;
label_2145e0:
    // 0x2145e0: 0x8ea20650  lw          $v0, 0x650($s5)
    ctx->pc = 0x2145e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1616)));
label_2145e4:
    // 0x2145e4: 0x3c013bda  lui         $at, 0x3BDA
    ctx->pc = 0x2145e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15322 << 16));
label_2145e8:
    // 0x2145e8: 0x3421740e  ori         $at, $at, 0x740E
    ctx->pc = 0x2145e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29710);
label_2145ec:
    // 0x2145ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2145ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2145f0:
    // 0x2145f0: 0x222182a  slt         $v1, $s1, $v0
    ctx->pc = 0x2145f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2145f4:
    // 0x2145f4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2145f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2145f8:
    // 0x2145f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2145f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2145fc:
    // 0x2145fc: 0x0  nop
    ctx->pc = 0x2145fcu;
    // NOP
label_214600:
    // 0x214600: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x214600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_214604:
    // 0x214604: 0x1000000b  b           . + 4 + (0xB << 2)
label_214608:
    if (ctx->pc == 0x214608u) {
        ctx->pc = 0x214608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214604u;
        // 0x214608: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21460Cu;
        goto label_21460c;
    }
    ctx->pc = 0x214604u;
    {
        const bool branch_taken_0x214604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214604u;
        // 0x214608: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214604) {
            ctx->pc = 0x214634u;
            goto label_214634;
        }
    }
    ctx->pc = 0x21460Cu;
label_21460c:
    // 0x21460c: 0xc088c98  jal         func_223260
label_214610:
    if (ctx->pc == 0x214610u) {
        ctx->pc = 0x214610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21460Cu;
        // 0x214610: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214614u;
        goto label_214614;
    }
    ctx->pc = 0x21460Cu;
    SET_GPR_U32(ctx, 31, 0x214614u);
    ctx->pc = 0x214610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21460Cu;
    // 0x214610: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x21460Cu, 0x214614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214614u;
label_214614:
    // 0x214614: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x214614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_214618:
    // 0x214618: 0x0  nop
    ctx->pc = 0x214618u;
    // NOP
label_21461c:
    // 0x21461c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21461cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_214620:
    // 0x214620: 0x3c013bda  lui         $at, 0x3BDA
    ctx->pc = 0x214620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15322 << 16));
label_214624:
    // 0x214624: 0x3421740e  ori         $at, $at, 0x740E
    ctx->pc = 0x214624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29710);
label_214628:
    // 0x214628: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21462c:
    // 0x21462c: 0x0  nop
    ctx->pc = 0x21462cu;
    // NOP
label_214630:
    // 0x214630: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x214630u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_214634:
    // 0x214634: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x214634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_214638:
    // 0x214638: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x214638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_21463c:
    // 0x21463c: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x21463cu;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
label_214640:
    // 0x214640: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x214640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_214644:
    // 0x214644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x214644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_214648:
    // 0x214648: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x214648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21464c:
    // 0x21464c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x21464cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_214650:
    // 0x214650: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x214650u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_214654:
    // 0x214654: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x214654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_214658:
    // 0x214658: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x214658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_21465c:
    // 0x21465c: 0xdea200e0  ld          $v0, 0xE0($s5)
    ctx->pc = 0x21465cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 224)));
label_214660:
    // 0x214660: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x214660u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_214664:
    // 0x214664: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x214664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_214668:
    // 0x214668: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x214668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_21466c:
    // 0x21466c: 0xc2180a  movz        $v1, $a2, $v0
    ctx->pc = 0x21466cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
label_214670:
    // 0x214670: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x214670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_214674:
    // 0x214674: 0xa3a50034  sb          $a1, 0x34($sp)
    ctx->pc = 0x214674u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 52), (uint8_t)GPR_U32(ctx, 5));
label_214678:
    // 0x214678: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x214678u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
label_21467c:
    // 0x21467c: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x21467cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
label_214680:
    // 0x214680: 0xa0e50002  sb          $a1, 0x2($a3)
    ctx->pc = 0x214680u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 5));
label_214684:
    // 0x214684: 0xae660028  sw          $a2, 0x28($s3)
    ctx->pc = 0x214684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 6));
label_214688:
    // 0x214688: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x214688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_21468c:
    // 0x21468c: 0xc088c98  jal         func_223260
label_214690:
    if (ctx->pc == 0x214690u) {
        ctx->pc = 0x214690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21468Cu;
        // 0x214690: 0xae620024  sw          $v0, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214694u;
        goto label_214694;
    }
    ctx->pc = 0x21468Cu;
    SET_GPR_U32(ctx, 31, 0x214694u);
    ctx->pc = 0x214690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21468Cu;
    // 0x214690: 0xae620024  sw          $v0, 0x24($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x21468Cu, 0x214694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214694u;
label_214694:
    // 0x214694: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_214698:
    if (ctx->pc == 0x214698u) {
        ctx->pc = 0x214698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214694u;
        // 0x214698: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21469Cu;
        goto label_21469c;
    }
    ctx->pc = 0x214694u;
    {
        const bool branch_taken_0x214694 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x214698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214694u;
        // 0x214698: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214694) {
            ctx->pc = 0x2146B0u;
            goto label_2146b0;
        }
    }
    ctx->pc = 0x21469Cu;
label_21469c:
    // 0x21469c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21469cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2146a0:
    // 0x2146a0: 0x0  nop
    ctx->pc = 0x2146a0u;
    // NOP
label_2146a4:
    // 0x2146a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2146a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2146a8:
    // 0x2146a8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2146ac:
    if (ctx->pc == 0x2146ACu) {
        ctx->pc = 0x2146ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146A8u;
        // 0x2146ac: 0x8e6540f4  lw          $a1, 0x40F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2146B0u;
        goto label_2146b0;
    }
    ctx->pc = 0x2146A8u;
    {
        const bool branch_taken_0x2146a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2146ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146A8u;
        // 0x2146ac: 0x8e6540f4  lw          $a1, 0x40F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146a8) {
            ctx->pc = 0x2146CCu;
            goto label_2146cc;
        }
    }
    ctx->pc = 0x2146B0u;
label_2146b0:
    // 0x2146b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2146b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2146b4:
    // 0x2146b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2146b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2146b8:
    // 0x2146b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2146b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2146bc:
    // 0x2146bc: 0x0  nop
    ctx->pc = 0x2146bcu;
    // NOP
label_2146c0:
    // 0x2146c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2146c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2146c4:
    // 0x2146c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2146c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2146c8:
    // 0x2146c8: 0x8e6540f4  lw          $a1, 0x40F4($s3)
    ctx->pc = 0x2146c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
label_2146cc:
    // 0x2146cc: 0x24110240  addiu       $s1, $zero, 0x240
    ctx->pc = 0x2146ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_2146d0:
    // 0x2146d0: 0x3c013bda  lui         $at, 0x3BDA
    ctx->pc = 0x2146d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15322 << 16));
label_2146d4:
    // 0x2146d4: 0x3421740e  ori         $at, $at, 0x740E
    ctx->pc = 0x2146d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29710);
label_2146d8:
    // 0x2146d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2146d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2146dc:
    // 0x2146dc: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x2146dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_2146e0:
    // 0x2146e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2146e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2146e4:
    // 0x2146e4: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x2146e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2146e8:
    // 0x2146e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2146e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2146ec:
    // 0x2146ec: 0x2512faa0  addiu       $s2, $t0, -0x560
    ctx->pc = 0x2146ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965920));
label_2146f0:
    // 0x2146f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2146f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2146f4:
    // 0x2146f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2146f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2146f8:
    // 0x2146f8: 0x46140028  max.s       $f0, $f0, $f20
    ctx->pc = 0x2146f8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
label_2146fc:
    // 0x2146fc: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x2146fcu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_214700:
    // 0x214700: 0x2650ffa0  addiu       $s0, $s2, -0x60
    ctx->pc = 0x214700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967200));
label_214704:
    // 0x214704: 0xe660003c  swc1        $f0, 0x3C($s3)
    ctx->pc = 0x214704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
label_214708:
    // 0x214708: 0xb22021  addu        $a0, $a1, $s2
    ctx->pc = 0x214708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_21470c:
    // 0x21470c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x21470cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_214710:
    // 0x214710: 0x7a6240e0  lq          $v0, 0x40E0($s3)
    ctx->pc = 0x214710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16608)));
label_214714:
    // 0x214714: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x214714u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_214718:
    // 0x214718: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x214718u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_21471c:
    // 0x21471c: 0xc4ac0070  lwc1        $f12, 0x70($a1)
    ctx->pc = 0x21471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_214720:
    // 0x214720: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x214720u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_214724:
    // 0x214724: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x214724u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_214728:
    // 0x214728: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x214728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21472c:
    // 0x21472c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21472cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_214730:
    // 0x214730: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x214730u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_214734:
    // 0x214734: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x214734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_214738:
    // 0x214738: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x214738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21473c:
    // 0x21473c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x21473cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_214740:
    // 0x214740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214744:
    // 0x214744: 0xc068848  jal         func_1A2120
label_214748:
    if (ctx->pc == 0x214748u) {
        ctx->pc = 0x214748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214744u;
        // 0x214748: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21474Cu;
        goto label_21474c;
    }
    ctx->pc = 0x214744u;
    SET_GPR_U32(ctx, 31, 0x21474Cu);
    ctx->pc = 0x214748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214744u;
    // 0x214748: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x214744u, 0x21474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21474Cu;
label_21474c:
    // 0x21474c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21474cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214750:
    // 0x214750: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x214750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_214754:
    // 0x214754: 0xc068818  jal         func_1A2060
label_214758:
    if (ctx->pc == 0x214758u) {
        ctx->pc = 0x214758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214754u;
        // 0x214758: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21475Cu;
        goto label_21475c;
    }
    ctx->pc = 0x214754u;
    SET_GPR_U32(ctx, 31, 0x21475Cu);
    ctx->pc = 0x214758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214754u;
    // 0x214758: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x214754u, 0x21475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21475Cu;
label_21475c:
    // 0x21475c: 0x8e6240f4  lw          $v0, 0x40F4($s3)
    ctx->pc = 0x21475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
label_214760:
    // 0x214760: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x214760u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_214764:
    // 0x214764: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x214764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_214768:
    // 0x214768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21476c:
    // 0x21476c: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x21476cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_214770:
    // 0x214770: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x214770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_214774:
    // 0x214774: 0xc068848  jal         func_1A2120
label_214778:
    if (ctx->pc == 0x214778u) {
        ctx->pc = 0x214778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214774u;
        // 0x214778: 0xc44c0070  lwc1        $f12, 0x70($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21477Cu;
        goto label_21477c;
    }
    ctx->pc = 0x214774u;
    SET_GPR_U32(ctx, 31, 0x21477Cu);
    ctx->pc = 0x214778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214774u;
    // 0x214778: 0xc44c0070  lwc1        $f12, 0x70($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x214774u, 0x21477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21477Cu;
label_21477c:
    // 0x21477c: 0x8e6240f4  lw          $v0, 0x40F4($s3)
    ctx->pc = 0x21477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
label_214780:
    // 0x214780: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x214780u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_214784:
    // 0x214784: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x214784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_214788:
    // 0x214788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21478c:
    // 0x21478c: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x21478cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_214790:
    // 0x214790: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x214790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_214794:
    // 0x214794: 0xc068848  jal         func_1A2120
label_214798:
    if (ctx->pc == 0x214798u) {
        ctx->pc = 0x214798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214794u;
        // 0x214798: 0xc44c0070  lwc1        $f12, 0x70($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21479Cu;
        goto label_21479c;
    }
    ctx->pc = 0x214794u;
    SET_GPR_U32(ctx, 31, 0x21479Cu);
    ctx->pc = 0x214798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214794u;
    // 0x214798: 0xc44c0070  lwc1        $f12, 0x70($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x214794u, 0x21479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21479Cu;
label_21479c:
    // 0x21479c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x21479cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2147a0:
    // 0x2147a0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2147a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2147a4:
    // 0x2147a4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2147a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2147a8:
    // 0x2147a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2147a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2147ac:
    // 0x2147ac: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2147acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2147b0:
    // 0x2147b0: 0xc4830054  lwc1        $f3, 0x54($a0)
    ctx->pc = 0x2147b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2147b4:
    // 0x2147b4: 0xc4a20058  lwc1        $f2, 0x58($a1)
    ctx->pc = 0x2147b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2147b8:
    // 0x2147b8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2147b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_2147bc:
    // 0x2147bc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2147bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2147c0:
    // 0x2147c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2147c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2147c4:
    // 0x2147c4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2147c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2147c8:
    // 0x2147c8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2147c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2147cc:
    // 0x2147cc: 0xc068818  jal         func_1A2060
label_2147d0:
    if (ctx->pc == 0x2147D0u) {
        ctx->pc = 0x2147D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147CCu;
        // 0x2147d0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2147D4u;
        goto label_2147d4;
    }
    ctx->pc = 0x2147CCu;
    SET_GPR_U32(ctx, 31, 0x2147D4u);
    ctx->pc = 0x2147D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2147CCu;
    // 0x2147d0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x2147CCu, 0x2147D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2147D4u;
label_2147d4:
    // 0x2147d4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2147d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2147d8:
    // 0x2147d8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x2147d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_2147dc:
    // 0x2147dc: 0x90c2005c  lbu         $v0, 0x5C($a2)
    ctx->pc = 0x2147dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 92)));
label_2147e0:
    // 0x2147e0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2147e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2147e4:
    // 0x2147e4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2147e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2147e8:
    // 0x2147e8: 0xa3a00038  sb          $zero, 0x38($sp)
    ctx->pc = 0x2147e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 0));
label_2147ec:
    // 0x2147ec: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x2147ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
label_2147f0:
    // 0x2147f0: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x2147f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
label_2147f4:
    // 0x2147f4: 0xc068992  jal         func_1A2648
label_2147f8:
    if (ctx->pc == 0x2147F8u) {
        ctx->pc = 0x2147F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147F4u;
        // 0x2147f8: 0xa0e00002  sb          $zero, 0x2($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2147FCu;
        goto label_2147fc;
    }
    ctx->pc = 0x2147F4u;
    SET_GPR_U32(ctx, 31, 0x2147FCu);
    ctx->pc = 0x2147F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2147F4u;
    // 0x2147f8: 0xa0e00002  sb          $zero, 0x2($a3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x2147F4u, 0x2147FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2147FCu;
label_2147fc:
    // 0x2147fc: 0x8e6740f4  lw          $a3, 0x40F4($s3)
    ctx->pc = 0x2147fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
label_214800:
    // 0x214800: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x214800u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_214804:
    // 0x214804: 0x7a6340e0  lq          $v1, 0x40E0($s3)
    ctx->pc = 0x214804u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 16608)));
label_214808:
    // 0x214808: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x214808u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_21480c:
    // 0x21480c: 0xf11018  mult        $v0, $a3, $s1
    ctx->pc = 0x21480cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_214810:
    // 0x214810: 0xc4c20060  lwc1        $f2, 0x60($a2)
    ctx->pc = 0x214810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_214814:
    // 0x214814: 0xc5030064  lwc1        $f3, 0x64($t0)
    ctx->pc = 0x214814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_214818:
    // 0x214818: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x214818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21481c:
    // 0x21481c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x21481cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_214820:
    // 0x214820: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x214820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_214824:
    // 0x214824: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x214824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_214828:
    // 0x214828: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x214828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_21482c:
    // 0x21482c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21482cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_214830:
    // 0x214830: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x214830u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_214834:
    // 0x214834: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x214834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_214838:
    // 0x214838: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x214838u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21483c:
    // 0x21483c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x21483cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_214840:
    // 0x214840: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x214840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_214844:
    // 0x214844: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x214844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_214848:
    // 0x214848: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x214848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_21484c:
    // 0x21484c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x21484cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_214850:
    // 0x214850: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x214850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214854:
    // 0x214854: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x214854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_214858:
    // 0x214858: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x214858u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_21485c:
    // 0x21485c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x21485cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_214860:
    // 0x214860: 0xc068818  jal         func_1A2060
label_214864:
    if (ctx->pc == 0x214864u) {
        ctx->pc = 0x214864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214860u;
        // 0x214864: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x214868u;
        goto label_214868;
    }
    ctx->pc = 0x214860u;
    SET_GPR_U32(ctx, 31, 0x214868u);
    ctx->pc = 0x214864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214860u;
    // 0x214864: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x214860u, 0x214868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214868u;
label_214868:
    // 0x214868: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x214868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_21486c:
    // 0x21486c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x21486cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_214870:
    // 0x214870: 0x90620068  lbu         $v0, 0x68($v1)
    ctx->pc = 0x214870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 104)));
label_214874:
    // 0x214874: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x214874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_214878:
    // 0x214878: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x214878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21487c:
    // 0x21487c: 0xa3a0003c  sb          $zero, 0x3C($sp)
    ctx->pc = 0x21487cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 0));
label_214880:
    // 0x214880: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x214880u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
label_214884:
    // 0x214884: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x214884u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
label_214888:
    // 0x214888: 0xc068992  jal         func_1A2648
label_21488c:
    if (ctx->pc == 0x21488Cu) {
        ctx->pc = 0x21488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214888u;
        // 0x21488c: 0xa0c00002  sb          $zero, 0x2($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214890u;
        goto label_214890;
    }
    ctx->pc = 0x214888u;
    SET_GPR_U32(ctx, 31, 0x214890u);
    ctx->pc = 0x21488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214888u;
    // 0x21488c: 0xa0c00002  sb          $zero, 0x2($a2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x214888u, 0x214890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214890u;
label_214890:
    // 0x214890: 0xc08a05a  jal         func_228168
label_214894:
    if (ctx->pc == 0x214894u) {
        ctx->pc = 0x214894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214890u;
        // 0x214894: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214898u;
        goto label_214898;
    }
    ctx->pc = 0x214890u;
    SET_GPR_U32(ctx, 31, 0x214898u);
    ctx->pc = 0x214894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214890u;
    // 0x214894: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x214890u, 0x214898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214898u;
label_214898:
    // 0x214898: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_21489c:
    if (ctx->pc == 0x21489Cu) {
        ctx->pc = 0x21489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214898u;
        // 0x21489c: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2148A0u;
        goto label_2148a0;
    }
    ctx->pc = 0x214898u;
    {
        const bool branch_taken_0x214898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214898u;
        // 0x21489c: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214898) {
            ctx->pc = 0x2148D0u;
            goto label_2148d0;
        }
    }
    ctx->pc = 0x2148A0u;
label_2148a0:
    // 0x2148a0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2148a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2148a4:
    // 0x2148a4: 0xa3a40040  sb          $a0, 0x40($sp)
    ctx->pc = 0x2148a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 4));
label_2148a8:
    // 0x2148a8: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2148a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2148ac:
    // 0x2148ac: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x2148acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2148b0:
    // 0x2148b0: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x2148b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
label_2148b4:
    // 0x2148b4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2148b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_2148b8:
    // 0x2148b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2148b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2148bc:
    // 0x2148bc: 0xa0460003  sb          $a2, 0x3($v0)
    ctx->pc = 0x2148bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 6));
label_2148c0:
    // 0x2148c0: 0xc068992  jal         func_1A2648
label_2148c4:
    if (ctx->pc == 0x2148C4u) {
        ctx->pc = 0x2148C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148C0u;
        // 0x2148c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2148C8u;
        goto label_2148c8;
    }
    ctx->pc = 0x2148C0u;
    SET_GPR_U32(ctx, 31, 0x2148C8u);
    ctx->pc = 0x2148C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148C0u;
    // 0x2148c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x2148C0u, 0x2148C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148C8u;
label_2148c8:
    // 0x2148c8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2148cc:
    if (ctx->pc == 0x2148CCu) {
        ctx->pc = 0x2148CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148C8u;
        // 0x2148cc: 0xc6610038  lwc1        $f1, 0x38($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2148D0u;
        goto label_2148d0;
    }
    ctx->pc = 0x2148C8u;
    {
        const bool branch_taken_0x2148c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148C8u;
        // 0x2148cc: 0xc6610038  lwc1        $f1, 0x38($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148c8) {
            ctx->pc = 0x2148F4u;
            goto label_2148f4;
        }
    }
    ctx->pc = 0x2148D0u;
label_2148d0:
    // 0x2148d0: 0xdea200e0  ld          $v0, 0xE0($s5)
    ctx->pc = 0x2148d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 224)));
label_2148d4:
    // 0x2148d4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2148d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_2148d8:
    // 0x2148d8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2148d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2148dc:
    // 0x2148dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2148dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2148e0:
    // 0x2148e0: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x2148e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2148e4:
    // 0x2148e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2148e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2148e8:
    // 0x2148e8: 0xc068992  jal         func_1A2648
label_2148ec:
    if (ctx->pc == 0x2148ECu) {
        ctx->pc = 0x2148ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148E8u;
        // 0x2148ec: 0xe2280a  movz        $a1, $a3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2148F0u;
        goto label_2148f0;
    }
    ctx->pc = 0x2148E8u;
    SET_GPR_U32(ctx, 31, 0x2148F0u);
    ctx->pc = 0x2148ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148E8u;
    // 0x2148ec: 0xe2280a  movz        $a1, $a3, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x2148E8u, 0x2148F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148F0u;
label_2148f0:
    // 0x2148f0: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x2148f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2148f4:
    // 0x2148f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2148f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2148f8:
    // 0x2148f8: 0x0  nop
    ctx->pc = 0x2148f8u;
    // NOP
label_2148fc:
    // 0x2148fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2148fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_214900:
    // 0x214900: 0x0  nop
    ctx->pc = 0x214900u;
    // NOP
label_214904:
    // 0x214904: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_214908:
    if (ctx->pc == 0x214908u) {
        ctx->pc = 0x214908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214904u;
        // 0x214908: 0xae60411c  sw          $zero, 0x411C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21490Cu;
        goto label_21490c;
    }
    ctx->pc = 0x214904u;
    {
        const bool branch_taken_0x214904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x214904) {
            ctx->pc = 0x214908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214904u;
            // 0x214908: 0xae60411c  sw          $zero, 0x411C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 16668), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21490Cu;
            goto label_21490c;
        }
    }
    ctx->pc = 0x21490Cu;
label_21490c:
    // 0x21490c: 0xc088c98  jal         func_223260
label_214910:
    if (ctx->pc == 0x214910u) {
        ctx->pc = 0x214910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21490Cu;
        // 0x214910: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214914u;
        goto label_214914;
    }
    ctx->pc = 0x21490Cu;
    SET_GPR_U32(ctx, 31, 0x214914u);
    ctx->pc = 0x214910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21490Cu;
    // 0x214910: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x21490Cu, 0x214914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214914u;
label_214914:
    // 0x214914: 0x8ea30650  lw          $v1, 0x650($s5)
    ctx->pc = 0x214914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1616)));
label_214918:
    // 0x214918: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x214918u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21491c:
    // 0x21491c: 0x54600053  bnel        $v1, $zero, . + 4 + (0x53 << 2)
label_214920:
    if (ctx->pc == 0x214920u) {
        ctx->pc = 0x214920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21491Cu;
        // 0x214920: 0xae60410c  sw          $zero, 0x410C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214924u;
        goto label_214924;
    }
    ctx->pc = 0x21491Cu;
    {
        const bool branch_taken_0x21491c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21491c) {
            ctx->pc = 0x214920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21491Cu;
            // 0x214920: 0xae60410c  sw          $zero, 0x410C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 16652), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214A6Cu;
            goto label_214a6c;
        }
    }
    ctx->pc = 0x214924u;
label_214924:
    // 0x214924: 0x8e62410c  lw          $v0, 0x410C($s3)
    ctx->pc = 0x214924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16652)));
label_214928:
    // 0x214928: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_21492c:
    if (ctx->pc == 0x21492Cu) {
        ctx->pc = 0x21492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214928u;
        // 0x21492c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214930u;
        goto label_214930;
    }
    ctx->pc = 0x214928u;
    {
        const bool branch_taken_0x214928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214928u;
        // 0x21492c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214928) {
            ctx->pc = 0x21495Cu;
            goto label_21495c;
        }
    }
    ctx->pc = 0x214930u;
label_214930:
    // 0x214930: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x214930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_214934:
    // 0x214934: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x214934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_214938:
    // 0x214938: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x214938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_21493c:
    // 0x21493c: 0x24a59e28  addiu       $a1, $a1, -0x61D8
    ctx->pc = 0x21493cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942248));
label_214940:
    // 0x214940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x214940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214944:
    // 0x214944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x214944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214948:
    // 0x214948: 0xc043f1c  jal         func_10FC70
label_21494c:
    if (ctx->pc == 0x21494Cu) {
        ctx->pc = 0x21494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214948u;
        // 0x21494c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214950u;
        goto label_214950;
    }
    ctx->pc = 0x214948u;
    SET_GPR_U32(ctx, 31, 0x214950u);
    ctx->pc = 0x21494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214948u;
    // 0x21494c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x214948u, 0x214950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214950u;
label_214950:
    // 0x214950: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x214950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214954:
    // 0x214954: 0xae63410c  sw          $v1, 0x410C($s3)
    ctx->pc = 0x214954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16652), GPR_U32(ctx, 3));
label_214958:
    // 0x214958: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x214958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_21495c:
    // 0x21495c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21495cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_214960:
    // 0x214960: 0x8ca4b734  lw          $a0, -0x48CC($a1)
    ctx->pc = 0x214960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_214964:
    // 0x214964: 0x8c4600cc  lw          $a2, 0xCC($v0)
    ctx->pc = 0x214964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_214968:
    // 0x214968: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x214968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_21496c:
    // 0x21496c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x21496cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_214970:
    // 0x214970: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x214970u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_214974:
    // 0x214974: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_214978:
    if (ctx->pc == 0x214978u) {
        ctx->pc = 0x214978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214974u;
        // 0x214978: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21497Cu;
        goto label_21497c;
    }
    ctx->pc = 0x214974u;
    {
        const bool branch_taken_0x214974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x214974) {
            ctx->pc = 0x214978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214974u;
            // 0x214978: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21497Cu;
            goto label_21497c;
        }
    }
    ctx->pc = 0x21497Cu;
label_21497c:
    // 0x21497c: 0x1010  mfhi        $v0
    ctx->pc = 0x21497cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_214980:
    // 0x214980: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x214980u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_214984:
    // 0x214984: 0x2012  mflo        $a0
    ctx->pc = 0x214984u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_214988:
    // 0x214988: 0x1010  mfhi        $v0
    ctx->pc = 0x214988u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_21498c:
    // 0x21498c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_214990:
    if (ctx->pc == 0x214990u) {
        ctx->pc = 0x214994u;
        goto label_214994;
    }
    ctx->pc = 0x21498Cu;
    {
        const bool branch_taken_0x21498c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21498c) {
            ctx->pc = 0x2149ACu;
            goto label_2149ac;
        }
    }
    ctx->pc = 0x214994u;
label_214994:
    // 0x214994: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_214998:
    if (ctx->pc == 0x214998u) {
        ctx->pc = 0x214998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214994u;
        // 0x214998: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21499Cu;
        goto label_21499c;
    }
    ctx->pc = 0x214994u;
    {
        const bool branch_taken_0x214994 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x214994) {
            ctx->pc = 0x214998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214994u;
            // 0x214998: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21499Cu;
            goto label_21499c;
        }
    }
    ctx->pc = 0x21499Cu;
label_21499c:
    // 0x21499c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_2149a0:
    if (ctx->pc == 0x2149A0u) {
        ctx->pc = 0x2149A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21499Cu;
        // 0x2149a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2149A4u;
        goto label_2149a4;
    }
    ctx->pc = 0x21499Cu;
    {
        const bool branch_taken_0x21499c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2149A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21499Cu;
        // 0x2149a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21499c) {
            ctx->pc = 0x2149C0u;
            goto label_2149c0;
        }
    }
    ctx->pc = 0x2149A4u;
label_2149a4:
    // 0x2149a4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2149a8:
    if (ctx->pc == 0x2149A8u) {
        ctx->pc = 0x2149A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149A4u;
        // 0x2149a8: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2149ACu;
        goto label_2149ac;
    }
    ctx->pc = 0x2149A4u;
    {
        const bool branch_taken_0x2149a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149A4u;
        // 0x2149a8: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149a4) {
            ctx->pc = 0x2149D8u;
            goto label_2149d8;
        }
    }
    ctx->pc = 0x2149ACu;
label_2149ac:
    // 0x2149ac: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_2149b0:
    if (ctx->pc == 0x2149B0u) {
        ctx->pc = 0x2149B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149ACu;
        // 0x2149b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2149B4u;
        goto label_2149b4;
    }
    ctx->pc = 0x2149ACu;
    {
        const bool branch_taken_0x2149ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2149ac) {
            ctx->pc = 0x2149B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2149ACu;
            // 0x2149b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2149B4u;
            goto label_2149b4;
        }
    }
    ctx->pc = 0x2149B4u;
label_2149b4:
    // 0x2149b4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2149b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2149b8:
    // 0x2149b8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2149bc:
    if (ctx->pc == 0x2149BCu) {
        ctx->pc = 0x2149BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149B8u;
        // 0x2149bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2149C0u;
        goto label_2149c0;
    }
    ctx->pc = 0x2149B8u;
    {
        const bool branch_taken_0x2149b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2149BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149B8u;
        // 0x2149bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149b8) {
            ctx->pc = 0x2149D4u;
            goto label_2149d4;
        }
    }
    ctx->pc = 0x2149C0u;
label_2149c0:
    // 0x2149c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2149c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2149c4:
    // 0x2149c4: 0x0  nop
    ctx->pc = 0x2149c4u;
    // NOP
label_2149c8:
    // 0x2149c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2149c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2149cc:
    // 0x2149cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2149d0:
    if (ctx->pc == 0x2149D0u) {
        ctx->pc = 0x2149D4u;
        goto label_2149d4;
    }
    ctx->pc = 0x2149CCu;
    {
        const bool branch_taken_0x2149cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2149cc) {
            ctx->pc = 0x2149ECu;
            goto label_2149ec;
        }
    }
    ctx->pc = 0x2149D4u;
label_2149d4:
    // 0x2149d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2149d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2149d8:
    // 0x2149d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2149d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2149dc:
    // 0x2149dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2149dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2149e0:
    // 0x2149e0: 0x0  nop
    ctx->pc = 0x2149e0u;
    // NOP
label_2149e4:
    // 0x2149e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2149e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2149e8:
    // 0x2149e8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2149e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2149ec:
    // 0x2149ec: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
label_2149f0:
    if (ctx->pc == 0x2149F0u) {
        ctx->pc = 0x2149F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149ECu;
        // 0x2149f0: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2149F4u;
        goto label_2149f4;
    }
    ctx->pc = 0x2149ECu;
    {
        const bool branch_taken_0x2149ec = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2149F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149ECu;
        // 0x2149f0: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149ec) {
            ctx->pc = 0x214A08u;
            goto label_214a08;
        }
    }
    ctx->pc = 0x2149F4u;
label_2149f4:
    // 0x2149f4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2149f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2149f8:
    // 0x2149f8: 0x0  nop
    ctx->pc = 0x2149f8u;
    // NOP
label_2149fc:
    // 0x2149fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2149fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_214a00:
    // 0x214a00: 0x10000007  b           . + 4 + (0x7 << 2)
label_214a04:
    if (ctx->pc == 0x214A04u) {
        ctx->pc = 0x214A08u;
        goto label_214a08;
    }
    ctx->pc = 0x214A00u;
    {
        const bool branch_taken_0x214a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214a00) {
            ctx->pc = 0x214A20u;
            goto label_214a20;
        }
    }
    ctx->pc = 0x214A08u;
label_214a08:
    // 0x214a08: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x214a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_214a0c:
    // 0x214a0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x214a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_214a10:
    // 0x214a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x214a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_214a14:
    // 0x214a14: 0x0  nop
    ctx->pc = 0x214a14u;
    // NOP
label_214a18:
    // 0x214a18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x214a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_214a1c:
    // 0x214a1c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x214a1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_214a20:
    // 0x214a20: 0x0  nop
    ctx->pc = 0x214a20u;
    // NOP
label_214a24:
    // 0x214a24: 0x0  nop
    ctx->pc = 0x214a24u;
    // NOP
label_214a28:
    // 0x214a28: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x214a28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_214a2c:
    // 0x214a2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x214a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_214a30:
    // 0x214a30: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x214a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214a34:
    // 0x214a34: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x214a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_214a38:
    // 0x214a38: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x214a38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_214a3c:
    // 0x214a3c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x214a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_214a40:
    // 0x214a40: 0x0  nop
    ctx->pc = 0x214a40u;
    // NOP
label_214a44:
    // 0x214a44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_214a48:
    if (ctx->pc == 0x214A48u) {
        ctx->pc = 0x214A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A44u;
        // 0x214a48: 0x8fa50058  lw          $a1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A4Cu;
        goto label_214a4c;
    }
    ctx->pc = 0x214A44u;
    {
        const bool branch_taken_0x214a44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A44u;
        // 0x214a48: 0x8fa50058  lw          $a1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a44) {
            ctx->pc = 0x214A58u;
            goto label_214a58;
        }
    }
    ctx->pc = 0x214A4Cu;
label_214a4c:
    // 0x214a4c: 0x8e624144  lw          $v0, 0x4144($s3)
    ctx->pc = 0x214a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16708)));
label_214a50:
    // 0x214a50: 0x10000004  b           . + 4 + (0x4 << 2)
label_214a54:
    if (ctx->pc == 0x214A54u) {
        ctx->pc = 0x214A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A50u;
        // 0x214a54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A58u;
        goto label_214a58;
    }
    ctx->pc = 0x214A50u;
    {
        const bool branch_taken_0x214a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A50u;
        // 0x214a54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a50) {
            ctx->pc = 0x214A64u;
            goto label_214a64;
        }
    }
    ctx->pc = 0x214A58u;
label_214a58:
    // 0x214a58: 0x8e624148  lw          $v0, 0x4148($s3)
    ctx->pc = 0x214a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16712)));
label_214a5c:
    // 0x214a5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x214a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_214a60:
    // 0x214a60: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x214a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_214a64:
    // 0x214a64: 0xc068992  jal         func_1A2648
label_214a68:
    if (ctx->pc == 0x214A68u) {
        ctx->pc = 0x214A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A64u;
        // 0x214a68: 0xae620028  sw          $v0, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A6Cu;
        goto label_214a6c;
    }
    ctx->pc = 0x214A64u;
    SET_GPR_U32(ctx, 31, 0x214A6Cu);
    ctx->pc = 0x214A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A64u;
    // 0x214a68: 0xae620028  sw          $v0, 0x28($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x214A64u, 0x214A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A6Cu;
label_214a6c:
    // 0x214a6c: 0xc071e4a  jal         func_1C7928
label_214a70:
    if (ctx->pc == 0x214A70u) {
        ctx->pc = 0x214A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A6Cu;
        // 0x214a70: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A74u;
        goto label_214a74;
    }
    ctx->pc = 0x214A6Cu;
    SET_GPR_U32(ctx, 31, 0x214A74u);
    ctx->pc = 0x214A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A6Cu;
    // 0x214a70: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7928u, 0x214A6Cu, 0x214A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A74u;
label_214a74:
    // 0x214a74: 0xc06fb2c  jal         func_1BECB0
label_214a78:
    if (ctx->pc == 0x214A78u) {
        ctx->pc = 0x214A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A74u;
        // 0x214a78: 0x8fa40084  lw          $a0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A7Cu;
        goto label_214a7c;
    }
    ctx->pc = 0x214A74u;
    SET_GPR_U32(ctx, 31, 0x214A7Cu);
    ctx->pc = 0x214A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A74u;
    // 0x214a78: 0x8fa40084  lw          $a0, 0x84($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECB0u, 0x214A74u, 0x214A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A7Cu;
label_214a7c:
    // 0x214a7c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x214a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_214a80:
    // 0x214a80: 0xc071a54  jal         func_1C6950
label_214a84:
    if (ctx->pc == 0x214A84u) {
        ctx->pc = 0x214A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A80u;
        // 0x214a84: 0x8e6540f4  lw          $a1, 0x40F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A88u;
        goto label_214a88;
    }
    ctx->pc = 0x214A80u;
    SET_GPR_U32(ctx, 31, 0x214A88u);
    ctx->pc = 0x214A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A80u;
    // 0x214a84: 0x8e6540f4  lw          $a1, 0x40F4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6950u, 0x214A80u, 0x214A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A88u;
label_214a88:
    // 0x214a88: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x214a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_214a8c:
    // 0x214a8c: 0xc0725d2  jal         func_1C9748
label_214a90:
    if (ctx->pc == 0x214A90u) {
        ctx->pc = 0x214A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A8Cu;
        // 0x214a90: 0x8e6540f4  lw          $a1, 0x40F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A94u;
        goto label_214a94;
    }
    ctx->pc = 0x214A8Cu;
    SET_GPR_U32(ctx, 31, 0x214A94u);
    ctx->pc = 0x214A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A8Cu;
    // 0x214a90: 0x8e6540f4  lw          $a1, 0x40F4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9748u, 0x214A8Cu, 0x214A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A94u;
label_214a94:
    // 0x214a94: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x214a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_214a98:
    // 0x214a98: 0xc06ac0e  jal         func_1AB038
label_214a9c:
    if (ctx->pc == 0x214A9Cu) {
        ctx->pc = 0x214A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A98u;
        // 0x214a9c: 0x8e6540f4  lw          $a1, 0x40F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214AA0u;
        goto label_214aa0;
    }
    ctx->pc = 0x214A98u;
    SET_GPR_U32(ctx, 31, 0x214AA0u);
    ctx->pc = 0x214A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A98u;
    // 0x214a9c: 0x8e6540f4  lw          $a1, 0x40F4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB038u, 0x214A98u, 0x214AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214AA0u;
label_214aa0:
    // 0x214aa0: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x214aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_214aa4:
    // 0x214aa4: 0xc06ab96  jal         func_1AAE58
label_214aa8:
    if (ctx->pc == 0x214AA8u) {
        ctx->pc = 0x214AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AA4u;
        // 0x214aa8: 0x8e6540f4  lw          $a1, 0x40F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214AACu;
        goto label_214aac;
    }
    ctx->pc = 0x214AA4u;
    SET_GPR_U32(ctx, 31, 0x214AACu);
    ctx->pc = 0x214AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214AA4u;
    // 0x214aa8: 0x8e6540f4  lw          $a1, 0x40F4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE58u, 0x214AA4u, 0x214AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214AACu;
label_214aac:
    // 0x214aac: 0xc0703ca  jal         func_1C0F28
label_214ab0:
    if (ctx->pc == 0x214AB0u) {
        ctx->pc = 0x214AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AACu;
        // 0x214ab0: 0x8fa4007c  lw          $a0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214AB4u;
        goto label_214ab4;
    }
    ctx->pc = 0x214AACu;
    SET_GPR_U32(ctx, 31, 0x214AB4u);
    ctx->pc = 0x214AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214AACu;
    // 0x214ab0: 0x8fa4007c  lw          $a0, 0x7C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F28u, 0x214AACu, 0x214AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214AB4u;
label_214ab4:
    // 0x214ab4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x214ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_214ab8:
    // 0x214ab8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x214ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_214abc:
    // 0x214abc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_214ac0:
    if (ctx->pc == 0x214AC0u) {
        ctx->pc = 0x214AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214ABCu;
        // 0x214ac0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214AC4u;
        goto label_214ac4;
    }
    ctx->pc = 0x214ABCu;
    {
        const bool branch_taken_0x214abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214abc) {
            ctx->pc = 0x214AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214ABCu;
            // 0x214ac0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214AD0u;
            goto label_214ad0;
        }
    }
    ctx->pc = 0x214AC4u;
label_214ac4:
    // 0x214ac4: 0xc069f92  jal         func_1A7E48
label_214ac8:
    if (ctx->pc == 0x214AC8u) {
        ctx->pc = 0x214AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AC4u;
        // 0x214ac8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214ACCu;
        goto label_214acc;
    }
    ctx->pc = 0x214AC4u;
    SET_GPR_U32(ctx, 31, 0x214ACCu);
    ctx->pc = 0x214AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214AC4u;
    // 0x214ac8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7E48u, 0x214AC4u, 0x214ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214ACCu;
label_214acc:
    // 0x214acc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x214accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_214ad0:
    // 0x214ad0: 0xc06886e  jal         func_1A21B8
label_214ad4:
    if (ctx->pc == 0x214AD4u) {
        ctx->pc = 0x214AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AD0u;
        // 0x214ad4: 0x24110240  addiu       $s1, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214AD8u;
        goto label_214ad8;
    }
    ctx->pc = 0x214AD0u;
    SET_GPR_U32(ctx, 31, 0x214AD8u);
    ctx->pc = 0x214AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214AD0u;
    // 0x214ad4: 0x24110240  addiu       $s1, $zero, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x214AD0u, 0x214AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214AD8u;
label_214ad8:
    // 0x214ad8: 0xc06886e  jal         func_1A21B8
label_214adc:
    if (ctx->pc == 0x214ADCu) {
        ctx->pc = 0x214ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AD8u;
        // 0x214adc: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214AE0u;
        goto label_214ae0;
    }
    ctx->pc = 0x214AD8u;
    SET_GPR_U32(ctx, 31, 0x214AE0u);
    ctx->pc = 0x214ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214AD8u;
    // 0x214adc: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x214AD8u, 0x214AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214AE0u;
label_214ae0:
    // 0x214ae0: 0xc06886e  jal         func_1A21B8
label_214ae4:
    if (ctx->pc == 0x214AE4u) {
        ctx->pc = 0x214AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AE0u;
        // 0x214ae4: 0x8fa40090  lw          $a0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214AE8u;
        goto label_214ae8;
    }
    ctx->pc = 0x214AE0u;
    SET_GPR_U32(ctx, 31, 0x214AE8u);
    ctx->pc = 0x214AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214AE0u;
    // 0x214ae4: 0x8fa40090  lw          $a0, 0x90($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x214AE0u, 0x214AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214AE8u;
label_214ae8:
    // 0x214ae8: 0xc06886e  jal         func_1A21B8
label_214aec:
    if (ctx->pc == 0x214AECu) {
        ctx->pc = 0x214AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AE8u;
        // 0x214aec: 0x8fa4008c  lw          $a0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214AF0u;
        goto label_214af0;
    }
    ctx->pc = 0x214AE8u;
    SET_GPR_U32(ctx, 31, 0x214AF0u);
    ctx->pc = 0x214AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214AE8u;
    // 0x214aec: 0x8fa4008c  lw          $a0, 0x8C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x214AE8u, 0x214AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214AF0u;
label_214af0:
    // 0x214af0: 0x8e6640f4  lw          $a2, 0x40F4($s3)
    ctx->pc = 0x214af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
label_214af4:
    // 0x214af4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x214af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_214af8:
    // 0x214af8: 0x2483fa60  addiu       $v1, $a0, -0x5A0
    ctx->pc = 0x214af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965856));
label_214afc:
    // 0x214afc: 0x3c013f8f  lui         $at, 0x3F8F
    ctx->pc = 0x214afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16271 << 16));
label_214b00:
    // 0x214b00: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x214b00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_214b04:
    // 0x214b04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_214b08:
    // 0x214b08: 0xd13018  mult        $a2, $a2, $s1
    ctx->pc = 0x214b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_214b0c:
    // 0x214b0c: 0x2470ffe0  addiu       $s0, $v1, -0x20
    ctx->pc = 0x214b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_214b10:
    // 0x214b10: 0x7a6240e0  lq          $v0, 0x40E0($s3)
    ctx->pc = 0x214b10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16608)));
label_214b14:
    // 0x214b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214b18:
    // 0x214b18: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x214b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_214b1c:
    // 0x214b1c: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x214b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_214b20:
    // 0x214b20: 0xc4ed0034  lwc1        $f13, 0x34($a3)
    ctx->pc = 0x214b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_214b24:
    // 0x214b24: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x214b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_214b28:
    // 0x214b28: 0xc4ec0030  lwc1        $f12, 0x30($a3)
    ctx->pc = 0x214b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_214b2c:
    // 0x214b2c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x214b2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_214b30:
    // 0x214b30: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x214b30u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_214b34:
    // 0x214b34: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x214b34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_214b38:
    // 0x214b38: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x214b38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_214b3c:
    // 0x214b3c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x214b3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_214b40:
    // 0x214b40: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x214b40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_214b44:
    // 0x214b44: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x214b44u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_214b48:
    // 0x214b48: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x214b48u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_214b4c:
    // 0x214b4c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x214b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_214b50:
    // 0x214b50: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x214b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_214b54:
    // 0x214b54: 0xc068848  jal         func_1A2120
label_214b58:
    if (ctx->pc == 0x214B58u) {
        ctx->pc = 0x214B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B54u;
        // 0x214b58: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214B5Cu;
        goto label_214b5c;
    }
    ctx->pc = 0x214B54u;
    SET_GPR_U32(ctx, 31, 0x214B5Cu);
    ctx->pc = 0x214B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B54u;
    // 0x214b58: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x214B54u, 0x214B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214B5Cu;
label_214b5c:
    // 0x214b5c: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x214b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_214b60:
    // 0x214b60: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x214b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_214b64:
    // 0x214b64: 0xc068818  jal         func_1A2060
label_214b68:
    if (ctx->pc == 0x214B68u) {
        ctx->pc = 0x214B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B64u;
        // 0x214b68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214B6Cu;
        goto label_214b6c;
    }
    ctx->pc = 0x214B64u;
    SET_GPR_U32(ctx, 31, 0x214B6Cu);
    ctx->pc = 0x214B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B64u;
    // 0x214b68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x214B64u, 0x214B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214B6Cu;
label_214b6c:
    // 0x214b6c: 0x8e6240f4  lw          $v0, 0x40F4($s3)
    ctx->pc = 0x214b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16628)));
label_214b70:
    // 0x214b70: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x214b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_214b74:
    // 0x214b74: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x214b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_214b78:
    // 0x214b78: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x214b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_214b7c:
    // 0x214b7c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x214b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_214b80:
    // 0x214b80: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x214b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_214b84:
    // 0x214b84: 0xc068992  jal         func_1A2648
label_214b88:
    if (ctx->pc == 0x214B88u) {
        ctx->pc = 0x214B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B84u;
        // 0x214b88: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214B8Cu;
        goto label_214b8c;
    }
    ctx->pc = 0x214B84u;
    SET_GPR_U32(ctx, 31, 0x214B8Cu);
    ctx->pc = 0x214B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B84u;
    // 0x214b88: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x214B84u, 0x214B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214B8Cu;
label_214b8c:
    // 0x214b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214b90:
    // 0x214b90: 0xae624138  sw          $v0, 0x4138($s3)
    ctx->pc = 0x214b90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16696), GPR_U32(ctx, 2));
label_214b94:
    // 0x214b94: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x214b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_214b98:
    // 0x214b98: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x214b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_214b9c:
    // 0x214b9c: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x214b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_214ba0:
    // 0x214ba0: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x214ba0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_214ba4:
    // 0x214ba4: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x214ba4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_214ba8:
    // 0x214ba8: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x214ba8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_214bac:
    // 0x214bac: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x214bacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_214bb0:
    // 0x214bb0: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x214bb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_214bb4:
    // 0x214bb4: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x214bb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_214bb8:
    // 0x214bb8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x214bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_214bbc:
    // 0x214bbc: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x214bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_214bc0:
    // 0x214bc0: 0x3e00008  jr          $ra
label_214bc4:
    if (ctx->pc == 0x214BC4u) {
        ctx->pc = 0x214BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BC0u;
        // 0x214bc4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214BC8u;
        goto label_fallthrough_0x214bc0;
    }
    ctx->pc = 0x214BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BC0u;
        // 0x214bc4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x214bc0:
    ctx->pc = 0x214BC8u;
}
