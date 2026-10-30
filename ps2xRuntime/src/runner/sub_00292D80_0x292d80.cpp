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

// Function: sub_00292D80
// Address: 0x292d80 - 0x2935d8
void sub_00292D80_0x292d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292D80_0x292d80");
#endif

    switch (ctx->pc) {
        case 0x292d80u: goto label_292d80;
        case 0x292d84u: goto label_292d84;
        case 0x292d88u: goto label_292d88;
        case 0x292d8cu: goto label_292d8c;
        case 0x292d90u: goto label_292d90;
        case 0x292d94u: goto label_292d94;
        case 0x292d98u: goto label_292d98;
        case 0x292d9cu: goto label_292d9c;
        case 0x292da0u: goto label_292da0;
        case 0x292da4u: goto label_292da4;
        case 0x292da8u: goto label_292da8;
        case 0x292dacu: goto label_292dac;
        case 0x292db0u: goto label_292db0;
        case 0x292db4u: goto label_292db4;
        case 0x292db8u: goto label_292db8;
        case 0x292dbcu: goto label_292dbc;
        case 0x292dc0u: goto label_292dc0;
        case 0x292dc4u: goto label_292dc4;
        case 0x292dc8u: goto label_292dc8;
        case 0x292dccu: goto label_292dcc;
        case 0x292dd0u: goto label_292dd0;
        case 0x292dd4u: goto label_292dd4;
        case 0x292dd8u: goto label_292dd8;
        case 0x292ddcu: goto label_292ddc;
        case 0x292de0u: goto label_292de0;
        case 0x292de4u: goto label_292de4;
        case 0x292de8u: goto label_292de8;
        case 0x292decu: goto label_292dec;
        case 0x292df0u: goto label_292df0;
        case 0x292df4u: goto label_292df4;
        case 0x292df8u: goto label_292df8;
        case 0x292dfcu: goto label_292dfc;
        case 0x292e00u: goto label_292e00;
        case 0x292e04u: goto label_292e04;
        case 0x292e08u: goto label_292e08;
        case 0x292e0cu: goto label_292e0c;
        case 0x292e10u: goto label_292e10;
        case 0x292e14u: goto label_292e14;
        case 0x292e18u: goto label_292e18;
        case 0x292e1cu: goto label_292e1c;
        case 0x292e20u: goto label_292e20;
        case 0x292e24u: goto label_292e24;
        case 0x292e28u: goto label_292e28;
        case 0x292e2cu: goto label_292e2c;
        case 0x292e30u: goto label_292e30;
        case 0x292e34u: goto label_292e34;
        case 0x292e38u: goto label_292e38;
        case 0x292e3cu: goto label_292e3c;
        case 0x292e40u: goto label_292e40;
        case 0x292e44u: goto label_292e44;
        case 0x292e48u: goto label_292e48;
        case 0x292e4cu: goto label_292e4c;
        case 0x292e50u: goto label_292e50;
        case 0x292e54u: goto label_292e54;
        case 0x292e58u: goto label_292e58;
        case 0x292e5cu: goto label_292e5c;
        case 0x292e60u: goto label_292e60;
        case 0x292e64u: goto label_292e64;
        case 0x292e68u: goto label_292e68;
        case 0x292e6cu: goto label_292e6c;
        case 0x292e70u: goto label_292e70;
        case 0x292e74u: goto label_292e74;
        case 0x292e78u: goto label_292e78;
        case 0x292e7cu: goto label_292e7c;
        case 0x292e80u: goto label_292e80;
        case 0x292e84u: goto label_292e84;
        case 0x292e88u: goto label_292e88;
        case 0x292e8cu: goto label_292e8c;
        case 0x292e90u: goto label_292e90;
        case 0x292e94u: goto label_292e94;
        case 0x292e98u: goto label_292e98;
        case 0x292e9cu: goto label_292e9c;
        case 0x292ea0u: goto label_292ea0;
        case 0x292ea4u: goto label_292ea4;
        case 0x292ea8u: goto label_292ea8;
        case 0x292eacu: goto label_292eac;
        case 0x292eb0u: goto label_292eb0;
        case 0x292eb4u: goto label_292eb4;
        case 0x292eb8u: goto label_292eb8;
        case 0x292ebcu: goto label_292ebc;
        case 0x292ec0u: goto label_292ec0;
        case 0x292ec4u: goto label_292ec4;
        case 0x292ec8u: goto label_292ec8;
        case 0x292eccu: goto label_292ecc;
        case 0x292ed0u: goto label_292ed0;
        case 0x292ed4u: goto label_292ed4;
        case 0x292ed8u: goto label_292ed8;
        case 0x292edcu: goto label_292edc;
        case 0x292ee0u: goto label_292ee0;
        case 0x292ee4u: goto label_292ee4;
        case 0x292ee8u: goto label_292ee8;
        case 0x292eecu: goto label_292eec;
        case 0x292ef0u: goto label_292ef0;
        case 0x292ef4u: goto label_292ef4;
        case 0x292ef8u: goto label_292ef8;
        case 0x292efcu: goto label_292efc;
        case 0x292f00u: goto label_292f00;
        case 0x292f04u: goto label_292f04;
        case 0x292f08u: goto label_292f08;
        case 0x292f0cu: goto label_292f0c;
        case 0x292f10u: goto label_292f10;
        case 0x292f14u: goto label_292f14;
        case 0x292f18u: goto label_292f18;
        case 0x292f1cu: goto label_292f1c;
        case 0x292f20u: goto label_292f20;
        case 0x292f24u: goto label_292f24;
        case 0x292f28u: goto label_292f28;
        case 0x292f2cu: goto label_292f2c;
        case 0x292f30u: goto label_292f30;
        case 0x292f34u: goto label_292f34;
        case 0x292f38u: goto label_292f38;
        case 0x292f3cu: goto label_292f3c;
        case 0x292f40u: goto label_292f40;
        case 0x292f44u: goto label_292f44;
        case 0x292f48u: goto label_292f48;
        case 0x292f4cu: goto label_292f4c;
        case 0x292f50u: goto label_292f50;
        case 0x292f54u: goto label_292f54;
        case 0x292f58u: goto label_292f58;
        case 0x292f5cu: goto label_292f5c;
        case 0x292f60u: goto label_292f60;
        case 0x292f64u: goto label_292f64;
        case 0x292f68u: goto label_292f68;
        case 0x292f6cu: goto label_292f6c;
        case 0x292f70u: goto label_292f70;
        case 0x292f74u: goto label_292f74;
        case 0x292f78u: goto label_292f78;
        case 0x292f7cu: goto label_292f7c;
        case 0x292f80u: goto label_292f80;
        case 0x292f84u: goto label_292f84;
        case 0x292f88u: goto label_292f88;
        case 0x292f8cu: goto label_292f8c;
        case 0x292f90u: goto label_292f90;
        case 0x292f94u: goto label_292f94;
        case 0x292f98u: goto label_292f98;
        case 0x292f9cu: goto label_292f9c;
        case 0x292fa0u: goto label_292fa0;
        case 0x292fa4u: goto label_292fa4;
        case 0x292fa8u: goto label_292fa8;
        case 0x292facu: goto label_292fac;
        case 0x292fb0u: goto label_292fb0;
        case 0x292fb4u: goto label_292fb4;
        case 0x292fb8u: goto label_292fb8;
        case 0x292fbcu: goto label_292fbc;
        case 0x292fc0u: goto label_292fc0;
        case 0x292fc4u: goto label_292fc4;
        case 0x292fc8u: goto label_292fc8;
        case 0x292fccu: goto label_292fcc;
        case 0x292fd0u: goto label_292fd0;
        case 0x292fd4u: goto label_292fd4;
        case 0x292fd8u: goto label_292fd8;
        case 0x292fdcu: goto label_292fdc;
        case 0x292fe0u: goto label_292fe0;
        case 0x292fe4u: goto label_292fe4;
        case 0x292fe8u: goto label_292fe8;
        case 0x292fecu: goto label_292fec;
        case 0x292ff0u: goto label_292ff0;
        case 0x292ff4u: goto label_292ff4;
        case 0x292ff8u: goto label_292ff8;
        case 0x292ffcu: goto label_292ffc;
        case 0x293000u: goto label_293000;
        case 0x293004u: goto label_293004;
        case 0x293008u: goto label_293008;
        case 0x29300cu: goto label_29300c;
        case 0x293010u: goto label_293010;
        case 0x293014u: goto label_293014;
        case 0x293018u: goto label_293018;
        case 0x29301cu: goto label_29301c;
        case 0x293020u: goto label_293020;
        case 0x293024u: goto label_293024;
        case 0x293028u: goto label_293028;
        case 0x29302cu: goto label_29302c;
        case 0x293030u: goto label_293030;
        case 0x293034u: goto label_293034;
        case 0x293038u: goto label_293038;
        case 0x29303cu: goto label_29303c;
        case 0x293040u: goto label_293040;
        case 0x293044u: goto label_293044;
        case 0x293048u: goto label_293048;
        case 0x29304cu: goto label_29304c;
        case 0x293050u: goto label_293050;
        case 0x293054u: goto label_293054;
        case 0x293058u: goto label_293058;
        case 0x29305cu: goto label_29305c;
        case 0x293060u: goto label_293060;
        case 0x293064u: goto label_293064;
        case 0x293068u: goto label_293068;
        case 0x29306cu: goto label_29306c;
        case 0x293070u: goto label_293070;
        case 0x293074u: goto label_293074;
        case 0x293078u: goto label_293078;
        case 0x29307cu: goto label_29307c;
        case 0x293080u: goto label_293080;
        case 0x293084u: goto label_293084;
        case 0x293088u: goto label_293088;
        case 0x29308cu: goto label_29308c;
        case 0x293090u: goto label_293090;
        case 0x293094u: goto label_293094;
        case 0x293098u: goto label_293098;
        case 0x29309cu: goto label_29309c;
        case 0x2930a0u: goto label_2930a0;
        case 0x2930a4u: goto label_2930a4;
        case 0x2930a8u: goto label_2930a8;
        case 0x2930acu: goto label_2930ac;
        case 0x2930b0u: goto label_2930b0;
        case 0x2930b4u: goto label_2930b4;
        case 0x2930b8u: goto label_2930b8;
        case 0x2930bcu: goto label_2930bc;
        case 0x2930c0u: goto label_2930c0;
        case 0x2930c4u: goto label_2930c4;
        case 0x2930c8u: goto label_2930c8;
        case 0x2930ccu: goto label_2930cc;
        case 0x2930d0u: goto label_2930d0;
        case 0x2930d4u: goto label_2930d4;
        case 0x2930d8u: goto label_2930d8;
        case 0x2930dcu: goto label_2930dc;
        case 0x2930e0u: goto label_2930e0;
        case 0x2930e4u: goto label_2930e4;
        case 0x2930e8u: goto label_2930e8;
        case 0x2930ecu: goto label_2930ec;
        case 0x2930f0u: goto label_2930f0;
        case 0x2930f4u: goto label_2930f4;
        case 0x2930f8u: goto label_2930f8;
        case 0x2930fcu: goto label_2930fc;
        case 0x293100u: goto label_293100;
        case 0x293104u: goto label_293104;
        case 0x293108u: goto label_293108;
        case 0x29310cu: goto label_29310c;
        case 0x293110u: goto label_293110;
        case 0x293114u: goto label_293114;
        case 0x293118u: goto label_293118;
        case 0x29311cu: goto label_29311c;
        case 0x293120u: goto label_293120;
        case 0x293124u: goto label_293124;
        case 0x293128u: goto label_293128;
        case 0x29312cu: goto label_29312c;
        case 0x293130u: goto label_293130;
        case 0x293134u: goto label_293134;
        case 0x293138u: goto label_293138;
        case 0x29313cu: goto label_29313c;
        case 0x293140u: goto label_293140;
        case 0x293144u: goto label_293144;
        case 0x293148u: goto label_293148;
        case 0x29314cu: goto label_29314c;
        case 0x293150u: goto label_293150;
        case 0x293154u: goto label_293154;
        case 0x293158u: goto label_293158;
        case 0x29315cu: goto label_29315c;
        case 0x293160u: goto label_293160;
        case 0x293164u: goto label_293164;
        case 0x293168u: goto label_293168;
        case 0x29316cu: goto label_29316c;
        case 0x293170u: goto label_293170;
        case 0x293174u: goto label_293174;
        case 0x293178u: goto label_293178;
        case 0x29317cu: goto label_29317c;
        case 0x293180u: goto label_293180;
        case 0x293184u: goto label_293184;
        case 0x293188u: goto label_293188;
        case 0x29318cu: goto label_29318c;
        case 0x293190u: goto label_293190;
        case 0x293194u: goto label_293194;
        case 0x293198u: goto label_293198;
        case 0x29319cu: goto label_29319c;
        case 0x2931a0u: goto label_2931a0;
        case 0x2931a4u: goto label_2931a4;
        case 0x2931a8u: goto label_2931a8;
        case 0x2931acu: goto label_2931ac;
        case 0x2931b0u: goto label_2931b0;
        case 0x2931b4u: goto label_2931b4;
        case 0x2931b8u: goto label_2931b8;
        case 0x2931bcu: goto label_2931bc;
        case 0x2931c0u: goto label_2931c0;
        case 0x2931c4u: goto label_2931c4;
        case 0x2931c8u: goto label_2931c8;
        case 0x2931ccu: goto label_2931cc;
        case 0x2931d0u: goto label_2931d0;
        case 0x2931d4u: goto label_2931d4;
        case 0x2931d8u: goto label_2931d8;
        case 0x2931dcu: goto label_2931dc;
        case 0x2931e0u: goto label_2931e0;
        case 0x2931e4u: goto label_2931e4;
        case 0x2931e8u: goto label_2931e8;
        case 0x2931ecu: goto label_2931ec;
        case 0x2931f0u: goto label_2931f0;
        case 0x2931f4u: goto label_2931f4;
        case 0x2931f8u: goto label_2931f8;
        case 0x2931fcu: goto label_2931fc;
        case 0x293200u: goto label_293200;
        case 0x293204u: goto label_293204;
        case 0x293208u: goto label_293208;
        case 0x29320cu: goto label_29320c;
        case 0x293210u: goto label_293210;
        case 0x293214u: goto label_293214;
        case 0x293218u: goto label_293218;
        case 0x29321cu: goto label_29321c;
        case 0x293220u: goto label_293220;
        case 0x293224u: goto label_293224;
        case 0x293228u: goto label_293228;
        case 0x29322cu: goto label_29322c;
        case 0x293230u: goto label_293230;
        case 0x293234u: goto label_293234;
        case 0x293238u: goto label_293238;
        case 0x29323cu: goto label_29323c;
        case 0x293240u: goto label_293240;
        case 0x293244u: goto label_293244;
        case 0x293248u: goto label_293248;
        case 0x29324cu: goto label_29324c;
        case 0x293250u: goto label_293250;
        case 0x293254u: goto label_293254;
        case 0x293258u: goto label_293258;
        case 0x29325cu: goto label_29325c;
        case 0x293260u: goto label_293260;
        case 0x293264u: goto label_293264;
        case 0x293268u: goto label_293268;
        case 0x29326cu: goto label_29326c;
        case 0x293270u: goto label_293270;
        case 0x293274u: goto label_293274;
        case 0x293278u: goto label_293278;
        case 0x29327cu: goto label_29327c;
        case 0x293280u: goto label_293280;
        case 0x293284u: goto label_293284;
        case 0x293288u: goto label_293288;
        case 0x29328cu: goto label_29328c;
        case 0x293290u: goto label_293290;
        case 0x293294u: goto label_293294;
        case 0x293298u: goto label_293298;
        case 0x29329cu: goto label_29329c;
        case 0x2932a0u: goto label_2932a0;
        case 0x2932a4u: goto label_2932a4;
        case 0x2932a8u: goto label_2932a8;
        case 0x2932acu: goto label_2932ac;
        case 0x2932b0u: goto label_2932b0;
        case 0x2932b4u: goto label_2932b4;
        case 0x2932b8u: goto label_2932b8;
        case 0x2932bcu: goto label_2932bc;
        case 0x2932c0u: goto label_2932c0;
        case 0x2932c4u: goto label_2932c4;
        case 0x2932c8u: goto label_2932c8;
        case 0x2932ccu: goto label_2932cc;
        case 0x2932d0u: goto label_2932d0;
        case 0x2932d4u: goto label_2932d4;
        case 0x2932d8u: goto label_2932d8;
        case 0x2932dcu: goto label_2932dc;
        case 0x2932e0u: goto label_2932e0;
        case 0x2932e4u: goto label_2932e4;
        case 0x2932e8u: goto label_2932e8;
        case 0x2932ecu: goto label_2932ec;
        case 0x2932f0u: goto label_2932f0;
        case 0x2932f4u: goto label_2932f4;
        case 0x2932f8u: goto label_2932f8;
        case 0x2932fcu: goto label_2932fc;
        case 0x293300u: goto label_293300;
        case 0x293304u: goto label_293304;
        case 0x293308u: goto label_293308;
        case 0x29330cu: goto label_29330c;
        case 0x293310u: goto label_293310;
        case 0x293314u: goto label_293314;
        case 0x293318u: goto label_293318;
        case 0x29331cu: goto label_29331c;
        case 0x293320u: goto label_293320;
        case 0x293324u: goto label_293324;
        case 0x293328u: goto label_293328;
        case 0x29332cu: goto label_29332c;
        case 0x293330u: goto label_293330;
        case 0x293334u: goto label_293334;
        case 0x293338u: goto label_293338;
        case 0x29333cu: goto label_29333c;
        case 0x293340u: goto label_293340;
        case 0x293344u: goto label_293344;
        case 0x293348u: goto label_293348;
        case 0x29334cu: goto label_29334c;
        case 0x293350u: goto label_293350;
        case 0x293354u: goto label_293354;
        case 0x293358u: goto label_293358;
        case 0x29335cu: goto label_29335c;
        case 0x293360u: goto label_293360;
        case 0x293364u: goto label_293364;
        case 0x293368u: goto label_293368;
        case 0x29336cu: goto label_29336c;
        case 0x293370u: goto label_293370;
        case 0x293374u: goto label_293374;
        case 0x293378u: goto label_293378;
        case 0x29337cu: goto label_29337c;
        case 0x293380u: goto label_293380;
        case 0x293384u: goto label_293384;
        case 0x293388u: goto label_293388;
        case 0x29338cu: goto label_29338c;
        case 0x293390u: goto label_293390;
        case 0x293394u: goto label_293394;
        case 0x293398u: goto label_293398;
        case 0x29339cu: goto label_29339c;
        case 0x2933a0u: goto label_2933a0;
        case 0x2933a4u: goto label_2933a4;
        case 0x2933a8u: goto label_2933a8;
        case 0x2933acu: goto label_2933ac;
        case 0x2933b0u: goto label_2933b0;
        case 0x2933b4u: goto label_2933b4;
        case 0x2933b8u: goto label_2933b8;
        case 0x2933bcu: goto label_2933bc;
        case 0x2933c0u: goto label_2933c0;
        case 0x2933c4u: goto label_2933c4;
        case 0x2933c8u: goto label_2933c8;
        case 0x2933ccu: goto label_2933cc;
        case 0x2933d0u: goto label_2933d0;
        case 0x2933d4u: goto label_2933d4;
        case 0x2933d8u: goto label_2933d8;
        case 0x2933dcu: goto label_2933dc;
        case 0x2933e0u: goto label_2933e0;
        case 0x2933e4u: goto label_2933e4;
        case 0x2933e8u: goto label_2933e8;
        case 0x2933ecu: goto label_2933ec;
        case 0x2933f0u: goto label_2933f0;
        case 0x2933f4u: goto label_2933f4;
        case 0x2933f8u: goto label_2933f8;
        case 0x2933fcu: goto label_2933fc;
        case 0x293400u: goto label_293400;
        case 0x293404u: goto label_293404;
        case 0x293408u: goto label_293408;
        case 0x29340cu: goto label_29340c;
        case 0x293410u: goto label_293410;
        case 0x293414u: goto label_293414;
        case 0x293418u: goto label_293418;
        case 0x29341cu: goto label_29341c;
        case 0x293420u: goto label_293420;
        case 0x293424u: goto label_293424;
        case 0x293428u: goto label_293428;
        case 0x29342cu: goto label_29342c;
        case 0x293430u: goto label_293430;
        case 0x293434u: goto label_293434;
        case 0x293438u: goto label_293438;
        case 0x29343cu: goto label_29343c;
        case 0x293440u: goto label_293440;
        case 0x293444u: goto label_293444;
        case 0x293448u: goto label_293448;
        case 0x29344cu: goto label_29344c;
        case 0x293450u: goto label_293450;
        case 0x293454u: goto label_293454;
        case 0x293458u: goto label_293458;
        case 0x29345cu: goto label_29345c;
        case 0x293460u: goto label_293460;
        case 0x293464u: goto label_293464;
        case 0x293468u: goto label_293468;
        case 0x29346cu: goto label_29346c;
        case 0x293470u: goto label_293470;
        case 0x293474u: goto label_293474;
        case 0x293478u: goto label_293478;
        case 0x29347cu: goto label_29347c;
        case 0x293480u: goto label_293480;
        case 0x293484u: goto label_293484;
        case 0x293488u: goto label_293488;
        case 0x29348cu: goto label_29348c;
        case 0x293490u: goto label_293490;
        case 0x293494u: goto label_293494;
        case 0x293498u: goto label_293498;
        case 0x29349cu: goto label_29349c;
        case 0x2934a0u: goto label_2934a0;
        case 0x2934a4u: goto label_2934a4;
        case 0x2934a8u: goto label_2934a8;
        case 0x2934acu: goto label_2934ac;
        case 0x2934b0u: goto label_2934b0;
        case 0x2934b4u: goto label_2934b4;
        case 0x2934b8u: goto label_2934b8;
        case 0x2934bcu: goto label_2934bc;
        case 0x2934c0u: goto label_2934c0;
        case 0x2934c4u: goto label_2934c4;
        case 0x2934c8u: goto label_2934c8;
        case 0x2934ccu: goto label_2934cc;
        case 0x2934d0u: goto label_2934d0;
        case 0x2934d4u: goto label_2934d4;
        case 0x2934d8u: goto label_2934d8;
        case 0x2934dcu: goto label_2934dc;
        case 0x2934e0u: goto label_2934e0;
        case 0x2934e4u: goto label_2934e4;
        case 0x2934e8u: goto label_2934e8;
        case 0x2934ecu: goto label_2934ec;
        case 0x2934f0u: goto label_2934f0;
        case 0x2934f4u: goto label_2934f4;
        case 0x2934f8u: goto label_2934f8;
        case 0x2934fcu: goto label_2934fc;
        case 0x293500u: goto label_293500;
        case 0x293504u: goto label_293504;
        case 0x293508u: goto label_293508;
        case 0x29350cu: goto label_29350c;
        case 0x293510u: goto label_293510;
        case 0x293514u: goto label_293514;
        case 0x293518u: goto label_293518;
        case 0x29351cu: goto label_29351c;
        case 0x293520u: goto label_293520;
        case 0x293524u: goto label_293524;
        case 0x293528u: goto label_293528;
        case 0x29352cu: goto label_29352c;
        case 0x293530u: goto label_293530;
        case 0x293534u: goto label_293534;
        case 0x293538u: goto label_293538;
        case 0x29353cu: goto label_29353c;
        case 0x293540u: goto label_293540;
        case 0x293544u: goto label_293544;
        case 0x293548u: goto label_293548;
        case 0x29354cu: goto label_29354c;
        case 0x293550u: goto label_293550;
        case 0x293554u: goto label_293554;
        case 0x293558u: goto label_293558;
        case 0x29355cu: goto label_29355c;
        case 0x293560u: goto label_293560;
        case 0x293564u: goto label_293564;
        case 0x293568u: goto label_293568;
        case 0x29356cu: goto label_29356c;
        case 0x293570u: goto label_293570;
        case 0x293574u: goto label_293574;
        case 0x293578u: goto label_293578;
        case 0x29357cu: goto label_29357c;
        case 0x293580u: goto label_293580;
        case 0x293584u: goto label_293584;
        case 0x293588u: goto label_293588;
        case 0x29358cu: goto label_29358c;
        case 0x293590u: goto label_293590;
        case 0x293594u: goto label_293594;
        case 0x293598u: goto label_293598;
        case 0x29359cu: goto label_29359c;
        case 0x2935a0u: goto label_2935a0;
        case 0x2935a4u: goto label_2935a4;
        case 0x2935a8u: goto label_2935a8;
        case 0x2935acu: goto label_2935ac;
        case 0x2935b0u: goto label_2935b0;
        case 0x2935b4u: goto label_2935b4;
        case 0x2935b8u: goto label_2935b8;
        case 0x2935bcu: goto label_2935bc;
        case 0x2935c0u: goto label_2935c0;
        case 0x2935c4u: goto label_2935c4;
        case 0x2935c8u: goto label_2935c8;
        case 0x2935ccu: goto label_2935cc;
        case 0x2935d0u: goto label_2935d0;
        case 0x2935d4u: goto label_2935d4;
        default: break;
    }

    ctx->pc = 0x292d80u;

