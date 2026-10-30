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

// Function: sub_00193D80
// Address: 0x193d80 - 0x194488
void sub_00193D80_0x193d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193D80_0x193d80");
#endif

    switch (ctx->pc) {
        case 0x193d80u: goto label_193d80;
        case 0x193d84u: goto label_193d84;
        case 0x193d88u: goto label_193d88;
        case 0x193d8cu: goto label_193d8c;
        case 0x193d90u: goto label_193d90;
        case 0x193d94u: goto label_193d94;
        case 0x193d98u: goto label_193d98;
        case 0x193d9cu: goto label_193d9c;
        case 0x193da0u: goto label_193da0;
        case 0x193da4u: goto label_193da4;
        case 0x193da8u: goto label_193da8;
        case 0x193dacu: goto label_193dac;
        case 0x193db0u: goto label_193db0;
        case 0x193db4u: goto label_193db4;
        case 0x193db8u: goto label_193db8;
        case 0x193dbcu: goto label_193dbc;
        case 0x193dc0u: goto label_193dc0;
        case 0x193dc4u: goto label_193dc4;
        case 0x193dc8u: goto label_193dc8;
        case 0x193dccu: goto label_193dcc;
        case 0x193dd0u: goto label_193dd0;
        case 0x193dd4u: goto label_193dd4;
        case 0x193dd8u: goto label_193dd8;
        case 0x193ddcu: goto label_193ddc;
        case 0x193de0u: goto label_193de0;
        case 0x193de4u: goto label_193de4;
        case 0x193de8u: goto label_193de8;
        case 0x193decu: goto label_193dec;
        case 0x193df0u: goto label_193df0;
        case 0x193df4u: goto label_193df4;
        case 0x193df8u: goto label_193df8;
        case 0x193dfcu: goto label_193dfc;
        case 0x193e00u: goto label_193e00;
        case 0x193e04u: goto label_193e04;
        case 0x193e08u: goto label_193e08;
        case 0x193e0cu: goto label_193e0c;
        case 0x193e10u: goto label_193e10;
        case 0x193e14u: goto label_193e14;
        case 0x193e18u: goto label_193e18;
        case 0x193e1cu: goto label_193e1c;
        case 0x193e20u: goto label_193e20;
        case 0x193e24u: goto label_193e24;
        case 0x193e28u: goto label_193e28;
        case 0x193e2cu: goto label_193e2c;
        case 0x193e30u: goto label_193e30;
        case 0x193e34u: goto label_193e34;
        case 0x193e38u: goto label_193e38;
        case 0x193e3cu: goto label_193e3c;
        case 0x193e40u: goto label_193e40;
        case 0x193e44u: goto label_193e44;
        case 0x193e48u: goto label_193e48;
        case 0x193e4cu: goto label_193e4c;
        case 0x193e50u: goto label_193e50;
        case 0x193e54u: goto label_193e54;
        case 0x193e58u: goto label_193e58;
        case 0x193e5cu: goto label_193e5c;
        case 0x193e60u: goto label_193e60;
        case 0x193e64u: goto label_193e64;
        case 0x193e68u: goto label_193e68;
        case 0x193e6cu: goto label_193e6c;
        case 0x193e70u: goto label_193e70;
        case 0x193e74u: goto label_193e74;
        case 0x193e78u: goto label_193e78;
        case 0x193e7cu: goto label_193e7c;
        case 0x193e80u: goto label_193e80;
        case 0x193e84u: goto label_193e84;
        case 0x193e88u: goto label_193e88;
        case 0x193e8cu: goto label_193e8c;
        case 0x193e90u: goto label_193e90;
        case 0x193e94u: goto label_193e94;
        case 0x193e98u: goto label_193e98;
        case 0x193e9cu: goto label_193e9c;
        case 0x193ea0u: goto label_193ea0;
        case 0x193ea4u: goto label_193ea4;
        case 0x193ea8u: goto label_193ea8;
        case 0x193eacu: goto label_193eac;
        case 0x193eb0u: goto label_193eb0;
        case 0x193eb4u: goto label_193eb4;
        case 0x193eb8u: goto label_193eb8;
        case 0x193ebcu: goto label_193ebc;
        case 0x193ec0u: goto label_193ec0;
        case 0x193ec4u: goto label_193ec4;
        case 0x193ec8u: goto label_193ec8;
        case 0x193eccu: goto label_193ecc;
        case 0x193ed0u: goto label_193ed0;
        case 0x193ed4u: goto label_193ed4;
        case 0x193ed8u: goto label_193ed8;
        case 0x193edcu: goto label_193edc;
        case 0x193ee0u: goto label_193ee0;
        case 0x193ee4u: goto label_193ee4;
        case 0x193ee8u: goto label_193ee8;
        case 0x193eecu: goto label_193eec;
        case 0x193ef0u: goto label_193ef0;
        case 0x193ef4u: goto label_193ef4;
        case 0x193ef8u: goto label_193ef8;
        case 0x193efcu: goto label_193efc;
        case 0x193f00u: goto label_193f00;
        case 0x193f04u: goto label_193f04;
        case 0x193f08u: goto label_193f08;
        case 0x193f0cu: goto label_193f0c;
        case 0x193f10u: goto label_193f10;
        case 0x193f14u: goto label_193f14;
        case 0x193f18u: goto label_193f18;
        case 0x193f1cu: goto label_193f1c;
        case 0x193f20u: goto label_193f20;
        case 0x193f24u: goto label_193f24;
        case 0x193f28u: goto label_193f28;
        case 0x193f2cu: goto label_193f2c;
        case 0x193f30u: goto label_193f30;
        case 0x193f34u: goto label_193f34;
        case 0x193f38u: goto label_193f38;
        case 0x193f3cu: goto label_193f3c;
        case 0x193f40u: goto label_193f40;
        case 0x193f44u: goto label_193f44;
        case 0x193f48u: goto label_193f48;
        case 0x193f4cu: goto label_193f4c;
        case 0x193f50u: goto label_193f50;
        case 0x193f54u: goto label_193f54;
        case 0x193f58u: goto label_193f58;
        case 0x193f5cu: goto label_193f5c;
        case 0x193f60u: goto label_193f60;
        case 0x193f64u: goto label_193f64;
        case 0x193f68u: goto label_193f68;
        case 0x193f6cu: goto label_193f6c;
        case 0x193f70u: goto label_193f70;
        case 0x193f74u: goto label_193f74;
        case 0x193f78u: goto label_193f78;
        case 0x193f7cu: goto label_193f7c;
        case 0x193f80u: goto label_193f80;
        case 0x193f84u: goto label_193f84;
        case 0x193f88u: goto label_193f88;
        case 0x193f8cu: goto label_193f8c;
        case 0x193f90u: goto label_193f90;
        case 0x193f94u: goto label_193f94;
        case 0x193f98u: goto label_193f98;
        case 0x193f9cu: goto label_193f9c;
        case 0x193fa0u: goto label_193fa0;
        case 0x193fa4u: goto label_193fa4;
        case 0x193fa8u: goto label_193fa8;
        case 0x193facu: goto label_193fac;
        case 0x193fb0u: goto label_193fb0;
        case 0x193fb4u: goto label_193fb4;
        case 0x193fb8u: goto label_193fb8;
        case 0x193fbcu: goto label_193fbc;
        case 0x193fc0u: goto label_193fc0;
        case 0x193fc4u: goto label_193fc4;
        case 0x193fc8u: goto label_193fc8;
        case 0x193fccu: goto label_193fcc;
        case 0x193fd0u: goto label_193fd0;
        case 0x193fd4u: goto label_193fd4;
        case 0x193fd8u: goto label_193fd8;
        case 0x193fdcu: goto label_193fdc;
        case 0x193fe0u: goto label_193fe0;
        case 0x193fe4u: goto label_193fe4;
        case 0x193fe8u: goto label_193fe8;
        case 0x193fecu: goto label_193fec;
        case 0x193ff0u: goto label_193ff0;
        case 0x193ff4u: goto label_193ff4;
        case 0x193ff8u: goto label_193ff8;
        case 0x193ffcu: goto label_193ffc;
        case 0x194000u: goto label_194000;
        case 0x194004u: goto label_194004;
        case 0x194008u: goto label_194008;
        case 0x19400cu: goto label_19400c;
        case 0x194010u: goto label_194010;
        case 0x194014u: goto label_194014;
        case 0x194018u: goto label_194018;
        case 0x19401cu: goto label_19401c;
        case 0x194020u: goto label_194020;
        case 0x194024u: goto label_194024;
        case 0x194028u: goto label_194028;
        case 0x19402cu: goto label_19402c;
        case 0x194030u: goto label_194030;
        case 0x194034u: goto label_194034;
        case 0x194038u: goto label_194038;
        case 0x19403cu: goto label_19403c;
        case 0x194040u: goto label_194040;
        case 0x194044u: goto label_194044;
        case 0x194048u: goto label_194048;
        case 0x19404cu: goto label_19404c;
        case 0x194050u: goto label_194050;
        case 0x194054u: goto label_194054;
        case 0x194058u: goto label_194058;
        case 0x19405cu: goto label_19405c;
        case 0x194060u: goto label_194060;
        case 0x194064u: goto label_194064;
        case 0x194068u: goto label_194068;
        case 0x19406cu: goto label_19406c;
        case 0x194070u: goto label_194070;
        case 0x194074u: goto label_194074;
        case 0x194078u: goto label_194078;
        case 0x19407cu: goto label_19407c;
        case 0x194080u: goto label_194080;
        case 0x194084u: goto label_194084;
        case 0x194088u: goto label_194088;
        case 0x19408cu: goto label_19408c;
        case 0x194090u: goto label_194090;
        case 0x194094u: goto label_194094;
        case 0x194098u: goto label_194098;
        case 0x19409cu: goto label_19409c;
        case 0x1940a0u: goto label_1940a0;
        case 0x1940a4u: goto label_1940a4;
        case 0x1940a8u: goto label_1940a8;
        case 0x1940acu: goto label_1940ac;
        case 0x1940b0u: goto label_1940b0;
        case 0x1940b4u: goto label_1940b4;
        case 0x1940b8u: goto label_1940b8;
        case 0x1940bcu: goto label_1940bc;
        case 0x1940c0u: goto label_1940c0;
        case 0x1940c4u: goto label_1940c4;
        case 0x1940c8u: goto label_1940c8;
        case 0x1940ccu: goto label_1940cc;
        case 0x1940d0u: goto label_1940d0;
        case 0x1940d4u: goto label_1940d4;
        case 0x1940d8u: goto label_1940d8;
        case 0x1940dcu: goto label_1940dc;
        case 0x1940e0u: goto label_1940e0;
        case 0x1940e4u: goto label_1940e4;
        case 0x1940e8u: goto label_1940e8;
        case 0x1940ecu: goto label_1940ec;
        case 0x1940f0u: goto label_1940f0;
        case 0x1940f4u: goto label_1940f4;
        case 0x1940f8u: goto label_1940f8;
        case 0x1940fcu: goto label_1940fc;
        case 0x194100u: goto label_194100;
        case 0x194104u: goto label_194104;
        case 0x194108u: goto label_194108;
        case 0x19410cu: goto label_19410c;
        case 0x194110u: goto label_194110;
        case 0x194114u: goto label_194114;
        case 0x194118u: goto label_194118;
        case 0x19411cu: goto label_19411c;
        case 0x194120u: goto label_194120;
        case 0x194124u: goto label_194124;
        case 0x194128u: goto label_194128;
        case 0x19412cu: goto label_19412c;
        case 0x194130u: goto label_194130;
        case 0x194134u: goto label_194134;
        case 0x194138u: goto label_194138;
        case 0x19413cu: goto label_19413c;
        case 0x194140u: goto label_194140;
        case 0x194144u: goto label_194144;
        case 0x194148u: goto label_194148;
        case 0x19414cu: goto label_19414c;
        case 0x194150u: goto label_194150;
        case 0x194154u: goto label_194154;
        case 0x194158u: goto label_194158;
        case 0x19415cu: goto label_19415c;
        case 0x194160u: goto label_194160;
        case 0x194164u: goto label_194164;
        case 0x194168u: goto label_194168;
        case 0x19416cu: goto label_19416c;
        case 0x194170u: goto label_194170;
        case 0x194174u: goto label_194174;
        case 0x194178u: goto label_194178;
        case 0x19417cu: goto label_19417c;
        case 0x194180u: goto label_194180;
        case 0x194184u: goto label_194184;
        case 0x194188u: goto label_194188;
        case 0x19418cu: goto label_19418c;
        case 0x194190u: goto label_194190;
        case 0x194194u: goto label_194194;
        case 0x194198u: goto label_194198;
        case 0x19419cu: goto label_19419c;
        case 0x1941a0u: goto label_1941a0;
        case 0x1941a4u: goto label_1941a4;
        case 0x1941a8u: goto label_1941a8;
        case 0x1941acu: goto label_1941ac;
        case 0x1941b0u: goto label_1941b0;
        case 0x1941b4u: goto label_1941b4;
        case 0x1941b8u: goto label_1941b8;
        case 0x1941bcu: goto label_1941bc;
        case 0x1941c0u: goto label_1941c0;
        case 0x1941c4u: goto label_1941c4;
        case 0x1941c8u: goto label_1941c8;
        case 0x1941ccu: goto label_1941cc;
        case 0x1941d0u: goto label_1941d0;
        case 0x1941d4u: goto label_1941d4;
        case 0x1941d8u: goto label_1941d8;
        case 0x1941dcu: goto label_1941dc;
        case 0x1941e0u: goto label_1941e0;
        case 0x1941e4u: goto label_1941e4;
        case 0x1941e8u: goto label_1941e8;
        case 0x1941ecu: goto label_1941ec;
        case 0x1941f0u: goto label_1941f0;
        case 0x1941f4u: goto label_1941f4;
        case 0x1941f8u: goto label_1941f8;
        case 0x1941fcu: goto label_1941fc;
        case 0x194200u: goto label_194200;
        case 0x194204u: goto label_194204;
        case 0x194208u: goto label_194208;
        case 0x19420cu: goto label_19420c;
        case 0x194210u: goto label_194210;
        case 0x194214u: goto label_194214;
        case 0x194218u: goto label_194218;
        case 0x19421cu: goto label_19421c;
        case 0x194220u: goto label_194220;
        case 0x194224u: goto label_194224;
        case 0x194228u: goto label_194228;
        case 0x19422cu: goto label_19422c;
        case 0x194230u: goto label_194230;
        case 0x194234u: goto label_194234;
        case 0x194238u: goto label_194238;
        case 0x19423cu: goto label_19423c;
        case 0x194240u: goto label_194240;
        case 0x194244u: goto label_194244;
        case 0x194248u: goto label_194248;
        case 0x19424cu: goto label_19424c;
        case 0x194250u: goto label_194250;
        case 0x194254u: goto label_194254;
        case 0x194258u: goto label_194258;
        case 0x19425cu: goto label_19425c;
        case 0x194260u: goto label_194260;
        case 0x194264u: goto label_194264;
        case 0x194268u: goto label_194268;
        case 0x19426cu: goto label_19426c;
        case 0x194270u: goto label_194270;
        case 0x194274u: goto label_194274;
        case 0x194278u: goto label_194278;
        case 0x19427cu: goto label_19427c;
        case 0x194280u: goto label_194280;
        case 0x194284u: goto label_194284;
        case 0x194288u: goto label_194288;
        case 0x19428cu: goto label_19428c;
        case 0x194290u: goto label_194290;
        case 0x194294u: goto label_194294;
        case 0x194298u: goto label_194298;
        case 0x19429cu: goto label_19429c;
        case 0x1942a0u: goto label_1942a0;
        case 0x1942a4u: goto label_1942a4;
        case 0x1942a8u: goto label_1942a8;
        case 0x1942acu: goto label_1942ac;
        case 0x1942b0u: goto label_1942b0;
        case 0x1942b4u: goto label_1942b4;
        case 0x1942b8u: goto label_1942b8;
        case 0x1942bcu: goto label_1942bc;
        case 0x1942c0u: goto label_1942c0;
        case 0x1942c4u: goto label_1942c4;
        case 0x1942c8u: goto label_1942c8;
        case 0x1942ccu: goto label_1942cc;
        case 0x1942d0u: goto label_1942d0;
        case 0x1942d4u: goto label_1942d4;
        case 0x1942d8u: goto label_1942d8;
        case 0x1942dcu: goto label_1942dc;
        case 0x1942e0u: goto label_1942e0;
        case 0x1942e4u: goto label_1942e4;
        case 0x1942e8u: goto label_1942e8;
        case 0x1942ecu: goto label_1942ec;
        case 0x1942f0u: goto label_1942f0;
        case 0x1942f4u: goto label_1942f4;
        case 0x1942f8u: goto label_1942f8;
        case 0x1942fcu: goto label_1942fc;
        case 0x194300u: goto label_194300;
        case 0x194304u: goto label_194304;
        case 0x194308u: goto label_194308;
        case 0x19430cu: goto label_19430c;
        case 0x194310u: goto label_194310;
        case 0x194314u: goto label_194314;
        case 0x194318u: goto label_194318;
        case 0x19431cu: goto label_19431c;
        case 0x194320u: goto label_194320;
        case 0x194324u: goto label_194324;
        case 0x194328u: goto label_194328;
        case 0x19432cu: goto label_19432c;
        case 0x194330u: goto label_194330;
        case 0x194334u: goto label_194334;
        case 0x194338u: goto label_194338;
        case 0x19433cu: goto label_19433c;
        case 0x194340u: goto label_194340;
        case 0x194344u: goto label_194344;
        case 0x194348u: goto label_194348;
        case 0x19434cu: goto label_19434c;
        case 0x194350u: goto label_194350;
        case 0x194354u: goto label_194354;
        case 0x194358u: goto label_194358;
        case 0x19435cu: goto label_19435c;
        case 0x194360u: goto label_194360;
        case 0x194364u: goto label_194364;
        case 0x194368u: goto label_194368;
        case 0x19436cu: goto label_19436c;
        case 0x194370u: goto label_194370;
        case 0x194374u: goto label_194374;
        case 0x194378u: goto label_194378;
        case 0x19437cu: goto label_19437c;
        case 0x194380u: goto label_194380;
        case 0x194384u: goto label_194384;
        case 0x194388u: goto label_194388;
        case 0x19438cu: goto label_19438c;
        case 0x194390u: goto label_194390;
        case 0x194394u: goto label_194394;
        case 0x194398u: goto label_194398;
        case 0x19439cu: goto label_19439c;
        case 0x1943a0u: goto label_1943a0;
        case 0x1943a4u: goto label_1943a4;
        case 0x1943a8u: goto label_1943a8;
        case 0x1943acu: goto label_1943ac;
        case 0x1943b0u: goto label_1943b0;
        case 0x1943b4u: goto label_1943b4;
        case 0x1943b8u: goto label_1943b8;
        case 0x1943bcu: goto label_1943bc;
        case 0x1943c0u: goto label_1943c0;
        case 0x1943c4u: goto label_1943c4;
        case 0x1943c8u: goto label_1943c8;
        case 0x1943ccu: goto label_1943cc;
        case 0x1943d0u: goto label_1943d0;
        case 0x1943d4u: goto label_1943d4;
        case 0x1943d8u: goto label_1943d8;
        case 0x1943dcu: goto label_1943dc;
        case 0x1943e0u: goto label_1943e0;
        case 0x1943e4u: goto label_1943e4;
        case 0x1943e8u: goto label_1943e8;
        case 0x1943ecu: goto label_1943ec;
        case 0x1943f0u: goto label_1943f0;
        case 0x1943f4u: goto label_1943f4;
        case 0x1943f8u: goto label_1943f8;
        case 0x1943fcu: goto label_1943fc;
        case 0x194400u: goto label_194400;
        case 0x194404u: goto label_194404;
        case 0x194408u: goto label_194408;
        case 0x19440cu: goto label_19440c;
        case 0x194410u: goto label_194410;
        case 0x194414u: goto label_194414;
        case 0x194418u: goto label_194418;
        case 0x19441cu: goto label_19441c;
        case 0x194420u: goto label_194420;
        case 0x194424u: goto label_194424;
        case 0x194428u: goto label_194428;
        case 0x19442cu: goto label_19442c;
        case 0x194430u: goto label_194430;
        case 0x194434u: goto label_194434;
        case 0x194438u: goto label_194438;
        case 0x19443cu: goto label_19443c;
        case 0x194440u: goto label_194440;
        case 0x194444u: goto label_194444;
        case 0x194448u: goto label_194448;
        case 0x19444cu: goto label_19444c;
        case 0x194450u: goto label_194450;
        case 0x194454u: goto label_194454;
        case 0x194458u: goto label_194458;
        case 0x19445cu: goto label_19445c;
        case 0x194460u: goto label_194460;
        case 0x194464u: goto label_194464;
        case 0x194468u: goto label_194468;
        case 0x19446cu: goto label_19446c;
        case 0x194470u: goto label_194470;
        case 0x194474u: goto label_194474;
        case 0x194478u: goto label_194478;
        case 0x19447cu: goto label_19447c;
        case 0x194480u: goto label_194480;
        case 0x194484u: goto label_194484;
        default: break;
    }

    ctx->pc = 0x193d80u;

