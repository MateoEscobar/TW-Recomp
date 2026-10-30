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

// Function: sub_00433FD8
// Address: 0x433fd8 - 0x4349b8
void sub_00433FD8_0x433fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433FD8_0x433fd8");
#endif

    switch (ctx->pc) {
        case 0x433fd8u: goto label_433fd8;
        case 0x433fdcu: goto label_433fdc;
        case 0x433fe0u: goto label_433fe0;
        case 0x433fe4u: goto label_433fe4;
        case 0x433fe8u: goto label_433fe8;
        case 0x433fecu: goto label_433fec;
        case 0x433ff0u: goto label_433ff0;
        case 0x433ff4u: goto label_433ff4;
        case 0x433ff8u: goto label_433ff8;
        case 0x433ffcu: goto label_433ffc;
        case 0x434000u: goto label_434000;
        case 0x434004u: goto label_434004;
        case 0x434008u: goto label_434008;
        case 0x43400cu: goto label_43400c;
        case 0x434010u: goto label_434010;
        case 0x434014u: goto label_434014;
        case 0x434018u: goto label_434018;
        case 0x43401cu: goto label_43401c;
        case 0x434020u: goto label_434020;
        case 0x434024u: goto label_434024;
        case 0x434028u: goto label_434028;
        case 0x43402cu: goto label_43402c;
        case 0x434030u: goto label_434030;
        case 0x434034u: goto label_434034;
        case 0x434038u: goto label_434038;
        case 0x43403cu: goto label_43403c;
        case 0x434040u: goto label_434040;
        case 0x434044u: goto label_434044;
        case 0x434048u: goto label_434048;
        case 0x43404cu: goto label_43404c;
        case 0x434050u: goto label_434050;
        case 0x434054u: goto label_434054;
        case 0x434058u: goto label_434058;
        case 0x43405cu: goto label_43405c;
        case 0x434060u: goto label_434060;
        case 0x434064u: goto label_434064;
        case 0x434068u: goto label_434068;
        case 0x43406cu: goto label_43406c;
        case 0x434070u: goto label_434070;
        case 0x434074u: goto label_434074;
        case 0x434078u: goto label_434078;
        case 0x43407cu: goto label_43407c;
        case 0x434080u: goto label_434080;
        case 0x434084u: goto label_434084;
        case 0x434088u: goto label_434088;
        case 0x43408cu: goto label_43408c;
        case 0x434090u: goto label_434090;
        case 0x434094u: goto label_434094;
        case 0x434098u: goto label_434098;
        case 0x43409cu: goto label_43409c;
        case 0x4340a0u: goto label_4340a0;
        case 0x4340a4u: goto label_4340a4;
        case 0x4340a8u: goto label_4340a8;
        case 0x4340acu: goto label_4340ac;
        case 0x4340b0u: goto label_4340b0;
        case 0x4340b4u: goto label_4340b4;
        case 0x4340b8u: goto label_4340b8;
        case 0x4340bcu: goto label_4340bc;
        case 0x4340c0u: goto label_4340c0;
        case 0x4340c4u: goto label_4340c4;
        case 0x4340c8u: goto label_4340c8;
        case 0x4340ccu: goto label_4340cc;
        case 0x4340d0u: goto label_4340d0;
        case 0x4340d4u: goto label_4340d4;
        case 0x4340d8u: goto label_4340d8;
        case 0x4340dcu: goto label_4340dc;
        case 0x4340e0u: goto label_4340e0;
        case 0x4340e4u: goto label_4340e4;
        case 0x4340e8u: goto label_4340e8;
        case 0x4340ecu: goto label_4340ec;
        case 0x4340f0u: goto label_4340f0;
        case 0x4340f4u: goto label_4340f4;
        case 0x4340f8u: goto label_4340f8;
        case 0x4340fcu: goto label_4340fc;
        case 0x434100u: goto label_434100;
        case 0x434104u: goto label_434104;
        case 0x434108u: goto label_434108;
        case 0x43410cu: goto label_43410c;
        case 0x434110u: goto label_434110;
        case 0x434114u: goto label_434114;
        case 0x434118u: goto label_434118;
        case 0x43411cu: goto label_43411c;
        case 0x434120u: goto label_434120;
        case 0x434124u: goto label_434124;
        case 0x434128u: goto label_434128;
        case 0x43412cu: goto label_43412c;
        case 0x434130u: goto label_434130;
        case 0x434134u: goto label_434134;
        case 0x434138u: goto label_434138;
        case 0x43413cu: goto label_43413c;
        case 0x434140u: goto label_434140;
        case 0x434144u: goto label_434144;
        case 0x434148u: goto label_434148;
        case 0x43414cu: goto label_43414c;
        case 0x434150u: goto label_434150;
        case 0x434154u: goto label_434154;
        case 0x434158u: goto label_434158;
        case 0x43415cu: goto label_43415c;
        case 0x434160u: goto label_434160;
        case 0x434164u: goto label_434164;
        case 0x434168u: goto label_434168;
        case 0x43416cu: goto label_43416c;
        case 0x434170u: goto label_434170;
        case 0x434174u: goto label_434174;
        case 0x434178u: goto label_434178;
        case 0x43417cu: goto label_43417c;
        case 0x434180u: goto label_434180;
        case 0x434184u: goto label_434184;
        case 0x434188u: goto label_434188;
        case 0x43418cu: goto label_43418c;
        case 0x434190u: goto label_434190;
        case 0x434194u: goto label_434194;
        case 0x434198u: goto label_434198;
        case 0x43419cu: goto label_43419c;
        case 0x4341a0u: goto label_4341a0;
        case 0x4341a4u: goto label_4341a4;
        case 0x4341a8u: goto label_4341a8;
        case 0x4341acu: goto label_4341ac;
        case 0x4341b0u: goto label_4341b0;
        case 0x4341b4u: goto label_4341b4;
        case 0x4341b8u: goto label_4341b8;
        case 0x4341bcu: goto label_4341bc;
        case 0x4341c0u: goto label_4341c0;
        case 0x4341c4u: goto label_4341c4;
        case 0x4341c8u: goto label_4341c8;
        case 0x4341ccu: goto label_4341cc;
        case 0x4341d0u: goto label_4341d0;
        case 0x4341d4u: goto label_4341d4;
        case 0x4341d8u: goto label_4341d8;
        case 0x4341dcu: goto label_4341dc;
        case 0x4341e0u: goto label_4341e0;
        case 0x4341e4u: goto label_4341e4;
        case 0x4341e8u: goto label_4341e8;
        case 0x4341ecu: goto label_4341ec;
        case 0x4341f0u: goto label_4341f0;
        case 0x4341f4u: goto label_4341f4;
        case 0x4341f8u: goto label_4341f8;
        case 0x4341fcu: goto label_4341fc;
        case 0x434200u: goto label_434200;
        case 0x434204u: goto label_434204;
        case 0x434208u: goto label_434208;
        case 0x43420cu: goto label_43420c;
        case 0x434210u: goto label_434210;
        case 0x434214u: goto label_434214;
        case 0x434218u: goto label_434218;
        case 0x43421cu: goto label_43421c;
        case 0x434220u: goto label_434220;
        case 0x434224u: goto label_434224;
        case 0x434228u: goto label_434228;
        case 0x43422cu: goto label_43422c;
        case 0x434230u: goto label_434230;
        case 0x434234u: goto label_434234;
        case 0x434238u: goto label_434238;
        case 0x43423cu: goto label_43423c;
        case 0x434240u: goto label_434240;
        case 0x434244u: goto label_434244;
        case 0x434248u: goto label_434248;
        case 0x43424cu: goto label_43424c;
        case 0x434250u: goto label_434250;
        case 0x434254u: goto label_434254;
        case 0x434258u: goto label_434258;
        case 0x43425cu: goto label_43425c;
        case 0x434260u: goto label_434260;
        case 0x434264u: goto label_434264;
        case 0x434268u: goto label_434268;
        case 0x43426cu: goto label_43426c;
        case 0x434270u: goto label_434270;
        case 0x434274u: goto label_434274;
        case 0x434278u: goto label_434278;
        case 0x43427cu: goto label_43427c;
        case 0x434280u: goto label_434280;
        case 0x434284u: goto label_434284;
        case 0x434288u: goto label_434288;
        case 0x43428cu: goto label_43428c;
        case 0x434290u: goto label_434290;
        case 0x434294u: goto label_434294;
        case 0x434298u: goto label_434298;
        case 0x43429cu: goto label_43429c;
        case 0x4342a0u: goto label_4342a0;
        case 0x4342a4u: goto label_4342a4;
        case 0x4342a8u: goto label_4342a8;
        case 0x4342acu: goto label_4342ac;
        case 0x4342b0u: goto label_4342b0;
        case 0x4342b4u: goto label_4342b4;
        case 0x4342b8u: goto label_4342b8;
        case 0x4342bcu: goto label_4342bc;
        case 0x4342c0u: goto label_4342c0;
        case 0x4342c4u: goto label_4342c4;
        case 0x4342c8u: goto label_4342c8;
        case 0x4342ccu: goto label_4342cc;
        case 0x4342d0u: goto label_4342d0;
        case 0x4342d4u: goto label_4342d4;
        case 0x4342d8u: goto label_4342d8;
        case 0x4342dcu: goto label_4342dc;
        case 0x4342e0u: goto label_4342e0;
        case 0x4342e4u: goto label_4342e4;
        case 0x4342e8u: goto label_4342e8;
        case 0x4342ecu: goto label_4342ec;
        case 0x4342f0u: goto label_4342f0;
        case 0x4342f4u: goto label_4342f4;
        case 0x4342f8u: goto label_4342f8;
        case 0x4342fcu: goto label_4342fc;
        case 0x434300u: goto label_434300;
        case 0x434304u: goto label_434304;
        case 0x434308u: goto label_434308;
        case 0x43430cu: goto label_43430c;
        case 0x434310u: goto label_434310;
        case 0x434314u: goto label_434314;
        case 0x434318u: goto label_434318;
        case 0x43431cu: goto label_43431c;
        case 0x434320u: goto label_434320;
        case 0x434324u: goto label_434324;
        case 0x434328u: goto label_434328;
        case 0x43432cu: goto label_43432c;
        case 0x434330u: goto label_434330;
        case 0x434334u: goto label_434334;
        case 0x434338u: goto label_434338;
        case 0x43433cu: goto label_43433c;
        case 0x434340u: goto label_434340;
        case 0x434344u: goto label_434344;
        case 0x434348u: goto label_434348;
        case 0x43434cu: goto label_43434c;
        case 0x434350u: goto label_434350;
        case 0x434354u: goto label_434354;
        case 0x434358u: goto label_434358;
        case 0x43435cu: goto label_43435c;
        case 0x434360u: goto label_434360;
        case 0x434364u: goto label_434364;
        case 0x434368u: goto label_434368;
        case 0x43436cu: goto label_43436c;
        case 0x434370u: goto label_434370;
        case 0x434374u: goto label_434374;
        case 0x434378u: goto label_434378;
        case 0x43437cu: goto label_43437c;
        case 0x434380u: goto label_434380;
        case 0x434384u: goto label_434384;
        case 0x434388u: goto label_434388;
        case 0x43438cu: goto label_43438c;
        case 0x434390u: goto label_434390;
        case 0x434394u: goto label_434394;
        case 0x434398u: goto label_434398;
        case 0x43439cu: goto label_43439c;
        case 0x4343a0u: goto label_4343a0;
        case 0x4343a4u: goto label_4343a4;
        case 0x4343a8u: goto label_4343a8;
        case 0x4343acu: goto label_4343ac;
        case 0x4343b0u: goto label_4343b0;
        case 0x4343b4u: goto label_4343b4;
        case 0x4343b8u: goto label_4343b8;
        case 0x4343bcu: goto label_4343bc;
        case 0x4343c0u: goto label_4343c0;
        case 0x4343c4u: goto label_4343c4;
        case 0x4343c8u: goto label_4343c8;
        case 0x4343ccu: goto label_4343cc;
        case 0x4343d0u: goto label_4343d0;
        case 0x4343d4u: goto label_4343d4;
        case 0x4343d8u: goto label_4343d8;
        case 0x4343dcu: goto label_4343dc;
        case 0x4343e0u: goto label_4343e0;
        case 0x4343e4u: goto label_4343e4;
        case 0x4343e8u: goto label_4343e8;
        case 0x4343ecu: goto label_4343ec;
        case 0x4343f0u: goto label_4343f0;
        case 0x4343f4u: goto label_4343f4;
        case 0x4343f8u: goto label_4343f8;
        case 0x4343fcu: goto label_4343fc;
        case 0x434400u: goto label_434400;
        case 0x434404u: goto label_434404;
        case 0x434408u: goto label_434408;
        case 0x43440cu: goto label_43440c;
        case 0x434410u: goto label_434410;
        case 0x434414u: goto label_434414;
        case 0x434418u: goto label_434418;
        case 0x43441cu: goto label_43441c;
        case 0x434420u: goto label_434420;
        case 0x434424u: goto label_434424;
        case 0x434428u: goto label_434428;
        case 0x43442cu: goto label_43442c;
        case 0x434430u: goto label_434430;
        case 0x434434u: goto label_434434;
        case 0x434438u: goto label_434438;
        case 0x43443cu: goto label_43443c;
        case 0x434440u: goto label_434440;
        case 0x434444u: goto label_434444;
        case 0x434448u: goto label_434448;
        case 0x43444cu: goto label_43444c;
        case 0x434450u: goto label_434450;
        case 0x434454u: goto label_434454;
        case 0x434458u: goto label_434458;
        case 0x43445cu: goto label_43445c;
        case 0x434460u: goto label_434460;
        case 0x434464u: goto label_434464;
        case 0x434468u: goto label_434468;
        case 0x43446cu: goto label_43446c;
        case 0x434470u: goto label_434470;
        case 0x434474u: goto label_434474;
        case 0x434478u: goto label_434478;
        case 0x43447cu: goto label_43447c;
        case 0x434480u: goto label_434480;
        case 0x434484u: goto label_434484;
        case 0x434488u: goto label_434488;
        case 0x43448cu: goto label_43448c;
        case 0x434490u: goto label_434490;
        case 0x434494u: goto label_434494;
        case 0x434498u: goto label_434498;
        case 0x43449cu: goto label_43449c;
        case 0x4344a0u: goto label_4344a0;
        case 0x4344a4u: goto label_4344a4;
        case 0x4344a8u: goto label_4344a8;
        case 0x4344acu: goto label_4344ac;
        case 0x4344b0u: goto label_4344b0;
        case 0x4344b4u: goto label_4344b4;
        case 0x4344b8u: goto label_4344b8;
        case 0x4344bcu: goto label_4344bc;
        case 0x4344c0u: goto label_4344c0;
        case 0x4344c4u: goto label_4344c4;
        case 0x4344c8u: goto label_4344c8;
        case 0x4344ccu: goto label_4344cc;
        case 0x4344d0u: goto label_4344d0;
        case 0x4344d4u: goto label_4344d4;
        case 0x4344d8u: goto label_4344d8;
        case 0x4344dcu: goto label_4344dc;
        case 0x4344e0u: goto label_4344e0;
        case 0x4344e4u: goto label_4344e4;
        case 0x4344e8u: goto label_4344e8;
        case 0x4344ecu: goto label_4344ec;
        case 0x4344f0u: goto label_4344f0;
        case 0x4344f4u: goto label_4344f4;
        case 0x4344f8u: goto label_4344f8;
        case 0x4344fcu: goto label_4344fc;
        case 0x434500u: goto label_434500;
        case 0x434504u: goto label_434504;
        case 0x434508u: goto label_434508;
        case 0x43450cu: goto label_43450c;
        case 0x434510u: goto label_434510;
        case 0x434514u: goto label_434514;
        case 0x434518u: goto label_434518;
        case 0x43451cu: goto label_43451c;
        case 0x434520u: goto label_434520;
        case 0x434524u: goto label_434524;
        case 0x434528u: goto label_434528;
        case 0x43452cu: goto label_43452c;
        case 0x434530u: goto label_434530;
        case 0x434534u: goto label_434534;
        case 0x434538u: goto label_434538;
        case 0x43453cu: goto label_43453c;
        case 0x434540u: goto label_434540;
        case 0x434544u: goto label_434544;
        case 0x434548u: goto label_434548;
        case 0x43454cu: goto label_43454c;
        case 0x434550u: goto label_434550;
        case 0x434554u: goto label_434554;
        case 0x434558u: goto label_434558;
        case 0x43455cu: goto label_43455c;
        case 0x434560u: goto label_434560;
        case 0x434564u: goto label_434564;
        case 0x434568u: goto label_434568;
        case 0x43456cu: goto label_43456c;
        case 0x434570u: goto label_434570;
        case 0x434574u: goto label_434574;
        case 0x434578u: goto label_434578;
        case 0x43457cu: goto label_43457c;
        case 0x434580u: goto label_434580;
        case 0x434584u: goto label_434584;
        case 0x434588u: goto label_434588;
        case 0x43458cu: goto label_43458c;
        case 0x434590u: goto label_434590;
        case 0x434594u: goto label_434594;
        case 0x434598u: goto label_434598;
        case 0x43459cu: goto label_43459c;
        case 0x4345a0u: goto label_4345a0;
        case 0x4345a4u: goto label_4345a4;
        case 0x4345a8u: goto label_4345a8;
        case 0x4345acu: goto label_4345ac;
        case 0x4345b0u: goto label_4345b0;
        case 0x4345b4u: goto label_4345b4;
        case 0x4345b8u: goto label_4345b8;
        case 0x4345bcu: goto label_4345bc;
        case 0x4345c0u: goto label_4345c0;
        case 0x4345c4u: goto label_4345c4;
        case 0x4345c8u: goto label_4345c8;
        case 0x4345ccu: goto label_4345cc;
        case 0x4345d0u: goto label_4345d0;
        case 0x4345d4u: goto label_4345d4;
        case 0x4345d8u: goto label_4345d8;
        case 0x4345dcu: goto label_4345dc;
        case 0x4345e0u: goto label_4345e0;
        case 0x4345e4u: goto label_4345e4;
        case 0x4345e8u: goto label_4345e8;
        case 0x4345ecu: goto label_4345ec;
        case 0x4345f0u: goto label_4345f0;
        case 0x4345f4u: goto label_4345f4;
        case 0x4345f8u: goto label_4345f8;
        case 0x4345fcu: goto label_4345fc;
        case 0x434600u: goto label_434600;
        case 0x434604u: goto label_434604;
        case 0x434608u: goto label_434608;
        case 0x43460cu: goto label_43460c;
        case 0x434610u: goto label_434610;
        case 0x434614u: goto label_434614;
        case 0x434618u: goto label_434618;
        case 0x43461cu: goto label_43461c;
        case 0x434620u: goto label_434620;
        case 0x434624u: goto label_434624;
        case 0x434628u: goto label_434628;
        case 0x43462cu: goto label_43462c;
        case 0x434630u: goto label_434630;
        case 0x434634u: goto label_434634;
        case 0x434638u: goto label_434638;
        case 0x43463cu: goto label_43463c;
        case 0x434640u: goto label_434640;
        case 0x434644u: goto label_434644;
        case 0x434648u: goto label_434648;
        case 0x43464cu: goto label_43464c;
        case 0x434650u: goto label_434650;
        case 0x434654u: goto label_434654;
        case 0x434658u: goto label_434658;
        case 0x43465cu: goto label_43465c;
        case 0x434660u: goto label_434660;
        case 0x434664u: goto label_434664;
        case 0x434668u: goto label_434668;
        case 0x43466cu: goto label_43466c;
        case 0x434670u: goto label_434670;
        case 0x434674u: goto label_434674;
        case 0x434678u: goto label_434678;
        case 0x43467cu: goto label_43467c;
        case 0x434680u: goto label_434680;
        case 0x434684u: goto label_434684;
        case 0x434688u: goto label_434688;
        case 0x43468cu: goto label_43468c;
        case 0x434690u: goto label_434690;
        case 0x434694u: goto label_434694;
        case 0x434698u: goto label_434698;
        case 0x43469cu: goto label_43469c;
        case 0x4346a0u: goto label_4346a0;
        case 0x4346a4u: goto label_4346a4;
        case 0x4346a8u: goto label_4346a8;
        case 0x4346acu: goto label_4346ac;
        case 0x4346b0u: goto label_4346b0;
        case 0x4346b4u: goto label_4346b4;
        case 0x4346b8u: goto label_4346b8;
        case 0x4346bcu: goto label_4346bc;
        case 0x4346c0u: goto label_4346c0;
        case 0x4346c4u: goto label_4346c4;
        case 0x4346c8u: goto label_4346c8;
        case 0x4346ccu: goto label_4346cc;
        case 0x4346d0u: goto label_4346d0;
        case 0x4346d4u: goto label_4346d4;
        case 0x4346d8u: goto label_4346d8;
        case 0x4346dcu: goto label_4346dc;
        case 0x4346e0u: goto label_4346e0;
        case 0x4346e4u: goto label_4346e4;
        case 0x4346e8u: goto label_4346e8;
        case 0x4346ecu: goto label_4346ec;
        case 0x4346f0u: goto label_4346f0;
        case 0x4346f4u: goto label_4346f4;
        case 0x4346f8u: goto label_4346f8;
        case 0x4346fcu: goto label_4346fc;
        case 0x434700u: goto label_434700;
        case 0x434704u: goto label_434704;
        case 0x434708u: goto label_434708;
        case 0x43470cu: goto label_43470c;
        case 0x434710u: goto label_434710;
        case 0x434714u: goto label_434714;
        case 0x434718u: goto label_434718;
        case 0x43471cu: goto label_43471c;
        case 0x434720u: goto label_434720;
        case 0x434724u: goto label_434724;
        case 0x434728u: goto label_434728;
        case 0x43472cu: goto label_43472c;
        case 0x434730u: goto label_434730;
        case 0x434734u: goto label_434734;
        case 0x434738u: goto label_434738;
        case 0x43473cu: goto label_43473c;
        case 0x434740u: goto label_434740;
        case 0x434744u: goto label_434744;
        case 0x434748u: goto label_434748;
        case 0x43474cu: goto label_43474c;
        case 0x434750u: goto label_434750;
        case 0x434754u: goto label_434754;
        case 0x434758u: goto label_434758;
        case 0x43475cu: goto label_43475c;
        case 0x434760u: goto label_434760;
        case 0x434764u: goto label_434764;
        case 0x434768u: goto label_434768;
        case 0x43476cu: goto label_43476c;
        case 0x434770u: goto label_434770;
        case 0x434774u: goto label_434774;
        case 0x434778u: goto label_434778;
        case 0x43477cu: goto label_43477c;
        case 0x434780u: goto label_434780;
        case 0x434784u: goto label_434784;
        case 0x434788u: goto label_434788;
        case 0x43478cu: goto label_43478c;
        case 0x434790u: goto label_434790;
        case 0x434794u: goto label_434794;
        case 0x434798u: goto label_434798;
        case 0x43479cu: goto label_43479c;
        case 0x4347a0u: goto label_4347a0;
        case 0x4347a4u: goto label_4347a4;
        case 0x4347a8u: goto label_4347a8;
        case 0x4347acu: goto label_4347ac;
        case 0x4347b0u: goto label_4347b0;
        case 0x4347b4u: goto label_4347b4;
        case 0x4347b8u: goto label_4347b8;
        case 0x4347bcu: goto label_4347bc;
        case 0x4347c0u: goto label_4347c0;
        case 0x4347c4u: goto label_4347c4;
        case 0x4347c8u: goto label_4347c8;
        case 0x4347ccu: goto label_4347cc;
        case 0x4347d0u: goto label_4347d0;
        case 0x4347d4u: goto label_4347d4;
        case 0x4347d8u: goto label_4347d8;
        case 0x4347dcu: goto label_4347dc;
        case 0x4347e0u: goto label_4347e0;
        case 0x4347e4u: goto label_4347e4;
        case 0x4347e8u: goto label_4347e8;
        case 0x4347ecu: goto label_4347ec;
        case 0x4347f0u: goto label_4347f0;
        case 0x4347f4u: goto label_4347f4;
        case 0x4347f8u: goto label_4347f8;
        case 0x4347fcu: goto label_4347fc;
        case 0x434800u: goto label_434800;
        case 0x434804u: goto label_434804;
        case 0x434808u: goto label_434808;
        case 0x43480cu: goto label_43480c;
        case 0x434810u: goto label_434810;
        case 0x434814u: goto label_434814;
        case 0x434818u: goto label_434818;
        case 0x43481cu: goto label_43481c;
        case 0x434820u: goto label_434820;
        case 0x434824u: goto label_434824;
        case 0x434828u: goto label_434828;
        case 0x43482cu: goto label_43482c;
        case 0x434830u: goto label_434830;
        case 0x434834u: goto label_434834;
        case 0x434838u: goto label_434838;
        case 0x43483cu: goto label_43483c;
        case 0x434840u: goto label_434840;
        case 0x434844u: goto label_434844;
        case 0x434848u: goto label_434848;
        case 0x43484cu: goto label_43484c;
        case 0x434850u: goto label_434850;
        case 0x434854u: goto label_434854;
        case 0x434858u: goto label_434858;
        case 0x43485cu: goto label_43485c;
        case 0x434860u: goto label_434860;
        case 0x434864u: goto label_434864;
        case 0x434868u: goto label_434868;
        case 0x43486cu: goto label_43486c;
        case 0x434870u: goto label_434870;
        case 0x434874u: goto label_434874;
        case 0x434878u: goto label_434878;
        case 0x43487cu: goto label_43487c;
        case 0x434880u: goto label_434880;
        case 0x434884u: goto label_434884;
        case 0x434888u: goto label_434888;
        case 0x43488cu: goto label_43488c;
        case 0x434890u: goto label_434890;
        case 0x434894u: goto label_434894;
        case 0x434898u: goto label_434898;
        case 0x43489cu: goto label_43489c;
        case 0x4348a0u: goto label_4348a0;
        case 0x4348a4u: goto label_4348a4;
        case 0x4348a8u: goto label_4348a8;
        case 0x4348acu: goto label_4348ac;
        case 0x4348b0u: goto label_4348b0;
        case 0x4348b4u: goto label_4348b4;
        case 0x4348b8u: goto label_4348b8;
        case 0x4348bcu: goto label_4348bc;
        case 0x4348c0u: goto label_4348c0;
        case 0x4348c4u: goto label_4348c4;
        case 0x4348c8u: goto label_4348c8;
        case 0x4348ccu: goto label_4348cc;
        case 0x4348d0u: goto label_4348d0;
        case 0x4348d4u: goto label_4348d4;
        case 0x4348d8u: goto label_4348d8;
        case 0x4348dcu: goto label_4348dc;
        case 0x4348e0u: goto label_4348e0;
        case 0x4348e4u: goto label_4348e4;
        case 0x4348e8u: goto label_4348e8;
        case 0x4348ecu: goto label_4348ec;
        case 0x4348f0u: goto label_4348f0;
        case 0x4348f4u: goto label_4348f4;
        case 0x4348f8u: goto label_4348f8;
        case 0x4348fcu: goto label_4348fc;
        case 0x434900u: goto label_434900;
        case 0x434904u: goto label_434904;
        case 0x434908u: goto label_434908;
        case 0x43490cu: goto label_43490c;
        case 0x434910u: goto label_434910;
        case 0x434914u: goto label_434914;
        case 0x434918u: goto label_434918;
        case 0x43491cu: goto label_43491c;
        case 0x434920u: goto label_434920;
        case 0x434924u: goto label_434924;
        case 0x434928u: goto label_434928;
        case 0x43492cu: goto label_43492c;
        case 0x434930u: goto label_434930;
        case 0x434934u: goto label_434934;
        case 0x434938u: goto label_434938;
        case 0x43493cu: goto label_43493c;
        case 0x434940u: goto label_434940;
        case 0x434944u: goto label_434944;
        case 0x434948u: goto label_434948;
        case 0x43494cu: goto label_43494c;
        case 0x434950u: goto label_434950;
        case 0x434954u: goto label_434954;
        case 0x434958u: goto label_434958;
        case 0x43495cu: goto label_43495c;
        case 0x434960u: goto label_434960;
        case 0x434964u: goto label_434964;
        case 0x434968u: goto label_434968;
        case 0x43496cu: goto label_43496c;
        case 0x434970u: goto label_434970;
        case 0x434974u: goto label_434974;
        case 0x434978u: goto label_434978;
        case 0x43497cu: goto label_43497c;
        case 0x434980u: goto label_434980;
        case 0x434984u: goto label_434984;
        case 0x434988u: goto label_434988;
        case 0x43498cu: goto label_43498c;
        case 0x434990u: goto label_434990;
        case 0x434994u: goto label_434994;
        case 0x434998u: goto label_434998;
        case 0x43499cu: goto label_43499c;
        case 0x4349a0u: goto label_4349a0;
        case 0x4349a4u: goto label_4349a4;
        case 0x4349a8u: goto label_4349a8;
        case 0x4349acu: goto label_4349ac;
        case 0x4349b0u: goto label_4349b0;
        case 0x4349b4u: goto label_4349b4;
        default: break;
    }

    ctx->pc = 0x433fd8u;