label_292d80:
    // 0x292d80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x292d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_292d84:
    // 0x292d84: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x292d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_292d88:
    // 0x292d88: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x292d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_292d8c:
    // 0x292d8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x292d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_292d90:
    // 0x292d90: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x292d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_292d94:
    // 0x292d94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x292d94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_292d98:
    // 0x292d98: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x292d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_292d9c:
    // 0x292d9c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x292d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_292da0:
    // 0x292da0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x292da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_292da4:
    // 0x292da4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x292da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_292da8:
    // 0x292da8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x292da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_292dac:
    // 0x292dac: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x292dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_292db0:
    // 0x292db0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x292db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_292db4:
    // 0x292db4: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x292db4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_292db8:
    // 0x292db8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x292db8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_292dbc:
    // 0x292dbc: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x292dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_292dc0:
    // 0x292dc0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x292dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_292dc4:
    // 0x292dc4: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x292dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_292dc8:
    // 0x292dc8: 0x104001f3  beqz        $v0, . + 4 + (0x1F3 << 2)
label_292dcc:
    if (ctx->pc == 0x292DCCu) {
        ctx->pc = 0x292DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DC8u;
        // 0x292dcc: 0x8eb30000  lw          $s3, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292DD0u;
        goto label_292dd0;
    }
    ctx->pc = 0x292DC8u;
    {
        const bool branch_taken_0x292dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DC8u;
        // 0x292dcc: 0x8eb30000  lw          $s3, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292dc8) {
            ctx->pc = 0x293598u;
            goto label_293598;
        }
    }
    ctx->pc = 0x292DD0u;
label_292dd0:
    // 0x292dd0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x292dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_292dd4:
    // 0x292dd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x292dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_292dd8:
    // 0x292dd8: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x292dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
label_292ddc:
    // 0x292ddc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x292ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_292de0:
    // 0x292de0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x292de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_292de4:
    // 0x292de4: 0x800008  jr          $a0
label_292de8:
    if (ctx->pc == 0x292DE8u) {
        ctx->pc = 0x292DECu;
        goto label_292dec;
    }
    ctx->pc = 0x292DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292DECu: goto label_292dec;
            case 0x292E1Cu: goto label_292e1c;
            case 0x2930B0u: goto label_2930b0;
            case 0x2930E0u: goto label_2930e0;
            case 0x2934C8u: goto label_2934c8;
            case 0x293598u: goto label_293598;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292DE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x292DECu;
label_292dec:
    // 0x292dec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x292decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292df0:
    // 0x292df0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x292df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292df4:
    // 0x292df4: 0xc0a33f8  jal         func_28CFE0
label_292df8:
    if (ctx->pc == 0x292DF8u) {
        ctx->pc = 0x292DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DF4u;
        // 0x292df8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292DFCu;
        goto label_292dfc;
    }
    ctx->pc = 0x292DF4u;
    SET_GPR_U32(ctx, 31, 0x292DFCu);
    ctx->pc = 0x292DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292DF4u;
    // 0x292df8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x292DF4u, 0x292DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292DFCu;
label_292dfc:
    // 0x292dfc: 0xc0a36c8  jal         func_28DB20
label_292e00:
    if (ctx->pc == 0x292E00u) {
        ctx->pc = 0x292E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DFCu;
        // 0x292e00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E04u;
        goto label_292e04;
    }
    ctx->pc = 0x292DFCu;
    SET_GPR_U32(ctx, 31, 0x292E04u);
    ctx->pc = 0x292E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292DFCu;
    // 0x292e00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x292DFCu, 0x292E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E04u;