label_193d80:
    // 0x193d80: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x193d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_193d84:
    // 0x193d84: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x193d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_193d88:
    // 0x193d88: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x193d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_193d8c:
    // 0x193d8c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x193d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_193d90:
    // 0x193d90: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x193d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_193d94:
    // 0x193d94: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x193d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_193d98:
    // 0x193d98: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x193d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_193d9c:
    // 0x193d9c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x193d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_193da0:
    // 0x193da0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x193da0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_193da4:
    // 0x193da4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x193da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_193da8:
    // 0x193da8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x193da8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_193dac:
    // 0x193dac: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x193dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_193db0:
    // 0x193db0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x193db0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_193db4:
    // 0x193db4: 0xe7bc0120  swc1        $f28, 0x120($sp)
    ctx->pc = 0x193db4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_193db8:
    // 0x193db8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x193db8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_193dbc:
    // 0x193dbc: 0xe7bb0118  swc1        $f27, 0x118($sp)
    ctx->pc = 0x193dbcu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_193dc0:
    // 0x193dc0: 0xe7ba0110  swc1        $f26, 0x110($sp)
    ctx->pc = 0x193dc0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_193dc4:
    // 0x193dc4: 0xe7b90108  swc1        $f25, 0x108($sp)
    ctx->pc = 0x193dc4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_193dc8:
    // 0x193dc8: 0xe7b80100  swc1        $f24, 0x100($sp)
    ctx->pc = 0x193dc8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_193dcc:
    // 0x193dcc: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x193dccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_193dd0:
    // 0x193dd0: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x193dd0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_193dd4:
    // 0x193dd4: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x193dd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_193dd8:
    // 0x193dd8: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x193dd8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_193ddc:
    // 0x193ddc: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x193ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_193de0:
    // 0x193de0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x193de0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_193de4:
    // 0x193de4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x193de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_193de8:
    // 0x193de8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x193de8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_193dec:
    // 0x193dec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x193decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_193df0:
    // 0x193df0: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x193df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_193df4:
    // 0x193df4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x193df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_193df8:
    // 0x193df8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x193df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_193dfc:
    // 0x193dfc: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x193dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_193e00:
    // 0x193e00: 0x40f809  jalr        $v0
