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

// Function: sub_00215E78
// Address: 0x215e78 - 0x2166d0
void sub_00215E78_0x215e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215E78_0x215e78");
#endif

    switch (ctx->pc) {
        case 0x215e78u: goto label_215e78;
        case 0x215e7cu: goto label_215e7c;
        case 0x215e80u: goto label_215e80;
        case 0x215e84u: goto label_215e84;
        case 0x215e88u: goto label_215e88;
        case 0x215e8cu: goto label_215e8c;
        case 0x215e90u: goto label_215e90;
        case 0x215e94u: goto label_215e94;
        case 0x215e98u: goto label_215e98;
        case 0x215e9cu: goto label_215e9c;
        case 0x215ea0u: goto label_215ea0;
        case 0x215ea4u: goto label_215ea4;
        case 0x215ea8u: goto label_215ea8;
        case 0x215eacu: goto label_215eac;
        case 0x215eb0u: goto label_215eb0;
        case 0x215eb4u: goto label_215eb4;
        case 0x215eb8u: goto label_215eb8;
        case 0x215ebcu: goto label_215ebc;
        case 0x215ec0u: goto label_215ec0;
        case 0x215ec4u: goto label_215ec4;
        case 0x215ec8u: goto label_215ec8;
        case 0x215eccu: goto label_215ecc;
        case 0x215ed0u: goto label_215ed0;
        case 0x215ed4u: goto label_215ed4;
        case 0x215ed8u: goto label_215ed8;
        case 0x215edcu: goto label_215edc;
        case 0x215ee0u: goto label_215ee0;
        case 0x215ee4u: goto label_215ee4;
        case 0x215ee8u: goto label_215ee8;
        case 0x215eecu: goto label_215eec;
        case 0x215ef0u: goto label_215ef0;
        case 0x215ef4u: goto label_215ef4;
        case 0x215ef8u: goto label_215ef8;
        case 0x215efcu: goto label_215efc;
        case 0x215f00u: goto label_215f00;
        case 0x215f04u: goto label_215f04;
        case 0x215f08u: goto label_215f08;
        case 0x215f0cu: goto label_215f0c;
        case 0x215f10u: goto label_215f10;
        case 0x215f14u: goto label_215f14;
        case 0x215f18u: goto label_215f18;
        case 0x215f1cu: goto label_215f1c;
        case 0x215f20u: goto label_215f20;
        case 0x215f24u: goto label_215f24;
        case 0x215f28u: goto label_215f28;
        case 0x215f2cu: goto label_215f2c;
        case 0x215f30u: goto label_215f30;
        case 0x215f34u: goto label_215f34;
        case 0x215f38u: goto label_215f38;
        case 0x215f3cu: goto label_215f3c;
        case 0x215f40u: goto label_215f40;
        case 0x215f44u: goto label_215f44;
        case 0x215f48u: goto label_215f48;
        case 0x215f4cu: goto label_215f4c;
        case 0x215f50u: goto label_215f50;
        case 0x215f54u: goto label_215f54;
        case 0x215f58u: goto label_215f58;
        case 0x215f5cu: goto label_215f5c;
        case 0x215f60u: goto label_215f60;
        case 0x215f64u: goto label_215f64;
        case 0x215f68u: goto label_215f68;
        case 0x215f6cu: goto label_215f6c;
        case 0x215f70u: goto label_215f70;
        case 0x215f74u: goto label_215f74;
        case 0x215f78u: goto label_215f78;
        case 0x215f7cu: goto label_215f7c;
        case 0x215f80u: goto label_215f80;
        case 0x215f84u: goto label_215f84;
        case 0x215f88u: goto label_215f88;
        case 0x215f8cu: goto label_215f8c;
        case 0x215f90u: goto label_215f90;
        case 0x215f94u: goto label_215f94;
        case 0x215f98u: goto label_215f98;
        case 0x215f9cu: goto label_215f9c;
        case 0x215fa0u: goto label_215fa0;
        case 0x215fa4u: goto label_215fa4;
        case 0x215fa8u: goto label_215fa8;
        case 0x215facu: goto label_215fac;
        case 0x215fb0u: goto label_215fb0;
        case 0x215fb4u: goto label_215fb4;
        case 0x215fb8u: goto label_215fb8;
        case 0x215fbcu: goto label_215fbc;
        case 0x215fc0u: goto label_215fc0;
        case 0x215fc4u: goto label_215fc4;
        case 0x215fc8u: goto label_215fc8;
        case 0x215fccu: goto label_215fcc;
        case 0x215fd0u: goto label_215fd0;
        case 0x215fd4u: goto label_215fd4;
        case 0x215fd8u: goto label_215fd8;
        case 0x215fdcu: goto label_215fdc;
        case 0x215fe0u: goto label_215fe0;
        case 0x215fe4u: goto label_215fe4;
        case 0x215fe8u: goto label_215fe8;
        case 0x215fecu: goto label_215fec;
        case 0x215ff0u: goto label_215ff0;
        case 0x215ff4u: goto label_215ff4;
        case 0x215ff8u: goto label_215ff8;
        case 0x215ffcu: goto label_215ffc;
        case 0x216000u: goto label_216000;
        case 0x216004u: goto label_216004;
        case 0x216008u: goto label_216008;
        case 0x21600cu: goto label_21600c;
        case 0x216010u: goto label_216010;
        case 0x216014u: goto label_216014;
        case 0x216018u: goto label_216018;
        case 0x21601cu: goto label_21601c;
        case 0x216020u: goto label_216020;
        case 0x216024u: goto label_216024;
        case 0x216028u: goto label_216028;
        case 0x21602cu: goto label_21602c;
        case 0x216030u: goto label_216030;
        case 0x216034u: goto label_216034;
        case 0x216038u: goto label_216038;
        case 0x21603cu: goto label_21603c;
        case 0x216040u: goto label_216040;
        case 0x216044u: goto label_216044;
        case 0x216048u: goto label_216048;
        case 0x21604cu: goto label_21604c;
        case 0x216050u: goto label_216050;
        case 0x216054u: goto label_216054;
        case 0x216058u: goto label_216058;
        case 0x21605cu: goto label_21605c;
        case 0x216060u: goto label_216060;
        case 0x216064u: goto label_216064;
        case 0x216068u: goto label_216068;
        case 0x21606cu: goto label_21606c;
        case 0x216070u: goto label_216070;
        case 0x216074u: goto label_216074;
        case 0x216078u: goto label_216078;
        case 0x21607cu: goto label_21607c;
        case 0x216080u: goto label_216080;
        case 0x216084u: goto label_216084;
        case 0x216088u: goto label_216088;
        case 0x21608cu: goto label_21608c;
        case 0x216090u: goto label_216090;
        case 0x216094u: goto label_216094;
        case 0x216098u: goto label_216098;
        case 0x21609cu: goto label_21609c;
        case 0x2160a0u: goto label_2160a0;
        case 0x2160a4u: goto label_2160a4;
        case 0x2160a8u: goto label_2160a8;
        case 0x2160acu: goto label_2160ac;
        case 0x2160b0u: goto label_2160b0;
        case 0x2160b4u: goto label_2160b4;
        case 0x2160b8u: goto label_2160b8;
        case 0x2160bcu: goto label_2160bc;
        case 0x2160c0u: goto label_2160c0;
        case 0x2160c4u: goto label_2160c4;
        case 0x2160c8u: goto label_2160c8;
        case 0x2160ccu: goto label_2160cc;
        case 0x2160d0u: goto label_2160d0;
        case 0x2160d4u: goto label_2160d4;
        case 0x2160d8u: goto label_2160d8;
        case 0x2160dcu: goto label_2160dc;
        case 0x2160e0u: goto label_2160e0;
        case 0x2160e4u: goto label_2160e4;
        case 0x2160e8u: goto label_2160e8;
        case 0x2160ecu: goto label_2160ec;
        case 0x2160f0u: goto label_2160f0;
        case 0x2160f4u: goto label_2160f4;
        case 0x2160f8u: goto label_2160f8;
        case 0x2160fcu: goto label_2160fc;
        case 0x216100u: goto label_216100;
        case 0x216104u: goto label_216104;
        case 0x216108u: goto label_216108;
        case 0x21610cu: goto label_21610c;
        case 0x216110u: goto label_216110;
        case 0x216114u: goto label_216114;
        case 0x216118u: goto label_216118;
        case 0x21611cu: goto label_21611c;
        case 0x216120u: goto label_216120;
        case 0x216124u: goto label_216124;
        case 0x216128u: goto label_216128;
        case 0x21612cu: goto label_21612c;
        case 0x216130u: goto label_216130;
        case 0x216134u: goto label_216134;
        case 0x216138u: goto label_216138;
        case 0x21613cu: goto label_21613c;
        case 0x216140u: goto label_216140;
        case 0x216144u: goto label_216144;
        case 0x216148u: goto label_216148;
        case 0x21614cu: goto label_21614c;
        case 0x216150u: goto label_216150;
        case 0x216154u: goto label_216154;
        case 0x216158u: goto label_216158;
        case 0x21615cu: goto label_21615c;
        case 0x216160u: goto label_216160;
        case 0x216164u: goto label_216164;
        case 0x216168u: goto label_216168;
        case 0x21616cu: goto label_21616c;
        case 0x216170u: goto label_216170;
        case 0x216174u: goto label_216174;
        case 0x216178u: goto label_216178;
        case 0x21617cu: goto label_21617c;
        case 0x216180u: goto label_216180;
        case 0x216184u: goto label_216184;
        case 0x216188u: goto label_216188;
        case 0x21618cu: goto label_21618c;
        case 0x216190u: goto label_216190;
        case 0x216194u: goto label_216194;
        case 0x216198u: goto label_216198;
        case 0x21619cu: goto label_21619c;
        case 0x2161a0u: goto label_2161a0;
        case 0x2161a4u: goto label_2161a4;
        case 0x2161a8u: goto label_2161a8;
        case 0x2161acu: goto label_2161ac;
        case 0x2161b0u: goto label_2161b0;
        case 0x2161b4u: goto label_2161b4;
        case 0x2161b8u: goto label_2161b8;
        case 0x2161bcu: goto label_2161bc;
        case 0x2161c0u: goto label_2161c0;
        case 0x2161c4u: goto label_2161c4;
        case 0x2161c8u: goto label_2161c8;
        case 0x2161ccu: goto label_2161cc;
        case 0x2161d0u: goto label_2161d0;
        case 0x2161d4u: goto label_2161d4;
        case 0x2161d8u: goto label_2161d8;
        case 0x2161dcu: goto label_2161dc;
        case 0x2161e0u: goto label_2161e0;
        case 0x2161e4u: goto label_2161e4;
        case 0x2161e8u: goto label_2161e8;
        case 0x2161ecu: goto label_2161ec;
        case 0x2161f0u: goto label_2161f0;
        case 0x2161f4u: goto label_2161f4;
        case 0x2161f8u: goto label_2161f8;
        case 0x2161fcu: goto label_2161fc;
        case 0x216200u: goto label_216200;
        case 0x216204u: goto label_216204;
        case 0x216208u: goto label_216208;
        case 0x21620cu: goto label_21620c;
        case 0x216210u: goto label_216210;
        case 0x216214u: goto label_216214;
        case 0x216218u: goto label_216218;
        case 0x21621cu: goto label_21621c;
        case 0x216220u: goto label_216220;
        case 0x216224u: goto label_216224;
        case 0x216228u: goto label_216228;
        case 0x21622cu: goto label_21622c;
        case 0x216230u: goto label_216230;
        case 0x216234u: goto label_216234;
        case 0x216238u: goto label_216238;
        case 0x21623cu: goto label_21623c;
        case 0x216240u: goto label_216240;
        case 0x216244u: goto label_216244;
        case 0x216248u: goto label_216248;
        case 0x21624cu: goto label_21624c;
        case 0x216250u: goto label_216250;
        case 0x216254u: goto label_216254;
        case 0x216258u: goto label_216258;
        case 0x21625cu: goto label_21625c;
        case 0x216260u: goto label_216260;
        case 0x216264u: goto label_216264;
        case 0x216268u: goto label_216268;
        case 0x21626cu: goto label_21626c;
        case 0x216270u: goto label_216270;
        case 0x216274u: goto label_216274;
        case 0x216278u: goto label_216278;
        case 0x21627cu: goto label_21627c;
        case 0x216280u: goto label_216280;
        case 0x216284u: goto label_216284;
        case 0x216288u: goto label_216288;
        case 0x21628cu: goto label_21628c;
        case 0x216290u: goto label_216290;
        case 0x216294u: goto label_216294;
        case 0x216298u: goto label_216298;
        case 0x21629cu: goto label_21629c;
        case 0x2162a0u: goto label_2162a0;
        case 0x2162a4u: goto label_2162a4;
        case 0x2162a8u: goto label_2162a8;
        case 0x2162acu: goto label_2162ac;
        case 0x2162b0u: goto label_2162b0;
        case 0x2162b4u: goto label_2162b4;
        case 0x2162b8u: goto label_2162b8;
        case 0x2162bcu: goto label_2162bc;
        case 0x2162c0u: goto label_2162c0;
        case 0x2162c4u: goto label_2162c4;
        case 0x2162c8u: goto label_2162c8;
        case 0x2162ccu: goto label_2162cc;
        case 0x2162d0u: goto label_2162d0;
        case 0x2162d4u: goto label_2162d4;
        case 0x2162d8u: goto label_2162d8;
        case 0x2162dcu: goto label_2162dc;
        case 0x2162e0u: goto label_2162e0;
        case 0x2162e4u: goto label_2162e4;
        case 0x2162e8u: goto label_2162e8;
        case 0x2162ecu: goto label_2162ec;
        case 0x2162f0u: goto label_2162f0;
        case 0x2162f4u: goto label_2162f4;
        case 0x2162f8u: goto label_2162f8;
        case 0x2162fcu: goto label_2162fc;
        case 0x216300u: goto label_216300;
        case 0x216304u: goto label_216304;
        case 0x216308u: goto label_216308;
        case 0x21630cu: goto label_21630c;
        case 0x216310u: goto label_216310;
        case 0x216314u: goto label_216314;
        case 0x216318u: goto label_216318;
        case 0x21631cu: goto label_21631c;
        case 0x216320u: goto label_216320;
        case 0x216324u: goto label_216324;
        case 0x216328u: goto label_216328;
        case 0x21632cu: goto label_21632c;
        case 0x216330u: goto label_216330;
        case 0x216334u: goto label_216334;
        case 0x216338u: goto label_216338;
        case 0x21633cu: goto label_21633c;
        case 0x216340u: goto label_216340;
        case 0x216344u: goto label_216344;
        case 0x216348u: goto label_216348;
        case 0x21634cu: goto label_21634c;
        case 0x216350u: goto label_216350;
        case 0x216354u: goto label_216354;
        case 0x216358u: goto label_216358;
        case 0x21635cu: goto label_21635c;
        case 0x216360u: goto label_216360;
        case 0x216364u: goto label_216364;
        case 0x216368u: goto label_216368;
        case 0x21636cu: goto label_21636c;
        case 0x216370u: goto label_216370;
        case 0x216374u: goto label_216374;
        case 0x216378u: goto label_216378;
        case 0x21637cu: goto label_21637c;
        case 0x216380u: goto label_216380;
        case 0x216384u: goto label_216384;
        case 0x216388u: goto label_216388;
        case 0x21638cu: goto label_21638c;
        case 0x216390u: goto label_216390;
        case 0x216394u: goto label_216394;
        case 0x216398u: goto label_216398;
        case 0x21639cu: goto label_21639c;
        case 0x2163a0u: goto label_2163a0;
        case 0x2163a4u: goto label_2163a4;
        case 0x2163a8u: goto label_2163a8;
        case 0x2163acu: goto label_2163ac;
        case 0x2163b0u: goto label_2163b0;
        case 0x2163b4u: goto label_2163b4;
        case 0x2163b8u: goto label_2163b8;
        case 0x2163bcu: goto label_2163bc;
        case 0x2163c0u: goto label_2163c0;
        case 0x2163c4u: goto label_2163c4;
        case 0x2163c8u: goto label_2163c8;
        case 0x2163ccu: goto label_2163cc;
        case 0x2163d0u: goto label_2163d0;
        case 0x2163d4u: goto label_2163d4;
        case 0x2163d8u: goto label_2163d8;
        case 0x2163dcu: goto label_2163dc;
        case 0x2163e0u: goto label_2163e0;
        case 0x2163e4u: goto label_2163e4;
        case 0x2163e8u: goto label_2163e8;
        case 0x2163ecu: goto label_2163ec;
        case 0x2163f0u: goto label_2163f0;
        case 0x2163f4u: goto label_2163f4;
        case 0x2163f8u: goto label_2163f8;
        case 0x2163fcu: goto label_2163fc;
        case 0x216400u: goto label_216400;
        case 0x216404u: goto label_216404;
        case 0x216408u: goto label_216408;
        case 0x21640cu: goto label_21640c;
        case 0x216410u: goto label_216410;
        case 0x216414u: goto label_216414;
        case 0x216418u: goto label_216418;
        case 0x21641cu: goto label_21641c;
        case 0x216420u: goto label_216420;
        case 0x216424u: goto label_216424;
        case 0x216428u: goto label_216428;
        case 0x21642cu: goto label_21642c;
        case 0x216430u: goto label_216430;
        case 0x216434u: goto label_216434;
        case 0x216438u: goto label_216438;
        case 0x21643cu: goto label_21643c;
        case 0x216440u: goto label_216440;
        case 0x216444u: goto label_216444;
        case 0x216448u: goto label_216448;
        case 0x21644cu: goto label_21644c;
        case 0x216450u: goto label_216450;
        case 0x216454u: goto label_216454;
        case 0x216458u: goto label_216458;
        case 0x21645cu: goto label_21645c;
        case 0x216460u: goto label_216460;
        case 0x216464u: goto label_216464;
        case 0x216468u: goto label_216468;
        case 0x21646cu: goto label_21646c;
        case 0x216470u: goto label_216470;
        case 0x216474u: goto label_216474;
        case 0x216478u: goto label_216478;
        case 0x21647cu: goto label_21647c;
        case 0x216480u: goto label_216480;
        case 0x216484u: goto label_216484;
        case 0x216488u: goto label_216488;
        case 0x21648cu: goto label_21648c;
        case 0x216490u: goto label_216490;
        case 0x216494u: goto label_216494;
        case 0x216498u: goto label_216498;
        case 0x21649cu: goto label_21649c;
        case 0x2164a0u: goto label_2164a0;
        case 0x2164a4u: goto label_2164a4;
        case 0x2164a8u: goto label_2164a8;
        case 0x2164acu: goto label_2164ac;
        case 0x2164b0u: goto label_2164b0;
        case 0x2164b4u: goto label_2164b4;
        case 0x2164b8u: goto label_2164b8;
        case 0x2164bcu: goto label_2164bc;
        case 0x2164c0u: goto label_2164c0;
        case 0x2164c4u: goto label_2164c4;
        case 0x2164c8u: goto label_2164c8;
        case 0x2164ccu: goto label_2164cc;
        case 0x2164d0u: goto label_2164d0;
        case 0x2164d4u: goto label_2164d4;
        case 0x2164d8u: goto label_2164d8;
        case 0x2164dcu: goto label_2164dc;
        case 0x2164e0u: goto label_2164e0;
        case 0x2164e4u: goto label_2164e4;
        case 0x2164e8u: goto label_2164e8;
        case 0x2164ecu: goto label_2164ec;
        case 0x2164f0u: goto label_2164f0;
        case 0x2164f4u: goto label_2164f4;
        case 0x2164f8u: goto label_2164f8;
        case 0x2164fcu: goto label_2164fc;
        case 0x216500u: goto label_216500;
        case 0x216504u: goto label_216504;
        case 0x216508u: goto label_216508;
        case 0x21650cu: goto label_21650c;
        case 0x216510u: goto label_216510;
        case 0x216514u: goto label_216514;
        case 0x216518u: goto label_216518;
        case 0x21651cu: goto label_21651c;
        case 0x216520u: goto label_216520;
        case 0x216524u: goto label_216524;
        case 0x216528u: goto label_216528;
        case 0x21652cu: goto label_21652c;
        case 0x216530u: goto label_216530;
        case 0x216534u: goto label_216534;
        case 0x216538u: goto label_216538;
        case 0x21653cu: goto label_21653c;
        case 0x216540u: goto label_216540;
        case 0x216544u: goto label_216544;
        case 0x216548u: goto label_216548;
        case 0x21654cu: goto label_21654c;
        case 0x216550u: goto label_216550;
        case 0x216554u: goto label_216554;
        case 0x216558u: goto label_216558;
        case 0x21655cu: goto label_21655c;
        case 0x216560u: goto label_216560;
        case 0x216564u: goto label_216564;
        case 0x216568u: goto label_216568;
        case 0x21656cu: goto label_21656c;
        case 0x216570u: goto label_216570;
        case 0x216574u: goto label_216574;
        case 0x216578u: goto label_216578;
        case 0x21657cu: goto label_21657c;
        case 0x216580u: goto label_216580;
        case 0x216584u: goto label_216584;
        case 0x216588u: goto label_216588;
        case 0x21658cu: goto label_21658c;
        case 0x216590u: goto label_216590;
        case 0x216594u: goto label_216594;
        case 0x216598u: goto label_216598;
        case 0x21659cu: goto label_21659c;
        case 0x2165a0u: goto label_2165a0;
        case 0x2165a4u: goto label_2165a4;
        case 0x2165a8u: goto label_2165a8;
        case 0x2165acu: goto label_2165ac;
        case 0x2165b0u: goto label_2165b0;
        case 0x2165b4u: goto label_2165b4;
        case 0x2165b8u: goto label_2165b8;
        case 0x2165bcu: goto label_2165bc;
        case 0x2165c0u: goto label_2165c0;
        case 0x2165c4u: goto label_2165c4;
        case 0x2165c8u: goto label_2165c8;
        case 0x2165ccu: goto label_2165cc;
        case 0x2165d0u: goto label_2165d0;
        case 0x2165d4u: goto label_2165d4;
        case 0x2165d8u: goto label_2165d8;
        case 0x2165dcu: goto label_2165dc;
        case 0x2165e0u: goto label_2165e0;
        case 0x2165e4u: goto label_2165e4;
        case 0x2165e8u: goto label_2165e8;
        case 0x2165ecu: goto label_2165ec;
        case 0x2165f0u: goto label_2165f0;
        case 0x2165f4u: goto label_2165f4;
        case 0x2165f8u: goto label_2165f8;
        case 0x2165fcu: goto label_2165fc;
        case 0x216600u: goto label_216600;
        case 0x216604u: goto label_216604;
        case 0x216608u: goto label_216608;
        case 0x21660cu: goto label_21660c;
        case 0x216610u: goto label_216610;
        case 0x216614u: goto label_216614;
        case 0x216618u: goto label_216618;
        case 0x21661cu: goto label_21661c;
        case 0x216620u: goto label_216620;
        case 0x216624u: goto label_216624;
        case 0x216628u: goto label_216628;
        case 0x21662cu: goto label_21662c;
        case 0x216630u: goto label_216630;
        case 0x216634u: goto label_216634;
        case 0x216638u: goto label_216638;
        case 0x21663cu: goto label_21663c;
        case 0x216640u: goto label_216640;
        case 0x216644u: goto label_216644;
        case 0x216648u: goto label_216648;
        case 0x21664cu: goto label_21664c;
        case 0x216650u: goto label_216650;
        case 0x216654u: goto label_216654;
        case 0x216658u: goto label_216658;
        case 0x21665cu: goto label_21665c;
        case 0x216660u: goto label_216660;
        case 0x216664u: goto label_216664;
        case 0x216668u: goto label_216668;
        case 0x21666cu: goto label_21666c;
        case 0x216670u: goto label_216670;
        case 0x216674u: goto label_216674;
        case 0x216678u: goto label_216678;
        case 0x21667cu: goto label_21667c;
        case 0x216680u: goto label_216680;
        case 0x216684u: goto label_216684;
        case 0x216688u: goto label_216688;
        case 0x21668cu: goto label_21668c;
        case 0x216690u: goto label_216690;
        case 0x216694u: goto label_216694;
        case 0x216698u: goto label_216698;
        case 0x21669cu: goto label_21669c;
        case 0x2166a0u: goto label_2166a0;
        case 0x2166a4u: goto label_2166a4;
        case 0x2166a8u: goto label_2166a8;
        case 0x2166acu: goto label_2166ac;
        case 0x2166b0u: goto label_2166b0;
        case 0x2166b4u: goto label_2166b4;
        case 0x2166b8u: goto label_2166b8;
        case 0x2166bcu: goto label_2166bc;
        case 0x2166c0u: goto label_2166c0;
        case 0x2166c4u: goto label_2166c4;
        case 0x2166c8u: goto label_2166c8;
        case 0x2166ccu: goto label_2166cc;
        default: break;
    }

    ctx->pc = 0x215e78u;

