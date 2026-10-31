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

// Function: sub_00218008
// Address: 0x218008 - 0x219238
void sub_00218008_0x218008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218008_0x218008");
#endif

    switch (ctx->pc) {
        case 0x218008u: goto label_218008;
        case 0x21800cu: goto label_21800c;
        case 0x218010u: goto label_218010;
        case 0x218014u: goto label_218014;
        case 0x218018u: goto label_218018;
        case 0x21801cu: goto label_21801c;
        case 0x218020u: goto label_218020;
        case 0x218024u: goto label_218024;
        case 0x218028u: goto label_218028;
        case 0x21802cu: goto label_21802c;
        case 0x218030u: goto label_218030;
        case 0x218034u: goto label_218034;
        case 0x218038u: goto label_218038;
        case 0x21803cu: goto label_21803c;
        case 0x218040u: goto label_218040;
        case 0x218044u: goto label_218044;
        case 0x218048u: goto label_218048;
        case 0x21804cu: goto label_21804c;
        case 0x218050u: goto label_218050;
        case 0x218054u: goto label_218054;
        case 0x218058u: goto label_218058;
        case 0x21805cu: goto label_21805c;
        case 0x218060u: goto label_218060;
        case 0x218064u: goto label_218064;
        case 0x218068u: goto label_218068;
        case 0x21806cu: goto label_21806c;
        case 0x218070u: goto label_218070;
        case 0x218074u: goto label_218074;
        case 0x218078u: goto label_218078;
        case 0x21807cu: goto label_21807c;
        case 0x218080u: goto label_218080;
        case 0x218084u: goto label_218084;
        case 0x218088u: goto label_218088;
        case 0x21808cu: goto label_21808c;
        case 0x218090u: goto label_218090;
        case 0x218094u: goto label_218094;
        case 0x218098u: goto label_218098;
        case 0x21809cu: goto label_21809c;
        case 0x2180a0u: goto label_2180a0;
        case 0x2180a4u: goto label_2180a4;
        case 0x2180a8u: goto label_2180a8;
        case 0x2180acu: goto label_2180ac;
        case 0x2180b0u: goto label_2180b0;
        case 0x2180b4u: goto label_2180b4;
        case 0x2180b8u: goto label_2180b8;
        case 0x2180bcu: goto label_2180bc;
        case 0x2180c0u: goto label_2180c0;
        case 0x2180c4u: goto label_2180c4;
        case 0x2180c8u: goto label_2180c8;
        case 0x2180ccu: goto label_2180cc;
        case 0x2180d0u: goto label_2180d0;
        case 0x2180d4u: goto label_2180d4;
        case 0x2180d8u: goto label_2180d8;
        case 0x2180dcu: goto label_2180dc;
        case 0x2180e0u: goto label_2180e0;
        case 0x2180e4u: goto label_2180e4;
        case 0x2180e8u: goto label_2180e8;
        case 0x2180ecu: goto label_2180ec;
        case 0x2180f0u: goto label_2180f0;
        case 0x2180f4u: goto label_2180f4;
        case 0x2180f8u: goto label_2180f8;
        case 0x2180fcu: goto label_2180fc;
        case 0x218100u: goto label_218100;
        case 0x218104u: goto label_218104;
        case 0x218108u: goto label_218108;
        case 0x21810cu: goto label_21810c;
        case 0x218110u: goto label_218110;
        case 0x218114u: goto label_218114;
        case 0x218118u: goto label_218118;
        case 0x21811cu: goto label_21811c;
        case 0x218120u: goto label_218120;
        case 0x218124u: goto label_218124;
        case 0x218128u: goto label_218128;
        case 0x21812cu: goto label_21812c;
        case 0x218130u: goto label_218130;
        case 0x218134u: goto label_218134;
        case 0x218138u: goto label_218138;
        case 0x21813cu: goto label_21813c;
        case 0x218140u: goto label_218140;
        case 0x218144u: goto label_218144;
        case 0x218148u: goto label_218148;
        case 0x21814cu: goto label_21814c;
        case 0x218150u: goto label_218150;
        case 0x218154u: goto label_218154;
        case 0x218158u: goto label_218158;
        case 0x21815cu: goto label_21815c;
        case 0x218160u: goto label_218160;
        case 0x218164u: goto label_218164;
        case 0x218168u: goto label_218168;
        case 0x21816cu: goto label_21816c;
        case 0x218170u: goto label_218170;
        case 0x218174u: goto label_218174;
        case 0x218178u: goto label_218178;
        case 0x21817cu: goto label_21817c;
        case 0x218180u: goto label_218180;
        case 0x218184u: goto label_218184;
        case 0x218188u: goto label_218188;
        case 0x21818cu: goto label_21818c;
        case 0x218190u: goto label_218190;
        case 0x218194u: goto label_218194;
        case 0x218198u: goto label_218198;
        case 0x21819cu: goto label_21819c;
        case 0x2181a0u: goto label_2181a0;
        case 0x2181a4u: goto label_2181a4;
        case 0x2181a8u: goto label_2181a8;
        case 0x2181acu: goto label_2181ac;
        case 0x2181b0u: goto label_2181b0;
        case 0x2181b4u: goto label_2181b4;
        case 0x2181b8u: goto label_2181b8;
        case 0x2181bcu: goto label_2181bc;
        case 0x2181c0u: goto label_2181c0;
        case 0x2181c4u: goto label_2181c4;
        case 0x2181c8u: goto label_2181c8;
        case 0x2181ccu: goto label_2181cc;
        case 0x2181d0u: goto label_2181d0;
        case 0x2181d4u: goto label_2181d4;
        case 0x2181d8u: goto label_2181d8;
        case 0x2181dcu: goto label_2181dc;
        case 0x2181e0u: goto label_2181e0;
        case 0x2181e4u: goto label_2181e4;
        case 0x2181e8u: goto label_2181e8;
        case 0x2181ecu: goto label_2181ec;
        case 0x2181f0u: goto label_2181f0;
        case 0x2181f4u: goto label_2181f4;
        case 0x2181f8u: goto label_2181f8;
        case 0x2181fcu: goto label_2181fc;
        case 0x218200u: goto label_218200;
        case 0x218204u: goto label_218204;
        case 0x218208u: goto label_218208;
        case 0x21820cu: goto label_21820c;
        case 0x218210u: goto label_218210;
        case 0x218214u: goto label_218214;
        case 0x218218u: goto label_218218;
        case 0x21821cu: goto label_21821c;
        case 0x218220u: goto label_218220;
        case 0x218224u: goto label_218224;
        case 0x218228u: goto label_218228;
        case 0x21822cu: goto label_21822c;
        case 0x218230u: goto label_218230;
        case 0x218234u: goto label_218234;
        case 0x218238u: goto label_218238;
        case 0x21823cu: goto label_21823c;
        case 0x218240u: goto label_218240;
        case 0x218244u: goto label_218244;
        case 0x218248u: goto label_218248;
        case 0x21824cu: goto label_21824c;
        case 0x218250u: goto label_218250;
        case 0x218254u: goto label_218254;
        case 0x218258u: goto label_218258;
        case 0x21825cu: goto label_21825c;
        case 0x218260u: goto label_218260;
        case 0x218264u: goto label_218264;
        case 0x218268u: goto label_218268;
        case 0x21826cu: goto label_21826c;
        case 0x218270u: goto label_218270;
        case 0x218274u: goto label_218274;
        case 0x218278u: goto label_218278;
        case 0x21827cu: goto label_21827c;
        case 0x218280u: goto label_218280;
        case 0x218284u: goto label_218284;
        case 0x218288u: goto label_218288;
        case 0x21828cu: goto label_21828c;
        case 0x218290u: goto label_218290;
        case 0x218294u: goto label_218294;
        case 0x218298u: goto label_218298;
        case 0x21829cu: goto label_21829c;
        case 0x2182a0u: goto label_2182a0;
        case 0x2182a4u: goto label_2182a4;
        case 0x2182a8u: goto label_2182a8;
        case 0x2182acu: goto label_2182ac;
        case 0x2182b0u: goto label_2182b0;
        case 0x2182b4u: goto label_2182b4;
        case 0x2182b8u: goto label_2182b8;
        case 0x2182bcu: goto label_2182bc;
        case 0x2182c0u: goto label_2182c0;
        case 0x2182c4u: goto label_2182c4;
        case 0x2182c8u: goto label_2182c8;
        case 0x2182ccu: goto label_2182cc;
        case 0x2182d0u: goto label_2182d0;
        case 0x2182d4u: goto label_2182d4;
        case 0x2182d8u: goto label_2182d8;
        case 0x2182dcu: goto label_2182dc;
        case 0x2182e0u: goto label_2182e0;
        case 0x2182e4u: goto label_2182e4;
        case 0x2182e8u: goto label_2182e8;
        case 0x2182ecu: goto label_2182ec;
        case 0x2182f0u: goto label_2182f0;
        case 0x2182f4u: goto label_2182f4;
        case 0x2182f8u: goto label_2182f8;
        case 0x2182fcu: goto label_2182fc;
        case 0x218300u: goto label_218300;
        case 0x218304u: goto label_218304;
        case 0x218308u: goto label_218308;
        case 0x21830cu: goto label_21830c;
        case 0x218310u: goto label_218310;
        case 0x218314u: goto label_218314;
        case 0x218318u: goto label_218318;
        case 0x21831cu: goto label_21831c;
        case 0x218320u: goto label_218320;
        case 0x218324u: goto label_218324;
        case 0x218328u: goto label_218328;
        case 0x21832cu: goto label_21832c;
        case 0x218330u: goto label_218330;
        case 0x218334u: goto label_218334;
        case 0x218338u: goto label_218338;
        case 0x21833cu: goto label_21833c;
        case 0x218340u: goto label_218340;
        case 0x218344u: goto label_218344;
        case 0x218348u: goto label_218348;
        case 0x21834cu: goto label_21834c;
        case 0x218350u: goto label_218350;
        case 0x218354u: goto label_218354;
        case 0x218358u: goto label_218358;
        case 0x21835cu: goto label_21835c;
        case 0x218360u: goto label_218360;
        case 0x218364u: goto label_218364;
        case 0x218368u: goto label_218368;
        case 0x21836cu: goto label_21836c;
        case 0x218370u: goto label_218370;
        case 0x218374u: goto label_218374;
        case 0x218378u: goto label_218378;
        case 0x21837cu: goto label_21837c;
        case 0x218380u: goto label_218380;
        case 0x218384u: goto label_218384;
        case 0x218388u: goto label_218388;
        case 0x21838cu: goto label_21838c;
        case 0x218390u: goto label_218390;
        case 0x218394u: goto label_218394;
        case 0x218398u: goto label_218398;
        case 0x21839cu: goto label_21839c;
        case 0x2183a0u: goto label_2183a0;
        case 0x2183a4u: goto label_2183a4;
        case 0x2183a8u: goto label_2183a8;
        case 0x2183acu: goto label_2183ac;
        case 0x2183b0u: goto label_2183b0;
        case 0x2183b4u: goto label_2183b4;
        case 0x2183b8u: goto label_2183b8;
        case 0x2183bcu: goto label_2183bc;
        case 0x2183c0u: goto label_2183c0;
        case 0x2183c4u: goto label_2183c4;
        case 0x2183c8u: goto label_2183c8;
        case 0x2183ccu: goto label_2183cc;
        case 0x2183d0u: goto label_2183d0;
        case 0x2183d4u: goto label_2183d4;
        case 0x2183d8u: goto label_2183d8;
        case 0x2183dcu: goto label_2183dc;
        case 0x2183e0u: goto label_2183e0;
        case 0x2183e4u: goto label_2183e4;
        case 0x2183e8u: goto label_2183e8;
        case 0x2183ecu: goto label_2183ec;
        case 0x2183f0u: goto label_2183f0;
        case 0x2183f4u: goto label_2183f4;
        case 0x2183f8u: goto label_2183f8;
        case 0x2183fcu: goto label_2183fc;
        case 0x218400u: goto label_218400;
        case 0x218404u: goto label_218404;
        case 0x218408u: goto label_218408;
        case 0x21840cu: goto label_21840c;
        case 0x218410u: goto label_218410;
        case 0x218414u: goto label_218414;
        case 0x218418u: goto label_218418;
        case 0x21841cu: goto label_21841c;
        case 0x218420u: goto label_218420;
        case 0x218424u: goto label_218424;
        case 0x218428u: goto label_218428;
        case 0x21842cu: goto label_21842c;
        case 0x218430u: goto label_218430;
        case 0x218434u: goto label_218434;
        case 0x218438u: goto label_218438;
        case 0x21843cu: goto label_21843c;
        case 0x218440u: goto label_218440;
        case 0x218444u: goto label_218444;
        case 0x218448u: goto label_218448;
        case 0x21844cu: goto label_21844c;
        case 0x218450u: goto label_218450;
        case 0x218454u: goto label_218454;
        case 0x218458u: goto label_218458;
        case 0x21845cu: goto label_21845c;
        case 0x218460u: goto label_218460;
        case 0x218464u: goto label_218464;
        case 0x218468u: goto label_218468;
        case 0x21846cu: goto label_21846c;
        case 0x218470u: goto label_218470;
        case 0x218474u: goto label_218474;
        case 0x218478u: goto label_218478;
        case 0x21847cu: goto label_21847c;
        case 0x218480u: goto label_218480;
        case 0x218484u: goto label_218484;
        case 0x218488u: goto label_218488;
        case 0x21848cu: goto label_21848c;
        case 0x218490u: goto label_218490;
        case 0x218494u: goto label_218494;
        case 0x218498u: goto label_218498;
        case 0x21849cu: goto label_21849c;
        case 0x2184a0u: goto label_2184a0;
        case 0x2184a4u: goto label_2184a4;
        case 0x2184a8u: goto label_2184a8;
        case 0x2184acu: goto label_2184ac;
        case 0x2184b0u: goto label_2184b0;
        case 0x2184b4u: goto label_2184b4;
        case 0x2184b8u: goto label_2184b8;
        case 0x2184bcu: goto label_2184bc;
        case 0x2184c0u: goto label_2184c0;
        case 0x2184c4u: goto label_2184c4;
        case 0x2184c8u: goto label_2184c8;
        case 0x2184ccu: goto label_2184cc;
        case 0x2184d0u: goto label_2184d0;
        case 0x2184d4u: goto label_2184d4;
        case 0x2184d8u: goto label_2184d8;
        case 0x2184dcu: goto label_2184dc;
        case 0x2184e0u: goto label_2184e0;
        case 0x2184e4u: goto label_2184e4;
        case 0x2184e8u: goto label_2184e8;
        case 0x2184ecu: goto label_2184ec;
        case 0x2184f0u: goto label_2184f0;
        case 0x2184f4u: goto label_2184f4;
        case 0x2184f8u: goto label_2184f8;
        case 0x2184fcu: goto label_2184fc;
        case 0x218500u: goto label_218500;
        case 0x218504u: goto label_218504;
        case 0x218508u: goto label_218508;
        case 0x21850cu: goto label_21850c;
        case 0x218510u: goto label_218510;
        case 0x218514u: goto label_218514;
        case 0x218518u: goto label_218518;
        case 0x21851cu: goto label_21851c;
        case 0x218520u: goto label_218520;
        case 0x218524u: goto label_218524;
        case 0x218528u: goto label_218528;
        case 0x21852cu: goto label_21852c;
        case 0x218530u: goto label_218530;
        case 0x218534u: goto label_218534;
        case 0x218538u: goto label_218538;
        case 0x21853cu: goto label_21853c;
        case 0x218540u: goto label_218540;
        case 0x218544u: goto label_218544;
        case 0x218548u: goto label_218548;
        case 0x21854cu: goto label_21854c;
        case 0x218550u: goto label_218550;
        case 0x218554u: goto label_218554;
        case 0x218558u: goto label_218558;
        case 0x21855cu: goto label_21855c;
        case 0x218560u: goto label_218560;
        case 0x218564u: goto label_218564;
        case 0x218568u: goto label_218568;
        case 0x21856cu: goto label_21856c;
        case 0x218570u: goto label_218570;
        case 0x218574u: goto label_218574;
        case 0x218578u: goto label_218578;
        case 0x21857cu: goto label_21857c;
        case 0x218580u: goto label_218580;
        case 0x218584u: goto label_218584;
        case 0x218588u: goto label_218588;
        case 0x21858cu: goto label_21858c;
        case 0x218590u: goto label_218590;
        case 0x218594u: goto label_218594;
        case 0x218598u: goto label_218598;
        case 0x21859cu: goto label_21859c;
        case 0x2185a0u: goto label_2185a0;
        case 0x2185a4u: goto label_2185a4;
        case 0x2185a8u: goto label_2185a8;
        case 0x2185acu: goto label_2185ac;
        case 0x2185b0u: goto label_2185b0;
        case 0x2185b4u: goto label_2185b4;
        case 0x2185b8u: goto label_2185b8;
        case 0x2185bcu: goto label_2185bc;
        case 0x2185c0u: goto label_2185c0;
        case 0x2185c4u: goto label_2185c4;
        case 0x2185c8u: goto label_2185c8;
        case 0x2185ccu: goto label_2185cc;
        case 0x2185d0u: goto label_2185d0;
        case 0x2185d4u: goto label_2185d4;
        case 0x2185d8u: goto label_2185d8;
        case 0x2185dcu: goto label_2185dc;
        case 0x2185e0u: goto label_2185e0;
        case 0x2185e4u: goto label_2185e4;
        case 0x2185e8u: goto label_2185e8;
        case 0x2185ecu: goto label_2185ec;
        case 0x2185f0u: goto label_2185f0;
        case 0x2185f4u: goto label_2185f4;
        case 0x2185f8u: goto label_2185f8;
        case 0x2185fcu: goto label_2185fc;
        case 0x218600u: goto label_218600;
        case 0x218604u: goto label_218604;
        case 0x218608u: goto label_218608;
        case 0x21860cu: goto label_21860c;
        case 0x218610u: goto label_218610;
        case 0x218614u: goto label_218614;
        case 0x218618u: goto label_218618;
        case 0x21861cu: goto label_21861c;
        case 0x218620u: goto label_218620;
        case 0x218624u: goto label_218624;
        case 0x218628u: goto label_218628;
        case 0x21862cu: goto label_21862c;
        case 0x218630u: goto label_218630;
        case 0x218634u: goto label_218634;
        case 0x218638u: goto label_218638;
        case 0x21863cu: goto label_21863c;
        case 0x218640u: goto label_218640;
        case 0x218644u: goto label_218644;
        case 0x218648u: goto label_218648;
        case 0x21864cu: goto label_21864c;
        case 0x218650u: goto label_218650;
        case 0x218654u: goto label_218654;
        case 0x218658u: goto label_218658;
        case 0x21865cu: goto label_21865c;
        case 0x218660u: goto label_218660;
        case 0x218664u: goto label_218664;
        case 0x218668u: goto label_218668;
        case 0x21866cu: goto label_21866c;
        case 0x218670u: goto label_218670;
        case 0x218674u: goto label_218674;
        case 0x218678u: goto label_218678;
        case 0x21867cu: goto label_21867c;
        case 0x218680u: goto label_218680;
        case 0x218684u: goto label_218684;
        case 0x218688u: goto label_218688;
        case 0x21868cu: goto label_21868c;
        case 0x218690u: goto label_218690;
        case 0x218694u: goto label_218694;
        case 0x218698u: goto label_218698;
        case 0x21869cu: goto label_21869c;
        case 0x2186a0u: goto label_2186a0;
        case 0x2186a4u: goto label_2186a4;
        case 0x2186a8u: goto label_2186a8;
        case 0x2186acu: goto label_2186ac;
        case 0x2186b0u: goto label_2186b0;
        case 0x2186b4u: goto label_2186b4;
        case 0x2186b8u: goto label_2186b8;
        case 0x2186bcu: goto label_2186bc;
        case 0x2186c0u: goto label_2186c0;
        case 0x2186c4u: goto label_2186c4;
        case 0x2186c8u: goto label_2186c8;
        case 0x2186ccu: goto label_2186cc;
        case 0x2186d0u: goto label_2186d0;
        case 0x2186d4u: goto label_2186d4;
        case 0x2186d8u: goto label_2186d8;
        case 0x2186dcu: goto label_2186dc;
        case 0x2186e0u: goto label_2186e0;
        case 0x2186e4u: goto label_2186e4;
        case 0x2186e8u: goto label_2186e8;
        case 0x2186ecu: goto label_2186ec;
        case 0x2186f0u: goto label_2186f0;
        case 0x2186f4u: goto label_2186f4;
        case 0x2186f8u: goto label_2186f8;
        case 0x2186fcu: goto label_2186fc;
        case 0x218700u: goto label_218700;
        case 0x218704u: goto label_218704;
        case 0x218708u: goto label_218708;
        case 0x21870cu: goto label_21870c;
        case 0x218710u: goto label_218710;
        case 0x218714u: goto label_218714;
        case 0x218718u: goto label_218718;
        case 0x21871cu: goto label_21871c;
        case 0x218720u: goto label_218720;
        case 0x218724u: goto label_218724;
        case 0x218728u: goto label_218728;
        case 0x21872cu: goto label_21872c;
        case 0x218730u: goto label_218730;
        case 0x218734u: goto label_218734;
        case 0x218738u: goto label_218738;
        case 0x21873cu: goto label_21873c;
        case 0x218740u: goto label_218740;
        case 0x218744u: goto label_218744;
        case 0x218748u: goto label_218748;
        case 0x21874cu: goto label_21874c;
        case 0x218750u: goto label_218750;
        case 0x218754u: goto label_218754;
        case 0x218758u: goto label_218758;
        case 0x21875cu: goto label_21875c;
        case 0x218760u: goto label_218760;
        case 0x218764u: goto label_218764;
        case 0x218768u: goto label_218768;
        case 0x21876cu: goto label_21876c;
        case 0x218770u: goto label_218770;
        case 0x218774u: goto label_218774;
        case 0x218778u: goto label_218778;
        case 0x21877cu: goto label_21877c;
        case 0x218780u: goto label_218780;
        case 0x218784u: goto label_218784;
        case 0x218788u: goto label_218788;
        case 0x21878cu: goto label_21878c;
        case 0x218790u: goto label_218790;
        case 0x218794u: goto label_218794;
        case 0x218798u: goto label_218798;
        case 0x21879cu: goto label_21879c;
        case 0x2187a0u: goto label_2187a0;
        case 0x2187a4u: goto label_2187a4;
        case 0x2187a8u: goto label_2187a8;
        case 0x2187acu: goto label_2187ac;
        case 0x2187b0u: goto label_2187b0;
        case 0x2187b4u: goto label_2187b4;
        case 0x2187b8u: goto label_2187b8;
        case 0x2187bcu: goto label_2187bc;
        case 0x2187c0u: goto label_2187c0;
        case 0x2187c4u: goto label_2187c4;
        case 0x2187c8u: goto label_2187c8;
        case 0x2187ccu: goto label_2187cc;
        case 0x2187d0u: goto label_2187d0;
        case 0x2187d4u: goto label_2187d4;
        case 0x2187d8u: goto label_2187d8;
        case 0x2187dcu: goto label_2187dc;
        case 0x2187e0u: goto label_2187e0;
        case 0x2187e4u: goto label_2187e4;
        case 0x2187e8u: goto label_2187e8;
        case 0x2187ecu: goto label_2187ec;
        case 0x2187f0u: goto label_2187f0;
        case 0x2187f4u: goto label_2187f4;
        case 0x2187f8u: goto label_2187f8;
        case 0x2187fcu: goto label_2187fc;
        case 0x218800u: goto label_218800;
        case 0x218804u: goto label_218804;
        case 0x218808u: goto label_218808;
        case 0x21880cu: goto label_21880c;
        case 0x218810u: goto label_218810;
        case 0x218814u: goto label_218814;
        case 0x218818u: goto label_218818;
        case 0x21881cu: goto label_21881c;
        case 0x218820u: goto label_218820;
        case 0x218824u: goto label_218824;
        case 0x218828u: goto label_218828;
        case 0x21882cu: goto label_21882c;
        case 0x218830u: goto label_218830;
        case 0x218834u: goto label_218834;
        case 0x218838u: goto label_218838;
        case 0x21883cu: goto label_21883c;
        case 0x218840u: goto label_218840;
        case 0x218844u: goto label_218844;
        case 0x218848u: goto label_218848;
        case 0x21884cu: goto label_21884c;
        case 0x218850u: goto label_218850;
        case 0x218854u: goto label_218854;
        case 0x218858u: goto label_218858;
        case 0x21885cu: goto label_21885c;
        case 0x218860u: goto label_218860;
        case 0x218864u: goto label_218864;
        case 0x218868u: goto label_218868;
        case 0x21886cu: goto label_21886c;
        case 0x218870u: goto label_218870;
        case 0x218874u: goto label_218874;
        case 0x218878u: goto label_218878;
        case 0x21887cu: goto label_21887c;
        case 0x218880u: goto label_218880;
        case 0x218884u: goto label_218884;
        case 0x218888u: goto label_218888;
        case 0x21888cu: goto label_21888c;
        case 0x218890u: goto label_218890;
        case 0x218894u: goto label_218894;
        case 0x218898u: goto label_218898;
        case 0x21889cu: goto label_21889c;
        case 0x2188a0u: goto label_2188a0;
        case 0x2188a4u: goto label_2188a4;
        case 0x2188a8u: goto label_2188a8;
        case 0x2188acu: goto label_2188ac;
        case 0x2188b0u: goto label_2188b0;
        case 0x2188b4u: goto label_2188b4;
        case 0x2188b8u: goto label_2188b8;
        case 0x2188bcu: goto label_2188bc;
        case 0x2188c0u: goto label_2188c0;
        case 0x2188c4u: goto label_2188c4;
        case 0x2188c8u: goto label_2188c8;
        case 0x2188ccu: goto label_2188cc;
        case 0x2188d0u: goto label_2188d0;
        case 0x2188d4u: goto label_2188d4;
        case 0x2188d8u: goto label_2188d8;
        case 0x2188dcu: goto label_2188dc;
        case 0x2188e0u: goto label_2188e0;
        case 0x2188e4u: goto label_2188e4;
        case 0x2188e8u: goto label_2188e8;
        case 0x2188ecu: goto label_2188ec;
        case 0x2188f0u: goto label_2188f0;
        case 0x2188f4u: goto label_2188f4;
        case 0x2188f8u: goto label_2188f8;
        case 0x2188fcu: goto label_2188fc;
        case 0x218900u: goto label_218900;
        case 0x218904u: goto label_218904;
        case 0x218908u: goto label_218908;
        case 0x21890cu: goto label_21890c;
        case 0x218910u: goto label_218910;
        case 0x218914u: goto label_218914;
        case 0x218918u: goto label_218918;
        case 0x21891cu: goto label_21891c;
        case 0x218920u: goto label_218920;
        case 0x218924u: goto label_218924;
        case 0x218928u: goto label_218928;
        case 0x21892cu: goto label_21892c;
        case 0x218930u: goto label_218930;
        case 0x218934u: goto label_218934;
        case 0x218938u: goto label_218938;
        case 0x21893cu: goto label_21893c;
        case 0x218940u: goto label_218940;
        case 0x218944u: goto label_218944;
        case 0x218948u: goto label_218948;
        case 0x21894cu: goto label_21894c;
        case 0x218950u: goto label_218950;
        case 0x218954u: goto label_218954;
        case 0x218958u: goto label_218958;
        case 0x21895cu: goto label_21895c;
        case 0x218960u: goto label_218960;
        case 0x218964u: goto label_218964;
        case 0x218968u: goto label_218968;
        case 0x21896cu: goto label_21896c;
        case 0x218970u: goto label_218970;
        case 0x218974u: goto label_218974;
        case 0x218978u: goto label_218978;
        case 0x21897cu: goto label_21897c;
        case 0x218980u: goto label_218980;
        case 0x218984u: goto label_218984;
        case 0x218988u: goto label_218988;
        case 0x21898cu: goto label_21898c;
        case 0x218990u: goto label_218990;
        case 0x218994u: goto label_218994;
        case 0x218998u: goto label_218998;
        case 0x21899cu: goto label_21899c;
        case 0x2189a0u: goto label_2189a0;
        case 0x2189a4u: goto label_2189a4;
        case 0x2189a8u: goto label_2189a8;
        case 0x2189acu: goto label_2189ac;
        case 0x2189b0u: goto label_2189b0;
        case 0x2189b4u: goto label_2189b4;
        case 0x2189b8u: goto label_2189b8;
        case 0x2189bcu: goto label_2189bc;
        case 0x2189c0u: goto label_2189c0;
        case 0x2189c4u: goto label_2189c4;
        case 0x2189c8u: goto label_2189c8;
        case 0x2189ccu: goto label_2189cc;
        case 0x2189d0u: goto label_2189d0;
        case 0x2189d4u: goto label_2189d4;
        case 0x2189d8u: goto label_2189d8;
        case 0x2189dcu: goto label_2189dc;
        case 0x2189e0u: goto label_2189e0;
        case 0x2189e4u: goto label_2189e4;
        case 0x2189e8u: goto label_2189e8;
        case 0x2189ecu: goto label_2189ec;
        case 0x2189f0u: goto label_2189f0;
        case 0x2189f4u: goto label_2189f4;
        case 0x2189f8u: goto label_2189f8;
        case 0x2189fcu: goto label_2189fc;
        case 0x218a00u: goto label_218a00;
        case 0x218a04u: goto label_218a04;
        case 0x218a08u: goto label_218a08;
        case 0x218a0cu: goto label_218a0c;
        case 0x218a10u: goto label_218a10;
        case 0x218a14u: goto label_218a14;
        case 0x218a18u: goto label_218a18;
        case 0x218a1cu: goto label_218a1c;
        case 0x218a20u: goto label_218a20;
        case 0x218a24u: goto label_218a24;
        case 0x218a28u: goto label_218a28;
        case 0x218a2cu: goto label_218a2c;
        case 0x218a30u: goto label_218a30;
        case 0x218a34u: goto label_218a34;
        case 0x218a38u: goto label_218a38;
        case 0x218a3cu: goto label_218a3c;
        case 0x218a40u: goto label_218a40;
        case 0x218a44u: goto label_218a44;
        case 0x218a48u: goto label_218a48;
        case 0x218a4cu: goto label_218a4c;
        case 0x218a50u: goto label_218a50;
        case 0x218a54u: goto label_218a54;
        case 0x218a58u: goto label_218a58;
        case 0x218a5cu: goto label_218a5c;
        case 0x218a60u: goto label_218a60;
        case 0x218a64u: goto label_218a64;
        case 0x218a68u: goto label_218a68;
        case 0x218a6cu: goto label_218a6c;
        case 0x218a70u: goto label_218a70;
        case 0x218a74u: goto label_218a74;
        case 0x218a78u: goto label_218a78;
        case 0x218a7cu: goto label_218a7c;
        case 0x218a80u: goto label_218a80;
        case 0x218a84u: goto label_218a84;
        case 0x218a88u: goto label_218a88;
        case 0x218a8cu: goto label_218a8c;
        case 0x218a90u: goto label_218a90;
        case 0x218a94u: goto label_218a94;
        case 0x218a98u: goto label_218a98;
        case 0x218a9cu: goto label_218a9c;
        case 0x218aa0u: goto label_218aa0;
        case 0x218aa4u: goto label_218aa4;
        case 0x218aa8u: goto label_218aa8;
        case 0x218aacu: goto label_218aac;
        case 0x218ab0u: goto label_218ab0;
        case 0x218ab4u: goto label_218ab4;
        case 0x218ab8u: goto label_218ab8;
        case 0x218abcu: goto label_218abc;
        case 0x218ac0u: goto label_218ac0;
        case 0x218ac4u: goto label_218ac4;
        case 0x218ac8u: goto label_218ac8;
        case 0x218accu: goto label_218acc;
        case 0x218ad0u: goto label_218ad0;
        case 0x218ad4u: goto label_218ad4;
        case 0x218ad8u: goto label_218ad8;
        case 0x218adcu: goto label_218adc;
        case 0x218ae0u: goto label_218ae0;
        case 0x218ae4u: goto label_218ae4;
        case 0x218ae8u: goto label_218ae8;
        case 0x218aecu: goto label_218aec;
        case 0x218af0u: goto label_218af0;
        case 0x218af4u: goto label_218af4;
        case 0x218af8u: goto label_218af8;
        case 0x218afcu: goto label_218afc;
        case 0x218b00u: goto label_218b00;
        case 0x218b04u: goto label_218b04;
        case 0x218b08u: goto label_218b08;
        case 0x218b0cu: goto label_218b0c;
        case 0x218b10u: goto label_218b10;
        case 0x218b14u: goto label_218b14;
        case 0x218b18u: goto label_218b18;
        case 0x218b1cu: goto label_218b1c;
        case 0x218b20u: goto label_218b20;
        case 0x218b24u: goto label_218b24;
        case 0x218b28u: goto label_218b28;
        case 0x218b2cu: goto label_218b2c;
        case 0x218b30u: goto label_218b30;
        case 0x218b34u: goto label_218b34;
        case 0x218b38u: goto label_218b38;
        case 0x218b3cu: goto label_218b3c;
        case 0x218b40u: goto label_218b40;
        case 0x218b44u: goto label_218b44;
        case 0x218b48u: goto label_218b48;
        case 0x218b4cu: goto label_218b4c;
        case 0x218b50u: goto label_218b50;
        case 0x218b54u: goto label_218b54;
        case 0x218b58u: goto label_218b58;
        case 0x218b5cu: goto label_218b5c;
        case 0x218b60u: goto label_218b60;
        case 0x218b64u: goto label_218b64;
        case 0x218b68u: goto label_218b68;
        case 0x218b6cu: goto label_218b6c;
        case 0x218b70u: goto label_218b70;
        case 0x218b74u: goto label_218b74;
        case 0x218b78u: goto label_218b78;
        case 0x218b7cu: goto label_218b7c;
        case 0x218b80u: goto label_218b80;
        case 0x218b84u: goto label_218b84;
        case 0x218b88u: goto label_218b88;
        case 0x218b8cu: goto label_218b8c;
        case 0x218b90u: goto label_218b90;
        case 0x218b94u: goto label_218b94;
        case 0x218b98u: goto label_218b98;
        case 0x218b9cu: goto label_218b9c;
        case 0x218ba0u: goto label_218ba0;
        case 0x218ba4u: goto label_218ba4;
        case 0x218ba8u: goto label_218ba8;
        case 0x218bacu: goto label_218bac;
        case 0x218bb0u: goto label_218bb0;
        case 0x218bb4u: goto label_218bb4;
        case 0x218bb8u: goto label_218bb8;
        case 0x218bbcu: goto label_218bbc;
        case 0x218bc0u: goto label_218bc0;
        case 0x218bc4u: goto label_218bc4;
        case 0x218bc8u: goto label_218bc8;
        case 0x218bccu: goto label_218bcc;
        case 0x218bd0u: goto label_218bd0;
        case 0x218bd4u: goto label_218bd4;
        case 0x218bd8u: goto label_218bd8;
        case 0x218bdcu: goto label_218bdc;
        case 0x218be0u: goto label_218be0;
        case 0x218be4u: goto label_218be4;
        case 0x218be8u: goto label_218be8;
        case 0x218becu: goto label_218bec;
        case 0x218bf0u: goto label_218bf0;
        case 0x218bf4u: goto label_218bf4;
        case 0x218bf8u: goto label_218bf8;
        case 0x218bfcu: goto label_218bfc;
        case 0x218c00u: goto label_218c00;
        case 0x218c04u: goto label_218c04;
        case 0x218c08u: goto label_218c08;
        case 0x218c0cu: goto label_218c0c;
        case 0x218c10u: goto label_218c10;
        case 0x218c14u: goto label_218c14;
        case 0x218c18u: goto label_218c18;
        case 0x218c1cu: goto label_218c1c;
        case 0x218c20u: goto label_218c20;
        case 0x218c24u: goto label_218c24;
        case 0x218c28u: goto label_218c28;
        case 0x218c2cu: goto label_218c2c;
        case 0x218c30u: goto label_218c30;
        case 0x218c34u: goto label_218c34;
        case 0x218c38u: goto label_218c38;
        case 0x218c3cu: goto label_218c3c;
        case 0x218c40u: goto label_218c40;
        case 0x218c44u: goto label_218c44;
        case 0x218c48u: goto label_218c48;
        case 0x218c4cu: goto label_218c4c;
        case 0x218c50u: goto label_218c50;
        case 0x218c54u: goto label_218c54;
        case 0x218c58u: goto label_218c58;
        case 0x218c5cu: goto label_218c5c;
        case 0x218c60u: goto label_218c60;
        case 0x218c64u: goto label_218c64;
        case 0x218c68u: goto label_218c68;
        case 0x218c6cu: goto label_218c6c;
        case 0x218c70u: goto label_218c70;
        case 0x218c74u: goto label_218c74;
        case 0x218c78u: goto label_218c78;
        case 0x218c7cu: goto label_218c7c;
        case 0x218c80u: goto label_218c80;
        case 0x218c84u: goto label_218c84;
        case 0x218c88u: goto label_218c88;
        case 0x218c8cu: goto label_218c8c;
        case 0x218c90u: goto label_218c90;
        case 0x218c94u: goto label_218c94;
        case 0x218c98u: goto label_218c98;
        case 0x218c9cu: goto label_218c9c;
        case 0x218ca0u: goto label_218ca0;
        case 0x218ca4u: goto label_218ca4;
        case 0x218ca8u: goto label_218ca8;
        case 0x218cacu: goto label_218cac;
        case 0x218cb0u: goto label_218cb0;
        case 0x218cb4u: goto label_218cb4;
        case 0x218cb8u: goto label_218cb8;
        case 0x218cbcu: goto label_218cbc;
        case 0x218cc0u: goto label_218cc0;
        case 0x218cc4u: goto label_218cc4;
        case 0x218cc8u: goto label_218cc8;
        case 0x218cccu: goto label_218ccc;
        case 0x218cd0u: goto label_218cd0;
        case 0x218cd4u: goto label_218cd4;
        case 0x218cd8u: goto label_218cd8;
        case 0x218cdcu: goto label_218cdc;
        case 0x218ce0u: goto label_218ce0;
        case 0x218ce4u: goto label_218ce4;
        case 0x218ce8u: goto label_218ce8;
        case 0x218cecu: goto label_218cec;
        case 0x218cf0u: goto label_218cf0;
        case 0x218cf4u: goto label_218cf4;
        case 0x218cf8u: goto label_218cf8;
        case 0x218cfcu: goto label_218cfc;
        case 0x218d00u: goto label_218d00;
        case 0x218d04u: goto label_218d04;
        case 0x218d08u: goto label_218d08;
        case 0x218d0cu: goto label_218d0c;
        case 0x218d10u: goto label_218d10;
        case 0x218d14u: goto label_218d14;
        case 0x218d18u: goto label_218d18;
        case 0x218d1cu: goto label_218d1c;
        case 0x218d20u: goto label_218d20;
        case 0x218d24u: goto label_218d24;
        case 0x218d28u: goto label_218d28;
        case 0x218d2cu: goto label_218d2c;
        case 0x218d30u: goto label_218d30;
        case 0x218d34u: goto label_218d34;
        case 0x218d38u: goto label_218d38;
        case 0x218d3cu: goto label_218d3c;
        case 0x218d40u: goto label_218d40;
        case 0x218d44u: goto label_218d44;
        case 0x218d48u: goto label_218d48;
        case 0x218d4cu: goto label_218d4c;
        case 0x218d50u: goto label_218d50;
        case 0x218d54u: goto label_218d54;
        case 0x218d58u: goto label_218d58;
        case 0x218d5cu: goto label_218d5c;
        case 0x218d60u: goto label_218d60;
        case 0x218d64u: goto label_218d64;
        case 0x218d68u: goto label_218d68;
        case 0x218d6cu: goto label_218d6c;
        case 0x218d70u: goto label_218d70;
        case 0x218d74u: goto label_218d74;
        case 0x218d78u: goto label_218d78;
        case 0x218d7cu: goto label_218d7c;
        case 0x218d80u: goto label_218d80;
        case 0x218d84u: goto label_218d84;
        case 0x218d88u: goto label_218d88;
        case 0x218d8cu: goto label_218d8c;
        case 0x218d90u: goto label_218d90;
        case 0x218d94u: goto label_218d94;
        case 0x218d98u: goto label_218d98;
        case 0x218d9cu: goto label_218d9c;
        case 0x218da0u: goto label_218da0;
        case 0x218da4u: goto label_218da4;
        case 0x218da8u: goto label_218da8;
        case 0x218dacu: goto label_218dac;
        case 0x218db0u: goto label_218db0;
        case 0x218db4u: goto label_218db4;
        case 0x218db8u: goto label_218db8;
        case 0x218dbcu: goto label_218dbc;
        case 0x218dc0u: goto label_218dc0;
        case 0x218dc4u: goto label_218dc4;
        case 0x218dc8u: goto label_218dc8;
        case 0x218dccu: goto label_218dcc;
        case 0x218dd0u: goto label_218dd0;
        case 0x218dd4u: goto label_218dd4;
        case 0x218dd8u: goto label_218dd8;
        case 0x218ddcu: goto label_218ddc;
        case 0x218de0u: goto label_218de0;
        case 0x218de4u: goto label_218de4;
        case 0x218de8u: goto label_218de8;
        case 0x218decu: goto label_218dec;
        case 0x218df0u: goto label_218df0;
        case 0x218df4u: goto label_218df4;
        case 0x218df8u: goto label_218df8;
        case 0x218dfcu: goto label_218dfc;
        case 0x218e00u: goto label_218e00;
        case 0x218e04u: goto label_218e04;
        case 0x218e08u: goto label_218e08;
        case 0x218e0cu: goto label_218e0c;
        case 0x218e10u: goto label_218e10;
        case 0x218e14u: goto label_218e14;
        case 0x218e18u: goto label_218e18;
        case 0x218e1cu: goto label_218e1c;
        case 0x218e20u: goto label_218e20;
        case 0x218e24u: goto label_218e24;
        case 0x218e28u: goto label_218e28;
        case 0x218e2cu: goto label_218e2c;
        case 0x218e30u: goto label_218e30;
        case 0x218e34u: goto label_218e34;
        case 0x218e38u: goto label_218e38;
        case 0x218e3cu: goto label_218e3c;
        case 0x218e40u: goto label_218e40;
        case 0x218e44u: goto label_218e44;
        case 0x218e48u: goto label_218e48;
        case 0x218e4cu: goto label_218e4c;
        case 0x218e50u: goto label_218e50;
        case 0x218e54u: goto label_218e54;
        case 0x218e58u: goto label_218e58;
        case 0x218e5cu: goto label_218e5c;
        case 0x218e60u: goto label_218e60;
        case 0x218e64u: goto label_218e64;
        case 0x218e68u: goto label_218e68;
        case 0x218e6cu: goto label_218e6c;
        case 0x218e70u: goto label_218e70;
        case 0x218e74u: goto label_218e74;
        case 0x218e78u: goto label_218e78;
        case 0x218e7cu: goto label_218e7c;
        case 0x218e80u: goto label_218e80;
        case 0x218e84u: goto label_218e84;
        case 0x218e88u: goto label_218e88;
        case 0x218e8cu: goto label_218e8c;
        case 0x218e90u: goto label_218e90;
        case 0x218e94u: goto label_218e94;
        case 0x218e98u: goto label_218e98;
        case 0x218e9cu: goto label_218e9c;
        case 0x218ea0u: goto label_218ea0;
        case 0x218ea4u: goto label_218ea4;
        case 0x218ea8u: goto label_218ea8;
        case 0x218eacu: goto label_218eac;
        case 0x218eb0u: goto label_218eb0;
        case 0x218eb4u: goto label_218eb4;
        case 0x218eb8u: goto label_218eb8;
        case 0x218ebcu: goto label_218ebc;
        case 0x218ec0u: goto label_218ec0;
        case 0x218ec4u: goto label_218ec4;
        case 0x218ec8u: goto label_218ec8;
        case 0x218eccu: goto label_218ecc;
        case 0x218ed0u: goto label_218ed0;
        case 0x218ed4u: goto label_218ed4;
        case 0x218ed8u: goto label_218ed8;
        case 0x218edcu: goto label_218edc;
        case 0x218ee0u: goto label_218ee0;
        case 0x218ee4u: goto label_218ee4;
        case 0x218ee8u: goto label_218ee8;
        case 0x218eecu: goto label_218eec;
        case 0x218ef0u: goto label_218ef0;
        case 0x218ef4u: goto label_218ef4;
        case 0x218ef8u: goto label_218ef8;
        case 0x218efcu: goto label_218efc;
        case 0x218f00u: goto label_218f00;
        case 0x218f04u: goto label_218f04;
        case 0x218f08u: goto label_218f08;
        case 0x218f0cu: goto label_218f0c;
        case 0x218f10u: goto label_218f10;
        case 0x218f14u: goto label_218f14;
        case 0x218f18u: goto label_218f18;
        case 0x218f1cu: goto label_218f1c;
        case 0x218f20u: goto label_218f20;
        case 0x218f24u: goto label_218f24;
        case 0x218f28u: goto label_218f28;
        case 0x218f2cu: goto label_218f2c;
        case 0x218f30u: goto label_218f30;
        case 0x218f34u: goto label_218f34;
        case 0x218f38u: goto label_218f38;
        case 0x218f3cu: goto label_218f3c;
        case 0x218f40u: goto label_218f40;
        case 0x218f44u: goto label_218f44;
        case 0x218f48u: goto label_218f48;
        case 0x218f4cu: goto label_218f4c;
        case 0x218f50u: goto label_218f50;
        case 0x218f54u: goto label_218f54;
        case 0x218f58u: goto label_218f58;
        case 0x218f5cu: goto label_218f5c;
        case 0x218f60u: goto label_218f60;
        case 0x218f64u: goto label_218f64;
        case 0x218f68u: goto label_218f68;
        case 0x218f6cu: goto label_218f6c;
        case 0x218f70u: goto label_218f70;
        case 0x218f74u: goto label_218f74;
        case 0x218f78u: goto label_218f78;
        case 0x218f7cu: goto label_218f7c;
        case 0x218f80u: goto label_218f80;
        case 0x218f84u: goto label_218f84;
        case 0x218f88u: goto label_218f88;
        case 0x218f8cu: goto label_218f8c;
        case 0x218f90u: goto label_218f90;
        case 0x218f94u: goto label_218f94;
        case 0x218f98u: goto label_218f98;
        case 0x218f9cu: goto label_218f9c;
        case 0x218fa0u: goto label_218fa0;
        case 0x218fa4u: goto label_218fa4;
        case 0x218fa8u: goto label_218fa8;
        case 0x218facu: goto label_218fac;
        case 0x218fb0u: goto label_218fb0;
        case 0x218fb4u: goto label_218fb4;
        case 0x218fb8u: goto label_218fb8;
        case 0x218fbcu: goto label_218fbc;
        case 0x218fc0u: goto label_218fc0;
        case 0x218fc4u: goto label_218fc4;
        case 0x218fc8u: goto label_218fc8;
        case 0x218fccu: goto label_218fcc;
        case 0x218fd0u: goto label_218fd0;
        case 0x218fd4u: goto label_218fd4;
        case 0x218fd8u: goto label_218fd8;
        case 0x218fdcu: goto label_218fdc;
        case 0x218fe0u: goto label_218fe0;
        case 0x218fe4u: goto label_218fe4;
        case 0x218fe8u: goto label_218fe8;
        case 0x218fecu: goto label_218fec;
        case 0x218ff0u: goto label_218ff0;
        case 0x218ff4u: goto label_218ff4;
        case 0x218ff8u: goto label_218ff8;
        case 0x218ffcu: goto label_218ffc;
        case 0x219000u: goto label_219000;
        case 0x219004u: goto label_219004;
        case 0x219008u: goto label_219008;
        case 0x21900cu: goto label_21900c;
        case 0x219010u: goto label_219010;
        case 0x219014u: goto label_219014;
        case 0x219018u: goto label_219018;
        case 0x21901cu: goto label_21901c;
        case 0x219020u: goto label_219020;
        case 0x219024u: goto label_219024;
        case 0x219028u: goto label_219028;
        case 0x21902cu: goto label_21902c;
        case 0x219030u: goto label_219030;
        case 0x219034u: goto label_219034;
        case 0x219038u: goto label_219038;
        case 0x21903cu: goto label_21903c;
        case 0x219040u: goto label_219040;
        case 0x219044u: goto label_219044;
        case 0x219048u: goto label_219048;
        case 0x21904cu: goto label_21904c;
        case 0x219050u: goto label_219050;
        case 0x219054u: goto label_219054;
        case 0x219058u: goto label_219058;
        case 0x21905cu: goto label_21905c;
        case 0x219060u: goto label_219060;
        case 0x219064u: goto label_219064;
        case 0x219068u: goto label_219068;
        case 0x21906cu: goto label_21906c;
        case 0x219070u: goto label_219070;
        case 0x219074u: goto label_219074;
        case 0x219078u: goto label_219078;
        case 0x21907cu: goto label_21907c;
        case 0x219080u: goto label_219080;
        case 0x219084u: goto label_219084;
        case 0x219088u: goto label_219088;
        case 0x21908cu: goto label_21908c;
        case 0x219090u: goto label_219090;
        case 0x219094u: goto label_219094;
        case 0x219098u: goto label_219098;
        case 0x21909cu: goto label_21909c;
        case 0x2190a0u: goto label_2190a0;
        case 0x2190a4u: goto label_2190a4;
        case 0x2190a8u: goto label_2190a8;
        case 0x2190acu: goto label_2190ac;
        case 0x2190b0u: goto label_2190b0;
        case 0x2190b4u: goto label_2190b4;
        case 0x2190b8u: goto label_2190b8;
        case 0x2190bcu: goto label_2190bc;
        case 0x2190c0u: goto label_2190c0;
        case 0x2190c4u: goto label_2190c4;
        case 0x2190c8u: goto label_2190c8;
        case 0x2190ccu: goto label_2190cc;
        case 0x2190d0u: goto label_2190d0;
        case 0x2190d4u: goto label_2190d4;
        case 0x2190d8u: goto label_2190d8;
        case 0x2190dcu: goto label_2190dc;
        case 0x2190e0u: goto label_2190e0;
        case 0x2190e4u: goto label_2190e4;
        case 0x2190e8u: goto label_2190e8;
        case 0x2190ecu: goto label_2190ec;
        case 0x2190f0u: goto label_2190f0;
        case 0x2190f4u: goto label_2190f4;
        case 0x2190f8u: goto label_2190f8;
        case 0x2190fcu: goto label_2190fc;
        case 0x219100u: goto label_219100;
        case 0x219104u: goto label_219104;
        case 0x219108u: goto label_219108;
        case 0x21910cu: goto label_21910c;
        case 0x219110u: goto label_219110;
        case 0x219114u: goto label_219114;
        case 0x219118u: goto label_219118;
        case 0x21911cu: goto label_21911c;
        case 0x219120u: goto label_219120;
        case 0x219124u: goto label_219124;
        case 0x219128u: goto label_219128;
        case 0x21912cu: goto label_21912c;
        case 0x219130u: goto label_219130;
        case 0x219134u: goto label_219134;
        case 0x219138u: goto label_219138;
        case 0x21913cu: goto label_21913c;
        case 0x219140u: goto label_219140;
        case 0x219144u: goto label_219144;
        case 0x219148u: goto label_219148;
        case 0x21914cu: goto label_21914c;
        case 0x219150u: goto label_219150;
        case 0x219154u: goto label_219154;
        case 0x219158u: goto label_219158;
        case 0x21915cu: goto label_21915c;
        case 0x219160u: goto label_219160;
        case 0x219164u: goto label_219164;
        case 0x219168u: goto label_219168;
        case 0x21916cu: goto label_21916c;
        case 0x219170u: goto label_219170;
        case 0x219174u: goto label_219174;
        case 0x219178u: goto label_219178;
        case 0x21917cu: goto label_21917c;
        case 0x219180u: goto label_219180;
        case 0x219184u: goto label_219184;
        case 0x219188u: goto label_219188;
        case 0x21918cu: goto label_21918c;
        case 0x219190u: goto label_219190;
        case 0x219194u: goto label_219194;
        case 0x219198u: goto label_219198;
        case 0x21919cu: goto label_21919c;
        case 0x2191a0u: goto label_2191a0;
        case 0x2191a4u: goto label_2191a4;
        case 0x2191a8u: goto label_2191a8;
        case 0x2191acu: goto label_2191ac;
        case 0x2191b0u: goto label_2191b0;
        case 0x2191b4u: goto label_2191b4;
        case 0x2191b8u: goto label_2191b8;
        case 0x2191bcu: goto label_2191bc;
        case 0x2191c0u: goto label_2191c0;
        case 0x2191c4u: goto label_2191c4;
        case 0x2191c8u: goto label_2191c8;
        case 0x2191ccu: goto label_2191cc;
        case 0x2191d0u: goto label_2191d0;
        case 0x2191d4u: goto label_2191d4;
        case 0x2191d8u: goto label_2191d8;
        case 0x2191dcu: goto label_2191dc;
        case 0x2191e0u: goto label_2191e0;
        case 0x2191e4u: goto label_2191e4;
        case 0x2191e8u: goto label_2191e8;
        case 0x2191ecu: goto label_2191ec;
        case 0x2191f0u: goto label_2191f0;
        case 0x2191f4u: goto label_2191f4;
        case 0x2191f8u: goto label_2191f8;
        case 0x2191fcu: goto label_2191fc;
        case 0x219200u: goto label_219200;
        case 0x219204u: goto label_219204;
        case 0x219208u: goto label_219208;
        case 0x21920cu: goto label_21920c;
        case 0x219210u: goto label_219210;
        case 0x219214u: goto label_219214;
        case 0x219218u: goto label_219218;
        case 0x21921cu: goto label_21921c;
        case 0x219220u: goto label_219220;
        case 0x219224u: goto label_219224;
        case 0x219228u: goto label_219228;
        case 0x21922cu: goto label_21922c;
        case 0x219230u: goto label_219230;
        case 0x219234u: goto label_219234;
        default: break;
    }

    ctx->pc = 0x218008u;