label_292e04:
    // 0x292e04: 0xc0a3644  jal         func_28D910
label_292e08:
    if (ctx->pc == 0x292E08u) {
        ctx->pc = 0x292E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E04u;
        // 0x292e08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E0Cu;
        goto label_292e0c;
    }
    ctx->pc = 0x292E04u;
    SET_GPR_U32(ctx, 31, 0x292E0Cu);
    ctx->pc = 0x292E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E04u;
    // 0x292e08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D910u, 0x292E04u, 0x292E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E0Cu;
label_292e0c:
    // 0x292e0c: 0xc0a3e7a  jal         func_28F9E8
label_292e10:
    if (ctx->pc == 0x292E10u) {
        ctx->pc = 0x292E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E0Cu;
        // 0x292e10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E14u;
        goto label_292e14;
    }
    ctx->pc = 0x292E0Cu;
    SET_GPR_U32(ctx, 31, 0x292E14u);
    ctx->pc = 0x292E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E0Cu;
    // 0x292e10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F9E8u, 0x292E0Cu, 0x292E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E14u;
label_292e14:
    // 0x292e14: 0x100001e1  b           . + 4 + (0x1E1 << 2)
label_292e18:
    if (ctx->pc == 0x292E18u) {
        ctx->pc = 0x292E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E14u;
        // 0x292e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E1Cu;
        goto label_292e1c;
    }
    ctx->pc = 0x292E14u;
    {
        const bool branch_taken_0x292e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E14u;
        // 0x292e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e14) {
            ctx->pc = 0x29359Cu;
            goto label_29359c;
        }
    }
    ctx->pc = 0x292E1Cu;
label_292e1c:
    // 0x292e1c: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x292e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_292e20:
    // 0x292e20: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x292e20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292e24:
    // 0x292e24: 0xc08a05a  jal         func_228168
label_292e28:
    if (ctx->pc == 0x292E28u) {
        ctx->pc = 0x292E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E24u;
        // 0x292e28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E2Cu;
        goto label_292e2c;
    }
    ctx->pc = 0x292E24u;
    SET_GPR_U32(ctx, 31, 0x292E2Cu);
    ctx->pc = 0x292E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E24u;
    // 0x292e28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x292E24u, 0x292E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E2Cu;
label_292e2c:
    // 0x292e2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292e30:
    // 0x292e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292e34:
    // 0x292e34: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_292e38:
    if (ctx->pc == 0x292E38u) {
        ctx->pc = 0x292E3Cu;
        goto label_292e3c;
    }
    ctx->pc = 0x292E34u;
    {
        const bool branch_taken_0x292e34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x292e34) {
            ctx->pc = 0x292E58u;
            goto label_292e58;
        }
    }
    ctx->pc = 0x292E3Cu;
label_292e3c:
    // 0x292e3c: 0xc088e78  jal         func_2239E0
label_292e40:
    if (ctx->pc == 0x292E40u) {
        ctx->pc = 0x292E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E3Cu;
        // 0x292e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E44u;
        goto label_292e44;
    }
    ctx->pc = 0x292E3Cu;
    SET_GPR_U32(ctx, 31, 0x292E44u);
    ctx->pc = 0x292E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E3Cu;
    // 0x292e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x292E3Cu, 0x292E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E44u;
label_292e44:
    // 0x292e44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x292e44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292e48:
    // 0x292e48: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
label_292e4c:
    if (ctx->pc == 0x292E4Cu) {
        ctx->pc = 0x292E50u;
        goto label_292e50;
    }
    ctx->pc = 0x292E48u;
    {
        const bool branch_taken_0x292e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x292e48) {
            ctx->pc = 0x292E58u;
            goto label_292e58;
        }
    }
    ctx->pc = 0x292E50u;
label_292e50:
    // 0x292e50: 0x92a202d4  lbu         $v0, 0x2D4($s5)
    ctx->pc = 0x292e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 724)));
label_292e54:
    // 0x292e54: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x292e54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_292e58:
    // 0x292e58: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x292e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_292e5c:
    // 0x292e5c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x292e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_292e60:
    // 0x292e60: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_292e64:
    if (ctx->pc == 0x292E64u) {
        ctx->pc = 0x292E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E60u;
        // 0x292e64: 0xc6b4012c  lwc1        $f20, 0x12C($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E68u;
        goto label_292e68;
    }
    ctx->pc = 0x292E60u;
    {
        const bool branch_taken_0x292e60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x292E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E60u;
        // 0x292e64: 0xc6b4012c  lwc1        $f20, 0x12C($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e60) {
            ctx->pc = 0x292E6Cu;
            goto label_292e6c;
        }
    }
    ctx->pc = 0x292E68u;
label_292e68:
    // 0x292e68: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x292e68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_292e6c:
    // 0x292e6c: 0xc0a2fc0  jal         func_28BF00
label_292e70:
    if (ctx->pc == 0x292E70u) {
        ctx->pc = 0x292E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E6Cu;
        // 0x292e70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E74u;
        goto label_292e74;
    }
    ctx->pc = 0x292E6Cu;
    SET_GPR_U32(ctx, 31, 0x292E74u);
    ctx->pc = 0x292E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E6Cu;
    // 0x292e70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x292E6Cu, 0x292E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E74u;
label_292e74:
    // 0x292e74: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x292e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_292e78:
    // 0x292e78: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x292e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_292e7c:
    // 0x292e7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x292e7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_292e80:
    // 0x292e80: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x292e80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_292e84:
    // 0x292e84: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x292e84u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_292e88:
    // 0x292e88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x292e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_292e8c:
    // 0x292e8c: 0xc0888fa  jal         func_2223E8
label_292e90:
    if (ctx->pc == 0x292E90u) {
        ctx->pc = 0x292E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E8Cu;
        // 0x292e90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E94u;
        goto label_292e94;
    }
    ctx->pc = 0x292E8Cu;
    SET_GPR_U32(ctx, 31, 0x292E94u);
    ctx->pc = 0x292E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E8Cu;
    // 0x292e90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x292E8Cu, 0x292E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E94u;
label_292e94:
    // 0x292e94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x292e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292e98:
    // 0x292e98: 0x144301c0  bne         $v0, $v1, . + 4 + (0x1C0 << 2)
label_292e9c:
    if (ctx->pc == 0x292E9Cu) {
        ctx->pc = 0x292E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E98u;
        // 0x292e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292EA0u;
        goto label_292ea0;
    }
    ctx->pc = 0x292E98u;
    {
        const bool branch_taken_0x292e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x292E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E98u;
        // 0x292e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292e98) {
            ctx->pc = 0x29359Cu;
            goto label_29359c;
        }
    }
    ctx->pc = 0x292EA0u;
label_292ea0:
    // 0x292ea0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x292ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_292ea4:
    // 0x292ea4: 0xc088aa4  jal         func_222A90
label_292ea8:
    if (ctx->pc == 0x292EA8u) {
        ctx->pc = 0x292EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292EA4u;
        // 0x292ea8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292EACu;
        goto label_292eac;
    }
    ctx->pc = 0x292EA4u;
    SET_GPR_U32(ctx, 31, 0x292EACu);
    ctx->pc = 0x292EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292EA4u;
    // 0x292ea8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x292EA4u, 0x292EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EACu;
label_292eac:
    // 0x292eac: 0x144001bb  bnez        $v0, . + 4 + (0x1BB << 2)
label_292eb0:
    if (ctx->pc == 0x292EB0u) {
        ctx->pc = 0x292EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292EACu;
        // 0x292eb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292EB4u;
        goto label_292eb4;
    }
    ctx->pc = 0x292EACu;
    {
        const bool branch_taken_0x292eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292EACu;
        // 0x292eb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292eac) {
            ctx->pc = 0x29359Cu;
            goto label_29359c;
        }
    }
    ctx->pc = 0x292EB4u;
label_292eb4:
    // 0x292eb4: 0x8ea20200  lw          $v0, 0x200($s5)
    ctx->pc = 0x292eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 512)));
label_292eb8:
    // 0x292eb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x292eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_292ebc:
    // 0x292ebc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x292ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_292ec0:
    // 0x292ec0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x292ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_292ec4:
    // 0x292ec4: 0xc088a92  jal         func_222A48
label_292ec8:
    if (ctx->pc == 0x292EC8u) {
        ctx->pc = 0x292EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292EC4u;
        // 0x292ec8: 0xaea20200  sw          $v0, 0x200($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292ECCu;
        goto label_292ecc;
    }
    ctx->pc = 0x292EC4u;
    SET_GPR_U32(ctx, 31, 0x292ECCu);
    ctx->pc = 0x292EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292EC4u;
    // 0x292ec8: 0xaea20200  sw          $v0, 0x200($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 512), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x292EC4u, 0x292ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292ECCu;
label_292ecc:
    // 0x292ecc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_292ed0:
    if (ctx->pc == 0x292ED0u) {
        ctx->pc = 0x292ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292ECCu;
        // 0x292ed0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292ED4u;
        goto label_292ed4;
    }
    ctx->pc = 0x292ECCu;
    {
        const bool branch_taken_0x292ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292ecc) {
            ctx->pc = 0x292ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292ECCu;
            // 0x292ed0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292EECu;
            goto label_292eec;
        }
    }
    ctx->pc = 0x292ED4u;
label_292ed4:
    // 0x292ed4: 0xc087502  jal         func_21D408
label_292ed8:
    if (ctx->pc == 0x292ED8u) {
        ctx->pc = 0x292ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292ED4u;
        // 0x292ed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292EDCu;
        goto label_292edc;
    }
    ctx->pc = 0x292ED4u;
    SET_GPR_U32(ctx, 31, 0x292EDCu);
    ctx->pc = 0x292ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292ED4u;
    // 0x292ed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292ED4u, 0x292EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EDCu;
label_292edc:
    // 0x292edc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x292edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292ee0:
    // 0x292ee0: 0xc0a40ca  jal         func_290328
label_292ee4:
    if (ctx->pc == 0x292EE4u) {
        ctx->pc = 0x292EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292EE0u;
        // 0x292ee4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292EE8u;
        goto label_292ee8;
    }
    ctx->pc = 0x292EE0u;
    SET_GPR_U32(ctx, 31, 0x292EE8u);
    ctx->pc = 0x292EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292EE0u;
    // 0x292ee4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290328u, 0x292EE0u, 0x292EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EE8u;
label_292ee8:
    // 0x292ee8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x292ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_292eec:
    // 0x292eec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x292eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_292ef0:
    // 0x292ef0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x292ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_292ef4:
    // 0x292ef4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x292ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_292ef8:
    // 0x292ef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x292ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292efc:
    // 0x292efc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x292efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292f00:
    // 0x292f00: 0xc0a4d90  jal         func_293640
label_292f04:
    if (ctx->pc == 0x292F04u) {
        ctx->pc = 0x292F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F00u;
        // 0x292f04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F08u;
        goto label_292f08;
    }
    ctx->pc = 0x292F00u;
    SET_GPR_U32(ctx, 31, 0x292F08u);
    ctx->pc = 0x292F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292F00u;
    // 0x292f04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x292F00u, 0x292F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292F08u;
label_292f08:
    // 0x292f08: 0x82a2002c  lb          $v0, 0x2C($s5)
    ctx->pc = 0x292f08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 44)));
label_292f0c:
    // 0x292f0c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_292f10:
    if (ctx->pc == 0x292F10u) {
        ctx->pc = 0x292F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F0Cu;
        // 0x292f10: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F14u;
        goto label_292f14;
    }
    ctx->pc = 0x292F0Cu;
    {
        const bool branch_taken_0x292f0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x292F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F0Cu;
        // 0x292f10: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f0c) {
            ctx->pc = 0x292F20u;
            goto label_292f20;
        }
    }
    ctx->pc = 0x292F14u;
label_292f14:
    // 0x292f14: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x292f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_292f18:
    // 0x292f18: 0x10000002  b           . + 4 + (0x2 << 2)
label_292f1c:
    if (ctx->pc == 0x292F1Cu) {
        ctx->pc = 0x292F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F18u;
        // 0x292f1c: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F20u;
        goto label_292f20;
    }
    ctx->pc = 0x292F18u;
    {
        const bool branch_taken_0x292f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F18u;
        // 0x292f1c: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f18) {
            ctx->pc = 0x292F24u;
            goto label_292f24;
        }
    }
    ctx->pc = 0x292F20u;
label_292f20:
    // 0x292f20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x292f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292f24:
    // 0x292f24: 0x12000052  beqz        $s0, . + 4 + (0x52 << 2)
label_292f28:
    if (ctx->pc == 0x292F28u) {
        ctx->pc = 0x292F2Cu;
        goto label_292f2c;
    }
    ctx->pc = 0x292F24u;
    {
        const bool branch_taken_0x292f24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x292f24) {
            ctx->pc = 0x293070u;
            goto label_293070;
        }
    }
    ctx->pc = 0x292F2Cu;
label_292f2c:
    // 0x292f2c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x292f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_292f30:
    // 0x292f30: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x292f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_292f34:
    // 0x292f34: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x292f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_292f38:
    // 0x292f38: 0x40f809  jalr        $v0
label_292f3c:
    if (ctx->pc == 0x292F3Cu) {
        ctx->pc = 0x292F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F38u;
        // 0x292f3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F40u;
        goto label_292f40;
    }
    ctx->pc = 0x292F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x292F40u);
        ctx->pc = 0x292F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F38u;
        // 0x292f3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292F38u, 0x292F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x292F40u;
label_292f40:
    // 0x292f40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x292f40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292f44:
    // 0x292f44: 0x2402008d  addiu       $v0, $zero, 0x8D
    ctx->pc = 0x292f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
label_292f48:
    // 0x292f48: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_292f4c:
    if (ctx->pc == 0x292F4Cu) {
        ctx->pc = 0x292F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F48u;
        // 0x292f4c: 0x24020085  addiu       $v0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F50u;
        goto label_292f50;
    }
    ctx->pc = 0x292F48u;
    {
        const bool branch_taken_0x292f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x292F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F48u;
        // 0x292f4c: 0x24020085  addiu       $v0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f48) {
            ctx->pc = 0x292F9Cu;
            goto label_292f9c;
        }
    }
    ctx->pc = 0x292F50u;