label_215e78:
    // 0x215e78: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x215e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_215e7c:
    // 0x215e7c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x215e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_215e80:
    // 0x215e80: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x215e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_215e84:
    // 0x215e84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x215e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_215e88:
    // 0x215e88: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x215e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_215e8c:
    // 0x215e8c: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x215e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_215e90:
    // 0x215e90: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x215e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_215e94:
    // 0x215e94: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x215e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_215e98:
    // 0x215e98: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x215e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_215e9c:
    // 0x215e9c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x215e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_215ea0:
    // 0x215ea0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x215ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_215ea4:
    // 0x215ea4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x215ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_215ea8:
    // 0x215ea8: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x215ea8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_215eac:
    // 0x215eac: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x215eacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_215eb0:
    // 0x215eb0: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x215eb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_215eb4:
    // 0x215eb4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x215eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_215eb8:
    // 0x215eb8: 0x144001f6  bnez        $v0, . + 4 + (0x1F6 << 2)
label_215ebc:
    if (ctx->pc == 0x215EBCu) {
        ctx->pc = 0x215EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EB8u;
        // 0x215ebc: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215EC0u;
        goto label_215ec0;
    }
    ctx->pc = 0x215EB8u;
    {
        const bool branch_taken_0x215eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EB8u;
        // 0x215ebc: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215eb8) {
            ctx->pc = 0x216694u;
            goto label_216694;
        }
    }
    ctx->pc = 0x215EC0u;