label_218008:
    // 0x218008: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x218008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_21800c:
    // 0x21800c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218010:
    // 0x218010: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x218010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
label_218014:
    // 0x218014: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x218014u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_218018:
    // 0x218018: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x218018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21801c:
    // 0x21801c: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x21801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
label_218020:
    // 0x218020: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x218020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
label_218024:
    // 0x218024: 0x3c0c005a  lui         $t4, 0x5A
    ctx->pc = 0x218024u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)90 << 16));
label_218028:
    // 0x218028: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x218028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
label_21802c:
    // 0x21802c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x21802cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218030:
    // 0x218030: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x218030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
label_218034:
    // 0x218034: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x218034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_218038:
    // 0x218038: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x218038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
label_21803c:
    // 0x21803c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21803cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_218040:
    // 0x218040: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x218040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
label_218044:
    // 0x218044: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x218044u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_218048:
    // 0x218048: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x218048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_21804c:
    // 0x21804c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x21804cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_218050:
    // 0x218050: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x218050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
label_218054:
    // 0x218054: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x218054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_218058:
    // 0x218058: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x218058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
label_21805c:
    // 0x21805c: 0x266400e8  addiu       $a0, $s3, 0xE8
    ctx->pc = 0x21805cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 232));
label_218060:
    // 0x218060: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x218060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_218064:
    // 0x218064: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x218064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218068:
    // 0x218068: 0xa26203bf  sb          $v0, 0x3BF($s3)
    ctx->pc = 0x218068u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 959), (uint8_t)GPR_U32(ctx, 2));
label_21806c:
    // 0x21806c: 0x866b0092  lh          $t3, 0x92($s3)
    ctx->pc = 0x21806cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_218070:
    // 0x218070: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x218070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_218074:
    // 0x218074: 0x8d43bd30  lw          $v1, -0x42D0($t2)
    ctx->pc = 0x218074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294950192)));
label_218078:
    // 0x218078: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x218078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_21807c:
    // 0x21807c: 0xb5940  sll         $t3, $t3, 5
    ctx->pc = 0x21807cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
label_218080:
    // 0x218080: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x218080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_218084:
    // 0x218084: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x218084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_218088:
    // 0x218088: 0xae6300c0  sw          $v1, 0xC0($s3)
    ctx->pc = 0x218088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 3));
label_21808c:
    // 0x21808c: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x21808cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_218090:
    // 0x218090: 0x8d43bd30  lw          $v1, -0x42D0($t2)
    ctx->pc = 0x218090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294950192)));
label_218094:
    // 0x218094: 0xae6300c4  sw          $v1, 0xC4($s3)
    ctx->pc = 0x218094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 3));
label_218098:
    // 0x218098: 0x8d42bd30  lw          $v0, -0x42D0($t2)
    ctx->pc = 0x218098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294950192)));
label_21809c:
    // 0x21809c: 0xae620364  sw          $v0, 0x364($s3)
    ctx->pc = 0x21809cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 2));
label_2180a0:
    // 0x2180a0: 0x8d42bd30  lw          $v0, -0x42D0($t2)
    ctx->pc = 0x2180a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294950192)));
label_2180a4:
    // 0x2180a4: 0xae62018c  sw          $v0, 0x18C($s3)
    ctx->pc = 0x2180a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 396), GPR_U32(ctx, 2));
label_2180a8:
    // 0x2180a8: 0x8d43bd30  lw          $v1, -0x42D0($t2)
    ctx->pc = 0x2180a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294950192)));
label_2180ac:
    // 0x2180ac: 0xa269019d  sb          $t1, 0x19D($s3)
    ctx->pc = 0x2180acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 413), (uint8_t)GPR_U32(ctx, 9));
label_2180b0:
    // 0x2180b0: 0xae630358  sw          $v1, 0x358($s3)
    ctx->pc = 0x2180b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 856), GPR_U32(ctx, 3));
label_2180b4:
    // 0x2180b4: 0xae600658  sw          $zero, 0x658($s3)
    ctx->pc = 0x2180b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1624), GPR_U32(ctx, 0));
label_2180b8:
    // 0x2180b8: 0xa26005b7  sb          $zero, 0x5B7($s3)
    ctx->pc = 0x2180b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1463), (uint8_t)GPR_U32(ctx, 0));
label_2180bc:
    // 0x2180bc: 0xe674065c  swc1        $f20, 0x65C($s3)
    ctx->pc = 0x2180bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1628), bits); }
label_2180c0:
    // 0x2180c0: 0xae600660  sw          $zero, 0x660($s3)
    ctx->pc = 0x2180c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1632), GPR_U32(ctx, 0));
label_2180c4:
    // 0x2180c4: 0xae600664  sw          $zero, 0x664($s3)
    ctx->pc = 0x2180c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1636), GPR_U32(ctx, 0));
label_2180c8:
    // 0x2180c8: 0xe67403a4  swc1        $f20, 0x3A4($s3)
    ctx->pc = 0x2180c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 932), bits); }
label_2180cc:
    // 0x2180cc: 0xae600670  sw          $zero, 0x670($s3)
    ctx->pc = 0x2180ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1648), GPR_U32(ctx, 0));
label_2180d0:
    // 0x2180d0: 0xae600674  sw          $zero, 0x674($s3)
    ctx->pc = 0x2180d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1652), GPR_U32(ctx, 0));