label_292f50:
    // 0x292f50: 0xc08a08a  jal         func_228228
label_292f54:
    if (ctx->pc == 0x292F54u) {
        ctx->pc = 0x292F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F50u;
        // 0x292f54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F58u;
        goto label_292f58;
    }
    ctx->pc = 0x292F50u;
    SET_GPR_U32(ctx, 31, 0x292F58u);
    ctx->pc = 0x292F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292F50u;
    // 0x292f54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x292F50u, 0x292F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292F58u;
label_292f58:
    // 0x292f58: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_292f5c:
    if (ctx->pc == 0x292F5Cu) {
        ctx->pc = 0x292F60u;
        goto label_292f60;
    }
    ctx->pc = 0x292F58u;
    {
        const bool branch_taken_0x292f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292f58) {
            ctx->pc = 0x293070u;
            goto label_293070;
        }
    }
    ctx->pc = 0x292F60u;
label_292f60:
    // 0x292f60: 0xc0a36c8  jal         func_28DB20
label_292f64:
    if (ctx->pc == 0x292F64u) {
        ctx->pc = 0x292F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F60u;
        // 0x292f64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F68u;
        goto label_292f68;
    }
    ctx->pc = 0x292F60u;
    SET_GPR_U32(ctx, 31, 0x292F68u);
    ctx->pc = 0x292F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292F60u;
    // 0x292f64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x292F60u, 0x292F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292F68u;
label_292f68:
    // 0x292f68: 0x82a3002e  lb          $v1, 0x2E($s5)
    ctx->pc = 0x292f68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 46)));
label_292f6c:
    // 0x292f6c: 0x1c600040  bgtz        $v1, . + 4 + (0x40 << 2)
label_292f70:
    if (ctx->pc == 0x292F70u) {
        ctx->pc = 0x292F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F6Cu;
        // 0x292f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F74u;
        goto label_292f74;
    }
    ctx->pc = 0x292F6Cu;
    {
        const bool branch_taken_0x292f6c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x292F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F6Cu;
        // 0x292f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f6c) {
            ctx->pc = 0x293070u;
            goto label_293070;
        }
    }
    ctx->pc = 0x292F74u;
label_292f74:
    // 0x292f74: 0xc0a7c26  jal         func_29F098
label_292f78:
    if (ctx->pc == 0x292F78u) {
        ctx->pc = 0x292F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F74u;
        // 0x292f78: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F7Cu;
        goto label_292f7c;
    }
    ctx->pc = 0x292F74u;
    SET_GPR_U32(ctx, 31, 0x292F7Cu);
    ctx->pc = 0x292F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292F74u;
    // 0x292f78: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F098u, 0x292F74u, 0x292F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292F7Cu;
label_292f7c:
    // 0x292f7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x292f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292f80:
    // 0x292f80: 0x1443003b  bne         $v0, $v1, . + 4 + (0x3B << 2)
label_292f84:
    if (ctx->pc == 0x292F84u) {
        ctx->pc = 0x292F88u;
        goto label_292f88;
    }
    ctx->pc = 0x292F80u;
    {
        const bool branch_taken_0x292f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x292f80) {
            ctx->pc = 0x293070u;
            goto label_293070;
        }
    }
    ctx->pc = 0x292F88u;
label_292f88:
    // 0x292f88: 0xc0874fa  jal         func_21D3E8
label_292f8c:
    if (ctx->pc == 0x292F8Cu) {
        ctx->pc = 0x292F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F88u;
        // 0x292f8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F90u;
        goto label_292f90;
    }
    ctx->pc = 0x292F88u;
    SET_GPR_U32(ctx, 31, 0x292F90u);
    ctx->pc = 0x292F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292F88u;
    // 0x292f8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x292F88u, 0x292F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292F90u;
label_292f90:
    // 0x292f90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x292f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292f94:
    // 0x292f94: 0x10000032  b           . + 4 + (0x32 << 2)
label_292f98:
    if (ctx->pc == 0x292F98u) {
        ctx->pc = 0x292F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F94u;
        // 0x292f98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F9Cu;
        goto label_292f9c;
    }
    ctx->pc = 0x292F94u;
    {
        const bool branch_taken_0x292f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F94u;
        // 0x292f98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f94) {
            ctx->pc = 0x293060u;
            goto label_293060;
        }
    }
    ctx->pc = 0x292F9Cu;
label_292f9c:
    // 0x292f9c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_292fa0:
    if (ctx->pc == 0x292FA0u) {
        ctx->pc = 0x292FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F9Cu;
        // 0x292fa0: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292FA4u;
        goto label_292fa4;
    }
    ctx->pc = 0x292F9Cu;
    {
        const bool branch_taken_0x292f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x292FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F9Cu;
        // 0x292fa0: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f9c) {
            ctx->pc = 0x292FB8u;
            goto label_292fb8;
        }
    }
    ctx->pc = 0x292FA4u;
label_292fa4:
    // 0x292fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_292fa8:
    // 0x292fa8: 0xc0ba82e  jal         func_2EA0B8
label_292fac:
    if (ctx->pc == 0x292FACu) {
        ctx->pc = 0x292FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FA8u;
        // 0x292fac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292FB0u;
        goto label_292fb0;
    }
    ctx->pc = 0x292FA8u;
    SET_GPR_U32(ctx, 31, 0x292FB0u);
    ctx->pc = 0x292FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292FA8u;
    // 0x292fac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA0B8u, 0x292FA8u, 0x292FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FB0u;
label_292fb0:
    // 0x292fb0: 0x1000017a  b           . + 4 + (0x17A << 2)
label_292fb4:
    if (ctx->pc == 0x292FB4u) {
        ctx->pc = 0x292FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FB0u;
        // 0x292fb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292FB8u;
        goto label_292fb8;
    }
    ctx->pc = 0x292FB0u;
    {
        const bool branch_taken_0x292fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FB0u;
        // 0x292fb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fb0) {
            ctx->pc = 0x29359Cu;
            goto label_29359c;
        }
    }
    ctx->pc = 0x292FB8u;
label_292fb8:
    // 0x292fb8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_292fbc:
    if (ctx->pc == 0x292FBCu) {
        ctx->pc = 0x292FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FB8u;
        // 0x292fbc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292FC0u;
        goto label_292fc0;
    }
    ctx->pc = 0x292FB8u;
    {
        const bool branch_taken_0x292fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x292FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FB8u;
        // 0x292fbc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fb8) {
            ctx->pc = 0x292FD4u;
            goto label_292fd4;
        }
    }
    ctx->pc = 0x292FC0u;
label_292fc0:
    // 0x292fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_292fc4:
    // 0x292fc4: 0xc0baf88  jal         func_2EBE20
label_292fc8:
    if (ctx->pc == 0x292FC8u) {
        ctx->pc = 0x292FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FC4u;
        // 0x292fc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292FCCu;
        goto label_292fcc;
    }
    ctx->pc = 0x292FC4u;
    SET_GPR_U32(ctx, 31, 0x292FCCu);
    ctx->pc = 0x292FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292FC4u;
    // 0x292fc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBE20u, 0x292FC4u, 0x292FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FCCu;
label_292fcc:
    // 0x292fcc: 0x10000173  b           . + 4 + (0x173 << 2)
label_292fd0:
    if (ctx->pc == 0x292FD0u) {
        ctx->pc = 0x292FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FCCu;
        // 0x292fd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292FD4u;
        goto label_292fd4;
    }
    ctx->pc = 0x292FCCu;
    {
        const bool branch_taken_0x292fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FCCu;
        // 0x292fd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fcc) {
            ctx->pc = 0x29359Cu;
            goto label_29359c;
        }
    }
    ctx->pc = 0x292FD4u;
label_292fd4:
    // 0x292fd4: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_292fd8:
    if (ctx->pc == 0x292FD8u) {
        ctx->pc = 0x292FDCu;
        goto label_292fdc;
    }
    ctx->pc = 0x292FD4u;
    {
        const bool branch_taken_0x292fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x292fd4) {
            ctx->pc = 0x293070u;
            goto label_293070;
        }
    }
    ctx->pc = 0x292FDCu;
label_292fdc:
    // 0x292fdc: 0xc0e409a  jal         func_390268
label_292fe0:
    if (ctx->pc == 0x292FE0u) {
        ctx->pc = 0x292FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FDCu;
        // 0x292fe0: 0x26a40124  addiu       $a0, $s5, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292FE4u;
        goto label_292fe4;
    }
    ctx->pc = 0x292FDCu;
    SET_GPR_U32(ctx, 31, 0x292FE4u);
    ctx->pc = 0x292FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292FDCu;
    // 0x292fe0: 0x26a40124  addiu       $a0, $s5, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x292FDCu, 0x292FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FE4u;
label_292fe4:
    // 0x292fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292fe8:
    // 0x292fe8: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_292fec:
    if (ctx->pc == 0x292FECu) {
        ctx->pc = 0x292FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FE8u;
        // 0x292fec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292FF0u;
        goto label_292ff0;
    }
    ctx->pc = 0x292FE8u;
    {
        const bool branch_taken_0x292fe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x292FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FE8u;
        // 0x292fec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292fe8) {
            ctx->pc = 0x293070u;
            goto label_293070;
        }
    }
    ctx->pc = 0x292FF0u;
label_292ff0:
    // 0x292ff0: 0xc09643e  jal         func_2590F8
label_292ff4:
    if (ctx->pc == 0x292FF4u) {
        ctx->pc = 0x292FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FF0u;
        // 0x292ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292FF8u;
        goto label_292ff8;
    }
    ctx->pc = 0x292FF0u;
    SET_GPR_U32(ctx, 31, 0x292FF8u);
    ctx->pc = 0x292FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292FF0u;
    // 0x292ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2590F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590F8u, 0x292FF0u, 0x292FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292FF8u;
label_292ff8:
    // 0x292ff8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x292ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292ffc:
    // 0x292ffc: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_293000:
    if (ctx->pc == 0x293000u) {
        ctx->pc = 0x293000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FFCu;
        // 0x293000: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293004u;
        goto label_293004;
    }
    ctx->pc = 0x292FFCu;
    {
        const bool branch_taken_0x292ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x293000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FFCu;
        // 0x293000: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ffc) {
            ctx->pc = 0x293014u;
            goto label_293014;
        }
    }
    ctx->pc = 0x293004u;
label_293004:
    // 0x293004: 0xc0963a2  jal         func_258E88
label_293008:
    if (ctx->pc == 0x293008u) {
        ctx->pc = 0x293008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293004u;
        // 0x293008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29300Cu;
        goto label_29300c;
    }
    ctx->pc = 0x293004u;
    SET_GPR_U32(ctx, 31, 0x29300Cu);
    ctx->pc = 0x293008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293004u;
    // 0x293008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E88u, 0x293004u, 0x29300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29300Cu;
label_29300c:
    // 0x29300c: 0x14510018  bne         $v0, $s1, . + 4 + (0x18 << 2)
label_293010:
    if (ctx->pc == 0x293010u) {
        ctx->pc = 0x293014u;
        goto label_293014;
    }
    ctx->pc = 0x29300Cu;
    {
        const bool branch_taken_0x29300c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x29300c) {
            ctx->pc = 0x293070u;
            goto label_293070;
        }
    }
    ctx->pc = 0x293014u;
label_293014:
    // 0x293014: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x293014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_293018:
    // 0x293018: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x293018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_29301c:
    // 0x29301c: 0xc0cd4ee  jal         func_3353B8
label_293020:
    if (ctx->pc == 0x293020u) {
        ctx->pc = 0x293020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29301Cu;
        // 0x293020: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293024u;
        goto label_293024;
    }
    ctx->pc = 0x29301Cu;
    SET_GPR_U32(ctx, 31, 0x293024u);
    ctx->pc = 0x293020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29301Cu;
    // 0x293020: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x29301Cu, 0x293024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293024u;
label_293024:
    // 0x293024: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293028:
    // 0x293028: 0xc088d7e  jal         func_2235F8
label_29302c:
    if (ctx->pc == 0x29302Cu) {
        ctx->pc = 0x29302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293028u;
        // 0x29302c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293030u;
        goto label_293030;
    }
    ctx->pc = 0x293028u;
    SET_GPR_U32(ctx, 31, 0x293030u);
    ctx->pc = 0x29302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293028u;
    // 0x29302c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2235F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235F8u, 0x293028u, 0x293030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293030u;
label_293030:
    // 0x293030: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x293030u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_293034:
    // 0x293034: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_293038:
    if (ctx->pc == 0x293038u) {
        ctx->pc = 0x29303Cu;
        goto label_29303c;
    }
    ctx->pc = 0x293034u;
    {
        const bool branch_taken_0x293034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x293034) {
            ctx->pc = 0x293070u;
            goto label_293070;
        }
    }
    ctx->pc = 0x29303Cu;
label_29303c:
    // 0x29303c: 0xc0a36c8  jal         func_28DB20
label_293040:
    if (ctx->pc == 0x293040u) {
        ctx->pc = 0x293040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29303Cu;
        // 0x293040: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293044u;
        goto label_293044;
    }
    ctx->pc = 0x29303Cu;
    SET_GPR_U32(ctx, 31, 0x293044u);
    ctx->pc = 0x293040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29303Cu;
    // 0x293040: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x29303Cu, 0x293044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293044u;
label_293044:
    // 0x293044: 0x82a3002e  lb          $v1, 0x2E($s5)
    ctx->pc = 0x293044u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 46)));
label_293048:
    // 0x293048: 0x1c600009  bgtz        $v1, . + 4 + (0x9 << 2)
label_29304c:
    if (ctx->pc == 0x29304Cu) {
        ctx->pc = 0x293050u;
        goto label_293050;
    }
    ctx->pc = 0x293048u;
    {
        const bool branch_taken_0x293048 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x293048) {
            ctx->pc = 0x293070u;
            goto label_293070;
        }
    }
    ctx->pc = 0x293050u;
label_293050:
    // 0x293050: 0xc0874fa  jal         func_21D3E8
label_293054:
    if (ctx->pc == 0x293054u) {
        ctx->pc = 0x293054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293050u;
        // 0x293054: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293058u;
        goto label_293058;
    }
    ctx->pc = 0x293050u;
    SET_GPR_U32(ctx, 31, 0x293058u);
    ctx->pc = 0x293054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293050u;
    // 0x293054: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x293050u, 0x293058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293058u;