label_193e04:
    if (ctx->pc == 0x193E04u) {
        ctx->pc = 0x193E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E00u;
        // 0x193e04: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193E08u;
        goto label_193e08;
    }
    ctx->pc = 0x193E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193E08u);
        ctx->pc = 0x193E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E00u;
        // 0x193e04: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193E00u, 0x193E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193E08u;
label_193e08:
    // 0x193e08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x193e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_193e0c:
    // 0x193e0c: 0xc65b0008  lwc1        $f27, 0x8($s2)
    ctx->pc = 0x193e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_193e10:
    // 0x193e10: 0x4680dee0  cvt.s.w     $f27, $f27
    ctx->pc = 0x193e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[27], sizeof(tmp)); ctx->f[27] = FPU_CVT_S_W(tmp); }
label_193e14:
    // 0x193e14: 0xc65c000c  lwc1        $f28, 0xC($s2)
    ctx->pc = 0x193e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_193e18:
    // 0x193e18: 0x4680e720  cvt.s.w     $f28, $f28
    ctx->pc = 0x193e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[28], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
label_193e1c:
    // 0x193e1c: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x193e1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_193e20:
    // 0x193e20: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x193e20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_193e24:
    // 0x193e24: 0x8c6500b4  lw          $a1, 0xB4($v1)
    ctx->pc = 0x193e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_193e28:
    // 0x193e28: 0x461ade02  mul.s       $f24, $f27, $f26
    ctx->pc = 0x193e28u;
    ctx->f[24] = FPU_MUL_S(ctx->f[27], ctx->f[26]);
label_193e2c:
    // 0x193e2c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x193e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_193e30:
    // 0x193e30: 0x8eb0000c  lw          $s0, 0xC($s5)
    ctx->pc = 0x193e30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_193e34:
    // 0x193e34: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x193e34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_193e38:
    // 0x193e38: 0xa0f809  jalr        $a1
label_193e3c:
    if (ctx->pc == 0x193E3Cu) {
        ctx->pc = 0x193E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E38u;
        // 0x193e3c: 0x461ae5c2  mul.s       $f23, $f28, $f26 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[28], ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193E40u;
        goto label_193e40;
    }
    ctx->pc = 0x193E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x193E40u);
        ctx->pc = 0x193E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E38u;
        // 0x193e3c: 0x461ae5c2  mul.s       $f23, $f28, $f26 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[28], ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193E38u, 0x193E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193E40u;
label_193e40:
    // 0x193e40: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x193e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_193e44:
    // 0x193e44: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x193e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_193e48:
    // 0x193e48: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x193e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_193e4c:
    // 0x193e4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x193e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_193e50:
    // 0x193e50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x193e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_193e54:
    // 0x193e54: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x193e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_193e58:
    // 0x193e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193e5c:
    // 0x193e5c: 0xc482ce58  lwc1        $f2, -0x31A8($a0)
    ctx->pc = 0x193e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294954584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_193e60:
    // 0x193e60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x193e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193e64:
    // 0x193e64: 0x0  nop
    ctx->pc = 0x193e64u;
    // NOP
label_193e68:
    // 0x193e68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_193e6c:
    // 0x193e6c: 0x0  nop
    ctx->pc = 0x193e6cu;
    // NOP
label_193e70:
    // 0x193e70: 0x0  nop
    ctx->pc = 0x193e70u;
    // NOP
label_193e74:
    // 0x193e74: 0x46001e43  div.s       $f25, $f3, $f0
    ctx->pc = 0x193e74u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
label_193e78:
    // 0x193e78: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_193e7c:
    if (ctx->pc == 0x193E7Cu) {
        ctx->pc = 0x193E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E78u;
        // 0x193e7c: 0x46020880  add.s       $f2, $f1, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193E80u;
        goto label_193e80;
    }
    ctx->pc = 0x193E78u;
    {
        const bool branch_taken_0x193e78 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x193E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E78u;
        // 0x193e7c: 0x46020880  add.s       $f2, $f1, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e78) {
            ctx->pc = 0x193E94u;
            goto label_193e94;
        }
    }
    ctx->pc = 0x193E80u;
label_193e80:
    // 0x193e80: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x193e80u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193e84:
    // 0x193e84: 0x0  nop
    ctx->pc = 0x193e84u;
    // NOP
label_193e88:
    // 0x193e88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193e88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_193e8c:
    // 0x193e8c: 0x10000008  b           . + 4 + (0x8 << 2)