label_433fd8:
    // 0x433fd8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x433fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_433fdc:
    // 0x433fdc: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x433fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_433fe0:
    // 0x433fe0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x433fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_433fe4:
    // 0x433fe4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x433fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_433fe8:
    // 0x433fe8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x433fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_433fec:
    // 0x433fec: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x433fecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_433ff0:
    // 0x433ff0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x433ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_433ff4:
    // 0x433ff4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x433ff4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_433ff8:
    // 0x433ff8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x433ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_433ffc:
    // 0x433ffc: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x433ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_434000:
    // 0x434000: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x434000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_434004:
    // 0x434004: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x434004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_434008:
    // 0x434008: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x434008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_43400c:
    // 0x43400c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x43400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_434010:
    // 0x434010: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x434010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_434014:
    // 0x434014: 0x32c20007  andi        $v0, $s6, 0x7
    ctx->pc = 0x434014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
label_434018:
    // 0x434018: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_43401c:
    if (ctx->pc == 0x43401Cu) {
        ctx->pc = 0x43401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434018u;
        // 0x43401c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434020u;
        goto label_434020;
    }
    ctx->pc = 0x434018u;
    {
        const bool branch_taken_0x434018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434018u;
        // 0x43401c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434018) {
            ctx->pc = 0x434034u;
            goto label_434034;
        }
    }
    ctx->pc = 0x434020u;