label_293058:
    // 0x293058: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x293058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29305c:
    // 0x29305c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29305cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_293060:
    // 0x293060: 0xc051fbc  jal         func_147EF0
label_293064:
    if (ctx->pc == 0x293064u) {
        ctx->pc = 0x293068u;
        goto label_293068;
    }
    ctx->pc = 0x293060u;
    SET_GPR_U32(ctx, 31, 0x293068u);
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x293060u, 0x293068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293068u;
label_293068:
    // 0x293068: 0x1000014c  b           . + 4 + (0x14C << 2)
label_29306c:
    if (ctx->pc == 0x29306Cu) {
        ctx->pc = 0x29306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293068u;
        // 0x29306c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293070u;
        goto label_293070;
    }
    ctx->pc = 0x293068u;
    {
        const bool branch_taken_0x293068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293068u;
        // 0x29306c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293068) {
            ctx->pc = 0x29359Cu;
            goto label_29359c;
        }
    }
    ctx->pc = 0x293070u;
label_293070:
    // 0x293070: 0xc0874fa  jal         func_21D3E8
label_293074:
    if (ctx->pc == 0x293074u) {
        ctx->pc = 0x293074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293070u;
        // 0x293074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293078u;
        goto label_293078;
    }
    ctx->pc = 0x293070u;
    SET_GPR_U32(ctx, 31, 0x293078u);
    ctx->pc = 0x293074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293070u;
    // 0x293074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x293070u, 0x293078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293078u;
label_293078:
    // 0x293078: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x293078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_29307c:
    // 0x29307c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_293080:
    if (ctx->pc == 0x293080u) {
        ctx->pc = 0x293080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29307Cu;
        // 0x293080: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293084u;
        goto label_293084;
    }
    ctx->pc = 0x29307Cu;
    {
        const bool branch_taken_0x29307c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x293080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29307Cu;
        // 0x293080: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29307c) {
            ctx->pc = 0x2930A0u;
            goto label_2930a0;
        }
    }
    ctx->pc = 0x293084u;
label_293084:
    // 0x293084: 0xc087502  jal         func_21D408
label_293088:
    if (ctx->pc == 0x293088u) {
        ctx->pc = 0x293088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293084u;
        // 0x293088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29308Cu;
        goto label_29308c;
    }
    ctx->pc = 0x293084u;
    SET_GPR_U32(ctx, 31, 0x29308Cu);
    ctx->pc = 0x293088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293084u;
    // 0x293088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x293084u, 0x29308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29308Cu;
label_29308c:
    // 0x29308c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29308cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_293090:
    // 0x293090: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x293090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_293094:
    // 0x293094: 0x14620141  bne         $v1, $v0, . + 4 + (0x141 << 2)
label_293098:
    if (ctx->pc == 0x293098u) {
        ctx->pc = 0x293098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293094u;
        // 0x293098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29309Cu;
        goto label_29309c;
    }
    ctx->pc = 0x293094u;
    {
        const bool branch_taken_0x293094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x293098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293094u;
        // 0x293098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293094) {
            ctx->pc = 0x29359Cu;
            goto label_29359c;
        }
    }
    ctx->pc = 0x29309Cu;
label_29309c:
    // 0x29309c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29309cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2930a0:
    // 0x2930a0: 0xc0a4856  jal         func_292158
label_2930a4:
    if (ctx->pc == 0x2930A4u) {
        ctx->pc = 0x2930A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930A0u;
        // 0x2930a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930A8u;
        goto label_2930a8;
    }
    ctx->pc = 0x2930A0u;
    SET_GPR_U32(ctx, 31, 0x2930A8u);
    ctx->pc = 0x2930A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2930A0u;
    // 0x2930a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292158u, 0x2930A0u, 0x2930A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2930A8u;
label_2930a8:
    // 0x2930a8: 0x1000013c  b           . + 4 + (0x13C << 2)
label_2930ac:
    if (ctx->pc == 0x2930ACu) {
        ctx->pc = 0x2930ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930A8u;
        // 0x2930ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930B0u;
        goto label_2930b0;
    }
    ctx->pc = 0x2930A8u;
    {
        const bool branch_taken_0x2930a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2930ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930A8u;
        // 0x2930ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930a8) {
            ctx->pc = 0x29359Cu;
            goto label_29359c;
        }
    }
    ctx->pc = 0x2930B0u;
label_2930b0:
    // 0x2930b0: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x2930b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_2930b4:
    // 0x2930b4: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
label_2930b8:
    if (ctx->pc == 0x2930B8u) {
        ctx->pc = 0x2930B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930B4u;
        // 0x2930b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930BCu;
        goto label_2930bc;
    }
    ctx->pc = 0x2930B4u;
    {
        const bool branch_taken_0x2930b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2930B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930B4u;
        // 0x2930b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930b4) {
            ctx->pc = 0x293598u;
            goto label_293598;
        }
    }
    ctx->pc = 0x2930BCu;
label_2930bc:
    // 0x2930bc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2930bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2930c0:
    // 0x2930c0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2930c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2930c4:
    // 0x2930c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2930c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2930c8:
    // 0x2930c8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2930c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_2930cc:
    // 0x2930cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2930ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2930d0:
    // 0x2930d0: 0xc0a4d90  jal         func_293640
label_2930d4:
    if (ctx->pc == 0x2930D4u) {
        ctx->pc = 0x2930D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930D0u;
        // 0x2930d4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930D8u;
        goto label_2930d8;
    }
    ctx->pc = 0x2930D0u;
    SET_GPR_U32(ctx, 31, 0x2930D8u);
    ctx->pc = 0x2930D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2930D0u;
    // 0x2930d4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x2930D0u, 0x2930D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2930D8u;
label_2930d8:
    // 0x2930d8: 0x10000130  b           . + 4 + (0x130 << 2)
label_2930dc:
    if (ctx->pc == 0x2930DCu) {
        ctx->pc = 0x2930DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930D8u;
        // 0x2930dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930E0u;
        goto label_2930e0;
    }
    ctx->pc = 0x2930D8u;
    {
        const bool branch_taken_0x2930d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2930DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930D8u;
        // 0x2930dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930d8) {
            ctx->pc = 0x29359Cu;
            goto label_29359c;
        }
    }
    ctx->pc = 0x2930E0u;
label_2930e0:
    // 0x2930e0: 0x26a201a4  addiu       $v0, $s5, 0x1A4
    ctx->pc = 0x2930e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 420));
label_2930e4:
    // 0x2930e4: 0x26a40124  addiu       $a0, $s5, 0x124
    ctx->pc = 0x2930e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 292));
label_2930e8:
    // 0x2930e8: 0xc0e409a  jal         func_390268
label_2930ec:
    if (ctx->pc == 0x2930ECu) {
        ctx->pc = 0x2930ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930E8u;
        // 0x2930ec: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930F0u;
        goto label_2930f0;
    }
    ctx->pc = 0x2930E8u;
    SET_GPR_U32(ctx, 31, 0x2930F0u);
    ctx->pc = 0x2930ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2930E8u;
    // 0x2930ec: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2930E8u, 0x2930F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2930F0u;
label_2930f0:
    // 0x2930f0: 0x82a3002c  lb          $v1, 0x2C($s5)
    ctx->pc = 0x2930f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 44)));
label_2930f4:
    // 0x2930f4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_2930f8:
    if (ctx->pc == 0x2930F8u) {
        ctx->pc = 0x2930F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930F4u;
        // 0x2930f8: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930FCu;
        goto label_2930fc;
    }
    ctx->pc = 0x2930F4u;
    {
        const bool branch_taken_0x2930f4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2930F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930F4u;
        // 0x2930f8: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930f4) {
            ctx->pc = 0x29310Cu;
            goto label_29310c;
        }
    }
    ctx->pc = 0x2930FCu;
label_2930fc:
    // 0x2930fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2930fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_293100:
    // 0x293100: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x293100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_293104:
    // 0x293104: 0x10000002  b           . + 4 + (0x2 << 2)
label_293108:
    if (ctx->pc == 0x293108u) {
        ctx->pc = 0x293108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293104u;
        // 0x293108: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29310Cu;
        goto label_29310c;
    }
    ctx->pc = 0x293104u;
    {
        const bool branch_taken_0x293104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293104u;
        // 0x293108: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293104) {
            ctx->pc = 0x293110u;
            goto label_293110;
        }
    }
    ctx->pc = 0x29310Cu;
label_29310c:
    // 0x29310c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29310cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293110:
    // 0x293110: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_293114:
    if (ctx->pc == 0x293114u) {
        ctx->pc = 0x293114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293110u;
        // 0x293114: 0xc6a00140  lwc1        $f0, 0x140($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x293118u;
        goto label_293118;
    }
    ctx->pc = 0x293110u;
    {
        const bool branch_taken_0x293110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293110) {
            ctx->pc = 0x293114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293110u;
            // 0x293114: 0xc6a00140  lwc1        $f0, 0x140($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x293188u;
            goto label_293188;
        }
    }
    ctx->pc = 0x293118u;
label_293118:
    // 0x293118: 0x82a2002c  lb          $v0, 0x2C($s5)
    ctx->pc = 0x293118u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 44)));
label_29311c:
    // 0x29311c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_293120:
    if (ctx->pc == 0x293120u) {
        ctx->pc = 0x293120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29311Cu;
        // 0x293120: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293124u;
        goto label_293124;
    }
    ctx->pc = 0x29311Cu;
    {
        const bool branch_taken_0x29311c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x293120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29311Cu;
        // 0x293120: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29311c) {
            ctx->pc = 0x293130u;
            goto label_293130;
        }
    }
    ctx->pc = 0x293124u;
label_293124:
    // 0x293124: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x293124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_293128:
    // 0x293128: 0x10000002  b           . + 4 + (0x2 << 2)
label_29312c:
    if (ctx->pc == 0x29312Cu) {
        ctx->pc = 0x29312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293128u;
        // 0x29312c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293130u;
        goto label_293130;
    }
    ctx->pc = 0x293128u;
    {
        const bool branch_taken_0x293128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293128u;
        // 0x29312c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293128) {
            ctx->pc = 0x293134u;
            goto label_293134;
        }
    }
    ctx->pc = 0x293130u;
label_293130:
    // 0x293130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293134:
    // 0x293134: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x293134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_293138:
    // 0x293138: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x293138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_29313c:
    // 0x29313c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x29313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_293140:
    // 0x293140: 0x40f809  jalr        $v0
label_293144:
    if (ctx->pc == 0x293144u) {
        ctx->pc = 0x293144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293140u;
        // 0x293144: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293148u;
        goto label_293148;
    }
    ctx->pc = 0x293140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x293148u);
        ctx->pc = 0x293144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293140u;
        // 0x293144: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293140u, 0x293148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x293148u;
label_293148:
    // 0x293148: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x293148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_29314c:
    // 0x29314c: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_293150:
    if (ctx->pc == 0x293150u) {
        ctx->pc = 0x293150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29314Cu;
        // 0x293150: 0xc6a00140  lwc1        $f0, 0x140($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x293154u;
        goto label_293154;
    }
    ctx->pc = 0x29314Cu;
    {
        const bool branch_taken_0x29314c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29314c) {
            ctx->pc = 0x293150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29314Cu;
            // 0x293150: 0xc6a00140  lwc1        $f0, 0x140($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x293188u;
            goto label_293188;
        }
    }
    ctx->pc = 0x293154u;
label_293154:
    // 0x293154: 0x82a2002c  lb          $v0, 0x2C($s5)
    ctx->pc = 0x293154u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 44)));
label_293158:
    // 0x293158: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_29315c:
    if (ctx->pc == 0x29315Cu) {
        ctx->pc = 0x29315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293158u;
        // 0x29315c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293160u;
        goto label_293160;
    }
    ctx->pc = 0x293158u;
    {
        const bool branch_taken_0x293158 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293158u;
        // 0x29315c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293158) {
            ctx->pc = 0x29316Cu;
            goto label_29316c;
        }
    }
    ctx->pc = 0x293160u;
label_293160:
    // 0x293160: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x293160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_293164:
    // 0x293164: 0x10000002  b           . + 4 + (0x2 << 2)
label_293168:
    if (ctx->pc == 0x293168u) {
        ctx->pc = 0x293168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293164u;
        // 0x293168: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29316Cu;
        goto label_29316c;
    }
    ctx->pc = 0x293164u;
    {
        const bool branch_taken_0x293164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293164u;
        // 0x293168: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293164) {
            ctx->pc = 0x293170u;
            goto label_293170;
        }
    }
    ctx->pc = 0x29316Cu;
label_29316c:
    // 0x29316c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29316cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293170:
    // 0x293170: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x293170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_293174:
    // 0x293174: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x293174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_293178:
    // 0x293178: 0xc0e409a  jal         func_390268
label_29317c:
    if (ctx->pc == 0x29317Cu) {
        ctx->pc = 0x29317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293178u;
        // 0x29317c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293180u;
        goto label_293180;
    }
    ctx->pc = 0x293178u;
    SET_GPR_U32(ctx, 31, 0x293180u);
    ctx->pc = 0x29317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293178u;
    // 0x29317c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x293178u, 0x293180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293180u;
label_293180:
    // 0x293180: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x293180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_293184:
    // 0x293184: 0xc6a00140  lwc1        $f0, 0x140($s5)
    ctx->pc = 0x293184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293188:
    // 0x293188: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x293188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_29318c:
    // 0x29318c: 0xc6a1013c  lwc1        $f1, 0x13C($s5)
    ctx->pc = 0x29318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_293190:
    // 0x293190: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x293190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_293194:
    // 0x293194: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x293194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_293198:
    // 0x293198: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x293198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29319c:
    // 0x29319c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x29319cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2931a0:
    // 0x2931a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2931a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2931a4:
    // 0x2931a4: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x2931a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
label_2931a8:
    // 0x2931a8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2931a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_2931ac:
    // 0x2931ac: 0x46020542  mul.s       $f21, $f0, $f2
    ctx->pc = 0x2931acu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2931b0:
    // 0x2931b0: 0x4615ad42  mul.s       $f21, $f21, $f21
    ctx->pc = 0x2931b0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_2931b4:
    // 0x2931b4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2931b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2931b8:
    // 0x2931b8: 0xc137866  jal         func_4DE198