label_193e90:
    if (ctx->pc == 0x193E90u) {
        ctx->pc = 0x193E94u;
        goto label_193e94;
    }
    ctx->pc = 0x193E8Cu;
    {
        const bool branch_taken_0x193e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193e8c) {
            ctx->pc = 0x193EB0u;
            goto label_193eb0;
        }
    }
    ctx->pc = 0x193E94u;
label_193e94:
    // 0x193e94: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x193e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_193e98:
    // 0x193e98: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x193e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_193e9c:
    // 0x193e9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_193ea0:
    // 0x193ea0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x193ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193ea4:
    // 0x193ea4: 0x0  nop
    ctx->pc = 0x193ea4u;
    // NOP
label_193ea8:
    // 0x193ea8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_193eac:
    // 0x193eac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x193eacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_193eb0:
    // 0x193eb0: 0x0  nop
    ctx->pc = 0x193eb0u;
    // NOP
label_193eb4:
    // 0x193eb4: 0x0  nop
    ctx->pc = 0x193eb4u;
    // NOP
label_193eb8:
    // 0x193eb8: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x193eb8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_193ebc:
    // 0x193ebc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x193ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_193ec0:
    // 0x193ec0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x193ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_193ec4:
    // 0x193ec4: 0xc4a1ce58  lwc1        $f1, -0x31A8($a1)
    ctx->pc = 0x193ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294954584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_193ec8:
    // 0x193ec8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193ecc:
    // 0x193ecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193ed0:
    // 0x193ed0: 0x0  nop
    ctx->pc = 0x193ed0u;
    // NOP
label_193ed4:
    // 0x193ed4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193ed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193ed8:
    // 0x193ed8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x193ed8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_193edc:
    // 0x193edc: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_193ee0:
    if (ctx->pc == 0x193EE0u) {
        ctx->pc = 0x193EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193EDCu;
        // 0x193ee0: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193EE4u;
        goto label_193ee4;
    }
    ctx->pc = 0x193EDCu;
    {
        const bool branch_taken_0x193edc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x193EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193EDCu;
        // 0x193ee0: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193edc) {
            ctx->pc = 0x193EF8u;
            goto label_193ef8;
        }
    }
    ctx->pc = 0x193EE4u;
label_193ee4:
    // 0x193ee4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x193ee4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193ee8:
    // 0x193ee8: 0x0  nop
    ctx->pc = 0x193ee8u;
    // NOP
label_193eec:
    // 0x193eec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193eecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193ef0:
    // 0x193ef0: 0x10000008  b           . + 4 + (0x8 << 2)
label_193ef4:
    if (ctx->pc == 0x193EF4u) {
        ctx->pc = 0x193EF8u;
        goto label_193ef8;
    }
    ctx->pc = 0x193EF0u;
    {
        const bool branch_taken_0x193ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193ef0) {
            ctx->pc = 0x193F14u;
            goto label_193f14;
        }
    }
    ctx->pc = 0x193EF8u;
label_193ef8:
    // 0x193ef8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x193ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_193efc:
    // 0x193efc: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x193efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_193f00:
    // 0x193f00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_193f04:
    // 0x193f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193f08:
    // 0x193f08: 0x0  nop
    ctx->pc = 0x193f08u;
    // NOP
label_193f0c:
    // 0x193f0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193f0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193f10:
    // 0x193f10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x193f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_193f14:
    // 0x193f14: 0x0  nop
    ctx->pc = 0x193f14u;
    // NOP
label_193f18:
    // 0x193f18: 0x0  nop
    ctx->pc = 0x193f18u;
    // NOP
label_193f1c:
    // 0x193f1c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x193f1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_193f20:
    // 0x193f20: 0xc4a1ce58  lwc1        $f1, -0x31A8($a1)
    ctx->pc = 0x193f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294954584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_193f24:
    // 0x193f24: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x193f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193f28:
    // 0x193f28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193f2c:
    // 0x193f2c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x193f2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_193f30:
    // 0x193f30: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_193f34:
    if (ctx->pc == 0x193F34u) {
        ctx->pc = 0x193F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F30u;
        // 0x193f34: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F38u;
        goto label_193f38;
    }
    ctx->pc = 0x193F30u;
    {
        const bool branch_taken_0x193f30 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x193F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F30u;
        // 0x193f34: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f30) {
            ctx->pc = 0x193F4Cu;
            goto label_193f4c;
        }
    }
    ctx->pc = 0x193F38u;
label_193f38:
    // 0x193f38: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x193f38u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193f3c:
    // 0x193f3c: 0x0  nop
    ctx->pc = 0x193f3cu;
    // NOP
label_193f40:
    // 0x193f40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193f44:
    // 0x193f44: 0x10000008  b           . + 4 + (0x8 << 2)
label_193f48:
    if (ctx->pc == 0x193F48u) {
        ctx->pc = 0x193F4Cu;
        goto label_193f4c;
    }
    ctx->pc = 0x193F44u;
    {
        const bool branch_taken_0x193f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193f44) {
            ctx->pc = 0x193F68u;
            goto label_193f68;
        }
    }
    ctx->pc = 0x193F4Cu;
label_193f4c:
    // 0x193f4c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x193f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_193f50:
    // 0x193f50: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x193f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_193f54:
    // 0x193f54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_193f58:
    // 0x193f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193f5c:
    // 0x193f5c: 0x0  nop
    ctx->pc = 0x193f5cu;
    // NOP
label_193f60:
    // 0x193f60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193f60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193f64:
    // 0x193f64: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x193f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_193f68:
    // 0x193f68: 0x0  nop
    ctx->pc = 0x193f68u;
    // NOP
label_193f6c:
    // 0x193f6c: 0x0  nop
    ctx->pc = 0x193f6cu;
    // NOP
label_193f70:
    // 0x193f70: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x193f70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_193f74:
    // 0x193f74: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x193f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193f78:
    // 0x193f78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193f7c:
    // 0x193f7c: 0xc4a1ce58  lwc1        $f1, -0x31A8($a1)
    ctx->pc = 0x193f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294954584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_193f80:
    // 0x193f80: 0x46010180  add.s       $f6, $f0, $f1
    ctx->pc = 0x193f80u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_193f84:
    // 0x193f84: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_193f88:
    if (ctx->pc == 0x193F88u) {
        ctx->pc = 0x193F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F84u;
        // 0x193f88: 0xe7a20000  swc1        $f2, 0x0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F8Cu;
        goto label_193f8c;
    }
    ctx->pc = 0x193F84u;
    {
        const bool branch_taken_0x193f84 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x193F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F84u;
        // 0x193f88: 0xe7a20000  swc1        $f2, 0x0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f84) {
            ctx->pc = 0x193FA0u;
            goto label_193fa0;
        }
    }
    ctx->pc = 0x193F8Cu;
label_193f8c:
    // 0x193f8c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x193f8cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193f90:
    // 0x193f90: 0x0  nop
    ctx->pc = 0x193f90u;
    // NOP
label_193f94:
    // 0x193f94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193f98:
    // 0x193f98: 0x10000009  b           . + 4 + (0x9 << 2)
label_193f9c:
    if (ctx->pc == 0x193F9Cu) {
        ctx->pc = 0x193F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F98u;
        // 0x193f9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193FA0u;
        goto label_193fa0;
    }
    ctx->pc = 0x193F98u;
    {
        const bool branch_taken_0x193f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F98u;
        // 0x193f9c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f98) {
            ctx->pc = 0x193FC0u;
            goto label_193fc0;
        }
    }
    ctx->pc = 0x193FA0u;
label_193fa0:
    // 0x193fa0: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x193fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_193fa4:
    // 0x193fa4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x193fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_193fa8:
    // 0x193fa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_193fac:
    // 0x193fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193fb0:
    // 0x193fb0: 0x0  nop
    ctx->pc = 0x193fb0u;
    // NOP
label_193fb4:
    // 0x193fb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193fb8:
    // 0x193fb8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x193fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_193fbc:
    // 0x193fbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x193fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_193fc0:
    // 0x193fc0: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x193fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_193fc4:
    // 0x193fc4: 0xc441ce5c  lwc1        $f1, -0x31A4($v0)
    ctx->pc = 0x193fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_193fc8:
    // 0x193fc8: 0x2463352c  addiu       $v1, $v1, 0x352C
    ctx->pc = 0x193fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13612));
label_193fcc:
    // 0x193fcc: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x193fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_193fd0:
    // 0x193fd0: 0x0  nop
    ctx->pc = 0x193fd0u;
    // NOP
label_193fd4:
    // 0x193fd4: 0x0  nop
    ctx->pc = 0x193fd4u;
    // NOP
label_193fd8:
    // 0x193fd8: 0x46003183  div.s       $f6, $f6, $f0
    ctx->pc = 0x193fd8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
label_193fdc:
    // 0x193fdc: 0x24423530  addiu       $v0, $v0, 0x3530
    ctx->pc = 0x193fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13616));
label_193fe0:
    // 0x193fe0: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x193fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_193fe4:
    // 0x193fe4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x193fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_193fe8:
    // 0x193fe8: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x193fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_193fec:
    // 0x193fec: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x193fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_193ff0:
    // 0x193ff0: 0x8e84043c  lw          $a0, 0x43C($s4)
    ctx->pc = 0x193ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1084)));
label_193ff4:
    // 0x193ff4: 0x4601c080  add.s       $f2, $f24, $f1
    ctx->pc = 0x193ff4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