label_434020:
    // 0x434020: 0x32420007  andi        $v0, $s2, 0x7
    ctx->pc = 0x434020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
label_434024:
    // 0x434024: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_434028:
    if (ctx->pc == 0x434028u) {
        ctx->pc = 0x434028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434024u;
        // 0x434028: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43402Cu;
        goto label_43402c;
    }
    ctx->pc = 0x434024u;
    {
        const bool branch_taken_0x434024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x434024) {
            ctx->pc = 0x434028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434024u;
            // 0x434028: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434034u;
            goto label_434034;
        }
    }
    ctx->pc = 0x43402Cu;
label_43402c:
    // 0x43402c: 0x3a420008  xori        $v0, $s2, 0x8
    ctx->pc = 0x43402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
label_434030:
    // 0x434030: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x434030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_434034:
    // 0x434034: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x434034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_434038:
    // 0x434038: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x434038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_43403c:
    // 0x43403c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x43403cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_434040:
    // 0x434040: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_434044:
    if (ctx->pc == 0x434044u) {
        ctx->pc = 0x434044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434040u;
        // 0x434044: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434048u;
        goto label_434048;
    }
    ctx->pc = 0x434040u;
    {
        const bool branch_taken_0x434040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434040u;
        // 0x434044: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434040) {
            ctx->pc = 0x434140u;
            goto label_434140;
        }
    }
    ctx->pc = 0x434048u;
label_434048:
    // 0x434048: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x434048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_43404c:
    // 0x43404c: 0x2d28021  addu        $s0, $s6, $s2
    ctx->pc = 0x43404cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_434050:
    // 0x434050: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x434050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_434054:
    // 0x434054: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x434054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_434058:
    // 0x434058: 0x1040024a  beqz        $v0, . + 4 + (0x24A << 2)
label_43405c:
    if (ctx->pc == 0x43405Cu) {
        ctx->pc = 0x43405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434058u;
        // 0x43405c: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434060u;
        goto label_434060;
    }
    ctx->pc = 0x434058u;
    {
        const bool branch_taken_0x434058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434058u;
        // 0x43405c: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434058) {
            ctx->pc = 0x434984u;
            goto label_434984;
        }
    }
    ctx->pc = 0x434060u;
label_434060:
    // 0x434060: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x434060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_434064:
    // 0x434064: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x434064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_434068:
    // 0x434068: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x434068u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
label_43406c:
    // 0x43406c: 0x12a03c  dsll32      $s4, $s2, 0
    ctx->pc = 0x43406cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) << (32 + 0));
label_434070:
    // 0x434070: 0x28750002  slti        $s5, $v1, 0x2
    ctx->pc = 0x434070u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_434074:
    // 0x434074: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x434074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_434078:
    // 0x434078: 0x10000022  b           . + 4 + (0x22 << 2)
label_43407c:
    if (ctx->pc == 0x43407Cu) {
        ctx->pc = 0x43407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434078u;
        // 0x43407c: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434080u;
        goto label_434080;
    }
    ctx->pc = 0x434078u;
    {
        const bool branch_taken_0x434078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434078u;
        // 0x43407c: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434078) {
            ctx->pc = 0x434104u;
            goto label_434104;
        }
    }
    ctx->pc = 0x434080u;
label_434080:
    // 0x434080: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_434084:
    if (ctx->pc == 0x434084u) {
        ctx->pc = 0x434088u;
        goto label_434088;
    }
    ctx->pc = 0x434080u;
    {
        const bool branch_taken_0x434080 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x434080) {
            ctx->pc = 0x43409Cu;
            goto label_43409c;
        }
    }
    ctx->pc = 0x434088u;
label_434088:
    // 0x434088: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x434088u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_43408c:
    // 0x43408c: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x43408cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_434090:
    // 0x434090: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x434090u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_434094:
    // 0x434094: 0x1000001a  b           . + 4 + (0x1A << 2)
label_434098:
    if (ctx->pc == 0x434098u) {
        ctx->pc = 0x434098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434094u;
        // 0x434098: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43409Cu;
        goto label_43409c;
    }
    ctx->pc = 0x434094u;
    {
        const bool branch_taken_0x434094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434094u;
        // 0x434098: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434094) {
            ctx->pc = 0x434100u;
            goto label_434100;
        }
    }
    ctx->pc = 0x43409Cu;
label_43409c:
    // 0x43409c: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_4340a0:
    if (ctx->pc == 0x4340A0u) {
        ctx->pc = 0x4340A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43409Cu;
        // 0x4340a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4340A4u;
        goto label_4340a4;
    }
    ctx->pc = 0x43409Cu;
    {
        const bool branch_taken_0x43409c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4340A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43409Cu;
        // 0x4340a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43409c) {
            ctx->pc = 0x4340D8u;
            goto label_4340d8;
        }
    }
    ctx->pc = 0x4340A4u;
label_4340a4:
    // 0x4340a4: 0x1e283e  dsrl32      $a1, $fp, 0
    ctx->pc = 0x4340a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) >> (32 + 0));
label_4340a8:
    // 0x4340a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4340a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4340ac:
    // 0x4340ac: 0x0  nop
    ctx->pc = 0x4340acu;
    // NOP
label_4340b0:
    // 0x4340b0: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x4340b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_4340b4:
    // 0x4340b4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x4340b4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_4340b8:
    // 0x4340b8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x4340b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_4340bc:
    // 0x4340bc: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x4340bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_4340c0:
    // 0x4340c0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x4340c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_4340c4:
    // 0x4340c4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4340c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_4340c8:
    // 0x4340c8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_4340cc:
    if (ctx->pc == 0x4340CCu) {
        ctx->pc = 0x4340CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4340C8u;
        // 0x4340cc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4340D0u;
        goto label_4340d0;
    }
    ctx->pc = 0x4340C8u;
    {
        const bool branch_taken_0x4340c8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x4340CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4340C8u;
        // 0x4340cc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4340c8) {
            ctx->pc = 0x4340B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4340b0;
        }
    }
    ctx->pc = 0x4340D0u;
label_4340d0:
    // 0x4340d0: 0x1000000c  b           . + 4 + (0xC << 2)
label_4340d4:
    if (ctx->pc == 0x4340D4u) {
        ctx->pc = 0x4340D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4340D0u;
        // 0x4340d4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4340D8u;
        goto label_4340d8;
    }
    ctx->pc = 0x4340D0u;
    {
        const bool branch_taken_0x4340d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4340D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4340D0u;
        // 0x4340d4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4340d0) {
            ctx->pc = 0x434104u;
            goto label_434104;
        }
    }
    ctx->pc = 0x4340D8u;
label_4340d8:
    // 0x4340d8: 0x14283e  dsrl32      $a1, $s4, 0
    ctx->pc = 0x4340d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) >> (32 + 0));
label_4340dc:
    // 0x4340dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4340dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4340e0:
    // 0x4340e0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x4340e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4340e4:
    // 0x4340e4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x4340e4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_4340e8:
    // 0x4340e8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4340e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4340ec:
    // 0x4340ec: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4340ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4340f0:
    // 0x4340f0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4340f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_4340f4:
    // 0x4340f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4340f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4340f8:
    // 0x4340f8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_4340fc:
    if (ctx->pc == 0x4340FCu) {
        ctx->pc = 0x4340FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4340F8u;
        // 0x4340fc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434100u;
        goto label_434100;
    }
    ctx->pc = 0x4340F8u;
    {
        const bool branch_taken_0x4340f8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x4340FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4340F8u;
        // 0x4340fc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4340f8) {
            ctx->pc = 0x4340E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4340e0;
        }
    }
    ctx->pc = 0x434100u;
label_434100:
    // 0x434100: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x434100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_434104:
    // 0x434104: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x434104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_434108:
    // 0x434108: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_43410c:
    if (ctx->pc == 0x43410Cu) {
        ctx->pc = 0x43410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434108u;
        // 0x43410c: 0x2328023  subu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434110u;
        goto label_434110;
    }
    ctx->pc = 0x434108u;
    {
        const bool branch_taken_0x434108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434108u;
        // 0x43410c: 0x2328023  subu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434108) {
            ctx->pc = 0x434124u;
            goto label_434124;
        }
    }
    ctx->pc = 0x434110u;
label_434110:
    // 0x434110: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x434110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_434114:
    // 0x434114: 0x2e0f809  jalr        $s7
label_434118:
    if (ctx->pc == 0x434118u) {
        ctx->pc = 0x434118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434114u;
        // 0x434118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43411Cu;
        goto label_43411c;
    }
    ctx->pc = 0x434114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x43411Cu);
        ctx->pc = 0x434118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434114u;
        // 0x434118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434114u, 0x43411Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43411Cu;
label_43411c:
    // 0x43411c: 0x5c40ffd8  bgtzl       $v0, . + 4 + (-0x28 << 2)
label_434120:
    if (ctx->pc == 0x434120u) {
        ctx->pc = 0x434120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43411Cu;
        // 0x434120: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434124u;
        goto label_434124;
    }
    ctx->pc = 0x43411Cu;
    {
        const bool branch_taken_0x43411c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x43411c) {
            ctx->pc = 0x434120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43411Cu;
            // 0x434120: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434080;
        }
    }
    ctx->pc = 0x434124u;
label_434124:
    // 0x434124: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x434124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_434128:
    // 0x434128: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x434128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43412c:
    // 0x43412c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x43412cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_434130:
    // 0x434130: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_434134:
    if (ctx->pc == 0x434134u) {
        ctx->pc = 0x434134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434130u;
        // 0x434134: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434138u;
        goto label_434138;
    }
    ctx->pc = 0x434130u;
    {
        const bool branch_taken_0x434130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434130u;
        // 0x434134: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434130) {
            ctx->pc = 0x434078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434078;
        }
    }
    ctx->pc = 0x434138u;
label_434138:
    // 0x434138: 0x10000213  b           . + 4 + (0x213 << 2)
label_43413c:
    if (ctx->pc == 0x43413Cu) {
        ctx->pc = 0x43413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434138u;
        // 0x43413c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434140u;
        goto label_434140;
    }
    ctx->pc = 0x434138u;
    {
        const bool branch_taken_0x434138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434138u;
        // 0x43413c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434138) {
            ctx->pc = 0x434988u;
            goto label_434988;
        }
    }
    ctx->pc = 0x434140u;
label_434140:
    // 0x434140: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x434140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_434144:
    // 0x434144: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x434144u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_434148:
    // 0x434148: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x434148u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_43414c:
    // 0x43414c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x43414cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_434150:
    // 0x434150: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x434150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_434154:
    // 0x434154: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x434154u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_434158:
    // 0x434158: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
label_43415c:
    if (ctx->pc == 0x43415Cu) {
        ctx->pc = 0x43415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434158u;
        // 0x43415c: 0x968021  addu        $s0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434160u;
        goto label_434160;
    }
    ctx->pc = 0x434158u;
    {
        const bool branch_taken_0x434158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434158u;
        // 0x43415c: 0x968021  addu        $s0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434158) {
            ctx->pc = 0x434388u;
            goto label_434388;
        }
    }
    ctx->pc = 0x434160u;
label_434160:
    // 0x434160: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x434160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_434164:
    // 0x434164: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x434164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_434168:
    // 0x434168: 0x2c620029  sltiu       $v0, $v1, 0x29
    ctx->pc = 0x434168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_43416c:
    // 0x43416c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x43416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_434170:
    // 0x434170: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x434170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_434174:
    // 0x434174: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
label_434178:
    if (ctx->pc == 0x434178u) {
        ctx->pc = 0x434178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434174u;
        // 0x434178: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43417Cu;
        goto label_43417c;
    }
    ctx->pc = 0x434174u;
    {
        const bool branch_taken_0x434174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434174u;
        // 0x434178: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434174) {
            ctx->pc = 0x434310u;
            goto label_434310;
        }
    }
    ctx->pc = 0x43417Cu;
label_43417c:
    // 0x43417c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x43417cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_434180:
    // 0x434180: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x434180u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_434184:
    // 0x434184: 0x52f018  mult        $fp, $v0, $s2
    ctx->pc = 0x434184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_434188:
    // 0x434188: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x434188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_43418c:
    // 0x43418c: 0x2de8821  addu        $s1, $s6, $fp
    ctx->pc = 0x43418cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_434190:
    // 0x434190: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x434190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_434194:
    // 0x434194: 0x569821  addu        $s3, $v0, $s6
    ctx->pc = 0x434194u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_434198:
    // 0x434198: 0x2e0f809  jalr        $s7