label_2931bc:
    if (ctx->pc == 0x2931BCu) {
        ctx->pc = 0x2931BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931B8u;
        // 0x2931bc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2931C0u;
        goto label_2931c0;
    }
    ctx->pc = 0x2931B8u;
    SET_GPR_U32(ctx, 31, 0x2931C0u);
    ctx->pc = 0x2931BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2931B8u;
    // 0x2931bc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x2931B8u, 0x2931C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2931C0u;
label_2931c0:
    // 0x2931c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2931c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2931c4:
    // 0x2931c4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2931c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2931c8:
    // 0x2931c8: 0xc0e409a  jal         func_390268
label_2931cc:
    if (ctx->pc == 0x2931CCu) {
        ctx->pc = 0x2931CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931C8u;
        // 0x2931cc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2931D0u;
        goto label_2931d0;
    }
    ctx->pc = 0x2931C8u;
    SET_GPR_U32(ctx, 31, 0x2931D0u);
    ctx->pc = 0x2931CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2931C8u;
    // 0x2931cc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2931C8u, 0x2931D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2931D0u;
label_2931d0:
    // 0x2931d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2931d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2931d4:
    // 0x2931d4: 0x126000b6  beqz        $s3, . + 4 + (0xB6 << 2)
label_2931d8:
    if (ctx->pc == 0x2931D8u) {
        ctx->pc = 0x2931D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931D4u;
        // 0x2931d8: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2931DCu;
        goto label_2931dc;
    }
    ctx->pc = 0x2931D4u;
    {
        const bool branch_taken_0x2931d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2931D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931D4u;
        // 0x2931d8: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931d4) {
            ctx->pc = 0x2934B0u;
            goto label_2934b0;
        }
    }
    ctx->pc = 0x2931DCu;
label_2931dc:
    // 0x2931dc: 0x8e7000cc  lw          $s0, 0xCC($s3)
    ctx->pc = 0x2931dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_2931e0:
    // 0x2931e0: 0x120200b3  beq         $s0, $v0, . + 4 + (0xB3 << 2)
label_2931e4:
    if (ctx->pc == 0x2931E4u) {
        ctx->pc = 0x2931E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931E0u;
        // 0x2931e4: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2931E8u;
        goto label_2931e8;
    }
    ctx->pc = 0x2931E0u;
    {
        const bool branch_taken_0x2931e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2931E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931E0u;
        // 0x2931e4: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931e0) {
            ctx->pc = 0x2934B0u;
            goto label_2934b0;
        }
    }
    ctx->pc = 0x2931E8u;
label_2931e8:
    // 0x2931e8: 0x120200b1  beq         $s0, $v0, . + 4 + (0xB1 << 2)
label_2931ec:
    if (ctx->pc == 0x2931ECu) {
        ctx->pc = 0x2931ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931E8u;
        // 0x2931ec: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2931F0u;
        goto label_2931f0;
    }
    ctx->pc = 0x2931E8u;
    {
        const bool branch_taken_0x2931e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2931ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931E8u;
        // 0x2931ec: 0x240200b2  addiu       $v0, $zero, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931e8) {
            ctx->pc = 0x2934B0u;
            goto label_2934b0;
        }
    }
    ctx->pc = 0x2931F0u;
label_2931f0:
    // 0x2931f0: 0x520200b0  beql        $s0, $v0, . + 4 + (0xB0 << 2)
label_2931f4:
    if (ctx->pc == 0x2931F4u) {
        ctx->pc = 0x2931F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931F0u;
        // 0x2931f4: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2931F8u;
        goto label_2931f8;
    }
    ctx->pc = 0x2931F0u;
    {
        const bool branch_taken_0x2931f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2931f0) {
            ctx->pc = 0x2931F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2931F0u;
            // 0x2931f4: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2934B4u;
            goto label_2934b4;
        }
    }
    ctx->pc = 0x2931F8u;
label_2931f8:
    // 0x2931f8: 0xc087502  jal         func_21D408
label_2931fc:
    if (ctx->pc == 0x2931FCu) {
        ctx->pc = 0x2931FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931F8u;
        // 0x2931fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293200u;
        goto label_293200;
    }
    ctx->pc = 0x2931F8u;
    SET_GPR_U32(ctx, 31, 0x293200u);
    ctx->pc = 0x2931FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2931F8u;
    // 0x2931fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2931F8u, 0x293200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293200u;
label_293200:
    // 0x293200: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x293200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293204:
    // 0x293204: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x293204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_293208:
    // 0x293208: 0x8c44caa8  lw          $a0, -0x3558($v0)
    ctx->pc = 0x293208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953640)));
label_29320c:
    // 0x29320c: 0x8e42020c  lw          $v0, 0x20C($s2)
    ctx->pc = 0x29320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_293210:
    // 0x293210: 0xc059132  jal         func_1644C8
label_293214:
    if (ctx->pc == 0x293214u) {
        ctx->pc = 0x293214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293210u;
        // 0x293214: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293218u;
        goto label_293218;
    }
    ctx->pc = 0x293210u;
    SET_GPR_U32(ctx, 31, 0x293218u);
    ctx->pc = 0x293214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293210u;
    // 0x293214: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1644C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1644C8u, 0x293210u, 0x293218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293218u;
label_293218:
    // 0x293218: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x293218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_29321c:
    // 0x29321c: 0x504300a5  beql        $v0, $v1, . + 4 + (0xA5 << 2)
label_293220:
    if (ctx->pc == 0x293220u) {
        ctx->pc = 0x293220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29321Cu;
        // 0x293220: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293224u;
        goto label_293224;
    }
    ctx->pc = 0x29321Cu;
    {
        const bool branch_taken_0x29321c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29321c) {
            ctx->pc = 0x293220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29321Cu;
            // 0x293220: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2934B4u;
            goto label_2934b4;
        }
    }
    ctx->pc = 0x293224u;
label_293224:
    // 0x293224: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x293224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_293228:
    // 0x293228: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_29322c:
    if (ctx->pc == 0x29322Cu) {
        ctx->pc = 0x29322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293228u;
        // 0x29322c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293230u;
        goto label_293230;
    }
    ctx->pc = 0x293228u;
    {
        const bool branch_taken_0x293228 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293228u;
        // 0x29322c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293228) {
            ctx->pc = 0x29323Cu;
            goto label_29323c;
        }
    }
    ctx->pc = 0x293230u;
label_293230:
    // 0x293230: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x293230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_293234:
    // 0x293234: 0x10000002  b           . + 4 + (0x2 << 2)
label_293238:
    if (ctx->pc == 0x293238u) {
        ctx->pc = 0x293238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293234u;
        // 0x293238: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29323Cu;
        goto label_29323c;
    }
    ctx->pc = 0x293234u;
    {
        const bool branch_taken_0x293234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293234u;
        // 0x293238: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293234) {
            ctx->pc = 0x293240u;
            goto label_293240;
        }
    }
    ctx->pc = 0x29323Cu;
label_29323c:
    // 0x29323c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29323cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293240:
    // 0x293240: 0x50a0009c  beql        $a1, $zero, . + 4 + (0x9C << 2)
label_293244:
    if (ctx->pc == 0x293244u) {
        ctx->pc = 0x293244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293240u;
        // 0x293244: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293248u;
        goto label_293248;
    }
    ctx->pc = 0x293240u;
    {
        const bool branch_taken_0x293240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x293240) {
            ctx->pc = 0x293244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293240u;
            // 0x293244: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2934B4u;
            goto label_2934b4;
        }
    }
    ctx->pc = 0x293248u;
label_293248:
    // 0x293248: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x293248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_29324c:
    // 0x29324c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x29324cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_293250:
    // 0x293250: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x293250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_293254:
    // 0x293254: 0x40f809  jalr        $v0
label_293258:
    if (ctx->pc == 0x293258u) {
        ctx->pc = 0x293258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293254u;
        // 0x293258: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29325Cu;
        goto label_29325c;
    }
    ctx->pc = 0x293254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29325Cu);
        ctx->pc = 0x293258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293254u;
        // 0x293258: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293254u, 0x29325Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29325Cu;
label_29325c:
    // 0x29325c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x29325cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293260:
    // 0x293260: 0x3ac2000f  xori        $v0, $s6, 0xF
    ctx->pc = 0x293260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)15);
label_293264:
    // 0x293264: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_293268:
    if (ctx->pc == 0x293268u) {
        ctx->pc = 0x293268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293264u;
        // 0x293268: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29326Cu;
        goto label_29326c;
    }
    ctx->pc = 0x293264u;
    {
        const bool branch_taken_0x293264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293264u;
        // 0x293268: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293264) {
            ctx->pc = 0x293278u;
            goto label_293278;
        }
    }
    ctx->pc = 0x29326Cu;
label_29326c:
    // 0x29326c: 0x3ac20085  xori        $v0, $s6, 0x85
    ctx->pc = 0x29326cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)133);
label_293270:
    // 0x293270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293274:
    // 0x293274: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x293274u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_293278:
    // 0x293278: 0x5460008e  bnel        $v1, $zero, . + 4 + (0x8E << 2)
label_29327c:
    if (ctx->pc == 0x29327Cu) {
        ctx->pc = 0x29327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293278u;
        // 0x29327c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293280u;
        goto label_293280;
    }
    ctx->pc = 0x293278u;
    {
        const bool branch_taken_0x293278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x293278) {
            ctx->pc = 0x29327Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293278u;
            // 0x29327c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2934B4u;
            goto label_2934b4;
        }
    }
    ctx->pc = 0x293280u;
label_293280:
    // 0x293280: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x293280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_293284:
    // 0x293284: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x293284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_293288:
    // 0x293288: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
label_29328c:
    if (ctx->pc == 0x29328Cu) {
        ctx->pc = 0x29328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293288u;
        // 0x29328c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293290u;
        goto label_293290;
    }
    ctx->pc = 0x293288u;
    {
        const bool branch_taken_0x293288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x293288) {
            ctx->pc = 0x29328Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293288u;
            // 0x29328c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2932CCu;
            goto label_2932cc;
        }
    }
    ctx->pc = 0x293290u;
label_293290:
    // 0x293290: 0x8e42020c  lw          $v0, 0x20C($s2)
    ctx->pc = 0x293290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_293294:
    // 0x293294: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x293294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_293298:
    // 0x293298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29329c:
    // 0x29329c: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x29329cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2932a0:
    // 0x2932a0: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_2932a4:
    if (ctx->pc == 0x2932A4u) {
        ctx->pc = 0x2932A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932A0u;
        // 0x2932a4: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2932A8u;
        goto label_2932a8;
    }
    ctx->pc = 0x2932A0u;
    {
        const bool branch_taken_0x2932a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2932a0) {
            ctx->pc = 0x2932A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2932A0u;
            // 0x2932a4: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2932CCu;
            goto label_2932cc;
        }
    }
    ctx->pc = 0x2932A8u;
label_2932a8:
    // 0x2932a8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2932a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2932ac:
    // 0x2932ac: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2932acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2932b0:
    // 0x2932b0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2932b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2932b4:
    // 0x2932b4: 0x40f809  jalr        $v0
label_2932b8:
    if (ctx->pc == 0x2932B8u) {
        ctx->pc = 0x2932B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932B4u;
        // 0x2932b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2932BCu;
        goto label_2932bc;
    }
    ctx->pc = 0x2932B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2932BCu);
        ctx->pc = 0x2932B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932B4u;
        // 0x2932b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2932B4u, 0x2932BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2932BCu;
label_2932bc:
    // 0x2932bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2932bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2932c0:
    // 0x2932c0: 0x5043007c  beql        $v0, $v1, . + 4 + (0x7C << 2)
label_2932c4:
    if (ctx->pc == 0x2932C4u) {
        ctx->pc = 0x2932C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932C0u;
        // 0x2932c4: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2932C8u;
        goto label_2932c8;
    }
    ctx->pc = 0x2932C0u;
    {
        const bool branch_taken_0x2932c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2932c0) {
            ctx->pc = 0x2932C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2932C0u;
            // 0x2932c4: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2934B4u;
            goto label_2934b4;
        }
    }
    ctx->pc = 0x2932C8u;
label_2932c8:
    // 0x2932c8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2932c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2932cc:
    // 0x2932cc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2932ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2932d0:
    // 0x2932d0: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2932d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2932d4:
    // 0x2932d4: 0xc0cd4ee  jal         func_3353B8
label_2932d8:
    if (ctx->pc == 0x2932D8u) {
        ctx->pc = 0x2932D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932D4u;
        // 0x2932d8: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2932DCu;
        goto label_2932dc;
    }
    ctx->pc = 0x2932D4u;
    SET_GPR_U32(ctx, 31, 0x2932DCu);
    ctx->pc = 0x2932D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2932D4u;
    // 0x2932d8: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2932D4u, 0x2932DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2932DCu;
label_2932dc:
    // 0x2932dc: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x2932dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2932e0:
    // 0x2932e0: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x2932e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2932e4:
    // 0x2932e4: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x2932e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2932e8:
    // 0x2932e8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2932e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2932ec:
    // 0x2932ec: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2932ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2932f0:
    // 0x2932f0: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
label_2932f4:
    if (ctx->pc == 0x2932F4u) {
        ctx->pc = 0x2932F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932F0u;
        // 0x2932f4: 0x83a00b  movn        $s4, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2932F8u;
        goto label_2932f8;
    }
    ctx->pc = 0x2932F0u;
    {
        const bool branch_taken_0x2932f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2932F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932F0u;
        // 0x2932f4: 0x83a00b  movn        $s4, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932f0) {
            ctx->pc = 0x293320u;
            goto label_293320;
        }
    }
    ctx->pc = 0x2932F8u;
label_2932f8:
    // 0x2932f8: 0xc0874fa  jal         func_21D3E8
label_2932fc:
    if (ctx->pc == 0x2932FCu) {
        ctx->pc = 0x2932FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932F8u;
        // 0x2932fc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293300u;
        goto label_293300;
    }
    ctx->pc = 0x2932F8u;
    SET_GPR_U32(ctx, 31, 0x293300u);
    ctx->pc = 0x2932FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2932F8u;
    // 0x2932fc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2932F8u, 0x293300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293300u;
label_293300:
    // 0x293300: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x293300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_293304:
    // 0x293304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293308:
    // 0x293308: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x293308u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29330c:
    // 0x29330c: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_293310:
    if (ctx->pc == 0x293310u) {
        ctx->pc = 0x293310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29330Cu;
        // 0x293310: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293314u;
        goto label_293314;
    }
    ctx->pc = 0x29330Cu;
    {
        const bool branch_taken_0x29330c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29330c) {
            ctx->pc = 0x293310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29330Cu;
            // 0x293310: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293354u;
            goto label_293354;
        }
    }
    ctx->pc = 0x293314u;