label_2180d4:
    // 0x2180d4: 0xae6006c0  sw          $zero, 0x6C0($s3)
    ctx->pc = 0x2180d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1728), GPR_U32(ctx, 0));
label_2180d8:
    // 0x2180d8: 0xae600368  sw          $zero, 0x368($s3)
    ctx->pc = 0x2180d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 872), GPR_U32(ctx, 0));
label_2180dc:
    // 0x2180dc: 0xa26005b8  sb          $zero, 0x5B8($s3)
    ctx->pc = 0x2180dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1464), (uint8_t)GPR_U32(ctx, 0));
label_2180e0:
    // 0x2180e0: 0xae60035c  sw          $zero, 0x35C($s3)
    ctx->pc = 0x2180e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 860), GPR_U32(ctx, 0));
label_2180e4:
    // 0x2180e4: 0xa26003bb  sb          $zero, 0x3BB($s3)
    ctx->pc = 0x2180e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 955), (uint8_t)GPR_U32(ctx, 0));
label_2180e8:
    // 0x2180e8: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x2180e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_2180ec:
    // 0x2180ec: 0xae7105b0  sw          $s1, 0x5B0($s3)
    ctx->pc = 0x2180ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1456), GPR_U32(ctx, 17));
label_2180f0:
    // 0x2180f0: 0x7e620390  sq          $v0, 0x390($s3)
    ctx->pc = 0x2180f0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 912), GPR_VEC(ctx, 2));
label_2180f4:
    // 0x2180f4: 0xa26005b9  sb          $zero, 0x5B9($s3)
    ctx->pc = 0x2180f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1465), (uint8_t)GPR_U32(ctx, 0));
label_2180f8:
    // 0x2180f8: 0xa27101bb  sb          $s1, 0x1BB($s3)
    ctx->pc = 0x2180f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 443), (uint8_t)GPR_U32(ctx, 17));
label_2180fc:
    // 0x2180fc: 0x8d828690  lw          $v0, -0x7970($t4)
    ctx->pc = 0x2180fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294936208)));
label_218100:
    // 0x218100: 0xae620180  sw          $v0, 0x180($s3)
    ctx->pc = 0x218100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 384), GPR_U32(ctx, 2));
label_218104:
    // 0x218104: 0x8d838690  lw          $v1, -0x7970($t4)
    ctx->pc = 0x218104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294936208)));
label_218108:
    // 0x218108: 0xae63017c  sw          $v1, 0x17C($s3)
    ctx->pc = 0x218108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 380), GPR_U32(ctx, 3));
label_21810c:
    // 0x21810c: 0xa2710198  sb          $s1, 0x198($s3)
    ctx->pc = 0x21810cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 408), (uint8_t)GPR_U32(ctx, 17));
label_218110:
    // 0x218110: 0xa2710199  sb          $s1, 0x199($s3)
    ctx->pc = 0x218110u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 409), (uint8_t)GPR_U32(ctx, 17));
label_218114:
    // 0x218114: 0xa271019a  sb          $s1, 0x19A($s3)
    ctx->pc = 0x218114u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 410), (uint8_t)GPR_U32(ctx, 17));
label_218118:
    // 0x218118: 0xa271019b  sb          $s1, 0x19B($s3)
    ctx->pc = 0x218118u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 411), (uint8_t)GPR_U32(ctx, 17));
label_21811c:
    // 0x21811c: 0xa271019c  sb          $s1, 0x19C($s3)
    ctx->pc = 0x21811cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 412), (uint8_t)GPR_U32(ctx, 17));
label_218120:
    // 0x218120: 0x8d42bd30  lw          $v0, -0x42D0($t2)
    ctx->pc = 0x218120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294950192)));
label_218124:
    // 0x218124: 0xa26001b2  sb          $zero, 0x1B2($s3)
    ctx->pc = 0x218124u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 434), (uint8_t)GPR_U32(ctx, 0));
label_218128:
    // 0x218128: 0xc0e1284  jal         func_384A10
label_21812c:
    if (ctx->pc == 0x21812Cu) {
        ctx->pc = 0x21812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218128u;
        // 0x21812c: 0xae620348  sw          $v0, 0x348($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218130u;
        goto label_218130;
    }
    ctx->pc = 0x218128u;
    SET_GPR_U32(ctx, 31, 0x218130u);
    ctx->pc = 0x21812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218128u;
    // 0x21812c: 0xae620348  sw          $v0, 0x348($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384A10u, 0x218128u, 0x218130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218130u;
label_218130:
    // 0x218130: 0xae7e00cc  sw          $fp, 0xCC($s3)
    ctx->pc = 0x218130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 30));
label_218134:
    // 0x218134: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_218138:
    // 0x218138: 0xc0e8570  jal         func_3A15C0
label_21813c:
    if (ctx->pc == 0x21813Cu) {
        ctx->pc = 0x21813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218138u;
        // 0x21813c: 0xae7e00d0  sw          $fp, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218140u;
        goto label_218140;
    }
    ctx->pc = 0x218138u;
    SET_GPR_U32(ctx, 31, 0x218140u);
    ctx->pc = 0x21813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218138u;
    // 0x21813c: 0xae7e00d0  sw          $fp, 0xD0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15C0u, 0x218138u, 0x218140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218140u;
label_218140:
    // 0x218140: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x218140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_218144:
    // 0x218144: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x218144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_218148:
    // 0x218148: 0x7a090010  lq          $t1, 0x10($s0)
    ctx->pc = 0x218148u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_21814c:
    // 0x21814c: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x21814cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_218150:
    // 0x218150: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x218150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_218154:
    // 0x218154: 0x24701770  addiu       $s0, $v1, 0x1770
    ctx->pc = 0x218154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
label_218158:
    // 0x218158: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x218158u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_21815c:
    // 0x21815c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x21815cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_218160:
    // 0x218160: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x218160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_218164:
    // 0x218164: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x218164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_218168:
    // 0x218168: 0xa2600333  sb          $zero, 0x333($s3)
    ctx->pc = 0x218168u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 819), (uint8_t)GPR_U32(ctx, 0));
label_21816c:
    // 0x21816c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21816cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218170:
    // 0x218170: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x218170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_218174:
    // 0x218174: 0xae600334  sw          $zero, 0x334($s3)
    ctx->pc = 0x218174u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 820), GPR_U32(ctx, 0));
label_218178:
    // 0x218178: 0xae6002a0  sw          $zero, 0x2A0($s3)
    ctx->pc = 0x218178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 672), GPR_U32(ctx, 0));
label_21817c:
    // 0x21817c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21817cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218180:
    // 0x218180: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x218180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_218184:
    // 0x218184: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x218184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_218188:
    // 0x218188: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x218188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_21818c:
    // 0x21818c: 0x8d4447c4  lw          $a0, 0x47C4($t2)
    ctx->pc = 0x21818cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 18372)));
label_218190:
    // 0x218190: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x218190u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_218194:
    // 0x218194: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x218194u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_218198:
    // 0x218198: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x218198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_21819c:
    // 0x21819c: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x21819cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
label_2181a0:
    // 0x2181a0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2181a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2181a4:
    // 0x2181a4: 0xc1036e2  jal         func_40DB88
label_2181a8:
    if (ctx->pc == 0x2181A8u) {
        ctx->pc = 0x2181A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181A4u;
        // 0x2181a8: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2181ACu;
        goto label_2181ac;
    }
    ctx->pc = 0x2181A4u;
    SET_GPR_U32(ctx, 31, 0x2181ACu);
    ctx->pc = 0x2181A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181A4u;
    // 0x2181a8: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2181A4u, 0x2181ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181ACu;
label_2181ac:
    // 0x2181ac: 0xc0579c6  jal         func_15E718
label_2181b0:
    if (ctx->pc == 0x2181B0u) {
        ctx->pc = 0x2181B4u;
        goto label_2181b4;
    }
    ctx->pc = 0x2181ACu;
    SET_GPR_U32(ctx, 31, 0x2181B4u);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x2181ACu, 0x2181B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181B4u;
label_2181b4:
    // 0x2181b4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2181b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2181b8:
    // 0x2181b8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x2181b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_2181bc:
    // 0x2181bc: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x2181bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2181c0:
    // 0x2181c0: 0xa0f809  jalr        $a1
label_2181c4:
    if (ctx->pc == 0x2181C4u) {
        ctx->pc = 0x2181C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181C0u;
        // 0x2181c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2181C8u;
        goto label_2181c8;
    }
    ctx->pc = 0x2181C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2181C8u);
        ctx->pc = 0x2181C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181C0u;
        // 0x2181c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2181C0u, 0x2181C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2181C8u;
label_2181c8:
    // 0x2181c8: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x2181c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
label_2181cc:
    // 0x2181cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2181d0:
    if (ctx->pc == 0x2181D0u) {
        ctx->pc = 0x2181D4u;
        goto label_2181d4;
    }
    ctx->pc = 0x2181CCu;
    {
        const bool branch_taken_0x2181cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2181cc) {
            ctx->pc = 0x2181F8u;
            goto label_2181f8;
        }
    }
    ctx->pc = 0x2181D4u;
label_2181d4:
    // 0x2181d4: 0xc0579c6  jal         func_15E718
label_2181d8:
    if (ctx->pc == 0x2181D8u) {
        ctx->pc = 0x2181DCu;
        goto label_2181dc;
    }
    ctx->pc = 0x2181D4u;
    SET_GPR_U32(ctx, 31, 0x2181DCu);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x2181D4u, 0x2181DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181DCu;
label_2181dc:
    // 0x2181dc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2181dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2181e0:
    // 0x2181e0: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x2181e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_2181e4:
    // 0x2181e4: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x2181e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2181e8:
    // 0x2181e8: 0xa0f809  jalr        $a1
label_2181ec:
    if (ctx->pc == 0x2181ECu) {
        ctx->pc = 0x2181ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181E8u;
        // 0x2181ec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2181F0u;
        goto label_2181f0;
    }
    ctx->pc = 0x2181E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2181F0u);
        ctx->pc = 0x2181ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181E8u;
        // 0x2181ec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2181E8u, 0x2181F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2181F0u;
label_2181f0:
    // 0x2181f0: 0x38420011  xori        $v0, $v0, 0x11
    ctx->pc = 0x2181f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)17);
label_2181f4:
    // 0x2181f4: 0x222900b  movn        $s2, $s1, $v0
    ctx->pc = 0x2181f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 17));
label_2181f8:
    // 0x2181f8: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
label_2181fc:
    if (ctx->pc == 0x2181FCu) {
        ctx->pc = 0x2181FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181F8u;
        // 0x2181fc: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218200u;
        goto label_218200;
    }
    ctx->pc = 0x2181F8u;
    {
        const bool branch_taken_0x2181f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2181FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181F8u;
        // 0x2181fc: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181f8) {
            ctx->pc = 0x218268u;
            goto label_218268;
        }
    }
    ctx->pc = 0x218200u;
label_218200:
    // 0x218200: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_218204:
    if (ctx->pc == 0x218204u) {
        ctx->pc = 0x218204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218200u;
        // 0x218204: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x218208u;
        goto label_218208;
    }
    ctx->pc = 0x218200u;
    {
        const bool branch_taken_0x218200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218200u;
        // 0x218204: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218200) {
            ctx->pc = 0x218268u;
            goto label_218268;
        }
    }
    ctx->pc = 0x218208u;
label_218208:
    // 0x218208: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x218208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_21820c:
    // 0x21820c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x21820cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_218210:
    // 0x218210: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x218210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_218214:
    // 0x218214: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x218214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_218218:
    // 0x218218: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x218218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21821c:
    // 0x21821c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x21821cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_218220:
    // 0x218220: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x218220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_218224:
    // 0x218224: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x218224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
label_218228:
    // 0x218228: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x218228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_21822c:
    // 0x21822c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x21822cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_218230:
    // 0x218230: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x218230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_218234:
    // 0x218234: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x218234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_218238:
    // 0x218238: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x218238u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21823c:
    // 0x21823c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21823cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_218240:
    // 0x218240: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x218240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
label_218244:
    // 0x218244: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x218244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_218248:
    // 0x218248: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x218248u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21824c:
    // 0x21824c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21824cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_218250:
    // 0x218250: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x218250u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_218254:
    // 0x218254: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x218254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_218258:
    // 0x218258: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x218258u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21825c:
    // 0x21825c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x21825cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_218260:
    // 0x218260: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x218260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_218264:
    // 0x218264: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x218264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_218268:
    // 0x218268: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x218268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_21826c:
    // 0x21826c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21826cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_218270:
    // 0x218270: 0x34425001  ori         $v0, $v0, 0x5001
    ctx->pc = 0x218270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20481);
label_218274:
    // 0x218274: 0x14a400  sll         $s4, $s4, 16
    ctx->pc = 0x218274u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
label_218278:
    // 0x218278: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x218278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_21827c:
    // 0x21827c: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x21827cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_218280:
    // 0x218280: 0xafb40104  sw          $s4, 0x104($sp)
    ctx->pc = 0x218280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 20));
label_218284:
    // 0x218284: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x218284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_218288:
    // 0x218288: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x218288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
label_21828c:
    // 0x21828c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21828cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218290:
    // 0x218290: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x218290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_218294:
    // 0x218294: 0x267003c8  addiu       $s0, $s3, 0x3C8
    ctx->pc = 0x218294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 968));
label_218298:
    // 0x218298: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x218298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_21829c:
    // 0x21829c: 0x40f809  jalr        $v0
label_2182a0:
    if (ctx->pc == 0x2182A0u) {
        ctx->pc = 0x2182A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21829Cu;
        // 0x2182a0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2182A4u;
        goto label_2182a4;
    }
    ctx->pc = 0x21829Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2182A4u);
        ctx->pc = 0x2182A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21829Cu;
        // 0x2182a0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21829Cu, 0x2182A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2182A4u;
label_2182a4:
    // 0x2182a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2182a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2182a8:
    // 0x2182a8: 0x26670284  addiu       $a3, $s3, 0x284
    ctx->pc = 0x2182a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
label_2182ac:
    // 0x2182ac: 0x266205d0  addiu       $v0, $s3, 0x5D0
    ctx->pc = 0x2182acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1488));
label_2182b0:
    // 0x2182b0: 0xafa7011c  sw          $a3, 0x11C($sp)
    ctx->pc = 0x2182b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 7));
label_2182b4:
    // 0x2182b4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2182b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_2182b8:
    // 0x2182b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2182b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2182bc:
    // 0x2182bc: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x2182bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_2182c0:
    // 0x2182c0: 0x84640130  lh          $a0, 0x130($v1)
    ctx->pc = 0x2182c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 304)));
label_2182c4:
    // 0x2182c4: 0x266301bc  addiu       $v1, $s3, 0x1BC
    ctx->pc = 0x2182c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 444));
label_2182c8:
    // 0x2182c8: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2182c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2182cc:
    // 0x2182cc: 0x40f809  jalr        $v0
label_2182d0:
    if (ctx->pc == 0x2182D0u) {
        ctx->pc = 0x2182D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2182CCu;
        // 0x2182d0: 0xafa30114  sw          $v1, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2182D4u;
        goto label_2182d4;
    }
    ctx->pc = 0x2182CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2182D4u);
        ctx->pc = 0x2182D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2182CCu;
        // 0x2182d0: 0xafa30114  sw          $v1, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2182CCu, 0x2182D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2182D4u;
label_2182d4:
    // 0x2182d4: 0x266401c4  addiu       $a0, $s3, 0x1C4
    ctx->pc = 0x2182d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 452));
label_2182d8:
    // 0x2182d8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2182d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2182dc:
    // 0x2182dc: 0x27a700f8  addiu       $a3, $sp, 0xF8
    ctx->pc = 0x2182dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_2182e0:
    // 0x2182e0: 0x26620580  addiu       $v0, $s3, 0x580
    ctx->pc = 0x2182e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
label_2182e4:
    // 0x2182e4: 0x266302e0  addiu       $v1, $s3, 0x2E0
    ctx->pc = 0x2182e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
label_2182e8:
    // 0x2182e8: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x2182e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
label_2182ec:
    // 0x2182ec: 0xafa50108  sw          $a1, 0x108($sp)
    ctx->pc = 0x2182ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 5));
label_2182f0:
    // 0x2182f0: 0x27b500b0  addiu       $s5, $sp, 0xB0
    ctx->pc = 0x2182f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2182f4:
    // 0x2182f4: 0xafa7010c  sw          $a3, 0x10C($sp)
    ctx->pc = 0x2182f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 7));
label_2182f8:
    // 0x2182f8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2182f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_2182fc:
    // 0x2182fc: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x2182fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
label_218300:
    // 0x218300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218304:
    // 0x218304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218308:
    // 0x218308: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21830c:
    // 0x21830c: 0xc042f0e  jal         func_10BC38
label_218310:
    if (ctx->pc == 0x218310u) {
        ctx->pc = 0x218310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21830Cu;
        // 0x218310: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218314u;
        goto label_218314;
    }
    ctx->pc = 0x21830Cu;
    SET_GPR_U32(ctx, 31, 0x218314u);
    ctx->pc = 0x218310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21830Cu;
    // 0x218310: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x21830Cu, 0x218314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218314u;
label_218314:
    // 0x218314: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x218314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_218318:
    // 0x218318: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_21831c:
    if (ctx->pc == 0x21831Cu) {
        ctx->pc = 0x21831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218318u;
        // 0x21831c: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218320u;
        goto label_218320;
    }
    ctx->pc = 0x218318u;
    {
        const bool branch_taken_0x218318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218318u;
        // 0x21831c: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218318) {
            ctx->pc = 0x218300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218300;
        }
    }
    ctx->pc = 0x218320u;
label_218320:
    // 0x218320: 0x8e7200cc  lw          $s2, 0xCC($s3)
    ctx->pc = 0x218320u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_218324:
    // 0x218324: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x218324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_218328:
    // 0x218328: 0xa26201b0  sb          $v0, 0x1B0($s3)
    ctx->pc = 0x218328u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 432), (uint8_t)GPR_U32(ctx, 2));
label_21832c:
    // 0x21832c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21832cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218330:
    // 0x218330: 0x2643fffe  addiu       $v1, $s2, -0x2
    ctx->pc = 0x218330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_218334:
    // 0x218334: 0xae600188  sw          $zero, 0x188($s3)
    ctx->pc = 0x218334u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 392), GPR_U32(ctx, 0));
label_218338:
    // 0x218338: 0x2c6200dd  sltiu       $v0, $v1, 0xDD
    ctx->pc = 0x218338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)221) ? 1 : 0);
label_21833c:
    // 0x21833c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_218340:
    if (ctx->pc == 0x218340u) {
        ctx->pc = 0x218340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21833Cu;
        // 0x218340: 0xae6000d8  sw          $zero, 0xD8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218344u;
        goto label_218344;
    }
    ctx->pc = 0x21833Cu;
    {
        const bool branch_taken_0x21833c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21833Cu;
        // 0x218340: 0xae6000d8  sw          $zero, 0xD8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21833c) {
            ctx->pc = 0x218400u;
            goto label_218400;
        }
    }
    ctx->pc = 0x218344u;
label_218344:
    // 0x218344: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x218344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_218348:
    // 0x218348: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x218348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21834c:
    // 0x21834c: 0x2442a590  addiu       $v0, $v0, -0x5A70
    ctx->pc = 0x21834cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944144));
label_218350:
    // 0x218350: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_218354:
    // 0x218354: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x218354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_218358:
    // 0x218358: 0x800008  jr          $a0
label_21835c:
    if (ctx->pc == 0x21835Cu) {
        ctx->pc = 0x218360u;
        goto label_218360;
    }
    ctx->pc = 0x218358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218360u: goto label_218360;
            case 0x218364u: goto label_218364;
            case 0x21836Cu: goto label_21836c;
            case 0x218370u: goto label_218370;
            case 0x218378u: goto label_218378;
            case 0x21837Cu: goto label_21837c;
            case 0x218384u: goto label_218384;
            case 0x21838Cu: goto label_21838c;
            case 0x218390u: goto label_218390;
            case 0x218398u: goto label_218398;
            case 0x21839Cu: goto label_21839c;
            case 0x2183A4u: goto label_2183a4;
            case 0x2183A8u: goto label_2183a8;
            case 0x2183B0u: goto label_2183b0;
            case 0x2183B4u: goto label_2183b4;
            case 0x2183BCu: goto label_2183bc;
            case 0x2183C0u: goto label_2183c0;
            case 0x2183C8u: goto label_2183c8;
            case 0x2183D4u: goto label_2183d4;
            case 0x2183E0u: goto label_2183e0;
            case 0x2183ECu: goto label_2183ec;
            case 0x2183F8u: goto label_2183f8;
            case 0x218400u: goto label_218400;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218358u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x218360u;
label_218360:
    // 0x218360: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x218360u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218364:
    // 0x218364: 0x10000026  b           . + 4 + (0x26 << 2)
label_218368:
    if (ctx->pc == 0x218368u) {
        ctx->pc = 0x218368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218364u;
        // 0x218368: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21836Cu;
        goto label_21836c;
    }
    ctx->pc = 0x218364u;
    {
        const bool branch_taken_0x218364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218364u;
        // 0x218368: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218364) {
            ctx->pc = 0x218400u;
            goto label_218400;
        }
    }
    ctx->pc = 0x21836Cu;
label_21836c:
    // 0x21836c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x21836cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218370:
    // 0x218370: 0x10000023  b           . + 4 + (0x23 << 2)
label_218374:
    if (ctx->pc == 0x218374u) {
        ctx->pc = 0x218374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218370u;
        // 0x218374: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218378u;
        goto label_218378;
    }
    ctx->pc = 0x218370u;
    {
        const bool branch_taken_0x218370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218370u;
        // 0x218374: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218370) {
            ctx->pc = 0x218400u;
            goto label_218400;
        }
    }
    ctx->pc = 0x218378u;
label_218378:
    // 0x218378: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x218378u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21837c:
    // 0x21837c: 0x10000020  b           . + 4 + (0x20 << 2)
label_218380:
    if (ctx->pc == 0x218380u) {
        ctx->pc = 0x218380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21837Cu;
        // 0x218380: 0x2412000b  addiu       $s2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218384u;
        goto label_218384;
    }
    ctx->pc = 0x21837Cu;
    {
        const bool branch_taken_0x21837c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21837Cu;
        // 0x218380: 0x2412000b  addiu       $s2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21837c) {
            ctx->pc = 0x218400u;
            goto label_218400;
        }
    }
    ctx->pc = 0x218384u;
label_218384:
    // 0x218384: 0x1000001e  b           . + 4 + (0x1E << 2)
label_218388:
    if (ctx->pc == 0x218388u) {
        ctx->pc = 0x218388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218384u;
        // 0x218388: 0x2412000f  addiu       $s2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21838Cu;
        goto label_21838c;
    }
    ctx->pc = 0x218384u;
    {
        const bool branch_taken_0x218384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218384u;
        // 0x218388: 0x2412000f  addiu       $s2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218384) {
            ctx->pc = 0x218400u;
            goto label_218400;
        }
    }
    ctx->pc = 0x21838Cu;
label_21838c:
    // 0x21838c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x21838cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218390:
    // 0x218390: 0x1000001b  b           . + 4 + (0x1B << 2)
label_218394:
    if (ctx->pc == 0x218394u) {
        ctx->pc = 0x218394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218390u;
        // 0x218394: 0x24120012  addiu       $s2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218398u;
        goto label_218398;
    }
    ctx->pc = 0x218390u;
    {
        const bool branch_taken_0x218390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218390u;
        // 0x218394: 0x24120012  addiu       $s2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218390) {
            ctx->pc = 0x218400u;
            goto label_218400;
        }
    }
    ctx->pc = 0x218398u;
label_218398:
    // 0x218398: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x218398u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21839c:
    // 0x21839c: 0x10000018  b           . + 4 + (0x18 << 2)
label_2183a0:
    if (ctx->pc == 0x2183A0u) {
        ctx->pc = 0x2183A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21839Cu;
        // 0x2183a0: 0x24120015  addiu       $s2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2183A4u;
        goto label_2183a4;
    }
    ctx->pc = 0x21839Cu;
    {
        const bool branch_taken_0x21839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2183A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21839Cu;
        // 0x2183a0: 0x24120015  addiu       $s2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21839c) {
            ctx->pc = 0x218400u;
            goto label_218400;
        }
    }
    ctx->pc = 0x2183A4u;
label_2183a4:
    // 0x2183a4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2183a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2183a8:
    // 0x2183a8: 0x10000015  b           . + 4 + (0x15 << 2)
label_2183ac:
    if (ctx->pc == 0x2183ACu) {
        ctx->pc = 0x2183ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183A8u;
        // 0x2183ac: 0x2412001a  addiu       $s2, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2183B0u;
        goto label_2183b0;
    }
    ctx->pc = 0x2183A8u;
    {
        const bool branch_taken_0x2183a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2183ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183A8u;
        // 0x2183ac: 0x2412001a  addiu       $s2, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183a8) {
            ctx->pc = 0x218400u;
            goto label_218400;
        }
    }
    ctx->pc = 0x2183B0u;
label_2183b0:
    // 0x2183b0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2183b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2183b4:
    // 0x2183b4: 0x10000012  b           . + 4 + (0x12 << 2)
label_2183b8:
    if (ctx->pc == 0x2183B8u) {
        ctx->pc = 0x2183B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183B4u;
        // 0x2183b8: 0x2412001e  addiu       $s2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2183BCu;
        goto label_2183bc;
    }
    ctx->pc = 0x2183B4u;
    {
        const bool branch_taken_0x2183b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2183B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183B4u;
        // 0x2183b8: 0x2412001e  addiu       $s2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183b4) {
            ctx->pc = 0x218400u;
            goto label_218400;
        }
    }
    ctx->pc = 0x2183BCu;
label_2183bc:
    // 0x2183bc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2183bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2183c0:
    // 0x2183c0: 0x1000000f  b           . + 4 + (0xF << 2)
label_2183c4:
    if (ctx->pc == 0x2183C4u) {
        ctx->pc = 0x2183C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183C0u;
        // 0x2183c4: 0x24120021  addiu       $s2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2183C8u;
        goto label_2183c8;
    }
    ctx->pc = 0x2183C0u;
    {
        const bool branch_taken_0x2183c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2183C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183C0u;
        // 0x2183c4: 0x24120021  addiu       $s2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183c0) {
            ctx->pc = 0x218400u;
            goto label_218400;
        }
    }
    ctx->pc = 0x2183C8u;
label_2183c8:
    // 0x2183c8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2183c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2183cc:
    // 0x2183cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_2183d0:
    if (ctx->pc == 0x2183D0u) {
        ctx->pc = 0x2183D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183CCu;
        // 0x2183d0: 0x24120026  addiu       $s2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2183D4u;
        goto label_2183d4;
    }
    ctx->pc = 0x2183CCu;
    {
        const bool branch_taken_0x2183cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2183D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183CCu;
        // 0x2183d0: 0x24120026  addiu       $s2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183cc) {
            ctx->pc = 0x218400u;
            goto label_218400;
        }
    }
    ctx->pc = 0x2183D4u;
label_2183d4:
    // 0x2183d4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2183d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2183d8:
    // 0x2183d8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2183dc:
    if (ctx->pc == 0x2183DCu) {
        ctx->pc = 0x2183DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183D8u;
        // 0x2183dc: 0x24120029  addiu       $s2, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2183E0u;
        goto label_2183e0;
    }
    ctx->pc = 0x2183D8u;
    {
        const bool branch_taken_0x2183d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2183DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183D8u;
        // 0x2183dc: 0x24120029  addiu       $s2, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183d8) {
            ctx->pc = 0x218400u;
            goto label_218400;
        }
    }
    ctx->pc = 0x2183E0u;
label_2183e0:
    // 0x2183e0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2183e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2183e4:
    // 0x2183e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2183e8:
    if (ctx->pc == 0x2183E8u) {
        ctx->pc = 0x2183E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183E4u;
        // 0x2183e8: 0x2412002b  addiu       $s2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2183ECu;
        goto label_2183ec;
    }
    ctx->pc = 0x2183E4u;
    {
        const bool branch_taken_0x2183e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2183E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183E4u;
        // 0x2183e8: 0x2412002b  addiu       $s2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183e4) {
            ctx->pc = 0x218400u;
            goto label_218400;
        }
    }
    ctx->pc = 0x2183ECu;
label_2183ec:
    // 0x2183ec: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2183ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2183f0:
    // 0x2183f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2183f4:
    if (ctx->pc == 0x2183F4u) {
        ctx->pc = 0x2183F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183F0u;
        // 0x2183f4: 0x2412002d  addiu       $s2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2183F8u;
        goto label_2183f8;
    }
    ctx->pc = 0x2183F0u;
    {
        const bool branch_taken_0x2183f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2183F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183F0u;
        // 0x2183f4: 0x2412002d  addiu       $s2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183f0) {
            ctx->pc = 0x218400u;
            goto label_218400;
        }
    }
    ctx->pc = 0x2183F8u;
label_2183f8:
    // 0x2183f8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2183f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2183fc:
    // 0x2183fc: 0x241200dd  addiu       $s2, $zero, 0xDD
    ctx->pc = 0x2183fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
label_218400:
    // 0x218400: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x218400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_218404:
    // 0x218404: 0x8c91489c  lw          $s1, 0x489C($a0)
    ctx->pc = 0x218404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_218408:
    // 0x218408: 0xc136ad6  jal         func_4DAB58
label_21840c:
    if (ctx->pc == 0x21840Cu) {
        ctx->pc = 0x21840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218408u;
        // 0x21840c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218410u;
        goto label_218410;
    }
    ctx->pc = 0x218408u;
    SET_GPR_U32(ctx, 31, 0x218410u);
    ctx->pc = 0x21840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218408u;
    // 0x21840c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x218408u, 0x218410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218410u;
label_218410:
    // 0x218410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218414:
    // 0x218414: 0xc136ad4  jal         func_4DAB50