label_43419c:
    if (ctx->pc == 0x43419Cu) {
        ctx->pc = 0x43419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434198u;
        // 0x43419c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4341A0u;
        goto label_4341a0;
    }
    ctx->pc = 0x434198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4341A0u);
        ctx->pc = 0x43419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434198u;
        // 0x43419c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434198u, 0x4341A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4341A0u;
label_4341a0:
    // 0x4341a0: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_4341a4:
    if (ctx->pc == 0x4341A4u) {
        ctx->pc = 0x4341A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341A0u;
        // 0x4341a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4341A8u;
        goto label_4341a8;
    }
    ctx->pc = 0x4341A0u;
    {
        const bool branch_taken_0x4341a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4341A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341A0u;
        // 0x4341a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4341a0) {
            ctx->pc = 0x4341D4u;
            goto label_4341d4;
        }
    }
    ctx->pc = 0x4341A8u;
label_4341a8:
    // 0x4341a8: 0x2e0f809  jalr        $s7
label_4341ac:
    if (ctx->pc == 0x4341ACu) {
        ctx->pc = 0x4341ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341A8u;
        // 0x4341ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4341B0u;
        goto label_4341b0;
    }
    ctx->pc = 0x4341A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4341B0u);
        ctx->pc = 0x4341ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341A8u;
        // 0x4341ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4341A8u, 0x4341B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4341B0u;
label_4341b0:
    // 0x4341b0: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_4341b4:
    if (ctx->pc == 0x4341B4u) {
        ctx->pc = 0x4341B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341B0u;
        // 0x4341b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4341B8u;
        goto label_4341b8;
    }
    ctx->pc = 0x4341B0u;
    {
        const bool branch_taken_0x4341b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4341B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341B0u;
        // 0x4341b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4341b0) {
            ctx->pc = 0x434204u;
            goto label_434204;
        }
    }
    ctx->pc = 0x4341B8u;
label_4341b8:
    // 0x4341b8: 0x2e0f809  jalr        $s7
label_4341bc:
    if (ctx->pc == 0x4341BCu) {
        ctx->pc = 0x4341BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341B8u;
        // 0x4341bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4341C0u;
        goto label_4341c0;
    }
    ctx->pc = 0x4341B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4341C0u);
        ctx->pc = 0x4341BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341B8u;
        // 0x4341bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4341B8u, 0x4341C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4341C0u;
label_4341c0:
    // 0x4341c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4341c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4341c4:
    // 0x4341c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4341c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4341c8:
    // 0x4341c8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x4341c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4341cc:
    // 0x4341cc: 0x1000000e  b           . + 4 + (0xE << 2)
label_4341d0:
    if (ctx->pc == 0x4341D0u) {
        ctx->pc = 0x4341D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341CCu;
        // 0x4341d0: 0x2c3200b  movn        $a0, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4341D4u;
        goto label_4341d4;
    }
    ctx->pc = 0x4341CCu;
    {
        const bool branch_taken_0x4341cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4341D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341CCu;
        // 0x4341d0: 0x2c3200b  movn        $a0, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4341cc) {
            ctx->pc = 0x434208u;
            goto label_434208;
        }
    }
    ctx->pc = 0x4341D4u;
label_4341d4:
    // 0x4341d4: 0x2e0f809  jalr        $s7
label_4341d8:
    if (ctx->pc == 0x4341D8u) {
        ctx->pc = 0x4341D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341D4u;
        // 0x4341d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4341DCu;
        goto label_4341dc;
    }
    ctx->pc = 0x4341D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4341DCu);
        ctx->pc = 0x4341D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341D4u;
        // 0x4341d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4341D4u, 0x4341DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4341DCu;
label_4341dc:
    // 0x4341dc: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_4341e0:
    if (ctx->pc == 0x4341E0u) {
        ctx->pc = 0x4341E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341DCu;
        // 0x4341e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4341E4u;
        goto label_4341e4;
    }
    ctx->pc = 0x4341DCu;
    {
        const bool branch_taken_0x4341dc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4341dc) {
            ctx->pc = 0x4341E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4341DCu;
            // 0x4341e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434208u;
            goto label_434208;
        }
    }
    ctx->pc = 0x4341E4u;
label_4341e4:
    // 0x4341e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4341e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4341e8:
    // 0x4341e8: 0x2e0f809  jalr        $s7
label_4341ec:
    if (ctx->pc == 0x4341ECu) {
        ctx->pc = 0x4341ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341E8u;
        // 0x4341ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4341F0u;
        goto label_4341f0;
    }
    ctx->pc = 0x4341E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4341F0u);
        ctx->pc = 0x4341ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341E8u;
        // 0x4341ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4341E8u, 0x4341F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4341F0u;
label_4341f0:
    // 0x4341f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4341f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4341f4:
    // 0x4341f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4341f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4341f8:
    // 0x4341f8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x4341f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4341fc:
    // 0x4341fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_434200:
    if (ctx->pc == 0x434200u) {
        ctx->pc = 0x434200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341FCu;
        // 0x434200: 0x263200b  movn        $a0, $s3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434204u;
        goto label_434204;
    }
    ctx->pc = 0x4341FCu;
    {
        const bool branch_taken_0x4341fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4341FCu;
        // 0x434200: 0x263200b  movn        $a0, $s3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4341fc) {
            ctx->pc = 0x434208u;
            goto label_434208;
        }
    }
    ctx->pc = 0x434204u;
label_434204:
    // 0x434204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x434204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_434208:
    // 0x434208: 0x21ea023  subu        $s4, $s0, $fp
    ctx->pc = 0x434208u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
label_43420c:
    // 0x43420c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43420cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_434210:
    // 0x434210: 0x21e9821  addu        $s3, $s0, $fp
    ctx->pc = 0x434210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
label_434214:
    // 0x434214: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x434214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_434218:
    // 0x434218: 0x2e0f809  jalr        $s7
label_43421c:
    if (ctx->pc == 0x43421Cu) {
        ctx->pc = 0x43421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434218u;
        // 0x43421c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434220u;
        goto label_434220;
    }
    ctx->pc = 0x434218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x434220u);
        ctx->pc = 0x43421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434218u;
        // 0x43421c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434218u, 0x434220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x434220u;
label_434220:
    // 0x434220: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_434224:
    if (ctx->pc == 0x434224u) {
        ctx->pc = 0x434224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434220u;
        // 0x434224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434228u;
        goto label_434228;
    }
    ctx->pc = 0x434220u;
    {
        const bool branch_taken_0x434220 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x434224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434220u;
        // 0x434224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434220) {
            ctx->pc = 0x434254u;
            goto label_434254;
        }
    }
    ctx->pc = 0x434228u;
label_434228:
    // 0x434228: 0x2e0f809  jalr        $s7
label_43422c:
    if (ctx->pc == 0x43422Cu) {
        ctx->pc = 0x43422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434228u;
        // 0x43422c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434230u;
        goto label_434230;
    }
    ctx->pc = 0x434228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x434230u);
        ctx->pc = 0x43422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434228u;
        // 0x43422c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434228u, 0x434230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x434230u;
label_434230:
    // 0x434230: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_434234:
    if (ctx->pc == 0x434234u) {
        ctx->pc = 0x434234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434230u;
        // 0x434234: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434238u;
        goto label_434238;
    }
    ctx->pc = 0x434230u;
    {
        const bool branch_taken_0x434230 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x434234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434230u;
        // 0x434234: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434230) {
            ctx->pc = 0x434284u;
            goto label_434284;
        }
    }
    ctx->pc = 0x434238u;
label_434238:
    // 0x434238: 0x2e0f809  jalr        $s7
label_43423c:
    if (ctx->pc == 0x43423Cu) {
        ctx->pc = 0x43423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434238u;
        // 0x43423c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434240u;
        goto label_434240;
    }
    ctx->pc = 0x434238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x434240u);
        ctx->pc = 0x43423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434238u;
        // 0x43423c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434238u, 0x434240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x434240u;
label_434240:
    // 0x434240: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x434240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_434244:
    // 0x434244: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x434244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_434248:
    // 0x434248: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x434248u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_43424c:
    // 0x43424c: 0x1000000e  b           . + 4 + (0xE << 2)
label_434250:
    if (ctx->pc == 0x434250u) {
        ctx->pc = 0x434250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43424Cu;
        // 0x434250: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434254u;
        goto label_434254;
    }
    ctx->pc = 0x43424Cu;
    {
        const bool branch_taken_0x43424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43424Cu;
        // 0x434250: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43424c) {
            ctx->pc = 0x434288u;
            goto label_434288;
        }
    }
    ctx->pc = 0x434254u;
label_434254:
    // 0x434254: 0x2e0f809  jalr        $s7
label_434258:
    if (ctx->pc == 0x434258u) {
        ctx->pc = 0x434258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434254u;
        // 0x434258: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43425Cu;
        goto label_43425c;
    }
    ctx->pc = 0x434254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x43425Cu);
        ctx->pc = 0x434258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434254u;
        // 0x434258: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434254u, 0x43425Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43425Cu;
label_43425c:
    // 0x43425c: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_434260:
    if (ctx->pc == 0x434260u) {
        ctx->pc = 0x434260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43425Cu;
        // 0x434260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434264u;
        goto label_434264;
    }
    ctx->pc = 0x43425Cu;
    {
        const bool branch_taken_0x43425c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x43425c) {
            ctx->pc = 0x434260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43425Cu;
            // 0x434260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434288u;
            goto label_434288;
        }
    }
    ctx->pc = 0x434264u;
label_434264:
    // 0x434264: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x434264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_434268:
    // 0x434268: 0x2e0f809  jalr        $s7
label_43426c:
    if (ctx->pc == 0x43426Cu) {
        ctx->pc = 0x43426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434268u;
        // 0x43426c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434270u;
        goto label_434270;
    }
    ctx->pc = 0x434268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x434270u);
        ctx->pc = 0x43426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434268u;
        // 0x43426c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434268u, 0x434270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x434270u;
label_434270:
    // 0x434270: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x434270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_434274:
    // 0x434274: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x434274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_434278:
    // 0x434278: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x434278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_43427c:
    // 0x43427c: 0x10000002  b           . + 4 + (0x2 << 2)
label_434280:
    if (ctx->pc == 0x434280u) {
        ctx->pc = 0x434280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43427Cu;
        // 0x434280: 0x263200b  movn        $a0, $s3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434284u;
        goto label_434284;
    }
    ctx->pc = 0x43427Cu;
    {
        const bool branch_taken_0x43427c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43427Cu;
        // 0x434280: 0x263200b  movn        $a0, $s3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43427c) {
            ctx->pc = 0x434288u;
            goto label_434288;
        }
    }
    ctx->pc = 0x434284u;
label_434284:
    // 0x434284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x434284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_434288:
    // 0x434288: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x434288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_43428c:
    // 0x43428c: 0x2be9823  subu        $s3, $s5, $fp
    ctx->pc = 0x43428cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
label_434290:
    // 0x434290: 0x2a2a023  subu        $s4, $s5, $v0
    ctx->pc = 0x434290u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_434294:
    // 0x434294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x434294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_434298:
    // 0x434298: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x434298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_43429c:
    // 0x43429c: 0x2e0f809  jalr        $s7
label_4342a0:
    if (ctx->pc == 0x4342A0u) {
        ctx->pc = 0x4342A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43429Cu;
        // 0x4342a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4342A4u;
        goto label_4342a4;
    }
    ctx->pc = 0x43429Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4342A4u);
        ctx->pc = 0x4342A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43429Cu;
        // 0x4342a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43429Cu, 0x4342A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4342A4u;
label_4342a4:
    // 0x4342a4: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_4342a8:
    if (ctx->pc == 0x4342A8u) {
        ctx->pc = 0x4342A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342A4u;
        // 0x4342a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4342ACu;
        goto label_4342ac;
    }
    ctx->pc = 0x4342A4u;
    {
        const bool branch_taken_0x4342a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4342A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342A4u;
        // 0x4342a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4342a4) {
            ctx->pc = 0x4342D8u;
            goto label_4342d8;
        }
    }
    ctx->pc = 0x4342ACu;
label_4342ac:
    // 0x4342ac: 0x2e0f809  jalr        $s7
label_4342b0:
    if (ctx->pc == 0x4342B0u) {
        ctx->pc = 0x4342B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342ACu;
        // 0x4342b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4342B4u;
        goto label_4342b4;
    }
    ctx->pc = 0x4342ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4342B4u);
        ctx->pc = 0x4342B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342ACu;
        // 0x4342b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4342ACu, 0x4342B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4342B4u;
label_4342b4:
    // 0x4342b4: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_4342b8:
    if (ctx->pc == 0x4342B8u) {
        ctx->pc = 0x4342B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342B4u;
        // 0x4342b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4342BCu;
        goto label_4342bc;
    }
    ctx->pc = 0x4342B4u;
    {
        const bool branch_taken_0x4342b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4342B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342B4u;
        // 0x4342b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4342b4) {
            ctx->pc = 0x434308u;
            goto label_434308;
        }
    }
    ctx->pc = 0x4342BCu;
label_4342bc:
    // 0x4342bc: 0x2e0f809  jalr        $s7
label_4342c0:
    if (ctx->pc == 0x4342C0u) {
        ctx->pc = 0x4342C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342BCu;
        // 0x4342c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4342C4u;
        goto label_4342c4;
    }
    ctx->pc = 0x4342BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4342C4u);
        ctx->pc = 0x4342C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342BCu;
        // 0x4342c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4342BCu, 0x4342C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4342C4u;
label_4342c4:
    // 0x4342c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4342c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4342c8:
    // 0x4342c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4342c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4342cc:
    // 0x4342cc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x4342ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4342d0:
    // 0x4342d0: 0x1000000e  b           . + 4 + (0xE << 2)
label_4342d4:
    if (ctx->pc == 0x4342D4u) {
        ctx->pc = 0x4342D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342D0u;
        // 0x4342d4: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4342D8u;
        goto label_4342d8;
    }
    ctx->pc = 0x4342D0u;
    {
        const bool branch_taken_0x4342d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4342D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342D0u;
        // 0x4342d4: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4342d0) {
            ctx->pc = 0x43430Cu;
            goto label_43430c;
        }
    }
    ctx->pc = 0x4342D8u;
label_4342d8:
    // 0x4342d8: 0x2e0f809  jalr        $s7
label_4342dc:
    if (ctx->pc == 0x4342DCu) {
        ctx->pc = 0x4342DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342D8u;
        // 0x4342dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4342E0u;
        goto label_4342e0;
    }
    ctx->pc = 0x4342D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4342E0u);
        ctx->pc = 0x4342DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342D8u;
        // 0x4342dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4342D8u, 0x4342E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4342E0u;