label_193ff8:
    // 0x193ff8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x193ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193ffc:
    // 0x193ffc: 0x4601b800  add.s       $f0, $f23, $f1
    ctx->pc = 0x193ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_194000:
    // 0x194000: 0x0  nop
    ctx->pc = 0x194000u;
    // NOP
label_194004:
    // 0x194004: 0x0  nop
    ctx->pc = 0x194004u;
    // NOP
label_194008:
    // 0x194008: 0x460408c3  div.s       $f3, $f1, $f4
    ctx->pc = 0x194008u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
label_19400c:
    // 0x19400c: 0x0  nop
    ctx->pc = 0x19400cu;
    // NOP
label_194010:
    // 0x194010: 0x0  nop
    ctx->pc = 0x194010u;
    // NOP
label_194014:
    // 0x194014: 0x46051083  div.s       $f2, $f2, $f5
    ctx->pc = 0x194014u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[5]); }
label_194018:
    // 0x194018: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x194018u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_19401c:
    // 0x19401c: 0x0  nop
    ctx->pc = 0x19401cu;
    // NOP
label_194020:
    // 0x194020: 0x0  nop
    ctx->pc = 0x194020u;
    // NOP
label_194024:
    // 0x194024: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x194024u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_194028:
    // 0x194028: 0x0  nop
    ctx->pc = 0x194028u;
    // NOP
label_19402c:
    // 0x19402c: 0x0  nop
    ctx->pc = 0x19402cu;
    // NOP
label_194030:
    // 0x194030: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x194030u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[5]); }
label_194034:
    // 0x194034: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x194034u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_194038:
    // 0x194038: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x194038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_19403c:
    // 0x19403c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x19403cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_194040:
    // 0x194040: 0xc129056  jal         func_4A4158
label_194044:
    if (ctx->pc == 0x194044u) {
        ctx->pc = 0x194044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194040u;
        // 0x194044: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194048u;
        goto label_194048;
    }
    ctx->pc = 0x194040u;
    SET_GPR_U32(ctx, 31, 0x194048u);
    ctx->pc = 0x194044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194040u;
    // 0x194044: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4158u, 0x194040u, 0x194048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194048u;
label_194048:
    // 0x194048: 0x8e83043c  lw          $v1, 0x43C($s4)
    ctx->pc = 0x194048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1084)));
label_19404c:
    // 0x19404c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19404cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194050:
    // 0x194050: 0xc1209ee  jal         func_4827B8
label_194054:
    if (ctx->pc == 0x194054u) {
        ctx->pc = 0x194054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194050u;
        // 0x194054: 0xae630060  sw          $v1, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194058u;
        goto label_194058;
    }
    ctx->pc = 0x194050u;
    SET_GPR_U32(ctx, 31, 0x194058u);
    ctx->pc = 0x194054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194050u;
    // 0x194054: 0xae630060  sw          $v1, 0x60($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4827B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4827B8u, 0x194050u, 0x194058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194058u;
label_194058:
    // 0x194058: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_19405c:
    if (ctx->pc == 0x19405Cu) {
        ctx->pc = 0x19405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194058u;
        // 0x19405c: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194060u;
        goto label_194060;
    }
    ctx->pc = 0x194058u;
    {
        const bool branch_taken_0x194058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194058u;
        // 0x19405c: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194058) {
            ctx->pc = 0x194150u;
            goto label_194150;
        }
    }
    ctx->pc = 0x194060u;
label_194060:
    // 0x194060: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x194060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_194064:
    // 0x194064: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x194064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_194068:
    // 0x194068: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19406c:
    // 0x19406c: 0x40f809  jalr        $v0
label_194070:
    if (ctx->pc == 0x194070u) {
        ctx->pc = 0x194070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19406Cu;
        // 0x194070: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194074u;
        goto label_194074;
    }
    ctx->pc = 0x19406Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194074u);
        ctx->pc = 0x194070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19406Cu;
        // 0x194070: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19406Cu, 0x194074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194074u;
label_194074:
    // 0x194074: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194078:
    // 0x194078: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x194078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_19407c:
    // 0x19407c: 0x40f809  jalr        $v0
label_194080:
    if (ctx->pc == 0x194080u) {
        ctx->pc = 0x194080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19407Cu;
        // 0x194080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194084u;
        goto label_194084;
    }
    ctx->pc = 0x19407Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194084u);
        ctx->pc = 0x194080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19407Cu;
        // 0x194080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19407Cu, 0x194084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194084u;
label_194084:
    // 0x194084: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194088:
    // 0x194088: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x194088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_19408c:
    // 0x19408c: 0x40f809  jalr        $v0
label_194090:
    if (ctx->pc == 0x194090u) {
        ctx->pc = 0x194090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19408Cu;
        // 0x194090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194094u;
        goto label_194094;
    }
    ctx->pc = 0x19408Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194094u);
        ctx->pc = 0x194090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19408Cu;
        // 0x194090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19408Cu, 0x194094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194094u;
label_194094:
    // 0x194094: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194098:
    // 0x194098: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x194098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19409c:
    // 0x19409c: 0x40f809  jalr        $v0
label_1940a0:
    if (ctx->pc == 0x1940A0u) {
        ctx->pc = 0x1940A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19409Cu;
        // 0x1940a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940A4u;
        goto label_1940a4;
    }
    ctx->pc = 0x19409Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1940A4u);
        ctx->pc = 0x1940A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19409Cu;
        // 0x1940a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19409Cu, 0x1940A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1940A4u;
label_1940a4:
    // 0x1940a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1940a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1940a8:
    // 0x1940a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1940a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1940ac:
    // 0x1940ac: 0x40f809  jalr        $v0
label_1940b0:
    if (ctx->pc == 0x1940B0u) {
        ctx->pc = 0x1940B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940ACu;
        // 0x1940b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940B4u;
        goto label_1940b4;
    }
    ctx->pc = 0x1940ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1940B4u);
        ctx->pc = 0x1940B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940ACu;
        // 0x1940b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1940ACu, 0x1940B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1940B4u;
label_1940b4:
    // 0x1940b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1940b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1940b8:
    // 0x1940b8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1940b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1940bc:
    // 0x1940bc: 0x40f809  jalr        $v0
label_1940c0:
    if (ctx->pc == 0x1940C0u) {
        ctx->pc = 0x1940C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940BCu;
        // 0x1940c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940C4u;
        goto label_1940c4;
    }
    ctx->pc = 0x1940BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1940C4u);
        ctx->pc = 0x1940C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940BCu;
        // 0x1940c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1940BCu, 0x1940C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1940C4u;
label_1940c4:
    // 0x1940c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1940c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1940c8:
    // 0x1940c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1940c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1940cc:
    // 0x1940cc: 0x40f809  jalr        $v0
label_1940d0:
    if (ctx->pc == 0x1940D0u) {
        ctx->pc = 0x1940D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940CCu;
        // 0x1940d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940D4u;
        goto label_1940d4;
    }
    ctx->pc = 0x1940CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1940D4u);
        ctx->pc = 0x1940D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940CCu;
        // 0x1940d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1940CCu, 0x1940D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1940D4u;
label_1940d4:
    // 0x1940d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1940d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1940d8:
    // 0x1940d8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1940d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1940dc:
    // 0x1940dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1940dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1940e0:
    // 0x1940e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1940e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1940e4:
    // 0x1940e4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1940e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1940e8:
    // 0x1940e8: 0x460ee3c2  mul.s       $f15, $f28, $f14
    ctx->pc = 0x1940e8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[28], ctx->f[14]);
label_1940ec:
    // 0x1940ec: 0xc610000c  lwc1        $f16, 0xC($s0)
    ctx->pc = 0x1940ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1940f0:
    // 0x1940f0: 0x460edb82  mul.s       $f14, $f27, $f14
    ctx->pc = 0x1940f0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[27], ctx->f[14]);
label_1940f4:
    // 0x1940f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1940f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1940f8:
    // 0x1940f8: 0x4600cc46  mov.s       $f17, $f25
    ctx->pc = 0x1940f8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[25]);
label_1940fc:
    // 0x1940fc: 0x46006486  mov.s       $f18, $f12
    ctx->pc = 0x1940fcu;
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
label_194100:
    // 0x194100: 0xc064f08  jal         func_193C20
label_194104:
    if (ctx->pc == 0x194104u) {
        ctx->pc = 0x194104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194100u;
        // 0x194104: 0x460064c6  mov.s       $f19, $f12 (Delay Slot)
        ctx->f[19] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194108u;
        goto label_194108;
    }
    ctx->pc = 0x194100u;
    SET_GPR_U32(ctx, 31, 0x194108u);
    ctx->pc = 0x194104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194100u;
    // 0x194104: 0x460064c6  mov.s       $f19, $f12 (Delay Slot)
    ctx->f[19] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C20u, 0x194100u, 0x194108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194108u;
label_194108:
    // 0x194108: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19410c:
    // 0x19410c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x19410cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_194110:
    // 0x194110: 0x40f809  jalr        $v0
label_194114:
    if (ctx->pc == 0x194114u) {
        ctx->pc = 0x194114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194110u;
        // 0x194114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194118u;
        goto label_194118;
    }
    ctx->pc = 0x194110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194118u);
        ctx->pc = 0x194114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194110u;
        // 0x194114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194110u, 0x194118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194118u;
label_194118:
    // 0x194118: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19411c:
    // 0x19411c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x19411cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_194120:
    // 0x194120: 0x40f809  jalr        $v0