label_218418:
    if (ctx->pc == 0x218418u) {
        ctx->pc = 0x218418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218414u;
        // 0x218418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21841Cu;
        goto label_21841c;
    }
    ctx->pc = 0x218414u;
    SET_GPR_U32(ctx, 31, 0x21841Cu);
    ctx->pc = 0x218418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218414u;
    // 0x218418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x218414u, 0x21841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21841Cu;
label_21841c:
    // 0x21841c: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x21841cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_218420:
    // 0x218420: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x218420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_218424:
    // 0x218424: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x218424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_218428:
    // 0x218428: 0x1ac0000a  blez        $s6, . + 4 + (0xA << 2)
label_21842c:
    if (ctx->pc == 0x21842Cu) {
        ctx->pc = 0x21842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218428u;
        // 0x21842c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218430u;
        goto label_218430;
    }
    ctx->pc = 0x218428u;
    {
        const bool branch_taken_0x218428 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x21842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218428u;
        // 0x21842c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218428) {
            ctx->pc = 0x218454u;
            goto label_218454;
        }
    }
    ctx->pc = 0x218430u;
label_218430:
    // 0x218430: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
label_218434:
    if (ctx->pc == 0x218434u) {
        ctx->pc = 0x218434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218430u;
        // 0x218434: 0x2442ffc4  addiu       $v0, $v0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218438u;
        goto label_218438;
    }
    ctx->pc = 0x218430u;
    {
        const bool branch_taken_0x218430 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x218434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218430u;
        // 0x218434: 0x2442ffc4  addiu       $v0, $v0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218430) {
            ctx->pc = 0x218458u;
            goto label_218458;
        }
    }
    ctx->pc = 0x218438u;
label_218438:
    // 0x218438: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x218438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_21843c:
    // 0x21843c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_218440:
    if (ctx->pc == 0x218440u) {
        ctx->pc = 0x218440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21843Cu;
        // 0x218440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218444u;
        goto label_218444;
    }
    ctx->pc = 0x21843Cu;
    {
        const bool branch_taken_0x21843c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21843Cu;
        // 0x218440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21843c) {
            ctx->pc = 0x218474u;
            goto label_218474;
        }
    }
    ctx->pc = 0x218444u;
label_218444:
    // 0x218444: 0xc08a200  jal         func_228800
label_218448:
    if (ctx->pc == 0x218448u) {
        ctx->pc = 0x218448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218444u;
        // 0x218448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21844Cu;
        goto label_21844c;
    }
    ctx->pc = 0x218444u;
    SET_GPR_U32(ctx, 31, 0x21844Cu);
    ctx->pc = 0x218448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218444u;
    // 0x218448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x218444u, 0x21844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21844Cu;
label_21844c:
    // 0x21844c: 0x1000000c  b           . + 4 + (0xC << 2)
label_218450:
    if (ctx->pc == 0x218450u) {
        ctx->pc = 0x218450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21844Cu;
        // 0x218450: 0x94430114  lhu         $v1, 0x114($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218454u;
        goto label_218454;
    }
    ctx->pc = 0x21844Cu;
    {
        const bool branch_taken_0x21844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21844Cu;
        // 0x218450: 0x94430114  lhu         $v1, 0x114($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21844c) {
            ctx->pc = 0x218480u;
            goto label_218480;
        }
    }
    ctx->pc = 0x218454u;
label_218454:
    // 0x218454: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x218454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
label_218458:
    // 0x218458: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x218458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_21845c:
    // 0x21845c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_218460:
    if (ctx->pc == 0x218460u) {
        ctx->pc = 0x218460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21845Cu;
        // 0x218460: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218464u;
        goto label_218464;
    }
    ctx->pc = 0x21845Cu;
    {
        const bool branch_taken_0x21845c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21845c) {
            ctx->pc = 0x218460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21845Cu;
            // 0x218460: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218474u;
            goto label_218474;
        }
    }
    ctx->pc = 0x218464u;
label_218464:
    // 0x218464: 0xc08a200  jal         func_228800
label_218468:
    if (ctx->pc == 0x218468u) {
        ctx->pc = 0x218468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218464u;
        // 0x218468: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21846Cu;
        goto label_21846c;
    }
    ctx->pc = 0x218464u;
    SET_GPR_U32(ctx, 31, 0x21846Cu);
    ctx->pc = 0x218468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218464u;
    // 0x218468: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x218464u, 0x21846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21846Cu;
label_21846c:
    // 0x21846c: 0x10000004  b           . + 4 + (0x4 << 2)
label_218470:
    if (ctx->pc == 0x218470u) {
        ctx->pc = 0x218470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21846Cu;
        // 0x218470: 0x94430114  lhu         $v1, 0x114($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218474u;
        goto label_218474;
    }
    ctx->pc = 0x21846Cu;
    {
        const bool branch_taken_0x21846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21846Cu;
        // 0x218470: 0x94430114  lhu         $v1, 0x114($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21846c) {
            ctx->pc = 0x218480u;
            goto label_218480;
        }
    }
    ctx->pc = 0x218474u;
label_218474:
    // 0x218474: 0xc08a200  jal         func_228800
label_218478:
    if (ctx->pc == 0x218478u) {
        ctx->pc = 0x21847Cu;
        goto label_21847c;
    }
    ctx->pc = 0x218474u;
    SET_GPR_U32(ctx, 31, 0x21847Cu);
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x218474u, 0x21847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21847Cu;
label_21847c:
    // 0x21847c: 0x94430112  lhu         $v1, 0x112($v0)
    ctx->pc = 0x21847cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
label_218480:
    // 0x218480: 0xae63037c  sw          $v1, 0x37C($s3)
    ctx->pc = 0x218480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 892), GPR_U32(ctx, 3));
label_218484:
    // 0x218484: 0xae7200cc  sw          $s2, 0xCC($s3)
    ctx->pc = 0x218484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 18));
label_218488:
    // 0x218488: 0xc08a200  jal         func_228800
label_21848c:
    if (ctx->pc == 0x21848Cu) {
        ctx->pc = 0x21848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218488u;
        // 0x21848c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218490u;
        goto label_218490;
    }
    ctx->pc = 0x218488u;
    SET_GPR_U32(ctx, 31, 0x218490u);
    ctx->pc = 0x21848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218488u;
    // 0x21848c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x218488u, 0x218490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218490u;
label_218490:
    // 0x218490: 0x8e6400cc  lw          $a0, 0xCC($s3)
    ctx->pc = 0x218490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_218494:
    // 0x218494: 0x24030103  addiu       $v1, $zero, 0x103
    ctx->pc = 0x218494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_218498:
    // 0x218498: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_21849c:
    if (ctx->pc == 0x21849Cu) {
        ctx->pc = 0x21849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218498u;
        // 0x21849c: 0x84420118  lh          $v0, 0x118($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2184A0u;
        goto label_2184a0;
    }
    ctx->pc = 0x218498u;
    {
        const bool branch_taken_0x218498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x21849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218498u;
        // 0x21849c: 0x84420118  lh          $v0, 0x118($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218498) {
            ctx->pc = 0x2184B8u;
            goto label_2184b8;
        }
    }
    ctx->pc = 0x2184A0u;
label_2184a0:
    // 0x2184a0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2184a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2184a4:
    // 0x2184a4: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x2184a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2184a8:
    // 0x2184a8: 0x2484b8b0  addiu       $a0, $a0, -0x4750
    ctx->pc = 0x2184a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
label_2184ac:
    // 0x2184ac: 0xc0cd4fc  jal         func_3353F0
label_2184b0:
    if (ctx->pc == 0x2184B0u) {
        ctx->pc = 0x2184B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2184ACu;
        // 0x2184b0: 0x2406007d  addiu       $a2, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2184B4u;
        goto label_2184b4;
    }
    ctx->pc = 0x2184ACu;
    SET_GPR_U32(ctx, 31, 0x2184B4u);
    ctx->pc = 0x2184B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184ACu;
    // 0x2184b0: 0x2406007d  addiu       $a2, $zero, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2184ACu, 0x2184B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184B4u;
label_2184b4:
    // 0x2184b4: 0x8e6400cc  lw          $a0, 0xCC($s3)
    ctx->pc = 0x2184b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2184b8:
    // 0x2184b8: 0xc08a444  jal         func_229110
label_2184bc:
    if (ctx->pc == 0x2184BCu) {
        ctx->pc = 0x2184BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2184B8u;
        // 0x2184bc: 0xae6203b0  sw          $v0, 0x3B0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2184C0u;
        goto label_2184c0;
    }
    ctx->pc = 0x2184B8u;
    SET_GPR_U32(ctx, 31, 0x2184C0u);
    ctx->pc = 0x2184BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184B8u;
    // 0x2184bc: 0xae6203b0  sw          $v0, 0x3B0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 944), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229110u, 0x2184B8u, 0x2184C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184C0u;
label_2184c0:
    // 0x2184c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2184c4:
    if (ctx->pc == 0x2184C4u) {
        ctx->pc = 0x2184C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2184C0u;
        // 0x2184c4: 0x8e6203b0  lw          $v0, 0x3B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 944)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2184C8u;
        goto label_2184c8;
    }
    ctx->pc = 0x2184C0u;
    {
        const bool branch_taken_0x2184c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2184c0) {
            ctx->pc = 0x2184C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2184C0u;
            // 0x2184c4: 0x8e6203b0  lw          $v0, 0x3B0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2184C8u;
            goto label_2184c8;
        }
    }
    ctx->pc = 0x2184C8u;
label_2184c8:
    // 0x2184c8: 0xae6203b4  sw          $v0, 0x3B4($s3)
    ctx->pc = 0x2184c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 948), GPR_U32(ctx, 2));
label_2184cc:
    // 0x2184cc: 0x8e6400cc  lw          $a0, 0xCC($s3)
    ctx->pc = 0x2184ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2184d0:
    // 0x2184d0: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x2184d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2184d4:
    // 0x2184d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2184d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2184d8:
    // 0x2184d8: 0xc08a200  jal         func_228800
label_2184dc:
    if (ctx->pc == 0x2184DCu) {
        ctx->pc = 0x2184DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2184D8u;
        // 0x2184dc: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2184E0u;
        goto label_2184e0;
    }
    ctx->pc = 0x2184D8u;
    SET_GPR_U32(ctx, 31, 0x2184E0u);
    ctx->pc = 0x2184DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184D8u;
    // 0x2184dc: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2184D8u, 0x2184E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184E0u;
label_2184e0:
    // 0x2184e0: 0x24170084  addiu       $s7, $zero, 0x84
    ctx->pc = 0x2184e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_2184e4:
    // 0x2184e4: 0x9043014b  lbu         $v1, 0x14B($v0)
    ctx->pc = 0x2184e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 331)));
label_2184e8:
    // 0x2184e8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2184e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2184ec:
    // 0x2184ec: 0xa2600197  sb          $zero, 0x197($s3)
    ctx->pc = 0x2184ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 407), (uint8_t)GPR_U32(ctx, 0));
label_2184f0:
    // 0x2184f0: 0xa26303b8  sb          $v1, 0x3B8($s3)
    ctx->pc = 0x2184f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 952), (uint8_t)GPR_U32(ctx, 3));
label_2184f4:
    // 0x2184f4: 0x8eb0489c  lw          $s0, 0x489C($s5)
    ctx->pc = 0x2184f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_2184f8:
    // 0x2184f8: 0xc136ad6  jal         func_4DAB58
label_2184fc:
    if (ctx->pc == 0x2184FCu) {
        ctx->pc = 0x2184FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2184F8u;
        // 0x2184fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218500u;
        goto label_218500;
    }
    ctx->pc = 0x2184F8u;
    SET_GPR_U32(ctx, 31, 0x218500u);
    ctx->pc = 0x2184FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184F8u;
    // 0x2184fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x2184F8u, 0x218500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218500u;
label_218500:
    // 0x218500: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x218500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218504:
    // 0x218504: 0xc136ad4  jal         func_4DAB50
label_218508:
    if (ctx->pc == 0x218508u) {
        ctx->pc = 0x218508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218504u;
        // 0x218508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21850Cu;
        goto label_21850c;
    }
    ctx->pc = 0x218504u;
    SET_GPR_U32(ctx, 31, 0x21850Cu);
    ctx->pc = 0x218508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218504u;
    // 0x218508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x218504u, 0x21850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21850Cu;
label_21850c:
    // 0x21850c: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x21850cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_218510:
    // 0x218510: 0x8ea3489c  lw          $v1, 0x489C($s5)
    ctx->pc = 0x218510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_218514:
    // 0x218514: 0x3c070056  lui         $a3, 0x56
    ctx->pc = 0x218514u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)86 << 16));
label_218518:
    // 0x218518: 0x8e6603b0  lw          $a2, 0x3B0($s3)
    ctx->pc = 0x218518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 944)));
label_21851c:
    // 0x21851c: 0x24e5a548  addiu       $a1, $a3, -0x5AB8
    ctx->pc = 0x21851cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944072));
label_218520:
    // 0x218520: 0x8468033a  lh          $t0, 0x33A($v1)
    ctx->pc = 0x218520u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 826)));
label_218524:
    // 0x218524: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x218524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_218528:
    // 0x218528: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x218528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21852c:
    // 0x21852c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x21852cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_218530:
    // 0x218530: 0xc10ca28  jal         func_4328A0
label_218534:
    if (ctx->pc == 0x218534u) {
        ctx->pc = 0x218534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218530u;
        // 0x218534: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218538u;
        goto label_218538;
    }
    ctx->pc = 0x218530u;
    SET_GPR_U32(ctx, 31, 0x218538u);
    ctx->pc = 0x218534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218530u;
    // 0x218534: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x218530u, 0x218538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218538u;
label_218538:
    // 0x218538: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x218538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21853c:
    // 0x21853c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21853cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_218540:
    // 0x218540: 0xc04435e  jal         func_110D78
label_218544:
    if (ctx->pc == 0x218544u) {
        ctx->pc = 0x218544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218540u;
        // 0x218544: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218548u;
        goto label_218548;
    }
    ctx->pc = 0x218540u;
    SET_GPR_U32(ctx, 31, 0x218548u);
    ctx->pc = 0x218544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218540u;
    // 0x218544: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D78u, 0x218540u, 0x218548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218548u;
label_218548:
    // 0x218548: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21854c:
    if (ctx->pc == 0x21854Cu) {
        ctx->pc = 0x21854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218548u;
        // 0x21854c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218550u;
        goto label_218550;
    }
    ctx->pc = 0x218548u;
    {
        const bool branch_taken_0x218548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218548u;
        // 0x21854c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218548) {
            ctx->pc = 0x218560u;
            goto label_218560;
        }
    }
    ctx->pc = 0x218550u;
label_218550:
    // 0x218550: 0x82620197  lb          $v0, 0x197($s3)
    ctx->pc = 0x218550u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 407)));
label_218554:
    // 0x218554: 0xa2760196  sb          $s6, 0x196($s3)
    ctx->pc = 0x218554u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 406), (uint8_t)GPR_U32(ctx, 22));
label_218558:
    // 0x218558: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x218558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21855c:
    // 0x21855c: 0xa2620197  sb          $v0, 0x197($s3)
    ctx->pc = 0x21855cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 407), (uint8_t)GPR_U32(ctx, 2));
label_218560:
    // 0x218560: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x218560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_218564:
    // 0x218564: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_218568:
    if (ctx->pc == 0x218568u) {
        ctx->pc = 0x218568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218564u;
        // 0x218568: 0x8eb0489c  lw          $s0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21856Cu;
        goto label_21856c;
    }
    ctx->pc = 0x218564u;
    {
        const bool branch_taken_0x218564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218564u;
        // 0x218568: 0x8eb0489c  lw          $s0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218564) {
            ctx->pc = 0x2184F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2184f8;
        }
    }
    ctx->pc = 0x21856Cu;
label_21856c:
    // 0x21856c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21856cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218570:
    // 0x218570: 0xae600184  sw          $zero, 0x184($s3)
    ctx->pc = 0x218570u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 388), GPR_U32(ctx, 0));
label_218574:
    // 0x218574: 0xa2600195  sb          $zero, 0x195($s3)
    ctx->pc = 0x218574u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 405), (uint8_t)GPR_U32(ctx, 0));
label_218578:
    // 0x218578: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x218578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_21857c:
    // 0x21857c: 0xa2700194  sb          $s0, 0x194($s3)
    ctx->pc = 0x21857cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 404), (uint8_t)GPR_U32(ctx, 16));
label_218580:
    // 0x218580: 0x24658690  addiu       $a1, $v1, -0x7970
    ctx->pc = 0x218580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936208));
label_218584:
    // 0x218584: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_218588:
    // 0x218588: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x218588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
label_21858c:
    // 0x21858c: 0xc087bd6  jal         func_21EF58
label_218590:
    if (ctx->pc == 0x218590u) {
        ctx->pc = 0x218590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21858Cu;
        // 0x218590: 0xae620178  sw          $v0, 0x178($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218594u;
        goto label_218594;
    }
    ctx->pc = 0x21858Cu;
    SET_GPR_U32(ctx, 31, 0x218594u);
    ctx->pc = 0x218590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21858Cu;
    // 0x218590: 0xae620178  sw          $v0, 0x178($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 376), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EF58u, 0x21858Cu, 0x218594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218594u;
label_218594:
    // 0x218594: 0xae700174  sw          $s0, 0x174($s3)
    ctx->pc = 0x218594u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 16));
label_218598:
    // 0x218598: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x218598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_21859c:
    // 0x21859c: 0xc08a200  jal         func_228800
label_2185a0:
    if (ctx->pc == 0x2185A0u) {
        ctx->pc = 0x2185A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21859Cu;
        // 0x2185a0: 0xae600170  sw          $zero, 0x170($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2185A4u;
        goto label_2185a4;
    }
    ctx->pc = 0x21859Cu;
    SET_GPR_U32(ctx, 31, 0x2185A4u);
    ctx->pc = 0x2185A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21859Cu;
    // 0x2185a0: 0xae600170  sw          $zero, 0x170($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 368), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x21859Cu, 0x2185A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185A4u;
label_2185a4:
    // 0x2185a4: 0x9043011d  lbu         $v1, 0x11D($v0)
    ctx->pc = 0x2185a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 285)));
label_2185a8:
    // 0x2185a8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2185a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2185ac:
    // 0x2185ac: 0xa26301b9  sb          $v1, 0x1B9($s3)
    ctx->pc = 0x2185acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 441), (uint8_t)GPR_U32(ctx, 3));
label_2185b0:
    // 0x2185b0: 0xc08a200  jal         func_228800
label_2185b4:
    if (ctx->pc == 0x2185B4u) {
        ctx->pc = 0x2185B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2185B0u;
        // 0x2185b4: 0xa26301b8  sb          $v1, 0x1B8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 440), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2185B8u;
        goto label_2185b8;
    }
    ctx->pc = 0x2185B0u;
    SET_GPR_U32(ctx, 31, 0x2185B8u);
    ctx->pc = 0x2185B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185B0u;
    // 0x2185b4: 0xa26301b8  sb          $v1, 0x1B8($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 440), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2185B0u, 0x2185B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185B8u;
label_2185b8:
    // 0x2185b8: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2185b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_2185bc:
    // 0x2185bc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2185bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2185c0:
    // 0x2185c0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2185c4:
    if (ctx->pc == 0x2185C4u) {
        ctx->pc = 0x2185C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2185C0u;
        // 0x2185c4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2185C8u;
        goto label_2185c8;
    }
    ctx->pc = 0x2185C0u;
    {
        const bool branch_taken_0x2185c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2185C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2185C0u;
        // 0x2185c4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2185c0) {
            ctx->pc = 0x2185DCu;
            goto label_2185dc;
        }
    }
    ctx->pc = 0x2185C8u;
label_2185c8:
    // 0x2185c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2185c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2185cc:
    // 0x2185cc: 0xc088aea  jal         func_222BA8
label_2185d0:
    if (ctx->pc == 0x2185D0u) {
        ctx->pc = 0x2185D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2185CCu;
        // 0x2185d0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2185D4u;
        goto label_2185d4;
    }
    ctx->pc = 0x2185CCu;
    SET_GPR_U32(ctx, 31, 0x2185D4u);
    ctx->pc = 0x2185D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185CCu;
    // 0x2185d0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222BA8u, 0x2185CCu, 0x2185D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185D4u;
label_2185d4:
    // 0x2185d4: 0xa26201b9  sb          $v0, 0x1B9($s3)
    ctx->pc = 0x2185d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 441), (uint8_t)GPR_U32(ctx, 2));
label_2185d8:
    // 0x2185d8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2185d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2185dc:
    // 0x2185dc: 0xc088b08  jal         func_222C20
label_2185e0:
    if (ctx->pc == 0x2185E0u) {
        ctx->pc = 0x2185E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2185DCu;
        // 0x2185e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2185E4u;
        goto label_2185e4;
    }
    ctx->pc = 0x2185DCu;
    SET_GPR_U32(ctx, 31, 0x2185E4u);
    ctx->pc = 0x2185E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185DCu;
    // 0x2185e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222C20u, 0x2185DCu, 0x2185E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185E4u;
label_2185e4:
    // 0x2185e4: 0xa26201ba  sb          $v0, 0x1BA($s3)
    ctx->pc = 0x2185e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 442), (uint8_t)GPR_U32(ctx, 2));
label_2185e8:
    // 0x2185e8: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x2185e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_2185ec:
    // 0x2185ec: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2185ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_2185f0:
    // 0x2185f0: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x2185f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_2185f4:
    // 0x2185f4: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2185f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2185f8:
    // 0x2185f8: 0x2463a540  addiu       $v1, $v1, -0x5AC0
    ctx->pc = 0x2185f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944064));
label_2185fc:
    // 0x2185fc: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x2185fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_218600:
    // 0x218600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218604:
    // 0x218604: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x218604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_218608:
    // 0x218608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21860c:
    // 0x21860c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21860cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218610:
    // 0x218610: 0xc10c1fa  jal         func_4307E8
label_218614:
    if (ctx->pc == 0x218614u) {
        ctx->pc = 0x218614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218610u;
        // 0x218614: 0xae6200d4  sw          $v0, 0xD4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218618u;
        goto label_218618;
    }
    ctx->pc = 0x218610u;
    SET_GPR_U32(ctx, 31, 0x218618u);
    ctx->pc = 0x218614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218610u;
    // 0x218614: 0xae6200d4  sw          $v0, 0xD4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x218610u, 0x218618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218618u;
label_218618:
    // 0x218618: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x218618u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_21861c:
    // 0x21861c: 0x8e6500d4  lw          $a1, 0xD4($s3)
    ctx->pc = 0x21861cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_218620:
    // 0x218620: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x218620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_218624:
    // 0x218624: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x218624u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_218628:
    // 0x218628: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x218628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_21862c:
    // 0x21862c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21862cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_218630:
    // 0x218630: 0xaca200c0  sw          $v0, 0xC0($a1)
    ctx->pc = 0x218630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 2));
label_218634:
    // 0x218634: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x218634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_218638:
    // 0x218638: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x218638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_21863c:
    // 0x21863c: 0xac6200cc  sw          $v0, 0xCC($v1)
    ctx->pc = 0x21863cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 2));
label_218640:
    // 0x218640: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x218640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_218644:
    // 0x218644: 0x8e6500d4  lw          $a1, 0xD4($s3)
    ctx->pc = 0x218644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_218648:
    // 0x218648: 0xaca200c4  sw          $v0, 0xC4($a1)
    ctx->pc = 0x218648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 2));
label_21864c:
    // 0x21864c: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x21864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_218650:
    // 0x218650: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x218650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_218654:
    // 0x218654: 0xac6200d0  sw          $v0, 0xD0($v1)
    ctx->pc = 0x218654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 2));
label_218658:
    // 0x218658: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x218658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_21865c:
    // 0x21865c: 0x8e6500d4  lw          $a1, 0xD4($s3)
    ctx->pc = 0x21865cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_218660:
    // 0x218660: 0xaca200c8  sw          $v0, 0xC8($a1)
    ctx->pc = 0x218660u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 200), GPR_U32(ctx, 2));
label_218664:
    // 0x218664: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x218664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_218668:
    // 0x218668: 0xc094d82  jal         func_253608
label_21866c:
    if (ctx->pc == 0x21866Cu) {
        ctx->pc = 0x21866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218668u;
        // 0x21866c: 0xac660024  sw          $a2, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218670u;
        goto label_218670;
    }
    ctx->pc = 0x218668u;
    SET_GPR_U32(ctx, 31, 0x218670u);
    ctx->pc = 0x21866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218668u;
    // 0x21866c: 0xac660024  sw          $a2, 0x24($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253608u, 0x218668u, 0x218670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218670u;
label_218670:
    // 0x218670: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x218670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_218674:
    // 0x218674: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x218674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_218678:
    // 0x218678: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21867c:
    // 0x21867c: 0xc089974  jal         func_2265D0
label_218680:
    if (ctx->pc == 0x218680u) {
        ctx->pc = 0x218680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21867Cu;
        // 0x218680: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218684u;
        goto label_218684;
    }
    ctx->pc = 0x21867Cu;
    SET_GPR_U32(ctx, 31, 0x218684u);
    ctx->pc = 0x218680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21867Cu;
    // 0x218680: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x21867Cu, 0x218684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218684u;
label_218684:
    // 0x218684: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x218684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_218688:
    // 0x218688: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x218688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_21868c:
    // 0x21868c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21868cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218690:
    // 0x218690: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_218694:
    // 0x218694: 0xae600650  sw          $zero, 0x650($s3)
    ctx->pc = 0x218694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1616), GPR_U32(ctx, 0));
label_218698:
    // 0x218698: 0xa66005d2  sh          $zero, 0x5D2($s3)
    ctx->pc = 0x218698u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1490), (uint16_t)GPR_U32(ctx, 0));
label_21869c:
    // 0x21869c: 0xa66005d4  sh          $zero, 0x5D4($s3)
    ctx->pc = 0x21869cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1492), (uint16_t)GPR_U32(ctx, 0));
label_2186a0:
    // 0x2186a0: 0xae6005dc  sw          $zero, 0x5DC($s3)
    ctx->pc = 0x2186a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1500), GPR_U32(ctx, 0));
label_2186a4:
    // 0x2186a4: 0xc087502  jal         func_21D408
label_2186a8:
    if (ctx->pc == 0x2186A8u) {
        ctx->pc = 0x2186A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186A4u;
        // 0x2186a8: 0xe66005d8  swc1        $f0, 0x5D8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2186ACu;
        goto label_2186ac;
    }
    ctx->pc = 0x2186A4u;
    SET_GPR_U32(ctx, 31, 0x2186ACu);
    ctx->pc = 0x2186A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186A4u;
    // 0x2186a8: 0xe66005d8  swc1        $f0, 0x5D8($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1496), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2186A4u, 0x2186ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2186ACu;
label_2186ac:
    // 0x2186ac: 0x8e6400cc  lw          $a0, 0xCC($s3)
    ctx->pc = 0x2186acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2186b0:
    // 0x2186b0: 0xc08a200  jal         func_228800
label_2186b4:
    if (ctx->pc == 0x2186B4u) {
        ctx->pc = 0x2186B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186B0u;
        // 0x2186b4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2186B8u;
        goto label_2186b8;
    }
    ctx->pc = 0x2186B0u;
    SET_GPR_U32(ctx, 31, 0x2186B8u);
    ctx->pc = 0x2186B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186B0u;
    // 0x2186b4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2186B0u, 0x2186B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2186B8u;
label_2186b8:
    // 0x2186b8: 0x9263019d  lbu         $v1, 0x19D($s3)
    ctx->pc = 0x2186b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 413)));
label_2186bc:
    // 0x2186bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2186c0:
    if (ctx->pc == 0x2186C0u) {
        ctx->pc = 0x2186C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186BCu;
        // 0x2186c0: 0x9057011a  lbu         $s7, 0x11A($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2186C4u;
        goto label_2186c4;
    }
    ctx->pc = 0x2186BCu;
    {
        const bool branch_taken_0x2186bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2186C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186BCu;
        // 0x2186c0: 0x9057011a  lbu         $s7, 0x11A($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186bc) {
            ctx->pc = 0x2186D0u;
            goto label_2186d0;
        }
    }
    ctx->pc = 0x2186C4u;
label_2186c4:
    // 0x2186c4: 0x3ae20003  xori        $v0, $s7, 0x3
    ctx->pc = 0x2186c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)3);
label_2186c8:
    // 0x2186c8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2186cc:
    if (ctx->pc == 0x2186CCu) {
        ctx->pc = 0x2186CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186C8u;
        // 0x2186cc: 0x24170002  addiu       $s7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2186D0u;
        goto label_2186d0;
    }
    ctx->pc = 0x2186C8u;
    {
        const bool branch_taken_0x2186c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2186c8) {
            ctx->pc = 0x2186CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2186C8u;
            // 0x2186cc: 0x24170002  addiu       $s7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2186D0u;
            goto label_2186d0;
        }
    }
    ctx->pc = 0x2186D0u;
label_2186d0:
    // 0x2186d0: 0xafd30000  sw          $s3, 0x0($fp)
    ctx->pc = 0x2186d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 19));
label_2186d4:
    // 0x2186d4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2186d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2186d8:
    // 0x2186d8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2186d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2186dc:
    // 0x2186dc: 0xc0a33ae  jal         func_28CEB8
label_2186e0:
    if (ctx->pc == 0x2186E0u) {
        ctx->pc = 0x2186E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186DCu;
        // 0x2186e0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2186E4u;
        goto label_2186e4;
    }
    ctx->pc = 0x2186DCu;
    SET_GPR_U32(ctx, 31, 0x2186E4u);
    ctx->pc = 0x2186E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186DCu;
    // 0x2186e0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CEB8u, 0x2186DCu, 0x2186E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2186E4u;