label_4342e0:
    // 0x4342e0: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_4342e4:
    if (ctx->pc == 0x4342E4u) {
        ctx->pc = 0x4342E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342E0u;
        // 0x4342e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4342E8u;
        goto label_4342e8;
    }
    ctx->pc = 0x4342E0u;
    {
        const bool branch_taken_0x4342e0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4342e0) {
            ctx->pc = 0x4342E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4342E0u;
            // 0x4342e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43430Cu;
            goto label_43430c;
        }
    }
    ctx->pc = 0x4342E8u;
label_4342e8:
    // 0x4342e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4342e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4342ec:
    // 0x4342ec: 0x2e0f809  jalr        $s7
label_4342f0:
    if (ctx->pc == 0x4342F0u) {
        ctx->pc = 0x4342F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342ECu;
        // 0x4342f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4342F4u;
        goto label_4342f4;
    }
    ctx->pc = 0x4342ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4342F4u);
        ctx->pc = 0x4342F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4342ECu;
        // 0x4342f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4342ECu, 0x4342F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4342F4u;
label_4342f4:
    // 0x4342f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4342f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4342f8:
    // 0x4342f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4342f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4342fc:
    // 0x4342fc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x4342fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_434300:
    // 0x434300: 0x10000002  b           . + 4 + (0x2 << 2)
label_434304:
    if (ctx->pc == 0x434304u) {
        ctx->pc = 0x434304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434300u;
        // 0x434304: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434308u;
        goto label_434308;
    }
    ctx->pc = 0x434300u;
    {
        const bool branch_taken_0x434300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434300u;
        // 0x434304: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434300) {
            ctx->pc = 0x43430Cu;
            goto label_43430c;
        }
    }
    ctx->pc = 0x434308u;
label_434308:
    // 0x434308: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x434308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43430c:
    // 0x43430c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x43430cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_434310:
    // 0x434310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x434310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_434314:
    // 0x434314: 0x2e0f809  jalr        $s7
label_434318:
    if (ctx->pc == 0x434318u) {
        ctx->pc = 0x434318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434314u;
        // 0x434318: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43431Cu;
        goto label_43431c;
    }
    ctx->pc = 0x434314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x43431Cu);
        ctx->pc = 0x434318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434314u;
        // 0x434318: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434314u, 0x43431Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43431Cu;
label_43431c:
    // 0x43431c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_434320:
    if (ctx->pc == 0x434320u) {
        ctx->pc = 0x434320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43431Cu;
        // 0x434320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434324u;
        goto label_434324;
    }
    ctx->pc = 0x43431Cu;
    {
        const bool branch_taken_0x43431c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x434320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43431Cu;
        // 0x434320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43431c) {
            ctx->pc = 0x434350u;
            goto label_434350;
        }
    }
    ctx->pc = 0x434324u;
label_434324:
    // 0x434324: 0x2e0f809  jalr        $s7
label_434328:
    if (ctx->pc == 0x434328u) {
        ctx->pc = 0x434328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434324u;
        // 0x434328: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43432Cu;
        goto label_43432c;
    }
    ctx->pc = 0x434324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x43432Cu);
        ctx->pc = 0x434328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434324u;
        // 0x434328: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434324u, 0x43432Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43432Cu;
label_43432c:
    // 0x43432c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_434330:
    if (ctx->pc == 0x434330u) {
        ctx->pc = 0x434330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43432Cu;
        // 0x434330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434334u;
        goto label_434334;
    }
    ctx->pc = 0x43432Cu;
    {
        const bool branch_taken_0x43432c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x434330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43432Cu;
        // 0x434330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43432c) {
            ctx->pc = 0x434380u;
            goto label_434380;
        }
    }
    ctx->pc = 0x434334u;
label_434334:
    // 0x434334: 0x2e0f809  jalr        $s7
label_434338:
    if (ctx->pc == 0x434338u) {
        ctx->pc = 0x434338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434334u;
        // 0x434338: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43433Cu;
        goto label_43433c;
    }
    ctx->pc = 0x434334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x43433Cu);
        ctx->pc = 0x434338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434334u;
        // 0x434338: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434334u, 0x43433Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43433Cu;
label_43433c:
    // 0x43433c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_434340:
    // 0x434340: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x434340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_434344:
    // 0x434344: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x434344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_434348:
    // 0x434348: 0x1000000e  b           . + 4 + (0xE << 2)
label_43434c:
    if (ctx->pc == 0x43434Cu) {
        ctx->pc = 0x43434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434348u;
        // 0x43434c: 0x223200b  movn        $a0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434350u;
        goto label_434350;
    }
    ctx->pc = 0x434348u;
    {
        const bool branch_taken_0x434348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434348u;
        // 0x43434c: 0x223200b  movn        $a0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434348) {
            ctx->pc = 0x434384u;
            goto label_434384;
        }
    }
    ctx->pc = 0x434350u;
label_434350:
    // 0x434350: 0x2e0f809  jalr        $s7
label_434354:
    if (ctx->pc == 0x434354u) {
        ctx->pc = 0x434354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434350u;
        // 0x434354: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434358u;
        goto label_434358;
    }
    ctx->pc = 0x434350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x434358u);
        ctx->pc = 0x434354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434350u;
        // 0x434354: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434350u, 0x434358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x434358u;
label_434358:
    // 0x434358: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_43435c:
    if (ctx->pc == 0x43435Cu) {
        ctx->pc = 0x43435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434358u;
        // 0x43435c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434360u;
        goto label_434360;
    }
    ctx->pc = 0x434358u;
    {
        const bool branch_taken_0x434358 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x434358) {
            ctx->pc = 0x43435Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434358u;
            // 0x43435c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434384u;
            goto label_434384;
        }
    }
    ctx->pc = 0x434360u;
label_434360:
    // 0x434360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x434360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_434364:
    // 0x434364: 0x2e0f809  jalr        $s7
label_434368:
    if (ctx->pc == 0x434368u) {
        ctx->pc = 0x434368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434364u;
        // 0x434368: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43436Cu;
        goto label_43436c;
    }
    ctx->pc = 0x434364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x43436Cu);
        ctx->pc = 0x434368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434364u;
        // 0x434368: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434364u, 0x43436Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43436Cu;
label_43436c:
    // 0x43436c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43436cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_434370:
    // 0x434370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x434370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_434374:
    // 0x434374: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x434374u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_434378:
    // 0x434378: 0x10000002  b           . + 4 + (0x2 << 2)
label_43437c:
    if (ctx->pc == 0x43437Cu) {
        ctx->pc = 0x43437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434378u;
        // 0x43437c: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434380u;
        goto label_434380;
    }
    ctx->pc = 0x434378u;
    {
        const bool branch_taken_0x434378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434378u;
        // 0x43437c: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434378) {
            ctx->pc = 0x434384u;
            goto label_434384;
        }
    }
    ctx->pc = 0x434380u;
label_434380:
    // 0x434380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x434380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_434384:
    // 0x434384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x434384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_434388:
    // 0x434388: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x434388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_43438c:
    // 0x43438c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_434390:
    if (ctx->pc == 0x434390u) {
        ctx->pc = 0x434390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43438Cu;
        // 0x434390: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434394u;
        goto label_434394;
    }
    ctx->pc = 0x43438Cu;
    {
        const bool branch_taken_0x43438c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43438Cu;
        // 0x434390: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43438c) {
            ctx->pc = 0x4343B0u;
            goto label_4343b0;
        }
    }
    ctx->pc = 0x434394u;
label_434394:
    // 0x434394: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x434394u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_434398:
    // 0x434398: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x434398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_43439c:
    // 0x43439c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x43439cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_4343a0:
    // 0x4343a0: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x4343a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
label_4343a4:
    // 0x4343a4: 0xfec30000  sd          $v1, 0x0($s6)
    ctx->pc = 0x4343a4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 3));
label_4343a8:
    // 0x4343a8: 0x10000023  b           . + 4 + (0x23 << 2)
label_4343ac:
    if (ctx->pc == 0x4343ACu) {
        ctx->pc = 0x4343ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4343A8u;
        // 0x4343ac: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4343B0u;
        goto label_4343b0;
    }
    ctx->pc = 0x4343A8u;
    {
        const bool branch_taken_0x4343a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4343ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4343A8u;
        // 0x4343ac: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4343a8) {
            ctx->pc = 0x434438u;
            goto label_434438;
        }
    }
    ctx->pc = 0x4343B0u;
label_4343b0:
    // 0x4343b0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x4343b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4343b4:
    // 0x4343b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_4343b8:
    if (ctx->pc == 0x4343B8u) {
        ctx->pc = 0x4343B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4343B4u;
        // 0x4343b8: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4343BCu;
        goto label_4343bc;
    }
    ctx->pc = 0x4343B4u;
    {
        const bool branch_taken_0x4343b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4343B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4343B4u;
        // 0x4343b8: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4343b4) {
            ctx->pc = 0x434400u;
            goto label_434400;
        }
    }
    ctx->pc = 0x4343BCu;
label_4343bc:
    // 0x4343bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4343bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4343c0:
    // 0x4343c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4343c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4343c4:
    // 0x4343c4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4343c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4343c8:
    // 0x4343c8: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x4343c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_4343cc:
    // 0x4343cc: 0x2d21021  addu        $v0, $s6, $s2
    ctx->pc = 0x4343ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_4343d0:
    // 0x4343d0: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4343d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4343d4:
    // 0x4343d4: 0x0  nop
    ctx->pc = 0x4343d4u;
    // NOP
label_4343d8:
    // 0x4343d8: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x4343d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_4343dc:
    // 0x4343dc: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x4343dcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_4343e0:
    // 0x4343e0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x4343e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_4343e4:
    // 0x4343e4: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x4343e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_4343e8:
    // 0x4343e8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x4343e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_4343ec:
    // 0x4343ec: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x4343ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_4343f0:
    // 0x4343f0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_4343f4:
    if (ctx->pc == 0x4343F4u) {
        ctx->pc = 0x4343F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4343F0u;
        // 0x4343f4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4343F8u;
        goto label_4343f8;
    }
    ctx->pc = 0x4343F0u;
    {
        const bool branch_taken_0x4343f0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x4343F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4343F0u;
        // 0x4343f4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4343f0) {
            ctx->pc = 0x4343D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4343d8;
        }
    }
    ctx->pc = 0x4343F8u;
label_4343f8:
    // 0x4343f8: 0x10000010  b           . + 4 + (0x10 << 2)
label_4343fc:
    if (ctx->pc == 0x4343FCu) {
        ctx->pc = 0x4343FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4343F8u;
        // 0x4343fc: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434400u;
        goto label_434400;
    }
    ctx->pc = 0x4343F8u;
    {
        const bool branch_taken_0x4343f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4343FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4343F8u;
        // 0x4343fc: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4343f8) {
            ctx->pc = 0x43443Cu;
            goto label_43443c;
        }
    }
    ctx->pc = 0x434400u;
label_434400:
    // 0x434400: 0x2d21821  addu        $v1, $s6, $s2
    ctx->pc = 0x434400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_434404:
    // 0x434404: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x434404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_434408:
    // 0x434408: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x434408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
label_43440c:
    // 0x43440c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43440cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_434410:
    // 0x434410: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x434410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_434414:
    // 0x434414: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x434414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_434418:
    // 0x434418: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x434418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_43441c:
    // 0x43441c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x43441cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_434420:
    // 0x434420: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x434420u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_434424:
    // 0x434424: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x434424u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_434428:
    // 0x434428: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x434428u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_43442c:
    // 0x43442c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x43442cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_434430:
    // 0x434430: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_434434:
    if (ctx->pc == 0x434434u) {
        ctx->pc = 0x434434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434430u;
        // 0x434434: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434438u;
        goto label_434438;
    }
    ctx->pc = 0x434430u;
    {
        const bool branch_taken_0x434430 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x434434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434430u;
        // 0x434434: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434430) {
            ctx->pc = 0x434418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434418;
        }
    }
    ctx->pc = 0x434438u;
label_434438:
    // 0x434438: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x434438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_43443c:
    // 0x43443c: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x43443cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
label_434440:
    // 0x434440: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x434440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_434444:
    // 0x434444: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x434444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_434448:
    // 0x434448: 0x8fb1002c  lw          $s1, 0x2C($sp)
    ctx->pc = 0x434448u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_43444c:
    // 0x43444c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x43444cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_434450:
    // 0x434450: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x434450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
label_434454:
    // 0x434454: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x434454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_434458:
    // 0x434458: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x434458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43445c:
    // 0x43445c: 0x56a021  addu        $s4, $v0, $s6
    ctx->pc = 0x43445cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_434460:
    // 0x434460: 0x1210c2  srl         $v0, $s2, 3
    ctx->pc = 0x434460u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
label_434464:
    // 0x434464: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x434464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_434468:
    // 0x434468: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x434468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_43446c:
    // 0x43446c: 0x10000030  b           . + 4 + (0x30 << 2)
label_434470:
    if (ctx->pc == 0x434470u) {
        ctx->pc = 0x434470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43446Cu;
        // 0x434470: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434474u;
        goto label_434474;
    }
    ctx->pc = 0x43446Cu;
    {
        const bool branch_taken_0x43446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43446Cu;
        // 0x434470: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43446c) {
            ctx->pc = 0x434530u;
            goto label_434530;
        }
    }
    ctx->pc = 0x434474u;
label_434474:
    // 0x434474: 0x0  nop
    ctx->pc = 0x434474u;
    // NOP
label_434478:
    // 0x434478: 0x14a0002c  bnez        $a1, . + 4 + (0x2C << 2)
label_43447c:
    if (ctx->pc == 0x43447Cu) {
        ctx->pc = 0x43447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434478u;
        // 0x43447c: 0x2324821  addu        $t1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434480u;
        goto label_434480;
    }
    ctx->pc = 0x434478u;
    {
        const bool branch_taken_0x434478 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x43447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434478u;
        // 0x43447c: 0x2324821  addu        $t1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434478) {
            ctx->pc = 0x43452Cu;
            goto label_43452c;
        }
    }
    ctx->pc = 0x434480u;
label_434480:
    // 0x434480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x434480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_434484:
    // 0x434484: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x434484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_434488:
    // 0x434488: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_43448c:
    if (ctx->pc == 0x43448Cu) {
        ctx->pc = 0x43448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434488u;
        // 0x43448c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434490u;
        goto label_434490;
    }
    ctx->pc = 0x434488u;
    {
        const bool branch_taken_0x434488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434488u;
        // 0x43448c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434488) {
            ctx->pc = 0x4344A8u;
            goto label_4344a8;
        }
    }
    ctx->pc = 0x434490u;