label_215ec0:
    // 0x215ec0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x215ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_215ec4:
    // 0x215ec4: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x215ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_215ec8:
    // 0x215ec8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x215ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_215ecc:
    // 0x215ecc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x215eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_215ed0:
    // 0x215ed0: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_215ed4:
    if (ctx->pc == 0x215ED4u) {
        ctx->pc = 0x215ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215ED0u;
        // 0x215ed4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215ED8u;
        goto label_215ed8;
    }
    ctx->pc = 0x215ED0u;
    {
        const bool branch_taken_0x215ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215ED0u;
        // 0x215ed4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ed0) {
            ctx->pc = 0x216058u;
            goto label_216058;
        }
    }
    ctx->pc = 0x215ED8u;
label_215ed8:
    // 0x215ed8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_215edc:
    if (ctx->pc == 0x215EDCu) {
        ctx->pc = 0x215EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215ED8u;
        // 0x215edc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215EE0u;
        goto label_215ee0;
    }
    ctx->pc = 0x215ED8u;
    {
        const bool branch_taken_0x215ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215ED8u;
        // 0x215edc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ed8) {
            ctx->pc = 0x215F9Cu;
            goto label_215f9c;
        }
    }
    ctx->pc = 0x215EE0u;
label_215ee0:
    // 0x215ee0: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x215ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
label_215ee4:
    // 0x215ee4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x215ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_215ee8:
    // 0x215ee8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x215ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_215eec:
    // 0x215eec: 0x3c013fc6  lui         $at, 0x3FC6
    ctx->pc = 0x215eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16326 << 16));