label_2186e4:
    // 0x2186e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2186e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2186e8:
    // 0x2186e8: 0xc0a295c  jal         func_28A570
label_2186ec:
    if (ctx->pc == 0x2186ECu) {
        ctx->pc = 0x2186ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186E8u;
        // 0x2186ec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2186F0u;
        goto label_2186f0;
    }
    ctx->pc = 0x2186E8u;
    SET_GPR_U32(ctx, 31, 0x2186F0u);
    ctx->pc = 0x2186ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186E8u;
    // 0x2186ec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A570u, 0x2186E8u, 0x2186F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2186F0u;
label_2186f0:
    // 0x2186f0: 0xa3d00008  sb          $s0, 0x8($fp)
    ctx->pc = 0x2186f0u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 8), (uint8_t)GPR_U32(ctx, 16));
label_2186f4:
    // 0x2186f4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2186f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2186f8:
    // 0x2186f8: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2186f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2186fc:
    // 0x2186fc: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2186fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_218700:
    // 0x218700: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x218700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_218704:
    // 0x218704: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x218704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_218708:
    // 0x218708: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x218708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21870c:
    // 0x21870c: 0xc0cd7d2  jal         func_335F48
label_218710:
    if (ctx->pc == 0x218710u) {
        ctx->pc = 0x218710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21870Cu;
        // 0x218710: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218714u;
        goto label_218714;
    }
    ctx->pc = 0x21870Cu;
    SET_GPR_U32(ctx, 31, 0x218714u);
    ctx->pc = 0x218710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21870Cu;
    // 0x218710: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x21870Cu, 0x218714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218714u;
label_218714:
    // 0x218714: 0xe7c00110  swc1        $f0, 0x110($fp)
    ctx->pc = 0x218714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 272), bits); }
label_218718:
    // 0x218718: 0x8fa70104  lw          $a3, 0x104($sp)
    ctx->pc = 0x218718u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_21871c:
    // 0x21871c: 0xae6001a4  sw          $zero, 0x1A4($s3)
    ctx->pc = 0x21871cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 420), GPR_U32(ctx, 0));
label_218720:
    // 0x218720: 0xc05b0e2  jal         func_16C388
label_218724:
    if (ctx->pc == 0x218724u) {
        ctx->pc = 0x218724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218720u;
        // 0x218724: 0x72403  sra         $a0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218728u;
        goto label_218728;
    }
    ctx->pc = 0x218720u;
    SET_GPR_U32(ctx, 31, 0x218728u);
    ctx->pc = 0x218724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218720u;
    // 0x218724: 0x72403  sra         $a0, $a3, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x218720u, 0x218728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218728u;
label_218728:
    // 0x218728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x218728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21872c:
    // 0x21872c: 0xc0598c2  jal         func_166308
label_218730:
    if (ctx->pc == 0x218730u) {
        ctx->pc = 0x218730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21872Cu;
        // 0x218730: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218734u;
        goto label_218734;
    }
    ctx->pc = 0x21872Cu;
    SET_GPR_U32(ctx, 31, 0x218734u);
    ctx->pc = 0x218730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21872Cu;
    // 0x218730: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166308u, 0x21872Cu, 0x218734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218734u;
label_218734:
    // 0x218734: 0xc0a6786  jal         func_299E18
label_218738:
    if (ctx->pc == 0x218738u) {
        ctx->pc = 0x218738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218734u;
        // 0x218738: 0x8fa4011c  lw          $a0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21873Cu;
        goto label_21873c;
    }
    ctx->pc = 0x218734u;
    SET_GPR_U32(ctx, 31, 0x21873Cu);
    ctx->pc = 0x218738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218734u;
    // 0x218738: 0x8fa4011c  lw          $a0, 0x11C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299E18u, 0x218734u, 0x21873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21873Cu;
label_21873c:
    // 0x21873c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x21873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_218740:
    // 0x218740: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x218740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_218744:
    // 0x218744: 0xa3a200f0  sb          $v0, 0xF0($sp)
    ctx->pc = 0x218744u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 2));
label_218748:
    // 0x218748: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x218748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_21874c:
    // 0x21874c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x21874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_218750:
    // 0x218750: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x218750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_218754:
    // 0x218754: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x218754u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_218758:
    // 0x218758: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x218758u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_21875c:
    // 0x21875c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_218760:
    // 0x218760: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x218760u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_218764:
    // 0x218764: 0xae600590  sw          $zero, 0x590($s3)
    ctx->pc = 0x218764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1424), GPR_U32(ctx, 0));
label_218768:
    // 0x218768: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x218768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_21876c:
    // 0x21876c: 0xae600594  sw          $zero, 0x594($s3)
    ctx->pc = 0x21876cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1428), GPR_U32(ctx, 0));
label_218770:
    // 0x218770: 0xae620640  sw          $v0, 0x640($s3)
    ctx->pc = 0x218770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1600), GPR_U32(ctx, 2));
label_218774:
    // 0x218774: 0xae600598  sw          $zero, 0x598($s3)
    ctx->pc = 0x218774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1432), GPR_U32(ctx, 0));
label_218778:
    // 0x218778: 0xae60059c  sw          $zero, 0x59C($s3)
    ctx->pc = 0x218778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1436), GPR_U32(ctx, 0));
label_21877c:
    // 0x21877c: 0xae6005a0  sw          $zero, 0x5A0($s3)
    ctx->pc = 0x21877cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1440), GPR_U32(ctx, 0));
label_218780:
    // 0x218780: 0x16e3000c  bne         $s7, $v1, . + 4 + (0xC << 2)
label_218784:
    if (ctx->pc == 0x218784u) {
        ctx->pc = 0x218784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218780u;
        // 0x218784: 0xae6005a4  sw          $zero, 0x5A4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218788u;
        goto label_218788;
    }
    ctx->pc = 0x218780u;
    {
        const bool branch_taken_0x218780 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        ctx->pc = 0x218784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218780u;
        // 0x218784: 0xae6005a4  sw          $zero, 0x5A4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218780) {
            ctx->pc = 0x2187B4u;
            goto label_2187b4;
        }
    }
    ctx->pc = 0x218788u;
label_218788:
    // 0x218788: 0x826203b8  lb          $v0, 0x3B8($s3)
    ctx->pc = 0x218788u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 952)));
label_21878c:
    // 0x21878c: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
label_218790:
    if (ctx->pc == 0x218790u) {
        ctx->pc = 0x218790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21878Cu;
        // 0x218790: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218794u;
        goto label_218794;
    }
    ctx->pc = 0x21878Cu;
    {
        const bool branch_taken_0x21878c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x218790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21878Cu;
        // 0x218790: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21878c) {
            ctx->pc = 0x2187B4u;
            goto label_2187b4;
        }
    }
    ctx->pc = 0x218794u;
label_218794:
    // 0x218794: 0x27a400f4  addiu       $a0, $sp, 0xF4
    ctx->pc = 0x218794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_218798:
    // 0x218798: 0xa3a300f4  sb          $v1, 0xF4($sp)
    ctx->pc = 0x218798u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 244), (uint8_t)GPR_U32(ctx, 3));
label_21879c:
    // 0x21879c: 0x240200ef  addiu       $v0, $zero, 0xEF
    ctx->pc = 0x21879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
label_2187a0:
    // 0x2187a0: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x2187a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_2187a4:
    // 0x2187a4: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x2187a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_2187a8:
    // 0x2187a8: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x2187a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_2187ac:
    // 0x2187ac: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x2187acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_2187b0:
    // 0x2187b0: 0xae630640  sw          $v1, 0x640($s3)
    ctx->pc = 0x2187b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1600), GPR_U32(ctx, 3));
label_2187b4:
    // 0x2187b4: 0xc1060c4  jal         func_418310
label_2187b8:
    if (ctx->pc == 0x2187B8u) {
        ctx->pc = 0x2187B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187B4u;
        // 0x2187b8: 0x8fa40100  lw          $a0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2187BCu;
        goto label_2187bc;
    }
    ctx->pc = 0x2187B4u;
    SET_GPR_U32(ctx, 31, 0x2187BCu);
    ctx->pc = 0x2187B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187B4u;
    // 0x2187b8: 0x8fa40100  lw          $a0, 0x100($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418310u, 0x2187B4u, 0x2187BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187BCu;
label_2187bc:
    // 0x2187bc: 0xc08a200  jal         func_228800
label_2187c0:
    if (ctx->pc == 0x2187C0u) {
        ctx->pc = 0x2187C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187BCu;
        // 0x2187c0: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2187C4u;
        goto label_2187c4;
    }
    ctx->pc = 0x2187BCu;
    SET_GPR_U32(ctx, 31, 0x2187C4u);
    ctx->pc = 0x2187C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187BCu;
    // 0x2187c0: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2187BCu, 0x2187C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187C4u;
label_2187c4:
    // 0x2187c4: 0x9056011b  lbu         $s6, 0x11B($v0)
    ctx->pc = 0x2187c4u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_2187c8:
    // 0x2187c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2187c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2187cc:
    // 0x2187cc: 0x16c20005  bne         $s6, $v0, . + 4 + (0x5 << 2)
label_2187d0:
    if (ctx->pc == 0x2187D0u) {
        ctx->pc = 0x2187D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187CCu;
        // 0x2187d0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2187D4u;
        goto label_2187d4;
    }
    ctx->pc = 0x2187CCu;
    {
        const bool branch_taken_0x2187cc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2187D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187CCu;
        // 0x2187d0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2187cc) {
            ctx->pc = 0x2187E4u;
            goto label_2187e4;
        }
    }
    ctx->pc = 0x2187D4u;
label_2187d4:
    // 0x2187d4: 0x826303b8  lb          $v1, 0x3B8($s3)
    ctx->pc = 0x2187d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 952)));
label_2187d8:
    // 0x2187d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2187d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2187dc:
    // 0x2187dc: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_2187e0:
    if (ctx->pc == 0x2187E0u) {
        ctx->pc = 0x2187E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187DCu;
        // 0x2187e0: 0x24120010  addiu       $s2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2187E4u;
        goto label_2187e4;
    }
    ctx->pc = 0x2187DCu;
    {
        const bool branch_taken_0x2187dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2187dc) {
            ctx->pc = 0x2187E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2187DCu;
            // 0x2187e0: 0x24120010  addiu       $s2, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2187E4u;
            goto label_2187e4;
        }
    }
    ctx->pc = 0x2187E4u;
label_2187e4:
    // 0x2187e4: 0xc08a200  jal         func_228800
label_2187e8:
    if (ctx->pc == 0x2187E8u) {
        ctx->pc = 0x2187E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187E4u;
        // 0x2187e8: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2187ECu;
        goto label_2187ec;
    }
    ctx->pc = 0x2187E4u;
    SET_GPR_U32(ctx, 31, 0x2187ECu);
    ctx->pc = 0x2187E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187E4u;
    // 0x2187e8: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2187E4u, 0x2187ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187ECu;
label_2187ec:
    // 0x2187ec: 0x8e6400cc  lw          $a0, 0xCC($s3)
    ctx->pc = 0x2187ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2187f0:
    // 0x2187f0: 0xc08a200  jal         func_228800
label_2187f4:
    if (ctx->pc == 0x2187F4u) {
        ctx->pc = 0x2187F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187F0u;
        // 0x2187f4: 0x2451016c  addiu       $s1, $v0, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 364));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2187F8u;
        goto label_2187f8;
    }
    ctx->pc = 0x2187F0u;
    SET_GPR_U32(ctx, 31, 0x2187F8u);
    ctx->pc = 0x2187F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187F0u;
    // 0x2187f4: 0x2451016c  addiu       $s1, $v0, 0x16C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2187F0u, 0x2187F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187F8u;
label_2187f8:
    // 0x2187f8: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x2187f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_2187fc:
    // 0x2187fc: 0x8c5000b4  lw          $s0, 0xB4($v0)
    ctx->pc = 0x2187fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_218800:
    // 0x218800: 0x24e4b880  addiu       $a0, $a3, -0x4780
    ctx->pc = 0x218800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948992));
label_218804:
    // 0x218804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218808:
    // 0x218808: 0xc0cd4fc  jal         func_3353F0
label_21880c:
    if (ctx->pc == 0x21880Cu) {
        ctx->pc = 0x21880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218808u;
        // 0x21880c: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218810u;
        goto label_218810;
    }
    ctx->pc = 0x218808u;
    SET_GPR_U32(ctx, 31, 0x218810u);
    ctx->pc = 0x21880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218808u;
    // 0x21880c: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x218808u, 0x218810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218810u;
label_218810:
    // 0x218810: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x218810u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_218814:
    // 0x218814: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x218814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_218818:
    // 0x218818: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x218818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_21881c:
    // 0x21881c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x21881cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_218820:
    // 0x218820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_218824:
    // 0x218824: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x218824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_218828:
    // 0x218828: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x218828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_21882c:
    // 0x21882c: 0x54182b  sltu        $v1, $v0, $s4
    ctx->pc = 0x21882cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_218830:
    // 0x218830: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_218834:
    if (ctx->pc == 0x218834u) {
        ctx->pc = 0x218834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218830u;
        // 0x218834: 0xafa200fc  sw          $v0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218838u;
        goto label_218838;
    }
    ctx->pc = 0x218830u;
    {
        const bool branch_taken_0x218830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x218834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218830u;
        // 0x218834: 0xafa200fc  sw          $v0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218830) {
            ctx->pc = 0x2188BCu;
            goto label_2188bc;
        }
    }
    ctx->pc = 0x218838u;
label_218838:
    // 0x218838: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x218838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_21883c:
    // 0x21883c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_218840:
    // 0x218840: 0xc10d74c  jal         func_435D30
label_218844:
    if (ctx->pc == 0x218844u) {
        ctx->pc = 0x218844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218840u;
        // 0x218844: 0x24a5a578  addiu       $a1, $a1, -0x5A88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218848u;
        goto label_218848;
    }
    ctx->pc = 0x218840u;
    SET_GPR_U32(ctx, 31, 0x218848u);
    ctx->pc = 0x218844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218840u;
    // 0x218844: 0x24a5a578  addiu       $a1, $a1, -0x5A88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x218840u, 0x218848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218848u;
label_218848:
    // 0x218848: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_21884c:
    if (ctx->pc == 0x21884Cu) {
        ctx->pc = 0x21884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218848u;
        // 0x21884c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218850u;
        goto label_218850;
    }
    ctx->pc = 0x218848u;
    {
        const bool branch_taken_0x218848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218848u;
        // 0x21884c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218848) {
            ctx->pc = 0x218880u;
            goto label_218880;
        }
    }
    ctx->pc = 0x218850u;
label_218850:
    // 0x218850: 0xae700278  sw          $s0, 0x278($s3)
    ctx->pc = 0x218850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 632), GPR_U32(ctx, 16));
label_218854:
    // 0x218854: 0x8e442c04  lw          $a0, 0x2C04($s2)
    ctx->pc = 0x218854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11268)));
label_218858:
    // 0x218858: 0xc0e45aa  jal         func_3916A8
label_21885c:
    if (ctx->pc == 0x21885Cu) {
        ctx->pc = 0x21885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218858u;
        // 0x21885c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218860u;
        goto label_218860;
    }
    ctx->pc = 0x218858u;
    SET_GPR_U32(ctx, 31, 0x218860u);
    ctx->pc = 0x21885Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218858u;
    // 0x21885c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3916A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3916A8u, 0x218858u, 0x218860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218860u;
label_218860:
    // 0x218860: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218864:
    // 0x218864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x218864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_218868:
    // 0x218868: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
label_21886c:
    if (ctx->pc == 0x21886Cu) {
        ctx->pc = 0x21886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218868u;
        // 0x21886c: 0x3c070056  lui         $a3, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218870u;
        goto label_218870;
    }
    ctx->pc = 0x218868u;
    {
        const bool branch_taken_0x218868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x21886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218868u;
        // 0x21886c: 0x3c070056  lui         $a3, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218868) {
            ctx->pc = 0x2188A4u;
            goto label_2188a4;
        }
    }
    ctx->pc = 0x218870u;
label_218870:
    // 0x218870: 0xc0e4546  jal         func_391518
label_218874:
    if (ctx->pc == 0x218874u) {
        ctx->pc = 0x218874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218870u;
        // 0x218874: 0x8e442c04  lw          $a0, 0x2C04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218878u;
        goto label_218878;
    }
    ctx->pc = 0x218870u;
    SET_GPR_U32(ctx, 31, 0x218878u);
    ctx->pc = 0x218874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218870u;
    // 0x218874: 0x8e442c04  lw          $a0, 0x2C04($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391518u, 0x218870u, 0x218878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218878u;
label_218878:
    // 0x218878: 0x10000005  b           . + 4 + (0x5 << 2)
label_21887c:
    if (ctx->pc == 0x21887Cu) {
        ctx->pc = 0x21887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218878u;
        // 0x21887c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218880u;
        goto label_218880;
    }
    ctx->pc = 0x218878u;
    {
        const bool branch_taken_0x218878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218878u;
        // 0x21887c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218878) {
            ctx->pc = 0x218890u;
            goto label_218890;
        }
    }
    ctx->pc = 0x218880u;
label_218880:
    // 0x218880: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x218880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_218884:
    // 0x218884: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_218888:
    if (ctx->pc == 0x218888u) {
        ctx->pc = 0x218888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218884u;
        // 0x218888: 0xae700278  sw          $s0, 0x278($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 632), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21888Cu;
        goto label_21888c;
    }
    ctx->pc = 0x218884u;
    {
        const bool branch_taken_0x218884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218884u;
        // 0x218888: 0xae700278  sw          $s0, 0x278($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 632), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218884) {
            ctx->pc = 0x2188A0u;
            goto label_2188a0;
        }
    }
    ctx->pc = 0x21888Cu;
label_21888c:
    // 0x21888c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21888cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_218890:
    // 0x218890: 0xc0897f2  jal         func_225FC8
label_218894:
    if (ctx->pc == 0x218894u) {
        ctx->pc = 0x218894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218890u;
        // 0x218894: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218898u;
        goto label_218898;
    }
    ctx->pc = 0x218890u;
    SET_GPR_U32(ctx, 31, 0x218898u);
    ctx->pc = 0x218894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218890u;
    // 0x218894: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FC8u, 0x218890u, 0x218898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218898u;
label_218898:
    // 0x218898: 0x1000000d  b           . + 4 + (0xD << 2)
label_21889c:
    if (ctx->pc == 0x21889Cu) {
        ctx->pc = 0x21889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218898u;
        // 0x21889c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2188A0u;
        goto label_2188a0;
    }
    ctx->pc = 0x218898u;
    {
        const bool branch_taken_0x218898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218898u;
        // 0x21889c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218898) {
            ctx->pc = 0x2188D0u;
            goto label_2188d0;
        }
    }
    ctx->pc = 0x2188A0u;
label_2188a0:
    // 0x2188a0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2188a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2188a4:
    // 0x2188a4: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2188a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2188a8:
    // 0x2188a8: 0x24a5a540  addiu       $a1, $a1, -0x5AC0
    ctx->pc = 0x2188a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944064));
label_2188ac:
    // 0x2188ac: 0xc0897f2  jal         func_225FC8
label_2188b0:
    if (ctx->pc == 0x2188B0u) {
        ctx->pc = 0x2188B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188ACu;
        // 0x2188b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2188B4u;
        goto label_2188b4;
    }
    ctx->pc = 0x2188ACu;
    SET_GPR_U32(ctx, 31, 0x2188B4u);
    ctx->pc = 0x2188B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188ACu;
    // 0x2188b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FC8u, 0x2188ACu, 0x2188B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188B4u;
label_2188b4:
    // 0x2188b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2188b8:
    if (ctx->pc == 0x2188B8u) {
        ctx->pc = 0x2188B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188B4u;
        // 0x2188b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2188BCu;
        goto label_2188bc;
    }
    ctx->pc = 0x2188B4u;
    {
        const bool branch_taken_0x2188b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2188B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188B4u;
        // 0x2188b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188b4) {
            ctx->pc = 0x2188D0u;
            goto label_2188d0;
        }
    }
    ctx->pc = 0x2188BCu;
label_2188bc:
    // 0x2188bc: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x2188bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_2188c0:
    // 0x2188c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2188c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2188c4:
    // 0x2188c4: 0xc0897f2  jal         func_225FC8
label_2188c8:
    if (ctx->pc == 0x2188C8u) {
        ctx->pc = 0x2188C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188C4u;
        // 0x2188c8: 0x2465a540  addiu       $a1, $v1, -0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2188CCu;
        goto label_2188cc;
    }
    ctx->pc = 0x2188C4u;
    SET_GPR_U32(ctx, 31, 0x2188CCu);
    ctx->pc = 0x2188C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188C4u;
    // 0x2188c8: 0x2465a540  addiu       $a1, $v1, -0x5AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FC8u, 0x2188C4u, 0x2188CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188CCu;
label_2188cc:
    // 0x2188cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2188ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2188d0:
    // 0x2188d0: 0x12020041  beq         $s0, $v0, . + 4 + (0x41 << 2)
label_2188d4:
    if (ctx->pc == 0x2188D4u) {
        ctx->pc = 0x2188D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188D0u;
        // 0x2188d4: 0xae600370  sw          $zero, 0x370($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2188D8u;
        goto label_2188d8;
    }
    ctx->pc = 0x2188D0u;
    {
        const bool branch_taken_0x2188d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2188D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188D0u;
        // 0x2188d4: 0xae600370  sw          $zero, 0x370($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188d0) {
            ctx->pc = 0x2189D8u;
            goto label_2189d8;
        }
    }
    ctx->pc = 0x2188D8u;
label_2188d8:
    // 0x2188d8: 0x3c070056  lui         $a3, 0x56
    ctx->pc = 0x2188d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)86 << 16));
label_2188dc:
    // 0x2188dc: 0x26640257  addiu       $a0, $s3, 0x257
    ctx->pc = 0x2188dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 599));
label_2188e0:
    // 0x2188e0: 0xc10c313  jal         func_430C4C
label_2188e4:
    if (ctx->pc == 0x2188E4u) {
        ctx->pc = 0x2188E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188E0u;
        // 0x2188e4: 0x24e5a540  addiu       $a1, $a3, -0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2188E8u;
        goto label_2188e8;
    }
    ctx->pc = 0x2188E0u;
    SET_GPR_U32(ctx, 31, 0x2188E8u);
    ctx->pc = 0x2188E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188E0u;
    // 0x2188e4: 0x24e5a540  addiu       $a1, $a3, -0x5AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x2188E0u, 0x2188E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188E8u;
label_2188e8:
    // 0x2188e8: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_2188ec:
    if (ctx->pc == 0x2188ECu) {
        ctx->pc = 0x2188ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188E8u;
        // 0x2188ec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2188F0u;
        goto label_2188f0;
    }
    ctx->pc = 0x2188E8u;
    {
        const bool branch_taken_0x2188e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2188ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188E8u;
        // 0x2188ec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188e8) {
            ctx->pc = 0x2189DCu;
            goto label_2189dc;
        }
    }
    ctx->pc = 0x2188F0u;
label_2188f0:
    // 0x2188f0: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x2188f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_2188f4:
    // 0x2188f4: 0x74102b  sltu        $v0, $v1, $s4
    ctx->pc = 0x2188f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2188f8:
    // 0x2188f8: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
label_2188fc:
    if (ctx->pc == 0x2188FCu) {
        ctx->pc = 0x2188FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188F8u;
        // 0x2188fc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218900u;
        goto label_218900;
    }
    ctx->pc = 0x2188F8u;
    {
        const bool branch_taken_0x2188f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2188FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188F8u;
        // 0x2188fc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188f8) {
            ctx->pc = 0x218A98u;
            goto label_218a98;
        }
    }
    ctx->pc = 0x218900u;
label_218900:
    // 0x218900: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x218900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_218904:
    // 0x218904: 0x8c82489c  lw          $v0, 0x489C($a0)
    ctx->pc = 0x218904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_218908:
    // 0x218908: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x218908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_21890c:
    // 0x21890c: 0x80450008  lb          $a1, 0x8($v0)
    ctx->pc = 0x21890cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_218910:
    // 0x218910: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x218910u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_218914:
    // 0x218914: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_218918:
    if (ctx->pc == 0x218918u) {
        ctx->pc = 0x218918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218914u;
        // 0x218918: 0x3c07006f  lui         $a3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21891Cu;
        goto label_21891c;
    }
    ctx->pc = 0x218914u;
    {
        const bool branch_taken_0x218914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x218918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218914u;
        // 0x218918: 0x3c07006f  lui         $a3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218914) {
            ctx->pc = 0x218930u;
            goto label_218930;
        }
    }
    ctx->pc = 0x21891Cu;
label_21891c:
    // 0x21891c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21891cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218920:
    // 0x218920: 0xc0cd4fc  jal         func_3353F0
label_218924:
    if (ctx->pc == 0x218924u) {
        ctx->pc = 0x218924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218920u;
        // 0x218924: 0x24e4b880  addiu       $a0, $a3, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218928u;
        goto label_218928;
    }
    ctx->pc = 0x218920u;
    SET_GPR_U32(ctx, 31, 0x218928u);
    ctx->pc = 0x218924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218920u;
    // 0x218924: 0x24e4b880  addiu       $a0, $a3, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x218920u, 0x218928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218928u;
label_218928:
    // 0x218928: 0x10000002  b           . + 4 + (0x2 << 2)
label_21892c:
    if (ctx->pc == 0x21892Cu) {
        ctx->pc = 0x21892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218928u;
        // 0x21892c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218930u;
        goto label_218930;
    }
    ctx->pc = 0x218928u;
    {
        const bool branch_taken_0x218928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218928u;
        // 0x21892c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218928) {
            ctx->pc = 0x218934u;
            goto label_218934;
        }
    }
    ctx->pc = 0x218930u;
label_218930:
    // 0x218930: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x218930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218934:
    // 0x218934: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x218934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_218938:
    // 0x218938: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x218938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_21893c:
    // 0x21893c: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x21893cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_218940:
    // 0x218940: 0x24a4b880  addiu       $a0, $a1, -0x4780
    ctx->pc = 0x218940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948992));
label_218944:
    // 0x218944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218948:
    // 0x218948: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x218948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_21894c:
    // 0x21894c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x21894cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_218950:
    // 0x218950: 0xc0cd4fc  jal         func_3353F0
label_218954:
    if (ctx->pc == 0x218954u) {
        ctx->pc = 0x218954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218950u;
        // 0x218954: 0x80500011  lb          $s0, 0x11($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218958u;
        goto label_218958;
    }
    ctx->pc = 0x218950u;
    SET_GPR_U32(ctx, 31, 0x218958u);
    ctx->pc = 0x218954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218950u;
    // 0x218954: 0x80500011  lb          $s0, 0x11($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x218950u, 0x218958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218958u;
label_218958:
    // 0x218958: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x218958u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_21895c:
    // 0x21895c: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x21895cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_218960:
    // 0x218960: 0x16000046  bnez        $s0, . + 4 + (0x46 << 2)
label_218964:
    if (ctx->pc == 0x218964u) {
        ctx->pc = 0x218964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218960u;
        // 0x218964: 0x2a2403e8  slti        $a0, $s1, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x218968u;
        goto label_218968;
    }
    ctx->pc = 0x218960u;
    {
        const bool branch_taken_0x218960 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x218964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218960u;
        // 0x218964: 0x2a2403e8  slti        $a0, $s1, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218960) {
            ctx->pc = 0x218A7Cu;
            goto label_218a7c;
        }
    }
    ctx->pc = 0x218968u;
label_218968:
    // 0x218968: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x218968u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_21896c:
    // 0x21896c: 0x8ce2489c  lw          $v0, 0x489C($a3)
    ctx->pc = 0x21896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18588)));
label_218970:
    // 0x218970: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x218970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_218974:
    // 0x218974: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_218978:
    if (ctx->pc == 0x218978u) {
        ctx->pc = 0x218978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218974u;
        // 0x218978: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21897Cu;
        goto label_21897c;
    }
    ctx->pc = 0x218974u;
    {
        const bool branch_taken_0x218974 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x218978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218974u;
        // 0x218978: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218974) {
            ctx->pc = 0x218990u;
            goto label_218990;
        }
    }
    ctx->pc = 0x21897Cu;
label_21897c:
    // 0x21897c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x21897cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218980:
    // 0x218980: 0x0  nop
    ctx->pc = 0x218980u;
    // NOP
label_218984:
    // 0x218984: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x218984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_218988:
    // 0x218988: 0x10000009  b           . + 4 + (0x9 << 2)
label_21898c:
    if (ctx->pc == 0x21898Cu) {
        ctx->pc = 0x21898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218988u;
        // 0x21898c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x218990u;
        goto label_218990;
    }
    ctx->pc = 0x218988u;
    {
        const bool branch_taken_0x218988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218988u;
        // 0x21898c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218988) {
            ctx->pc = 0x2189B0u;
            goto label_2189b0;
        }
    }
    ctx->pc = 0x218990u;
label_218990:
    // 0x218990: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x218990u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_218994:
    // 0x218994: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x218994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_218998:
    // 0x218998: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x218998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21899c:
    // 0x21899c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21899cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2189a0:
    // 0x2189a0: 0x0  nop
    ctx->pc = 0x2189a0u;
    // NOP
label_2189a4:
    // 0x2189a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2189a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2189a8:
    // 0x2189a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2189a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2189ac:
    // 0x2189ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2189acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2189b0:
    // 0x2189b0: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x2189b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_2189b4:
    // 0x2189b4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2189b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2189b8:
    // 0x2189b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2189b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2189bc:
    // 0x2189bc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2189bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2189c0:
    // 0x2189c0: 0x28a303e8  slti        $v1, $a1, 0x3E8
    ctx->pc = 0x2189c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1000) ? 1 : 0);