label_434490:
    // 0x434490: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x434490u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_434494:
    // 0x434494: 0x2723821  addu        $a3, $s3, $s2
    ctx->pc = 0x434494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_434498:
    // 0x434498: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x434498u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_43449c:
    // 0x43449c: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x43449cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_4344a0:
    // 0x4344a0: 0x10000021  b           . + 4 + (0x21 << 2)
label_4344a4:
    if (ctx->pc == 0x4344A4u) {
        ctx->pc = 0x4344A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4344A0u;
        // 0x4344a4: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4344A8u;
        goto label_4344a8;
    }
    ctx->pc = 0x4344A0u;
    {
        const bool branch_taken_0x4344a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4344A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4344A0u;
        // 0x4344a4: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4344a0) {
            ctx->pc = 0x434528u;
            goto label_434528;
        }
    }
    ctx->pc = 0x4344A8u;
label_4344a8:
    // 0x4344a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4344a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4344ac:
    // 0x4344ac: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_4344b0:
    if (ctx->pc == 0x4344B0u) {
        ctx->pc = 0x4344B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4344ACu;
        // 0x4344b0: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4344B4u;
        goto label_4344b4;
    }
    ctx->pc = 0x4344ACu;
    {
        const bool branch_taken_0x4344ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4344B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4344ACu;
        // 0x4344b0: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4344ac) {
            ctx->pc = 0x4344F0u;
            goto label_4344f0;
        }
    }
    ctx->pc = 0x4344B4u;
label_4344b4:
    // 0x4344b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4344b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4344b8:
    // 0x4344b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4344b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4344bc:
    // 0x4344bc: 0xb23821  addu        $a3, $a1, $s2
    ctx->pc = 0x4344bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_4344c0:
    // 0x4344c0: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x4344c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
label_4344c4:
    // 0x4344c4: 0x0  nop
    ctx->pc = 0x4344c4u;
    // NOP
label_4344c8:
    // 0x4344c8: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x4344c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_4344cc:
    // 0x4344cc: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x4344ccu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_4344d0:
    // 0x4344d0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x4344d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_4344d4:
    // 0x4344d4: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x4344d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_4344d8:
    // 0x4344d8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x4344d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_4344dc:
    // 0x4344dc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x4344dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_4344e0:
    // 0x4344e0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_4344e4:
    if (ctx->pc == 0x4344E4u) {
        ctx->pc = 0x4344E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4344E0u;
        // 0x4344e4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4344E8u;
        goto label_4344e8;
    }
    ctx->pc = 0x4344E0u;
    {
        const bool branch_taken_0x4344e0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x4344E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4344E0u;
        // 0x4344e4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4344e0) {
            ctx->pc = 0x4344C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4344c8;
        }
    }
    ctx->pc = 0x4344E8u;
label_4344e8:
    // 0x4344e8: 0x10000010  b           . + 4 + (0x10 << 2)
label_4344ec:
    if (ctx->pc == 0x4344ECu) {
        ctx->pc = 0x4344ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4344E8u;
        // 0x4344ec: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4344F0u;
        goto label_4344f0;
    }
    ctx->pc = 0x4344E8u;
    {
        const bool branch_taken_0x4344e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4344ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4344E8u;
        // 0x4344ec: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4344e8) {
            ctx->pc = 0x43452Cu;
            goto label_43452c;
        }
    }
    ctx->pc = 0x4344F0u;
label_4344f0:
    // 0x4344f0: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x4344f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4344f4:
    // 0x4344f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4344f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4344f8:
    // 0x4344f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4344f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4344fc:
    // 0x4344fc: 0xb23821  addu        $a3, $a1, $s2
    ctx->pc = 0x4344fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_434500:
    // 0x434500: 0x3303e  dsrl32      $a2, $v1, 0
    ctx->pc = 0x434500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 0));
label_434504:
    // 0x434504: 0x0  nop
    ctx->pc = 0x434504u;
    // NOP
label_434508:
    // 0x434508: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x434508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_43450c:
    // 0x43450c: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x43450cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_434510:
    // 0x434510: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x434510u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_434514:
    // 0x434514: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x434514u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_434518:
    // 0x434518: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x434518u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_43451c:
    // 0x43451c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x43451cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_434520:
    // 0x434520: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_434524:
    if (ctx->pc == 0x434524u) {
        ctx->pc = 0x434524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434520u;
        // 0x434524: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434528u;
        goto label_434528;
    }
    ctx->pc = 0x434520u;
    {
        const bool branch_taken_0x434520 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x434524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434520u;
        // 0x434524: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434520) {
            ctx->pc = 0x434508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434508;
        }
    }
    ctx->pc = 0x434528u;
label_434528:
    // 0x434528: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x434528u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_43452c:
    // 0x43452c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x43452cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_434530:
    // 0x434530: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x434530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_434534:
    // 0x434534: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_434538:
    if (ctx->pc == 0x434538u) {
        ctx->pc = 0x434538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434534u;
        // 0x434538: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43453Cu;
        goto label_43453c;
    }
    ctx->pc = 0x434534u;
    {
        const bool branch_taken_0x434534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434534u;
        // 0x434538: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434534) {
            ctx->pc = 0x434554u;
            goto label_434554;
        }
    }
    ctx->pc = 0x43453Cu;
label_43453c:
    // 0x43453c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x43453cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_434540:
    // 0x434540: 0x2e0f809  jalr        $s7
label_434544:
    if (ctx->pc == 0x434544u) {
        ctx->pc = 0x434544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434540u;
        // 0x434544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434548u;
        goto label_434548;
    }
    ctx->pc = 0x434540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x434548u);
        ctx->pc = 0x434544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434540u;
        // 0x434544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434540u, 0x434548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x434548u;
label_434548:
    // 0x434548: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x434548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43454c:
    // 0x43454c: 0x18a0ffca  blez        $a1, . + 4 + (-0x36 << 2)
label_434550:
    if (ctx->pc == 0x434550u) {
        ctx->pc = 0x434550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43454Cu;
        // 0x434550: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434554u;
        goto label_434554;
    }
    ctx->pc = 0x43454Cu;
    {
        const bool branch_taken_0x43454c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x434550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43454Cu;
        // 0x434550: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43454c) {
            ctx->pc = 0x434478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434478;
        }
    }
    ctx->pc = 0x434554u;
label_434554:
    // 0x434554: 0x1210c2  srl         $v0, $s2, 3
    ctx->pc = 0x434554u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
label_434558:
    // 0x434558: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x434558u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
label_43455c:
    // 0x43455c: 0x12a83c  dsll32      $s5, $s2, 0
    ctx->pc = 0x43455cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) << (32 + 0));
label_434560:
    // 0x434560: 0x1000002b  b           . + 4 + (0x2B << 2)
label_434564:
    if (ctx->pc == 0x434564u) {
        ctx->pc = 0x434564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434560u;
        // 0x434564: 0x28890002  slti        $t1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x434568u;
        goto label_434568;
    }
    ctx->pc = 0x434560u;
    {
        const bool branch_taken_0x434560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434560u;
        // 0x434564: 0x28890002  slti        $t1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x434560) {
            ctx->pc = 0x434610u;
            goto label_434610;
        }
    }
    ctx->pc = 0x434568u;
label_434568:
    // 0x434568: 0x14a00028  bnez        $a1, . + 4 + (0x28 << 2)
label_43456c:
    if (ctx->pc == 0x43456Cu) {
        ctx->pc = 0x43456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434568u;
        // 0x43456c: 0x2124023  subu        $t0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434570u;
        goto label_434570;
    }
    ctx->pc = 0x434568u;
    {
        const bool branch_taken_0x434568 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x43456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434568u;
        // 0x43456c: 0x2124023  subu        $t0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434568) {
            ctx->pc = 0x43460Cu;
            goto label_43460c;
        }
    }
    ctx->pc = 0x434570u;
label_434570:
    // 0x434570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x434570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_434574:
    // 0x434574: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x434574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_434578:
    // 0x434578: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_43457c:
    if (ctx->pc == 0x43457Cu) {
        ctx->pc = 0x43457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434578u;
        // 0x43457c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434580u;
        goto label_434580;
    }
    ctx->pc = 0x434578u;
    {
        const bool branch_taken_0x434578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434578u;
        // 0x43457c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434578) {
            ctx->pc = 0x434598u;
            goto label_434598;
        }
    }
    ctx->pc = 0x434580u;
label_434580:
    // 0x434580: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x434580u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_434584:
    // 0x434584: 0x2923823  subu        $a3, $s4, $s2
    ctx->pc = 0x434584u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_434588:
    // 0x434588: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x434588u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_43458c:
    // 0x43458c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x43458cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
label_434590:
    // 0x434590: 0x1000001d  b           . + 4 + (0x1D << 2)
label_434594:
    if (ctx->pc == 0x434594u) {
        ctx->pc = 0x434594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434590u;
        // 0x434594: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434598u;
        goto label_434598;
    }
    ctx->pc = 0x434590u;
    {
        const bool branch_taken_0x434590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434590u;
        // 0x434594: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434590) {
            ctx->pc = 0x434608u;
            goto label_434608;
        }
    }
    ctx->pc = 0x434598u;
label_434598:
    // 0x434598: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
label_43459c:
    if (ctx->pc == 0x43459Cu) {
        ctx->pc = 0x43459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434598u;
        // 0x43459c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4345A0u;
        goto label_4345a0;
    }
    ctx->pc = 0x434598u;
    {
        const bool branch_taken_0x434598 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x43459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434598u;
        // 0x43459c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434598) {
            ctx->pc = 0x4345D8u;
            goto label_4345d8;
        }
    }
    ctx->pc = 0x4345A0u;
label_4345a0:
    // 0x4345a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4345a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4345a4:
    // 0x4345a4: 0x1e303e  dsrl32      $a2, $fp, 0
    ctx->pc = 0x4345a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) >> (32 + 0));
label_4345a8:
    // 0x4345a8: 0xb23823  subu        $a3, $a1, $s2
    ctx->pc = 0x4345a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_4345ac:
    // 0x4345ac: 0x0  nop
    ctx->pc = 0x4345acu;
    // NOP
label_4345b0:
    // 0x4345b0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x4345b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_4345b4:
    // 0x4345b4: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x4345b4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_4345b8:
    // 0x4345b8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x4345b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_4345bc:
    // 0x4345bc: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x4345bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_4345c0:
    // 0x4345c0: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x4345c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_4345c4:
    // 0x4345c4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4345c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_4345c8:
    // 0x4345c8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_4345cc:
    if (ctx->pc == 0x4345CCu) {
        ctx->pc = 0x4345CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4345C8u;
        // 0x4345cc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4345D0u;
        goto label_4345d0;
    }
    ctx->pc = 0x4345C8u;
    {
        const bool branch_taken_0x4345c8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x4345CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4345C8u;
        // 0x4345cc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4345c8) {
            ctx->pc = 0x4345B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4345b0;
        }
    }
    ctx->pc = 0x4345D0u;
label_4345d0:
    // 0x4345d0: 0x1000000e  b           . + 4 + (0xE << 2)
label_4345d4:
    if (ctx->pc == 0x4345D4u) {
        ctx->pc = 0x4345D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4345D0u;
        // 0x4345d4: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4345D8u;
        goto label_4345d8;
    }
    ctx->pc = 0x4345D0u;
    {
        const bool branch_taken_0x4345d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4345D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4345D0u;
        // 0x4345d4: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4345d0) {
            ctx->pc = 0x43460Cu;
            goto label_43460c;
        }
    }
    ctx->pc = 0x4345D8u;
label_4345d8:
    // 0x4345d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4345d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4345dc:
    // 0x4345dc: 0x15303e  dsrl32      $a2, $s5, 0
    ctx->pc = 0x4345dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) >> (32 + 0));
label_4345e0:
    // 0x4345e0: 0xb23823  subu        $a3, $a1, $s2
    ctx->pc = 0x4345e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_4345e4:
    // 0x4345e4: 0x0  nop
    ctx->pc = 0x4345e4u;
    // NOP
label_4345e8:
    // 0x4345e8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4345e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4345ec:
    // 0x4345ec: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x4345ecu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_4345f0:
    // 0x4345f0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4345f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4345f4:
    // 0x4345f4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4345f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4345f8:
    // 0x4345f8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4345f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_4345fc:
    // 0x4345fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4345fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_434600:
    // 0x434600: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_434604:
    if (ctx->pc == 0x434604u) {
        ctx->pc = 0x434604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434600u;
        // 0x434604: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434608u;
        goto label_434608;
    }
    ctx->pc = 0x434600u;
    {
        const bool branch_taken_0x434600 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x434604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434600u;
        // 0x434604: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434600) {
            ctx->pc = 0x4345E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4345e8;
        }
    }
    ctx->pc = 0x434608u;
label_434608:
    // 0x434608: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x434608u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_43460c:
    // 0x43460c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x43460cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_434610:
    // 0x434610: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x434610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_434614:
    // 0x434614: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_434618:
    if (ctx->pc == 0x434618u) {
        ctx->pc = 0x434618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434614u;
        // 0x434618: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43461Cu;
        goto label_43461c;
    }
    ctx->pc = 0x434614u;
    {
        const bool branch_taken_0x434614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434614u;
        // 0x434618: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434614) {
            ctx->pc = 0x4346ECu;
            goto label_4346ec;
        }
    }
    ctx->pc = 0x43461Cu;
label_43461c:
    // 0x43461c: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x43461cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
label_434620:
    // 0x434620: 0x2e0f809  jalr        $s7
label_434624:
    if (ctx->pc == 0x434624u) {
        ctx->pc = 0x434624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434620u;
        // 0x434624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434628u;
        goto label_434628;
    }
    ctx->pc = 0x434620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x434628u);
        ctx->pc = 0x434624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434620u;
        // 0x434624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434620u, 0x434628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x434628u;
label_434628:
    // 0x434628: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x434628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43462c:
    // 0x43462c: 0x4a1ffce  bgez        $a1, . + 4 + (-0x32 << 2)
label_434630:
    if (ctx->pc == 0x434630u) {
        ctx->pc = 0x434630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43462Cu;
        // 0x434630: 0x7ba90040  lq          $t1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434634u;
        goto label_434634;
    }
    ctx->pc = 0x43462Cu;
    {
        const bool branch_taken_0x43462c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x434630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43462Cu;
        // 0x434630: 0x7ba90040  lq          $t1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43462c) {
            ctx->pc = 0x434568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434568;
        }
    }
    ctx->pc = 0x434634u;