label_215ef0:
    // 0x215ef0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x215ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_215ef4:
    // 0x215ef4: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x215ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_215ef8:
    // 0x215ef8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x215ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_215efc:
    // 0x215efc: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x215efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_215f00:
    // 0x215f00: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x215f00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_215f04:
    // 0x215f04: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x215f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_215f08:
    // 0x215f08: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x215f08u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_215f0c:
    // 0x215f0c: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x215f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
label_215f10:
    // 0x215f10: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x215f10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_215f14:
    // 0x215f14: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x215f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_215f18:
    // 0x215f18: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x215f18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_215f1c:
    // 0x215f1c: 0x3c013d9f  lui         $at, 0x3D9F
    ctx->pc = 0x215f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15775 << 16));
label_215f20:
    // 0x215f20: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x215f20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
label_215f24:
    // 0x215f24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x215f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_215f28:
    // 0x215f28: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x215f28u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_215f2c:
    // 0x215f2c: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x215f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_215f30:
    // 0x215f30: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x215f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_215f34:
    // 0x215f34: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x215f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_215f38:
    // 0x215f38: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x215f38u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_215f3c:
    // 0x215f3c: 0x3c013d50  lui         $at, 0x3D50
    ctx->pc = 0x215f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15696 << 16));
label_215f40:
    // 0x215f40: 0x3421e560  ori         $at, $at, 0xE560
    ctx->pc = 0x215f40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58720);
label_215f44:
    // 0x215f44: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x215f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_215f48:
    // 0x215f48: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x215f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_215f4c:
    // 0x215f4c: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x215f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
label_215f50:
    // 0x215f50: 0x3421b22d  ori         $at, $at, 0xB22D
    ctx->pc = 0x215f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45613);
label_215f54:
    // 0x215f54: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x215f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_215f58:
    // 0x215f58: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x215f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_215f5c:
    // 0x215f5c: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x215f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_215f60:
    // 0x215f60: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x215f60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_215f64:
    // 0x215f64: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x215f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_215f68:
    // 0x215f68: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x215f68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_215f6c:
    // 0x215f6c: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x215f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
label_215f70:
    // 0x215f70: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x215f70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_215f74:
    // 0x215f74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215f78:
    // 0x215f78: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x215f78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_215f7c:
    // 0x215f7c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x215f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_215f80:
    // 0x215f80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x215f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_215f84:
    // 0x215f84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x215f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_215f88:
    // 0x215f88: 0x3c013f5c  lui         $at, 0x3F5C
    ctx->pc = 0x215f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16220 << 16));
label_215f8c:
    // 0x215f8c: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x215f8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_215f90:
    // 0x215f90: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x215f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_215f94:
    // 0x215f94: 0x100000bf  b           . + 4 + (0xBF << 2)
label_215f98:
    if (ctx->pc == 0x215F98u) {
        ctx->pc = 0x215F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F94u;
        // 0x215f98: 0x3c080051  lui         $t0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215F9Cu;
        goto label_215f9c;
    }
    ctx->pc = 0x215F94u;
    {
        const bool branch_taken_0x215f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F94u;
        // 0x215f98: 0x3c080051  lui         $t0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f94) {
            ctx->pc = 0x216294u;
            goto label_216294;
        }
    }
    ctx->pc = 0x215F9Cu;
label_215f9c:
    // 0x215f9c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x215f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_215fa0:
    // 0x215fa0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x215fa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_215fa4:
    // 0x215fa4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x215fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_215fa8:
    // 0x215fa8: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x215fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_215fac:
    // 0x215fac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x215facu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_215fb0:
    // 0x215fb0: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x215fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_215fb4:
    // 0x215fb4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x215fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_215fb8:
    // 0x215fb8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x215fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_215fbc:
    // 0x215fbc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x215fbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_215fc0:
    // 0x215fc0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x215fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_215fc4:
    // 0x215fc4: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x215fc4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_215fc8:
    // 0x215fc8: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x215fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
label_215fcc:
    // 0x215fcc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x215fccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_215fd0:
    // 0x215fd0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x215fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_215fd4:
    // 0x215fd4: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x215fd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_215fd8:
    // 0x215fd8: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x215fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_215fdc:
    // 0x215fdc: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x215fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_215fe0:
    // 0x215fe0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x215fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_215fe4:
    // 0x215fe4: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x215fe4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_215fe8:
    // 0x215fe8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x215fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_215fec:
    // 0x215fec: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x215fecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_215ff0:
    // 0x215ff0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x215ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_215ff4:
    // 0x215ff4: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x215ff4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_215ff8:
    // 0x215ff8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x215ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_215ffc:
    // 0x215ffc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x215ffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_216000:
    // 0x216000: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x216000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_216004:
    // 0x216004: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x216004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_216008:
    // 0x216008: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x216008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
label_21600c:
    // 0x21600c: 0x3421b22d  ori         $at, $at, 0xB22D
    ctx->pc = 0x21600cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45613);
label_216010:
    // 0x216010: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x216010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_216014:
    // 0x216014: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x216014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_216018:
    // 0x216018: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x216018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
label_21601c:
    // 0x21601c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x21601cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_216020:
    // 0x216020: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x216020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_216024:
    // 0x216024: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x216024u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_216028:
    // 0x216028: 0x3c013ee3  lui         $at, 0x3EE3
    ctx->pc = 0x216028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16099 << 16));
label_21602c:
    // 0x21602c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x21602cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_216030:
    // 0x216030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_216034:
    // 0x216034: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x216034u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_216038:
    // 0x216038: 0x3c013ec2  lui         $at, 0x3EC2
    ctx->pc = 0x216038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16066 << 16));
label_21603c:
    // 0x21603c: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x21603cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_216040:
    // 0x216040: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x216040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_216044:
    // 0x216044: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x216044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
label_216048:
    // 0x216048: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x216048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_21604c:
    // 0x21604c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x21604cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_216050:
    // 0x216050: 0x10000090  b           . + 4 + (0x90 << 2)
label_216054:
    if (ctx->pc == 0x216054u) {
        ctx->pc = 0x216054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216050u;
        // 0x216054: 0x3c080051  lui         $t0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216058u;
        goto label_216058;
    }
    ctx->pc = 0x216050u;
    {
        const bool branch_taken_0x216050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216050u;
        // 0x216054: 0x3c080051  lui         $t0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216050) {
            ctx->pc = 0x216294u;
            goto label_216294;
        }
    }
    ctx->pc = 0x216058u;
label_216058:
    // 0x216058: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x216058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_21605c:
    // 0x21605c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_216060:
    if (ctx->pc == 0x216060u) {
        ctx->pc = 0x216060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21605Cu;
        // 0x216060: 0x3c0f0051  lui         $t7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216064u;
        goto label_216064;
    }
    ctx->pc = 0x21605Cu;
    {
        const bool branch_taken_0x21605c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21605Cu;
        // 0x216060: 0x3c0f0051  lui         $t7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21605c) {
            ctx->pc = 0x216148u;
            goto label_216148;
        }
    }
    ctx->pc = 0x216064u;
label_216064:
    // 0x216064: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x216064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
label_216068:
    // 0x216068: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x216068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_21606c:
    // 0x21606c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x21606cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_216070:
    // 0x216070: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x216070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
label_216074:
    // 0x216074: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x216074u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_216078:
    // 0x216078: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x216078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_21607c:
    // 0x21607c: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x21607cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_216080:
    // 0x216080: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x216080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_216084:
    // 0x216084: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x216084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_216088:
    // 0x216088: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x216088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_21608c:
    // 0x21608c: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x21608cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_216090:
    // 0x216090: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x216090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_216094:
    // 0x216094: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x216094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_216098:
    // 0x216098: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21609c:
    // 0x21609c: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x21609cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2160a0:
    // 0x2160a0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2160a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2160a4:
    // 0x2160a4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2160a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2160a8:
    // 0x2160a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2160a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2160ac:
    // 0x2160ac: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x2160acu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_2160b0:
    // 0x2160b0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2160b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2160b4:
    // 0x2160b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2160b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2160b8:
    // 0x2160b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2160b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2160bc:
    // 0x2160bc: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x2160bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_2160c0:
    // 0x2160c0: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x2160c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_2160c4:
    // 0x2160c4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2160c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2160c8:
    // 0x2160c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2160c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2160cc:
    // 0x2160cc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2160ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2160d0:
    // 0x2160d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2160d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2160d4:
    // 0x2160d4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2160d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2160d8:
    // 0x2160d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2160d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2160dc:
    // 0x2160dc: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2160dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_2160e0:
    // 0x2160e0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2160e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2160e4:
    // 0x2160e4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2160e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2160e8:
    // 0x2160e8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2160e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2160ec:
    // 0x2160ec: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2160ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2160f0:
    // 0x2160f0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x2160f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_2160f4:
    // 0x2160f4: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x2160f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_2160f8:
    // 0x2160f8: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x2160f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_2160fc:
    // 0x2160fc: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x2160fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_216100:
    // 0x216100: 0xe48700ec  swc1        $f7, 0xEC($a0)
    ctx->pc = 0x216100u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
label_216104:
    // 0x216104: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x216104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
label_216108:
    // 0x216108: 0x1e0982d  daddu       $s3, $t7, $zero
    ctx->pc = 0x216108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_21610c:
    // 0x21610c: 0xe46100e4  swc1        $f1, 0xE4($v1)
    ctx->pc = 0x21610cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