label_194124:
    if (ctx->pc == 0x194124u) {
        ctx->pc = 0x194124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194120u;
        // 0x194124: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194128u;
        goto label_194128;
    }
    ctx->pc = 0x194120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194128u);
        ctx->pc = 0x194124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194120u;
        // 0x194124: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194120u, 0x194128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194128u;
label_194128:
    // 0x194128: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19412c:
    // 0x19412c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x19412cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_194130:
    // 0x194130: 0x40f809  jalr        $v0
label_194134:
    if (ctx->pc == 0x194134u) {
        ctx->pc = 0x194134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194130u;
        // 0x194134: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194138u;
        goto label_194138;
    }
    ctx->pc = 0x194130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194138u);
        ctx->pc = 0x194134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194130u;
        // 0x194134: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194130u, 0x194138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194138u;
label_194138:
    // 0x194138: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19413c:
    // 0x19413c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x19413cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_194140:
    // 0x194140: 0x40f809  jalr        $v0
label_194144:
    if (ctx->pc == 0x194144u) {
        ctx->pc = 0x194144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194140u;
        // 0x194144: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194148u;
        goto label_194148;
    }
    ctx->pc = 0x194140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194148u);
        ctx->pc = 0x194144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194140u;
        // 0x194144: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194140u, 0x194148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194148u;
label_194148:
    // 0x194148: 0xc1209f6  jal         func_4827D8
label_19414c:
    if (ctx->pc == 0x19414Cu) {
        ctx->pc = 0x19414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194148u;
        // 0x19414c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194150u;
        goto label_194150;
    }
    ctx->pc = 0x194148u;
    SET_GPR_U32(ctx, 31, 0x194150u);
    ctx->pc = 0x19414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194148u;
    // 0x19414c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4827D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4827D8u, 0x194148u, 0x194150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194150u;
label_194150:
    // 0x194150: 0x12c0004c  beqz        $s6, . + 4 + (0x4C << 2)
label_194154:
    if (ctx->pc == 0x194154u) {
        ctx->pc = 0x194154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194150u;
        // 0x194154: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194158u;
        goto label_194158;
    }
    ctx->pc = 0x194150u;
    {
        const bool branch_taken_0x194150 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x194154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194150u;
        // 0x194154: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194150) {
            ctx->pc = 0x194284u;
            goto label_194284;
        }
    }
    ctx->pc = 0x194158u;
label_194158:
    // 0x194158: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x194158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_19415c:
    // 0x19415c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x19415cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_194160:
    // 0x194160: 0x245ead18  addiu       $fp, $v0, -0x52E8
    ctx->pc = 0x194160u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_194164:
    // 0x194164: 0x3c150071  lui         $s5, 0x71
    ctx->pc = 0x194164u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)113 << 16));
label_194168:
    // 0x194168: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x194168u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_19416c:
    // 0x19416c: 0x0  nop
    ctx->pc = 0x19416cu;
    // NOP
label_194170:
    // 0x194170: 0xc1209ee  jal         func_4827B8
label_194174:
    if (ctx->pc == 0x194174u) {
        ctx->pc = 0x194174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194170u;
        // 0x194174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194178u;
        goto label_194178;
    }
    ctx->pc = 0x194170u;
    SET_GPR_U32(ctx, 31, 0x194178u);
    ctx->pc = 0x194174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194170u;
    // 0x194174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4827B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4827B8u, 0x194170u, 0x194178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194178u;
label_194178:
    // 0x194178: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_19417c:
    if (ctx->pc == 0x19417Cu) {
        ctx->pc = 0x19417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194178u;
        // 0x19417c: 0x26b0ad28  addiu       $s0, $s5, -0x52D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194180u;
        goto label_194180;
    }
    ctx->pc = 0x194178u;
    {
        const bool branch_taken_0x194178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194178u;
        // 0x19417c: 0x26b0ad28  addiu       $s0, $s5, -0x52D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194178) {
            ctx->pc = 0x194274u;
            goto label_194274;
        }
    }
    ctx->pc = 0x194180u;
label_194180:
    // 0x194180: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x194180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_194184:
    // 0x194184: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194188:
    // 0x194188: 0x40f809  jalr        $v0
label_19418c:
    if (ctx->pc == 0x19418Cu) {
        ctx->pc = 0x19418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194188u;
        // 0x19418c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194190u;
        goto label_194190;
    }
    ctx->pc = 0x194188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194190u);
        ctx->pc = 0x19418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194188u;
        // 0x19418c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194188u, 0x194190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194190u;
label_194190:
    // 0x194190: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194194:
    // 0x194194: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x194194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_194198:
    // 0x194198: 0x40f809  jalr        $v0
label_19419c:
    if (ctx->pc == 0x19419Cu) {
        ctx->pc = 0x19419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194198u;
        // 0x19419c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1941A0u;
        goto label_1941a0;
    }
    ctx->pc = 0x194198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1941A0u);
        ctx->pc = 0x19419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194198u;
        // 0x19419c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194198u, 0x1941A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1941A0u;
label_1941a0:
    // 0x1941a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1941a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1941a4:
    // 0x1941a4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1941a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1941a8:
    // 0x1941a8: 0x40f809  jalr        $v0
label_1941ac:
    if (ctx->pc == 0x1941ACu) {
        ctx->pc = 0x1941ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941A8u;
        // 0x1941ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1941B0u;
        goto label_1941b0;
    }
    ctx->pc = 0x1941A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1941B0u);
        ctx->pc = 0x1941ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941A8u;
        // 0x1941ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1941A8u, 0x1941B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1941B0u;
label_1941b0:
    // 0x1941b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1941b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1941b4:
    // 0x1941b4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1941b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1941b8:
    // 0x1941b8: 0x40f809  jalr        $v0
label_1941bc:
    if (ctx->pc == 0x1941BCu) {
        ctx->pc = 0x1941BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941B8u;
        // 0x1941bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1941C0u;
        goto label_1941c0;
    }
    ctx->pc = 0x1941B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1941C0u);
        ctx->pc = 0x1941BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941B8u;
        // 0x1941bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1941B8u, 0x1941C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1941C0u;
label_1941c0:
    // 0x1941c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1941c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1941c4:
    // 0x1941c4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1941c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1941c8:
    // 0x1941c8: 0x40f809  jalr        $v0
label_1941cc:
    if (ctx->pc == 0x1941CCu) {
        ctx->pc = 0x1941CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941C8u;
        // 0x1941cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1941D0u;
        goto label_1941d0;
    }
    ctx->pc = 0x1941C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1941D0u);
        ctx->pc = 0x1941CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941C8u;
        // 0x1941cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1941C8u, 0x1941D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1941D0u;
label_1941d0:
    // 0x1941d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1941d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1941d4:
    // 0x1941d4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1941d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1941d8:
    // 0x1941d8: 0x40f809  jalr        $v0
label_1941dc:
    if (ctx->pc == 0x1941DCu) {
        ctx->pc = 0x1941DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941D8u;
        // 0x1941dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1941E0u;
        goto label_1941e0;
    }
    ctx->pc = 0x1941D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1941E0u);
        ctx->pc = 0x1941DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941D8u;
        // 0x1941dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1941D8u, 0x1941E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1941E0u;
label_1941e0:
    // 0x1941e0: 0x8e85043c  lw          $a1, 0x43C($s4)
    ctx->pc = 0x1941e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1084)));
label_1941e4:
    // 0x1941e4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1941e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1941e8:
    // 0x1941e8: 0x40f809  jalr        $v0
label_1941ec:
    if (ctx->pc == 0x1941ECu) {
        ctx->pc = 0x1941ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941E8u;
        // 0x1941ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1941F0u;
        goto label_1941f0;
    }
    ctx->pc = 0x1941E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1941F0u);
        ctx->pc = 0x1941ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941E8u;
        // 0x1941ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1941E8u, 0x1941F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1941F0u;
label_1941f0:
    // 0x1941f0: 0x4616d482  mul.s       $f18, $f26, $f22
    ctx->pc = 0x1941f0u;
    ctx->f[18] = FPU_MUL_S(ctx->f[26], ctx->f[22]);
label_1941f4:
    // 0x1941f4: 0xc7d0001c  lwc1        $f16, 0x1C($fp)
    ctx->pc = 0x1941f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1941f8:
    // 0x1941f8: 0x4615d4c2  mul.s       $f19, $f26, $f21
    ctx->pc = 0x1941f8u;
    ctx->f[19] = FPU_MUL_S(ctx->f[26], ctx->f[21]);
label_1941fc:
    // 0x1941fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1941fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_194200:
    // 0x194200: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x194200u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_194204:
    // 0x194204: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x194204u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_194208:
    // 0x194208: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x194208u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_19420c:
    // 0x19420c: 0x4600cc46  mov.s       $f17, $f25
    ctx->pc = 0x19420cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[25]);
label_194210:
    // 0x194210: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x194210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_194214:
    // 0x194214: 0xc064f08  jal         func_193C20
label_194218:
    if (ctx->pc == 0x194218u) {
        ctx->pc = 0x194218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194214u;
        // 0x194218: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19421Cu;
        goto label_19421c;
    }
    ctx->pc = 0x194214u;
    SET_GPR_U32(ctx, 31, 0x19421Cu);
    ctx->pc = 0x194218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194214u;
    // 0x194218: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C20u, 0x194214u, 0x19421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19421Cu;
label_19421c:
    // 0x19421c: 0x8e42ce64  lw          $v0, -0x319C($s2)
    ctx->pc = 0x19421cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954596)));