label_434634:
    // 0x434634: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x434634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_434638:
    // 0x434638: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_43463c:
    if (ctx->pc == 0x43463Cu) {
        ctx->pc = 0x43463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434638u;
        // 0x43463c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434640u;
        goto label_434640;
    }
    ctx->pc = 0x434638u;
    {
        const bool branch_taken_0x434638 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x43463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434638u;
        // 0x43463c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434638) {
            ctx->pc = 0x43465Cu;
            goto label_43465c;
        }
    }
    ctx->pc = 0x434640u;
label_434640:
    // 0x434640: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x434640u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_434644:
    // 0x434644: 0x2324821  addu        $t1, $s1, $s2
    ctx->pc = 0x434644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_434648:
    // 0x434648: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x434648u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_43464c:
    // 0x43464c: 0x2124023  subu        $t0, $s0, $s2
    ctx->pc = 0x43464cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_434650:
    // 0x434650: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x434650u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
label_434654:
    // 0x434654: 0x10000020  b           . + 4 + (0x20 << 2)
label_434658:
    if (ctx->pc == 0x434658u) {
        ctx->pc = 0x434658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434654u;
        // 0x434658: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43465Cu;
        goto label_43465c;
    }
    ctx->pc = 0x434654u;
    {
        const bool branch_taken_0x434654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434654u;
        // 0x434658: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434654) {
            ctx->pc = 0x4346D8u;
            goto label_4346d8;
        }
    }
    ctx->pc = 0x43465Cu;
label_43465c:
    // 0x43465c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_434660:
    if (ctx->pc == 0x434660u) {
        ctx->pc = 0x434660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43465Cu;
        // 0x434660: 0xdfa30018  ld          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434664u;
        goto label_434664;
    }
    ctx->pc = 0x43465Cu;
    {
        const bool branch_taken_0x43465c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43465Cu;
        // 0x434660: 0xdfa30018  ld          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43465c) {
            ctx->pc = 0x4346A0u;
            goto label_4346a0;
        }
    }
    ctx->pc = 0x434664u;
label_434664:
    // 0x434664: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x434664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_434668:
    // 0x434668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x434668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43466c:
    // 0x43466c: 0xb24821  addu        $t1, $a1, $s2
    ctx->pc = 0x43466cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_434670:
    // 0x434670: 0x3303e  dsrl32      $a2, $v1, 0
    ctx->pc = 0x434670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 0));
label_434674:
    // 0x434674: 0x924023  subu        $t0, $a0, $s2
    ctx->pc = 0x434674u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_434678:
    // 0x434678: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x434678u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_43467c:
    // 0x43467c: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x43467cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_434680:
    // 0x434680: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x434680u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_434684:
    // 0x434684: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x434684u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_434688:
    // 0x434688: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x434688u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_43468c:
    // 0x43468c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x43468cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_434690:
    // 0x434690: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_434694:
    if (ctx->pc == 0x434694u) {
        ctx->pc = 0x434694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434690u;
        // 0x434694: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434698u;
        goto label_434698;
    }
    ctx->pc = 0x434690u;
    {
        const bool branch_taken_0x434690 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x434694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434690u;
        // 0x434694: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434690) {
            ctx->pc = 0x434678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434678;
        }
    }
    ctx->pc = 0x434698u;
label_434698:
    // 0x434698: 0x10000010  b           . + 4 + (0x10 << 2)
label_43469c:
    if (ctx->pc == 0x43469Cu) {
        ctx->pc = 0x43469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434698u;
        // 0x43469c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4346A0u;
        goto label_4346a0;
    }
    ctx->pc = 0x434698u;
    {
        const bool branch_taken_0x434698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434698u;
        // 0x43469c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434698) {
            ctx->pc = 0x4346DCu;
            goto label_4346dc;
        }
    }
    ctx->pc = 0x4346A0u;
label_4346a0:
    // 0x4346a0: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x4346a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4346a4:
    // 0x4346a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4346a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4346a8:
    // 0x4346a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4346a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4346ac:
    // 0x4346ac: 0xb24821  addu        $t1, $a1, $s2
    ctx->pc = 0x4346acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_4346b0:
    // 0x4346b0: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x4346b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
label_4346b4:
    // 0x4346b4: 0x924023  subu        $t0, $a0, $s2
    ctx->pc = 0x4346b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_4346b8:
    // 0x4346b8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4346b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4346bc:
    // 0x4346bc: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x4346bcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_4346c0:
    // 0x4346c0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x4346c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4346c4:
    // 0x4346c4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4346c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_4346c8:
    // 0x4346c8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4346c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_4346cc:
    // 0x4346cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4346ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4346d0:
    // 0x4346d0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_4346d4:
    if (ctx->pc == 0x4346D4u) {
        ctx->pc = 0x4346D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4346D0u;
        // 0x4346d4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4346D8u;
        goto label_4346d8;
    }
    ctx->pc = 0x4346D0u;
    {
        const bool branch_taken_0x4346d0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x4346D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4346D0u;
        // 0x4346d4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4346d0) {
            ctx->pc = 0x4346B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4346b8;
        }
    }
    ctx->pc = 0x4346D8u;
label_4346d8:
    // 0x4346d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4346d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4346dc:
    // 0x4346dc: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x4346dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4346e0:
    // 0x4346e0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4346e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4346e4:
    // 0x4346e4: 0x1000ff92  b           . + 4 + (-0x6E << 2)
label_4346e8:
    if (ctx->pc == 0x4346E8u) {
        ctx->pc = 0x4346E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4346E4u;
        // 0x4346e8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4346ECu;
        goto label_4346ec;
    }
    ctx->pc = 0x4346E4u;
    {
        const bool branch_taken_0x4346e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4346E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4346E4u;
        // 0x4346e8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4346e4) {
            ctx->pc = 0x434530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434530;
        }
    }
    ctx->pc = 0x4346ECu;
label_4346ec:
    // 0x4346ec: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4346ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4346f0:
    // 0x4346f0: 0x14800041  bnez        $a0, . + 4 + (0x41 << 2)
label_4346f4:
    if (ctx->pc == 0x4346F4u) {
        ctx->pc = 0x4346F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4346F0u;
        // 0x4346f4: 0x2332823  subu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4346F8u;
        goto label_4346f8;
    }
    ctx->pc = 0x4346F0u;
    {
        const bool branch_taken_0x4346f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4346F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4346F0u;
        // 0x4346f4: 0x2332823  subu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4346f0) {
            ctx->pc = 0x4347F8u;
            goto label_4347f8;
        }
    }
    ctx->pc = 0x4346F8u;
label_4346f8:
    // 0x4346f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4346f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4346fc:
    // 0x4346fc: 0x8fb0002c  lw          $s0, 0x2C($sp)
    ctx->pc = 0x4346fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_434700:
    // 0x434700: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x434700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_434704:
    // 0x434704: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x434704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_434708:
    // 0x434708: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x434708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_43470c:
    // 0x43470c: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
label_434710:
    if (ctx->pc == 0x434710u) {
        ctx->pc = 0x434710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43470Cu;
        // 0x434710: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434714u;
        goto label_434714;
    }
    ctx->pc = 0x43470Cu;
    {
        const bool branch_taken_0x43470c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43470Cu;
        // 0x434710: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43470c) {
            ctx->pc = 0x434984u;
            goto label_434984;
        }
    }
    ctx->pc = 0x434714u;
label_434714:
    // 0x434714: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x434714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_434718:
    // 0x434718: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x434718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_43471c:
    // 0x43471c: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x43471cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
label_434720:
    // 0x434720: 0x12a03c  dsll32      $s4, $s2, 0
    ctx->pc = 0x434720u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) << (32 + 0));
label_434724:
    // 0x434724: 0x28750002  slti        $s5, $v1, 0x2
    ctx->pc = 0x434724u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_434728:
    // 0x434728: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x434728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43472c:
    // 0x43472c: 0x0  nop
    ctx->pc = 0x43472cu;
    // NOP
label_434730:
    // 0x434730: 0x10000022  b           . + 4 + (0x22 << 2)
label_434734:
    if (ctx->pc == 0x434734u) {
        ctx->pc = 0x434734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434730u;
        // 0x434734: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434738u;
        goto label_434738;
    }
    ctx->pc = 0x434730u;
    {
        const bool branch_taken_0x434730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434730u;
        // 0x434734: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434730) {
            ctx->pc = 0x4347BCu;
            goto label_4347bc;
        }
    }
    ctx->pc = 0x434738u;
label_434738:
    // 0x434738: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_43473c:
    if (ctx->pc == 0x43473Cu) {
        ctx->pc = 0x434740u;
        goto label_434740;
    }
    ctx->pc = 0x434738u;
    {
        const bool branch_taken_0x434738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x434738) {
            ctx->pc = 0x434754u;
            goto label_434754;
        }
    }
    ctx->pc = 0x434740u;
label_434740:
    // 0x434740: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x434740u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_434744:
    // 0x434744: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x434744u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_434748:
    // 0x434748: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x434748u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_43474c:
    // 0x43474c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_434750:
    if (ctx->pc == 0x434750u) {
        ctx->pc = 0x434750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43474Cu;
        // 0x434750: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434754u;
        goto label_434754;
    }
    ctx->pc = 0x43474Cu;
    {
        const bool branch_taken_0x43474c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43474Cu;
        // 0x434750: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43474c) {
            ctx->pc = 0x4347B8u;
            goto label_4347b8;
        }
    }
    ctx->pc = 0x434754u;
label_434754:
    // 0x434754: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_434758:
    if (ctx->pc == 0x434758u) {
        ctx->pc = 0x434758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434754u;
        // 0x434758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43475Cu;
        goto label_43475c;
    }
    ctx->pc = 0x434754u;
    {
        const bool branch_taken_0x434754 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x434758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434754u;
        // 0x434758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434754) {
            ctx->pc = 0x434790u;
            goto label_434790;
        }
    }
    ctx->pc = 0x43475Cu;
label_43475c:
    // 0x43475c: 0x1e283e  dsrl32      $a1, $fp, 0
    ctx->pc = 0x43475cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) >> (32 + 0));
label_434760:
    // 0x434760: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x434760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_434764:
    // 0x434764: 0x0  nop
    ctx->pc = 0x434764u;
    // NOP
label_434768:
    // 0x434768: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x434768u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_43476c:
    // 0x43476c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x43476cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_434770:
    // 0x434770: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x434770u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_434774:
    // 0x434774: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x434774u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_434778:
    // 0x434778: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x434778u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_43477c:
    // 0x43477c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x43477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_434780:
    // 0x434780: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_434784:
    if (ctx->pc == 0x434784u) {
        ctx->pc = 0x434784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434780u;
        // 0x434784: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434788u;
        goto label_434788;
    }
    ctx->pc = 0x434780u;
    {
        const bool branch_taken_0x434780 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x434784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434780u;
        // 0x434784: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434780) {
            ctx->pc = 0x434768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434768;
        }
    }
    ctx->pc = 0x434788u;
label_434788:
    // 0x434788: 0x1000000c  b           . + 4 + (0xC << 2)
label_43478c:
    if (ctx->pc == 0x43478Cu) {
        ctx->pc = 0x43478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434788u;
        // 0x43478c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434790u;
        goto label_434790;
    }
    ctx->pc = 0x434788u;
    {
        const bool branch_taken_0x434788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434788u;
        // 0x43478c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434788) {
            ctx->pc = 0x4347BCu;
            goto label_4347bc;
        }
    }
    ctx->pc = 0x434790u;
label_434790:
    // 0x434790: 0x14283e  dsrl32      $a1, $s4, 0
    ctx->pc = 0x434790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) >> (32 + 0));
label_434794:
    // 0x434794: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x434794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_434798:
    // 0x434798: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x434798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_43479c:
    // 0x43479c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x43479cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_4347a0:
    // 0x4347a0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4347a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4347a4:
    // 0x4347a4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4347a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4347a8:
    // 0x4347a8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4347a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_4347ac:
    // 0x4347ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4347acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4347b0:
    // 0x4347b0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_4347b4:
    if (ctx->pc == 0x4347B4u) {
        ctx->pc = 0x4347B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4347B0u;
        // 0x4347b4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4347B8u;
        goto label_4347b8;
    }
    ctx->pc = 0x4347B0u;
    {
        const bool branch_taken_0x4347b0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x4347B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4347B0u;
        // 0x4347b4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4347b0) {
            ctx->pc = 0x434798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434798;
        }
    }
    ctx->pc = 0x4347B8u;
label_4347b8:
    // 0x4347b8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4347b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4347bc:
    // 0x4347bc: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x4347bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4347c0:
    // 0x4347c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4347c4:
    if (ctx->pc == 0x4347C4u) {
        ctx->pc = 0x4347C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4347C0u;
        // 0x4347c4: 0x2328023  subu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4347C8u;
        goto label_4347c8;
    }
    ctx->pc = 0x4347C0u;
    {
        const bool branch_taken_0x4347c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4347C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4347C0u;
        // 0x4347c4: 0x2328023  subu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4347c0) {
            ctx->pc = 0x4347DCu;
            goto label_4347dc;
        }
    }
    ctx->pc = 0x4347C8u;
label_4347c8:
    // 0x4347c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4347c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4347cc:
    // 0x4347cc: 0x2e0f809  jalr        $s7
label_4347d0:
    if (ctx->pc == 0x4347D0u) {
        ctx->pc = 0x4347D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4347CCu;
        // 0x4347d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4347D4u;
        goto label_4347d4;
    }
    ctx->pc = 0x4347CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4347D4u);
        ctx->pc = 0x4347D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4347CCu;
        // 0x4347d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4347CCu, 0x4347D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4347D4u;
label_4347d4:
    // 0x4347d4: 0x5c40ffd8  bgtzl       $v0, . + 4 + (-0x28 << 2)
label_4347d8:
    if (ctx->pc == 0x4347D8u) {
        ctx->pc = 0x4347D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4347D4u;
        // 0x4347d8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4347DCu;
        goto label_4347dc;
    }
    ctx->pc = 0x4347D4u;
    {
        const bool branch_taken_0x4347d4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4347d4) {
            ctx->pc = 0x4347D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4347D4u;
            // 0x4347d8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434738;
        }
    }
    ctx->pc = 0x4347DCu;