label_216110:
    // 0x216110: 0x1c0b82d  daddu       $s7, $t6, $zero
    ctx->pc = 0x216110u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_216114:
    // 0x216114: 0xe4a20100  swc1        $f2, 0x100($a1)
    ctx->pc = 0x216114u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 256), bits); }
label_216118:
    // 0x216118: 0x1a0b02d  daddu       $s6, $t5, $zero
    ctx->pc = 0x216118u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_21611c:
    // 0x21611c: 0xe4c30104  swc1        $f3, 0x104($a2)
    ctx->pc = 0x21611cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 260), bits); }
label_216120:
    // 0x216120: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x216120u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_216124:
    // 0x216124: 0xacec010c  sw          $t4, 0x10C($a3)
    ctx->pc = 0x216124u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 268), GPR_U32(ctx, 12));
label_216128:
    // 0x216128: 0xe5040110  swc1        $f4, 0x110($t0)
    ctx->pc = 0x216128u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 272), bits); }
label_21612c:
    // 0x21612c: 0xe5a800f4  swc1        $f8, 0xF4($t5)
    ctx->pc = 0x21612cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 244), bits); }
label_216130:
    // 0x216130: 0xad2c0108  sw          $t4, 0x108($t1)
    ctx->pc = 0x216130u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 264), GPR_U32(ctx, 12));
label_216134:
    // 0x216134: 0xe5660114  swc1        $f6, 0x114($t3)
    ctx->pc = 0x216134u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 276), bits); }
label_216138:
    // 0x216138: 0xe5450118  swc1        $f5, 0x118($t2)
    ctx->pc = 0x216138u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 280), bits); }
label_21613c:
    // 0x21613c: 0xe5e700e8  swc1        $f7, 0xE8($t7)
    ctx->pc = 0x21613cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 232), bits); }
label_216140:
    // 0x216140: 0x1000006c  b           . + 4 + (0x6C << 2)
label_216144:
    if (ctx->pc == 0x216144u) {
        ctx->pc = 0x216144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216140u;
        // 0x216144: 0xe5c600f0  swc1        $f6, 0xF0($t6) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216148u;
        goto label_216148;
    }
    ctx->pc = 0x216140u;
    {
        const bool branch_taken_0x216140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216140u;
        // 0x216144: 0xe5c600f0  swc1        $f6, 0xF0($t6) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x216140) {
            ctx->pc = 0x2162F4u;
            goto label_2162f4;
        }
    }
    ctx->pc = 0x216148u;
label_216148:
    // 0x216148: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x216148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_21614c:
    // 0x21614c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_216150:
    if (ctx->pc == 0x216150u) {
        ctx->pc = 0x216150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21614Cu;
        // 0x216150: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216154u;
        goto label_216154;
    }
    ctx->pc = 0x21614Cu;
    {
        const bool branch_taken_0x21614c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21614Cu;
        // 0x216150: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21614c) {
            ctx->pc = 0x2161E0u;
            goto label_2161e0;
        }
    }
    ctx->pc = 0x216154u;
label_216154:
    // 0x216154: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x216154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
label_216158:
    // 0x216158: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x216158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_21615c:
    // 0x21615c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x21615cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_216160:
    // 0x216160: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x216160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
label_216164:
    // 0x216164: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x216164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_216168:
    // 0x216168: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x216168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_21616c:
    // 0x21616c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x21616cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_216170:
    // 0x216170: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x216170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_216174:
    // 0x216174: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x216174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_216178:
    // 0x216178: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x216178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_21617c:
    // 0x21617c: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x21617cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_216180:
    // 0x216180: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x216180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_216184:
    // 0x216184: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x216184u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_216188:
    // 0x216188: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x216188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_21618c:
    // 0x21618c: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x21618cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_216190:
    // 0x216190: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x216190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_216194:
    // 0x216194: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x216194u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_216198:
    // 0x216198: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x216198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_21619c:
    // 0x21619c: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x21619cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_2161a0:
    // 0x2161a0: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x2161a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_2161a4:
    // 0x2161a4: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x2161a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_2161a8:
    // 0x2161a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2161a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2161ac:
    // 0x2161ac: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x2161acu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_2161b0:
    // 0x2161b0: 0x3c013da5  lui         $at, 0x3DA5
    ctx->pc = 0x2161b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15781 << 16));
label_2161b4:
    // 0x2161b4: 0x3421e354  ori         $at, $at, 0xE354
    ctx->pc = 0x2161b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58196);
label_2161b8:
    // 0x2161b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2161b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2161bc:
    // 0x2161bc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2161bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2161c0:
    // 0x2161c0: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x2161c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
label_2161c4:
    // 0x2161c4: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2161c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_2161c8:
    // 0x2161c8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2161c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2161cc:
    // 0x2161cc: 0x3c013e14  lui         $at, 0x3E14
    ctx->pc = 0x2161ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15892 << 16));
label_2161d0:
    // 0x2161d0: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x2161d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_2161d4:
    // 0x2161d4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2161d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_2161d8:
    // 0x2161d8: 0x10000023  b           . + 4 + (0x23 << 2)
label_2161dc:
    if (ctx->pc == 0x2161DCu) {
        ctx->pc = 0x2161DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161D8u;
        // 0x2161dc: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2161E0u;
        goto label_2161e0;
    }
    ctx->pc = 0x2161D8u;
    {
        const bool branch_taken_0x2161d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2161DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161D8u;
        // 0x2161dc: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2161d8) {
            ctx->pc = 0x216268u;
            goto label_216268;
        }
    }
    ctx->pc = 0x2161E0u;
label_2161e0:
    // 0x2161e0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2161e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2161e4:
    // 0x2161e4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2161e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2161e8:
    // 0x2161e8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2161e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_2161ec:
    // 0x2161ec: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x2161ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_2161f0:
    // 0x2161f0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2161f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2161f4:
    // 0x2161f4: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2161f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_2161f8:
    // 0x2161f8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2161f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_2161fc:
    // 0x2161fc: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2161fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_216200:
    // 0x216200: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x216200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_216204:
    // 0x216204: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x216204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_216208:
    // 0x216208: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x216208u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_21620c:
    // 0x21620c: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x21620cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_216210:
    // 0x216210: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x216210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_216214:
    // 0x216214: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x216214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_216218:
    // 0x216218: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x216218u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21621c:
    // 0x21621c: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x21621cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_216220:
    // 0x216220: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x216220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_216224:
    // 0x216224: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x216224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_216228:
    // 0x216228: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x216228u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_21622c:
    // 0x21622c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x21622cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_216230:
    // 0x216230: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x216230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_216234:
    // 0x216234: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x216234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_216238:
    // 0x216238: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x216238u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_21623c:
    // 0x21623c: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x21623cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
label_216240:
    // 0x216240: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x216240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_216244:
    // 0x216244: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x216244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_216248:
    // 0x216248: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x216248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_21624c:
    // 0x21624c: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x21624cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
label_216250:
    // 0x216250: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x216250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_216254:
    // 0x216254: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x216254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_216258:
    // 0x216258: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x216258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_21625c:
    // 0x21625c: 0x3c013e3d  lui         $at, 0x3E3D
    ctx->pc = 0x21625cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15933 << 16));
label_216260:
    // 0x216260: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x216260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_216264:
    // 0x216264: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x216264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_216268:
    // 0x216268: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x216268u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_21626c:
    // 0x21626c: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x21626cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_216270:
    // 0x216270: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x216270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_216274:
    // 0x216274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_216278:
    // 0x216278: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x216278u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_21627c:
    // 0x21627c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21627cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_216280:
    // 0x216280: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x216280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_216284:
    // 0x216284: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x216284u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_216288:
    // 0x216288: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x216288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
label_21628c:
    // 0x21628c: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x21628cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_216290:
    // 0x216290: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x216290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_216294:
    // 0x216294: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x216294u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_216298:
    // 0x216298: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x216298u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_21629c:
    // 0x21629c: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x21629cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_2162a0:
    // 0x2162a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2162a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2162a4:
    // 0x2162a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2162a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2162a8:
    // 0x2162a8: 0xe48700ec  swc1        $f7, 0xEC($a0)
    ctx->pc = 0x2162a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
label_2162ac:
    // 0x2162ac: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2162acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2162b0:
    // 0x2162b0: 0xe4a200e0  swc1        $f2, 0xE0($a1)
    ctx->pc = 0x2162b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
label_2162b4:
    // 0x2162b4: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x2162b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2162b8:
    // 0x2162b8: 0xe4c300e4  swc1        $f3, 0xE4($a2)
    ctx->pc = 0x2162b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 228), bits); }
label_2162bc:
    // 0x2162bc: 0x1e0b02d  daddu       $s6, $t7, $zero
    ctx->pc = 0x2162bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2162c0:
    // 0x2162c0: 0xe4e400f8  swc1        $f4, 0xF8($a3)
    ctx->pc = 0x2162c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 248), bits); }
label_2162c4:
    // 0x2162c4: 0x1a0f02d  daddu       $fp, $t5, $zero
    ctx->pc = 0x2162c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2162c8:
    // 0x2162c8: 0xe50500fc  swc1        $f5, 0xFC($t0)
    ctx->pc = 0x2162c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 252), bits); }
label_2162cc:
    // 0x2162cc: 0xe5260100  swc1        $f6, 0x100($t1)
    ctx->pc = 0x2162ccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 256), bits); }
label_2162d0:
    // 0x2162d0: 0xe5400104  swc1        $f0, 0x104($t2)
    ctx->pc = 0x2162d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 260), bits); }