label_194220:
    // 0x194220: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_194224:
    if (ctx->pc == 0x194224u) {
        ctx->pc = 0x194224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194220u;
        // 0x194224: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194228u;
        goto label_194228;
    }
    ctx->pc = 0x194220u;
    {
        const bool branch_taken_0x194220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194220u;
        // 0x194224: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194220) {
            ctx->pc = 0x194230u;
            goto label_194230;
        }
    }
    ctx->pc = 0x194228u;
label_194228:
    // 0x194228: 0x4600b587  neg.s       $f22, $f22
    ctx->pc = 0x194228u;
    ctx->f[22] = FPU_NEG_S(ctx->f[22]);
label_19422c:
    // 0x19422c: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x19422cu;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
label_194230:
    // 0x194230: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x194230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_194234:
    // 0x194234: 0x40f809  jalr        $v0
label_194238:
    if (ctx->pc == 0x194238u) {
        ctx->pc = 0x194238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194234u;
        // 0x194238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19423Cu;
        goto label_19423c;
    }
    ctx->pc = 0x194234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19423Cu);
        ctx->pc = 0x194238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194234u;
        // 0x194238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194234u, 0x19423Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19423Cu;
label_19423c:
    // 0x19423c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194240:
    // 0x194240: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x194240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_194244:
    // 0x194244: 0x40f809  jalr        $v0
label_194248:
    if (ctx->pc == 0x194248u) {
        ctx->pc = 0x194248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194244u;
        // 0x194248: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19424Cu;
        goto label_19424c;
    }
    ctx->pc = 0x194244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19424Cu);
        ctx->pc = 0x194248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194244u;
        // 0x194248: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194244u, 0x19424Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19424Cu;
label_19424c:
    // 0x19424c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194250:
    // 0x194250: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x194250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_194254:
    // 0x194254: 0x40f809  jalr        $v0
label_194258:
    if (ctx->pc == 0x194258u) {
        ctx->pc = 0x194258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194254u;
        // 0x194258: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19425Cu;
        goto label_19425c;
    }
    ctx->pc = 0x194254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19425Cu);
        ctx->pc = 0x194258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194254u;
        // 0x194258: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194254u, 0x19425Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19425Cu;
label_19425c:
    // 0x19425c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194260:
    // 0x194260: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x194260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_194264:
    // 0x194264: 0x40f809  jalr        $v0
label_194268:
    if (ctx->pc == 0x194268u) {
        ctx->pc = 0x194268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194264u;
        // 0x194268: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19426Cu;
        goto label_19426c;
    }
    ctx->pc = 0x194264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19426Cu);
        ctx->pc = 0x194268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194264u;
        // 0x194268: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194264u, 0x19426Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19426Cu;
label_19426c:
    // 0x19426c: 0xc1209f6  jal         func_4827D8
label_194270:
    if (ctx->pc == 0x194270u) {
        ctx->pc = 0x194270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19426Cu;
        // 0x194270: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194274u;
        goto label_194274;
    }
    ctx->pc = 0x19426Cu;
    SET_GPR_U32(ctx, 31, 0x194274u);
    ctx->pc = 0x194270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19426Cu;
    // 0x194270: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4827D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4827D8u, 0x19426Cu, 0x194274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194274u;
label_194274:
    // 0x194274: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_194278:
    // 0x194278: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x194278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_19427c:
    // 0x19427c: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
label_194280:
    if (ctx->pc == 0x194280u) {
        ctx->pc = 0x194284u;
        goto label_194284;
    }
    ctx->pc = 0x19427Cu;
    {
        const bool branch_taken_0x19427c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19427c) {
            ctx->pc = 0x194170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194170;
        }
    }
    ctx->pc = 0x194284u;
label_194284:
    // 0x194284: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x194284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_194288:
    // 0x194288: 0x8c43ce68  lw          $v1, -0x3198($v0)
    ctx->pc = 0x194288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954600)));
label_19428c:
    // 0x19428c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_194290:
    if (ctx->pc == 0x194290u) {
        ctx->pc = 0x194290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19428Cu;
        // 0x194290: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194294u;
        goto label_194294;
    }
    ctx->pc = 0x19428Cu;
    {
        const bool branch_taken_0x19428c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x194290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19428Cu;
        // 0x194290: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19428c) {
            ctx->pc = 0x194300u;
            goto label_194300;
        }
    }
    ctx->pc = 0x194294u;
label_194294:
    // 0x194294: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x194294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_194298:
    // 0x194298: 0xc440ce60  lwc1        $f0, -0x31A0($v0)
    ctx->pc = 0x194298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19429c:
    // 0x19429c: 0x2463352c  addiu       $v1, $v1, 0x352C
    ctx->pc = 0x19429cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13612));
label_1942a0:
    // 0x1942a0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1942a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1942a4:
    // 0x1942a4: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x1942a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1942a8:
    // 0x1942a8: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1942a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_1942ac:
    // 0x1942ac: 0x24423530  addiu       $v0, $v0, 0x3530
    ctx->pc = 0x1942acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13616));
label_1942b0:
    // 0x1942b0: 0x4600c041  sub.s       $f1, $f24, $f0
    ctx->pc = 0x1942b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
label_1942b4:
    // 0x1942b4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1942b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1942b8:
    // 0x1942b8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1942b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1942bc:
    // 0x1942bc: 0x4600b881  sub.s       $f2, $f23, $f0
    ctx->pc = 0x1942bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_1942c0:
    // 0x1942c0: 0x0  nop
    ctx->pc = 0x1942c0u;
    // NOP
label_1942c4:
    // 0x1942c4: 0x0  nop
    ctx->pc = 0x1942c4u;
    // NOP
label_1942c8:
    // 0x1942c8: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x1942c8u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[5]); }
label_1942cc:
    // 0x1942cc: 0x0  nop
    ctx->pc = 0x1942ccu;
    // NOP
label_1942d0:
    // 0x1942d0: 0x0  nop
    ctx->pc = 0x1942d0u;
    // NOP
label_1942d4:
    // 0x1942d4: 0x46030103  div.s       $f4, $f0, $f3
    ctx->pc = 0x1942d4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
label_1942d8:
    // 0x1942d8: 0x0  nop
    ctx->pc = 0x1942d8u;
    // NOP
label_1942dc:
    // 0x1942dc: 0x0  nop
    ctx->pc = 0x1942dcu;
    // NOP
label_1942e0:
    // 0x1942e0: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x1942e0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
label_1942e4:
    // 0x1942e4: 0x0  nop
    ctx->pc = 0x1942e4u;
    // NOP
label_1942e8:
    // 0x1942e8: 0x0  nop
    ctx->pc = 0x1942e8u;
    // NOP
label_1942ec:
    // 0x1942ec: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x1942ecu;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
label_1942f0:
    // 0x1942f0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1942f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1942f4:
    // 0x1942f4: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x1942f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1942f8:
    // 0x1942f8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1942f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1942fc:
    // 0x1942fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1942fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_194300:
    // 0x194300: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x194300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_194304:
    // 0x194304: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x194304u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_194308:
    // 0x194308: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x194308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_19430c:
    // 0x19430c: 0x40f809  jalr        $v0
label_194310:
    if (ctx->pc == 0x194310u) {
        ctx->pc = 0x194310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19430Cu;
        // 0x194310: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194314u;
        goto label_194314;
    }
    ctx->pc = 0x19430Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194314u);
        ctx->pc = 0x194310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19430Cu;
        // 0x194310: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19430Cu, 0x194314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194314u;
label_194314:
    // 0x194314: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_194318:
    if (ctx->pc == 0x194318u) {
        ctx->pc = 0x194318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194314u;
        // 0x194318: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19431Cu;
        goto label_19431c;
    }
    ctx->pc = 0x194314u;
    {
        const bool branch_taken_0x194314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194314u;
        // 0x194318: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194314) {
            ctx->pc = 0x194420u;
            goto label_194420;
        }
    }
    ctx->pc = 0x19431Cu;
label_19431c:
    // 0x19431c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x19431cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_194320:
    // 0x194320: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x194320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_194324:
    // 0x194324: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194328:
    // 0x194328: 0x40f809  jalr        $v0
label_19432c:
    if (ctx->pc == 0x19432Cu) {
        ctx->pc = 0x19432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194328u;
        // 0x19432c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194330u;
        goto label_194330;
    }
    ctx->pc = 0x194328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194330u);
        ctx->pc = 0x19432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194328u;
        // 0x19432c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194328u, 0x194330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194330u;
label_194330:
    // 0x194330: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194334:
    // 0x194334: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x194334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_194338:
    // 0x194338: 0x40f809  jalr        $v0
label_19433c:
    if (ctx->pc == 0x19433Cu) {
        ctx->pc = 0x19433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194338u;
        // 0x19433c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194340u;
        goto label_194340;
    }
    ctx->pc = 0x194338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194340u);
        ctx->pc = 0x19433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194338u;
        // 0x19433c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194338u, 0x194340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194340u;
label_194340:
    // 0x194340: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194344:
    // 0x194344: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x194344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_194348:
    // 0x194348: 0x40f809  jalr        $v0
label_19434c:
    if (ctx->pc == 0x19434Cu) {
        ctx->pc = 0x19434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194348u;
        // 0x19434c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194350u;
        goto label_194350;
    }
    ctx->pc = 0x194348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194350u);
        ctx->pc = 0x19434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194348u;
        // 0x19434c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194348u, 0x194350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194350u;