label_2189c4:
    // 0x2189c4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2189c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_2189c8:
    // 0x2189c8: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2189c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2189cc:
    // 0x2189cc: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x2189ccu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2189d0:
    // 0x2189d0: 0x10000030  b           . + 4 + (0x30 << 2)
label_2189d4:
    if (ctx->pc == 0x2189D4u) {
        ctx->pc = 0x2189D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189D0u;
        // 0x2189d4: 0xae620370  sw          $v0, 0x370($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2189D8u;
        goto label_2189d8;
    }
    ctx->pc = 0x2189D0u;
    {
        const bool branch_taken_0x2189d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2189D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189D0u;
        // 0x2189d4: 0xae620370  sw          $v0, 0x370($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189d0) {
            ctx->pc = 0x218A94u;
            goto label_218a94;
        }
    }
    ctx->pc = 0x2189D8u;
label_2189d8:
    // 0x2189d8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2189d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2189dc:
    // 0x2189dc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2189dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2189e0:
    // 0x2189e0: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x2189e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2189e4:
    // 0x2189e4: 0x2490b880  addiu       $s0, $a0, -0x4780
    ctx->pc = 0x2189e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2189e8:
    // 0x2189e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2189e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2189ec:
    // 0x2189ec: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2189ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2189f0:
    // 0x2189f0: 0x80450008  lb          $a1, 0x8($v0)
    ctx->pc = 0x2189f0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_2189f4:
    // 0x2189f4: 0xc0cd4fc  jal         func_3353F0
label_2189f8:
    if (ctx->pc == 0x2189F8u) {
        ctx->pc = 0x2189F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189F4u;
        // 0x2189f8: 0x80460009  lb          $a2, 0x9($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2189FCu;
        goto label_2189fc;
    }
    ctx->pc = 0x2189F4u;
    SET_GPR_U32(ctx, 31, 0x2189FCu);
    ctx->pc = 0x2189F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2189F4u;
    // 0x2189f8: 0x80460009  lb          $a2, 0x9($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2189F4u, 0x2189FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189FCu;
label_2189fc:
    // 0x2189fc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2189fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_218a00:
    // 0x218a00: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x218a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_218a04:
    // 0x218a04: 0x8ca3489c  lw          $v1, 0x489C($a1)
    ctx->pc = 0x218a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_218a08:
    // 0x218a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218a0c:
    // 0x218a0c: 0x28e03  sra         $s1, $v0, 24
    ctx->pc = 0x218a0cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 24));
label_218a10:
    // 0x218a10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218a14:
    // 0x218a14: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x218a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_218a18:
    // 0x218a18: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x218a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_218a1c:
    // 0x218a1c: 0xc0cd4fc  jal         func_3353F0
label_218a20:
    if (ctx->pc == 0x218A20u) {
        ctx->pc = 0x218A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A1Cu;
        // 0x218a20: 0x80700011  lb          $s0, 0x11($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218A24u;
        goto label_218a24;
    }
    ctx->pc = 0x218A1Cu;
    SET_GPR_U32(ctx, 31, 0x218A24u);
    ctx->pc = 0x218A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A1Cu;
    // 0x218a20: 0x80700011  lb          $s0, 0x11($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x218A1Cu, 0x218A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A24u;
label_218a24:
    // 0x218a24: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x218a24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_218a28:
    // 0x218a28: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x218a28u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_218a2c:
    // 0x218a2c: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
label_218a30:
    if (ctx->pc == 0x218A30u) {
        ctx->pc = 0x218A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A2Cu;
        // 0x218a30: 0x2a2403e8  slti        $a0, $s1, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x218A34u;
        goto label_218a34;
    }
    ctx->pc = 0x218A2Cu;
    {
        const bool branch_taken_0x218a2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x218A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A2Cu;
        // 0x218a30: 0x2a2403e8  slti        $a0, $s1, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a2c) {
            ctx->pc = 0x218A7Cu;
            goto label_218a7c;
        }
    }
    ctx->pc = 0x218A34u;
label_218a34:
    // 0x218a34: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x218a34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_218a38:
    // 0x218a38: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x218a38u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_218a3c:
    // 0x218a3c: 0x0  nop
    ctx->pc = 0x218a3cu;
    // NOP
label_218a40:
    // 0x218a40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x218a40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_218a44:
    // 0x218a44: 0x8ce2489c  lw          $v0, 0x489C($a3)
    ctx->pc = 0x218a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18588)));
label_218a48:
    // 0x218a48: 0x240403e7  addiu       $a0, $zero, 0x3E7
    ctx->pc = 0x218a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_218a4c:
    // 0x218a4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x218a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_218a50:
    // 0x218a50: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x218a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_218a54:
    // 0x218a54: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x218a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_218a58:
    // 0x218a58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x218a58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_218a5c:
    // 0x218a5c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x218a5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_218a60:
    // 0x218a60: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x218a60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_218a64:
    // 0x218a64: 0x286203e8  slti        $v0, $v1, 0x3E8
    ctx->pc = 0x218a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
label_218a68:
    // 0x218a68: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x218a68u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_218a6c:
    // 0x218a6c: 0xa4282a  slt         $a1, $a1, $a0
    ctx->pc = 0x218a6cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_218a70:
    // 0x218a70: 0x5200a  movz        $a0, $zero, $a1
    ctx->pc = 0x218a70u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_218a74:
    // 0x218a74: 0x10000007  b           . + 4 + (0x7 << 2)
label_218a78:
    if (ctx->pc == 0x218A78u) {
        ctx->pc = 0x218A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A74u;
        // 0x218a78: 0xae640370  sw          $a0, 0x370($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 880), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218A7Cu;
        goto label_218a7c;
    }
    ctx->pc = 0x218A74u;
    {
        const bool branch_taken_0x218a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A74u;
        // 0x218a78: 0xae640370  sw          $a0, 0x370($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 880), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a74) {
            ctx->pc = 0x218A94u;
            goto label_218a94;
        }
    }
    ctx->pc = 0x218A7Cu;
label_218a7c:
    // 0x218a7c: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x218a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_218a80:
    // 0x218a80: 0x224180b  movn        $v1, $s1, $a0
    ctx->pc = 0x218a80u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
label_218a84:
    // 0x218a84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x218a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_218a88:
    // 0x218a88: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x218a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_218a8c:
    // 0x218a8c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x218a8cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_218a90:
    // 0x218a90: 0xae630370  sw          $v1, 0x370($s3)
    ctx->pc = 0x218a90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 880), GPR_U32(ctx, 3));
label_218a94:
    // 0x218a94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x218a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_218a98:
    // 0x218a98: 0x12c30003  beq         $s6, $v1, . + 4 + (0x3 << 2)
label_218a9c:
    if (ctx->pc == 0x218A9Cu) {
        ctx->pc = 0x218A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A98u;
        // 0x218a9c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AA0u;
        goto label_218aa0;
    }
    ctx->pc = 0x218A98u;
    {
        const bool branch_taken_0x218a98 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x218A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A98u;
        // 0x218a9c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a98) {
            ctx->pc = 0x218AA8u;
            goto label_218aa8;
        }
    }
    ctx->pc = 0x218AA0u;
label_218aa0:
    // 0x218aa0: 0x16c20015  bne         $s6, $v0, . + 4 + (0x15 << 2)
label_218aa4:
    if (ctx->pc == 0x218AA4u) {
        ctx->pc = 0x218AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AA0u;
        // 0x218aa4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AA8u;
        goto label_218aa8;
    }
    ctx->pc = 0x218AA0u;
    {
        const bool branch_taken_0x218aa0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x218AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AA0u;
        // 0x218aa4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218aa0) {
            ctx->pc = 0x218AF8u;
            goto label_218af8;
        }
    }
    ctx->pc = 0x218AA8u;
label_218aa8:
    // 0x218aa8: 0x16c30009  bne         $s6, $v1, . + 4 + (0x9 << 2)
label_218aac:
    if (ctx->pc == 0x218AACu) {
        ctx->pc = 0x218AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AA8u;
        // 0x218aac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AB0u;
        goto label_218ab0;
    }
    ctx->pc = 0x218AA8u;
    {
        const bool branch_taken_0x218aa8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x218AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AA8u;
        // 0x218aac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218aa8) {
            ctx->pc = 0x218AD0u;
            goto label_218ad0;
        }
    }
    ctx->pc = 0x218AB0u;
label_218ab0:
    // 0x218ab0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x218ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_218ab4:
    // 0x218ab4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x218ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_218ab8:
    // 0x218ab8: 0xc0cd4ee  jal         func_3353B8
label_218abc:
    if (ctx->pc == 0x218ABCu) {
        ctx->pc = 0x218ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AB8u;
        // 0x218abc: 0x2444b880  addiu       $a0, $v0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AC0u;
        goto label_218ac0;
    }
    ctx->pc = 0x218AB8u;
    SET_GPR_U32(ctx, 31, 0x218AC0u);
    ctx->pc = 0x218ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AB8u;
    // 0x218abc: 0x2444b880  addiu       $a0, $v0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x218AB8u, 0x218AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AC0u;
label_218ac0:
    // 0x218ac0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x218ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_218ac4:
    // 0x218ac4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x218ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218ac8:
    // 0x218ac8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x218ac8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_218acc:
    // 0x218acc: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x218accu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_218ad0:
    // 0x218ad0: 0x8e620370  lw          $v0, 0x370($s3)
    ctx->pc = 0x218ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 880)));
label_218ad4:
    // 0x218ad4: 0x28420015  slti        $v0, $v0, 0x15
    ctx->pc = 0x218ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
label_218ad8:
    // 0x218ad8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_218adc:
    if (ctx->pc == 0x218ADCu) {
        ctx->pc = 0x218ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AD8u;
        // 0x218adc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AE0u;
        goto label_218ae0;
    }
    ctx->pc = 0x218AD8u;
    {
        const bool branch_taken_0x218ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AD8u;
        // 0x218adc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ad8) {
            ctx->pc = 0x218AECu;
            goto label_218aec;
        }
    }
    ctx->pc = 0x218AE0u;
label_218ae0:
    // 0x218ae0: 0x826303b8  lb          $v1, 0x3B8($s3)
    ctx->pc = 0x218ae0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 952)));
label_218ae4:
    // 0x218ae4: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_218ae8:
    if (ctx->pc == 0x218AE8u) {
        ctx->pc = 0x218AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AE4u;
        // 0x218ae8: 0xafd0026c  sw          $s0, 0x26C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 620), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AECu;
        goto label_218aec;
    }
    ctx->pc = 0x218AE4u;
    {
        const bool branch_taken_0x218ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x218ae4) {
            ctx->pc = 0x218AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218AE4u;
            // 0x218ae8: 0xafd0026c  sw          $s0, 0x26C($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 620), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218B10u;
            goto label_218b10;
        }
    }
    ctx->pc = 0x218AECu;
label_218aec:
    // 0x218aec: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x218aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218af0:
    // 0x218af0: 0x10000007  b           . + 4 + (0x7 << 2)
label_218af4:
    if (ctx->pc == 0x218AF4u) {
        ctx->pc = 0x218AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AF0u;
        // 0x218af4: 0xafd0026c  sw          $s0, 0x26C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 620), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AF8u;
        goto label_218af8;
    }
    ctx->pc = 0x218AF0u;
    {
        const bool branch_taken_0x218af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AF0u;
        // 0x218af4: 0xafd0026c  sw          $s0, 0x26C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 620), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218af0) {
            ctx->pc = 0x218B10u;
            goto label_218b10;
        }
    }
    ctx->pc = 0x218AF8u;
label_218af8:
    // 0x218af8: 0x12c20003  beq         $s6, $v0, . + 4 + (0x3 << 2)
label_218afc:
    if (ctx->pc == 0x218AFCu) {
        ctx->pc = 0x218AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AF8u;
        // 0x218afc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B00u;
        goto label_218b00;
    }
    ctx->pc = 0x218AF8u;
    {
        const bool branch_taken_0x218af8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x218AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AF8u;
        // 0x218afc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218af8) {
            ctx->pc = 0x218B08u;
            goto label_218b08;
        }
    }
    ctx->pc = 0x218B00u;
label_218b00:
    // 0x218b00: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
label_218b04:
    if (ctx->pc == 0x218B04u) {
        ctx->pc = 0x218B08u;
        goto label_218b08;
    }
    ctx->pc = 0x218B00u;
    {
        const bool branch_taken_0x218b00 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x218b00) {
            ctx->pc = 0x218B10u;
            goto label_218b10;
        }
    }
    ctx->pc = 0x218B08u;
label_218b08:
    // 0x218b08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x218b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_218b0c:
    // 0x218b0c: 0xafc2026c  sw          $v0, 0x26C($fp)
    ctx->pc = 0x218b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 620), GPR_U32(ctx, 2));
label_218b10:
    // 0x218b10: 0xc0e4060  jal         func_390180
label_218b14:
    if (ctx->pc == 0x218B14u) {
        ctx->pc = 0x218B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B10u;
        // 0x218b14: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B18u;
        goto label_218b18;
    }
    ctx->pc = 0x218B10u;
    SET_GPR_U32(ctx, 31, 0x218B18u);
    ctx->pc = 0x218B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B10u;
    // 0x218b14: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x218B10u, 0x218B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B18u;
label_218b18:
    // 0x218b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x218b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218b1c:
    // 0x218b1c: 0xc0e87cc  jal         func_3A1F30
label_218b20:
    if (ctx->pc == 0x218B20u) {
        ctx->pc = 0x218B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B1Cu;
        // 0x218b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B24u;
        goto label_218b24;
    }
    ctx->pc = 0x218B1Cu;
    SET_GPR_U32(ctx, 31, 0x218B24u);
    ctx->pc = 0x218B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B1Cu;
    // 0x218b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F30u, 0x218B1Cu, 0x218B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B24u;
label_218b24:
    // 0x218b24: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x218b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_218b28:
    // 0x218b28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x218b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218b2c:
    // 0x218b2c: 0x12e3000e  beq         $s7, $v1, . + 4 + (0xE << 2)
label_218b30:
    if (ctx->pc == 0x218B30u) {
        ctx->pc = 0x218B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B2Cu;
        // 0x218b30: 0xa262019e  sb          $v0, 0x19E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 414), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B34u;
        goto label_218b34;
    }
    ctx->pc = 0x218B2Cu;
    {
        const bool branch_taken_0x218b2c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        ctx->pc = 0x218B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B2Cu;
        // 0x218b30: 0xa262019e  sb          $v0, 0x19E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 414), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b2c) {
            ctx->pc = 0x218B68u;
            goto label_218b68;
        }
    }
    ctx->pc = 0x218B34u;
label_218b34:
    // 0x218b34: 0x2ae20002  slti        $v0, $s7, 0x2
    ctx->pc = 0x218b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_218b38:
    // 0x218b38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_218b3c:
    if (ctx->pc == 0x218B3Cu) {
        ctx->pc = 0x218B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B38u;
        // 0x218b3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B40u;
        goto label_218b40;
    }
    ctx->pc = 0x218B38u;
    {
        const bool branch_taken_0x218b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B38u;
        // 0x218b3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b38) {
            ctx->pc = 0x218B50u;
            goto label_218b50;
        }
    }
    ctx->pc = 0x218B40u;
label_218b40:
    // 0x218b40: 0x52e00028  beql        $s7, $zero, . + 4 + (0x28 << 2)
label_218b44:
    if (ctx->pc == 0x218B44u) {
        ctx->pc = 0x218B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B40u;
        // 0x218b44: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B48u;
        goto label_218b48;
    }
    ctx->pc = 0x218B40u;
    {
        const bool branch_taken_0x218b40 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x218b40) {
            ctx->pc = 0x218B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218B40u;
            // 0x218b44: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218BE4u;
            goto label_218be4;
        }
    }
    ctx->pc = 0x218B48u;
label_218b48:
    // 0x218b48: 0x10000046  b           . + 4 + (0x46 << 2)
label_218b4c:
    if (ctx->pc == 0x218B4Cu) {
        ctx->pc = 0x218B50u;
        goto label_218b50;
    }
    ctx->pc = 0x218B48u;
    {
        const bool branch_taken_0x218b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218b48) {
            ctx->pc = 0x218C64u;
            goto label_218c64;
        }
    }
    ctx->pc = 0x218B50u;
label_218b50:
    // 0x218b50: 0x12e20023  beq         $s7, $v0, . + 4 + (0x23 << 2)
label_218b54:
    if (ctx->pc == 0x218B54u) {
        ctx->pc = 0x218B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B50u;
        // 0x218b54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B58u;
        goto label_218b58;
    }
    ctx->pc = 0x218B50u;
    {
        const bool branch_taken_0x218b50 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x218B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B50u;
        // 0x218b54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b50) {
            ctx->pc = 0x218BE0u;
            goto label_218be0;
        }
    }
    ctx->pc = 0x218B58u;
label_218b58:
    // 0x218b58: 0x52e2002d  beql        $s7, $v0, . + 4 + (0x2D << 2)
label_218b5c:
    if (ctx->pc == 0x218B5Cu) {
        ctx->pc = 0x218B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B58u;
        // 0x218b5c: 0xa3c3028d  sb          $v1, 0x28D($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 653), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B60u;
        goto label_218b60;
    }
    ctx->pc = 0x218B58u;
    {
        const bool branch_taken_0x218b58 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x218b58) {
            ctx->pc = 0x218B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218B58u;
            // 0x218b5c: 0xa3c3028d  sb          $v1, 0x28D($fp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 30), 653), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218C10u;
            goto label_218c10;
        }
    }
    ctx->pc = 0x218B60u;
label_218b60:
    // 0x218b60: 0x10000040  b           . + 4 + (0x40 << 2)
label_218b64:
    if (ctx->pc == 0x218B64u) {
        ctx->pc = 0x218B68u;
        goto label_218b68;
    }
    ctx->pc = 0x218B60u;
    {
        const bool branch_taken_0x218b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218b60) {
            ctx->pc = 0x218C64u;
            goto label_218c64;
        }
    }
    ctx->pc = 0x218B68u;
label_218b68:
    // 0x218b68: 0xa3d7028d  sb          $s7, 0x28D($fp)
    ctx->pc = 0x218b68u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 653), (uint8_t)GPR_U32(ctx, 23));
label_218b6c:
    // 0x218b6c: 0xc0e4060  jal         func_390180
label_218b70:
    if (ctx->pc == 0x218B70u) {
        ctx->pc = 0x218B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B6Cu;
        // 0x218b70: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B74u;
        goto label_218b74;
    }
    ctx->pc = 0x218B6Cu;
    SET_GPR_U32(ctx, 31, 0x218B74u);
    ctx->pc = 0x218B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B6Cu;
    // 0x218b70: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x218B6Cu, 0x218B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B74u;
label_218b74:
    // 0x218b74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x218b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218b78:
    // 0x218b78: 0xc0e87cc  jal         func_3A1F30
label_218b7c:
    if (ctx->pc == 0x218B7Cu) {
        ctx->pc = 0x218B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B78u;
        // 0x218b7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B80u;
        goto label_218b80;
    }
    ctx->pc = 0x218B78u;
    SET_GPR_U32(ctx, 31, 0x218B80u);
    ctx->pc = 0x218B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B78u;
    // 0x218b7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F30u, 0x218B78u, 0x218B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B80u;
label_218b80:
    // 0x218b80: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x218b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_218b84:
    // 0x218b84: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x218b84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_218b88:
    // 0x218b88: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x218b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_218b8c:
    // 0x218b8c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x218b8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_218b90:
    // 0x218b90: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x218b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_218b94:
    // 0x218b94: 0x40f809  jalr        $v0
label_218b98:
    if (ctx->pc == 0x218B98u) {
        ctx->pc = 0x218B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B94u;
        // 0x218b98: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B9Cu;
        goto label_218b9c;
    }
    ctx->pc = 0x218B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218B9Cu);
        ctx->pc = 0x218B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B94u;
        // 0x218b98: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218B94u, 0x218B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x218B9Cu;
label_218b9c:
    // 0x218b9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218ba0:
    // 0x218ba0: 0x24060164  addiu       $a2, $zero, 0x164
    ctx->pc = 0x218ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
label_218ba4:
    // 0x218ba4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x218ba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218ba8:
    // 0x218ba8: 0xc06cc96  jal         func_1B3258
label_218bac:
    if (ctx->pc == 0x218BACu) {
        ctx->pc = 0x218BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BA8u;
        // 0x218bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218BB0u;
        goto label_218bb0;
    }
    ctx->pc = 0x218BA8u;
    SET_GPR_U32(ctx, 31, 0x218BB0u);
    ctx->pc = 0x218BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BA8u;
    // 0x218bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3258u, 0x218BA8u, 0x218BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BB0u;
label_218bb0:
    // 0x218bb0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x218bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_218bb4:
    // 0x218bb4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x218bb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_218bb8:
    // 0x218bb8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x218bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_218bbc:
    // 0x218bbc: 0x40f809  jalr        $v0
label_218bc0:
    if (ctx->pc == 0x218BC0u) {
        ctx->pc = 0x218BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BBCu;
        // 0x218bc0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218BC4u;
        goto label_218bc4;
    }
    ctx->pc = 0x218BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218BC4u);
        ctx->pc = 0x218BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BBCu;
        // 0x218bc0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218BBCu, 0x218BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x218BC4u;
label_218bc4:
    // 0x218bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218bc8:
    // 0x218bc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218bcc:
    // 0x218bcc: 0x24060164  addiu       $a2, $zero, 0x164
    ctx->pc = 0x218bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
label_218bd0:
    // 0x218bd0: 0xc06cc96  jal         func_1B3258
label_218bd4:
    if (ctx->pc == 0x218BD4u) {
        ctx->pc = 0x218BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BD0u;
        // 0x218bd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218BD8u;
        goto label_218bd8;
    }
    ctx->pc = 0x218BD0u;
    SET_GPR_U32(ctx, 31, 0x218BD8u);
    ctx->pc = 0x218BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218BD0u;
    // 0x218bd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3258u, 0x218BD0u, 0x218BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BD8u;
label_218bd8:
    // 0x218bd8: 0x10000028  b           . + 4 + (0x28 << 2)
label_218bdc:
    if (ctx->pc == 0x218BDCu) {
        ctx->pc = 0x218BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BD8u;
        // 0x218bdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218BE0u;
        goto label_218be0;
    }
    ctx->pc = 0x218BD8u;
    {
        const bool branch_taken_0x218bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BD8u;
        // 0x218bdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218bd8) {
            ctx->pc = 0x218C7Cu;
            goto label_218c7c;
        }
    }
    ctx->pc = 0x218BE0u;
label_218be0:
    // 0x218be0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x218be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_218be4:
    // 0x218be4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x218be4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_218be8:
    // 0x218be8: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x218be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_218bec:
    // 0x218bec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x218becu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_218bf0:
    // 0x218bf0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x218bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_218bf4:
    // 0x218bf4: 0x40f809  jalr        $v0
label_218bf8:
    if (ctx->pc == 0x218BF8u) {
        ctx->pc = 0x218BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BF4u;
        // 0x218bf8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218BFCu;
        goto label_218bfc;
    }
    ctx->pc = 0x218BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218BFCu);
        ctx->pc = 0x218BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BF4u;
        // 0x218bf8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218BF4u, 0x218BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x218BFCu;
label_218bfc:
    // 0x218bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218c00:
    // 0x218c00: 0xc06cbba  jal         func_1B2EE8
label_218c04:
    if (ctx->pc == 0x218C04u) {
        ctx->pc = 0x218C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C00u;
        // 0x218c04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C08u;
        goto label_218c08;
    }
    ctx->pc = 0x218C00u;
    SET_GPR_U32(ctx, 31, 0x218C08u);
    ctx->pc = 0x218C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C00u;
    // 0x218c04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2EE8u, 0x218C00u, 0x218C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C08u;
label_218c08:
    // 0x218c08: 0x1000001c  b           . + 4 + (0x1C << 2)
label_218c0c:
    if (ctx->pc == 0x218C0Cu) {
        ctx->pc = 0x218C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C08u;
        // 0x218c0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C10u;
        goto label_218c10;
    }
    ctx->pc = 0x218C08u;
    {
        const bool branch_taken_0x218c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C08u;
        // 0x218c0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c08) {
            ctx->pc = 0x218C7Cu;
            goto label_218c7c;
        }
    }
    ctx->pc = 0x218C10u;
label_218c10:
    // 0x218c10: 0xc0e4060  jal         func_390180
label_218c14:
    if (ctx->pc == 0x218C14u) {
        ctx->pc = 0x218C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C10u;
        // 0x218c14: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C18u;
        goto label_218c18;
    }
    ctx->pc = 0x218C10u;
    SET_GPR_U32(ctx, 31, 0x218C18u);
    ctx->pc = 0x218C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C10u;
    // 0x218c14: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x218C10u, 0x218C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C18u;
label_218c18:
    // 0x218c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x218c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218c1c:
    // 0x218c1c: 0xc0e87cc  jal         func_3A1F30
label_218c20:
    if (ctx->pc == 0x218C20u) {
        ctx->pc = 0x218C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C1Cu;
        // 0x218c20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C24u;
        goto label_218c24;
    }
    ctx->pc = 0x218C1Cu;
    SET_GPR_U32(ctx, 31, 0x218C24u);
    ctx->pc = 0x218C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C1Cu;
    // 0x218c20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F30u, 0x218C1Cu, 0x218C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C24u;
label_218c24:
    // 0x218c24: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x218c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_218c28:
    // 0x218c28: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x218c28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_218c2c:
    // 0x218c2c: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x218c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_218c30:
    // 0x218c30: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x218c30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_218c34:
    // 0x218c34: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x218c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_218c38:
    // 0x218c38: 0x40f809  jalr        $v0
label_218c3c:
    if (ctx->pc == 0x218C3Cu) {
        ctx->pc = 0x218C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C38u;
        // 0x218c3c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C40u;
        goto label_218c40;
    }
    ctx->pc = 0x218C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218C40u);
        ctx->pc = 0x218C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C38u;
        // 0x218c3c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218C38u, 0x218C40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x218C40u;
label_218c40:
    // 0x218c40: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x218c40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
label_218c44:
    // 0x218c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218c48:
    // 0x218c48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218c4c:
    // 0x218c4c: 0x34c680ff  ori         $a2, $a2, 0x80FF
    ctx->pc = 0x218c4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33023);
label_218c50:
    // 0x218c50: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x218c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_218c54:
    // 0x218c54: 0xc06ca64  jal         func_1B2990
label_218c58:
    if (ctx->pc == 0x218C58u) {
        ctx->pc = 0x218C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C54u;
        // 0x218c58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C5Cu;
        goto label_218c5c;
    }
    ctx->pc = 0x218C54u;
    SET_GPR_U32(ctx, 31, 0x218C5Cu);
    ctx->pc = 0x218C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C54u;
    // 0x218c58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2990u, 0x218C54u, 0x218C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C5Cu;
label_218c5c:
    // 0x218c5c: 0x10000007  b           . + 4 + (0x7 << 2)
label_218c60:
    if (ctx->pc == 0x218C60u) {
        ctx->pc = 0x218C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C5Cu;
        // 0x218c60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C64u;
        goto label_218c64;
    }
    ctx->pc = 0x218C5Cu;
    {
        const bool branch_taken_0x218c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C5Cu;
        // 0x218c60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c5c) {
            ctx->pc = 0x218C7Cu;
            goto label_218c7c;
        }
    }
    ctx->pc = 0x218C64u;
label_218c64:
    // 0x218c64: 0xc0e4060  jal         func_390180
label_218c68:
    if (ctx->pc == 0x218C68u) {
        ctx->pc = 0x218C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C64u;
        // 0x218c68: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C6Cu;
        goto label_218c6c;
    }
    ctx->pc = 0x218C64u;
    SET_GPR_U32(ctx, 31, 0x218C6Cu);
    ctx->pc = 0x218C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C64u;
    // 0x218c68: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x218C64u, 0x218C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C6Cu;
label_218c6c:
    // 0x218c6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x218c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218c70:
    // 0x218c70: 0xc0e87cc  jal         func_3A1F30
label_218c74:
    if (ctx->pc == 0x218C74u) {
        ctx->pc = 0x218C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C70u;
        // 0x218c74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C78u;
        goto label_218c78;
    }
    ctx->pc = 0x218C70u;
    SET_GPR_U32(ctx, 31, 0x218C78u);
    ctx->pc = 0x218C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C70u;
    // 0x218c74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F30u, 0x218C70u, 0x218C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C78u;
label_218c78:
    // 0x218c78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_218c7c:
    // 0x218c7c: 0xc0874c4  jal         func_21D310
label_218c80:
    if (ctx->pc == 0x218C80u) {
        ctx->pc = 0x218C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C7Cu;
        // 0x218c80: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C84u;
        goto label_218c84;
    }
    ctx->pc = 0x218C7Cu;
    SET_GPR_U32(ctx, 31, 0x218C84u);
    ctx->pc = 0x218C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C7Cu;
    // 0x218c80: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D310u, 0x218C7Cu, 0x218C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C84u;
label_218c84:
    // 0x218c84: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x218c84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218c88:
    // 0x218c88: 0xae6001ac  sw          $zero, 0x1AC($s3)
    ctx->pc = 0x218c88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 428), GPR_U32(ctx, 0));
label_218c8c:
    // 0x218c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218c90:
    // 0x218c90: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x218c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_218c94:
    // 0x218c94: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x218c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_218c98:
    // 0x218c98: 0xae600250  sw          $zero, 0x250($s3)
    ctx->pc = 0x218c98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 592), GPR_U32(ctx, 0));
label_218c9c:
    // 0x218c9c: 0xa2600254  sb          $zero, 0x254($s3)
    ctx->pc = 0x218c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 596), (uint8_t)GPR_U32(ctx, 0));
label_218ca0:
    // 0x218ca0: 0xae6003ac  sw          $zero, 0x3AC($s3)
    ctx->pc = 0x218ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 940), GPR_U32(ctx, 0));