label_2162d4:
    // 0x2162d4: 0xac4e010c  sw          $t6, 0x10C($v0)
    ctx->pc = 0x2162d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 14));
label_2162d8:
    // 0x2162d8: 0xe4610110  swc1        $f1, 0x110($v1)
    ctx->pc = 0x2162d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
label_2162dc:
    // 0x2162dc: 0xe60b00e8  swc1        $f11, 0xE8($s0)
    ctx->pc = 0x2162dcu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_2162e0:
    // 0x2162e0: 0xe5ea00f4  swc1        $f10, 0xF4($t7)
    ctx->pc = 0x2162e0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 244), bits); }
label_2162e4:
    // 0x2162e4: 0xad6e0108  sw          $t6, 0x108($t3)
    ctx->pc = 0x2162e4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 264), GPR_U32(ctx, 14));
label_2162e8:
    // 0x2162e8: 0xe5a90114  swc1        $f9, 0x114($t5)
    ctx->pc = 0x2162e8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 276), bits); }
label_2162ec:
    // 0x2162ec: 0xe5880118  swc1        $f8, 0x118($t4)
    ctx->pc = 0x2162ecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 280), bits); }
label_2162f0:
    // 0x2162f0: 0xe62900f0  swc1        $f9, 0xF0($s1)
    ctx->pc = 0x2162f0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
label_2162f4:
    // 0x2162f4: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x2162f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
label_2162f8:
    // 0x2162f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2162f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2162fc:
    // 0x2162fc: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x2162fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
label_216300:
    // 0x216300: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x216300u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_216304:
    // 0x216304: 0xc085342  jal         func_214D08
label_216308:
    if (ctx->pc == 0x216308u) {
        ctx->pc = 0x216308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216304u;
        // 0x216308: 0xae40009c  sw          $zero, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21630Cu;
        goto label_21630c;
    }
    ctx->pc = 0x216304u;
    SET_GPR_U32(ctx, 31, 0x21630Cu);
    ctx->pc = 0x216308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216304u;
    // 0x216308: 0xae40009c  sw          $zero, 0x9C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D08u, 0x216304u, 0x21630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21630Cu;
label_21630c:
    // 0x21630c: 0xc08535e  jal         func_214D78
label_216310:
    if (ctx->pc == 0x216310u) {
        ctx->pc = 0x216310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21630Cu;
        // 0x216310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216314u;
        goto label_216314;
    }
    ctx->pc = 0x21630Cu;
    SET_GPR_U32(ctx, 31, 0x216314u);
    ctx->pc = 0x216310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21630Cu;
    // 0x216310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D78u, 0x21630Cu, 0x216314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216314u;
label_216314:
    // 0x216314: 0xc08537c  jal         func_214DF0
label_216318:
    if (ctx->pc == 0x216318u) {
        ctx->pc = 0x216318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216314u;
        // 0x216318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21631Cu;
        goto label_21631c;
    }
    ctx->pc = 0x216314u;
    SET_GPR_U32(ctx, 31, 0x21631Cu);
    ctx->pc = 0x216318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216314u;
    // 0x216318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214DF0u, 0x216314u, 0x21631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21631Cu;
label_21631c:
    // 0x21631c: 0xc08539a  jal         func_214E68
label_216320:
    if (ctx->pc == 0x216320u) {
        ctx->pc = 0x216320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21631Cu;
        // 0x216320: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216324u;
        goto label_216324;
    }
    ctx->pc = 0x21631Cu;
    SET_GPR_U32(ctx, 31, 0x216324u);
    ctx->pc = 0x216320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21631Cu;
    // 0x216320: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214E68u, 0x21631Cu, 0x216324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216324u;
label_216324:
    // 0x216324: 0xc0853b8  jal         func_214EE0
label_216328:
    if (ctx->pc == 0x216328u) {
        ctx->pc = 0x216328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216324u;
        // 0x216328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21632Cu;
        goto label_21632c;
    }
    ctx->pc = 0x216324u;
    SET_GPR_U32(ctx, 31, 0x21632Cu);
    ctx->pc = 0x216328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216324u;
    // 0x216328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214EE0u, 0x216324u, 0x21632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21632Cu;
label_21632c:
    // 0x21632c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x21632cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_216330:
    // 0x216330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x216330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216334:
    // 0x216334: 0xc06ba26  jal         func_1AE898
label_216338:
    if (ctx->pc == 0x216338u) {
        ctx->pc = 0x216338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216334u;
        // 0x216338: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21633Cu;
        goto label_21633c;
    }
    ctx->pc = 0x216334u;
    SET_GPR_U32(ctx, 31, 0x21633Cu);
    ctx->pc = 0x216338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216334u;
    // 0x216338: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x216334u, 0x21633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21633Cu;
label_21633c:
    // 0x21633c: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x21633cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_216340:
    // 0x216340: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x216340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_216344:
    // 0x216344: 0x8eab27e4  lw          $t3, 0x27E4($s5)
    ctx->pc = 0x216344u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_216348:
    // 0x216348: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x216348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_21634c:
    // 0x21634c: 0x24549f70  addiu       $s4, $v0, -0x6090
    ctx->pc = 0x21634cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942576));
label_216350:
    // 0x216350: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x216350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_216354:
    // 0x216354: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x216354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_216358:
    // 0x216358: 0x24a5a110  addiu       $a1, $a1, -0x5EF0
    ctx->pc = 0x216358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942992));
label_21635c:
    // 0x21635c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x21635cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_216360:
    // 0x216360: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x216360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_216364:
    // 0x216364: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x216364u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_216368:
    // 0x216368: 0x24090240  addiu       $t1, $zero, 0x240
    ctx->pc = 0x216368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_21636c:
    // 0x21636c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x21636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_216370:
    // 0x216370: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x216370u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216374:
    // 0x216374: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x216374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_216378:
    // 0x216378: 0x40f809  jalr        $v0
label_21637c:
    if (ctx->pc == 0x21637Cu) {
        ctx->pc = 0x21637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216378u;
        // 0x21637c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216380u;
        goto label_216380;
    }
    ctx->pc = 0x216378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216380u);
        ctx->pc = 0x21637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216378u;
        // 0x21637c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216378u, 0x216380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216380u;
label_216380:
    // 0x216380: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_216384:
    if (ctx->pc == 0x216384u) {
        ctx->pc = 0x216384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216380u;
        // 0x216384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216388u;
        goto label_216388;
    }
    ctx->pc = 0x216380u;
    {
        const bool branch_taken_0x216380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216380u;
        // 0x216384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216380) {
            ctx->pc = 0x216394u;
            goto label_216394;
        }
    }
    ctx->pc = 0x216388u;
label_216388:
    // 0x216388: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x216388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_21638c:
    // 0x21638c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x21638cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_216390:
    // 0x216390: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x216390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_216394:
    // 0x216394: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x216394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_216398:
    // 0x216398: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x216398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_21639c:
    // 0x21639c: 0xc085768  jal         func_215DA0
label_2163a0:
    if (ctx->pc == 0x2163A0u) {
        ctx->pc = 0x2163A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21639Cu;
        // 0x2163a0: 0xae420060  sw          $v0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2163A4u;
        goto label_2163a4;
    }
    ctx->pc = 0x21639Cu;
    SET_GPR_U32(ctx, 31, 0x2163A4u);
    ctx->pc = 0x2163A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21639Cu;
    // 0x2163a0: 0xae420060  sw          $v0, 0x60($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215DA0u, 0x21639Cu, 0x2163A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163A4u;
label_2163a4:
    // 0x2163a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2163a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2163a8:
    // 0x2163a8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2163a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2163ac:
    // 0x2163ac: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2163acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2163b0:
    // 0x2163b0: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2163b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2163b4:
    // 0x2163b4: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2163b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2163b8:
    // 0x2163b8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2163b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_2163bc:
    // 0x2163bc: 0x24a5a120  addiu       $a1, $a1, -0x5EE0
    ctx->pc = 0x2163bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943008));
label_2163c0:
    // 0x2163c0: 0xe6360008  swc1        $f22, 0x8($s1)
    ctx->pc = 0x2163c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2163c4:
    // 0x2163c4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2163c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2163c8:
    // 0x2163c8: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x2163c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2163cc:
    // 0x2163cc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2163ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2163d0:
    // 0x2163d0: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x2163d0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_2163d4:
    // 0x2163d4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2163d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2163d8:
    // 0x2163d8: 0x24090248  addiu       $t1, $zero, 0x248
    ctx->pc = 0x2163d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
label_2163dc:
    // 0x2163dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2163dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2163e0:
    // 0x2163e0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2163e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2163e4:
    // 0x2163e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2163e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2163e8:
    // 0x2163e8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2163e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2163ec:
    // 0x2163ec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2163ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2163f0:
    // 0x2163f0: 0x40f809  jalr        $v0
label_2163f4:
    if (ctx->pc == 0x2163F4u) {
        ctx->pc = 0x2163F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163F0u;
        // 0x2163f4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2163F8u;
        goto label_2163f8;
    }
    ctx->pc = 0x2163F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2163F8u);
        ctx->pc = 0x2163F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163F0u;
        // 0x2163f4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2163F0u, 0x2163F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2163F8u;
label_2163f8:
    // 0x2163f8: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x2163f8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2163fc:
    // 0x2163fc: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