label_293314:
    // 0x293314: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x293314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_293318:
    // 0x293318: 0x56c2000e  bnel        $s6, $v0, . + 4 + (0xE << 2)
label_29331c:
    if (ctx->pc == 0x29331Cu) {
        ctx->pc = 0x29331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293318u;
        // 0x29331c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293320u;
        goto label_293320;
    }
    ctx->pc = 0x293318u;
    {
        const bool branch_taken_0x293318 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x293318) {
            ctx->pc = 0x29331Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293318u;
            // 0x29331c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293354u;
            goto label_293354;
        }
    }
    ctx->pc = 0x293320u;
label_293320:
    // 0x293320: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x293320u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_293324:
    // 0x293324: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x293324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_293328:
    // 0x293328: 0x16c20017  bne         $s6, $v0, . + 4 + (0x17 << 2)
label_29332c:
    if (ctx->pc == 0x29332Cu) {
        ctx->pc = 0x29332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293328u;
        // 0x29332c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293330u;
        goto label_293330;
    }
    ctx->pc = 0x293328u;
    {
        const bool branch_taken_0x293328 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x29332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293328u;
        // 0x29332c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293328) {
            ctx->pc = 0x293388u;
            goto label_293388;
        }
    }
    ctx->pc = 0x293330u;
label_293330:
    // 0x293330: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x293330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_293334:
    // 0x293334: 0x56020014  bnel        $s0, $v0, . + 4 + (0x14 << 2)
label_293338:
    if (ctx->pc == 0x293338u) {
        ctx->pc = 0x293338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293334u;
        // 0x293338: 0x2414000f  addiu       $s4, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29333Cu;
        goto label_29333c;
    }
    ctx->pc = 0x293334u;
    {
        const bool branch_taken_0x293334 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x293334) {
            ctx->pc = 0x293338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293334u;
            // 0x293338: 0x2414000f  addiu       $s4, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293388u;
            goto label_293388;
        }
    }
    ctx->pc = 0x29333Cu;
label_29333c:
    // 0x29333c: 0xc0e4060  jal         func_390180
label_293340:
    if (ctx->pc == 0x293340u) {
        ctx->pc = 0x293340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29333Cu;
        // 0x293340: 0x26640364  addiu       $a0, $s3, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 868));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293344u;
        goto label_293344;
    }
    ctx->pc = 0x29333Cu;
    SET_GPR_U32(ctx, 31, 0x293344u);
    ctx->pc = 0x293340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29333Cu;
    // 0x293340: 0x26640364  addiu       $a0, $s3, 0x364 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 868));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x29333Cu, 0x293344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293344u;
label_293344:
    // 0x293344: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_293348:
    if (ctx->pc == 0x293348u) {
        ctx->pc = 0x293348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293344u;
        // 0x293348: 0x2414000f  addiu       $s4, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29334Cu;
        goto label_29334c;
    }
    ctx->pc = 0x293344u;
    {
        const bool branch_taken_0x293344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293344u;
        // 0x293348: 0x2414000f  addiu       $s4, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293344) {
            ctx->pc = 0x2934B0u;
            goto label_2934b0;
        }
    }
    ctx->pc = 0x29334Cu;
label_29334c:
    // 0x29334c: 0x1000000e  b           . + 4 + (0xE << 2)
label_293350:
    if (ctx->pc == 0x293350u) {
        ctx->pc = 0x293354u;
        goto label_293354;
    }
    ctx->pc = 0x29334Cu;
    {
        const bool branch_taken_0x29334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29334c) {
            ctx->pc = 0x293388u;
            goto label_293388;
        }
    }
    ctx->pc = 0x293354u;
label_293354:
    // 0x293354: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x293354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_293358:
    // 0x293358: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x293358u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_29335c:
    // 0x29335c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_293360:
    // 0x293360: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x293360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_293364:
    // 0x293364: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x293364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_293368:
    // 0x293368: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x293368u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_29336c:
    // 0x29336c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29336cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_293370:
    // 0x293370: 0xc0cdb38  jal         func_336CE0
label_293374:
    if (ctx->pc == 0x293374u) {
        ctx->pc = 0x293374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293370u;
        // 0x293374: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293378u;
        goto label_293378;
    }
    ctx->pc = 0x293370u;
    SET_GPR_U32(ctx, 31, 0x293378u);
    ctx->pc = 0x293374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293370u;
    // 0x293374: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x293370u, 0x293378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293378u;
label_293378:
    // 0x293378: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x293378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29337c:
    // 0x29337c: 0x0  nop
    ctx->pc = 0x29337cu;
    // NOP
label_293380:
    // 0x293380: 0x4503004c  bc1tl       . + 4 + (0x4C << 2)
label_293384:
    if (ctx->pc == 0x293384u) {
        ctx->pc = 0x293384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293380u;
        // 0x293384: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293388u;
        goto label_293388;
    }
    ctx->pc = 0x293380u;
    {
        const bool branch_taken_0x293380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x293380) {
            ctx->pc = 0x293384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293380u;
            // 0x293384: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2934B4u;
            goto label_2934b4;
        }
    }
    ctx->pc = 0x293388u;
label_293388:
    // 0x293388: 0xc0a36c8  jal         func_28DB20
label_29338c:
    if (ctx->pc == 0x29338Cu) {
        ctx->pc = 0x29338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293388u;
        // 0x29338c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293390u;
        goto label_293390;
    }
    ctx->pc = 0x293388u;
    SET_GPR_U32(ctx, 31, 0x293390u);
    ctx->pc = 0x29338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293388u;
    // 0x29338c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x293388u, 0x293390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293390u;
label_293390:
    // 0x293390: 0x8243002e  lb          $v1, 0x2E($s2)
    ctx->pc = 0x293390u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 46)));
label_293394:
    // 0x293394: 0x5c600047  bgtzl       $v1, . + 4 + (0x47 << 2)
label_293398:
    if (ctx->pc == 0x293398u) {
        ctx->pc = 0x293398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293394u;
        // 0x293398: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29339Cu;
        goto label_29339c;
    }
    ctx->pc = 0x293394u;
    {
        const bool branch_taken_0x293394 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x293394) {
            ctx->pc = 0x293398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293394u;
            // 0x293398: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2934B4u;
            goto label_2934b4;
        }
    }
    ctx->pc = 0x29339Cu;
label_29339c:
    // 0x29339c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29339cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2933a0:
    // 0x2933a0: 0xc0a2ab0  jal         func_28AAC0
label_2933a4:
    if (ctx->pc == 0x2933A4u) {
        ctx->pc = 0x2933A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933A0u;
        // 0x2933a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2933A8u;
        goto label_2933a8;
    }
    ctx->pc = 0x2933A0u;
    SET_GPR_U32(ctx, 31, 0x2933A8u);
    ctx->pc = 0x2933A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2933A0u;
    // 0x2933a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2933A0u, 0x2933A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933A8u;
label_2933a8:
    // 0x2933a8: 0xc0a367c  jal         func_28D9F0
label_2933ac:
    if (ctx->pc == 0x2933ACu) {
        ctx->pc = 0x2933ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933A8u;
        // 0x2933ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2933B0u;
        goto label_2933b0;
    }
    ctx->pc = 0x2933A8u;
    SET_GPR_U32(ctx, 31, 0x2933B0u);
    ctx->pc = 0x2933ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2933A8u;
    // 0x2933ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2933A8u, 0x2933B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933B0u;
label_2933b0:
    // 0x2933b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2933b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2933b4:
    // 0x2933b4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_2933b8:
    if (ctx->pc == 0x2933B8u) {
        ctx->pc = 0x2933B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933B4u;
        // 0x2933b8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2933BCu;
        goto label_2933bc;
    }
    ctx->pc = 0x2933B4u;
    {
        const bool branch_taken_0x2933b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2933B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933B4u;
        // 0x2933b8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2933b4) {
            ctx->pc = 0x293408u;
            goto label_293408;
        }
    }
    ctx->pc = 0x2933BCu;
label_2933bc:
    // 0x2933bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2933bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2933c0:
    // 0x2933c0: 0x84500002  lh          $s0, 0x2($v0)
    ctx->pc = 0x2933c0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2933c4:
    // 0x2933c4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2933c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2933c8:
    // 0x2933c8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2933c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2933cc:
    // 0x2933cc: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2933ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2933d0:
    // 0x2933d0: 0xc0884f6  jal         func_2213D8
label_2933d4:
    if (ctx->pc == 0x2933D4u) {
        ctx->pc = 0x2933D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933D0u;
        // 0x2933d4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2933D8u;
        goto label_2933d8;
    }
    ctx->pc = 0x2933D0u;
    SET_GPR_U32(ctx, 31, 0x2933D8u);
    ctx->pc = 0x2933D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2933D0u;
    // 0x2933d4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2933D0u, 0x2933D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933D8u;
label_2933d8:
    // 0x2933d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2933d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2933dc:
    // 0x2933dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2933dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2933e0:
    // 0x2933e0: 0x2444b880  addiu       $a0, $v0, -0x4780
    ctx->pc = 0x2933e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
label_2933e4:
    // 0x2933e4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2933e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2933e8:
    // 0x2933e8: 0xc0cd4fc  jal         func_3353F0
label_2933ec:
    if (ctx->pc == 0x2933ECu) {
        ctx->pc = 0x2933ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933E8u;
        // 0x2933ec: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2933F0u;
        goto label_2933f0;
    }
    ctx->pc = 0x2933E8u;
    SET_GPR_U32(ctx, 31, 0x2933F0u);
    ctx->pc = 0x2933ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2933E8u;
    // 0x2933ec: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2933E8u, 0x2933F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933F0u;
label_2933f0:
    // 0x2933f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2933f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2933f4:
    // 0x2933f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2933f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2933f8:
    // 0x2933f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2933f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2933fc:
    // 0x2933fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2933fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293400:
    // 0x293400: 0xc0bf800  jal         func_2FE000
label_293404:
    if (ctx->pc == 0x293404u) {
        ctx->pc = 0x293404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293400u;
        // 0x293404: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293408u;
        goto label_293408;
    }
    ctx->pc = 0x293400u;
    SET_GPR_U32(ctx, 31, 0x293408u);
    ctx->pc = 0x293404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293400u;
    // 0x293404: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x293400u, 0x293408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293408u;
label_293408:
    // 0x293408: 0xc0a367c  jal         func_28D9F0
label_29340c:
    if (ctx->pc == 0x29340Cu) {
        ctx->pc = 0x29340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293408u;
        // 0x29340c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293410u;
        goto label_293410;
    }
    ctx->pc = 0x293408u;
    SET_GPR_U32(ctx, 31, 0x293410u);
    ctx->pc = 0x29340Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293408u;
    // 0x29340c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x293408u, 0x293410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293410u;
label_293410:
    // 0x293410: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_293414:
    if (ctx->pc == 0x293414u) {
        ctx->pc = 0x293414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293410u;
        // 0x293414: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293418u;
        goto label_293418;
    }
    ctx->pc = 0x293410u;
    {
        const bool branch_taken_0x293410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293410u;
        // 0x293414: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293410) {
            ctx->pc = 0x293430u;
            goto label_293430;
        }
    }
    ctx->pc = 0x293418u;
label_293418:
    // 0x293418: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x293418u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29341c:
    // 0x29341c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29341cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_293420:
    // 0x293420: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x293420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_293424:
    // 0x293424: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293428:
    // 0x293428: 0xc0bec3c  jal         func_2FB0F0
label_29342c:
    if (ctx->pc == 0x29342Cu) {
        ctx->pc = 0x29342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293428u;
        // 0x29342c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293430u;
        goto label_293430;
    }
    ctx->pc = 0x293428u;
    SET_GPR_U32(ctx, 31, 0x293430u);
    ctx->pc = 0x29342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293428u;
    // 0x29342c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x293428u, 0x293430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293430u;
label_293430:
    // 0x293430: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x293430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_293434:
    // 0x293434: 0x1262000d  beq         $s3, $v0, . + 4 + (0xD << 2)
label_293438:
    if (ctx->pc == 0x293438u) {
        ctx->pc = 0x293438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293434u;
        // 0x293438: 0x3ae30004  xori        $v1, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29343Cu;
        goto label_29343c;
    }
    ctx->pc = 0x293434u;
    {
        const bool branch_taken_0x293434 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x293438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293434u;
        // 0x293438: 0x3ae30004  xori        $v1, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x293434) {
            ctx->pc = 0x29346Cu;
            goto label_29346c;
        }
    }
    ctx->pc = 0x29343Cu;
label_29343c:
    // 0x29343c: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x29343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
label_293440:
    // 0x293440: 0x24050257  addiu       $a1, $zero, 0x257
    ctx->pc = 0x293440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
label_293444:
    // 0x293444: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x293444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_293448:
    // 0x293448: 0xc040680  jal         func_101A00
label_29344c:
    if (ctx->pc == 0x29344Cu) {
        ctx->pc = 0x29344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293448u;
        // 0x29344c: 0x43280b  movn        $a1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293450u;
        goto label_293450;
    }
    ctx->pc = 0x293448u;
    SET_GPR_U32(ctx, 31, 0x293450u);
    ctx->pc = 0x29344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293448u;
    // 0x29344c: 0x43280b  movn        $a1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x293448u, 0x293450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293450u;
label_293450:
    // 0x293450: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x293450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_293454:
    // 0x293454: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x293454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_293458:
    // 0x293458: 0xc10b1c6  jal         func_42C718
label_29345c:
    if (ctx->pc == 0x29345Cu) {
        ctx->pc = 0x29345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293458u;
        // 0x29345c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x293460u;
        goto label_293460;
    }
    ctx->pc = 0x293458u;
    SET_GPR_U32(ctx, 31, 0x293460u);
    ctx->pc = 0x29345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293458u;
    // 0x29345c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x293458u, 0x293460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293460u;
label_293460:
    // 0x293460: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x293460u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_293464:
    // 0x293464: 0xc0a4392  jal         func_290E48