label_218ca4:
    // 0x218ca4: 0xae700280  sw          $s0, 0x280($s3)
    ctx->pc = 0x218ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 640), GPR_U32(ctx, 16));
label_218ca8:
    // 0x218ca8: 0xc10c1fa  jal         func_4307E8
label_218cac:
    if (ctx->pc == 0x218CACu) {
        ctx->pc = 0x218CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CA8u;
        // 0x218cac: 0xae6003a8  sw          $zero, 0x3A8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218CB0u;
        goto label_218cb0;
    }
    ctx->pc = 0x218CA8u;
    SET_GPR_U32(ctx, 31, 0x218CB0u);
    ctx->pc = 0x218CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CA8u;
    // 0x218cac: 0xae6003a8  sw          $zero, 0x3A8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 936), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x218CA8u, 0x218CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218CB0u;
label_218cb0:
    // 0x218cb0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x218cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_218cb4:
    // 0x218cb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218cb8:
    // 0x218cb8: 0xc10c1fa  jal         func_4307E8
label_218cbc:
    if (ctx->pc == 0x218CBCu) {
        ctx->pc = 0x218CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CB8u;
        // 0x218cbc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218CC0u;
        goto label_218cc0;
    }
    ctx->pc = 0x218CB8u;
    SET_GPR_U32(ctx, 31, 0x218CC0u);
    ctx->pc = 0x218CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CB8u;
    // 0x218cbc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x218CB8u, 0x218CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218CC0u;
label_218cc0:
    // 0x218cc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x218cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_218cc4:
    // 0x218cc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218cc8:
    // 0x218cc8: 0xae700380  sw          $s0, 0x380($s3)
    ctx->pc = 0x218cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 896), GPR_U32(ctx, 16));
label_218ccc:
    // 0x218ccc: 0xae600340  sw          $zero, 0x340($s3)
    ctx->pc = 0x218cccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 832), GPR_U32(ctx, 0));
label_218cd0:
    // 0x218cd0: 0xe6600580  swc1        $f0, 0x580($s3)
    ctx->pc = 0x218cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1408), bits); }
label_218cd4:
    // 0x218cd4: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x218cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_218cd8:
    // 0x218cd8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x218cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_218cdc:
    // 0x218cdc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x218cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_218ce0:
    // 0x218ce0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x218ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_218ce4:
    // 0x218ce4: 0xae6001d8  sw          $zero, 0x1D8($s3)
    ctx->pc = 0x218ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 472), GPR_U32(ctx, 0));
label_218ce8:
    // 0x218ce8: 0xa26003b9  sb          $zero, 0x3B9($s3)
    ctx->pc = 0x218ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 953), (uint8_t)GPR_U32(ctx, 0));
label_218cec:
    // 0x218cec: 0xa26003ba  sb          $zero, 0x3BA($s3)
    ctx->pc = 0x218cecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 954), (uint8_t)GPR_U32(ctx, 0));
label_218cf0:
    // 0x218cf0: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
label_218cf4:
    if (ctx->pc == 0x218CF4u) {
        ctx->pc = 0x218CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CF0u;
        // 0x218cf4: 0xfe6000e0  sd          $zero, 0xE0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218CF8u;
        goto label_218cf8;
    }
    ctx->pc = 0x218CF0u;
    {
        const bool branch_taken_0x218cf0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x218CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CF0u;
        // 0x218cf4: 0xfe6000e0  sd          $zero, 0xE0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218cf0) {
            ctx->pc = 0x218D00u;
            goto label_218d00;
        }
    }
    ctx->pc = 0x218CF8u;
label_218cf8:
    // 0x218cf8: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x218cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_218cfc:
    // 0x218cfc: 0xfe6200e0  sd          $v0, 0xE0($s3)
    ctx->pc = 0x218cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
label_218d00:
    // 0x218d00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x218d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_218d04:
    // 0x218d04: 0x52e20004  beql        $s7, $v0, . + 4 + (0x4 << 2)
label_218d08:
    if (ctx->pc == 0x218D08u) {
        ctx->pc = 0x218D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D04u;
        // 0x218d08: 0xde6200e0  ld          $v0, 0xE0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D0Cu;
        goto label_218d0c;
    }
    ctx->pc = 0x218D04u;
    {
        const bool branch_taken_0x218d04 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x218d04) {
            ctx->pc = 0x218D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218D04u;
            // 0x218d08: 0xde6200e0  ld          $v0, 0xE0($s3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218D18u;
            goto label_218d18;
        }
    }
    ctx->pc = 0x218D0Cu;
label_218d0c:
    // 0x218d0c: 0x16e00008  bnez        $s7, . + 4 + (0x8 << 2)
label_218d10:
    if (ctx->pc == 0x218D10u) {
        ctx->pc = 0x218D14u;
        goto label_218d14;
    }
    ctx->pc = 0x218D0Cu;
    {
        const bool branch_taken_0x218d0c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x218d0c) {
            ctx->pc = 0x218D30u;
            goto label_218d30;
        }
    }
    ctx->pc = 0x218D14u;
label_218d14:
    // 0x218d14: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x218d14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_218d18:
    // 0x218d18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x218d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218d1c:
    // 0x218d1c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x218d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_218d20:
    // 0x218d20: 0xa2600378  sb          $zero, 0x378($s3)
    ctx->pc = 0x218d20u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 888), (uint8_t)GPR_U32(ctx, 0));
label_218d24:
    // 0x218d24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x218d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_218d28:
    // 0x218d28: 0x10000020  b           . + 4 + (0x20 << 2)
label_218d2c:
    if (ctx->pc == 0x218D2Cu) {
        ctx->pc = 0x218D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D28u;
        // 0x218d2c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D30u;
        goto label_218d30;
    }
    ctx->pc = 0x218D28u;
    {
        const bool branch_taken_0x218d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D28u;
        // 0x218d2c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d28) {
            ctx->pc = 0x218DACu;
            goto label_218dac;
        }
    }
    ctx->pc = 0x218D30u;
label_218d30:
    // 0x218d30: 0x56f10008  bnel        $s7, $s1, . + 4 + (0x8 << 2)
label_218d34:
    if (ctx->pc == 0x218D34u) {
        ctx->pc = 0x218D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D30u;
        // 0x218d34: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D38u;
        goto label_218d38;
    }
    ctx->pc = 0x218D30u;
    {
        const bool branch_taken_0x218d30 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 17));
        if (branch_taken_0x218d30) {
            ctx->pc = 0x218D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218D30u;
            // 0x218d34: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218D54u;
            goto label_218d54;
        }
    }
    ctx->pc = 0x218D38u;
label_218d38:
    // 0x218d38: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x218d38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_218d3c:
    // 0x218d3c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x218d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_218d40:
    // 0x218d40: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x218d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_218d44:
    // 0x218d44: 0xa2770378  sb          $s7, 0x378($s3)
    ctx->pc = 0x218d44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 888), (uint8_t)GPR_U32(ctx, 23));
label_218d48:
    // 0x218d48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x218d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_218d4c:
    // 0x218d4c: 0x10000017  b           . + 4 + (0x17 << 2)
label_218d50:
    if (ctx->pc == 0x218D50u) {
        ctx->pc = 0x218D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D4Cu;
        // 0x218d50: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D54u;
        goto label_218d54;
    }
    ctx->pc = 0x218D4Cu;
    {
        const bool branch_taken_0x218d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D4Cu;
        // 0x218d50: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d4c) {
            ctx->pc = 0x218DACu;
            goto label_218dac;
        }
    }
    ctx->pc = 0x218D54u;
label_218d54:
    // 0x218d54: 0x56e20007  bnel        $s7, $v0, . + 4 + (0x7 << 2)
label_218d58:
    if (ctx->pc == 0x218D58u) {
        ctx->pc = 0x218D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D54u;
        // 0x218d58: 0xa2700378  sb          $s0, 0x378($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 888), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D5Cu;
        goto label_218d5c;
    }
    ctx->pc = 0x218D54u;
    {
        const bool branch_taken_0x218d54 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x218d54) {
            ctx->pc = 0x218D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218D54u;
            // 0x218d58: 0xa2700378  sb          $s0, 0x378($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 888), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218D74u;
            goto label_218d74;
        }
    }
    ctx->pc = 0x218D5Cu;
label_218d5c:
    // 0x218d5c: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x218d5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_218d60:
    // 0x218d60: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x218d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_218d64:
    // 0x218d64: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x218d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_218d68:
    // 0x218d68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x218d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_218d6c:
    // 0x218d6c: 0x1000000f  b           . + 4 + (0xF << 2)
label_218d70:
    if (ctx->pc == 0x218D70u) {
        ctx->pc = 0x218D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D6Cu;
        // 0x218d70: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D74u;
        goto label_218d74;
    }
    ctx->pc = 0x218D6Cu;
    {
        const bool branch_taken_0x218d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D6Cu;
        // 0x218d70: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d6c) {
            ctx->pc = 0x218DACu;
            goto label_218dac;
        }
    }
    ctx->pc = 0x218D74u;
label_218d74:
    // 0x218d74: 0xc08a200  jal         func_228800
label_218d78:
    if (ctx->pc == 0x218D78u) {
        ctx->pc = 0x218D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D74u;
        // 0x218d78: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D7Cu;
        goto label_218d7c;
    }
    ctx->pc = 0x218D74u;
    SET_GPR_U32(ctx, 31, 0x218D7Cu);
    ctx->pc = 0x218D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D74u;
    // 0x218d78: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x218D74u, 0x218D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D7Cu;
label_218d7c:
    // 0x218d7c: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x218d7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_218d80:
    // 0x218d80: 0x3863000d  xori        $v1, $v1, 0xD
    ctx->pc = 0x218d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)13);
label_218d84:
    // 0x218d84: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_218d88:
    if (ctx->pc == 0x218D88u) {
        ctx->pc = 0x218D8Cu;
        goto label_218d8c;
    }
    ctx->pc = 0x218D84u;
    {
        const bool branch_taken_0x218d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x218d84) {
            ctx->pc = 0x218DB0u;
            goto label_218db0;
        }
    }
    ctx->pc = 0x218D8Cu;
label_218d8c:
    // 0x218d8c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x218d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_218d90:
    // 0x218d90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x218d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218d94:
    // 0x218d94: 0xc0cd526  jal         func_335498
label_218d98:
    if (ctx->pc == 0x218D98u) {
        ctx->pc = 0x218D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D94u;
        // 0x218d98: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D9Cu;
        goto label_218d9c;
    }
    ctx->pc = 0x218D94u;
    SET_GPR_U32(ctx, 31, 0x218D9Cu);
    ctx->pc = 0x218D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D94u;
    // 0x218d98: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x218D94u, 0x218D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D9Cu;
label_218d9c:
    // 0x218d9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_218da0:
    if (ctx->pc == 0x218DA0u) {
        ctx->pc = 0x218DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D9Cu;
        // 0x218da0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218DA4u;
        goto label_218da4;
    }
    ctx->pc = 0x218D9Cu;
    {
        const bool branch_taken_0x218d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D9Cu;
        // 0x218da0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218d9c) {
            ctx->pc = 0x218DB0u;
            goto label_218db0;
        }
    }
    ctx->pc = 0x218DA4u;
label_218da4:
    // 0x218da4: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x218da4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_218da8:
    // 0x218da8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x218da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_218dac:
    // 0x218dac: 0xfe6200e0  sd          $v0, 0xE0($s3)
    ctx->pc = 0x218dacu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 224), GPR_U64(ctx, 2));
label_218db0:
    // 0x218db0: 0xc088b26  jal         func_222C98
label_218db4:
    if (ctx->pc == 0x218DB4u) {
        ctx->pc = 0x218DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DB0u;
        // 0x218db4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218DB8u;
        goto label_218db8;
    }
    ctx->pc = 0x218DB0u;
    SET_GPR_U32(ctx, 31, 0x218DB8u);
    ctx->pc = 0x218DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DB0u;
    // 0x218db4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222C98u, 0x218DB0u, 0x218DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DB8u;
label_218db8:
    // 0x218db8: 0xc0874fa  jal         func_21D3E8
label_218dbc:
    if (ctx->pc == 0x218DBCu) {
        ctx->pc = 0x218DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DB8u;
        // 0x218dbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218DC0u;
        goto label_218dc0;
    }
    ctx->pc = 0x218DB8u;
    SET_GPR_U32(ctx, 31, 0x218DC0u);
    ctx->pc = 0x218DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DB8u;
    // 0x218dbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x218DB8u, 0x218DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DC0u;
label_218dc0:
    // 0x218dc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218dc4:
    // 0x218dc4: 0xc0517e8  jal         func_145FA0
label_218dc8:
    if (ctx->pc == 0x218DC8u) {
        ctx->pc = 0x218DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DC4u;
        // 0x218dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218DCCu;
        goto label_218dcc;
    }
    ctx->pc = 0x218DC4u;
    SET_GPR_U32(ctx, 31, 0x218DCCu);
    ctx->pc = 0x218DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DC4u;
    // 0x218dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145FA0u, 0x218DC4u, 0x218DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DCCu;
label_218dcc:
    // 0x218dcc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x218dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_218dd0:
    // 0x218dd0: 0xa200001b  sb          $zero, 0x1B($s0)
    ctx->pc = 0x218dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 0));
label_218dd4:
    // 0x218dd4: 0xa2020019  sb          $v0, 0x19($s0)
    ctx->pc = 0x218dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
label_218dd8:
    // 0x218dd8: 0xc089f12  jal         func_227C48
label_218ddc:
    if (ctx->pc == 0x218DDCu) {
        ctx->pc = 0x218DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DD8u;
        // 0x218ddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218DE0u;
        goto label_218de0;
    }
    ctx->pc = 0x218DD8u;
    SET_GPR_U32(ctx, 31, 0x218DE0u);
    ctx->pc = 0x218DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DD8u;
    // 0x218ddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C48u, 0x218DD8u, 0x218DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DE0u;
label_218de0:
    // 0x218de0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_218de4:
    // 0x218de4: 0xc089c04  jal         func_227010
label_218de8:
    if (ctx->pc == 0x218DE8u) {
        ctx->pc = 0x218DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DE4u;
        // 0x218de8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218DECu;
        goto label_218dec;
    }
    ctx->pc = 0x218DE4u;
    SET_GPR_U32(ctx, 31, 0x218DECu);
    ctx->pc = 0x218DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DE4u;
    // 0x218de8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227010u, 0x218DE4u, 0x218DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DECu;
label_218dec:
    // 0x218dec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218df0:
    // 0x218df0: 0xc089c20  jal         func_227080
label_218df4:
    if (ctx->pc == 0x218DF4u) {
        ctx->pc = 0x218DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218DF0u;
        // 0x218df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218DF8u;
        goto label_218df8;
    }
    ctx->pc = 0x218DF0u;
    SET_GPR_U32(ctx, 31, 0x218DF8u);
    ctx->pc = 0x218DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218DF0u;
    // 0x218df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x218DF0u, 0x218DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218DF8u;
label_218df8:
    // 0x218df8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x218df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218dfc:
    // 0x218dfc: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x218dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_218e00:
    // 0x218e00: 0xae650344  sw          $a1, 0x344($s3)
    ctx->pc = 0x218e00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 836), GPR_U32(ctx, 5));
label_218e04:
    // 0x218e04: 0x8e6400cc  lw          $a0, 0xCC($s3)
    ctx->pc = 0x218e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_218e08:
    // 0x218e08: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x218e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_218e0c:
    // 0x218e0c: 0xae620348  sw          $v0, 0x348($s3)
    ctx->pc = 0x218e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 840), GPR_U32(ctx, 2));
label_218e10:
    // 0x218e10: 0x8ce3bd30  lw          $v1, -0x42D0($a3)
    ctx->pc = 0x218e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_218e14:
    // 0x218e14: 0xae650354  sw          $a1, 0x354($s3)
    ctx->pc = 0x218e14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 852), GPR_U32(ctx, 5));
label_218e18:
    // 0x218e18: 0xae63034c  sw          $v1, 0x34C($s3)
    ctx->pc = 0x218e18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 844), GPR_U32(ctx, 3));
label_218e1c:
    // 0x218e1c: 0xae600350  sw          $zero, 0x350($s3)
    ctx->pc = 0x218e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 848), GPR_U32(ctx, 0));
label_218e20:
    // 0x218e20: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x218e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_218e24:
    // 0x218e24: 0xc08a200  jal         func_228800
label_218e28:
    if (ctx->pc == 0x218E28u) {
        ctx->pc = 0x218E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E24u;
        // 0x218e28: 0xae62036c  sw          $v0, 0x36C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E2Cu;
        goto label_218e2c;
    }
    ctx->pc = 0x218E24u;
    SET_GPR_U32(ctx, 31, 0x218E2Cu);
    ctx->pc = 0x218E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E24u;
    // 0x218e28: 0xae62036c  sw          $v0, 0x36C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 876), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x218E24u, 0x218E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E2Cu;
label_218e2c:
    // 0x218e2c: 0x2450018c  addiu       $s0, $v0, 0x18C
    ctx->pc = 0x218e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 396));
label_218e30:
    // 0x218e30: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x218e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_218e34:
    // 0x218e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218e38:
    // 0x218e38: 0xc10c313  jal         func_430C4C
label_218e3c:
    if (ctx->pc == 0x218E3Cu) {
        ctx->pc = 0x218E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E38u;
        // 0x218e3c: 0x2445a540  addiu       $a1, $v0, -0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E40u;
        goto label_218e40;
    }
    ctx->pc = 0x218E38u;
    SET_GPR_U32(ctx, 31, 0x218E40u);
    ctx->pc = 0x218E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E38u;
    // 0x218e3c: 0x2445a540  addiu       $a1, $v0, -0x5AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x218E38u, 0x218E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E40u;
label_218e40:
    // 0x218e40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_218e44:
    if (ctx->pc == 0x218E44u) {
        ctx->pc = 0x218E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E40u;
        // 0x218e44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E48u;
        goto label_218e48;
    }
    ctx->pc = 0x218E40u;
    {
        const bool branch_taken_0x218e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E40u;
        // 0x218e44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e40) {
            ctx->pc = 0x218E58u;
            goto label_218e58;
        }
    }
    ctx->pc = 0x218E48u;
label_218e48:
    // 0x218e48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x218e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_218e4c:
    // 0x218e4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x218e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218e50:
    // 0x218e50: 0xc0930a0  jal         func_24C280
label_218e54:
    if (ctx->pc == 0x218E54u) {
        ctx->pc = 0x218E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E50u;
        // 0x218e54: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E58u;
        goto label_218e58;
    }
    ctx->pc = 0x218E50u;
    SET_GPR_U32(ctx, 31, 0x218E58u);
    ctx->pc = 0x218E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E50u;
    // 0x218e54: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C280u, 0x218E50u, 0x218E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E58u;
label_218e58:
    // 0x218e58: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x218e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_218e5c:
    // 0x218e5c: 0x8e65037c  lw          $a1, 0x37C($s3)
    ctx->pc = 0x218e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 892)));
label_218e60:
    // 0x218e60: 0xc05e036  jal         func_1780D8
label_218e64:
    if (ctx->pc == 0x218E64u) {
        ctx->pc = 0x218E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E60u;
        // 0x218e64: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E68u;
        goto label_218e68;
    }
    ctx->pc = 0x218E60u;
    SET_GPR_U32(ctx, 31, 0x218E68u);
    ctx->pc = 0x218E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E60u;
    // 0x218e64: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D8u, 0x218E60u, 0x218E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E68u;
label_218e68:
    // 0x218e68: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x218e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_218e6c:
    // 0x218e6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218e70:
    // 0x218e70: 0x8ca4cd4c  lw          $a0, -0x32B4($a1)
    ctx->pc = 0x218e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954316)));
label_218e74:
    // 0x218e74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218e78:
    // 0x218e78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218e7c:
    // 0x218e7c: 0xc05dd34  jal         func_1774D0
label_218e80:
    if (ctx->pc == 0x218E80u) {
        ctx->pc = 0x218E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E7Cu;
        // 0x218e80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E84u;
        goto label_218e84;
    }
    ctx->pc = 0x218E7Cu;
    SET_GPR_U32(ctx, 31, 0x218E84u);
    ctx->pc = 0x218E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E7Cu;
    // 0x218e80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1774D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1774D0u, 0x218E7Cu, 0x218E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E84u;
label_218e84:
    // 0x218e84: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_218e88:
    if (ctx->pc == 0x218E88u) {
        ctx->pc = 0x218E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E84u;
        // 0x218e88: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E8Cu;
        goto label_218e8c;
    }
    ctx->pc = 0x218E84u;
    {
        const bool branch_taken_0x218e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E84u;
        // 0x218e88: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e84) {
            ctx->pc = 0x218EB0u;
            goto label_218eb0;
        }
    }
    ctx->pc = 0x218E8Cu;
label_218e8c:
    // 0x218e8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218e90:
    // 0x218e90: 0x8ce4cd4c  lw          $a0, -0x32B4($a3)
    ctx->pc = 0x218e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954316)));
label_218e94:
    // 0x218e94: 0xc05dee0  jal         func_177B80
label_218e98:
    if (ctx->pc == 0x218E98u) {
        ctx->pc = 0x218E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E94u;
        // 0x218e98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218E9Cu;
        goto label_218e9c;
    }
    ctx->pc = 0x218E94u;
    SET_GPR_U32(ctx, 31, 0x218E9Cu);
    ctx->pc = 0x218E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E94u;
    // 0x218e98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B80u, 0x218E94u, 0x218E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E9Cu;
label_218e9c:
    // 0x218e9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218ea0:
    // 0x218ea0: 0xc085ea6  jal         func_217A98
label_218ea4:
    if (ctx->pc == 0x218EA4u) {
        ctx->pc = 0x218EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EA0u;
        // 0x218ea4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218EA8u;
        goto label_218ea8;
    }
    ctx->pc = 0x218EA0u;
    SET_GPR_U32(ctx, 31, 0x218EA8u);
    ctx->pc = 0x218EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218EA0u;
    // 0x218ea4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217A98u, 0x218EA0u, 0x218EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218EA8u;
label_218ea8:
    // 0x218ea8: 0x10000011  b           . + 4 + (0x11 << 2)
label_218eac:
    if (ctx->pc == 0x218EACu) {
        ctx->pc = 0x218EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EA8u;
        // 0x218eac: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218EB0u;
        goto label_218eb0;
    }
    ctx->pc = 0x218EA8u;
    {
        const bool branch_taken_0x218ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EA8u;
        // 0x218eac: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ea8) {
            ctx->pc = 0x218EF0u;
            goto label_218ef0;
        }
    }
    ctx->pc = 0x218EB0u;
label_218eb0:
    // 0x218eb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x218eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_218eb4:
    // 0x218eb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218eb8:
    // 0x218eb8: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x218eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_218ebc:
    // 0x218ebc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x218ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218ec0:
    // 0x218ec0: 0xc05dd34  jal         func_1774D0
label_218ec4:
    if (ctx->pc == 0x218EC4u) {
        ctx->pc = 0x218EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EC0u;
        // 0x218ec4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218EC8u;
        goto label_218ec8;
    }
    ctx->pc = 0x218EC0u;
    SET_GPR_U32(ctx, 31, 0x218EC8u);
    ctx->pc = 0x218EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218EC0u;
    // 0x218ec4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1774D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1774D0u, 0x218EC0u, 0x218EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218EC8u;
label_218ec8:
    // 0x218ec8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_218ecc:
    if (ctx->pc == 0x218ECCu) {
        ctx->pc = 0x218ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EC8u;
        // 0x218ecc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218ED0u;
        goto label_218ed0;
    }
    ctx->pc = 0x218EC8u;
    {
        const bool branch_taken_0x218ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EC8u;
        // 0x218ecc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ec8) {
            ctx->pc = 0x218EECu;
            goto label_218eec;
        }
    }
    ctx->pc = 0x218ED0u;
label_218ed0:
    // 0x218ed0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218ed4:
    // 0x218ed4: 0x8c64cd4c  lw          $a0, -0x32B4($v1)
    ctx->pc = 0x218ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
label_218ed8:
    // 0x218ed8: 0xc05dee0  jal         func_177B80
label_218edc:
    if (ctx->pc == 0x218EDCu) {
        ctx->pc = 0x218EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ED8u;
        // 0x218edc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218EE0u;
        goto label_218ee0;
    }
    ctx->pc = 0x218ED8u;
    SET_GPR_U32(ctx, 31, 0x218EE0u);
    ctx->pc = 0x218EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218ED8u;
    // 0x218edc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B80u, 0x218ED8u, 0x218EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218EE0u;
label_218ee0:
    // 0x218ee0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218ee4:
    // 0x218ee4: 0xc085ea6  jal         func_217A98
label_218ee8:
    if (ctx->pc == 0x218EE8u) {
        ctx->pc = 0x218EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EE4u;
        // 0x218ee8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218EECu;
        goto label_218eec;
    }
    ctx->pc = 0x218EE4u;
    SET_GPR_U32(ctx, 31, 0x218EECu);
    ctx->pc = 0x218EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218EE4u;
    // 0x218ee8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217A98u, 0x218EE4u, 0x218EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218EECu;
label_218eec:
    // 0x218eec: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x218eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_218ef0:
    // 0x218ef0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x218ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_218ef4:
    // 0x218ef4: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x218ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_218ef8:
    // 0x218ef8: 0xc050fda  jal         func_143F68
label_218efc:
    if (ctx->pc == 0x218EFCu) {
        ctx->pc = 0x218EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218EF8u;
        // 0x218efc: 0x24a5a580  addiu       $a1, $a1, -0x5A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218F00u;
        goto label_218f00;
    }
    ctx->pc = 0x218EF8u;
    SET_GPR_U32(ctx, 31, 0x218F00u);
    ctx->pc = 0x218EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218EF8u;
    // 0x218efc: 0x24a5a580  addiu       $a1, $a1, -0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x218EF8u, 0x218F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218F00u;
label_218f00:
    // 0x218f00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x218f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218f04:
    // 0x218f04: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x218f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_218f08:
    // 0x218f08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x218f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218f0c:
    // 0x218f0c: 0xae600308  sw          $zero, 0x308($s3)
    ctx->pc = 0x218f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 776), GPR_U32(ctx, 0));
label_218f10:
    // 0x218f10: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x218f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_218f14:
    // 0x218f14: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x218f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_218f18:
    // 0x218f18: 0xae600304  sw          $zero, 0x304($s3)
    ctx->pc = 0x218f18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 772), GPR_U32(ctx, 0));
label_218f1c:
    // 0x218f1c: 0xa2600332  sb          $zero, 0x332($s3)
    ctx->pc = 0x218f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 818), (uint8_t)GPR_U32(ctx, 0));
label_218f20:
    // 0x218f20: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x218f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_218f24:
    // 0x218f24: 0xae6002e0  sw          $zero, 0x2E0($s3)
    ctx->pc = 0x218f24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 736), GPR_U32(ctx, 0));
label_218f28:
    // 0x218f28: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x218f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_218f2c:
    // 0x218f2c: 0xa26203bc  sb          $v0, 0x3BC($s3)
    ctx->pc = 0x218f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 956), (uint8_t)GPR_U32(ctx, 2));
label_218f30:
    // 0x218f30: 0x24a84b00  addiu       $t0, $a1, 0x4B00
    ctx->pc = 0x218f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_218f34:
    // 0x218f34: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x218f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_218f38:
    // 0x218f38: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x218f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_218f3c:
    // 0x218f3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x218f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_218f40:
    // 0x218f40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218f44:
    // 0x218f44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x218f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_218f48:
    // 0x218f48: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x218f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_218f4c:
    // 0x218f4c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x218f4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_218f50:
    // 0x218f50: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x218f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_218f54:
    // 0x218f54: 0xa26703bd  sb          $a3, 0x3BD($s3)
    ctx->pc = 0x218f54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 957), (uint8_t)GPR_U32(ctx, 7));
label_218f58:
    // 0x218f58: 0xae6403c4  sw          $a0, 0x3C4($s3)
    ctx->pc = 0x218f58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 964), GPR_U32(ctx, 4));
label_218f5c:
    // 0x218f5c: 0xae600300  sw          $zero, 0x300($s3)
    ctx->pc = 0x218f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 768), GPR_U32(ctx, 0));
label_218f60:
    // 0x218f60: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x218f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_218f64:
    // 0x218f64: 0xa2600331  sb          $zero, 0x331($s3)
    ctx->pc = 0x218f64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 817), (uint8_t)GPR_U32(ctx, 0));
label_218f68:
    // 0x218f68: 0xa26003be  sb          $zero, 0x3BE($s3)
    ctx->pc = 0x218f68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 958), (uint8_t)GPR_U32(ctx, 0));
label_218f6c:
    // 0x218f6c: 0xae600634  sw          $zero, 0x634($s3)
    ctx->pc = 0x218f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1588), GPR_U32(ctx, 0));
label_218f70:
    // 0x218f70: 0xae600638  sw          $zero, 0x638($s3)
    ctx->pc = 0x218f70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1592), GPR_U32(ctx, 0));
label_218f74:
    // 0x218f74: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x218f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_218f78:
    // 0x218f78: 0x8c83bd30  lw          $v1, -0x42D0($a0)
    ctx->pc = 0x218f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_218f7c:
    // 0x218f7c: 0xae630360  sw          $v1, 0x360($s3)
    ctx->pc = 0x218f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 864), GPR_U32(ctx, 3));
label_218f80:
    // 0x218f80: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x218f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_218f84:
    // 0x218f84: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x218f84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_218f88:
    // 0x218f88: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x218f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_218f8c:
    // 0x218f8c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x218f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_218f90:
    // 0x218f90: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x218f90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_218f94:
    // 0x218f94: 0xa26701b3  sb          $a3, 0x1B3($s3)
    ctx->pc = 0x218f94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 435), (uint8_t)GPR_U32(ctx, 7));