label_216400:
    if (ctx->pc == 0x216400u) {
        ctx->pc = 0x216400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163FCu;
        // 0x216400: 0x240300af  addiu       $v1, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216404u;
        goto label_216404;
    }
    ctx->pc = 0x2163FCu;
    {
        const bool branch_taken_0x2163fc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x216400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163FCu;
        // 0x216400: 0x240300af  addiu       $v1, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163fc) {
            ctx->pc = 0x216414u;
            goto label_216414;
        }
    }
    ctx->pc = 0x216404u;
label_216404:
    // 0x216404: 0xc0686fe  jal         func_1A1BF8
label_216408:
    if (ctx->pc == 0x216408u) {
        ctx->pc = 0x216408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216404u;
        // 0x216408: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21640Cu;
        goto label_21640c;
    }
    ctx->pc = 0x216404u;
    SET_GPR_U32(ctx, 31, 0x21640Cu);
    ctx->pc = 0x216408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216404u;
    // 0x216408: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x216404u, 0x21640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21640Cu;
label_21640c:
    // 0x21640c: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x21640cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216410:
    // 0x216410: 0x240300af  addiu       $v1, $zero, 0xAF
    ctx->pc = 0x216410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
label_216414:
    // 0x216414: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x216414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_216418:
    // 0x216418: 0xa3a30070  sb          $v1, 0x70($sp)
    ctx->pc = 0x216418u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 3));
label_21641c:
    // 0x21641c: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x21641cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_216420:
    // 0x216420: 0xa04c0003  sb          $t4, 0x3($v0)
    ctx->pc = 0x216420u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 12));
label_216424:
    // 0x216424: 0x3c09000c  lui         $t1, 0xC
    ctx->pc = 0x216424u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12 << 16));
label_216428:
    // 0x216428: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x216428u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_21642c:
    // 0x21642c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21642cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_216430:
    // 0x216430: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x216430u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_216434:
    // 0x216434: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x216434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216438:
    // 0x216438: 0xae4d0078  sw          $t5, 0x78($s2)
    ctx->pc = 0x216438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 13));
label_21643c:
    // 0x21643c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21643cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216440:
    // 0x216440: 0x8e4a0064  lw          $t2, 0x64($s2)
    ctx->pc = 0x216440u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_216444:
    // 0x216444: 0x35290005  ori         $t1, $t1, 0x5
    ctx->pc = 0x216444u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)5);
label_216448:
    // 0x216448: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x216448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_21644c:
    // 0x21644c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21644cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216450:
    // 0x216450: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x216450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_216454:
    // 0x216454: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x216454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_216458:
    // 0x216458: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x216458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
label_21645c:
    // 0x21645c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21645cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_216460:
    // 0x216460: 0x1a42021  addu        $a0, $t5, $a0
    ctx->pc = 0x216460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_216464:
    // 0x216464: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x216464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_216468:
    // 0x216468: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x216468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_21646c:
    // 0x21646c: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x21646cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_216470:
    // 0x216470: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x216470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_216474:
    // 0x216474: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x216474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_216478:
    // 0x216478: 0x40f809  jalr        $v0
label_21647c:
    if (ctx->pc == 0x21647Cu) {
        ctx->pc = 0x21647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216478u;
        // 0x21647c: 0xc66c00e8  lwc1        $f12, 0xE8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216480u;
        goto label_216480;
    }
    ctx->pc = 0x216478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216480u);
        ctx->pc = 0x21647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216478u;
        // 0x21647c: 0xc66c00e8  lwc1        $f12, 0xE8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216478u, 0x216480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216480u;
label_216480:
    // 0x216480: 0xc6e000f0  lwc1        $f0, 0xF0($s7)
    ctx->pc = 0x216480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216484:
    // 0x216484: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x216484u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_216488:
    // 0x216488: 0xc6c100f4  lwc1        $f1, 0xF4($s6)
    ctx->pc = 0x216488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21648c:
    // 0x21648c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x21648cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_216490:
    // 0x216490: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x216490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_216494:
    // 0x216494: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x216494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_216498:
    // 0x216498: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x216498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_21649c:
    // 0x21649c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21649cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2164a0:
    // 0x2164a0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2164a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_2164a4:
    // 0x2164a4: 0x24a5a130  addiu       $a1, $a1, -0x5ED0
    ctx->pc = 0x2164a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943024));
label_2164a8:
    // 0x2164a8: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x2164a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2164ac:
    // 0x2164ac: 0x24060270  addiu       $a2, $zero, 0x270
    ctx->pc = 0x2164acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_2164b0:
    // 0x2164b0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2164b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_2164b4:
    // 0x2164b4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2164b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2164b8:
    // 0x2164b8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2164b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_2164bc:
    // 0x2164bc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2164bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2164c0:
    // 0x2164c0: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2164c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_2164c4:
    // 0x2164c4: 0x2409024e  addiu       $t1, $zero, 0x24E
    ctx->pc = 0x2164c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
label_2164c8:
    // 0x2164c8: 0xe675000c  swc1        $f21, 0xC($s3)
    ctx->pc = 0x2164c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_2164cc:
    // 0x2164cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2164ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2164d0:
    // 0x2164d0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2164d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_2164d4:
    // 0x2164d4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2164d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_2164d8:
    // 0x2164d8: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2164d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_2164dc:
    // 0x2164dc: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x2164dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2164e0:
    // 0x2164e0: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x2164e0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_2164e4:
    // 0x2164e4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2164e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2164e8:
    // 0x2164e8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2164e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2164ec:
    // 0x2164ec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2164ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2164f0:
    // 0x2164f0: 0x40f809  jalr        $v0
label_2164f4:
    if (ctx->pc == 0x2164F4u) {
        ctx->pc = 0x2164F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164F0u;
        // 0x2164f4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2164F8u;
        goto label_2164f8;
    }
    ctx->pc = 0x2164F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2164F8u);
        ctx->pc = 0x2164F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164F0u;
        // 0x2164f4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2164F0u, 0x2164F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2164F8u;
label_2164f8:
    // 0x2164f8: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2164f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2164fc:
    // 0x2164fc: 0x51600005  beql        $t3, $zero, . + 4 + (0x5 << 2)
label_216500:
    if (ctx->pc == 0x216500u) {
        ctx->pc = 0x216500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164FCu;
        // 0x216500: 0xae4b0084  sw          $t3, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216504u;
        goto label_216504;
    }
    ctx->pc = 0x2164FCu;
    {
        const bool branch_taken_0x2164fc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2164fc) {
            ctx->pc = 0x216500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2164FCu;
            // 0x216500: 0xae4b0084  sw          $t3, 0x84($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216514u;
            goto label_216514;
        }
    }
    ctx->pc = 0x216504u;
label_216504:
    // 0x216504: 0xc078bd0  jal         func_1E2F40
label_216508:
    if (ctx->pc == 0x216508u) {
        ctx->pc = 0x216508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216504u;
        // 0x216508: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21650Cu;
        goto label_21650c;
    }
    ctx->pc = 0x216504u;
    SET_GPR_U32(ctx, 31, 0x21650Cu);
    ctx->pc = 0x216508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216504u;
    // 0x216508: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2F40u, 0x216504u, 0x21650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21650Cu;
label_21650c:
    // 0x21650c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x21650cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216510:
    // 0x216510: 0xae4b0084  sw          $t3, 0x84($s2)
    ctx->pc = 0x216510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 11));
label_216514:
    // 0x216514: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x216514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216518:
    // 0x216518: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x216518u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21651c:
    // 0x21651c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21651cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216520:
    // 0x216520: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x216520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_216524:
    // 0x216524: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x216524u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_216528:
    // 0x216528: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x216528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21652c:
    // 0x21652c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21652cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_216530:
    // 0x216530: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x216530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_216534:
    // 0x216534: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x216534u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_216538:
    // 0x216538: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x216538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_21653c:
    // 0x21653c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x21653cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_216540:
    // 0x216540: 0x40f809  jalr        $v0
label_216544:
    if (ctx->pc == 0x216544u) {
        ctx->pc = 0x216544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216540u;
        // 0x216544: 0x1642021  addu        $a0, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216548u;
        goto label_216548;
    }
    ctx->pc = 0x216540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216548u);
        ctx->pc = 0x216544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216540u;
        // 0x216544: 0x1642021  addu        $a0, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216540u, 0x216548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216548u;
label_216548:
    // 0x216548: 0xc08556a  jal         func_2155A8
label_21654c:
    if (ctx->pc == 0x21654Cu) {
        ctx->pc = 0x21654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216548u;
        // 0x21654c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216550u;
        goto label_216550;
    }
    ctx->pc = 0x216548u;
    SET_GPR_U32(ctx, 31, 0x216550u);
    ctx->pc = 0x21654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216548u;
    // 0x21654c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155A8u, 0x216548u, 0x216550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216550u;
label_216550:
    // 0x216550: 0xc085454  jal         func_215150
label_216554:
    if (ctx->pc == 0x216554u) {
        ctx->pc = 0x216554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216550u;
        // 0x216554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216558u;
        goto label_216558;
    }
    ctx->pc = 0x216550u;
    SET_GPR_U32(ctx, 31, 0x216558u);
    ctx->pc = 0x216554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216550u;
    // 0x216554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215150u, 0x216550u, 0x216558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216558u;
label_216558:
    // 0x216558: 0x8e470084  lw          $a3, 0x84($s2)
    ctx->pc = 0x216558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_21655c:
    // 0x21655c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21655cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216560:
    // 0x216560: 0x8e450090  lw          $a1, 0x90($s2)
    ctx->pc = 0x216560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_216564:
    // 0x216564: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x216564u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_216568:
    // 0x216568: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x216568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21656c:
    // 0x21656c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x21656cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_216570:
    // 0x216570: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x216570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_216574:
    // 0x216574: 0x60f809  jalr        $v1