label_293468:
    if (ctx->pc == 0x293468u) {
        ctx->pc = 0x293468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293464u;
        // 0x293468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29346Cu;
        goto label_29346c;
    }
    ctx->pc = 0x293464u;
    SET_GPR_U32(ctx, 31, 0x29346Cu);
    ctx->pc = 0x293468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293464u;
    // 0x293468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290E48u, 0x293464u, 0x29346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29346Cu;
label_29346c:
    // 0x29346c: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x29346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_293470:
    // 0x293470: 0x56c20010  bnel        $s6, $v0, . + 4 + (0x10 << 2)
label_293474:
    if (ctx->pc == 0x293474u) {
        ctx->pc = 0x293474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293470u;
        // 0x293474: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293478u;
        goto label_293478;
    }
    ctx->pc = 0x293470u;
    {
        const bool branch_taken_0x293470 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x293470) {
            ctx->pc = 0x293474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293470u;
            // 0x293474: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2934B4u;
            goto label_2934b4;
        }
    }
    ctx->pc = 0x293478u;
label_293478:
    // 0x293478: 0x8e42020c  lw          $v0, 0x20C($s2)
    ctx->pc = 0x293478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_29347c:
    // 0x29347c: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x29347cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_293480:
    // 0x293480: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_293484:
    if (ctx->pc == 0x293484u) {
        ctx->pc = 0x293484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293480u;
        // 0x293484: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293488u;
        goto label_293488;
    }
    ctx->pc = 0x293480u;
    {
        const bool branch_taken_0x293480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x293480) {
            ctx->pc = 0x293484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293480u;
            // 0x293484: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2934B4u;
            goto label_2934b4;
        }
    }
    ctx->pc = 0x293488u;
label_293488:
    // 0x293488: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x293488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_29348c:
    // 0x29348c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x29348cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_293490:
    // 0x293490: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x293490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_293494:
    // 0x293494: 0x40f809  jalr        $v0
label_293498:
    if (ctx->pc == 0x293498u) {
        ctx->pc = 0x293498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293494u;
        // 0x293498: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29349Cu;
        goto label_29349c;
    }
    ctx->pc = 0x293494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29349Cu);
        ctx->pc = 0x293498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293494u;
        // 0x293498: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293494u, 0x29349Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29349Cu;
label_29349c:
    // 0x29349c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x29349cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2934a0:
    // 0x2934a0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2934a4:
    if (ctx->pc == 0x2934A4u) {
        ctx->pc = 0x2934A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934A0u;
        // 0x2934a4: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2934A8u;
        goto label_2934a8;
    }
    ctx->pc = 0x2934A0u;
    {
        const bool branch_taken_0x2934a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2934a0) {
            ctx->pc = 0x2934A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2934A0u;
            // 0x2934a4: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2934B4u;
            goto label_2934b4;
        }
    }
    ctx->pc = 0x2934A8u;
label_2934a8:
    // 0x2934a8: 0xc0c2d48  jal         func_30B520
label_2934ac:
    if (ctx->pc == 0x2934ACu) {
        ctx->pc = 0x2934ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934A8u;
        // 0x2934ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2934B0u;
        goto label_2934b0;
    }
    ctx->pc = 0x2934A8u;
    SET_GPR_U32(ctx, 31, 0x2934B0u);
    ctx->pc = 0x2934ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2934A8u;
    // 0x2934ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B520u, 0x2934A8u, 0x2934B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934B0u;
label_2934b0:
    // 0x2934b0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2934b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2934b4:
    // 0x2934b4: 0x2fc20010  sltiu       $v0, $fp, 0x10
    ctx->pc = 0x2934b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2934b8:
    // 0x2934b8: 0x5440ff3f  bnel        $v0, $zero, . + 4 + (-0xC1 << 2)
label_2934bc:
    if (ctx->pc == 0x2934BCu) {
        ctx->pc = 0x2934BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934B8u;
        // 0x2934bc: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2934C0u;
        goto label_2934c0;
    }
    ctx->pc = 0x2934B8u;
    {
        const bool branch_taken_0x2934b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2934b8) {
            ctx->pc = 0x2934BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2934B8u;
            // 0x2934bc: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2931B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2931b8;
        }
    }
    ctx->pc = 0x2934C0u;
label_2934c0:
    // 0x2934c0: 0x10000036  b           . + 4 + (0x36 << 2)
label_2934c4:
    if (ctx->pc == 0x2934C4u) {
        ctx->pc = 0x2934C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934C0u;
        // 0x2934c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2934C8u;
        goto label_2934c8;
    }
    ctx->pc = 0x2934C0u;
    {
        const bool branch_taken_0x2934c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2934C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934C0u;
        // 0x2934c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2934c0) {
            ctx->pc = 0x29359Cu;
            goto label_29359c;
        }
    }
    ctx->pc = 0x2934C8u;
label_2934c8:
    // 0x2934c8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2934c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2934cc:
    // 0x2934cc: 0xc08a076  jal         func_2281D8
label_2934d0:
    if (ctx->pc == 0x2934D0u) {
        ctx->pc = 0x2934D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934CCu;
        // 0x2934d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2934D4u;
        goto label_2934d4;
    }
    ctx->pc = 0x2934CCu;
    SET_GPR_U32(ctx, 31, 0x2934D4u);
    ctx->pc = 0x2934D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2934CCu;
    // 0x2934d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2281D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2281D8u, 0x2934CCu, 0x2934D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934D4u;
label_2934d4:
    // 0x2934d4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_2934d8:
    if (ctx->pc == 0x2934D8u) {
        ctx->pc = 0x2934D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934D4u;
        // 0x2934d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2934DCu;
        goto label_2934dc;
    }
    ctx->pc = 0x2934D4u;
    {
        const bool branch_taken_0x2934d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2934D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934D4u;
        // 0x2934d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2934d4) {
            ctx->pc = 0x29359Cu;
            goto label_29359c;
        }
    }
    ctx->pc = 0x2934DCu;
label_2934dc:
    // 0x2934dc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2934dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2934e0:
    // 0x2934e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2934e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2934e4:
    // 0x2934e4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2934e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_2934e8:
    // 0x2934e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2934e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2934ec:
    // 0x2934ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2934ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2934f0:
    // 0x2934f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2934f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2934f4:
    // 0x2934f4: 0xc0a4d90  jal         func_293640
label_2934f8:
    if (ctx->pc == 0x2934F8u) {
        ctx->pc = 0x2934F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934F4u;
        // 0x2934f8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2934FCu;
        goto label_2934fc;
    }
    ctx->pc = 0x2934F4u;
    SET_GPR_U32(ctx, 31, 0x2934FCu);
    ctx->pc = 0x2934F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2934F4u;
    // 0x2934f8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x2934F4u, 0x2934FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934FCu;
label_2934fc:
    // 0x2934fc: 0x82a2002c  lb          $v0, 0x2C($s5)
    ctx->pc = 0x2934fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 44)));
label_293500:
    // 0x293500: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_293504:
    if (ctx->pc == 0x293504u) {
        ctx->pc = 0x293504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293500u;
        // 0x293504: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293508u;
        goto label_293508;
    }
    ctx->pc = 0x293500u;
    {
        const bool branch_taken_0x293500 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x293504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293500u;
        // 0x293504: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293500) {
            ctx->pc = 0x293514u;
            goto label_293514;
        }
    }
    ctx->pc = 0x293508u;
label_293508:
    // 0x293508: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x293508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_29350c:
    // 0x29350c: 0x10000002  b           . + 4 + (0x2 << 2)
label_293510:
    if (ctx->pc == 0x293510u) {
        ctx->pc = 0x293510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29350Cu;
        // 0x293510: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293514u;
        goto label_293514;
    }
    ctx->pc = 0x29350Cu;
    {
        const bool branch_taken_0x29350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29350Cu;
        // 0x293510: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29350c) {
            ctx->pc = 0x293518u;
            goto label_293518;
        }
    }
    ctx->pc = 0x293514u;
label_293514:
    // 0x293514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x293514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293518:
    // 0x293518: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x293518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29351c:
    // 0x29351c: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_293520:
    if (ctx->pc == 0x293520u) {
        ctx->pc = 0x293520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29351Cu;
        // 0x293520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293524u;
        goto label_293524;
    }
    ctx->pc = 0x29351Cu;
    {
        const bool branch_taken_0x29351c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x293520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29351Cu;
        // 0x293520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29351c) {
            ctx->pc = 0x29359Cu;
            goto label_29359c;
        }
    }
    ctx->pc = 0x293524u;
label_293524:
    // 0x293524: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x293524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_293528:
    // 0x293528: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x293528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_29352c:
    // 0x29352c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x29352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_293530:
    // 0x293530: 0x40f809  jalr        $v0
label_293534:
    if (ctx->pc == 0x293534u) {
        ctx->pc = 0x293534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293530u;
        // 0x293534: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293538u;
        goto label_293538;
    }
    ctx->pc = 0x293530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x293538u);
        ctx->pc = 0x293534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293530u;
        // 0x293534: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293530u, 0x293538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x293538u;
label_293538:
    // 0x293538: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x293538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_29353c:
    // 0x29353c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_293540:
    if (ctx->pc == 0x293540u) {
        ctx->pc = 0x293540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29353Cu;
        // 0x293540: 0x82a2002c  lb          $v0, 0x2C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293544u;
        goto label_293544;
    }
    ctx->pc = 0x29353Cu;
    {
        const bool branch_taken_0x29353c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29353c) {
            ctx->pc = 0x293540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29353Cu;
            // 0x293540: 0x82a2002c  lb          $v0, 0x2C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293550u;
            goto label_293550;
        }
    }
    ctx->pc = 0x293544u;
label_293544:
    // 0x293544: 0xc0a35f6  jal         func_28D7D8
label_293548:
    if (ctx->pc == 0x293548u) {
        ctx->pc = 0x293548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293544u;
        // 0x293548: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29354Cu;
        goto label_29354c;
    }
    ctx->pc = 0x293544u;
    SET_GPR_U32(ctx, 31, 0x29354Cu);
    ctx->pc = 0x293548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293544u;
    // 0x293548: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x293544u, 0x29354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29354Cu;
label_29354c:
    // 0x29354c: 0x82a2002c  lb          $v0, 0x2C($s5)
    ctx->pc = 0x29354cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 44)));
label_293550:
    // 0x293550: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_293554:
    if (ctx->pc == 0x293554u) {
        ctx->pc = 0x293554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293550u;
        // 0x293554: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293558u;
        goto label_293558;
    }
    ctx->pc = 0x293550u;
    {
        const bool branch_taken_0x293550 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x293554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293550u;
        // 0x293554: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293550) {
            ctx->pc = 0x293564u;
            goto label_293564;
        }
    }
    ctx->pc = 0x293558u;
label_293558:
    // 0x293558: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x293558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_29355c:
    // 0x29355c: 0x10000002  b           . + 4 + (0x2 << 2)
label_293560:
    if (ctx->pc == 0x293560u) {
        ctx->pc = 0x293560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29355Cu;
        // 0x293560: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293564u;
        goto label_293564;
    }
    ctx->pc = 0x29355Cu;
    {
        const bool branch_taken_0x29355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29355Cu;
        // 0x293560: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29355c) {
            ctx->pc = 0x293568u;
            goto label_293568;
        }
    }
    ctx->pc = 0x293564u;
label_293564:
    // 0x293564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293568:
    // 0x293568: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_29356c:
    if (ctx->pc == 0x29356Cu) {
        ctx->pc = 0x29356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293568u;
        // 0x29356c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293570u;
        goto label_293570;
    }
    ctx->pc = 0x293568u;
    {
        const bool branch_taken_0x293568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293568u;
        // 0x29356c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293568) {
            ctx->pc = 0x29359Cu;
            goto label_29359c;
        }
    }
    ctx->pc = 0x293570u;
label_293570:
    // 0x293570: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x293570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_293574:
    // 0x293574: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x293574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_293578:
    // 0x293578: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x293578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_29357c:
    // 0x29357c: 0x40f809  jalr        $v0
label_293580:
    if (ctx->pc == 0x293580u) {
        ctx->pc = 0x293580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29357Cu;
        // 0x293580: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293584u;
        goto label_293584;
    }
    ctx->pc = 0x29357Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x293584u);
        ctx->pc = 0x293580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29357Cu;
        // 0x293580: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29357Cu, 0x293584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x293584u;
label_293584:
    // 0x293584: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x293584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_293588:
    // 0x293588: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_29358c:
    if (ctx->pc == 0x29358Cu) {
        ctx->pc = 0x29358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293588u;
        // 0x29358c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293590u;
        goto label_293590;
    }
    ctx->pc = 0x293588u;
    {
        const bool branch_taken_0x293588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x29358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293588u;
        // 0x29358c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293588) {
            ctx->pc = 0x29359Cu;
            goto label_29359c;
        }
    }
    ctx->pc = 0x293590u;
label_293590:
    // 0x293590: 0xc0a36c8  jal         func_28DB20
label_293594:
    if (ctx->pc == 0x293594u) {
        ctx->pc = 0x293594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293590u;
        // 0x293594: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293598u;
        goto label_293598;
    }
    ctx->pc = 0x293590u;
    SET_GPR_U32(ctx, 31, 0x293598u);
    ctx->pc = 0x293594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293590u;
    // 0x293594: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x293590u, 0x293598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293598u;
label_293598:
    // 0x293598: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x293598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29359c:
    // 0x29359c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x29359cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2935a0:
    // 0x2935a0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2935a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2935a4:
    // 0x2935a4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2935a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2935a8:
    // 0x2935a8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2935a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2935ac:
    // 0x2935ac: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2935acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2935b0:
    // 0x2935b0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2935b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2935b4:
    // 0x2935b4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2935b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2935b8:
    // 0x2935b8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2935b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2935bc:
    // 0x2935bc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2935bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2935c0:
    // 0x2935c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2935c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2935c4:
    // 0x2935c4: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2935c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2935c8:
    // 0x2935c8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2935c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2935cc:
    // 0x2935cc: 0x3e00008  jr          $ra
label_2935d0:
    if (ctx->pc == 0x2935D0u) {
        ctx->pc = 0x2935D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935CCu;
        // 0x2935d0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2935D4u;
        goto label_2935d4;
    }
    ctx->pc = 0x2935CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2935D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935CCu;
        // 0x2935d0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2935CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2935D4u;
label_2935d4:
    // 0x2935d4: 0x0  nop
    ctx->pc = 0x2935d4u;
    // NOP
    ctx->pc = 0x2935d8u;
}