label_194350:
    // 0x194350: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194354:
    // 0x194354: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x194354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_194358:
    // 0x194358: 0x40f809  jalr        $v0
label_19435c:
    if (ctx->pc == 0x19435Cu) {
        ctx->pc = 0x19435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194358u;
        // 0x19435c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194360u;
        goto label_194360;
    }
    ctx->pc = 0x194358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194360u);
        ctx->pc = 0x19435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194358u;
        // 0x19435c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194358u, 0x194360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194360u;
label_194360:
    // 0x194360: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194364:
    // 0x194364: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x194364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_194368:
    // 0x194368: 0x40f809  jalr        $v0
label_19436c:
    if (ctx->pc == 0x19436Cu) {
        ctx->pc = 0x19436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194368u;
        // 0x19436c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194370u;
        goto label_194370;
    }
    ctx->pc = 0x194368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194370u);
        ctx->pc = 0x19436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194368u;
        // 0x19436c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194368u, 0x194370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194370u;
label_194370:
    // 0x194370: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194374:
    // 0x194374: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x194374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_194378:
    // 0x194378: 0x40f809  jalr        $v0
label_19437c:
    if (ctx->pc == 0x19437Cu) {
        ctx->pc = 0x19437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194378u;
        // 0x19437c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194380u;
        goto label_194380;
    }
    ctx->pc = 0x194378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194380u);
        ctx->pc = 0x19437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194378u;
        // 0x19437c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194378u, 0x194380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194380u;
label_194380:
    // 0x194380: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194384:
    // 0x194384: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x194384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_194388:
    // 0x194388: 0x40f809  jalr        $v0
label_19438c:
    if (ctx->pc == 0x19438Cu) {
        ctx->pc = 0x19438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194388u;
        // 0x19438c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194390u;
        goto label_194390;
    }
    ctx->pc = 0x194388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194390u);
        ctx->pc = 0x19438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194388u;
        // 0x19438c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194388u, 0x194390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194390u;
label_194390:
    // 0x194390: 0x8e85043c  lw          $a1, 0x43C($s4)
    ctx->pc = 0x194390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1084)));
label_194394:
    // 0x194394: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x194394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194398:
    // 0x194398: 0x40f809  jalr        $v0
label_19439c:
    if (ctx->pc == 0x19439Cu) {
        ctx->pc = 0x19439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194398u;
        // 0x19439c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943A0u;
        goto label_1943a0;
    }
    ctx->pc = 0x194398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1943A0u);
        ctx->pc = 0x19439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194398u;
        // 0x19439c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194398u, 0x1943A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1943A0u;
label_1943a0:
    // 0x1943a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1943a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1943a4:
    // 0x1943a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1943a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1943a8:
    // 0x1943a8: 0xc610000c  lwc1        $f16, 0xC($s0)
    ctx->pc = 0x1943a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1943ac:
    // 0x1943ac: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1943acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1943b0:
    // 0x1943b0: 0x4600db86  mov.s       $f14, $f27
    ctx->pc = 0x1943b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[27]);
label_1943b4:
    // 0x1943b4: 0x4600e3c6  mov.s       $f15, $f28
    ctx->pc = 0x1943b4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[28]);
label_1943b8:
    // 0x1943b8: 0x4600cc46  mov.s       $f17, $f25
    ctx->pc = 0x1943b8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[25]);
label_1943bc:
    // 0x1943bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1943bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1943c0:
    // 0x1943c0: 0x46006486  mov.s       $f18, $f12
    ctx->pc = 0x1943c0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
label_1943c4:
    // 0x1943c4: 0xc064f08  jal         func_193C20
label_1943c8:
    if (ctx->pc == 0x1943C8u) {
        ctx->pc = 0x1943C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943C4u;
        // 0x1943c8: 0x460064c6  mov.s       $f19, $f12 (Delay Slot)
        ctx->f[19] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943CCu;
        goto label_1943cc;
    }
    ctx->pc = 0x1943C4u;
    SET_GPR_U32(ctx, 31, 0x1943CCu);
    ctx->pc = 0x1943C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1943C4u;
    // 0x1943c8: 0x460064c6  mov.s       $f19, $f12 (Delay Slot)
    ctx->f[19] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C20u, 0x1943C4u, 0x1943CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1943CCu;
label_1943cc:
    // 0x1943cc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1943ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1943d0:
    // 0x1943d0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1943d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1943d4:
    // 0x1943d4: 0x40f809  jalr        $v0
label_1943d8:
    if (ctx->pc == 0x1943D8u) {
        ctx->pc = 0x1943D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943D4u;
        // 0x1943d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943DCu;
        goto label_1943dc;
    }
    ctx->pc = 0x1943D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1943DCu);
        ctx->pc = 0x1943D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943D4u;
        // 0x1943d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1943D4u, 0x1943DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1943DCu;
label_1943dc:
    // 0x1943dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1943dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1943e0:
    // 0x1943e0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1943e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1943e4:
    // 0x1943e4: 0x40f809  jalr        $v0
label_1943e8:
    if (ctx->pc == 0x1943E8u) {
        ctx->pc = 0x1943E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943E4u;
        // 0x1943e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943ECu;
        goto label_1943ec;
    }
    ctx->pc = 0x1943E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1943ECu);
        ctx->pc = 0x1943E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943E4u;
        // 0x1943e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1943E4u, 0x1943ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1943ECu;
label_1943ec:
    // 0x1943ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1943ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1943f0:
    // 0x1943f0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1943f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1943f4:
    // 0x1943f4: 0x40f809  jalr        $v0
label_1943f8:
    if (ctx->pc == 0x1943F8u) {
        ctx->pc = 0x1943F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943F4u;
        // 0x1943f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943FCu;
        goto label_1943fc;
    }
    ctx->pc = 0x1943F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1943FCu);
        ctx->pc = 0x1943F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943F4u;
        // 0x1943f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1943F4u, 0x1943FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1943FCu;
label_1943fc:
    // 0x1943fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1943fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_194400:
    // 0x194400: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x194400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_194404:
    // 0x194404: 0x40f809  jalr        $v0
label_194408:
    if (ctx->pc == 0x194408u) {
        ctx->pc = 0x194408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194404u;
        // 0x194408: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19440Cu;
        goto label_19440c;
    }
    ctx->pc = 0x194404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19440Cu);
        ctx->pc = 0x194408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194404u;
        // 0x194408: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194404u, 0x19440Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19440Cu;
label_19440c:
    // 0x19440c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x19440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_194410:
    // 0x194410: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x194410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_194414:
    // 0x194414: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x194414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_194418:
    // 0x194418: 0x40f809  jalr        $v0
label_19441c:
    if (ctx->pc == 0x19441Cu) {
        ctx->pc = 0x19441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194418u;
        // 0x19441c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194420u;
        goto label_194420;
    }
    ctx->pc = 0x194418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194420u);
        ctx->pc = 0x19441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194418u;
        // 0x19441c: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194418u, 0x194420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194420u;
label_194420:
    // 0x194420: 0x8e84043c  lw          $a0, 0x43C($s4)
    ctx->pc = 0x194420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1084)));
label_194424:
    // 0x194424: 0xc129056  jal         func_4A4158
label_194428:
    if (ctx->pc == 0x194428u) {
        ctx->pc = 0x194428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194424u;
        // 0x194428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19442Cu;
        goto label_19442c;
    }
    ctx->pc = 0x194424u;
    SET_GPR_U32(ctx, 31, 0x19442Cu);
    ctx->pc = 0x194428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194424u;
    // 0x194428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4158u, 0x194424u, 0x19442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19442Cu;
label_19442c:
    // 0x19442c: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x19442cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_194430:
    // 0x194430: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x194430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_194434:
    // 0x194434: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x194434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_194438:
    // 0x194438: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x194438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_19443c:
    // 0x19443c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x19443cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_194440:
    // 0x194440: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x194440u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_194444:
    // 0x194444: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x194444u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_194448:
    // 0x194448: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x194448u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19444c:
    // 0x19444c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x19444cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_194450:
    // 0x194450: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x194450u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_194454:
    // 0x194454: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x194454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_194458:
    // 0x194458: 0xc7bc0120  lwc1        $f28, 0x120($sp)
    ctx->pc = 0x194458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_19445c:
    // 0x19445c: 0xc7bb0118  lwc1        $f27, 0x118($sp)
    ctx->pc = 0x19445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_194460:
    // 0x194460: 0xc7ba0110  lwc1        $f26, 0x110($sp)
    ctx->pc = 0x194460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_194464:
    // 0x194464: 0xc7b90108  lwc1        $f25, 0x108($sp)
    ctx->pc = 0x194464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_194468:
    // 0x194468: 0xc7b80100  lwc1        $f24, 0x100($sp)
    ctx->pc = 0x194468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_19446c:
    // 0x19446c: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x19446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_194470:
    // 0x194470: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x194470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_194474:
    // 0x194474: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x194474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_194478:
    // 0x194478: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x194478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19447c:
    // 0x19447c: 0x3e00008  jr          $ra
label_194480:
    if (ctx->pc == 0x194480u) {
        ctx->pc = 0x194480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19447Cu;
        // 0x194480: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194484u;
        goto label_194484;
    }
    ctx->pc = 0x19447Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19447Cu;
        // 0x194480: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19447Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194484u;
label_194484:
    // 0x194484: 0x0  nop
    ctx->pc = 0x194484u;
    // NOP
    ctx->pc = 0x194488u;
}