label_216578:
    if (ctx->pc == 0x216578u) {
        ctx->pc = 0x216578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216574u;
        // 0x216578: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21657Cu;
        goto label_21657c;
    }
    ctx->pc = 0x216574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21657Cu);
        ctx->pc = 0x216578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216574u;
        // 0x216578: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216574u, 0x21657Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21657Cu;
label_21657c:
    // 0x21657c: 0x8e450084  lw          $a1, 0x84($s2)
    ctx->pc = 0x21657cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_216580:
    // 0x216580: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x216580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_216584:
    // 0x216584: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x216584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_216588:
    // 0x216588: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x216588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_21658c:
    // 0x21658c: 0x60f809  jalr        $v1
label_216590:
    if (ctx->pc == 0x216590u) {
        ctx->pc = 0x216590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21658Cu;
        // 0x216590: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216594u;
        goto label_216594;
    }
    ctx->pc = 0x21658Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216594u);
        ctx->pc = 0x216590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21658Cu;
        // 0x216590: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21658Cu, 0x216594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216594u;
label_216594:
    // 0x216594: 0x8e460084  lw          $a2, 0x84($s2)
    ctx->pc = 0x216594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_216598:
    // 0x216598: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x216598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_21659c:
    // 0x21659c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21659cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2165a0:
    // 0x2165a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2165a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2165a4:
    // 0x2165a4: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x2165a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_2165a8:
    // 0x2165a8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x2165a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2165ac:
    // 0x2165ac: 0x60f809  jalr        $v1
label_2165b0:
    if (ctx->pc == 0x2165B0u) {
        ctx->pc = 0x2165B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165ACu;
        // 0x2165b0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2165B4u;
        goto label_2165b4;
    }
    ctx->pc = 0x2165ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2165B4u);
        ctx->pc = 0x2165B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165ACu;
        // 0x2165b0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2165ACu, 0x2165B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2165B4u;
label_2165b4:
    // 0x2165b4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2165b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2165b8:
    // 0x2165b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2165b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2165bc:
    // 0x2165bc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2165bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2165c0:
    // 0x2165c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2165c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2165c4:
    // 0x2165c4: 0xc085a78  jal         func_2169E0
label_2165c8:
    if (ctx->pc == 0x2165C8u) {
        ctx->pc = 0x2165C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165C4u;
        // 0x2165c8: 0xe6000c6c  swc1        $f0, 0xC6C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2165CCu;
        goto label_2165cc;
    }
    ctx->pc = 0x2165C4u;
    SET_GPR_U32(ctx, 31, 0x2165CCu);
    ctx->pc = 0x2165C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2165C4u;
    // 0x2165c8: 0xe6000c6c  swc1        $f0, 0xC6C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2169E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2169E0u, 0x2165C4u, 0x2165CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165CCu;
label_2165cc:
    // 0x2165cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2165ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2165d0:
    // 0x2165d0: 0xc7c00114  lwc1        $f0, 0x114($fp)
    ctx->pc = 0x2165d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2165d4:
    // 0x2165d4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x2165d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2165d8:
    // 0x2165d8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2165d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2165dc:
    // 0x2165dc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2165dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2165e0:
    // 0x2165e0: 0x24a5a148  addiu       $a1, $a1, -0x5EB8
    ctx->pc = 0x2165e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943048));
label_2165e4:
    // 0x2165e4: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x2165e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2165e8:
    // 0x2165e8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2165e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2165ec:
    // 0x2165ec: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2165ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2165f0:
    // 0x2165f0: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x2165f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_2165f4:
    // 0x2165f4: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x2165f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2165f8:
    // 0x2165f8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2165f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2165fc:
    // 0x2165fc: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x2165fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_216600:
    // 0x216600: 0x2409026c  addiu       $t1, $zero, 0x26C
    ctx->pc = 0x216600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
label_216604:
    // 0x216604: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x216604u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216608:
    // 0x216608: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x216608u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21660c:
    // 0x21660c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x21660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_216610:
    // 0x216610: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x216610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_216614:
    // 0x216614: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x216614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_216618:
    // 0x216618: 0x40f809  jalr        $v0
label_21661c:
    if (ctx->pc == 0x21661Cu) {
        ctx->pc = 0x21661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216618u;
        // 0x21661c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216620u;
        goto label_216620;
    }
    ctx->pc = 0x216618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216620u);
        ctx->pc = 0x21661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216618u;
        // 0x21661c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216618u, 0x216620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216620u;
label_216620:
    // 0x216620: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_216624:
    if (ctx->pc == 0x216624u) {
        ctx->pc = 0x216624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216620u;
        // 0x216624: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216628u;
        goto label_216628;
    }
    ctx->pc = 0x216620u;
    {
        const bool branch_taken_0x216620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216620u;
        // 0x216624: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216620) {
            ctx->pc = 0x216634u;
            goto label_216634;
        }
    }
    ctx->pc = 0x216628u;
label_216628:
    // 0x216628: 0xc073a9c  jal         func_1CEA70
label_21662c:
    if (ctx->pc == 0x21662Cu) {
        ctx->pc = 0x21662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216628u;
        // 0x21662c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216630u;
        goto label_216630;
    }
    ctx->pc = 0x216628u;
    SET_GPR_U32(ctx, 31, 0x216630u);
    ctx->pc = 0x21662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216628u;
    // 0x21662c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x216628u, 0x216630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216630u;
label_216630:
    // 0x216630: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x216630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216634:
    // 0x216634: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x216634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_216638:
    // 0x216638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x216638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21663c:
    // 0x21663c: 0xc073ad0  jal         func_1CEB40
label_216640:
    if (ctx->pc == 0x216640u) {
        ctx->pc = 0x216640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21663Cu;
        // 0x216640: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216644u;
        goto label_216644;
    }
    ctx->pc = 0x21663Cu;
    SET_GPR_U32(ctx, 31, 0x216644u);
    ctx->pc = 0x216640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21663Cu;
    // 0x216640: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x21663Cu, 0x216644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216644u;
label_216644:
    // 0x216644: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x216644u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_216648:
    // 0x216648: 0xc067b9c  jal         func_19EE70
label_21664c:
    if (ctx->pc == 0x21664Cu) {
        ctx->pc = 0x21664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216648u;
        // 0x21664c: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216650u;
        goto label_216650;
    }
    ctx->pc = 0x216648u;
    SET_GPR_U32(ctx, 31, 0x216650u);
    ctx->pc = 0x21664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216648u;
    // 0x21664c: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x216648u, 0x216650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216650u;
label_216650:
    // 0x216650: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x216650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_216654:
    // 0x216654: 0xc073b0a  jal         func_1CEC28
label_216658:
    if (ctx->pc == 0x216658u) {
        ctx->pc = 0x216658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216654u;
        // 0x216658: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21665Cu;
        goto label_21665c;
    }
    ctx->pc = 0x216654u;
    SET_GPR_U32(ctx, 31, 0x21665Cu);
    ctx->pc = 0x216658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216654u;
    // 0x216658: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x216654u, 0x21665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21665Cu;
label_21665c:
    // 0x21665c: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x21665cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_216660:
    // 0x216660: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x216660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_216664:
    // 0x216664: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x216664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_216668:
    // 0x216668: 0xc05e602  jal         func_179808
label_21666c:
    if (ctx->pc == 0x21666Cu) {
        ctx->pc = 0x21666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216668u;
        // 0x21666c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216670u;
        goto label_216670;
    }
    ctx->pc = 0x216668u;
    SET_GPR_U32(ctx, 31, 0x216670u);
    ctx->pc = 0x21666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216668u;
    // 0x21666c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x216668u, 0x216670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216670u;
label_216670:
    // 0x216670: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x216670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216674:
    // 0x216674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216678:
    // 0x216678: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x216678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21667c:
    // 0x21667c: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x21667cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_216680:
    // 0x216680: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x216680u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_216684:
    // 0x216684: 0xe6000c70  swc1        $f0, 0xC70($s0)
    ctx->pc = 0x216684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3184), bits); }
label_216688:
    // 0x216688: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x216688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_21668c:
    // 0x21668c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x21668cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_216690:
    // 0x216690: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x216690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_216694:
    // 0x216694: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x216694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_216698:
    // 0x216698: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x216698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_21669c:
    // 0x21669c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x21669cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2166a0:
    // 0x2166a0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2166a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2166a4:
    // 0x2166a4: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2166a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2166a8:
    // 0x2166a8: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x2166a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2166ac:
    // 0x2166ac: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2166acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2166b0:
    // 0x2166b0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2166b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2166b4:
    // 0x2166b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2166b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2166b8:
    // 0x2166b8: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x2166b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2166bc:
    // 0x2166bc: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x2166bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2166c0:
    // 0x2166c0: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2166c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2166c4:
    // 0x2166c4: 0x3e00008  jr          $ra
label_2166c8:
    if (ctx->pc == 0x2166C8u) {
        ctx->pc = 0x2166C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166C4u;
        // 0x2166c8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2166CCu;
        goto label_2166cc;
    }
    ctx->pc = 0x2166C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2166C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166C4u;
        // 0x2166c8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2166C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2166CCu;
label_2166cc:
    // 0x2166cc: 0x0  nop
    ctx->pc = 0x2166ccu;
    // NOP
    ctx->pc = 0x2166d0u;
}