label_218f98:
    // 0x218f98: 0x7e6302b0  sq          $v1, 0x2B0($s3)
    ctx->pc = 0x218f98u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 688), GPR_VEC(ctx, 3));
label_218f9c:
    // 0x218f9c: 0xae6001b4  sw          $zero, 0x1B4($s3)
    ctx->pc = 0x218f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 436), GPR_U32(ctx, 0));
label_218fa0:
    // 0x218fa0: 0xae600384  sw          $zero, 0x384($s3)
    ctx->pc = 0x218fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 900), GPR_U32(ctx, 0));
label_218fa4:
    // 0x218fa4: 0x84c400e0  lh          $a0, 0xE0($a2)
    ctx->pc = 0x218fa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 224)));
label_218fa8:
    // 0x218fa8: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x218fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_218fac:
    // 0x218fac: 0x40f809  jalr        $v0
label_218fb0:
    if (ctx->pc == 0x218FB0u) {
        ctx->pc = 0x218FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FACu;
        // 0x218fb0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218FB4u;
        goto label_218fb4;
    }
    ctx->pc = 0x218FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218FB4u);
        ctx->pc = 0x218FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FACu;
        // 0x218fb0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218FACu, 0x218FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x218FB4u;
label_218fb4:
    // 0x218fb4: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x218fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_218fb8:
    // 0x218fb8: 0xa3a000f8  sb          $zero, 0xF8($sp)
    ctx->pc = 0x218fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 248), (uint8_t)GPR_U32(ctx, 0));
label_218fbc:
    // 0x218fbc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x218fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_218fc0:
    // 0x218fc0: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x218fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_218fc4:
    // 0x218fc4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x218fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_218fc8:
    // 0x218fc8: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x218fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
label_218fcc:
    // 0x218fcc: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x218fccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
label_218fd0:
    // 0x218fd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218fd4:
    // 0x218fd4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x218fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_218fd8:
    // 0x218fd8: 0x8e6400cc  lw          $a0, 0xCC($s3)
    ctx->pc = 0x218fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_218fdc:
    // 0x218fdc: 0xae600564  sw          $zero, 0x564($s3)
    ctx->pc = 0x218fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1380), GPR_U32(ctx, 0));
label_218fe0:
    // 0x218fe0: 0xae60056c  sw          $zero, 0x56C($s3)
    ctx->pc = 0x218fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1388), GPR_U32(ctx, 0));
label_218fe4:
    // 0x218fe4: 0xae600570  sw          $zero, 0x570($s3)
    ctx->pc = 0x218fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1392), GPR_U32(ctx, 0));
label_218fe8:
    // 0x218fe8: 0xae6005e0  sw          $zero, 0x5E0($s3)
    ctx->pc = 0x218fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1504), GPR_U32(ctx, 0));
label_218fec:
    // 0x218fec: 0xe6600630  swc1        $f0, 0x630($s3)
    ctx->pc = 0x218fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1584), bits); }
label_218ff0:
    // 0x218ff0: 0xc08a200  jal         func_228800
label_218ff4:
    if (ctx->pc == 0x218FF4u) {
        ctx->pc = 0x218FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FF0u;
        // 0x218ff4: 0xae620644  sw          $v0, 0x644($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218FF8u;
        goto label_218ff8;
    }
    ctx->pc = 0x218FF0u;
    SET_GPR_U32(ctx, 31, 0x218FF8u);
    ctx->pc = 0x218FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FF0u;
    // 0x218ff4: 0xae620644  sw          $v0, 0x644($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1604), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x218FF0u, 0x218FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218FF8u;
label_218ff8:
    // 0x218ff8: 0xc08a200  jal         func_228800
label_218ffc:
    if (ctx->pc == 0x218FFCu) {
        ctx->pc = 0x218FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218FF8u;
        // 0x218ffc: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219000u;
        goto label_219000;
    }
    ctx->pc = 0x218FF8u;
    SET_GPR_U32(ctx, 31, 0x219000u);
    ctx->pc = 0x218FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218FF8u;
    // 0x218ffc: 0x8e6400cc  lw          $a0, 0xCC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x218FF8u, 0x219000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219000u;
label_219000:
    // 0x219000: 0x2444014c  addiu       $a0, $v0, 0x14C
    ctx->pc = 0x219000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
label_219004:
    // 0x219004: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_219008:
    if (ctx->pc == 0x219008u) {
        ctx->pc = 0x219008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219004u;
        // 0x219008: 0x3c070056  lui         $a3, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21900Cu;
        goto label_21900c;
    }
    ctx->pc = 0x219004u;
    {
        const bool branch_taken_0x219004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x219008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219004u;
        // 0x219008: 0x3c070056  lui         $a3, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219004) {
            ctx->pc = 0x219018u;
            goto label_219018;
        }
    }
    ctx->pc = 0x21900Cu;
label_21900c:
    // 0x21900c: 0xc10c313  jal         func_430C4C
label_219010:
    if (ctx->pc == 0x219010u) {
        ctx->pc = 0x219010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21900Cu;
        // 0x219010: 0x24e5a540  addiu       $a1, $a3, -0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219014u;
        goto label_219014;
    }
    ctx->pc = 0x21900Cu;
    SET_GPR_U32(ctx, 31, 0x219014u);
    ctx->pc = 0x219010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21900Cu;
    // 0x219010: 0x24e5a540  addiu       $a1, $a3, -0x5AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21900Cu, 0x219014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219014u;
label_219014:
    // 0x219014: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x219014u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_219018:
    // 0x219018: 0x3ae20003  xori        $v0, $s7, 0x3
    ctx->pc = 0x219018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)3);
label_21901c:
    // 0x21901c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_219020:
    if (ctx->pc == 0x219020u) {
        ctx->pc = 0x219020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21901Cu;
        // 0x219020: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219024u;
        goto label_219024;
    }
    ctx->pc = 0x21901Cu;
    {
        const bool branch_taken_0x21901c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21901Cu;
        // 0x219020: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21901c) {
            ctx->pc = 0x219040u;
            goto label_219040;
        }
    }
    ctx->pc = 0x219024u;
label_219024:
    // 0x219024: 0xc088f88  jal         func_223E20
label_219028:
    if (ctx->pc == 0x219028u) {
        ctx->pc = 0x219028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219024u;
        // 0x219028: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21902Cu;
        goto label_21902c;
    }
    ctx->pc = 0x219024u;
    SET_GPR_U32(ctx, 31, 0x21902Cu);
    ctx->pc = 0x219028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219024u;
    // 0x219028: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x219024u, 0x21902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21902Cu;
label_21902c:
    // 0x21902c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_219030:
    if (ctx->pc == 0x219030u) {
        ctx->pc = 0x219034u;
        goto label_219034;
    }
    ctx->pc = 0x21902Cu;
    {
        const bool branch_taken_0x21902c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21902c) {
            ctx->pc = 0x219040u;
            goto label_219040;
        }
    }
    ctx->pc = 0x219034u;
label_219034:
    // 0x219034: 0xc088f92  jal         func_223E48
label_219038:
    if (ctx->pc == 0x219038u) {
        ctx->pc = 0x219038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219034u;
        // 0x219038: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21903Cu;
        goto label_21903c;
    }
    ctx->pc = 0x219034u;
    SET_GPR_U32(ctx, 31, 0x21903Cu);
    ctx->pc = 0x219038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219034u;
    // 0x219038: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E48u, 0x219034u, 0x21903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21903Cu;
label_21903c:
    // 0x21903c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x21903cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_219040:
    // 0x219040: 0x1200006e  beqz        $s0, . + 4 + (0x6E << 2)
label_219044:
    if (ctx->pc == 0x219044u) {
        ctx->pc = 0x219048u;
        goto label_219048;
    }
    ctx->pc = 0x219040u;
    {
        const bool branch_taken_0x219040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x219040) {
            ctx->pc = 0x2191FCu;
            goto label_2191fc;
        }
    }
    ctx->pc = 0x219048u;
label_219048:
    // 0x219048: 0x8e6300cc  lw          $v1, 0xCC($s3)
    ctx->pc = 0x219048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_21904c:
    // 0x21904c: 0x3862012f  xori        $v0, $v1, 0x12F
    ctx->pc = 0x21904cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)303);
label_219050:
    // 0x219050: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_219054:
    if (ctx->pc == 0x219054u) {
        ctx->pc = 0x219054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219050u;
        // 0x219054: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219058u;
        goto label_219058;
    }
    ctx->pc = 0x219050u;
    {
        const bool branch_taken_0x219050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219050u;
        // 0x219054: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219050) {
            ctx->pc = 0x2190C0u;
            goto label_2190c0;
        }
    }
    ctx->pc = 0x219058u;
label_219058:
    // 0x219058: 0x38620130  xori        $v0, $v1, 0x130
    ctx->pc = 0x219058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)304);
label_21905c:
    // 0x21905c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_219060:
    if (ctx->pc == 0x219060u) {
        ctx->pc = 0x219060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21905Cu;
        // 0x219060: 0x38620131  xori        $v0, $v1, 0x131 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)305);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219064u;
        goto label_219064;
    }
    ctx->pc = 0x21905Cu;
    {
        const bool branch_taken_0x21905c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21905Cu;
        // 0x219060: 0x38620131  xori        $v0, $v1, 0x131 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21905c) {
            ctx->pc = 0x2190C0u;
            goto label_2190c0;
        }
    }
    ctx->pc = 0x219064u;
label_219064:
    // 0x219064: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_219068:
    if (ctx->pc == 0x219068u) {
        ctx->pc = 0x219068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219064u;
        // 0x219068: 0x386201a0  xori        $v0, $v1, 0x1A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)416);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21906Cu;
        goto label_21906c;
    }
    ctx->pc = 0x219064u;
    {
        const bool branch_taken_0x219064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219064u;
        // 0x219068: 0x386201a0  xori        $v0, $v1, 0x1A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)416);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219064) {
            ctx->pc = 0x2190C0u;
            goto label_2190c0;
        }
    }
    ctx->pc = 0x21906Cu;
label_21906c:
    // 0x21906c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_219070:
    if (ctx->pc == 0x219070u) {
        ctx->pc = 0x219070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21906Cu;
        // 0x219070: 0x386200dd  xori        $v0, $v1, 0xDD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)221);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219074u;
        goto label_219074;
    }
    ctx->pc = 0x21906Cu;
    {
        const bool branch_taken_0x21906c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21906Cu;
        // 0x219070: 0x386200dd  xori        $v0, $v1, 0xDD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)221);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21906c) {
            ctx->pc = 0x2190C0u;
            goto label_2190c0;
        }
    }
    ctx->pc = 0x219074u;
label_219074:
    // 0x219074: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_219078:
    if (ctx->pc == 0x219078u) {
        ctx->pc = 0x219078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219074u;
        // 0x219078: 0x386200de  xori        $v0, $v1, 0xDE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)222);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21907Cu;
        goto label_21907c;
    }
    ctx->pc = 0x219074u;
    {
        const bool branch_taken_0x219074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219074u;
        // 0x219078: 0x386200de  xori        $v0, $v1, 0xDE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)222);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219074) {
            ctx->pc = 0x2190C0u;
            goto label_2190c0;
        }
    }
    ctx->pc = 0x21907Cu;
label_21907c:
    // 0x21907c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_219080:
    if (ctx->pc == 0x219080u) {
        ctx->pc = 0x219080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21907Cu;
        // 0x219080: 0x3862007a  xori        $v0, $v1, 0x7A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)122);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219084u;
        goto label_219084;
    }
    ctx->pc = 0x21907Cu;
    {
        const bool branch_taken_0x21907c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21907Cu;
        // 0x219080: 0x3862007a  xori        $v0, $v1, 0x7A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)122);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21907c) {
            ctx->pc = 0x2190C0u;
            goto label_2190c0;
        }
    }
    ctx->pc = 0x219084u;
label_219084:
    // 0x219084: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_219088:
    if (ctx->pc == 0x219088u) {
        ctx->pc = 0x219088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219084u;
        // 0x219088: 0x38620133  xori        $v0, $v1, 0x133 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)307);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21908Cu;
        goto label_21908c;
    }
    ctx->pc = 0x219084u;
    {
        const bool branch_taken_0x219084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219084u;
        // 0x219088: 0x38620133  xori        $v0, $v1, 0x133 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)307);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219084) {
            ctx->pc = 0x2190C0u;
            goto label_2190c0;
        }
    }
    ctx->pc = 0x21908Cu;
label_21908c:
    // 0x21908c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_219090:
    if (ctx->pc == 0x219090u) {
        ctx->pc = 0x219090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21908Cu;
        // 0x219090: 0x386201a9  xori        $v0, $v1, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219094u;
        goto label_219094;
    }
    ctx->pc = 0x21908Cu;
    {
        const bool branch_taken_0x21908c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21908Cu;
        // 0x219090: 0x386201a9  xori        $v0, $v1, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21908c) {
            ctx->pc = 0x2190C0u;
            goto label_2190c0;
        }
    }
    ctx->pc = 0x219094u;
label_219094:
    // 0x219094: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_219098:
    if (ctx->pc == 0x219098u) {
        ctx->pc = 0x219098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219094u;
        // 0x219098: 0x3862015f  xori        $v0, $v1, 0x15F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)351);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21909Cu;
        goto label_21909c;
    }
    ctx->pc = 0x219094u;
    {
        const bool branch_taken_0x219094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219094u;
        // 0x219098: 0x3862015f  xori        $v0, $v1, 0x15F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)351);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219094) {
            ctx->pc = 0x2190C0u;
            goto label_2190c0;
        }
    }
    ctx->pc = 0x21909Cu;
label_21909c:
    // 0x21909c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2190a0:
    if (ctx->pc == 0x2190A0u) {
        ctx->pc = 0x2190A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21909Cu;
        // 0x2190a0: 0x3862019e  xori        $v0, $v1, 0x19E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)414);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2190A4u;
        goto label_2190a4;
    }
    ctx->pc = 0x21909Cu;
    {
        const bool branch_taken_0x21909c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21909Cu;
        // 0x2190a0: 0x3862019e  xori        $v0, $v1, 0x19E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)414);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21909c) {
            ctx->pc = 0x2190C0u;
            goto label_2190c0;
        }
    }
    ctx->pc = 0x2190A4u;
label_2190a4:
    // 0x2190a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2190a8:
    if (ctx->pc == 0x2190A8u) {
        ctx->pc = 0x2190A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190A4u;
        // 0x2190a8: 0x3862019f  xori        $v0, $v1, 0x19F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)415);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2190ACu;
        goto label_2190ac;
    }
    ctx->pc = 0x2190A4u;
    {
        const bool branch_taken_0x2190a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190A4u;
        // 0x2190a8: 0x3862019f  xori        $v0, $v1, 0x19F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)415);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190a4) {
            ctx->pc = 0x2190C0u;
            goto label_2190c0;
        }
    }
    ctx->pc = 0x2190ACu;
label_2190ac:
    // 0x2190ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2190b0:
    if (ctx->pc == 0x2190B0u) {
        ctx->pc = 0x2190B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190ACu;
        // 0x2190b0: 0x386201ca  xori        $v0, $v1, 0x1CA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)458);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2190B4u;
        goto label_2190b4;
    }
    ctx->pc = 0x2190ACu;
    {
        const bool branch_taken_0x2190ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190ACu;
        // 0x2190b0: 0x386201ca  xori        $v0, $v1, 0x1CA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)458);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190ac) {
            ctx->pc = 0x2190C0u;
            goto label_2190c0;
        }
    }
    ctx->pc = 0x2190B4u;
label_2190b4:
    // 0x2190b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2190b8:
    if (ctx->pc == 0x2190B8u) {
        ctx->pc = 0x2190B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190B4u;
        // 0x2190b8: 0x386201cb  xori        $v0, $v1, 0x1CB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)459);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2190BCu;
        goto label_2190bc;
    }
    ctx->pc = 0x2190B4u;
    {
        const bool branch_taken_0x2190b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190B4u;
        // 0x2190b8: 0x386201cb  xori        $v0, $v1, 0x1CB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)459);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190b4) {
            ctx->pc = 0x2190C0u;
            goto label_2190c0;
        }
    }
    ctx->pc = 0x2190BCu;
label_2190bc:
    // 0x2190bc: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2190bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2190c0:
    // 0x2190c0: 0x1080004e  beqz        $a0, . + 4 + (0x4E << 2)
label_2190c4:
    if (ctx->pc == 0x2190C4u) {
        ctx->pc = 0x2190C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190C0u;
        // 0x2190c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2190C8u;
        goto label_2190c8;
    }
    ctx->pc = 0x2190C0u;
    {
        const bool branch_taken_0x2190c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190C0u;
        // 0x2190c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190c0) {
            ctx->pc = 0x2191FCu;
            goto label_2191fc;
        }
    }
    ctx->pc = 0x2190C8u;
label_2190c8:
    // 0x2190c8: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x2190c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2190cc:
    // 0x2190cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2190ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2190d0:
    // 0x2190d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2190d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2190d4:
    // 0x2190d4: 0xc0cd4ee  jal         func_3353B8
label_2190d8:
    if (ctx->pc == 0x2190D8u) {
        ctx->pc = 0x2190D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190D4u;
        // 0x2190d8: 0x2444b880  addiu       $a0, $v0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2190DCu;
        goto label_2190dc;
    }
    ctx->pc = 0x2190D4u;
    SET_GPR_U32(ctx, 31, 0x2190DCu);
    ctx->pc = 0x2190D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190D4u;
    // 0x2190d8: 0x2444b880  addiu       $a0, $v0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2190D4u, 0x2190DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190DCu;
label_2190dc:
    // 0x2190dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2190dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2190e0:
    // 0x2190e0: 0x826203b8  lb          $v0, 0x3B8($s3)
    ctx->pc = 0x2190e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 952)));
label_2190e4:
    // 0x2190e4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_2190e8:
    if (ctx->pc == 0x2190E8u) {
        ctx->pc = 0x2190E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190E4u;
        // 0x2190e8: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2190ECu;
        goto label_2190ec;
    }
    ctx->pc = 0x2190E4u;
    {
        const bool branch_taken_0x2190e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2190E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190E4u;
        // 0x2190e8: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190e4) {
            ctx->pc = 0x219178u;
            goto label_219178;
        }
    }
    ctx->pc = 0x2190ECu;
label_2190ec:
    // 0x2190ec: 0xc087502  jal         func_21D408
label_2190f0:
    if (ctx->pc == 0x2190F0u) {
        ctx->pc = 0x2190F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190ECu;
        // 0x2190f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2190F4u;
        goto label_2190f4;
    }
    ctx->pc = 0x2190ECu;
    SET_GPR_U32(ctx, 31, 0x2190F4u);
    ctx->pc = 0x2190F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2190ECu;
    // 0x2190f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2190ECu, 0x2190F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2190F4u;
label_2190f4:
    // 0x2190f4: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2190f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2190f8:
    // 0x2190f8: 0x2e02001f  sltiu       $v0, $s0, 0x1F
    ctx->pc = 0x2190f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_2190fc:
    // 0x2190fc: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_219100:
    if (ctx->pc == 0x219100u) {
        ctx->pc = 0x219100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190FCu;
        // 0x219100: 0x8c63002c  lw          $v1, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219104u;
        goto label_219104;
    }
    ctx->pc = 0x2190FCu;
    {
        const bool branch_taken_0x2190fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2190FCu;
        // 0x219100: 0x8c63002c  lw          $v1, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190fc) {
            ctx->pc = 0x2191F0u;
            goto label_2191f0;
        }
    }
    ctx->pc = 0x219104u;
label_219104:
    // 0x219104: 0x2e020037  sltiu       $v0, $s0, 0x37
    ctx->pc = 0x219104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)55) ? 1 : 0);
label_219108:
    // 0x219108: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_21910c:
    if (ctx->pc == 0x21910Cu) {
        ctx->pc = 0x21910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219108u;
        // 0x21910c: 0x2e02005a  sltiu       $v0, $s0, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219110u;
        goto label_219110;
    }
    ctx->pc = 0x219108u;
    {
        const bool branch_taken_0x219108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219108u;
        // 0x21910c: 0x2e02005a  sltiu       $v0, $s0, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219108) {
            ctx->pc = 0x21915Cu;
            goto label_21915c;
        }
    }
    ctx->pc = 0x219110u;
label_219110:
    // 0x219110: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
label_219114:
    if (ctx->pc == 0x219114u) {
        ctx->pc = 0x219118u;
        goto label_219118;
    }
    ctx->pc = 0x219110u;
    {
        const bool branch_taken_0x219110 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x219110) {
            ctx->pc = 0x21915Cu;
            goto label_21915c;
        }
    }
    ctx->pc = 0x219118u;
label_219118:
    // 0x219118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21911c:
    // 0x21911c: 0x12e20005  beq         $s7, $v0, . + 4 + (0x5 << 2)
label_219120:
    if (ctx->pc == 0x219120u) {
        ctx->pc = 0x219120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21911Cu;
        // 0x219120: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219124u;
        goto label_219124;
    }
    ctx->pc = 0x21911Cu;
    {
        const bool branch_taken_0x21911c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x219120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21911Cu;
        // 0x219120: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21911c) {
            ctx->pc = 0x219134u;
            goto label_219134;
        }
    }
    ctx->pc = 0x219124u;
label_219124:
    // 0x219124: 0x16e20008  bne         $s7, $v0, . + 4 + (0x8 << 2)
label_219128:
    if (ctx->pc == 0x219128u) {
        ctx->pc = 0x219128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219124u;
        // 0x219128: 0x28620017  slti        $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21912Cu;
        goto label_21912c;
    }
    ctx->pc = 0x219124u;
    {
        const bool branch_taken_0x219124 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x219128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219124u;
        // 0x219128: 0x28620017  slti        $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219124) {
            ctx->pc = 0x219148u;
            goto label_219148;
        }
    }
    ctx->pc = 0x21912Cu;
label_21912c:
    // 0x21912c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_219130:
    if (ctx->pc == 0x219130u) {
        ctx->pc = 0x219134u;
        goto label_219134;
    }
    ctx->pc = 0x21912Cu;
    {
        const bool branch_taken_0x21912c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21912c) {
            ctx->pc = 0x219148u;
            goto label_219148;
        }
    }
    ctx->pc = 0x219134u;
label_219134:
    // 0x219134: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x219134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
label_219138:
    // 0x219138: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x219138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_21913c:
    // 0x21913c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21913cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_219140:
    // 0x219140: 0x1000002c  b           . + 4 + (0x2C << 2)
label_219144:
    if (ctx->pc == 0x219144u) {
        ctx->pc = 0x219144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219140u;
        // 0x219144: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219148u;
        goto label_219148;
    }
    ctx->pc = 0x219140u;
    {
        const bool branch_taken_0x219140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219140u;
        // 0x219144: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219140) {
            ctx->pc = 0x2191F4u;
            goto label_2191f4;
        }
    }
    ctx->pc = 0x219148u;
label_219148:
    // 0x219148: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x219148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
label_21914c:
    // 0x21914c: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x21914cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_219150:
    // 0x219150: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x219150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_219154:
    // 0x219154: 0x10000027  b           . + 4 + (0x27 << 2)
label_219158:
    if (ctx->pc == 0x219158u) {
        ctx->pc = 0x219158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219154u;
        // 0x219158: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21915Cu;
        goto label_21915c;
    }
    ctx->pc = 0x219154u;
    {
        const bool branch_taken_0x219154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219154u;
        // 0x219158: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219154) {
            ctx->pc = 0x2191F4u;
            goto label_2191f4;
        }
    }
    ctx->pc = 0x21915Cu;
label_21915c:
    // 0x21915c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_219160:
    if (ctx->pc == 0x219160u) {
        ctx->pc = 0x219160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21915Cu;
        // 0x219160: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219164u;
        goto label_219164;
    }
    ctx->pc = 0x21915Cu;
    {
        const bool branch_taken_0x21915c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21915Cu;
        // 0x219160: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21915c) {
            ctx->pc = 0x2191F4u;
            goto label_2191f4;
        }
    }
    ctx->pc = 0x219164u;
label_219164:
    // 0x219164: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x219164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
label_219168:
    // 0x219168: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x219168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_21916c:
    // 0x21916c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21916cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_219170:
    // 0x219170: 0x10000020  b           . + 4 + (0x20 << 2)
label_219174:
    if (ctx->pc == 0x219174u) {
        ctx->pc = 0x219174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219170u;
        // 0x219174: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219178u;
        goto label_219178;
    }
    ctx->pc = 0x219170u;
    {
        const bool branch_taken_0x219170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219170u;
        // 0x219174: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219170) {
            ctx->pc = 0x2191F4u;
            goto label_2191f4;
        }
    }
    ctx->pc = 0x219178u;
label_219178:
    // 0x219178: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x219178u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_21917c:
    // 0x21917c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_219180:
    if (ctx->pc == 0x219180u) {
        ctx->pc = 0x219180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21917Cu;
        // 0x219180: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219184u;
        goto label_219184;
    }
    ctx->pc = 0x21917Cu;
    {
        const bool branch_taken_0x21917c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21917c) {
            ctx->pc = 0x219180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21917Cu;
            // 0x219180: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x219184u;
            goto label_219184;
        }
    }
    ctx->pc = 0x219184u;
label_219184:
    // 0x219184: 0x2012  mflo        $a0
    ctx->pc = 0x219184u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_219188:
    // 0x219188: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_21918c:
    if (ctx->pc == 0x21918Cu) {
        ctx->pc = 0x21918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219188u;
        // 0x21918c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219190u;
        goto label_219190;
    }
    ctx->pc = 0x219188u;
    {
        const bool branch_taken_0x219188 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x21918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219188u;
        // 0x21918c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219188) {
            ctx->pc = 0x2191A4u;
            goto label_2191a4;
        }
    }
    ctx->pc = 0x219190u;
label_219190:
    // 0x219190: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x219190u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_219194:
    // 0x219194: 0x0  nop
    ctx->pc = 0x219194u;
    // NOP
label_219198:
    // 0x219198: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x219198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_21919c:
    // 0x21919c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2191a0:
    if (ctx->pc == 0x2191A0u) {
        ctx->pc = 0x2191A4u;
        goto label_2191a4;
    }
    ctx->pc = 0x21919Cu;
    {
        const bool branch_taken_0x21919c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21919c) {
            ctx->pc = 0x2191BCu;
            goto label_2191bc;
        }
    }
    ctx->pc = 0x2191A4u;
label_2191a4:
    // 0x2191a4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2191a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2191a8:
    // 0x2191a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2191a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2191ac:
    // 0x2191ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2191acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2191b0:
    // 0x2191b0: 0x0  nop
    ctx->pc = 0x2191b0u;
    // NOP
label_2191b4:
    // 0x2191b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2191b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2191b8:
    // 0x2191b8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2191b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2191bc:
    // 0x2191bc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2191bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2191c0:
    // 0x2191c0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2191c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2191c4:
    // 0x2191c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2191c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2191c8:
    // 0x2191c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2191c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2191cc:
    // 0x2191cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2191ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2191d0:
    // 0x2191d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2191d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2191d4:
    // 0x2191d4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2191d8:
    if (ctx->pc == 0x2191D8u) {
        ctx->pc = 0x2191D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191D4u;
        // 0x2191d8: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2191DCu;
        goto label_2191dc;
    }
    ctx->pc = 0x2191D4u;
    {
        const bool branch_taken_0x2191d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191D4u;
        // 0x2191d8: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191d4) {
            ctx->pc = 0x2191F0u;
            goto label_2191f0;
        }
    }
    ctx->pc = 0x2191DCu;
label_2191dc:
    // 0x2191dc: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x2191dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
label_2191e0:
    // 0x2191e0: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x2191e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_2191e4:
    // 0x2191e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2191e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2191e8:
    // 0x2191e8: 0x0  nop
    ctx->pc = 0x2191e8u;
    // NOP
label_2191ec:
    // 0x2191ec: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x2191ecu;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
label_2191f0:
    // 0x2191f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2191f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2191f4:
    // 0x2191f4: 0xc086582  jal         func_219608
label_2191f8:
    if (ctx->pc == 0x2191F8u) {
        ctx->pc = 0x2191F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191F4u;
        // 0x2191f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2191FCu;
        goto label_2191fc;
    }
    ctx->pc = 0x2191F4u;
    SET_GPR_U32(ctx, 31, 0x2191FCu);
    ctx->pc = 0x2191F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191F4u;
    // 0x2191f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219608u, 0x2191F4u, 0x2191FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2191FCu;
label_2191fc:
    // 0x2191fc: 0xc08658e  jal         func_219638
label_219200:
    if (ctx->pc == 0x219200u) {
        ctx->pc = 0x219200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2191FCu;
        // 0x219200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219204u;
        goto label_219204;
    }
    ctx->pc = 0x2191FCu;
    SET_GPR_U32(ctx, 31, 0x219204u);
    ctx->pc = 0x219200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2191FCu;
    // 0x219200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219638u, 0x2191FCu, 0x219204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219204u;
label_219204:
    // 0x219204: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x219204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_219208:
    // 0x219208: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x219208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_21920c:
    // 0x21920c: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x21920cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_219210:
    // 0x219210: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x219210u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_219214:
    // 0x219214: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x219214u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_219218:
    // 0x219218: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x219218u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_21921c:
    // 0x21921c: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x21921cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_219220:
    // 0x219220: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x219220u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_219224:
    // 0x219224: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x219224u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_219228:
    // 0x219228: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x219228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_21922c:
    // 0x21922c: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x21922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_219230:
    // 0x219230: 0x3e00008  jr          $ra
label_219234:
    if (ctx->pc == 0x219234u) {
        ctx->pc = 0x219234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219230u;
        // 0x219234: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219238u;
        goto label_fallthrough_0x219230;
    }
    ctx->pc = 0x219230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219230u;
        // 0x219234: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x219230:
    ctx->pc = 0x219238u;
}