label_4347dc:
    // 0x4347dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x4347dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_4347e0:
    // 0x4347e0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x4347e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4347e4:
    // 0x4347e4: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x4347e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4347e8:
    // 0x4347e8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_4347ec:
    if (ctx->pc == 0x4347ECu) {
        ctx->pc = 0x4347ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4347E8u;
        // 0x4347ec: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4347F0u;
        goto label_4347f0;
    }
    ctx->pc = 0x4347E8u;
    {
        const bool branch_taken_0x4347e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4347ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4347E8u;
        // 0x4347ec: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4347e8) {
            ctx->pc = 0x434730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434730;
        }
    }
    ctx->pc = 0x4347F0u;
label_4347f0:
    // 0x4347f0: 0x10000065  b           . + 4 + (0x65 << 2)
label_4347f4:
    if (ctx->pc == 0x4347F4u) {
        ctx->pc = 0x4347F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4347F0u;
        // 0x4347f4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4347F8u;
        goto label_4347f8;
    }
    ctx->pc = 0x4347F0u;
    {
        const bool branch_taken_0x4347f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4347F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4347F0u;
        // 0x4347f4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4347f0) {
            ctx->pc = 0x434988u;
            goto label_434988;
        }
    }
    ctx->pc = 0x4347F8u;
label_4347f8:
    // 0x4347f8: 0x2761823  subu        $v1, $s3, $s6
    ctx->pc = 0x4347f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_4347fc:
    // 0x4347fc: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x4347fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_434800:
    // 0x434800: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x434800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_434804:
    // 0x434804: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x434804u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_434808:
    // 0x434808: 0x2908023  subu        $s0, $s4, $s0
    ctx->pc = 0x434808u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_43480c:
    // 0x43480c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x43480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_434810:
    // 0x434810: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x434810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_434814:
    // 0x434814: 0x18a00020  blez        $a1, . + 4 + (0x20 << 2)
label_434818:
    if (ctx->pc == 0x434818u) {
        ctx->pc = 0x434818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434814u;
        // 0x434818: 0x56a821  addu        $s5, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43481Cu;
        goto label_43481c;
    }
    ctx->pc = 0x434814u;
    {
        const bool branch_taken_0x434814 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x434818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434814u;
        // 0x434818: 0x56a821  addu        $s5, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434814) {
            ctx->pc = 0x434898u;
            goto label_434898;
        }
    }
    ctx->pc = 0x43481Cu;
label_43481c:
    // 0x43481c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x43481cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_434820:
    // 0x434820: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x434820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_434824:
    // 0x434824: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_434828:
    if (ctx->pc == 0x434828u) {
        ctx->pc = 0x434828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434824u;
        // 0x434828: 0x2251823  subu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43482Cu;
        goto label_43482c;
    }
    ctx->pc = 0x434824u;
    {
        const bool branch_taken_0x434824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434824u;
        // 0x434828: 0x2251823  subu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434824) {
            ctx->pc = 0x434868u;
            goto label_434868;
        }
    }
    ctx->pc = 0x43482Cu;
label_43482c:
    // 0x43482c: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x43482cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_434830:
    // 0x434830: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x434830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_434834:
    // 0x434834: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x434834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_434838:
    // 0x434838: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x434838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_43483c:
    // 0x43483c: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x43483cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_434840:
    // 0x434840: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x434840u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_434844:
    // 0x434844: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x434844u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_434848:
    // 0x434848: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x434848u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_43484c:
    // 0x43484c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x43484cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_434850:
    // 0x434850: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x434850u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_434854:
    // 0x434854: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x434854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_434858:
    // 0x434858: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_43485c:
    if (ctx->pc == 0x43485Cu) {
        ctx->pc = 0x43485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434858u;
        // 0x43485c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434860u;
        goto label_434860;
    }
    ctx->pc = 0x434858u;
    {
        const bool branch_taken_0x434858 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x43485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434858u;
        // 0x43485c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434858) {
            ctx->pc = 0x434840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434840;
        }
    }
    ctx->pc = 0x434860u;
label_434860:
    // 0x434860: 0x1000000e  b           . + 4 + (0xE << 2)
label_434864:
    if (ctx->pc == 0x434864u) {
        ctx->pc = 0x434864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434860u;
        // 0x434864: 0x2b41023  subu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434868u;
        goto label_434868;
    }
    ctx->pc = 0x434860u;
    {
        const bool branch_taken_0x434860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434860u;
        // 0x434864: 0x2b41023  subu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434860) {
            ctx->pc = 0x43489Cu;
            goto label_43489c;
        }
    }
    ctx->pc = 0x434868u;
label_434868:
    // 0x434868: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x434868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_43486c:
    // 0x43486c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x43486cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_434870:
    // 0x434870: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x434870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_434874:
    // 0x434874: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x434874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_434878:
    // 0x434878: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x434878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_43487c:
    // 0x43487c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x43487cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_434880:
    // 0x434880: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x434880u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_434884:
    // 0x434884: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x434884u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_434888:
    // 0x434888: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x434888u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_43488c:
    // 0x43488c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x43488cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_434890:
    // 0x434890: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_434894:
    if (ctx->pc == 0x434894u) {
        ctx->pc = 0x434894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434890u;
        // 0x434894: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434898u;
        goto label_434898;
    }
    ctx->pc = 0x434890u;
    {
        const bool branch_taken_0x434890 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x434894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434890u;
        // 0x434894: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434890) {
            ctx->pc = 0x434878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434878;
        }
    }
    ctx->pc = 0x434898u;
label_434898:
    // 0x434898: 0x2b41023  subu        $v0, $s5, $s4
    ctx->pc = 0x434898u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_43489c:
    // 0x43489c: 0x522823  subu        $a1, $v0, $s2
    ctx->pc = 0x43489cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4348a0:
    // 0x4348a0: 0x205182b  sltu        $v1, $s0, $a1
    ctx->pc = 0x4348a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4348a4:
    // 0x4348a4: 0x203280b  movn        $a1, $s0, $v1
    ctx->pc = 0x4348a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_4348a8:
    // 0x4348a8: 0x18a0001f  blez        $a1, . + 4 + (0x1F << 2)
label_4348ac:
    if (ctx->pc == 0x4348ACu) {
        ctx->pc = 0x4348ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348A8u;
        // 0x4348ac: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4348B0u;
        goto label_4348b0;
    }
    ctx->pc = 0x4348A8u;
    {
        const bool branch_taken_0x4348a8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x4348ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348A8u;
        // 0x4348ac: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4348a8) {
            ctx->pc = 0x434928u;
            goto label_434928;
        }
    }
    ctx->pc = 0x4348B0u;
label_4348b0:
    // 0x4348b0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x4348b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4348b4:
    // 0x4348b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_4348b8:
    if (ctx->pc == 0x4348B8u) {
        ctx->pc = 0x4348B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348B4u;
        // 0x4348b8: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4348BCu;
        goto label_4348bc;
    }
    ctx->pc = 0x4348B4u;
    {
        const bool branch_taken_0x4348b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4348B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348B4u;
        // 0x4348b8: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4348b4) {
            ctx->pc = 0x4348F8u;
            goto label_4348f8;
        }
    }
    ctx->pc = 0x4348BCu;
label_4348bc:
    // 0x4348bc: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x4348bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_4348c0:
    // 0x4348c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4348c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4348c4:
    // 0x4348c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4348c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4348c8:
    // 0x4348c8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4348c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4348cc:
    // 0x4348cc: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x4348ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_4348d0:
    // 0x4348d0: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x4348d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_4348d4:
    // 0x4348d4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x4348d4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_4348d8:
    // 0x4348d8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x4348d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_4348dc:
    // 0x4348dc: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x4348dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_4348e0:
    // 0x4348e0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x4348e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_4348e4:
    // 0x4348e4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4348e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_4348e8:
    // 0x4348e8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_4348ec:
    if (ctx->pc == 0x4348ECu) {
        ctx->pc = 0x4348ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348E8u;
        // 0x4348ec: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4348F0u;
        goto label_4348f0;
    }
    ctx->pc = 0x4348E8u;
    {
        const bool branch_taken_0x4348e8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x4348ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348E8u;
        // 0x4348ec: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4348e8) {
            ctx->pc = 0x4348D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4348d0;
        }
    }
    ctx->pc = 0x4348F0u;
label_4348f0:
    // 0x4348f0: 0x1000000e  b           . + 4 + (0xE << 2)
label_4348f4:
    if (ctx->pc == 0x4348F4u) {
        ctx->pc = 0x4348F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348F0u;
        // 0x4348f4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4348F8u;
        goto label_4348f8;
    }
    ctx->pc = 0x4348F0u;
    {
        const bool branch_taken_0x4348f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4348F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4348F0u;
        // 0x4348f4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4348f0) {
            ctx->pc = 0x43492Cu;
            goto label_43492c;
        }
    }
    ctx->pc = 0x4348F8u;
label_4348f8:
    // 0x4348f8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x4348f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_4348fc:
    // 0x4348fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4348fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_434900:
    // 0x434900: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x434900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_434904:
    // 0x434904: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x434904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_434908:
    // 0x434908: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x434908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_43490c:
    // 0x43490c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x43490cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_434910:
    // 0x434910: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x434910u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_434914:
    // 0x434914: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x434914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_434918:
    // 0x434918: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x434918u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_43491c:
    // 0x43491c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x43491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_434920:
    // 0x434920: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_434924:
    if (ctx->pc == 0x434924u) {
        ctx->pc = 0x434924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434920u;
        // 0x434924: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434928u;
        goto label_434928;
    }
    ctx->pc = 0x434920u;
    {
        const bool branch_taken_0x434920 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x434924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434920u;
        // 0x434924: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434920) {
            ctx->pc = 0x434908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434908;
        }
    }
    ctx->pc = 0x434928u;
label_434928:
    // 0x434928: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x434928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_43492c:
    // 0x43492c: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x43492cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_434930:
    // 0x434930: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_434934:
    if (ctx->pc == 0x434934u) {
        ctx->pc = 0x434934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434930u;
        // 0x434934: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434938u;
        goto label_434938;
    }
    ctx->pc = 0x434930u;
    {
        const bool branch_taken_0x434930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x434930) {
            ctx->pc = 0x434934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434930u;
            // 0x434934: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43495Cu;
            goto label_43495c;
        }
    }
    ctx->pc = 0x434938u;
label_434938:
    // 0x434938: 0xb2001b  divu        $zero, $a1, $s2
    ctx->pc = 0x434938u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_43493c:
    // 0x43493c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_434940:
    if (ctx->pc == 0x434940u) {
        ctx->pc = 0x434940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43493Cu;
        // 0x434940: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x434944u;
        goto label_434944;
    }
    ctx->pc = 0x43493Cu;
    {
        const bool branch_taken_0x43493c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x43493c) {
            ctx->pc = 0x434940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43493Cu;
            // 0x434940: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x434944u;
            goto label_434944;
        }
    }
    ctx->pc = 0x434944u;
label_434944:
    // 0x434944: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x434944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_434948:
    // 0x434948: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x434948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43494c:
    // 0x43494c: 0x2812  mflo        $a1
    ctx->pc = 0x43494cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_434950:
    // 0x434950: 0xc10cff6  jal         func_433FD8
label_434954:
    if (ctx->pc == 0x434954u) {
        ctx->pc = 0x434954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434950u;
        // 0x434954: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434958u;
        goto label_434958;
    }
    ctx->pc = 0x434950u;
    SET_GPR_U32(ctx, 31, 0x434958u);
    ctx->pc = 0x434954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434950u;
    // 0x434954: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433FD8u;
    goto label_433fd8;
    ctx->pc = 0x434958u;
label_434958:
    // 0x434958: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x434958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43495c:
    // 0x43495c: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x43495cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_434960:
    // 0x434960: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_434964:
    if (ctx->pc == 0x434964u) {
        ctx->pc = 0x434964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434960u;
        // 0x434964: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434968u;
        goto label_434968;
    }
    ctx->pc = 0x434960u;
    {
        const bool branch_taken_0x434960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434960u;
        // 0x434964: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434960) {
            ctx->pc = 0x434988u;
            goto label_434988;
        }
    }
    ctx->pc = 0x434968u;
label_434968:
    // 0x434968: 0xb2001b  divu        $zero, $a1, $s2
    ctx->pc = 0x434968u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_43496c:
    // 0x43496c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_434970:
    if (ctx->pc == 0x434970u) {
        ctx->pc = 0x434970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43496Cu;
        // 0x434970: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x434974u;
        goto label_434974;
    }
    ctx->pc = 0x43496Cu;
    {
        const bool branch_taken_0x43496c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x43496c) {
            ctx->pc = 0x434970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43496Cu;
            // 0x434970: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x434974u;
            goto label_434974;
        }
    }
    ctx->pc = 0x434974u;
label_434974:
    // 0x434974: 0x2a5b023  subu        $s6, $s5, $a1
    ctx->pc = 0x434974u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_434978:
    // 0x434978: 0x1012  mflo        $v0
    ctx->pc = 0x434978u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_43497c:
    // 0x43497c: 0x1000fda5  b           . + 4 + (-0x25B << 2)
label_434980:
    if (ctx->pc == 0x434980u) {
        ctx->pc = 0x434980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43497Cu;
        // 0x434980: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x434984u;
        goto label_434984;
    }
    ctx->pc = 0x43497Cu;
    {
        const bool branch_taken_0x43497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43497Cu;
        // 0x434980: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43497c) {
            ctx->pc = 0x434014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434014;
        }
    }
    ctx->pc = 0x434984u;
label_434984:
    // 0x434984: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x434984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_434988:
    // 0x434988: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x434988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_43498c:
    // 0x43498c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x43498cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_434990:
    // 0x434990: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x434990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_434994:
    // 0x434994: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x434994u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_434998:
    // 0x434998: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x434998u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_43499c:
    // 0x43499c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x43499cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4349a0:
    // 0x4349a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4349a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4349a4:
    // 0x4349a4: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x4349a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4349a8:
    // 0x4349a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4349a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4349ac:
    // 0x4349ac: 0x3e00008  jr          $ra
label_4349b0:
    if (ctx->pc == 0x4349B0u) {
        ctx->pc = 0x4349B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4349ACu;
        // 0x4349b0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4349B4u;
        goto label_4349b4;
    }
    ctx->pc = 0x4349ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4349B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4349ACu;
        // 0x4349b0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4349ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4349B4u;
label_4349b4:
    // 0x4349b4: 0x0  nop
    ctx->pc = 0x4349b4u;
    // NOP
    ctx->pc = 0x4349b8u;
}
