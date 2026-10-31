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

// Function: sub_00140D68
// Address: 0x140d68 - 0x1421b8
void sub_00140D68_0x140d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140D68_0x140d68");
#endif

    switch (ctx->pc) {
        case 0x140d68u: goto label_140d68;
        case 0x140d6cu: goto label_140d6c;
        case 0x140d70u: goto label_140d70;
        case 0x140d74u: goto label_140d74;
        case 0x140d78u: goto label_140d78;
        case 0x140d7cu: goto label_140d7c;
        case 0x140d80u: goto label_140d80;
        case 0x140d84u: goto label_140d84;
        case 0x140d88u: goto label_140d88;
        case 0x140d8cu: goto label_140d8c;
        case 0x140d90u: goto label_140d90;
        case 0x140d94u: goto label_140d94;
        case 0x140d98u: goto label_140d98;
        case 0x140d9cu: goto label_140d9c;
        case 0x140da0u: goto label_140da0;
        case 0x140da4u: goto label_140da4;
        case 0x140da8u: goto label_140da8;
        case 0x140dacu: goto label_140dac;
        case 0x140db0u: goto label_140db0;
        case 0x140db4u: goto label_140db4;
        case 0x140db8u: goto label_140db8;
        case 0x140dbcu: goto label_140dbc;
        case 0x140dc0u: goto label_140dc0;
        case 0x140dc4u: goto label_140dc4;
        case 0x140dc8u: goto label_140dc8;
        case 0x140dccu: goto label_140dcc;
        case 0x140dd0u: goto label_140dd0;
        case 0x140dd4u: goto label_140dd4;
        case 0x140dd8u: goto label_140dd8;
        case 0x140ddcu: goto label_140ddc;
        case 0x140de0u: goto label_140de0;
        case 0x140de4u: goto label_140de4;
        case 0x140de8u: goto label_140de8;
        case 0x140decu: goto label_140dec;
        case 0x140df0u: goto label_140df0;
        case 0x140df4u: goto label_140df4;
        case 0x140df8u: goto label_140df8;
        case 0x140dfcu: goto label_140dfc;
        case 0x140e00u: goto label_140e00;
        case 0x140e04u: goto label_140e04;
        case 0x140e08u: goto label_140e08;
        case 0x140e0cu: goto label_140e0c;
        case 0x140e10u: goto label_140e10;
        case 0x140e14u: goto label_140e14;
        case 0x140e18u: goto label_140e18;
        case 0x140e1cu: goto label_140e1c;
        case 0x140e20u: goto label_140e20;
        case 0x140e24u: goto label_140e24;
        case 0x140e28u: goto label_140e28;
        case 0x140e2cu: goto label_140e2c;
        case 0x140e30u: goto label_140e30;
        case 0x140e34u: goto label_140e34;
        case 0x140e38u: goto label_140e38;
        case 0x140e3cu: goto label_140e3c;
        case 0x140e40u: goto label_140e40;
        case 0x140e44u: goto label_140e44;
        case 0x140e48u: goto label_140e48;
        case 0x140e4cu: goto label_140e4c;
        case 0x140e50u: goto label_140e50;
        case 0x140e54u: goto label_140e54;
        case 0x140e58u: goto label_140e58;
        case 0x140e5cu: goto label_140e5c;
        case 0x140e60u: goto label_140e60;
        case 0x140e64u: goto label_140e64;
        case 0x140e68u: goto label_140e68;
        case 0x140e6cu: goto label_140e6c;
        case 0x140e70u: goto label_140e70;
        case 0x140e74u: goto label_140e74;
        case 0x140e78u: goto label_140e78;
        case 0x140e7cu: goto label_140e7c;
        case 0x140e80u: goto label_140e80;
        case 0x140e84u: goto label_140e84;
        case 0x140e88u: goto label_140e88;
        case 0x140e8cu: goto label_140e8c;
        case 0x140e90u: goto label_140e90;
        case 0x140e94u: goto label_140e94;
        case 0x140e98u: goto label_140e98;
        case 0x140e9cu: goto label_140e9c;
        case 0x140ea0u: goto label_140ea0;
        case 0x140ea4u: goto label_140ea4;
        case 0x140ea8u: goto label_140ea8;
        case 0x140eacu: goto label_140eac;
        case 0x140eb0u: goto label_140eb0;
        case 0x140eb4u: goto label_140eb4;
        case 0x140eb8u: goto label_140eb8;
        case 0x140ebcu: goto label_140ebc;
        case 0x140ec0u: goto label_140ec0;
        case 0x140ec4u: goto label_140ec4;
        case 0x140ec8u: goto label_140ec8;
        case 0x140eccu: goto label_140ecc;
        case 0x140ed0u: goto label_140ed0;
        case 0x140ed4u: goto label_140ed4;
        case 0x140ed8u: goto label_140ed8;
        case 0x140edcu: goto label_140edc;
        case 0x140ee0u: goto label_140ee0;
        case 0x140ee4u: goto label_140ee4;
        case 0x140ee8u: goto label_140ee8;
        case 0x140eecu: goto label_140eec;
        case 0x140ef0u: goto label_140ef0;
        case 0x140ef4u: goto label_140ef4;
        case 0x140ef8u: goto label_140ef8;
        case 0x140efcu: goto label_140efc;
        case 0x140f00u: goto label_140f00;
        case 0x140f04u: goto label_140f04;
        case 0x140f08u: goto label_140f08;
        case 0x140f0cu: goto label_140f0c;
        case 0x140f10u: goto label_140f10;
        case 0x140f14u: goto label_140f14;
        case 0x140f18u: goto label_140f18;
        case 0x140f1cu: goto label_140f1c;
        case 0x140f20u: goto label_140f20;
        case 0x140f24u: goto label_140f24;
        case 0x140f28u: goto label_140f28;
        case 0x140f2cu: goto label_140f2c;
        case 0x140f30u: goto label_140f30;
        case 0x140f34u: goto label_140f34;
        case 0x140f38u: goto label_140f38;
        case 0x140f3cu: goto label_140f3c;
        case 0x140f40u: goto label_140f40;
        case 0x140f44u: goto label_140f44;
        case 0x140f48u: goto label_140f48;
        case 0x140f4cu: goto label_140f4c;
        case 0x140f50u: goto label_140f50;
        case 0x140f54u: goto label_140f54;
        case 0x140f58u: goto label_140f58;
        case 0x140f5cu: goto label_140f5c;
        case 0x140f60u: goto label_140f60;
        case 0x140f64u: goto label_140f64;
        case 0x140f68u: goto label_140f68;
        case 0x140f6cu: goto label_140f6c;
        case 0x140f70u: goto label_140f70;
        case 0x140f74u: goto label_140f74;
        case 0x140f78u: goto label_140f78;
        case 0x140f7cu: goto label_140f7c;
        case 0x140f80u: goto label_140f80;
        case 0x140f84u: goto label_140f84;
        case 0x140f88u: goto label_140f88;
        case 0x140f8cu: goto label_140f8c;
        case 0x140f90u: goto label_140f90;
        case 0x140f94u: goto label_140f94;
        case 0x140f98u: goto label_140f98;
        case 0x140f9cu: goto label_140f9c;
        case 0x140fa0u: goto label_140fa0;
        case 0x140fa4u: goto label_140fa4;
        case 0x140fa8u: goto label_140fa8;
        case 0x140facu: goto label_140fac;
        case 0x140fb0u: goto label_140fb0;
        case 0x140fb4u: goto label_140fb4;
        case 0x140fb8u: goto label_140fb8;
        case 0x140fbcu: goto label_140fbc;
        case 0x140fc0u: goto label_140fc0;
        case 0x140fc4u: goto label_140fc4;
        case 0x140fc8u: goto label_140fc8;
        case 0x140fccu: goto label_140fcc;
        case 0x140fd0u: goto label_140fd0;
        case 0x140fd4u: goto label_140fd4;
        case 0x140fd8u: goto label_140fd8;
        case 0x140fdcu: goto label_140fdc;
        case 0x140fe0u: goto label_140fe0;
        case 0x140fe4u: goto label_140fe4;
        case 0x140fe8u: goto label_140fe8;
        case 0x140fecu: goto label_140fec;
        case 0x140ff0u: goto label_140ff0;
        case 0x140ff4u: goto label_140ff4;
        case 0x140ff8u: goto label_140ff8;
        case 0x140ffcu: goto label_140ffc;
        case 0x141000u: goto label_141000;
        case 0x141004u: goto label_141004;
        case 0x141008u: goto label_141008;
        case 0x14100cu: goto label_14100c;
        case 0x141010u: goto label_141010;
        case 0x141014u: goto label_141014;
        case 0x141018u: goto label_141018;
        case 0x14101cu: goto label_14101c;
        case 0x141020u: goto label_141020;
        case 0x141024u: goto label_141024;
        case 0x141028u: goto label_141028;
        case 0x14102cu: goto label_14102c;
        case 0x141030u: goto label_141030;
        case 0x141034u: goto label_141034;
        case 0x141038u: goto label_141038;
        case 0x14103cu: goto label_14103c;
        case 0x141040u: goto label_141040;
        case 0x141044u: goto label_141044;
        case 0x141048u: goto label_141048;
        case 0x14104cu: goto label_14104c;
        case 0x141050u: goto label_141050;
        case 0x141054u: goto label_141054;
        case 0x141058u: goto label_141058;
        case 0x14105cu: goto label_14105c;
        case 0x141060u: goto label_141060;
        case 0x141064u: goto label_141064;
        case 0x141068u: goto label_141068;
        case 0x14106cu: goto label_14106c;
        case 0x141070u: goto label_141070;
        case 0x141074u: goto label_141074;
        case 0x141078u: goto label_141078;
        case 0x14107cu: goto label_14107c;
        case 0x141080u: goto label_141080;
        case 0x141084u: goto label_141084;
        case 0x141088u: goto label_141088;
        case 0x14108cu: goto label_14108c;
        case 0x141090u: goto label_141090;
        case 0x141094u: goto label_141094;
        case 0x141098u: goto label_141098;
        case 0x14109cu: goto label_14109c;
        case 0x1410a0u: goto label_1410a0;
        case 0x1410a4u: goto label_1410a4;
        case 0x1410a8u: goto label_1410a8;
        case 0x1410acu: goto label_1410ac;
        case 0x1410b0u: goto label_1410b0;
        case 0x1410b4u: goto label_1410b4;
        case 0x1410b8u: goto label_1410b8;
        case 0x1410bcu: goto label_1410bc;
        case 0x1410c0u: goto label_1410c0;
        case 0x1410c4u: goto label_1410c4;
        case 0x1410c8u: goto label_1410c8;
        case 0x1410ccu: goto label_1410cc;
        case 0x1410d0u: goto label_1410d0;
        case 0x1410d4u: goto label_1410d4;
        case 0x1410d8u: goto label_1410d8;
        case 0x1410dcu: goto label_1410dc;
        case 0x1410e0u: goto label_1410e0;
        case 0x1410e4u: goto label_1410e4;
        case 0x1410e8u: goto label_1410e8;
        case 0x1410ecu: goto label_1410ec;
        case 0x1410f0u: goto label_1410f0;
        case 0x1410f4u: goto label_1410f4;
        case 0x1410f8u: goto label_1410f8;
        case 0x1410fcu: goto label_1410fc;
        case 0x141100u: goto label_141100;
        case 0x141104u: goto label_141104;
        case 0x141108u: goto label_141108;
        case 0x14110cu: goto label_14110c;
        case 0x141110u: goto label_141110;
        case 0x141114u: goto label_141114;
        case 0x141118u: goto label_141118;
        case 0x14111cu: goto label_14111c;
        case 0x141120u: goto label_141120;
        case 0x141124u: goto label_141124;
        case 0x141128u: goto label_141128;
        case 0x14112cu: goto label_14112c;
        case 0x141130u: goto label_141130;
        case 0x141134u: goto label_141134;
        case 0x141138u: goto label_141138;
        case 0x14113cu: goto label_14113c;
        case 0x141140u: goto label_141140;
        case 0x141144u: goto label_141144;
        case 0x141148u: goto label_141148;
        case 0x14114cu: goto label_14114c;
        case 0x141150u: goto label_141150;
        case 0x141154u: goto label_141154;
        case 0x141158u: goto label_141158;
        case 0x14115cu: goto label_14115c;
        case 0x141160u: goto label_141160;
        case 0x141164u: goto label_141164;
        case 0x141168u: goto label_141168;
        case 0x14116cu: goto label_14116c;
        case 0x141170u: goto label_141170;
        case 0x141174u: goto label_141174;
        case 0x141178u: goto label_141178;
        case 0x14117cu: goto label_14117c;
        case 0x141180u: goto label_141180;
        case 0x141184u: goto label_141184;
        case 0x141188u: goto label_141188;
        case 0x14118cu: goto label_14118c;
        case 0x141190u: goto label_141190;
        case 0x141194u: goto label_141194;
        case 0x141198u: goto label_141198;
        case 0x14119cu: goto label_14119c;
        case 0x1411a0u: goto label_1411a0;
        case 0x1411a4u: goto label_1411a4;
        case 0x1411a8u: goto label_1411a8;
        case 0x1411acu: goto label_1411ac;
        case 0x1411b0u: goto label_1411b0;
        case 0x1411b4u: goto label_1411b4;
        case 0x1411b8u: goto label_1411b8;
        case 0x1411bcu: goto label_1411bc;
        case 0x1411c0u: goto label_1411c0;
        case 0x1411c4u: goto label_1411c4;
        case 0x1411c8u: goto label_1411c8;
        case 0x1411ccu: goto label_1411cc;
        case 0x1411d0u: goto label_1411d0;
        case 0x1411d4u: goto label_1411d4;
        case 0x1411d8u: goto label_1411d8;
        case 0x1411dcu: goto label_1411dc;
        case 0x1411e0u: goto label_1411e0;
        case 0x1411e4u: goto label_1411e4;
        case 0x1411e8u: goto label_1411e8;
        case 0x1411ecu: goto label_1411ec;
        case 0x1411f0u: goto label_1411f0;
        case 0x1411f4u: goto label_1411f4;
        case 0x1411f8u: goto label_1411f8;
        case 0x1411fcu: goto label_1411fc;
        case 0x141200u: goto label_141200;
        case 0x141204u: goto label_141204;
        case 0x141208u: goto label_141208;
        case 0x14120cu: goto label_14120c;
        case 0x141210u: goto label_141210;
        case 0x141214u: goto label_141214;
        case 0x141218u: goto label_141218;
        case 0x14121cu: goto label_14121c;
        case 0x141220u: goto label_141220;
        case 0x141224u: goto label_141224;
        case 0x141228u: goto label_141228;
        case 0x14122cu: goto label_14122c;
        case 0x141230u: goto label_141230;
        case 0x141234u: goto label_141234;
        case 0x141238u: goto label_141238;
        case 0x14123cu: goto label_14123c;
        case 0x141240u: goto label_141240;
        case 0x141244u: goto label_141244;
        case 0x141248u: goto label_141248;
        case 0x14124cu: goto label_14124c;
        case 0x141250u: goto label_141250;
        case 0x141254u: goto label_141254;
        case 0x141258u: goto label_141258;
        case 0x14125cu: goto label_14125c;
        case 0x141260u: goto label_141260;
        case 0x141264u: goto label_141264;
        case 0x141268u: goto label_141268;
        case 0x14126cu: goto label_14126c;
        case 0x141270u: goto label_141270;
        case 0x141274u: goto label_141274;
        case 0x141278u: goto label_141278;
        case 0x14127cu: goto label_14127c;
        case 0x141280u: goto label_141280;
        case 0x141284u: goto label_141284;
        case 0x141288u: goto label_141288;
        case 0x14128cu: goto label_14128c;
        case 0x141290u: goto label_141290;
        case 0x141294u: goto label_141294;
        case 0x141298u: goto label_141298;
        case 0x14129cu: goto label_14129c;
        case 0x1412a0u: goto label_1412a0;
        case 0x1412a4u: goto label_1412a4;
        case 0x1412a8u: goto label_1412a8;
        case 0x1412acu: goto label_1412ac;
        case 0x1412b0u: goto label_1412b0;
        case 0x1412b4u: goto label_1412b4;
        case 0x1412b8u: goto label_1412b8;
        case 0x1412bcu: goto label_1412bc;
        case 0x1412c0u: goto label_1412c0;
        case 0x1412c4u: goto label_1412c4;
        case 0x1412c8u: goto label_1412c8;
        case 0x1412ccu: goto label_1412cc;
        case 0x1412d0u: goto label_1412d0;
        case 0x1412d4u: goto label_1412d4;
        case 0x1412d8u: goto label_1412d8;
        case 0x1412dcu: goto label_1412dc;
        case 0x1412e0u: goto label_1412e0;
        case 0x1412e4u: goto label_1412e4;
        case 0x1412e8u: goto label_1412e8;
        case 0x1412ecu: goto label_1412ec;
        case 0x1412f0u: goto label_1412f0;
        case 0x1412f4u: goto label_1412f4;
        case 0x1412f8u: goto label_1412f8;
        case 0x1412fcu: goto label_1412fc;
        case 0x141300u: goto label_141300;
        case 0x141304u: goto label_141304;
        case 0x141308u: goto label_141308;
        case 0x14130cu: goto label_14130c;
        case 0x141310u: goto label_141310;
        case 0x141314u: goto label_141314;
        case 0x141318u: goto label_141318;
        case 0x14131cu: goto label_14131c;
        case 0x141320u: goto label_141320;
        case 0x141324u: goto label_141324;
        case 0x141328u: goto label_141328;
        case 0x14132cu: goto label_14132c;
        case 0x141330u: goto label_141330;
        case 0x141334u: goto label_141334;
        case 0x141338u: goto label_141338;
        case 0x14133cu: goto label_14133c;
        case 0x141340u: goto label_141340;
        case 0x141344u: goto label_141344;
        case 0x141348u: goto label_141348;
        case 0x14134cu: goto label_14134c;
        case 0x141350u: goto label_141350;
        case 0x141354u: goto label_141354;
        case 0x141358u: goto label_141358;
        case 0x14135cu: goto label_14135c;
        case 0x141360u: goto label_141360;
        case 0x141364u: goto label_141364;
        case 0x141368u: goto label_141368;
        case 0x14136cu: goto label_14136c;
        case 0x141370u: goto label_141370;
        case 0x141374u: goto label_141374;
        case 0x141378u: goto label_141378;
        case 0x14137cu: goto label_14137c;
        case 0x141380u: goto label_141380;
        case 0x141384u: goto label_141384;
        case 0x141388u: goto label_141388;
        case 0x14138cu: goto label_14138c;
        case 0x141390u: goto label_141390;
        case 0x141394u: goto label_141394;
        case 0x141398u: goto label_141398;
        case 0x14139cu: goto label_14139c;
        case 0x1413a0u: goto label_1413a0;
        case 0x1413a4u: goto label_1413a4;
        case 0x1413a8u: goto label_1413a8;
        case 0x1413acu: goto label_1413ac;
        case 0x1413b0u: goto label_1413b0;
        case 0x1413b4u: goto label_1413b4;
        case 0x1413b8u: goto label_1413b8;
        case 0x1413bcu: goto label_1413bc;
        case 0x1413c0u: goto label_1413c0;
        case 0x1413c4u: goto label_1413c4;
        case 0x1413c8u: goto label_1413c8;
        case 0x1413ccu: goto label_1413cc;
        case 0x1413d0u: goto label_1413d0;
        case 0x1413d4u: goto label_1413d4;
        case 0x1413d8u: goto label_1413d8;
        case 0x1413dcu: goto label_1413dc;
        case 0x1413e0u: goto label_1413e0;
        case 0x1413e4u: goto label_1413e4;
        case 0x1413e8u: goto label_1413e8;
        case 0x1413ecu: goto label_1413ec;
        case 0x1413f0u: goto label_1413f0;
        case 0x1413f4u: goto label_1413f4;
        case 0x1413f8u: goto label_1413f8;
        case 0x1413fcu: goto label_1413fc;
        case 0x141400u: goto label_141400;
        case 0x141404u: goto label_141404;
        case 0x141408u: goto label_141408;
        case 0x14140cu: goto label_14140c;
        case 0x141410u: goto label_141410;
        case 0x141414u: goto label_141414;
        case 0x141418u: goto label_141418;
        case 0x14141cu: goto label_14141c;
        case 0x141420u: goto label_141420;
        case 0x141424u: goto label_141424;
        case 0x141428u: goto label_141428;
        case 0x14142cu: goto label_14142c;
        case 0x141430u: goto label_141430;
        case 0x141434u: goto label_141434;
        case 0x141438u: goto label_141438;
        case 0x14143cu: goto label_14143c;
        case 0x141440u: goto label_141440;
        case 0x141444u: goto label_141444;
        case 0x141448u: goto label_141448;
        case 0x14144cu: goto label_14144c;
        case 0x141450u: goto label_141450;
        case 0x141454u: goto label_141454;
        case 0x141458u: goto label_141458;
        case 0x14145cu: goto label_14145c;
        case 0x141460u: goto label_141460;
        case 0x141464u: goto label_141464;
        case 0x141468u: goto label_141468;
        case 0x14146cu: goto label_14146c;
        case 0x141470u: goto label_141470;
        case 0x141474u: goto label_141474;
        case 0x141478u: goto label_141478;
        case 0x14147cu: goto label_14147c;
        case 0x141480u: goto label_141480;
        case 0x141484u: goto label_141484;
        case 0x141488u: goto label_141488;
        case 0x14148cu: goto label_14148c;
        case 0x141490u: goto label_141490;
        case 0x141494u: goto label_141494;
        case 0x141498u: goto label_141498;
        case 0x14149cu: goto label_14149c;
        case 0x1414a0u: goto label_1414a0;
        case 0x1414a4u: goto label_1414a4;
        case 0x1414a8u: goto label_1414a8;
        case 0x1414acu: goto label_1414ac;
        case 0x1414b0u: goto label_1414b0;
        case 0x1414b4u: goto label_1414b4;
        case 0x1414b8u: goto label_1414b8;
        case 0x1414bcu: goto label_1414bc;
        case 0x1414c0u: goto label_1414c0;
        case 0x1414c4u: goto label_1414c4;
        case 0x1414c8u: goto label_1414c8;
        case 0x1414ccu: goto label_1414cc;
        case 0x1414d0u: goto label_1414d0;
        case 0x1414d4u: goto label_1414d4;
        case 0x1414d8u: goto label_1414d8;
        case 0x1414dcu: goto label_1414dc;
        case 0x1414e0u: goto label_1414e0;
        case 0x1414e4u: goto label_1414e4;
        case 0x1414e8u: goto label_1414e8;
        case 0x1414ecu: goto label_1414ec;
        case 0x1414f0u: goto label_1414f0;
        case 0x1414f4u: goto label_1414f4;
        case 0x1414f8u: goto label_1414f8;
        case 0x1414fcu: goto label_1414fc;
        case 0x141500u: goto label_141500;
        case 0x141504u: goto label_141504;
        case 0x141508u: goto label_141508;
        case 0x14150cu: goto label_14150c;
        case 0x141510u: goto label_141510;
        case 0x141514u: goto label_141514;
        case 0x141518u: goto label_141518;
        case 0x14151cu: goto label_14151c;
        case 0x141520u: goto label_141520;
        case 0x141524u: goto label_141524;
        case 0x141528u: goto label_141528;
        case 0x14152cu: goto label_14152c;
        case 0x141530u: goto label_141530;
        case 0x141534u: goto label_141534;
        case 0x141538u: goto label_141538;
        case 0x14153cu: goto label_14153c;
        case 0x141540u: goto label_141540;
        case 0x141544u: goto label_141544;
        case 0x141548u: goto label_141548;
        case 0x14154cu: goto label_14154c;
        case 0x141550u: goto label_141550;
        case 0x141554u: goto label_141554;
        case 0x141558u: goto label_141558;
        case 0x14155cu: goto label_14155c;
        case 0x141560u: goto label_141560;
        case 0x141564u: goto label_141564;
        case 0x141568u: goto label_141568;
        case 0x14156cu: goto label_14156c;
        case 0x141570u: goto label_141570;
        case 0x141574u: goto label_141574;
        case 0x141578u: goto label_141578;
        case 0x14157cu: goto label_14157c;
        case 0x141580u: goto label_141580;
        case 0x141584u: goto label_141584;
        case 0x141588u: goto label_141588;
        case 0x14158cu: goto label_14158c;
        case 0x141590u: goto label_141590;
        case 0x141594u: goto label_141594;
        case 0x141598u: goto label_141598;
        case 0x14159cu: goto label_14159c;
        case 0x1415a0u: goto label_1415a0;
        case 0x1415a4u: goto label_1415a4;
        case 0x1415a8u: goto label_1415a8;
        case 0x1415acu: goto label_1415ac;
        case 0x1415b0u: goto label_1415b0;
        case 0x1415b4u: goto label_1415b4;
        case 0x1415b8u: goto label_1415b8;
        case 0x1415bcu: goto label_1415bc;
        case 0x1415c0u: goto label_1415c0;
        case 0x1415c4u: goto label_1415c4;
        case 0x1415c8u: goto label_1415c8;
        case 0x1415ccu: goto label_1415cc;
        case 0x1415d0u: goto label_1415d0;
        case 0x1415d4u: goto label_1415d4;
        case 0x1415d8u: goto label_1415d8;
        case 0x1415dcu: goto label_1415dc;
        case 0x1415e0u: goto label_1415e0;
        case 0x1415e4u: goto label_1415e4;
        case 0x1415e8u: goto label_1415e8;
        case 0x1415ecu: goto label_1415ec;
        case 0x1415f0u: goto label_1415f0;
        case 0x1415f4u: goto label_1415f4;
        case 0x1415f8u: goto label_1415f8;
        case 0x1415fcu: goto label_1415fc;
        case 0x141600u: goto label_141600;
        case 0x141604u: goto label_141604;
        case 0x141608u: goto label_141608;
        case 0x14160cu: goto label_14160c;
        case 0x141610u: goto label_141610;
        case 0x141614u: goto label_141614;
        case 0x141618u: goto label_141618;
        case 0x14161cu: goto label_14161c;
        case 0x141620u: goto label_141620;
        case 0x141624u: goto label_141624;
        case 0x141628u: goto label_141628;
        case 0x14162cu: goto label_14162c;
        case 0x141630u: goto label_141630;
        case 0x141634u: goto label_141634;
        case 0x141638u: goto label_141638;
        case 0x14163cu: goto label_14163c;
        case 0x141640u: goto label_141640;
        case 0x141644u: goto label_141644;
        case 0x141648u: goto label_141648;
        case 0x14164cu: goto label_14164c;
        case 0x141650u: goto label_141650;
        case 0x141654u: goto label_141654;
        case 0x141658u: goto label_141658;
        case 0x14165cu: goto label_14165c;
        case 0x141660u: goto label_141660;
        case 0x141664u: goto label_141664;
        case 0x141668u: goto label_141668;
        case 0x14166cu: goto label_14166c;
        case 0x141670u: goto label_141670;
        case 0x141674u: goto label_141674;
        case 0x141678u: goto label_141678;
        case 0x14167cu: goto label_14167c;
        case 0x141680u: goto label_141680;
        case 0x141684u: goto label_141684;
        case 0x141688u: goto label_141688;
        case 0x14168cu: goto label_14168c;
        case 0x141690u: goto label_141690;
        case 0x141694u: goto label_141694;
        case 0x141698u: goto label_141698;
        case 0x14169cu: goto label_14169c;
        case 0x1416a0u: goto label_1416a0;
        case 0x1416a4u: goto label_1416a4;
        case 0x1416a8u: goto label_1416a8;
        case 0x1416acu: goto label_1416ac;
        case 0x1416b0u: goto label_1416b0;
        case 0x1416b4u: goto label_1416b4;
        case 0x1416b8u: goto label_1416b8;
        case 0x1416bcu: goto label_1416bc;
        case 0x1416c0u: goto label_1416c0;
        case 0x1416c4u: goto label_1416c4;
        case 0x1416c8u: goto label_1416c8;
        case 0x1416ccu: goto label_1416cc;
        case 0x1416d0u: goto label_1416d0;
        case 0x1416d4u: goto label_1416d4;
        case 0x1416d8u: goto label_1416d8;
        case 0x1416dcu: goto label_1416dc;
        case 0x1416e0u: goto label_1416e0;
        case 0x1416e4u: goto label_1416e4;
        case 0x1416e8u: goto label_1416e8;
        case 0x1416ecu: goto label_1416ec;
        case 0x1416f0u: goto label_1416f0;
        case 0x1416f4u: goto label_1416f4;
        case 0x1416f8u: goto label_1416f8;
        case 0x1416fcu: goto label_1416fc;
        case 0x141700u: goto label_141700;
        case 0x141704u: goto label_141704;
        case 0x141708u: goto label_141708;
        case 0x14170cu: goto label_14170c;
        case 0x141710u: goto label_141710;
        case 0x141714u: goto label_141714;
        case 0x141718u: goto label_141718;
        case 0x14171cu: goto label_14171c;
        case 0x141720u: goto label_141720;
        case 0x141724u: goto label_141724;
        case 0x141728u: goto label_141728;
        case 0x14172cu: goto label_14172c;
        case 0x141730u: goto label_141730;
        case 0x141734u: goto label_141734;
        case 0x141738u: goto label_141738;
        case 0x14173cu: goto label_14173c;
        case 0x141740u: goto label_141740;
        case 0x141744u: goto label_141744;
        case 0x141748u: goto label_141748;
        case 0x14174cu: goto label_14174c;
        case 0x141750u: goto label_141750;
        case 0x141754u: goto label_141754;
        case 0x141758u: goto label_141758;
        case 0x14175cu: goto label_14175c;
        case 0x141760u: goto label_141760;
        case 0x141764u: goto label_141764;
        case 0x141768u: goto label_141768;
        case 0x14176cu: goto label_14176c;
        case 0x141770u: goto label_141770;
        case 0x141774u: goto label_141774;
        case 0x141778u: goto label_141778;
        case 0x14177cu: goto label_14177c;
        case 0x141780u: goto label_141780;
        case 0x141784u: goto label_141784;
        case 0x141788u: goto label_141788;
        case 0x14178cu: goto label_14178c;
        case 0x141790u: goto label_141790;
        case 0x141794u: goto label_141794;
        case 0x141798u: goto label_141798;
        case 0x14179cu: goto label_14179c;
        case 0x1417a0u: goto label_1417a0;
        case 0x1417a4u: goto label_1417a4;
        case 0x1417a8u: goto label_1417a8;
        case 0x1417acu: goto label_1417ac;
        case 0x1417b0u: goto label_1417b0;
        case 0x1417b4u: goto label_1417b4;
        case 0x1417b8u: goto label_1417b8;
        case 0x1417bcu: goto label_1417bc;
        case 0x1417c0u: goto label_1417c0;
        case 0x1417c4u: goto label_1417c4;
        case 0x1417c8u: goto label_1417c8;
        case 0x1417ccu: goto label_1417cc;
        case 0x1417d0u: goto label_1417d0;
        case 0x1417d4u: goto label_1417d4;
        case 0x1417d8u: goto label_1417d8;
        case 0x1417dcu: goto label_1417dc;
        case 0x1417e0u: goto label_1417e0;
        case 0x1417e4u: goto label_1417e4;
        case 0x1417e8u: goto label_1417e8;
        case 0x1417ecu: goto label_1417ec;
        case 0x1417f0u: goto label_1417f0;
        case 0x1417f4u: goto label_1417f4;
        case 0x1417f8u: goto label_1417f8;
        case 0x1417fcu: goto label_1417fc;
        case 0x141800u: goto label_141800;
        case 0x141804u: goto label_141804;
        case 0x141808u: goto label_141808;
        case 0x14180cu: goto label_14180c;
        case 0x141810u: goto label_141810;
        case 0x141814u: goto label_141814;
        case 0x141818u: goto label_141818;
        case 0x14181cu: goto label_14181c;
        case 0x141820u: goto label_141820;
        case 0x141824u: goto label_141824;
        case 0x141828u: goto label_141828;
        case 0x14182cu: goto label_14182c;
        case 0x141830u: goto label_141830;
        case 0x141834u: goto label_141834;
        case 0x141838u: goto label_141838;
        case 0x14183cu: goto label_14183c;
        case 0x141840u: goto label_141840;
        case 0x141844u: goto label_141844;
        case 0x141848u: goto label_141848;
        case 0x14184cu: goto label_14184c;
        case 0x141850u: goto label_141850;
        case 0x141854u: goto label_141854;
        case 0x141858u: goto label_141858;
        case 0x14185cu: goto label_14185c;
        case 0x141860u: goto label_141860;
        case 0x141864u: goto label_141864;
        case 0x141868u: goto label_141868;
        case 0x14186cu: goto label_14186c;
        case 0x141870u: goto label_141870;
        case 0x141874u: goto label_141874;
        case 0x141878u: goto label_141878;
        case 0x14187cu: goto label_14187c;
        case 0x141880u: goto label_141880;
        case 0x141884u: goto label_141884;
        case 0x141888u: goto label_141888;
        case 0x14188cu: goto label_14188c;
        case 0x141890u: goto label_141890;
        case 0x141894u: goto label_141894;
        case 0x141898u: goto label_141898;
        case 0x14189cu: goto label_14189c;
        case 0x1418a0u: goto label_1418a0;
        case 0x1418a4u: goto label_1418a4;
        case 0x1418a8u: goto label_1418a8;
        case 0x1418acu: goto label_1418ac;
        case 0x1418b0u: goto label_1418b0;
        case 0x1418b4u: goto label_1418b4;
        case 0x1418b8u: goto label_1418b8;
        case 0x1418bcu: goto label_1418bc;
        case 0x1418c0u: goto label_1418c0;
        case 0x1418c4u: goto label_1418c4;
        case 0x1418c8u: goto label_1418c8;
        case 0x1418ccu: goto label_1418cc;
        case 0x1418d0u: goto label_1418d0;
        case 0x1418d4u: goto label_1418d4;
        case 0x1418d8u: goto label_1418d8;
        case 0x1418dcu: goto label_1418dc;
        case 0x1418e0u: goto label_1418e0;
        case 0x1418e4u: goto label_1418e4;
        case 0x1418e8u: goto label_1418e8;
        case 0x1418ecu: goto label_1418ec;
        case 0x1418f0u: goto label_1418f0;
        case 0x1418f4u: goto label_1418f4;
        case 0x1418f8u: goto label_1418f8;
        case 0x1418fcu: goto label_1418fc;
        case 0x141900u: goto label_141900;
        case 0x141904u: goto label_141904;
        case 0x141908u: goto label_141908;
        case 0x14190cu: goto label_14190c;
        case 0x141910u: goto label_141910;
        case 0x141914u: goto label_141914;
        case 0x141918u: goto label_141918;
        case 0x14191cu: goto label_14191c;
        case 0x141920u: goto label_141920;
        case 0x141924u: goto label_141924;
        case 0x141928u: goto label_141928;
        case 0x14192cu: goto label_14192c;
        case 0x141930u: goto label_141930;
        case 0x141934u: goto label_141934;
        case 0x141938u: goto label_141938;
        case 0x14193cu: goto label_14193c;
        case 0x141940u: goto label_141940;
        case 0x141944u: goto label_141944;
        case 0x141948u: goto label_141948;
        case 0x14194cu: goto label_14194c;
        case 0x141950u: goto label_141950;
        case 0x141954u: goto label_141954;
        case 0x141958u: goto label_141958;
        case 0x14195cu: goto label_14195c;
        case 0x141960u: goto label_141960;
        case 0x141964u: goto label_141964;
        case 0x141968u: goto label_141968;
        case 0x14196cu: goto label_14196c;
        case 0x141970u: goto label_141970;
        case 0x141974u: goto label_141974;
        case 0x141978u: goto label_141978;
        case 0x14197cu: goto label_14197c;
        case 0x141980u: goto label_141980;
        case 0x141984u: goto label_141984;
        case 0x141988u: goto label_141988;
        case 0x14198cu: goto label_14198c;
        case 0x141990u: goto label_141990;
        case 0x141994u: goto label_141994;
        case 0x141998u: goto label_141998;
        case 0x14199cu: goto label_14199c;
        case 0x1419a0u: goto label_1419a0;
        case 0x1419a4u: goto label_1419a4;
        case 0x1419a8u: goto label_1419a8;
        case 0x1419acu: goto label_1419ac;
        case 0x1419b0u: goto label_1419b0;
        case 0x1419b4u: goto label_1419b4;
        case 0x1419b8u: goto label_1419b8;
        case 0x1419bcu: goto label_1419bc;
        case 0x1419c0u: goto label_1419c0;
        case 0x1419c4u: goto label_1419c4;
        case 0x1419c8u: goto label_1419c8;
        case 0x1419ccu: goto label_1419cc;
        case 0x1419d0u: goto label_1419d0;
        case 0x1419d4u: goto label_1419d4;
        case 0x1419d8u: goto label_1419d8;
        case 0x1419dcu: goto label_1419dc;
        case 0x1419e0u: goto label_1419e0;
        case 0x1419e4u: goto label_1419e4;
        case 0x1419e8u: goto label_1419e8;
        case 0x1419ecu: goto label_1419ec;
        case 0x1419f0u: goto label_1419f0;
        case 0x1419f4u: goto label_1419f4;
        case 0x1419f8u: goto label_1419f8;
        case 0x1419fcu: goto label_1419fc;
        case 0x141a00u: goto label_141a00;
        case 0x141a04u: goto label_141a04;
        case 0x141a08u: goto label_141a08;
        case 0x141a0cu: goto label_141a0c;
        case 0x141a10u: goto label_141a10;
        case 0x141a14u: goto label_141a14;
        case 0x141a18u: goto label_141a18;
        case 0x141a1cu: goto label_141a1c;
        case 0x141a20u: goto label_141a20;
        case 0x141a24u: goto label_141a24;
        case 0x141a28u: goto label_141a28;
        case 0x141a2cu: goto label_141a2c;
        case 0x141a30u: goto label_141a30;
        case 0x141a34u: goto label_141a34;
        case 0x141a38u: goto label_141a38;
        case 0x141a3cu: goto label_141a3c;
        case 0x141a40u: goto label_141a40;
        case 0x141a44u: goto label_141a44;
        case 0x141a48u: goto label_141a48;
        case 0x141a4cu: goto label_141a4c;
        case 0x141a50u: goto label_141a50;
        case 0x141a54u: goto label_141a54;
        case 0x141a58u: goto label_141a58;
        case 0x141a5cu: goto label_141a5c;
        case 0x141a60u: goto label_141a60;
        case 0x141a64u: goto label_141a64;
        case 0x141a68u: goto label_141a68;
        case 0x141a6cu: goto label_141a6c;
        case 0x141a70u: goto label_141a70;
        case 0x141a74u: goto label_141a74;
        case 0x141a78u: goto label_141a78;
        case 0x141a7cu: goto label_141a7c;
        case 0x141a80u: goto label_141a80;
        case 0x141a84u: goto label_141a84;
        case 0x141a88u: goto label_141a88;
        case 0x141a8cu: goto label_141a8c;
        case 0x141a90u: goto label_141a90;
        case 0x141a94u: goto label_141a94;
        case 0x141a98u: goto label_141a98;
        case 0x141a9cu: goto label_141a9c;
        case 0x141aa0u: goto label_141aa0;
        case 0x141aa4u: goto label_141aa4;
        case 0x141aa8u: goto label_141aa8;
        case 0x141aacu: goto label_141aac;
        case 0x141ab0u: goto label_141ab0;
        case 0x141ab4u: goto label_141ab4;
        case 0x141ab8u: goto label_141ab8;
        case 0x141abcu: goto label_141abc;
        case 0x141ac0u: goto label_141ac0;
        case 0x141ac4u: goto label_141ac4;
        case 0x141ac8u: goto label_141ac8;
        case 0x141accu: goto label_141acc;
        case 0x141ad0u: goto label_141ad0;
        case 0x141ad4u: goto label_141ad4;
        case 0x141ad8u: goto label_141ad8;
        case 0x141adcu: goto label_141adc;
        case 0x141ae0u: goto label_141ae0;
        case 0x141ae4u: goto label_141ae4;
        case 0x141ae8u: goto label_141ae8;
        case 0x141aecu: goto label_141aec;
        case 0x141af0u: goto label_141af0;
        case 0x141af4u: goto label_141af4;
        case 0x141af8u: goto label_141af8;
        case 0x141afcu: goto label_141afc;
        case 0x141b00u: goto label_141b00;
        case 0x141b04u: goto label_141b04;
        case 0x141b08u: goto label_141b08;
        case 0x141b0cu: goto label_141b0c;
        case 0x141b10u: goto label_141b10;
        case 0x141b14u: goto label_141b14;
        case 0x141b18u: goto label_141b18;
        case 0x141b1cu: goto label_141b1c;
        case 0x141b20u: goto label_141b20;
        case 0x141b24u: goto label_141b24;
        case 0x141b28u: goto label_141b28;
        case 0x141b2cu: goto label_141b2c;
        case 0x141b30u: goto label_141b30;
        case 0x141b34u: goto label_141b34;
        case 0x141b38u: goto label_141b38;
        case 0x141b3cu: goto label_141b3c;
        case 0x141b40u: goto label_141b40;
        case 0x141b44u: goto label_141b44;
        case 0x141b48u: goto label_141b48;
        case 0x141b4cu: goto label_141b4c;
        case 0x141b50u: goto label_141b50;
        case 0x141b54u: goto label_141b54;
        case 0x141b58u: goto label_141b58;
        case 0x141b5cu: goto label_141b5c;
        case 0x141b60u: goto label_141b60;
        case 0x141b64u: goto label_141b64;
        case 0x141b68u: goto label_141b68;
        case 0x141b6cu: goto label_141b6c;
        case 0x141b70u: goto label_141b70;
        case 0x141b74u: goto label_141b74;
        case 0x141b78u: goto label_141b78;
        case 0x141b7cu: goto label_141b7c;
        case 0x141b80u: goto label_141b80;
        case 0x141b84u: goto label_141b84;
        case 0x141b88u: goto label_141b88;
        case 0x141b8cu: goto label_141b8c;
        case 0x141b90u: goto label_141b90;
        case 0x141b94u: goto label_141b94;
        case 0x141b98u: goto label_141b98;
        case 0x141b9cu: goto label_141b9c;
        case 0x141ba0u: goto label_141ba0;
        case 0x141ba4u: goto label_141ba4;
        case 0x141ba8u: goto label_141ba8;
        case 0x141bacu: goto label_141bac;
        case 0x141bb0u: goto label_141bb0;
        case 0x141bb4u: goto label_141bb4;
        case 0x141bb8u: goto label_141bb8;
        case 0x141bbcu: goto label_141bbc;
        case 0x141bc0u: goto label_141bc0;
        case 0x141bc4u: goto label_141bc4;
        case 0x141bc8u: goto label_141bc8;
        case 0x141bccu: goto label_141bcc;
        case 0x141bd0u: goto label_141bd0;
        case 0x141bd4u: goto label_141bd4;
        case 0x141bd8u: goto label_141bd8;
        case 0x141bdcu: goto label_141bdc;
        case 0x141be0u: goto label_141be0;
        case 0x141be4u: goto label_141be4;
        case 0x141be8u: goto label_141be8;
        case 0x141becu: goto label_141bec;
        case 0x141bf0u: goto label_141bf0;
        case 0x141bf4u: goto label_141bf4;
        case 0x141bf8u: goto label_141bf8;
        case 0x141bfcu: goto label_141bfc;
        case 0x141c00u: goto label_141c00;
        case 0x141c04u: goto label_141c04;
        case 0x141c08u: goto label_141c08;
        case 0x141c0cu: goto label_141c0c;
        case 0x141c10u: goto label_141c10;
        case 0x141c14u: goto label_141c14;
        case 0x141c18u: goto label_141c18;
        case 0x141c1cu: goto label_141c1c;
        case 0x141c20u: goto label_141c20;
        case 0x141c24u: goto label_141c24;
        case 0x141c28u: goto label_141c28;
        case 0x141c2cu: goto label_141c2c;
        case 0x141c30u: goto label_141c30;
        case 0x141c34u: goto label_141c34;
        case 0x141c38u: goto label_141c38;
        case 0x141c3cu: goto label_141c3c;
        case 0x141c40u: goto label_141c40;
        case 0x141c44u: goto label_141c44;
        case 0x141c48u: goto label_141c48;
        case 0x141c4cu: goto label_141c4c;
        case 0x141c50u: goto label_141c50;
        case 0x141c54u: goto label_141c54;
        case 0x141c58u: goto label_141c58;
        case 0x141c5cu: goto label_141c5c;
        case 0x141c60u: goto label_141c60;
        case 0x141c64u: goto label_141c64;
        case 0x141c68u: goto label_141c68;
        case 0x141c6cu: goto label_141c6c;
        case 0x141c70u: goto label_141c70;
        case 0x141c74u: goto label_141c74;
        case 0x141c78u: goto label_141c78;
        case 0x141c7cu: goto label_141c7c;
        case 0x141c80u: goto label_141c80;
        case 0x141c84u: goto label_141c84;
        case 0x141c88u: goto label_141c88;
        case 0x141c8cu: goto label_141c8c;
        case 0x141c90u: goto label_141c90;
        case 0x141c94u: goto label_141c94;
        case 0x141c98u: goto label_141c98;
        case 0x141c9cu: goto label_141c9c;
        case 0x141ca0u: goto label_141ca0;
        case 0x141ca4u: goto label_141ca4;
        case 0x141ca8u: goto label_141ca8;
        case 0x141cacu: goto label_141cac;
        case 0x141cb0u: goto label_141cb0;
        case 0x141cb4u: goto label_141cb4;
        case 0x141cb8u: goto label_141cb8;
        case 0x141cbcu: goto label_141cbc;
        case 0x141cc0u: goto label_141cc0;
        case 0x141cc4u: goto label_141cc4;
        case 0x141cc8u: goto label_141cc8;
        case 0x141cccu: goto label_141ccc;
        case 0x141cd0u: goto label_141cd0;
        case 0x141cd4u: goto label_141cd4;
        case 0x141cd8u: goto label_141cd8;
        case 0x141cdcu: goto label_141cdc;
        case 0x141ce0u: goto label_141ce0;
        case 0x141ce4u: goto label_141ce4;
        case 0x141ce8u: goto label_141ce8;
        case 0x141cecu: goto label_141cec;
        case 0x141cf0u: goto label_141cf0;
        case 0x141cf4u: goto label_141cf4;
        case 0x141cf8u: goto label_141cf8;
        case 0x141cfcu: goto label_141cfc;
        case 0x141d00u: goto label_141d00;
        case 0x141d04u: goto label_141d04;
        case 0x141d08u: goto label_141d08;
        case 0x141d0cu: goto label_141d0c;
        case 0x141d10u: goto label_141d10;
        case 0x141d14u: goto label_141d14;
        case 0x141d18u: goto label_141d18;
        case 0x141d1cu: goto label_141d1c;
        case 0x141d20u: goto label_141d20;
        case 0x141d24u: goto label_141d24;
        case 0x141d28u: goto label_141d28;
        case 0x141d2cu: goto label_141d2c;
        case 0x141d30u: goto label_141d30;
        case 0x141d34u: goto label_141d34;
        case 0x141d38u: goto label_141d38;
        case 0x141d3cu: goto label_141d3c;
        case 0x141d40u: goto label_141d40;
        case 0x141d44u: goto label_141d44;
        case 0x141d48u: goto label_141d48;
        case 0x141d4cu: goto label_141d4c;
        case 0x141d50u: goto label_141d50;
        case 0x141d54u: goto label_141d54;
        case 0x141d58u: goto label_141d58;
        case 0x141d5cu: goto label_141d5c;
        case 0x141d60u: goto label_141d60;
        case 0x141d64u: goto label_141d64;
        case 0x141d68u: goto label_141d68;
        case 0x141d6cu: goto label_141d6c;
        case 0x141d70u: goto label_141d70;
        case 0x141d74u: goto label_141d74;
        case 0x141d78u: goto label_141d78;
        case 0x141d7cu: goto label_141d7c;
        case 0x141d80u: goto label_141d80;
        case 0x141d84u: goto label_141d84;
        case 0x141d88u: goto label_141d88;
        case 0x141d8cu: goto label_141d8c;
        case 0x141d90u: goto label_141d90;
        case 0x141d94u: goto label_141d94;
        case 0x141d98u: goto label_141d98;
        case 0x141d9cu: goto label_141d9c;
        case 0x141da0u: goto label_141da0;
        case 0x141da4u: goto label_141da4;
        case 0x141da8u: goto label_141da8;
        case 0x141dacu: goto label_141dac;
        case 0x141db0u: goto label_141db0;
        case 0x141db4u: goto label_141db4;
        case 0x141db8u: goto label_141db8;
        case 0x141dbcu: goto label_141dbc;
        case 0x141dc0u: goto label_141dc0;
        case 0x141dc4u: goto label_141dc4;
        case 0x141dc8u: goto label_141dc8;
        case 0x141dccu: goto label_141dcc;
        case 0x141dd0u: goto label_141dd0;
        case 0x141dd4u: goto label_141dd4;
        case 0x141dd8u: goto label_141dd8;
        case 0x141ddcu: goto label_141ddc;
        case 0x141de0u: goto label_141de0;
        case 0x141de4u: goto label_141de4;
        case 0x141de8u: goto label_141de8;
        case 0x141decu: goto label_141dec;
        case 0x141df0u: goto label_141df0;
        case 0x141df4u: goto label_141df4;
        case 0x141df8u: goto label_141df8;
        case 0x141dfcu: goto label_141dfc;
        case 0x141e00u: goto label_141e00;
        case 0x141e04u: goto label_141e04;
        case 0x141e08u: goto label_141e08;
        case 0x141e0cu: goto label_141e0c;
        case 0x141e10u: goto label_141e10;
        case 0x141e14u: goto label_141e14;
        case 0x141e18u: goto label_141e18;
        case 0x141e1cu: goto label_141e1c;
        case 0x141e20u: goto label_141e20;
        case 0x141e24u: goto label_141e24;
        case 0x141e28u: goto label_141e28;
        case 0x141e2cu: goto label_141e2c;
        case 0x141e30u: goto label_141e30;
        case 0x141e34u: goto label_141e34;
        case 0x141e38u: goto label_141e38;
        case 0x141e3cu: goto label_141e3c;
        case 0x141e40u: goto label_141e40;
        case 0x141e44u: goto label_141e44;
        case 0x141e48u: goto label_141e48;
        case 0x141e4cu: goto label_141e4c;
        case 0x141e50u: goto label_141e50;
        case 0x141e54u: goto label_141e54;
        case 0x141e58u: goto label_141e58;
        case 0x141e5cu: goto label_141e5c;
        case 0x141e60u: goto label_141e60;
        case 0x141e64u: goto label_141e64;
        case 0x141e68u: goto label_141e68;
        case 0x141e6cu: goto label_141e6c;
        case 0x141e70u: goto label_141e70;
        case 0x141e74u: goto label_141e74;
        case 0x141e78u: goto label_141e78;
        case 0x141e7cu: goto label_141e7c;
        case 0x141e80u: goto label_141e80;
        case 0x141e84u: goto label_141e84;
        case 0x141e88u: goto label_141e88;
        case 0x141e8cu: goto label_141e8c;
        case 0x141e90u: goto label_141e90;
        case 0x141e94u: goto label_141e94;
        case 0x141e98u: goto label_141e98;
        case 0x141e9cu: goto label_141e9c;
        case 0x141ea0u: goto label_141ea0;
        case 0x141ea4u: goto label_141ea4;
        case 0x141ea8u: goto label_141ea8;
        case 0x141eacu: goto label_141eac;
        case 0x141eb0u: goto label_141eb0;
        case 0x141eb4u: goto label_141eb4;
        case 0x141eb8u: goto label_141eb8;
        case 0x141ebcu: goto label_141ebc;
        case 0x141ec0u: goto label_141ec0;
        case 0x141ec4u: goto label_141ec4;
        case 0x141ec8u: goto label_141ec8;
        case 0x141eccu: goto label_141ecc;
        case 0x141ed0u: goto label_141ed0;
        case 0x141ed4u: goto label_141ed4;
        case 0x141ed8u: goto label_141ed8;
        case 0x141edcu: goto label_141edc;
        case 0x141ee0u: goto label_141ee0;
        case 0x141ee4u: goto label_141ee4;
        case 0x141ee8u: goto label_141ee8;
        case 0x141eecu: goto label_141eec;
        case 0x141ef0u: goto label_141ef0;
        case 0x141ef4u: goto label_141ef4;
        case 0x141ef8u: goto label_141ef8;
        case 0x141efcu: goto label_141efc;
        case 0x141f00u: goto label_141f00;
        case 0x141f04u: goto label_141f04;
        case 0x141f08u: goto label_141f08;
        case 0x141f0cu: goto label_141f0c;
        case 0x141f10u: goto label_141f10;
        case 0x141f14u: goto label_141f14;
        case 0x141f18u: goto label_141f18;
        case 0x141f1cu: goto label_141f1c;
        case 0x141f20u: goto label_141f20;
        case 0x141f24u: goto label_141f24;
        case 0x141f28u: goto label_141f28;
        case 0x141f2cu: goto label_141f2c;
        case 0x141f30u: goto label_141f30;
        case 0x141f34u: goto label_141f34;
        case 0x141f38u: goto label_141f38;
        case 0x141f3cu: goto label_141f3c;
        case 0x141f40u: goto label_141f40;
        case 0x141f44u: goto label_141f44;
        case 0x141f48u: goto label_141f48;
        case 0x141f4cu: goto label_141f4c;
        case 0x141f50u: goto label_141f50;
        case 0x141f54u: goto label_141f54;
        case 0x141f58u: goto label_141f58;
        case 0x141f5cu: goto label_141f5c;
        case 0x141f60u: goto label_141f60;
        case 0x141f64u: goto label_141f64;
        case 0x141f68u: goto label_141f68;
        case 0x141f6cu: goto label_141f6c;
        case 0x141f70u: goto label_141f70;
        case 0x141f74u: goto label_141f74;
        case 0x141f78u: goto label_141f78;
        case 0x141f7cu: goto label_141f7c;
        case 0x141f80u: goto label_141f80;
        case 0x141f84u: goto label_141f84;
        case 0x141f88u: goto label_141f88;
        case 0x141f8cu: goto label_141f8c;
        case 0x141f90u: goto label_141f90;
        case 0x141f94u: goto label_141f94;
        case 0x141f98u: goto label_141f98;
        case 0x141f9cu: goto label_141f9c;
        case 0x141fa0u: goto label_141fa0;
        case 0x141fa4u: goto label_141fa4;
        case 0x141fa8u: goto label_141fa8;
        case 0x141facu: goto label_141fac;
        case 0x141fb0u: goto label_141fb0;
        case 0x141fb4u: goto label_141fb4;
        case 0x141fb8u: goto label_141fb8;
        case 0x141fbcu: goto label_141fbc;
        case 0x141fc0u: goto label_141fc0;
        case 0x141fc4u: goto label_141fc4;
        case 0x141fc8u: goto label_141fc8;
        case 0x141fccu: goto label_141fcc;
        case 0x141fd0u: goto label_141fd0;
        case 0x141fd4u: goto label_141fd4;
        case 0x141fd8u: goto label_141fd8;
        case 0x141fdcu: goto label_141fdc;
        case 0x141fe0u: goto label_141fe0;
        case 0x141fe4u: goto label_141fe4;
        case 0x141fe8u: goto label_141fe8;
        case 0x141fecu: goto label_141fec;
        case 0x141ff0u: goto label_141ff0;
        case 0x141ff4u: goto label_141ff4;
        case 0x141ff8u: goto label_141ff8;
        case 0x141ffcu: goto label_141ffc;
        case 0x142000u: goto label_142000;
        case 0x142004u: goto label_142004;
        case 0x142008u: goto label_142008;
        case 0x14200cu: goto label_14200c;
        case 0x142010u: goto label_142010;
        case 0x142014u: goto label_142014;
        case 0x142018u: goto label_142018;
        case 0x14201cu: goto label_14201c;
        case 0x142020u: goto label_142020;
        case 0x142024u: goto label_142024;
        case 0x142028u: goto label_142028;
        case 0x14202cu: goto label_14202c;
        case 0x142030u: goto label_142030;
        case 0x142034u: goto label_142034;
        case 0x142038u: goto label_142038;
        case 0x14203cu: goto label_14203c;
        case 0x142040u: goto label_142040;
        case 0x142044u: goto label_142044;
        case 0x142048u: goto label_142048;
        case 0x14204cu: goto label_14204c;
        case 0x142050u: goto label_142050;
        case 0x142054u: goto label_142054;
        case 0x142058u: goto label_142058;
        case 0x14205cu: goto label_14205c;
        case 0x142060u: goto label_142060;
        case 0x142064u: goto label_142064;
        case 0x142068u: goto label_142068;
        case 0x14206cu: goto label_14206c;
        case 0x142070u: goto label_142070;
        case 0x142074u: goto label_142074;
        case 0x142078u: goto label_142078;
        case 0x14207cu: goto label_14207c;
        case 0x142080u: goto label_142080;
        case 0x142084u: goto label_142084;
        case 0x142088u: goto label_142088;
        case 0x14208cu: goto label_14208c;
        case 0x142090u: goto label_142090;
        case 0x142094u: goto label_142094;
        case 0x142098u: goto label_142098;
        case 0x14209cu: goto label_14209c;
        case 0x1420a0u: goto label_1420a0;
        case 0x1420a4u: goto label_1420a4;
        case 0x1420a8u: goto label_1420a8;
        case 0x1420acu: goto label_1420ac;
        case 0x1420b0u: goto label_1420b0;
        case 0x1420b4u: goto label_1420b4;
        case 0x1420b8u: goto label_1420b8;
        case 0x1420bcu: goto label_1420bc;
        case 0x1420c0u: goto label_1420c0;
        case 0x1420c4u: goto label_1420c4;
        case 0x1420c8u: goto label_1420c8;
        case 0x1420ccu: goto label_1420cc;
        case 0x1420d0u: goto label_1420d0;
        case 0x1420d4u: goto label_1420d4;
        case 0x1420d8u: goto label_1420d8;
        case 0x1420dcu: goto label_1420dc;
        case 0x1420e0u: goto label_1420e0;
        case 0x1420e4u: goto label_1420e4;
        case 0x1420e8u: goto label_1420e8;
        case 0x1420ecu: goto label_1420ec;
        case 0x1420f0u: goto label_1420f0;
        case 0x1420f4u: goto label_1420f4;
        case 0x1420f8u: goto label_1420f8;
        case 0x1420fcu: goto label_1420fc;
        case 0x142100u: goto label_142100;
        case 0x142104u: goto label_142104;
        case 0x142108u: goto label_142108;
        case 0x14210cu: goto label_14210c;
        case 0x142110u: goto label_142110;
        case 0x142114u: goto label_142114;
        case 0x142118u: goto label_142118;
        case 0x14211cu: goto label_14211c;
        case 0x142120u: goto label_142120;
        case 0x142124u: goto label_142124;
        case 0x142128u: goto label_142128;
        case 0x14212cu: goto label_14212c;
        case 0x142130u: goto label_142130;
        case 0x142134u: goto label_142134;
        case 0x142138u: goto label_142138;
        case 0x14213cu: goto label_14213c;
        case 0x142140u: goto label_142140;
        case 0x142144u: goto label_142144;
        case 0x142148u: goto label_142148;
        case 0x14214cu: goto label_14214c;
        case 0x142150u: goto label_142150;
        case 0x142154u: goto label_142154;
        case 0x142158u: goto label_142158;
        case 0x14215cu: goto label_14215c;
        case 0x142160u: goto label_142160;
        case 0x142164u: goto label_142164;
        case 0x142168u: goto label_142168;
        case 0x14216cu: goto label_14216c;
        case 0x142170u: goto label_142170;
        case 0x142174u: goto label_142174;
        case 0x142178u: goto label_142178;
        case 0x14217cu: goto label_14217c;
        case 0x142180u: goto label_142180;
        case 0x142184u: goto label_142184;
        case 0x142188u: goto label_142188;
        case 0x14218cu: goto label_14218c;
        case 0x142190u: goto label_142190;
        case 0x142194u: goto label_142194;
        case 0x142198u: goto label_142198;
        case 0x14219cu: goto label_14219c;
        case 0x1421a0u: goto label_1421a0;
        case 0x1421a4u: goto label_1421a4;
        case 0x1421a8u: goto label_1421a8;
        case 0x1421acu: goto label_1421ac;
        case 0x1421b0u: goto label_1421b0;
        case 0x1421b4u: goto label_1421b4;
        default: break;
    }

    ctx->pc = 0x140d68u;

label_140d68:
    // 0x140d68: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x140d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
label_140d6c:
    // 0x140d6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x140d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_140d70:
    // 0x140d70: 0x7fb002e0  sq          $s0, 0x2E0($sp)
    ctx->pc = 0x140d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 16));
label_140d74:
    // 0x140d74: 0x3c090055  lui         $t1, 0x55
    ctx->pc = 0x140d74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)85 << 16));
label_140d78:
    // 0x140d78: 0x7fb202c0  sq          $s2, 0x2C0($sp)
    ctx->pc = 0x140d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 18));
label_140d7c:
    // 0x140d7c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x140d7cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_140d80:
    // 0x140d80: 0x7fb402a0  sq          $s4, 0x2A0($sp)
    ctx->pc = 0x140d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 20));
label_140d84:
    // 0x140d84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x140d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_140d88:
    // 0x140d88: 0x7fb60280  sq          $s6, 0x280($sp)
    ctx->pc = 0x140d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 22));
label_140d8c:
    // 0x140d8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x140d8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140d90:
    // 0x140d90: 0xe7bb0328  swc1        $f27, 0x328($sp)
    ctx->pc = 0x140d90u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
label_140d94:
    // 0x140d94: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x140d94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140d98:
    // 0x140d98: 0xe7b90318  swc1        $f25, 0x318($sp)
    ctx->pc = 0x140d98u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
label_140d9c:
    // 0x140d9c: 0x7fb102d0  sq          $s1, 0x2D0($sp)
    ctx->pc = 0x140d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 17));
label_140da0:
    // 0x140da0: 0x7fb302b0  sq          $s3, 0x2B0($sp)
    ctx->pc = 0x140da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 19));
label_140da4:
    // 0x140da4: 0x7fb50290  sq          $s5, 0x290($sp)
    ctx->pc = 0x140da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 21));
label_140da8:
    // 0x140da8: 0x7fb70270  sq          $s7, 0x270($sp)
    ctx->pc = 0x140da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 23));
label_140dac:
    // 0x140dac: 0x7fbe0260  sq          $fp, 0x260($sp)
    ctx->pc = 0x140dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 30));
label_140db0:
    // 0x140db0: 0xffbf0250  sd          $ra, 0x250($sp)
    ctx->pc = 0x140db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 31));
label_140db4:
    // 0x140db4: 0xe7ba0320  swc1        $f26, 0x320($sp)
    ctx->pc = 0x140db4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
label_140db8:
    // 0x140db8: 0xe7b80310  swc1        $f24, 0x310($sp)
    ctx->pc = 0x140db8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
label_140dbc:
    // 0x140dbc: 0xe7b70308  swc1        $f23, 0x308($sp)
    ctx->pc = 0x140dbcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
label_140dc0:
    // 0x140dc0: 0xe7b60300  swc1        $f22, 0x300($sp)
    ctx->pc = 0x140dc0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
label_140dc4:
    // 0x140dc4: 0xe7b502f8  swc1        $f21, 0x2F8($sp)
    ctx->pc = 0x140dc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
label_140dc8:
    // 0x140dc8: 0xe7b402f0  swc1        $f20, 0x2F0($sp)
    ctx->pc = 0x140dc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
label_140dcc:
    // 0x140dcc: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x140dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_140dd0:
    // 0x140dd0: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x140dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_140dd4:
    // 0x140dd4: 0x8c660040  lw          $a2, 0x40($v1)
    ctx->pc = 0x140dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_140dd8:
    // 0x140dd8: 0x84e40220  lh          $a0, 0x220($a3)
    ctx->pc = 0x140dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 544)));
label_140ddc:
    // 0x140ddc: 0xafa80234  sw          $t0, 0x234($sp)
    ctx->pc = 0x140ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 8));
label_140de0:
    // 0x140de0: 0xc53992dc  lwc1        $f25, -0x6D24($t1)
    ctx->pc = 0x140de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294939356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_140de4:
    // 0x140de4: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x140de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_140de8:
    // 0x140de8: 0x8ce20224  lw          $v0, 0x224($a3)
    ctx->pc = 0x140de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
label_140dec:
    // 0x140dec: 0xafa50230  sw          $a1, 0x230($sp)
    ctx->pc = 0x140decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 5));
label_140df0:
    // 0x140df0: 0xc55b92e0  lwc1        $f27, -0x6D20($t2)
    ctx->pc = 0x140df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294939360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_140df4:
    // 0x140df4: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x140df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_140df8:
    // 0x140df8: 0x40f809  jalr        $v0
label_140dfc:
    if (ctx->pc == 0x140DFCu) {
        ctx->pc = 0x140DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140DF8u;
        // 0x140dfc: 0xafa60238  sw          $a2, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E00u;
        goto label_140e00;
    }
    ctx->pc = 0x140DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140E00u);
        ctx->pc = 0x140DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140DF8u;
        // 0x140dfc: 0xafa60238  sw          $a2, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140DF8u, 0x140E00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140E00u;
label_140e00:
    // 0x140e00: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x140e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_140e04:
    // 0x140e04: 0xc0cd8ec  jal         func_3363B0
label_140e08:
    if (ctx->pc == 0x140E08u) {
        ctx->pc = 0x140E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E04u;
        // 0x140e08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E0Cu;
        goto label_140e0c;
    }
    ctx->pc = 0x140E04u;
    SET_GPR_U32(ctx, 31, 0x140E0Cu);
    ctx->pc = 0x140E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140E04u;
    // 0x140e08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x140E04u, 0x140E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140E0Cu;
label_140e0c:
    // 0x140e0c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x140e0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_140e10:
    // 0x140e10: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x140e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_140e14:
    // 0x140e14: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140e14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_140e18:
    // 0x140e18: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x140e18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_140e1c:
    // 0x140e1c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x140e1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_140e20:
    // 0x140e20: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x140e20u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_140e24:
    // 0x140e24: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x140e24u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_140e28:
    // 0x140e28: 0x4a0003bf  vwaitq
    ctx->pc = 0x140e28u;
    // VWAITQ (Q already resolved in this runtime)
label_140e2c:
    // 0x140e2c: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x140e2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_140e30:
    // 0x140e30: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x140e30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_140e34:
    // 0x140e34: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x140e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_140e38:
    // 0x140e38: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x140e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_140e3c:
    // 0x140e3c: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x140e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_140e40:
    // 0x140e40: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x140e40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_140e44:
    // 0x140e44: 0x40f809  jalr        $v0
label_140e48:
    if (ctx->pc == 0x140E48u) {
        ctx->pc = 0x140E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E44u;
        // 0x140e48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E4Cu;
        goto label_140e4c;
    }
    ctx->pc = 0x140E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140E4Cu);
        ctx->pc = 0x140E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E44u;
        // 0x140e48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140E44u, 0x140E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140E4Cu;
label_140e4c:
    // 0x140e4c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x140e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_140e50:
    // 0x140e50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x140e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_140e54:
    // 0x140e54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x140e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140e58:
    // 0x140e58: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x140e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_140e5c:
    // 0x140e5c: 0xc136b24  jal         func_4DAC90
label_140e60:
    if (ctx->pc == 0x140E60u) {
        ctx->pc = 0x140E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E5Cu;
        // 0x140e60: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E64u;
        goto label_140e64;
    }
    ctx->pc = 0x140E5Cu;
    SET_GPR_U32(ctx, 31, 0x140E64u);
    ctx->pc = 0x140E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140E5Cu;
    // 0x140e60: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x140E5Cu, 0x140E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140E64u;
label_140e64:
    // 0x140e64: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x140e64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_140e68:
    // 0x140e68: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x140e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_140e6c:
    // 0x140e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140e70:
    // 0x140e70: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x140e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_140e74:
    // 0x140e74: 0xc136b18  jal         func_4DAC60
label_140e78:
    if (ctx->pc == 0x140E78u) {
        ctx->pc = 0x140E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E74u;
        // 0x140e78: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E7Cu;
        goto label_140e7c;
    }
    ctx->pc = 0x140E74u;
    SET_GPR_U32(ctx, 31, 0x140E7Cu);
    ctx->pc = 0x140E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140E74u;
    // 0x140e78: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x140E74u, 0x140E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140E7Cu;
label_140e7c:
    // 0x140e7c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x140e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_140e80:
    // 0x140e80: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x140e80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_140e84:
    // 0x140e84: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x140e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_140e88:
    // 0x140e88: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x140e88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_140e8c:
    // 0x140e8c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x140e8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_140e90:
    // 0x140e90: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x140e90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_140e94:
    // 0x140e94: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x140e94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_140e98:
    // 0x140e98: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x140e98u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_140e9c:
    // 0x140e9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x140e9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140ea0:
    // 0x140ea0: 0x8e440348  lw          $a0, 0x348($s2)
    ctx->pc = 0x140ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
label_140ea4:
    // 0x140ea4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x140ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_140ea8:
    // 0x140ea8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x140ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_140eac:
    // 0x140eac: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x140eacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_140eb0:
    // 0x140eb0: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_140eb4:
    if (ctx->pc == 0x140EB4u) {
        ctx->pc = 0x140EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EB0u;
        // 0x140eb4: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EB8u;
        goto label_140eb8;
    }
    ctx->pc = 0x140EB0u;
    {
        const bool branch_taken_0x140eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x140EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EB0u;
        // 0x140eb4: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140eb0) {
            ctx->pc = 0x140F20u;
            goto label_140f20;
        }
    }
    ctx->pc = 0x140EB8u;
label_140eb8:
    // 0x140eb8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x140eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_140ebc:
    // 0x140ebc: 0x8fb00230  lw          $s0, 0x230($sp)
    ctx->pc = 0x140ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_140ec0:
    // 0x140ec0: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x140ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_140ec4:
    // 0x140ec4: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x140ec4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_140ec8:
    // 0x140ec8: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x140ec8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_140ecc:
    // 0x140ecc: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_140ed0:
    if (ctx->pc == 0x140ED0u) {
        ctx->pc = 0x140ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140ECCu;
        // 0x140ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140ED4u;
        goto label_140ed4;
    }
    ctx->pc = 0x140ECCu;
    {
        const bool branch_taken_0x140ecc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x140ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140ECCu;
        // 0x140ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ecc) {
            ctx->pc = 0x140F0Cu;
            goto label_140f0c;
        }
    }
    ctx->pc = 0x140ED4u;
label_140ed4:
    // 0x140ed4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x140ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_140ed8:
    // 0x140ed8: 0x84450098  lh          $a1, 0x98($v0)
    ctx->pc = 0x140ed8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_140edc:
    // 0x140edc: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x140edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_140ee0:
    // 0x140ee0: 0x60f809  jalr        $v1
label_140ee4:
    if (ctx->pc == 0x140EE4u) {
        ctx->pc = 0x140EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EE0u;
        // 0x140ee4: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EE8u;
        goto label_140ee8;
    }
    ctx->pc = 0x140EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x140EE8u);
        ctx->pc = 0x140EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EE0u;
        // 0x140ee4: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140EE0u, 0x140EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140EE8u;
label_140ee8:
    // 0x140ee8: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x140ee8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_140eec:
    // 0x140eec: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x140eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140ef0:
    // 0x140ef0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x140ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_140ef4:
    // 0x140ef4: 0x461b0ee9  min.s       $f27, $f1, $f27
    ctx->pc = 0x140ef4u;
    ctx->f[27] = std::min(ctx->f[1], ctx->f[27]);
label_140ef8:
    // 0x140ef8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x140ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_140efc:
    // 0x140efc: 0x46190e68  max.s       $f25, $f1, $f25
    ctx->pc = 0x140efcu;
    ctx->f[25] = std::max(ctx->f[1], ctx->f[25]);
label_140f00:
    // 0x140f00: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x140f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140f04:
    // 0x140f04: 0x461b06e9  min.s       $f27, $f0, $f27
    ctx->pc = 0x140f04u;
    ctx->f[27] = std::min(ctx->f[0], ctx->f[27]);
label_140f08:
    // 0x140f08: 0x46190668  max.s       $f25, $f0, $f25
    ctx->pc = 0x140f08u;
    ctx->f[25] = std::max(ctx->f[0], ctx->f[25]);
label_140f0c:
    // 0x140f0c: 0x8e420348  lw          $v0, 0x348($s2)
    ctx->pc = 0x140f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
label_140f10:
    // 0x140f10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x140f10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_140f14:
    // 0x140f14: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x140f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_140f18:
    // 0x140f18: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_140f1c:
    if (ctx->pc == 0x140F1Cu) {
        ctx->pc = 0x140F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F18u;
        // 0x140f1c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F20u;
        goto label_140f20;
    }
    ctx->pc = 0x140F18u;
    {
        const bool branch_taken_0x140f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F18u;
        // 0x140f1c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f18) {
            ctx->pc = 0x140EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140ec8;
        }
    }
    ctx->pc = 0x140F20u;
label_140f20:
    // 0x140f20: 0x26420320  addiu       $v0, $s2, 0x320
    ctx->pc = 0x140f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
label_140f24:
    // 0x140f24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_140f28:
    // 0x140f28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x140f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_140f2c:
    // 0x140f2c: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x140f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_140f30:
    // 0x140f30: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x140f30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140f34:
    // 0x140f34: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x140f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140f38:
    // 0x140f38: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x140f38u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_140f3c:
    // 0x140f3c: 0x8e420348  lw          $v0, 0x348($s2)
    ctx->pc = 0x140f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
label_140f40:
    // 0x140f40: 0x10400488  beqz        $v0, . + 4 + (0x488 << 2)
label_140f44:
    if (ctx->pc == 0x140F44u) {
        ctx->pc = 0x140F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F40u;
        // 0x140f44: 0x4600ce40  add.s       $f25, $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F48u;
        goto label_140f48;
    }
    ctx->pc = 0x140F40u;
    {
        const bool branch_taken_0x140f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F40u;
        // 0x140f44: 0x4600ce40  add.s       $f25, $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f40) {
            ctx->pc = 0x142164u;
            goto label_142164;
        }
    }
    ctx->pc = 0x140F48u;
label_140f48:
    // 0x140f48: 0x8fa50230  lw          $a1, 0x230($sp)
    ctx->pc = 0x140f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_140f4c:
    // 0x140f4c: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x140f4cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_140f50:
    // 0x140f50: 0x12600484  beqz        $s3, . + 4 + (0x484 << 2)
label_140f54:
    if (ctx->pc == 0x140F54u) {
        ctx->pc = 0x140F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F50u;
        // 0x140f54: 0x8fbe0240  lw          $fp, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F58u;
        goto label_140f58;
    }
    ctx->pc = 0x140F50u;
    {
        const bool branch_taken_0x140f50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F50u;
        // 0x140f54: 0x8fbe0240  lw          $fp, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f50) {
            ctx->pc = 0x142164u;
            goto label_142164;
        }
    }
    ctx->pc = 0x140F58u;
label_140f58:
    // 0x140f58: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x140f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_140f5c:
    // 0x140f5c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x140f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_140f60:
    // 0x140f60: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x140f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_140f64:
    // 0x140f64: 0x26620090  addiu       $v0, $s3, 0x90
    ctx->pc = 0x140f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_140f68:
    // 0x140f68: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x140f68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_140f6c:
    // 0x140f6c: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x140f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
label_140f70:
    // 0x140f70: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x140f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_140f74:
    // 0x140f74: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x140f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_140f78:
    // 0x140f78: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x140f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_140f7c:
    // 0x140f7c: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x140f7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_140f80:
    // 0x140f80: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x140f80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_140f84:
    // 0x140f84: 0xc136b18  jal         func_4DAC60
label_140f88:
    if (ctx->pc == 0x140F88u) {
        ctx->pc = 0x140F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140F84u;
        // 0x140f88: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140F8Cu;
        goto label_140f8c;
    }
    ctx->pc = 0x140F84u;
    SET_GPR_U32(ctx, 31, 0x140F8Cu);
    ctx->pc = 0x140F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140F84u;
    // 0x140f88: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x140F84u, 0x140F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F8Cu;
label_140f8c:
    // 0x140f8c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x140f8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_140f90:
    // 0x140f90: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x140f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_140f94:
    // 0x140f94: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x140f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_140f98:
    // 0x140f98: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x140f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_140f9c:
    // 0x140f9c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x140f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_140fa0:
    // 0x140fa0: 0x84650098  lh          $a1, 0x98($v1)
    ctx->pc = 0x140fa0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_140fa4:
    // 0x140fa4: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x140fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_140fa8:
    // 0x140fa8: 0x40f809  jalr        $v0
label_140fac:
    if (ctx->pc == 0x140FACu) {
        ctx->pc = 0x140FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FA8u;
        // 0x140fac: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140FB0u;
        goto label_140fb0;
    }
    ctx->pc = 0x140FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140FB0u);
        ctx->pc = 0x140FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FA8u;
        // 0x140fac: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140FA8u, 0x140FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140FB0u;
label_140fb0:
    // 0x140fb0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x140fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_140fb4:
    // 0x140fb4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x140fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_140fb8:
    // 0x140fb8: 0xc136b18  jal         func_4DAC60
label_140fbc:
    if (ctx->pc == 0x140FBCu) {
        ctx->pc = 0x140FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FB8u;
        // 0x140fbc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140FC0u;
        goto label_140fc0;
    }
    ctx->pc = 0x140FB8u;
    SET_GPR_U32(ctx, 31, 0x140FC0u);
    ctx->pc = 0x140FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140FB8u;
    // 0x140fbc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x140FB8u, 0x140FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140FC0u;
label_140fc0:
    // 0x140fc0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x140fc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_140fc4:
    // 0x140fc4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x140fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_140fc8:
    // 0x140fc8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x140fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_140fcc:
    // 0x140fcc: 0x826301b0  lb          $v1, 0x1B0($s3)
    ctx->pc = 0x140fccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_140fd0:
    // 0x140fd0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x140fd0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_140fd4:
    // 0x140fd4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_140fd8:
    if (ctx->pc == 0x140FD8u) {
        ctx->pc = 0x140FDCu;
        goto label_140fdc;
    }
    ctx->pc = 0x140FD4u;
    {
        const bool branch_taken_0x140fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140fd4) {
            ctx->pc = 0x140FF4u;
            goto label_140ff4;
        }
    }
    ctx->pc = 0x140FDCu;
label_140fdc:
    // 0x140fdc: 0xc087408  jal         func_21D020
label_140fe0:
    if (ctx->pc == 0x140FE0u) {
        ctx->pc = 0x140FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FDCu;
        // 0x140fe0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140FE4u;
        goto label_140fe4;
    }
    ctx->pc = 0x140FDCu;
    SET_GPR_U32(ctx, 31, 0x140FE4u);
    ctx->pc = 0x140FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140FDCu;
    // 0x140fe0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x140FDCu, 0x140FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140FE4u;
label_140fe4:
    // 0x140fe4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x140fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_140fe8:
    // 0x140fe8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x140fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_140fec:
    // 0x140fec: 0x10000004  b           . + 4 + (0x4 << 2)
label_140ff0:
    if (ctx->pc == 0x140FF0u) {
        ctx->pc = 0x140FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FECu;
        // 0x140ff0: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x140FF4u;
        goto label_140ff4;
    }
    ctx->pc = 0x140FECu;
    {
        const bool branch_taken_0x140fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FECu;
        // 0x140ff0: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fec) {
            ctx->pc = 0x141000u;
            goto label_141000;
        }
    }
    ctx->pc = 0x140FF4u;
label_140ff4:
    // 0x140ff4: 0xc086618  jal         func_219860
label_140ff8:
    if (ctx->pc == 0x140FF8u) {
        ctx->pc = 0x140FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FF4u;
        // 0x140ff8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140FFCu;
        goto label_140ffc;
    }
    ctx->pc = 0x140FF4u;
    SET_GPR_U32(ctx, 31, 0x140FFCu);
    ctx->pc = 0x140FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140FF4u;
    // 0x140ff8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x140FF4u, 0x140FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140FFCu;
label_140ffc:
    // 0x140ffc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x140ffcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_141000:
    // 0x141000: 0x924203e6  lbu         $v0, 0x3E6($s2)
    ctx->pc = 0x141000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 998)));
label_141004:
    // 0x141004: 0x104001e9  beqz        $v0, . + 4 + (0x1E9 << 2)
label_141008:
    if (ctx->pc == 0x141008u) {
        ctx->pc = 0x141008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141004u;
        // 0x141008: 0xc7ba0008  lwc1        $f26, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14100Cu;
        goto label_14100c;
    }
    ctx->pc = 0x141004u;
    {
        const bool branch_taken_0x141004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141004u;
        // 0x141008: 0xc7ba0008  lwc1        $f26, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141004) {
            ctx->pc = 0x1417ACu;
            goto label_1417ac;
        }
    }
    ctx->pc = 0x14100Cu;
label_14100c:
    // 0x14100c: 0x924203ed  lbu         $v0, 0x3ED($s2)
    ctx->pc = 0x14100cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1005)));
label_141010:
    // 0x141010: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x141010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_141014:
    // 0x141014: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_141018:
    if (ctx->pc == 0x141018u) {
        ctx->pc = 0x141018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141014u;
        // 0x141018: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14101Cu;
        goto label_14101c;
    }
    ctx->pc = 0x141014u;
    {
        const bool branch_taken_0x141014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141014u;
        // 0x141018: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141014) {
            ctx->pc = 0x141124u;
            goto label_141124;
        }
    }
    ctx->pc = 0x14101Cu;
label_14101c:
    // 0x14101c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14101cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_141020:
    // 0x141020: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x141020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_141024:
    // 0x141024: 0xc136afa  jal         func_4DABE8
label_141028:
    if (ctx->pc == 0x141028u) {
        ctx->pc = 0x141028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141024u;
        // 0x141028: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14102Cu;
        goto label_14102c;
    }
    ctx->pc = 0x141024u;
    SET_GPR_U32(ctx, 31, 0x14102Cu);
    ctx->pc = 0x141028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141024u;
    // 0x141028: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141024u, 0x14102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14102Cu;
label_14102c:
    // 0x14102c: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x14102cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_141030:
    // 0x141030: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x141030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_141034:
    // 0x141034: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x141034u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141038:
    // 0x141038: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x141038u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_14103c:
    // 0x14103c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x14103cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141040:
    // 0x141040: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x141040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141044:
    // 0x141044: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x141044u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141048:
    // 0x141048: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x141048u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_14104c:
    // 0x14104c: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x14104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141050:
    // 0x141050: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x141050u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_141054:
    // 0x141054: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x141054u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_141058:
    // 0x141058: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x141058u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14105c:
    // 0x14105c: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x14105cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_141060:
    // 0x141060: 0x0  nop
    ctx->pc = 0x141060u;
    // NOP
label_141064:
    // 0x141064: 0x450001d0  bc1f        . + 4 + (0x1D0 << 2)
label_141068:
    if (ctx->pc == 0x141068u) {
        ctx->pc = 0x141068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141064u;
        // 0x141068: 0x7fa400e0  sq          $a0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14106Cu;
        goto label_14106c;
    }
    ctx->pc = 0x141064u;
    {
        const bool branch_taken_0x141064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x141068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141064u;
        // 0x141068: 0x7fa400e0  sq          $a0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141064) {
            ctx->pc = 0x1417A8u;
            goto label_1417a8;
        }
    }
    ctx->pc = 0x14106Cu;
label_14106c:
    // 0x14106c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x14106cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_141070:
    // 0x141070: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x141070u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_141074:
    // 0x141074: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x141074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141078:
    // 0x141078: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x141078u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_14107c:
    // 0x14107c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x14107cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141080:
    // 0x141080: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x141080u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_141084:
    // 0x141084: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x141084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_141088:
    // 0x141088: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x141088u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14108c:
    // 0x14108c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x14108cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_141090:
    // 0x141090: 0xc136b24  jal         func_4DAC90
label_141094:
    if (ctx->pc == 0x141094u) {
        ctx->pc = 0x141094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141090u;
        // 0x141094: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141098u;
        goto label_141098;
    }
    ctx->pc = 0x141090u;
    SET_GPR_U32(ctx, 31, 0x141098u);
    ctx->pc = 0x141094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141090u;
    // 0x141094: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141090u, 0x141098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141098u;
label_141098:
    // 0x141098: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x141098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_14109c:
    // 0x14109c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x14109cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1410a0:
    // 0x1410a0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1410a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1410a4:
    // 0x1410a4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1410a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1410a8:
    // 0x1410a8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1410a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_1410ac:
    // 0x1410ac: 0xc136afa  jal         func_4DABE8
label_1410b0:
    if (ctx->pc == 0x1410B0u) {
        ctx->pc = 0x1410B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410ACu;
        // 0x1410b0: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1410B4u;
        goto label_1410b4;
    }
    ctx->pc = 0x1410ACu;
    SET_GPR_U32(ctx, 31, 0x1410B4u);
    ctx->pc = 0x1410B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1410ACu;
    // 0x1410b0: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1410ACu, 0x1410B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1410B4u;
label_1410b4:
    // 0x1410b4: 0x4614b301  sub.s       $f12, $f22, $f20
    ctx->pc = 0x1410b4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
label_1410b8:
    // 0x1410b8: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x1410b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1410bc:
    // 0x1410bc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1410bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1410c0:
    // 0x1410c0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1410c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1410c4:
    // 0x1410c4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1410c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_1410c8:
    // 0x1410c8: 0x46176300  add.s       $f12, $f12, $f23
    ctx->pc = 0x1410c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
label_1410cc:
    // 0x1410cc: 0xc136b24  jal         func_4DAC90
label_1410d0:
    if (ctx->pc == 0x1410D0u) {
        ctx->pc = 0x1410D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410CCu;
        // 0x1410d0: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1410D4u;
        goto label_1410d4;
    }
    ctx->pc = 0x1410CCu;
    SET_GPR_U32(ctx, 31, 0x1410D4u);
    ctx->pc = 0x1410D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1410CCu;
    // 0x1410d0: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1410CCu, 0x1410D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1410D4u;
label_1410d4:
    // 0x1410d4: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x1410d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1410d8:
    // 0x1410d8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1410d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1410dc:
    // 0x1410dc: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1410dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1410e0:
    // 0x1410e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1410e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1410e4:
    // 0x1410e4: 0xc136b18  jal         func_4DAC60
label_1410e8:
    if (ctx->pc == 0x1410E8u) {
        ctx->pc = 0x1410E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410E4u;
        // 0x1410e8: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1410ECu;
        goto label_1410ec;
    }
    ctx->pc = 0x1410E4u;
    SET_GPR_U32(ctx, 31, 0x1410ECu);
    ctx->pc = 0x1410E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1410E4u;
    // 0x1410e8: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1410E4u, 0x1410ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1410ECu;
label_1410ec:
    // 0x1410ec: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1410ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1410f0:
    // 0x1410f0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1410f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1410f4:
    // 0x1410f4: 0xc136b18  jal         func_4DAC60
label_1410f8:
    if (ctx->pc == 0x1410F8u) {
        ctx->pc = 0x1410F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410F4u;
        // 0x1410f8: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1410FCu;
        goto label_1410fc;
    }
    ctx->pc = 0x1410F4u;
    SET_GPR_U32(ctx, 31, 0x1410FCu);
    ctx->pc = 0x1410F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1410F4u;
    // 0x1410f8: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1410F4u, 0x1410FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1410FCu;
label_1410fc:
    // 0x1410fc: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x1410fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_141100:
    // 0x141100: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x141100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_141104:
    // 0x141104: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x141104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_141108:
    // 0x141108: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x141108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_14110c:
    // 0x14110c: 0xc136b18  jal         func_4DAC60
label_141110:
    if (ctx->pc == 0x141110u) {
        ctx->pc = 0x141110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14110Cu;
        // 0x141110: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141114u;
        goto label_141114;
    }
    ctx->pc = 0x14110Cu;
    SET_GPR_U32(ctx, 31, 0x141114u);
    ctx->pc = 0x141110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14110Cu;
    // 0x141110: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x14110Cu, 0x141114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141114u;
label_141114:
    // 0x141114: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x141114u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_141118:
    // 0x141118: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x141118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_14111c:
    // 0x14111c: 0x100001a2  b           . + 4 + (0x1A2 << 2)
label_141120:
    if (ctx->pc == 0x141120u) {
        ctx->pc = 0x141120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14111Cu;
        // 0x141120: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141124u;
        goto label_141124;
    }
    ctx->pc = 0x14111Cu;
    {
        const bool branch_taken_0x14111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14111Cu;
        // 0x141120: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14111c) {
            ctx->pc = 0x1417A8u;
            goto label_1417a8;
        }
    }
    ctx->pc = 0x141124u;
label_141124:
    // 0x141124: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x141124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_141128:
    // 0x141128: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x141128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_14112c:
    // 0x14112c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x14112cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_141130:
    // 0x141130: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x141130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_141134:
    // 0x141134: 0xc136afa  jal         func_4DABE8
label_141138:
    if (ctx->pc == 0x141138u) {
        ctx->pc = 0x141138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141134u;
        // 0x141138: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14113Cu;
        goto label_14113c;
    }
    ctx->pc = 0x141134u;
    SET_GPR_U32(ctx, 31, 0x14113Cu);
    ctx->pc = 0x141138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141134u;
    // 0x141138: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141134u, 0x14113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14113Cu;
label_14113c:
    // 0x14113c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x14113cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_141140:
    // 0x141140: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x141140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_141144:
    // 0x141144: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x141144u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_141148:
    // 0x141148: 0x86450352  lh          $a1, 0x352($s2)
    ctx->pc = 0x141148u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 850)));
label_14114c:
    // 0x14114c: 0x18a00081  blez        $a1, . + 4 + (0x81 << 2)
label_141150:
    if (ctx->pc == 0x141150u) {
        ctx->pc = 0x141150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14114Cu;
        // 0x141150: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141154u;
        goto label_141154;
    }
    ctx->pc = 0x14114Cu;
    {
        const bool branch_taken_0x14114c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x141150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14114Cu;
        // 0x141150: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14114c) {
            ctx->pc = 0x141354u;
            goto label_141354;
        }
    }
    ctx->pc = 0x141154u;
label_141154:
    // 0x141154: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x141154u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_141158:
    // 0x141158: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x141158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_14115c:
    // 0x14115c: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x14115cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_141160:
    // 0x141160: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x141160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_141164:
    // 0x141164: 0x24a501e0  addiu       $a1, $a1, 0x1E0
    ctx->pc = 0x141164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
label_141168:
    // 0x141168: 0xc136afa  jal         func_4DABE8
label_14116c:
    if (ctx->pc == 0x14116Cu) {
        ctx->pc = 0x14116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141168u;
        // 0x14116c: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141170u;
        goto label_141170;
    }
    ctx->pc = 0x141168u;
    SET_GPR_U32(ctx, 31, 0x141170u);
    ctx->pc = 0x14116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141168u;
    // 0x14116c: 0x24c601d0  addiu       $a2, $a2, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141168u, 0x141170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141170u;
label_141170:
    // 0x141170: 0x86460352  lh          $a2, 0x352($s2)
    ctx->pc = 0x141170u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 850)));
label_141174:
    // 0x141174: 0x26251740  addiu       $a1, $s1, 0x1740
    ctx->pc = 0x141174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5952));
label_141178:
    // 0x141178: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x141178u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_14117c:
    // 0x14117c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x14117cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_141180:
    // 0x141180: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x141180u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_141184:
    // 0x141184: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x141184u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_141188:
    // 0x141188: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x141188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_14118c:
    // 0x14118c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x14118cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141190:
    // 0x141190: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x141190u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_141194:
    // 0x141194: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x141194u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_141198:
    // 0x141198: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x141198u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_14119c:
    // 0x14119c: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x14119cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
label_1411a0:
    // 0x1411a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1411a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1411a4:
    // 0x1411a4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x1411a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1411a8:
    // 0x1411a8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1411a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1411ac:
    // 0x1411ac: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1411acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1411b0:
    // 0x1411b0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1411b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1411b4:
    // 0x1411b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1411b4u;
    // VWAITQ (Q already resolved in this runtime)
label_1411b8:
    // 0x1411b8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1411b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1411bc:
    // 0x1411bc: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1411bcu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_1411c0:
    // 0x1411c0: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1411c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_1411c4:
    // 0x1411c4: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1411c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_1411c8:
    // 0x1411c8: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x1411c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1411cc:
    // 0x1411cc: 0x7fa70120  sq          $a3, 0x120($sp)
    ctx->pc = 0x1411ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 7));
label_1411d0:
    // 0x1411d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1411d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1411d4:
    // 0x1411d4: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x1411d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_1411d8:
    // 0x1411d8: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x1411d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
label_1411dc:
    // 0x1411dc: 0xc136afa  jal         func_4DABE8
label_1411e0:
    if (ctx->pc == 0x1411E0u) {
        ctx->pc = 0x1411E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1411DCu;
        // 0x1411e0: 0x7fa70130  sq          $a3, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1411E4u;
        goto label_1411e4;
    }
    ctx->pc = 0x1411DCu;
    SET_GPR_U32(ctx, 31, 0x1411E4u);
    ctx->pc = 0x1411E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1411DCu;
    // 0x1411e0: 0x7fa70130  sq          $a3, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1411DCu, 0x1411E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1411E4u;
label_1411e4:
    // 0x1411e4: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x1411e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1411e8:
    // 0x1411e8: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x1411e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1411ec:
    // 0x1411ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1411ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1411f0:
    // 0x1411f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1411f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1411f4:
    // 0x1411f4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x1411f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1411f8:
    // 0x1411f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1411f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1411fc:
    // 0x1411fc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1411fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141200:
    // 0x141200: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x141200u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_141204:
    // 0x141204: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x141204u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_141208:
    // 0x141208: 0x0  nop
    ctx->pc = 0x141208u;
    // NOP
label_14120c:
    // 0x14120c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x14120cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_141210:
    // 0x141210: 0x0  nop
    ctx->pc = 0x141210u;
    // NOP
label_141214:
    // 0x141214: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_141218:
    if (ctx->pc == 0x141218u) {
        ctx->pc = 0x141218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141214u;
        // 0x141218: 0x7fa30130  sq          $v1, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14121Cu;
        goto label_14121c;
    }
    ctx->pc = 0x141214u;
    {
        const bool branch_taken_0x141214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x141218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141214u;
        // 0x141218: 0x7fa30130  sq          $v1, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141214) {
            ctx->pc = 0x141230u;
            goto label_141230;
        }
    }
    ctx->pc = 0x14121Cu;
label_14121c:
    // 0x14121c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x14121cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_141220:
    // 0x141220: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x141220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_141224:
    // 0x141224: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x141224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_141228:
    // 0x141228: 0xc136b24  jal         func_4DAC90
label_14122c:
    if (ctx->pc == 0x14122Cu) {
        ctx->pc = 0x14122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141228u;
        // 0x14122c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141230u;
        goto label_141230;
    }
    ctx->pc = 0x141228u;
    SET_GPR_U32(ctx, 31, 0x141230u);
    ctx->pc = 0x14122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141228u;
    // 0x14122c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141228u, 0x141230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141230u;
label_141230:
    // 0x141230: 0x86430352  lh          $v1, 0x352($s2)
    ctx->pc = 0x141230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 850)));
label_141234:
    // 0x141234: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x141234u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_141238:
    // 0x141238: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x141238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_14123c:
    // 0x14123c: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x14123cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_141240:
    // 0x141240: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x141240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_141244:
    // 0x141244: 0x786201e0  lq          $v0, 0x1E0($v1)
    ctx->pc = 0x141244u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 480)));
label_141248:
    // 0x141248: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x141248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_14124c:
    // 0x14124c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x14124cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141250:
    // 0x141250: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x141250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141254:
    // 0x141254: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x141254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141258:
    // 0x141258: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x141258u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_14125c:
    // 0x14125c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x14125cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_141260:
    // 0x141260: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x141260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_141264:
    // 0x141264: 0x0  nop
    ctx->pc = 0x141264u;
    // NOP
label_141268:
    // 0x141268: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x141268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_14126c:
    // 0x14126c: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x14126cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_141270:
    // 0x141270: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x141270u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_141274:
    // 0x141274: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x141274u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_141278:
    // 0x141278: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x141278u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_14127c:
    // 0x14127c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x14127cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141280:
    // 0x141280: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x141280u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_141284:
    // 0x141284: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x141284u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_141288:
    // 0x141288: 0x0  nop
    ctx->pc = 0x141288u;
    // NOP
label_14128c:
    // 0x14128c: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x14128cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_141290:
    // 0x141290: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x141290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_141294:
    // 0x141294: 0x0  nop
    ctx->pc = 0x141294u;
    // NOP
label_141298:
    // 0x141298: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_14129c:
    if (ctx->pc == 0x14129Cu) {
        ctx->pc = 0x14129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141298u;
        // 0x14129c: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1412A0u;
        goto label_1412a0;
    }
    ctx->pc = 0x141298u;
    {
        const bool branch_taken_0x141298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141298u;
        // 0x14129c: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141298) {
            ctx->pc = 0x141354u;
            goto label_141354;
        }
    }
    ctx->pc = 0x1412A0u;
label_1412a0:
    // 0x1412a0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1412a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1412a4:
    // 0x1412a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1412a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1412a8:
    // 0x1412a8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1412a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1412ac:
    // 0x1412ac: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x1412acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1412b0:
    // 0x1412b0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1412b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1412b4:
    // 0x1412b4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1412b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1412b8:
    // 0x1412b8: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1412b8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_1412bc:
    // 0x1412bc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1412bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1412c0:
    // 0x1412c0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1412c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1412c4:
    // 0x1412c4: 0xc136b24  jal         func_4DAC90
label_1412c8:
    if (ctx->pc == 0x1412C8u) {
        ctx->pc = 0x1412C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412C4u;
        // 0x1412c8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1412CCu;
        goto label_1412cc;
    }
    ctx->pc = 0x1412C4u;
    SET_GPR_U32(ctx, 31, 0x1412CCu);
    ctx->pc = 0x1412C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1412C4u;
    // 0x1412c8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1412C4u, 0x1412CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1412CCu;
label_1412cc:
    // 0x1412cc: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x1412ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1412d0:
    // 0x1412d0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1412d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1412d4:
    // 0x1412d4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1412d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1412d8:
    // 0x1412d8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1412d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1412dc:
    // 0x1412dc: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1412dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_1412e0:
    // 0x1412e0: 0xc136afa  jal         func_4DABE8
label_1412e4:
    if (ctx->pc == 0x1412E4u) {
        ctx->pc = 0x1412E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412E0u;
        // 0x1412e4: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1412E8u;
        goto label_1412e8;
    }
    ctx->pc = 0x1412E0u;
    SET_GPR_U32(ctx, 31, 0x1412E8u);
    ctx->pc = 0x1412E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1412E0u;
    // 0x1412e4: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1412E0u, 0x1412E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1412E8u;
label_1412e8:
    // 0x1412e8: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x1412e8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_1412ec:
    // 0x1412ec: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x1412ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1412f0:
    // 0x1412f0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1412f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1412f4:
    // 0x1412f4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1412f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1412f8:
    // 0x1412f8: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1412f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_1412fc:
    // 0x1412fc: 0x46176300  add.s       $f12, $f12, $f23
    ctx->pc = 0x1412fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
label_141300:
    // 0x141300: 0xc136b24  jal         func_4DAC90
label_141304:
    if (ctx->pc == 0x141304u) {
        ctx->pc = 0x141304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141300u;
        // 0x141304: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141308u;
        goto label_141308;
    }
    ctx->pc = 0x141300u;
    SET_GPR_U32(ctx, 31, 0x141308u);
    ctx->pc = 0x141304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141300u;
    // 0x141304: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141300u, 0x141308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141308u;
label_141308:
    // 0x141308: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x141308u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_14130c:
    // 0x14130c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_141310:
    // 0x141310: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x141310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_141314:
    // 0x141314: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x141314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_141318:
    // 0x141318: 0xc136b18  jal         func_4DAC60
label_14131c:
    if (ctx->pc == 0x14131Cu) {
        ctx->pc = 0x14131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141318u;
        // 0x14131c: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141320u;
        goto label_141320;
    }
    ctx->pc = 0x141318u;
    SET_GPR_U32(ctx, 31, 0x141320u);
    ctx->pc = 0x14131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141318u;
    // 0x14131c: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141318u, 0x141320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141320u;
label_141320:
    // 0x141320: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x141320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_141324:
    // 0x141324: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x141324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_141328:
    // 0x141328: 0xc136b18  jal         func_4DAC60
label_14132c:
    if (ctx->pc == 0x14132Cu) {
        ctx->pc = 0x14132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141328u;
        // 0x14132c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141330u;
        goto label_141330;
    }
    ctx->pc = 0x141328u;
    SET_GPR_U32(ctx, 31, 0x141330u);
    ctx->pc = 0x14132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141328u;
    // 0x14132c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141328u, 0x141330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141330u;
label_141330:
    // 0x141330: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x141330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_141334:
    // 0x141334: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x141334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_141338:
    // 0x141338: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x141338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_14133c:
    // 0x14133c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x14133cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_141340:
    // 0x141340: 0xc136b18  jal         func_4DAC60
label_141344:
    if (ctx->pc == 0x141344u) {
        ctx->pc = 0x141344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141340u;
        // 0x141344: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141348u;
        goto label_141348;
    }
    ctx->pc = 0x141340u;
    SET_GPR_U32(ctx, 31, 0x141348u);
    ctx->pc = 0x141344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141340u;
    // 0x141344: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141340u, 0x141348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141348u;
label_141348:
    // 0x141348: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x141348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_14134c:
    // 0x14134c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x14134cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_141350:
    // 0x141350: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x141350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_141354:
    // 0x141354: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x141354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_141358:
    // 0x141358: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x141358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_14135c:
    // 0x14135c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14135cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141360:
    // 0x141360: 0xc136afa  jal         func_4DABE8
label_141364:
    if (ctx->pc == 0x141364u) {
        ctx->pc = 0x141364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141360u;
        // 0x141364: 0x26311740  addiu       $s1, $s1, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141368u;
        goto label_141368;
    }
    ctx->pc = 0x141360u;
    SET_GPR_U32(ctx, 31, 0x141368u);
    ctx->pc = 0x141364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141360u;
    // 0x141364: 0x26311740  addiu       $s1, $s1, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141360u, 0x141368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141368u;
label_141368:
    // 0x141368: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x141368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_14136c:
    // 0x14136c: 0x86450352  lh          $a1, 0x352($s2)
    ctx->pc = 0x14136cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 850)));
label_141370:
    // 0x141370: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x141370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_141374:
    // 0x141374: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x141374u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_141378:
    // 0x141378: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x141378u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_14137c:
    // 0x14137c: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x14137cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_141380:
    // 0x141380: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x141380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_141384:
    // 0x141384: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x141384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_141388:
    // 0x141388: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x141388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_14138c:
    // 0x14138c: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x14138cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
label_141390:
    // 0x141390: 0xc136afa  jal         func_4DABE8
label_141394:
    if (ctx->pc == 0x141394u) {
        ctx->pc = 0x141394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141390u;
        // 0x141394: 0x24a501f0  addiu       $a1, $a1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141398u;
        goto label_141398;
    }
    ctx->pc = 0x141390u;
    SET_GPR_U32(ctx, 31, 0x141398u);
    ctx->pc = 0x141394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141390u;
    // 0x141394: 0x24a501f0  addiu       $a1, $a1, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141390u, 0x141398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141398u;
label_141398:
    // 0x141398: 0x86460352  lh          $a2, 0x352($s2)
    ctx->pc = 0x141398u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 850)));
label_14139c:
    // 0x14139c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x14139cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1413a0:
    // 0x1413a0: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x1413a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1413a4:
    // 0x1413a4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1413a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1413a8:
    // 0x1413a8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1413a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1413ac:
    // 0x1413ac: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1413acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1413b0:
    // 0x1413b0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1413b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1413b4:
    // 0x1413b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1413b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1413b8:
    // 0x1413b8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1413b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1413bc:
    // 0x1413bc: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x1413bcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1413c0:
    // 0x1413c0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1413c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1413c4:
    // 0x1413c4: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x1413c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
label_1413c8:
    // 0x1413c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1413c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1413cc:
    // 0x1413cc: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x1413ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1413d0:
    // 0x1413d0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1413d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1413d4:
    // 0x1413d4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1413d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1413d8:
    // 0x1413d8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1413d8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1413dc:
    // 0x1413dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1413dcu;
    // VWAITQ (Q already resolved in this runtime)
label_1413e0:
    // 0x1413e0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1413e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1413e4:
    // 0x1413e4: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1413e4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_1413e8:
    // 0x1413e8: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1413e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_1413ec:
    // 0x1413ec: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1413ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_1413f0:
    // 0x1413f0: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x1413f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1413f4:
    // 0x1413f4: 0x24c601e0  addiu       $a2, $a2, 0x1E0
    ctx->pc = 0x1413f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 480));
label_1413f8:
    // 0x1413f8: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x1413f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_1413fc:
    // 0x1413fc: 0x7fa70120  sq          $a3, 0x120($sp)
    ctx->pc = 0x1413fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 7));
label_141400:
    // 0x141400: 0xc136afa  jal         func_4DABE8
label_141404:
    if (ctx->pc == 0x141404u) {
        ctx->pc = 0x141404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141400u;
        // 0x141404: 0x7fa70130  sq          $a3, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141408u;
        goto label_141408;
    }
    ctx->pc = 0x141400u;
    SET_GPR_U32(ctx, 31, 0x141408u);
    ctx->pc = 0x141404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141400u;
    // 0x141404: 0x7fa70130  sq          $a3, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141400u, 0x141408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141408u;
label_141408:
    // 0x141408: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x141408u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_14140c:
    // 0x14140c: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x14140cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_141410:
    // 0x141410: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x141410u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141414:
    // 0x141414: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x141414u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_141418:
    // 0x141418: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x141418u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_14141c:
    // 0x14141c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x14141cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141420:
    // 0x141420: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x141420u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141424:
    // 0x141424: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x141424u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_141428:
    // 0x141428: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x141428u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14142c:
    // 0x14142c: 0x0  nop
    ctx->pc = 0x14142cu;
    // NOP
label_141430:
    // 0x141430: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x141430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_141434:
    // 0x141434: 0x0  nop
    ctx->pc = 0x141434u;
    // NOP
label_141438:
    // 0x141438: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_14143c:
    if (ctx->pc == 0x14143Cu) {
        ctx->pc = 0x14143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141438u;
        // 0x14143c: 0x7fa30130  sq          $v1, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141440u;
        goto label_141440;
    }
    ctx->pc = 0x141438u;
    {
        const bool branch_taken_0x141438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141438u;
        // 0x14143c: 0x7fa30130  sq          $v1, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141438) {
            ctx->pc = 0x141454u;
            goto label_141454;
        }
    }
    ctx->pc = 0x141440u;
label_141440:
    // 0x141440: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x141440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_141444:
    // 0x141444: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x141444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_141448:
    // 0x141448: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x141448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14144c:
    // 0x14144c: 0xc136b24  jal         func_4DAC90
label_141450:
    if (ctx->pc == 0x141450u) {
        ctx->pc = 0x141450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14144Cu;
        // 0x141450: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141454u;
        goto label_141454;
    }
    ctx->pc = 0x14144Cu;
    SET_GPR_U32(ctx, 31, 0x141454u);
    ctx->pc = 0x141450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14144Cu;
    // 0x141450: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x14144Cu, 0x141454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141454u;
label_141454:
    // 0x141454: 0x86430352  lh          $v1, 0x352($s2)
    ctx->pc = 0x141454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 850)));
label_141458:
    // 0x141458: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x141458u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_14145c:
    // 0x14145c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14145cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_141460:
    // 0x141460: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x141460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_141464:
    // 0x141464: 0x786201e0  lq          $v0, 0x1E0($v1)
    ctx->pc = 0x141464u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 480)));
label_141468:
    // 0x141468: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x141468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_14146c:
    // 0x14146c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x14146cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141470:
    // 0x141470: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x141470u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141474:
    // 0x141474: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x141474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141478:
    // 0x141478: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x141478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_14147c:
    // 0x14147c: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x14147cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_141480:
    // 0x141480: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x141480u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_141484:
    // 0x141484: 0x0  nop
    ctx->pc = 0x141484u;
    // NOP
label_141488:
    // 0x141488: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x141488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_14148c:
    // 0x14148c: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x14148cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_141490:
    // 0x141490: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x141490u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_141494:
    // 0x141494: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x141494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141498:
    // 0x141498: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x141498u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_14149c:
    // 0x14149c: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x14149cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1414a0:
    // 0x1414a0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1414a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1414a4:
    // 0x1414a4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1414a4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_1414a8:
    // 0x1414a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1414a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1414ac:
    // 0x1414ac: 0x0  nop
    ctx->pc = 0x1414acu;
    // NOP
label_1414b0:
    // 0x1414b0: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x1414b0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1414b4:
    // 0x1414b4: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1414b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1414b8:
    // 0x1414b8: 0x0  nop
    ctx->pc = 0x1414b8u;
    // NOP
label_1414bc:
    // 0x1414bc: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_1414c0:
    if (ctx->pc == 0x1414C0u) {
        ctx->pc = 0x1414C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414BCu;
        // 0x1414c0: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1414C4u;
        goto label_1414c4;
    }
    ctx->pc = 0x1414BCu;
    {
        const bool branch_taken_0x1414bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1414C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414BCu;
        // 0x1414c0: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1414bc) {
            ctx->pc = 0x141578u;
            goto label_141578;
        }
    }
    ctx->pc = 0x1414C4u;
label_1414c4:
    // 0x1414c4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1414c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1414c8:
    // 0x1414c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1414c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1414cc:
    // 0x1414cc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1414ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1414d0:
    // 0x1414d0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x1414d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1414d4:
    // 0x1414d4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1414d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1414d8:
    // 0x1414d8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1414d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1414dc:
    // 0x1414dc: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1414dcu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_1414e0:
    // 0x1414e0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1414e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1414e4:
    // 0x1414e4: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1414e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1414e8:
    // 0x1414e8: 0xc136b24  jal         func_4DAC90
label_1414ec:
    if (ctx->pc == 0x1414ECu) {
        ctx->pc = 0x1414ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414E8u;
        // 0x1414ec: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1414F0u;
        goto label_1414f0;
    }
    ctx->pc = 0x1414E8u;
    SET_GPR_U32(ctx, 31, 0x1414F0u);
    ctx->pc = 0x1414ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1414E8u;
    // 0x1414ec: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1414E8u, 0x1414F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1414F0u;
label_1414f0:
    // 0x1414f0: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x1414f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1414f4:
    // 0x1414f4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1414f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1414f8:
    // 0x1414f8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1414f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1414fc:
    // 0x1414fc: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1414fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_141500:
    // 0x141500: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x141500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_141504:
    // 0x141504: 0xc136afa  jal         func_4DABE8
label_141508:
    if (ctx->pc == 0x141508u) {
        ctx->pc = 0x141508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141504u;
        // 0x141508: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14150Cu;
        goto label_14150c;
    }
    ctx->pc = 0x141504u;
    SET_GPR_U32(ctx, 31, 0x14150Cu);
    ctx->pc = 0x141508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141504u;
    // 0x141508: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141504u, 0x14150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14150Cu;
label_14150c:
    // 0x14150c: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x14150cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_141510:
    // 0x141510: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x141510u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_141514:
    // 0x141514: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x141514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_141518:
    // 0x141518: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x141518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_14151c:
    // 0x14151c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x14151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_141520:
    // 0x141520: 0x46176300  add.s       $f12, $f12, $f23
    ctx->pc = 0x141520u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
label_141524:
    // 0x141524: 0xc136b24  jal         func_4DAC90
label_141528:
    if (ctx->pc == 0x141528u) {
        ctx->pc = 0x141528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141524u;
        // 0x141528: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14152Cu;
        goto label_14152c;
    }
    ctx->pc = 0x141524u;
    SET_GPR_U32(ctx, 31, 0x14152Cu);
    ctx->pc = 0x141528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141524u;
    // 0x141528: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141524u, 0x14152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14152Cu;
label_14152c:
    // 0x14152c: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x14152cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_141530:
    // 0x141530: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x141530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_141534:
    // 0x141534: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x141534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_141538:
    // 0x141538: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x141538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14153c:
    // 0x14153c: 0xc136b18  jal         func_4DAC60
label_141540:
    if (ctx->pc == 0x141540u) {
        ctx->pc = 0x141540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14153Cu;
        // 0x141540: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141544u;
        goto label_141544;
    }
    ctx->pc = 0x14153Cu;
    SET_GPR_U32(ctx, 31, 0x141544u);
    ctx->pc = 0x141540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14153Cu;
    // 0x141540: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x14153Cu, 0x141544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141544u;
label_141544:
    // 0x141544: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x141544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_141548:
    // 0x141548: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x141548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_14154c:
    // 0x14154c: 0xc136b18  jal         func_4DAC60
label_141550:
    if (ctx->pc == 0x141550u) {
        ctx->pc = 0x141550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14154Cu;
        // 0x141550: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141554u;
        goto label_141554;
    }
    ctx->pc = 0x14154Cu;
    SET_GPR_U32(ctx, 31, 0x141554u);
    ctx->pc = 0x141550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14154Cu;
    // 0x141550: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x14154Cu, 0x141554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141554u;
label_141554:
    // 0x141554: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x141554u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_141558:
    // 0x141558: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x141558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_14155c:
    // 0x14155c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x14155cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_141560:
    // 0x141560: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x141560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_141564:
    // 0x141564: 0xc136b18  jal         func_4DAC60
label_141568:
    if (ctx->pc == 0x141568u) {
        ctx->pc = 0x141568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141564u;
        // 0x141568: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14156Cu;
        goto label_14156c;
    }
    ctx->pc = 0x141564u;
    SET_GPR_U32(ctx, 31, 0x14156Cu);
    ctx->pc = 0x141568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141564u;
    // 0x141568: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141564u, 0x14156Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14156Cu;
label_14156c:
    // 0x14156c: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x14156cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_141570:
    // 0x141570: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x141570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_141574:
    // 0x141574: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x141574u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_141578:
    // 0x141578: 0x86420350  lh          $v0, 0x350($s2)
    ctx->pc = 0x141578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 848)));
label_14157c:
    // 0x14157c: 0x86430352  lh          $v1, 0x352($s2)
    ctx->pc = 0x14157cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 850)));
label_141580:
    // 0x141580: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x141580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_141584:
    // 0x141584: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x141584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_141588:
    // 0x141588: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
label_14158c:
    if (ctx->pc == 0x14158Cu) {
        ctx->pc = 0x14158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141588u;
        // 0x14158c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141590u;
        goto label_141590;
    }
    ctx->pc = 0x141588u;
    {
        const bool branch_taken_0x141588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141588u;
        // 0x14158c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141588) {
            ctx->pc = 0x1417A8u;
            goto label_1417a8;
        }
    }
    ctx->pc = 0x141590u;
label_141590:
    // 0x141590: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x141590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_141594:
    // 0x141594: 0xc136afa  jal         func_4DABE8
label_141598:
    if (ctx->pc == 0x141598u) {
        ctx->pc = 0x141598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141594u;
        // 0x141598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14159Cu;
        goto label_14159c;
    }
    ctx->pc = 0x141594u;
    SET_GPR_U32(ctx, 31, 0x14159Cu);
    ctx->pc = 0x141598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141594u;
    // 0x141598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141594u, 0x14159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14159Cu;
label_14159c:
    // 0x14159c: 0x86450352  lh          $a1, 0x352($s2)
    ctx->pc = 0x14159cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 850)));
label_1415a0:
    // 0x1415a0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1415a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1415a4:
    // 0x1415a4: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x1415a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1415a8:
    // 0x1415a8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1415a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1415ac:
    // 0x1415ac: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x1415acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1415b0:
    // 0x1415b0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1415b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_1415b4:
    // 0x1415b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1415b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1415b8:
    // 0x1415b8: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1415b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_1415bc:
    // 0x1415bc: 0x24c601f0  addiu       $a2, $a2, 0x1F0
    ctx->pc = 0x1415bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
label_1415c0:
    // 0x1415c0: 0xc136afa  jal         func_4DABE8
label_1415c4:
    if (ctx->pc == 0x1415C4u) {
        ctx->pc = 0x1415C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415C0u;
        // 0x1415c4: 0x24a50200  addiu       $a1, $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1415C8u;
        goto label_1415c8;
    }
    ctx->pc = 0x1415C0u;
    SET_GPR_U32(ctx, 31, 0x1415C8u);
    ctx->pc = 0x1415C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1415C0u;
    // 0x1415c4: 0x24a50200  addiu       $a1, $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1415C0u, 0x1415C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1415C8u;
label_1415c8:
    // 0x1415c8: 0x86460352  lh          $a2, 0x352($s2)
    ctx->pc = 0x1415c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 850)));
label_1415cc:
    // 0x1415cc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1415ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1415d0:
    // 0x1415d0: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x1415d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1415d4:
    // 0x1415d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1415d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1415d8:
    // 0x1415d8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1415d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1415dc:
    // 0x1415dc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1415dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1415e0:
    // 0x1415e0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1415e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1415e4:
    // 0x1415e4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1415e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1415e8:
    // 0x1415e8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1415e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1415ec:
    // 0x1415ec: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x1415ecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1415f0:
    // 0x1415f0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1415f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1415f4:
    // 0x1415f4: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x1415f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
label_1415f8:
    // 0x1415f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1415f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1415fc:
    // 0x1415fc: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x1415fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_141600:
    // 0x141600: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x141600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_141604:
    // 0x141604: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x141604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_141608:
    // 0x141608: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x141608u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_14160c:
    // 0x14160c: 0x4a0003bf  vwaitq
    ctx->pc = 0x14160cu;
    // VWAITQ (Q already resolved in this runtime)
label_141610:
    // 0x141610: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x141610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_141614:
    // 0x141614: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x141614u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_141618:
    // 0x141618: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x141618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_14161c:
    // 0x14161c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x14161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_141620:
    // 0x141620: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x141620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_141624:
    // 0x141624: 0x24c601f0  addiu       $a2, $a2, 0x1F0
    ctx->pc = 0x141624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
label_141628:
    // 0x141628: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x141628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_14162c:
    // 0x14162c: 0x7fa70120  sq          $a3, 0x120($sp)
    ctx->pc = 0x14162cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 7));
label_141630:
    // 0x141630: 0xc136afa  jal         func_4DABE8
label_141634:
    if (ctx->pc == 0x141634u) {
        ctx->pc = 0x141634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141630u;
        // 0x141634: 0x7fa70130  sq          $a3, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141638u;
        goto label_141638;
    }
    ctx->pc = 0x141630u;
    SET_GPR_U32(ctx, 31, 0x141638u);
    ctx->pc = 0x141634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141630u;
    // 0x141634: 0x7fa70130  sq          $a3, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141630u, 0x141638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141638u;
label_141638:
    // 0x141638: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x141638u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_14163c:
    // 0x14163c: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x14163cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_141640:
    // 0x141640: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x141640u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141644:
    // 0x141644: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x141644u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_141648:
    // 0x141648: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x141648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_14164c:
    // 0x14164c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x14164cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141650:
    // 0x141650: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x141650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141654:
    // 0x141654: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x141654u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_141658:
    // 0x141658: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x141658u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14165c:
    // 0x14165c: 0x0  nop
    ctx->pc = 0x14165cu;
    // NOP
label_141660:
    // 0x141660: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x141660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_141664:
    // 0x141664: 0x0  nop
    ctx->pc = 0x141664u;
    // NOP
label_141668:
    // 0x141668: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_14166c:
    if (ctx->pc == 0x14166Cu) {
        ctx->pc = 0x14166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141668u;
        // 0x14166c: 0x7fa30130  sq          $v1, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141670u;
        goto label_141670;
    }
    ctx->pc = 0x141668u;
    {
        const bool branch_taken_0x141668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141668u;
        // 0x14166c: 0x7fa30130  sq          $v1, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141668) {
            ctx->pc = 0x141684u;
            goto label_141684;
        }
    }
    ctx->pc = 0x141670u;
label_141670:
    // 0x141670: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x141670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_141674:
    // 0x141674: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x141674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_141678:
    // 0x141678: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x141678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14167c:
    // 0x14167c: 0xc136b24  jal         func_4DAC90
label_141680:
    if (ctx->pc == 0x141680u) {
        ctx->pc = 0x141680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14167Cu;
        // 0x141680: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141684u;
        goto label_141684;
    }
    ctx->pc = 0x14167Cu;
    SET_GPR_U32(ctx, 31, 0x141684u);
    ctx->pc = 0x141680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14167Cu;
    // 0x141680: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x14167Cu, 0x141684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141684u;
label_141684:
    // 0x141684: 0x86430352  lh          $v1, 0x352($s2)
    ctx->pc = 0x141684u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 850)));
label_141688:
    // 0x141688: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x141688u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_14168c:
    // 0x14168c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14168cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_141690:
    // 0x141690: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x141690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_141694:
    // 0x141694: 0x786201f0  lq          $v0, 0x1F0($v1)
    ctx->pc = 0x141694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 496)));
label_141698:
    // 0x141698: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x141698u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_14169c:
    // 0x14169c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x14169cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1416a0:
    // 0x1416a0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x1416a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1416a4:
    // 0x1416a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1416a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1416a8:
    // 0x1416a8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1416a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1416ac:
    // 0x1416ac: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x1416acu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_1416b0:
    // 0x1416b0: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1416b0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1416b4:
    // 0x1416b4: 0x0  nop
    ctx->pc = 0x1416b4u;
    // NOP
label_1416b8:
    // 0x1416b8: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x1416b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1416bc:
    // 0x1416bc: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x1416bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1416c0:
    // 0x1416c0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1416c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1416c4:
    // 0x1416c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1416c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1416c8:
    // 0x1416c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1416c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1416cc:
    // 0x1416cc: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x1416ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1416d0:
    // 0x1416d0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1416d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1416d4:
    // 0x1416d4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x1416d4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_1416d8:
    // 0x1416d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1416d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1416dc:
    // 0x1416dc: 0x0  nop
    ctx->pc = 0x1416dcu;
    // NOP
label_1416e0:
    // 0x1416e0: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x1416e0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1416e4:
    // 0x1416e4: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1416e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1416e8:
    // 0x1416e8: 0x0  nop
    ctx->pc = 0x1416e8u;
    // NOP
label_1416ec:
    // 0x1416ec: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_1416f0:
    if (ctx->pc == 0x1416F0u) {
        ctx->pc = 0x1416F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416ECu;
        // 0x1416f0: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1416F4u;
        goto label_1416f4;
    }
    ctx->pc = 0x1416ECu;
    {
        const bool branch_taken_0x1416ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1416F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416ECu;
        // 0x1416f0: 0x7ba200e0  lq          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416ec) {
            ctx->pc = 0x1417A8u;
            goto label_1417a8;
        }
    }
    ctx->pc = 0x1416F4u;
label_1416f4:
    // 0x1416f4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1416f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1416f8:
    // 0x1416f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1416f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1416fc:
    // 0x1416fc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1416fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_141700:
    // 0x141700: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x141700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141704:
    // 0x141704: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x141704u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141708:
    // 0x141708: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x141708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_14170c:
    // 0x14170c: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x14170cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_141710:
    // 0x141710: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x141710u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141714:
    // 0x141714: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x141714u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_141718:
    // 0x141718: 0xc136b24  jal         func_4DAC90
label_14171c:
    if (ctx->pc == 0x14171Cu) {
        ctx->pc = 0x14171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141718u;
        // 0x14171c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141720u;
        goto label_141720;
    }
    ctx->pc = 0x141718u;
    SET_GPR_U32(ctx, 31, 0x141720u);
    ctx->pc = 0x14171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141718u;
    // 0x14171c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141718u, 0x141720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141720u;
label_141720:
    // 0x141720: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x141720u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_141724:
    // 0x141724: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x141724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_141728:
    // 0x141728: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x141728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_14172c:
    // 0x14172c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x14172cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_141730:
    // 0x141730: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x141730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_141734:
    // 0x141734: 0xc136afa  jal         func_4DABE8
label_141738:
    if (ctx->pc == 0x141738u) {
        ctx->pc = 0x141738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141734u;
        // 0x141738: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14173Cu;
        goto label_14173c;
    }
    ctx->pc = 0x141734u;
    SET_GPR_U32(ctx, 31, 0x14173Cu);
    ctx->pc = 0x141738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141734u;
    // 0x141738: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141734u, 0x14173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14173Cu;
label_14173c:
    // 0x14173c: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x14173cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_141740:
    // 0x141740: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x141740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_141744:
    // 0x141744: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x141744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_141748:
    // 0x141748: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x141748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_14174c:
    // 0x14174c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x14174cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_141750:
    // 0x141750: 0x46176300  add.s       $f12, $f12, $f23
    ctx->pc = 0x141750u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
label_141754:
    // 0x141754: 0xc136b24  jal         func_4DAC90
label_141758:
    if (ctx->pc == 0x141758u) {
        ctx->pc = 0x141758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141754u;
        // 0x141758: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14175Cu;
        goto label_14175c;
    }
    ctx->pc = 0x141754u;
    SET_GPR_U32(ctx, 31, 0x14175Cu);
    ctx->pc = 0x141758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141754u;
    // 0x141758: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141754u, 0x14175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14175Cu;
label_14175c:
    // 0x14175c: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x14175cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_141760:
    // 0x141760: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x141760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_141764:
    // 0x141764: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x141764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_141768:
    // 0x141768: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x141768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14176c:
    // 0x14176c: 0xc136b18  jal         func_4DAC60
label_141770:
    if (ctx->pc == 0x141770u) {
        ctx->pc = 0x141770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14176Cu;
        // 0x141770: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141774u;
        goto label_141774;
    }
    ctx->pc = 0x14176Cu;
    SET_GPR_U32(ctx, 31, 0x141774u);
    ctx->pc = 0x141770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14176Cu;
    // 0x141770: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x14176Cu, 0x141774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141774u;
label_141774:
    // 0x141774: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x141774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_141778:
    // 0x141778: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x141778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_14177c:
    // 0x14177c: 0xc136b18  jal         func_4DAC60
label_141780:
    if (ctx->pc == 0x141780u) {
        ctx->pc = 0x141780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14177Cu;
        // 0x141780: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141784u;
        goto label_141784;
    }
    ctx->pc = 0x14177Cu;
    SET_GPR_U32(ctx, 31, 0x141784u);
    ctx->pc = 0x141780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14177Cu;
    // 0x141780: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x14177Cu, 0x141784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141784u;
label_141784:
    // 0x141784: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x141784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_141788:
    // 0x141788: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x141788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_14178c:
    // 0x14178c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x14178cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_141790:
    // 0x141790: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x141790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_141794:
    // 0x141794: 0xc136b18  jal         func_4DAC60
label_141798:
    if (ctx->pc == 0x141798u) {
        ctx->pc = 0x141798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141794u;
        // 0x141798: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14179Cu;
        goto label_14179c;
    }
    ctx->pc = 0x141794u;
    SET_GPR_U32(ctx, 31, 0x14179Cu);
    ctx->pc = 0x141798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141794u;
    // 0x141798: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141794u, 0x14179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14179Cu;
label_14179c:
    // 0x14179c: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x14179cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1417a0:
    // 0x1417a0: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1417a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_1417a4:
    // 0x1417a4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1417a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_1417a8:
    // 0x1417a8: 0x2d4b025  or          $s6, $s6, $s4
    ctx->pc = 0x1417a8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 20));
label_1417ac:
    // 0x1417ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1417acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1417b0:
    // 0x1417b0: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x1417b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1417b4:
    // 0x1417b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1417b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1417b8:
    // 0x1417b8: 0x4600b546  mov.s       $f21, $f22
    ctx->pc = 0x1417b8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[22]);
label_1417bc:
    // 0x1417bc: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x1417bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_1417c0:
    // 0x1417c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1417c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1417c4:
    // 0x1417c4: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x1417c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_1417c8:
    // 0x1417c8: 0x40f809  jalr        $v0
label_1417cc:
    if (ctx->pc == 0x1417CCu) {
        ctx->pc = 0x1417CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417C8u;
        // 0x1417cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1417D0u;
        goto label_1417d0;
    }
    ctx->pc = 0x1417C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1417D0u);
        ctx->pc = 0x1417CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417C8u;
        // 0x1417cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1417C8u, 0x1417D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1417D0u;
label_1417d0:
    // 0x1417d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1417d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1417d4:
    // 0x1417d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1417d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1417d8:
    // 0x1417d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1417d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1417dc:
    // 0x1417dc: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x1417dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_1417e0:
    // 0x1417e0: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x1417e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_1417e4:
    // 0x1417e4: 0x40f809  jalr        $v0
label_1417e8:
    if (ctx->pc == 0x1417E8u) {
        ctx->pc = 0x1417E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417E4u;
        // 0x1417e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1417ECu;
        goto label_1417ec;
    }
    ctx->pc = 0x1417E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1417ECu);
        ctx->pc = 0x1417E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417E4u;
        // 0x1417e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1417E4u, 0x1417ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1417ECu;
label_1417ec:
    // 0x1417ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1417ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1417f0:
    // 0x1417f0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1417f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1417f4:
    // 0x1417f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1417f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1417f8:
    // 0x1417f8: 0xc136afa  jal         func_4DABE8
label_1417fc:
    if (ctx->pc == 0x1417FCu) {
        ctx->pc = 0x1417FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1417F8u;
        // 0x1417fc: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141800u;
        goto label_141800;
    }
    ctx->pc = 0x1417F8u;
    SET_GPR_U32(ctx, 31, 0x141800u);
    ctx->pc = 0x1417FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1417F8u;
    // 0x1417fc: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1417F8u, 0x141800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141800u;
label_141800:
    // 0x141800: 0x7ba30170  lq          $v1, 0x170($sp)
    ctx->pc = 0x141800u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_141804:
    // 0x141804: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x141804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_141808:
    // 0x141808: 0x924503ed  lbu         $a1, 0x3ED($s2)
    ctx->pc = 0x141808u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1005)));
label_14180c:
    // 0x14180c: 0x14a60002  bne         $a1, $a2, . + 4 + (0x2 << 2)
label_141810:
    if (ctx->pc == 0x141810u) {
        ctx->pc = 0x141810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14180Cu;
        // 0x141810: 0x7fa30160  sq          $v1, 0x160($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141814u;
        goto label_141814;
    }
    ctx->pc = 0x14180Cu;
    {
        const bool branch_taken_0x14180c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x141810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14180Cu;
        // 0x141810: 0x7fa30160  sq          $v1, 0x160($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14180c) {
            ctx->pc = 0x141818u;
            goto label_141818;
        }
    }
    ctx->pc = 0x141814u;
label_141814:
    // 0x141814: 0xc65503d4  lwc1        $f21, 0x3D4($s2)
    ctx->pc = 0x141814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_141818:
    // 0x141818: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x141818u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14181c:
    // 0x14181c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x14181cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_141820:
    // 0x141820: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x141820u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_141824:
    // 0x141824: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x141824u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141828:
    // 0x141828: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x141828u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_14182c:
    // 0x14182c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x14182cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141830:
    // 0x141830: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x141830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141834:
    // 0x141834: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x141834u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_141838:
    // 0x141838: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x141838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14183c:
    // 0x14183c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x14183cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_141840:
    // 0x141840: 0x0  nop
    ctx->pc = 0x141840u;
    // NOP
label_141844:
    // 0x141844: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x141844u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_141848:
    // 0x141848: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x141848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14184c:
    // 0x14184c: 0x0  nop
    ctx->pc = 0x14184cu;
    // NOP
label_141850:
    // 0x141850: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_141854:
    if (ctx->pc == 0x141854u) {
        ctx->pc = 0x141858u;
        goto label_141858;
    }
    ctx->pc = 0x141850u;
    {
        const bool branch_taken_0x141850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x141850) {
            ctx->pc = 0x1418B4u;
            goto label_1418b4;
        }
    }
    ctx->pc = 0x141858u;
label_141858:
    // 0x141858: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x141858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_14185c:
    // 0x14185c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x14185cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141860:
    // 0x141860: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x141860u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141864:
    // 0x141864: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x141864u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141868:
    // 0x141868: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x141868u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_14186c:
    // 0x14186c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x14186cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_141870:
    // 0x141870: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141874:
    // 0x141874: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x141874u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_141878:
    // 0x141878: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x141878u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14187c:
    // 0x14187c: 0xc136b24  jal         func_4DAC90
label_141880:
    if (ctx->pc == 0x141880u) {
        ctx->pc = 0x141880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14187Cu;
        // 0x141880: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141884u;
        goto label_141884;
    }
    ctx->pc = 0x14187Cu;
    SET_GPR_U32(ctx, 31, 0x141884u);
    ctx->pc = 0x141880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14187Cu;
    // 0x141880: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x14187Cu, 0x141884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141884u;
label_141884:
    // 0x141884: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x141884u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_141888:
    // 0x141888: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x141888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_14188c:
    // 0x14188c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x14188cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_141890:
    // 0x141890: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x141890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_141894:
    // 0x141894: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x141894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_141898:
    // 0x141898: 0xc136afa  jal         func_4DABE8
label_14189c:
    if (ctx->pc == 0x14189Cu) {
        ctx->pc = 0x14189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141898u;
        // 0x14189c: 0x7fa20190  sq          $v0, 0x190($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1418A0u;
        goto label_1418a0;
    }
    ctx->pc = 0x141898u;
    SET_GPR_U32(ctx, 31, 0x1418A0u);
    ctx->pc = 0x14189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141898u;
    // 0x14189c: 0x7fa20190  sq          $v0, 0x190($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141898u, 0x1418A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418A0u;
label_1418a0:
    // 0x1418a0: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x1418a0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_1418a4:
    // 0x1418a4: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1418a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1418a8:
    // 0x1418a8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1418a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1418ac:
    // 0x1418ac: 0x10000028  b           . + 4 + (0x28 << 2)
label_1418b0:
    if (ctx->pc == 0x1418B0u) {
        ctx->pc = 0x1418B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1418ACu;
        // 0x1418b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1418B4u;
        goto label_1418b4;
    }
    ctx->pc = 0x1418ACu;
    {
        const bool branch_taken_0x1418ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1418B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1418ACu;
        // 0x1418b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1418ac) {
            ctx->pc = 0x141950u;
            goto label_141950;
        }
    }
    ctx->pc = 0x1418B4u;
label_1418b4:
    // 0x1418b4: 0x50a60001  beql        $a1, $a2, . + 4 + (0x1 << 2)
label_1418b8:
    if (ctx->pc == 0x1418B8u) {
        ctx->pc = 0x1418B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1418B4u;
        // 0x1418b8: 0xc65503d4  lwc1        $f21, 0x3D4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1418BCu;
        goto label_1418bc;
    }
    ctx->pc = 0x1418B4u;
    {
        const bool branch_taken_0x1418b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1418b4) {
            ctx->pc = 0x1418B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1418B4u;
            // 0x1418b8: 0xc65503d4  lwc1        $f21, 0x3D4($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1418BCu;
            goto label_1418bc;
        }
    }
    ctx->pc = 0x1418BCu;
label_1418bc:
    // 0x1418bc: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1418bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1418c0:
    // 0x1418c0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1418c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_1418c4:
    // 0x1418c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1418c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1418c8:
    // 0x1418c8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x1418c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1418cc:
    // 0x1418cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1418ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1418d0:
    // 0x1418d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1418d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1418d4:
    // 0x1418d4: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1418d4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_1418d8:
    // 0x1418d8: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1418d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1418dc:
    // 0x1418dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1418dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1418e0:
    // 0x1418e0: 0x0  nop
    ctx->pc = 0x1418e0u;
    // NOP
label_1418e4:
    // 0x1418e4: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x1418e4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1418e8:
    // 0x1418e8: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1418e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1418ec:
    // 0x1418ec: 0x0  nop
    ctx->pc = 0x1418ecu;
    // NOP
label_1418f0:
    // 0x1418f0: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_1418f4:
    if (ctx->pc == 0x1418F4u) {
        ctx->pc = 0x1418F8u;
        goto label_1418f8;
    }
    ctx->pc = 0x1418F0u;
    {
        const bool branch_taken_0x1418f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1418f0) {
            ctx->pc = 0x1419ACu;
            goto label_1419ac;
        }
    }
    ctx->pc = 0x1418F8u;
label_1418f8:
    // 0x1418f8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1418f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1418fc:
    // 0x1418fc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1418fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141900:
    // 0x141900: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x141900u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141904:
    // 0x141904: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x141904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141908:
    // 0x141908: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x141908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_14190c:
    // 0x14190c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x14190cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_141910:
    // 0x141910: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x141910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_141914:
    // 0x141914: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x141914u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_141918:
    // 0x141918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x141918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14191c:
    // 0x14191c: 0xc136b24  jal         func_4DAC90
label_141920:
    if (ctx->pc == 0x141920u) {
        ctx->pc = 0x141920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14191Cu;
        // 0x141920: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141924u;
        goto label_141924;
    }
    ctx->pc = 0x14191Cu;
    SET_GPR_U32(ctx, 31, 0x141924u);
    ctx->pc = 0x141920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14191Cu;
    // 0x141920: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x14191Cu, 0x141924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141924u;
label_141924:
    // 0x141924: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x141924u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_141928:
    // 0x141928: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x141928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_14192c:
    // 0x14192c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x14192cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_141930:
    // 0x141930: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x141930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_141934:
    // 0x141934: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x141934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_141938:
    // 0x141938: 0xc136afa  jal         func_4DABE8
label_14193c:
    if (ctx->pc == 0x14193Cu) {
        ctx->pc = 0x14193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141938u;
        // 0x14193c: 0x7fa20190  sq          $v0, 0x190($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141940u;
        goto label_141940;
    }
    ctx->pc = 0x141938u;
    SET_GPR_U32(ctx, 31, 0x141940u);
    ctx->pc = 0x14193Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141938u;
    // 0x14193c: 0x7fa20190  sq          $v0, 0x190($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141938u, 0x141940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141940u;
label_141940:
    // 0x141940: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x141940u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_141944:
    // 0x141944: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x141944u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_141948:
    // 0x141948: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x141948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_14194c:
    // 0x14194c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14194cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_141950:
    // 0x141950: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x141950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
label_141954:
    // 0x141954: 0x46176300  add.s       $f12, $f12, $f23
    ctx->pc = 0x141954u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
label_141958:
    // 0x141958: 0xc136b24  jal         func_4DAC90
label_14195c:
    if (ctx->pc == 0x14195Cu) {
        ctx->pc = 0x14195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141958u;
        // 0x14195c: 0x7fa20190  sq          $v0, 0x190($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141960u;
        goto label_141960;
    }
    ctx->pc = 0x141958u;
    SET_GPR_U32(ctx, 31, 0x141960u);
    ctx->pc = 0x14195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141958u;
    // 0x14195c: 0x7fa20190  sq          $v0, 0x190($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141958u, 0x141960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141960u;
label_141960:
    // 0x141960: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x141960u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_141964:
    // 0x141964: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x141964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_141968:
    // 0x141968: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x141968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_14196c:
    // 0x14196c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14196cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_141970:
    // 0x141970: 0xc136b18  jal         func_4DAC60
label_141974:
    if (ctx->pc == 0x141974u) {
        ctx->pc = 0x141974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141970u;
        // 0x141974: 0x7fa20190  sq          $v0, 0x190($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141978u;
        goto label_141978;
    }
    ctx->pc = 0x141970u;
    SET_GPR_U32(ctx, 31, 0x141978u);
    ctx->pc = 0x141974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141970u;
    // 0x141974: 0x7fa20190  sq          $v0, 0x190($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141970u, 0x141978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141978u;
label_141978:
    // 0x141978: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x141978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_14197c:
    // 0x14197c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x14197cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_141980:
    // 0x141980: 0xc136b18  jal         func_4DAC60
label_141984:
    if (ctx->pc == 0x141984u) {
        ctx->pc = 0x141984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141980u;
        // 0x141984: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141988u;
        goto label_141988;
    }
    ctx->pc = 0x141980u;
    SET_GPR_U32(ctx, 31, 0x141988u);
    ctx->pc = 0x141984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141980u;
    // 0x141984: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141980u, 0x141988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141988u;
label_141988:
    // 0x141988: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x141988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_14198c:
    // 0x14198c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x14198cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_141990:
    // 0x141990: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x141990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_141994:
    // 0x141994: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x141994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_141998:
    // 0x141998: 0xc136b18  jal         func_4DAC60
label_14199c:
    if (ctx->pc == 0x14199Cu) {
        ctx->pc = 0x14199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141998u;
        // 0x14199c: 0x7fa201a0  sq          $v0, 0x1A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1419A0u;
        goto label_1419a0;
    }
    ctx->pc = 0x141998u;
    SET_GPR_U32(ctx, 31, 0x1419A0u);
    ctx->pc = 0x14199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141998u;
    // 0x14199c: 0x7fa201a0  sq          $v0, 0x1A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141998u, 0x1419A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1419A0u;
label_1419a0:
    // 0x1419a0: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x1419a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_1419a4:
    // 0x1419a4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1419a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1419a8:
    // 0x1419a8: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x1419a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
label_1419ac:
    // 0x1419ac: 0x12800039  beqz        $s4, . + 4 + (0x39 << 2)
label_1419b0:
    if (ctx->pc == 0x1419B0u) {
        ctx->pc = 0x1419B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419ACu;
        // 0x1419b0: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1419B4u;
        goto label_1419b4;
    }
    ctx->pc = 0x1419ACu;
    {
        const bool branch_taken_0x1419ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1419B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419ACu;
        // 0x1419b0: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1419ac) {
            ctx->pc = 0x141A94u;
            goto label_141a94;
        }
    }
    ctx->pc = 0x1419B4u;
label_1419b4:
    // 0x1419b4: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x1419b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1419b8:
    // 0x1419b8: 0x8ce347c4  lw          $v1, 0x47C4($a3)
    ctx->pc = 0x1419b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18372)));
label_1419bc:
    // 0x1419bc: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1419bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1419c0:
    // 0x1419c0: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x1419c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_1419c4:
    // 0x1419c4: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1419c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1419c8:
    // 0x1419c8: 0x8c670040  lw          $a3, 0x40($v1)
    ctx->pc = 0x1419c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_1419cc:
    // 0x1419cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1419ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1419d0:
    // 0x1419d0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x1419d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1419d4:
    // 0x1419d4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1419d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1419d8:
    // 0x1419d8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1419d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1419dc:
    // 0x1419dc: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1419dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1419e0:
    // 0x1419e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1419e0u;
    // VWAITQ (Q already resolved in this runtime)
label_1419e4:
    // 0x1419e4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x1419e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1419e8:
    // 0x1419e8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1419e8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_1419ec:
    // 0x1419ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1419ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1419f0:
    // 0x1419f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1419f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1419f4:
    // 0x1419f4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x1419f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1419f8:
    // 0x1419f8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1419f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1419fc:
    // 0x1419fc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1419fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_141a00:
    // 0x141a00: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x141a00u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_141a04:
    // 0x141a04: 0x4a0003bf  vwaitq
    ctx->pc = 0x141a04u;
    // VWAITQ (Q already resolved in this runtime)
label_141a08:
    // 0x141a08: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x141a08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_141a0c:
    // 0x141a0c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x141a0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_141a10:
    // 0x141a10: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x141a10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_141a14:
    // 0x141a14: 0x46150040  add.s       $f1, $f0, $f21
    ctx->pc = 0x141a14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_141a18:
    // 0x141a18: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x141a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_141a1c:
    // 0x141a1c: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x141a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
label_141a20:
    // 0x141a20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x141a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141a24:
    // 0x141a24: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x141a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
label_141a28:
    // 0x141a28: 0x7fa30190  sq          $v1, 0x190($sp)
    ctx->pc = 0x141a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 3));
label_141a2c:
    // 0x141a2c: 0xe7a101d4  swc1        $f1, 0x1D4($sp)
    ctx->pc = 0x141a2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_141a30:
    // 0x141a30: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x141a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_141a34:
    // 0x141a34: 0xc0d4336  jal         func_350CD8
label_141a38:
    if (ctx->pc == 0x141A38u) {
        ctx->pc = 0x141A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A34u;
        // 0x141a38: 0xafa001d0  sw          $zero, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A3Cu;
        goto label_141a3c;
    }
    ctx->pc = 0x141A34u;
    SET_GPR_U32(ctx, 31, 0x141A3Cu);
    ctx->pc = 0x141A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A34u;
    // 0x141a38: 0xafa001d0  sw          $zero, 0x1D0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x141A34u, 0x141A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A3Cu;
label_141a3c:
    // 0x141a3c: 0xc7ac01d4  lwc1        $f12, 0x1D4($sp)
    ctx->pc = 0x141a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_141a40:
    // 0x141a40: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x141a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_141a44:
    // 0x141a44: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x141a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_141a48:
    // 0x141a48: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x141a48u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
label_141a4c:
    // 0x141a4c: 0xc136b24  jal         func_4DAC90
label_141a50:
    if (ctx->pc == 0x141A50u) {
        ctx->pc = 0x141A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A4Cu;
        // 0x141a50: 0x46176301  sub.s       $f12, $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A54u;
        goto label_141a54;
    }
    ctx->pc = 0x141A4Cu;
    SET_GPR_U32(ctx, 31, 0x141A54u);
    ctx->pc = 0x141A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A4Cu;
    // 0x141a50: 0x46176301  sub.s       $f12, $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141A4Cu, 0x141A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A54u;
label_141a54:
    // 0x141a54: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x141a54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_141a58:
    // 0x141a58: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x141a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_141a5c:
    // 0x141a5c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x141a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_141a60:
    // 0x141a60: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x141a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_141a64:
    // 0x141a64: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x141a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
label_141a68:
    // 0x141a68: 0xc136b18  jal         func_4DAC60
label_141a6c:
    if (ctx->pc == 0x141A6Cu) {
        ctx->pc = 0x141A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A68u;
        // 0x141a6c: 0x7fa20200  sq          $v0, 0x200($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A70u;
        goto label_141a70;
    }
    ctx->pc = 0x141A68u;
    SET_GPR_U32(ctx, 31, 0x141A70u);
    ctx->pc = 0x141A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A68u;
    // 0x141a6c: 0x7fa20200  sq          $v0, 0x200($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141A68u, 0x141A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A70u;
label_141a70:
    // 0x141a70: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x141a70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_141a74:
    // 0x141a74: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x141a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_141a78:
    // 0x141a78: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x141a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_141a7c:
    // 0x141a7c: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x141a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_141a80:
    // 0x141a80: 0xc136b18  jal         func_4DAC60
label_141a84:
    if (ctx->pc == 0x141A84u) {
        ctx->pc = 0x141A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A80u;
        // 0x141a84: 0x7fa20210  sq          $v0, 0x210($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A88u;
        goto label_141a88;
    }
    ctx->pc = 0x141A80u;
    SET_GPR_U32(ctx, 31, 0x141A88u);
    ctx->pc = 0x141A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A80u;
    // 0x141a84: 0x7fa20210  sq          $v0, 0x210($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141A80u, 0x141A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A88u;
label_141a88:
    // 0x141a88: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x141a88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_141a8c:
    // 0x141a8c: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x141a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
label_141a90:
    // 0x141a90: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x141a90u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
label_141a94:
    // 0x141a94: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x141a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_141a98:
    // 0x141a98: 0x108000cf  beqz        $a0, . + 4 + (0xCF << 2)
label_141a9c:
    if (ctx->pc == 0x141A9Cu) {
        ctx->pc = 0x141A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A98u;
        // 0x141a9c: 0x2d4b025  or          $s6, $s6, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141AA0u;
        goto label_141aa0;
    }
    ctx->pc = 0x141A98u;
    {
        const bool branch_taken_0x141a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A98u;
        // 0x141a9c: 0x2d4b025  or          $s6, $s6, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a98) {
            ctx->pc = 0x141DD8u;
            goto label_141dd8;
        }
    }
    ctx->pc = 0x141AA0u;
label_141aa0:
    // 0x141aa0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x141aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_141aa4:
    // 0x141aa4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x141aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_141aa8:
    // 0x141aa8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x141aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141aac:
    // 0x141aac: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x141aacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_141ab0:
    // 0x141ab0: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x141ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_141ab4:
    // 0x141ab4: 0x40f809  jalr        $v0
label_141ab8:
    if (ctx->pc == 0x141AB8u) {
        ctx->pc = 0x141AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AB4u;
        // 0x141ab8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141ABCu;
        goto label_141abc;
    }
    ctx->pc = 0x141AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141ABCu);
        ctx->pc = 0x141AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AB4u;
        // 0x141ab8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141AB4u, 0x141ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141ABCu;
label_141abc:
    // 0x141abc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x141abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141ac0:
    // 0x141ac0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x141ac0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_141ac4:
    // 0x141ac4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x141ac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_141ac8:
    // 0x141ac8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x141ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_141acc:
    // 0x141acc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x141accu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_141ad0:
    // 0x141ad0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x141ad0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141ad4:
    // 0x141ad4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x141ad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141ad8:
    // 0x141ad8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x141ad8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141adc:
    // 0x141adc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x141adcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141ae0:
    // 0x141ae0: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x141ae0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_141ae4:
    // 0x141ae4: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x141ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141ae8:
    // 0x141ae8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x141ae8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_141aec:
    // 0x141aec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x141aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_141af0:
    // 0x141af0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x141af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_141af4:
    // 0x141af4: 0xc136afa  jal         func_4DABE8
label_141af8:
    if (ctx->pc == 0x141AF8u) {
        ctx->pc = 0x141AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AF4u;
        // 0x141af8: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x141AFCu;
        goto label_141afc;
    }
    ctx->pc = 0x141AF4u;
    SET_GPR_U32(ctx, 31, 0x141AFCu);
    ctx->pc = 0x141AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141AF4u;
    // 0x141af8: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141AF4u, 0x141AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141AFCu;
label_141afc:
    // 0x141afc: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x141afcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_141b00:
    // 0x141b00: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x141b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_141b04:
    // 0x141b04: 0x0  nop
    ctx->pc = 0x141b04u;
    // NOP
label_141b08:
    // 0x141b08: 0x45000078  bc1f        . + 4 + (0x78 << 2)
label_141b0c:
    if (ctx->pc == 0x141B0Cu) {
        ctx->pc = 0x141B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B08u;
        // 0x141b0c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B10u;
        goto label_141b10;
    }
    ctx->pc = 0x141B08u;
    {
        const bool branch_taken_0x141b08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x141B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B08u;
        // 0x141b0c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141b08) {
            ctx->pc = 0x141CECu;
            goto label_141cec;
        }
    }
    ctx->pc = 0x141B10u;
label_141b10:
    // 0x141b10: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x141b10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_141b14:
    // 0x141b14: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x141b14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141b18:
    // 0x141b18: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x141b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_141b1c:
    // 0x141b1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x141b1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141b20:
    // 0x141b20: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x141b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_141b24:
    // 0x141b24: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x141b24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_141b28:
    // 0x141b28: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x141b28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_141b2c:
    // 0x141b2c: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x141b2cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_141b30:
    // 0x141b30: 0x4a0003bf  vwaitq
    ctx->pc = 0x141b30u;
    // VWAITQ (Q already resolved in this runtime)
label_141b34:
    // 0x141b34: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x141b34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_141b38:
    // 0x141b38: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x141b38u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_141b3c:
    // 0x141b3c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x141b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_141b40:
    // 0x141b40: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x141b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_141b44:
    // 0x141b44: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x141b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_141b48:
    // 0x141b48: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x141b48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_141b4c:
    // 0x141b4c: 0x40f809  jalr        $v0
label_141b50:
    if (ctx->pc == 0x141B50u) {
        ctx->pc = 0x141B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B4Cu;
        // 0x141b50: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B54u;
        goto label_141b54;
    }
    ctx->pc = 0x141B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141B54u);
        ctx->pc = 0x141B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B4Cu;
        // 0x141b50: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141B4Cu, 0x141B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141B54u;
label_141b54:
    // 0x141b54: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x141b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_141b58:
    // 0x141b58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x141b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_141b5c:
    // 0x141b5c: 0xc136afa  jal         func_4DABE8
label_141b60:
    if (ctx->pc == 0x141B60u) {
        ctx->pc = 0x141B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B5Cu;
        // 0x141b60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B64u;
        goto label_141b64;
    }
    ctx->pc = 0x141B5Cu;
    SET_GPR_U32(ctx, 31, 0x141B64u);
    ctx->pc = 0x141B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B5Cu;
    // 0x141b60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141B5Cu, 0x141B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B64u;
label_141b64:
    // 0x141b64: 0x4614b541  sub.s       $f21, $f22, $f20
    ctx->pc = 0x141b64u;
    ctx->f[21] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
label_141b68:
    // 0x141b68: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x141b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_141b6c:
    // 0x141b6c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x141b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_141b70:
    // 0x141b70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141b74:
    // 0x141b74: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x141b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_141b78:
    // 0x141b78: 0x4617ad40  add.s       $f21, $f21, $f23
    ctx->pc = 0x141b78u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_141b7c:
    // 0x141b7c: 0xc136b24  jal         func_4DAC90
label_141b80:
    if (ctx->pc == 0x141B80u) {
        ctx->pc = 0x141B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B7Cu;
        // 0x141b80: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B84u;
        goto label_141b84;
    }
    ctx->pc = 0x141B7Cu;
    SET_GPR_U32(ctx, 31, 0x141B84u);
    ctx->pc = 0x141B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B7Cu;
    // 0x141b80: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141B7Cu, 0x141B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B84u;
label_141b84:
    // 0x141b84: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x141b84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_141b88:
    // 0x141b88: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x141b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_141b8c:
    // 0x141b8c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x141b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_141b90:
    // 0x141b90: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x141b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_141b94:
    // 0x141b94: 0xc136b18  jal         func_4DAC60
label_141b98:
    if (ctx->pc == 0x141B98u) {
        ctx->pc = 0x141B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B94u;
        // 0x141b98: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B9Cu;
        goto label_141b9c;
    }
    ctx->pc = 0x141B94u;
    SET_GPR_U32(ctx, 31, 0x141B9Cu);
    ctx->pc = 0x141B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B94u;
    // 0x141b98: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141B94u, 0x141B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B9Cu;
label_141b9c:
    // 0x141b9c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x141b9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_141ba0:
    // 0x141ba0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x141ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_141ba4:
    // 0x141ba4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x141ba4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141ba8:
    // 0x141ba8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x141ba8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141bac:
    // 0x141bac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x141bacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141bb0:
    // 0x141bb0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x141bb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141bb4:
    // 0x141bb4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x141bb4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_141bb8:
    // 0x141bb8: 0x4a0003bf  vwaitq
    ctx->pc = 0x141bb8u;
    // VWAITQ (Q already resolved in this runtime)
label_141bbc:
    // 0x141bbc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x141bbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141bc0:
    // 0x141bc0: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x141bc0u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_141bc4:
    // 0x141bc4: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x141bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_141bc8:
    // 0x141bc8: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x141bc8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_141bcc:
    // 0x141bcc: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x141bccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_141bd0:
    // 0x141bd0: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x141bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_141bd4:
    // 0x141bd4: 0x40f809  jalr        $v0
label_141bd8:
    if (ctx->pc == 0x141BD8u) {
        ctx->pc = 0x141BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BD4u;
        // 0x141bd8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141BDCu;
        goto label_141bdc;
    }
    ctx->pc = 0x141BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141BDCu);
        ctx->pc = 0x141BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BD4u;
        // 0x141bd8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141BD4u, 0x141BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141BDCu;
label_141bdc:
    // 0x141bdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x141bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141be0:
    // 0x141be0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x141be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_141be4:
    // 0x141be4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x141be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_141be8:
    // 0x141be8: 0xc136b24  jal         func_4DAC90
label_141bec:
    if (ctx->pc == 0x141BECu) {
        ctx->pc = 0x141BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BE8u;
        // 0x141bec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x141BF0u;
        goto label_141bf0;
    }
    ctx->pc = 0x141BE8u;
    SET_GPR_U32(ctx, 31, 0x141BF0u);
    ctx->pc = 0x141BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141BE8u;
    // 0x141bec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141BE8u, 0x141BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141BF0u;
label_141bf0:
    // 0x141bf0: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x141bf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_141bf4:
    // 0x141bf4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x141bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_141bf8:
    // 0x141bf8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x141bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_141bfc:
    // 0x141bfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141c00:
    // 0x141c00: 0xc136b18  jal         func_4DAC60
label_141c04:
    if (ctx->pc == 0x141C04u) {
        ctx->pc = 0x141C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C00u;
        // 0x141c04: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141C08u;
        goto label_141c08;
    }
    ctx->pc = 0x141C00u;
    SET_GPR_U32(ctx, 31, 0x141C08u);
    ctx->pc = 0x141C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C00u;
    // 0x141c04: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141C00u, 0x141C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C08u;
label_141c08:
    // 0x141c08: 0x7ba60100  lq          $a2, 0x100($sp)
    ctx->pc = 0x141c08u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_141c0c:
    // 0x141c0c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x141c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_141c10:
    // 0x141c10: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x141c10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_141c14:
    // 0x141c14: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x141c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_141c18:
    // 0x141c18: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x141c18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141c1c:
    // 0x141c1c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x141c1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_141c20:
    // 0x141c20: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x141c20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141c24:
    // 0x141c24: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x141c24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141c28:
    // 0x141c28: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x141c28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141c2c:
    // 0x141c2c: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x141c2cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_141c30:
    // 0x141c30: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x141c30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_141c34:
    // 0x141c34: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x141c34u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_141c38:
    // 0x141c38: 0x7fa600e0  sq          $a2, 0xE0($sp)
    ctx->pc = 0x141c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 6));
label_141c3c:
    // 0x141c3c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x141c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_141c40:
    // 0x141c40: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x141c40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_141c44:
    // 0x141c44: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x141c44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_141c48:
    // 0x141c48: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x141c48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141c4c:
    // 0x141c4c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x141c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141c50:
    // 0x141c50: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x141c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141c54:
    // 0x141c54: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x141c54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141c58:
    // 0x141c58: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x141c58u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_141c5c:
    // 0x141c5c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x141c5cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_141c60:
    // 0x141c60: 0xc136b24  jal         func_4DAC90
label_141c64:
    if (ctx->pc == 0x141C64u) {
        ctx->pc = 0x141C68u;
        goto label_141c68;
    }
    ctx->pc = 0x141C60u;
    SET_GPR_U32(ctx, 31, 0x141C68u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141C60u, 0x141C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C68u;
label_141c68:
    // 0x141c68: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x141c68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_141c6c:
    // 0x141c6c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x141c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_141c70:
    // 0x141c70: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x141c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_141c74:
    // 0x141c74: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x141c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_141c78:
    // 0x141c78: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x141c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_141c7c:
    // 0x141c7c: 0xc136afa  jal         func_4DABE8
label_141c80:
    if (ctx->pc == 0x141C80u) {
        ctx->pc = 0x141C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C7Cu;
        // 0x141c80: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141C84u;
        goto label_141c84;
    }
    ctx->pc = 0x141C7Cu;
    SET_GPR_U32(ctx, 31, 0x141C84u);
    ctx->pc = 0x141C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C7Cu;
    // 0x141c80: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141C7Cu, 0x141C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C84u;
label_141c84:
    // 0x141c84: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x141c84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_141c88:
    // 0x141c88: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x141c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_141c8c:
    // 0x141c8c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x141c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_141c90:
    // 0x141c90: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x141c90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_141c94:
    // 0x141c94: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x141c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_141c98:
    // 0x141c98: 0xc136b24  jal         func_4DAC90
label_141c9c:
    if (ctx->pc == 0x141C9Cu) {
        ctx->pc = 0x141C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C98u;
        // 0x141c9c: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141CA0u;
        goto label_141ca0;
    }
    ctx->pc = 0x141C98u;
    SET_GPR_U32(ctx, 31, 0x141CA0u);
    ctx->pc = 0x141C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C98u;
    // 0x141c9c: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141C98u, 0x141CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141CA0u;
label_141ca0:
    // 0x141ca0: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x141ca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_141ca4:
    // 0x141ca4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x141ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_141ca8:
    // 0x141ca8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x141ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_141cac:
    // 0x141cac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x141cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_141cb0:
    // 0x141cb0: 0xc136b18  jal         func_4DAC60
label_141cb4:
    if (ctx->pc == 0x141CB4u) {
        ctx->pc = 0x141CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141CB0u;
        // 0x141cb4: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141CB8u;
        goto label_141cb8;
    }
    ctx->pc = 0x141CB0u;
    SET_GPR_U32(ctx, 31, 0x141CB8u);
    ctx->pc = 0x141CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141CB0u;
    // 0x141cb4: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141CB0u, 0x141CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141CB8u;
label_141cb8:
    // 0x141cb8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x141cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_141cbc:
    // 0x141cbc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x141cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_141cc0:
    // 0x141cc0: 0xc136b18  jal         func_4DAC60
label_141cc4:
    if (ctx->pc == 0x141CC4u) {
        ctx->pc = 0x141CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141CC0u;
        // 0x141cc4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141CC8u;
        goto label_141cc8;
    }
    ctx->pc = 0x141CC0u;
    SET_GPR_U32(ctx, 31, 0x141CC8u);
    ctx->pc = 0x141CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141CC0u;
    // 0x141cc4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141CC0u, 0x141CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141CC8u;
label_141cc8:
    // 0x141cc8: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x141cc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_141ccc:
    // 0x141ccc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x141cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_141cd0:
    // 0x141cd0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x141cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_141cd4:
    // 0x141cd4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x141cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_141cd8:
    // 0x141cd8: 0xc136b18  jal         func_4DAC60
label_141cdc:
    if (ctx->pc == 0x141CDCu) {
        ctx->pc = 0x141CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141CD8u;
        // 0x141cdc: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141CE0u;
        goto label_141ce0;
    }
    ctx->pc = 0x141CD8u;
    SET_GPR_U32(ctx, 31, 0x141CE0u);
    ctx->pc = 0x141CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141CD8u;
    // 0x141cdc: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141CD8u, 0x141CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141CE0u;
label_141ce0:
    // 0x141ce0: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x141ce0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_141ce4:
    // 0x141ce4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x141ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_141ce8:
    // 0x141ce8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x141ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_141cec:
    // 0x141cec: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
label_141cf0:
    if (ctx->pc == 0x141CF0u) {
        ctx->pc = 0x141CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141CECu;
        // 0x141cf0: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141CF4u;
        goto label_141cf4;
    }
    ctx->pc = 0x141CECu;
    {
        const bool branch_taken_0x141cec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x141CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141CECu;
        // 0x141cf0: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141cec) {
            ctx->pc = 0x141DD4u;
            goto label_141dd4;
        }
    }
    ctx->pc = 0x141CF4u;
label_141cf4:
    // 0x141cf4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x141cf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_141cf8:
    // 0x141cf8: 0x8ce347c4  lw          $v1, 0x47C4($a3)
    ctx->pc = 0x141cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18372)));
label_141cfc:
    // 0x141cfc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x141cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_141d00:
    // 0x141d00: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x141d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_141d04:
    // 0x141d04: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x141d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_141d08:
    // 0x141d08: 0x8c670040  lw          $a3, 0x40($v1)
    ctx->pc = 0x141d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_141d0c:
    // 0x141d0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x141d0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141d10:
    // 0x141d10: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x141d10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141d14:
    // 0x141d14: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x141d14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141d18:
    // 0x141d18: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x141d18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141d1c:
    // 0x141d1c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x141d1cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_141d20:
    // 0x141d20: 0x4a0003bf  vwaitq
    ctx->pc = 0x141d20u;
    // VWAITQ (Q already resolved in this runtime)
label_141d24:
    // 0x141d24: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x141d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141d28:
    // 0x141d28: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x141d28u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_141d2c:
    // 0x141d2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x141d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_141d30:
    // 0x141d30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x141d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141d34:
    // 0x141d34: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x141d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_141d38:
    // 0x141d38: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x141d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_141d3c:
    // 0x141d3c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x141d3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_141d40:
    // 0x141d40: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x141d40u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_141d44:
    // 0x141d44: 0x4a0003bf  vwaitq
    ctx->pc = 0x141d44u;
    // VWAITQ (Q already resolved in this runtime)
label_141d48:
    // 0x141d48: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x141d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_141d4c:
    // 0x141d4c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x141d4cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_141d50:
    // 0x141d50: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x141d50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_141d54:
    // 0x141d54: 0x46160040  add.s       $f1, $f0, $f22
    ctx->pc = 0x141d54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_141d58:
    // 0x141d58: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x141d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_141d5c:
    // 0x141d5c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x141d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_141d60:
    // 0x141d60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x141d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141d64:
    // 0x141d64: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x141d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_141d68:
    // 0x141d68: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x141d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_141d6c:
    // 0x141d6c: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x141d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_141d70:
    // 0x141d70: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x141d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_141d74:
    // 0x141d74: 0xc0d4336  jal         func_350CD8
label_141d78:
    if (ctx->pc == 0x141D78u) {
        ctx->pc = 0x141D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141D74u;
        // 0x141d78: 0xafa00130  sw          $zero, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141D7Cu;
        goto label_141d7c;
    }
    ctx->pc = 0x141D74u;
    SET_GPR_U32(ctx, 31, 0x141D7Cu);
    ctx->pc = 0x141D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D74u;
    // 0x141d78: 0xafa00130  sw          $zero, 0x130($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x141D74u, 0x141D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D7Cu;
label_141d7c:
    // 0x141d7c: 0xc7ac0134  lwc1        $f12, 0x134($sp)
    ctx->pc = 0x141d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_141d80:
    // 0x141d80: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x141d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_141d84:
    // 0x141d84: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x141d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_141d88:
    // 0x141d88: 0x46166301  sub.s       $f12, $f12, $f22
    ctx->pc = 0x141d88u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[22]);
label_141d8c:
    // 0x141d8c: 0xc136b24  jal         func_4DAC90
label_141d90:
    if (ctx->pc == 0x141D90u) {
        ctx->pc = 0x141D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141D8Cu;
        // 0x141d90: 0x46176301  sub.s       $f12, $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x141D94u;
        goto label_141d94;
    }
    ctx->pc = 0x141D8Cu;
    SET_GPR_U32(ctx, 31, 0x141D94u);
    ctx->pc = 0x141D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D8Cu;
    // 0x141d90: 0x46176301  sub.s       $f12, $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141D8Cu, 0x141D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D94u;
label_141d94:
    // 0x141d94: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x141d94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_141d98:
    // 0x141d98: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x141d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_141d9c:
    // 0x141d9c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x141d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_141da0:
    // 0x141da0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x141da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_141da4:
    // 0x141da4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x141da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_141da8:
    // 0x141da8: 0xc136b18  jal         func_4DAC60
label_141dac:
    if (ctx->pc == 0x141DACu) {
        ctx->pc = 0x141DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DA8u;
        // 0x141dac: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141DB0u;
        goto label_141db0;
    }
    ctx->pc = 0x141DA8u;
    SET_GPR_U32(ctx, 31, 0x141DB0u);
    ctx->pc = 0x141DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DA8u;
    // 0x141dac: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141DA8u, 0x141DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DB0u;
label_141db0:
    // 0x141db0: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x141db0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_141db4:
    // 0x141db4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x141db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_141db8:
    // 0x141db8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x141db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_141dbc:
    // 0x141dbc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x141dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_141dc0:
    // 0x141dc0: 0xc136b18  jal         func_4DAC60
label_141dc4:
    if (ctx->pc == 0x141DC4u) {
        ctx->pc = 0x141DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DC0u;
        // 0x141dc4: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141DC8u;
        goto label_141dc8;
    }
    ctx->pc = 0x141DC0u;
    SET_GPR_U32(ctx, 31, 0x141DC8u);
    ctx->pc = 0x141DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DC0u;
    // 0x141dc4: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141DC0u, 0x141DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DC8u;
label_141dc8:
    // 0x141dc8: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x141dc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_141dcc:
    // 0x141dcc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x141dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_141dd0:
    // 0x141dd0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x141dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_141dd4:
    // 0x141dd4: 0x2d1b025  or          $s6, $s6, $s1
    ctx->pc = 0x141dd4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 17));
label_141dd8:
    // 0x141dd8: 0x924303ed  lbu         $v1, 0x3ED($s2)
    ctx->pc = 0x141dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1005)));
label_141ddc:
    // 0x141ddc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x141ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_141de0:
    // 0x141de0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_141de4:
    if (ctx->pc == 0x141DE4u) {
        ctx->pc = 0x141DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DE0u;
        // 0x141de4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141DE8u;
        goto label_141de8;
    }
    ctx->pc = 0x141DE0u;
    {
        const bool branch_taken_0x141de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x141DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DE0u;
        // 0x141de4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141de0) {
            ctx->pc = 0x141E00u;
            goto label_141e00;
        }
    }
    ctx->pc = 0x141DE8u;
label_141de8:
    // 0x141de8: 0xc047e6c  jal         func_11F9B0
label_141dec:
    if (ctx->pc == 0x141DECu) {
        ctx->pc = 0x141DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DE8u;
        // 0x141dec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141DF0u;
        goto label_141df0;
    }
    ctx->pc = 0x141DE8u;
    SET_GPR_U32(ctx, 31, 0x141DF0u);
    ctx->pc = 0x141DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DE8u;
    // 0x141dec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x141DE8u, 0x141DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DF0u;
label_141df0:
    // 0x141df0: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
label_141df4:
    if (ctx->pc == 0x141DF4u) {
        ctx->pc = 0x141DF8u;
        goto label_141df8;
    }
    ctx->pc = 0x141DF0u;
    {
        const bool branch_taken_0x141df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x141df0) {
            ctx->pc = 0x141E00u;
            goto label_141e00;
        }
    }
    ctx->pc = 0x141DF8u;
label_141df8:
    // 0x141df8: 0x924203e5  lbu         $v0, 0x3E5($s2)
    ctx->pc = 0x141df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 997)));
label_141dfc:
    // 0x141dfc: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x141dfcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_141e00:
    // 0x141e00: 0x56c00004  bnel        $s6, $zero, . + 4 + (0x4 << 2)
label_141e04:
    if (ctx->pc == 0x141E04u) {
        ctx->pc = 0x141E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E00u;
        // 0x141e04: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141E08u;
        goto label_141e08;
    }
    ctx->pc = 0x141E00u;
    {
        const bool branch_taken_0x141e00 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e00) {
            ctx->pc = 0x141E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141E00u;
            // 0x141e04: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141E14u;
            goto label_141e14;
        }
    }
    ctx->pc = 0x141E08u;
label_141e08:
    // 0x141e08: 0x520000cd  beql        $s0, $zero, . + 4 + (0xCD << 2)
label_141e0c:
    if (ctx->pc == 0x141E0Cu) {
        ctx->pc = 0x141E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E08u;
        // 0x141e0c: 0x8e420348  lw          $v0, 0x348($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141E10u;
        goto label_141e10;
    }
    ctx->pc = 0x141E08u;
    {
        const bool branch_taken_0x141e08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x141e08) {
            ctx->pc = 0x141E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141E08u;
            // 0x141e0c: 0x8e420348  lw          $v0, 0x348($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142140u;
            goto label_142140;
        }
    }
    ctx->pc = 0x141E10u;
label_141e10:
    // 0x141e10: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x141e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_141e14:
    // 0x141e14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x141e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141e18:
    // 0x141e18: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x141e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_141e1c:
    // 0x141e1c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x141e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_141e20:
    // 0x141e20: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x141e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_141e24:
    // 0x141e24: 0x40f809  jalr        $v0
label_141e28:
    if (ctx->pc == 0x141E28u) {
        ctx->pc = 0x141E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E24u;
        // 0x141e28: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141E2Cu;
        goto label_141e2c;
    }
    ctx->pc = 0x141E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141E2Cu);
        ctx->pc = 0x141E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E24u;
        // 0x141e28: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141E24u, 0x141E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141E2Cu;
label_141e2c:
    // 0x141e2c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x141e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_141e30:
    // 0x141e30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x141e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_141e34:
    // 0x141e34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x141e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141e38:
    // 0x141e38: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x141e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_141e3c:
    // 0x141e3c: 0xc136b24  jal         func_4DAC90
label_141e40:
    if (ctx->pc == 0x141E40u) {
        ctx->pc = 0x141E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E3Cu;
        // 0x141e40: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141E44u;
        goto label_141e44;
    }
    ctx->pc = 0x141E3Cu;
    SET_GPR_U32(ctx, 31, 0x141E44u);
    ctx->pc = 0x141E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E3Cu;
    // 0x141e40: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141E3Cu, 0x141E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141E44u;
label_141e44:
    // 0x141e44: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x141e44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_141e48:
    // 0x141e48: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x141e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_141e4c:
    // 0x141e4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141e50:
    // 0x141e50: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x141e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_141e54:
    // 0x141e54: 0xc136b18  jal         func_4DAC60
label_141e58:
    if (ctx->pc == 0x141E58u) {
        ctx->pc = 0x141E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E54u;
        // 0x141e58: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141E5Cu;
        goto label_141e5c;
    }
    ctx->pc = 0x141E54u;
    SET_GPR_U32(ctx, 31, 0x141E5Cu);
    ctx->pc = 0x141E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E54u;
    // 0x141e58: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x141E54u, 0x141E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141E5Cu;
label_141e5c:
    // 0x141e5c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x141e5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_141e60:
    // 0x141e60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x141e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_141e64:
    // 0x141e64: 0x924303ed  lbu         $v1, 0x3ED($s2)
    ctx->pc = 0x141e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1005)));
label_141e68:
    // 0x141e68: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_141e6c:
    if (ctx->pc == 0x141E6Cu) {
        ctx->pc = 0x141E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E68u;
        // 0x141e6c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141E70u;
        goto label_141e70;
    }
    ctx->pc = 0x141E68u;
    {
        const bool branch_taken_0x141e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x141E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E68u;
        // 0x141e6c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e68) {
            ctx->pc = 0x141E7Cu;
            goto label_141e7c;
        }
    }
    ctx->pc = 0x141E70u;
label_141e70:
    // 0x141e70: 0xc7ba00a8  lwc1        $f26, 0xA8($sp)
    ctx->pc = 0x141e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_141e74:
    // 0x141e74: 0x10000002  b           . + 4 + (0x2 << 2)
label_141e78:
    if (ctx->pc == 0x141E78u) {
        ctx->pc = 0x141E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E74u;
        // 0x141e78: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141E7Cu;
        goto label_141e7c;
    }
    ctx->pc = 0x141E74u;
    {
        const bool branch_taken_0x141e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E74u;
        // 0x141e78: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e74) {
            ctx->pc = 0x141E80u;
            goto label_141e80;
        }
    }
    ctx->pc = 0x141E7Cu;
label_141e7c:
    // 0x141e7c: 0xe7ba00a8  swc1        $f26, 0xA8($sp)
    ctx->pc = 0x141e7cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_141e80:
    // 0x141e80: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x141e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_141e84:
    // 0x141e84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x141e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_141e88:
    // 0x141e88: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x141e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_141e8c:
    // 0x141e8c: 0xc136afa  jal         func_4DABE8
label_141e90:
    if (ctx->pc == 0x141E90u) {
        ctx->pc = 0x141E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E8Cu;
        // 0x141e90: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141E94u;
        goto label_141e94;
    }
    ctx->pc = 0x141E8Cu;
    SET_GPR_U32(ctx, 31, 0x141E94u);
    ctx->pc = 0x141E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E8Cu;
    // 0x141e90: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x141E8Cu, 0x141E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141E94u;
label_141e94:
    // 0x141e94: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x141e94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_141e98:
    // 0x141e98: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x141e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_141e9c:
    // 0x141e9c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x141e9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141ea0:
    // 0x141ea0: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x141ea0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141ea4:
    // 0x141ea4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x141ea4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141ea8:
    // 0x141ea8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x141ea8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_141eac:
    // 0x141eac: 0x4a0003bf  vwaitq
    ctx->pc = 0x141eacu;
    // VWAITQ (Q already resolved in this runtime)
label_141eb0:
    // 0x141eb0: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x141eb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141eb4:
    // 0x141eb4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x141eb4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_141eb8:
    // 0x141eb8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x141eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_141ebc:
    // 0x141ebc: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x141ebcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_141ec0:
    // 0x141ec0: 0x84640208  lh          $a0, 0x208($v1)
    ctx->pc = 0x141ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 520)));
label_141ec4:
    // 0x141ec4: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x141ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_141ec8:
    // 0x141ec8: 0x40f809  jalr        $v0
label_141ecc:
    if (ctx->pc == 0x141ECCu) {
        ctx->pc = 0x141ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EC8u;
        // 0x141ecc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141ED0u;
        goto label_141ed0;
    }
    ctx->pc = 0x141EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141ED0u);
        ctx->pc = 0x141ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EC8u;
        // 0x141ecc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141EC8u, 0x141ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141ED0u;
label_141ed0:
    // 0x141ed0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x141ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_141ed4:
    // 0x141ed4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x141ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_141ed8:
    // 0x141ed8: 0x36280200  ori         $t0, $s1, 0x200
    ctx->pc = 0x141ed8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)512);
label_141edc:
    // 0x141edc: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x141edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_141ee0:
    // 0x141ee0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x141ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_141ee4:
    // 0x141ee4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x141ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_141ee8:
    // 0x141ee8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x141ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_141eec:
    // 0x141eec: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x141eecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_141ef0:
    // 0x141ef0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x141ef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_141ef4:
    // 0x141ef4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x141ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_141ef8:
    // 0x141ef8: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x141ef8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_141efc:
    // 0x141efc: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x141efcu;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
label_141f00:
    // 0x141f00: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x141f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141f04:
    // 0x141f04: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x141f04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_141f08:
    // 0x141f08: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x141f08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_141f0c:
    // 0x141f0c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x141f0cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_141f10:
    // 0x141f10: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x141f10u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_141f14:
    // 0x141f14: 0x4a0003bf  vwaitq
    ctx->pc = 0x141f14u;
    // VWAITQ (Q already resolved in this runtime)
label_141f18:
    // 0x141f18: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x141f18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_141f1c:
    // 0x141f1c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x141f1cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_141f20:
    // 0x141f20: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x141f20u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_141f24:
    // 0x141f24: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x141f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_141f28:
    // 0x141f28: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x141f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_141f2c:
    // 0x141f2c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x141f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_141f30:
    // 0x141f30: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x141f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_141f34:
    // 0x141f34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x141f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141f38:
    // 0x141f38: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x141f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_141f3c:
    // 0x141f3c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x141f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_141f40:
    // 0x141f40: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x141f40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_141f44:
    // 0x141f44: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x141f44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_141f48:
    // 0x141f48: 0xc0d4336  jal         func_350CD8
label_141f4c:
    if (ctx->pc == 0x141F4Cu) {
        ctx->pc = 0x141F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F48u;
        // 0x141f4c: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141F50u;
        goto label_141f50;
    }
    ctx->pc = 0x141F48u;
    SET_GPR_U32(ctx, 31, 0x141F50u);
    ctx->pc = 0x141F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141F48u;
    // 0x141f4c: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x141F48u, 0x141F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F50u;
label_141f50:
    // 0x141f50: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x141f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_141f54:
    // 0x141f54: 0x14500031  bne         $v0, $s0, . + 4 + (0x31 << 2)
label_141f58:
    if (ctx->pc == 0x141F58u) {
        ctx->pc = 0x141F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F54u;
        // 0x141f58: 0x7ba20050  lq          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141F5Cu;
        goto label_141f5c;
    }
    ctx->pc = 0x141F54u;
    {
        const bool branch_taken_0x141f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x141F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F54u;
        // 0x141f58: 0x7ba20050  lq          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f54) {
            ctx->pc = 0x14201Cu;
            goto label_14201c;
        }
    }
    ctx->pc = 0x141F5Cu;
label_141f5c:
    // 0x141f5c: 0x4617b300  add.s       $f12, $f22, $f23
    ctx->pc = 0x141f5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
label_141f60:
    // 0x141f60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x141f60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141f64:
    // 0x141f64: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x141f64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_141f68:
    // 0x141f68: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x141f68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_141f6c:
    // 0x141f6c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x141f6cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_141f70:
    // 0x141f70: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x141f70u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_141f74:
    // 0x141f74: 0x4a0003bf  vwaitq
    ctx->pc = 0x141f74u;
    // VWAITQ (Q already resolved in this runtime)
label_141f78:
    // 0x141f78: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x141f78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_141f7c:
    // 0x141f7c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x141f7cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_141f80:
    // 0x141f80: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x141f80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_141f84:
    // 0x141f84: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x141f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_141f88:
    // 0x141f88: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x141f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_141f8c:
    // 0x141f8c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x141f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_141f90:
    // 0x141f90: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x141f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_141f94:
    // 0x141f94: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x141f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_141f98:
    // 0x141f98: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x141f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_141f9c:
    // 0x141f9c: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x141f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_141fa0:
    // 0x141fa0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x141fa0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_141fa4:
    // 0x141fa4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x141fa4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_141fa8:
    // 0x141fa8: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x141fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_141fac:
    // 0x141fac: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x141facu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_141fb0:
    // 0x141fb0: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x141fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_141fb4:
    // 0x141fb4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x141fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_141fb8:
    // 0x141fb8: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x141fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_141fbc:
    // 0x141fbc: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x141fbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_141fc0:
    // 0x141fc0: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x141fc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_141fc4:
    // 0x141fc4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x141fc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_141fc8:
    // 0x141fc8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x141fc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_141fcc:
    // 0x141fcc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x141fccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_141fd0:
    // 0x141fd0: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x141fd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141fd4:
    // 0x141fd4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x141fd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_141fd8:
    // 0x141fd8: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x141fd8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_141fdc:
    // 0x141fdc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x141fdcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_141fe0:
    // 0x141fe0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x141fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_141fe4:
    // 0x141fe4: 0x0  nop
    ctx->pc = 0x141fe4u;
    // NOP
label_141fe8:
    // 0x141fe8: 0x0  nop
    ctx->pc = 0x141fe8u;
    // NOP
label_141fec:
    // 0x141fec: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x141fecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_141ff0:
    // 0x141ff0: 0xc136b24  jal         func_4DAC90
label_141ff4:
    if (ctx->pc == 0x141FF4u) {
        ctx->pc = 0x141FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FF0u;
        // 0x141ff4: 0x460c2301  sub.s       $f12, $f4, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x141FF8u;
        goto label_141ff8;
    }
    ctx->pc = 0x141FF0u;
    SET_GPR_U32(ctx, 31, 0x141FF8u);
    ctx->pc = 0x141FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141FF0u;
    // 0x141ff4: 0x460c2301  sub.s       $f12, $f4, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x141FF0u, 0x141FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141FF8u;
label_141ff8:
    // 0x141ff8: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x141ff8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_141ffc:
    // 0x141ffc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x141ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_142000:
    // 0x142000: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x142000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_142004:
    // 0x142004: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x142004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_142008:
    // 0x142008: 0xc136b18  jal         func_4DAC60
label_14200c:
    if (ctx->pc == 0x14200Cu) {
        ctx->pc = 0x14200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142008u;
        // 0x14200c: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142010u;
        goto label_142010;
    }
    ctx->pc = 0x142008u;
    SET_GPR_U32(ctx, 31, 0x142010u);
    ctx->pc = 0x14200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142008u;
    // 0x14200c: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x142008u, 0x142010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142010u;
label_142010:
    // 0x142010: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x142010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_142014:
    // 0x142014: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x142014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_142018:
    // 0x142018: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x142018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_14201c:
    // 0x14201c: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
label_142020:
    if (ctx->pc == 0x142020u) {
        ctx->pc = 0x142020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14201Cu;
        // 0x142020: 0xe7ba0008  swc1        $f26, 0x8($sp) (Delay Slot)
        { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x142024u;
        goto label_142024;
    }
    ctx->pc = 0x14201Cu;
    {
        const bool branch_taken_0x14201c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x142020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14201Cu;
        // 0x142020: 0xe7ba0008  swc1        $f26, 0x8($sp) (Delay Slot)
        { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14201c) {
            ctx->pc = 0x142030u;
            goto label_142030;
        }
    }
    ctx->pc = 0x142024u;
label_142024:
    // 0x142024: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x142024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_142028:
    // 0x142028: 0x54500045  bnel        $v0, $s0, . + 4 + (0x45 << 2)
label_14202c:
    if (ctx->pc == 0x14202Cu) {
        ctx->pc = 0x14202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142028u;
        // 0x14202c: 0x8e420348  lw          $v0, 0x348($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142030u;
        goto label_142030;
    }
    ctx->pc = 0x142028u;
    {
        const bool branch_taken_0x142028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x142028) {
            ctx->pc = 0x14202Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142028u;
            // 0x14202c: 0x8e420348  lw          $v0, 0x348($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142140u;
            goto label_142140;
        }
    }
    ctx->pc = 0x142030u;
label_142030:
    // 0x142030: 0x8fa60240  lw          $a2, 0x240($sp)
    ctx->pc = 0x142030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_142034:
    // 0x142034: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x142034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_142038:
    // 0x142038: 0xc136afa  jal         func_4DABE8
label_14203c:
    if (ctx->pc == 0x14203Cu) {
        ctx->pc = 0x14203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142038u;
        // 0x14203c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142040u;
        goto label_142040;
    }
    ctx->pc = 0x142038u;
    SET_GPR_U32(ctx, 31, 0x142040u);
    ctx->pc = 0x14203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142038u;
    // 0x14203c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x142038u, 0x142040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142040u;
label_142040:
    // 0x142040: 0x461bc801  sub.s       $f0, $f25, $f27
    ctx->pc = 0x142040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[27]);
label_142044:
    // 0x142044: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x142044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_142048:
    // 0x142048: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x142048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14204c:
    // 0x14204c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_142050:
    // 0x142050: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x142050u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_142054:
    // 0x142054: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x142054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
label_142058:
    // 0x142058: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x142058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_14205c:
    // 0x14205c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x14205cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_142060:
    // 0x142060: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x142060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_142064:
    // 0x142064: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x142064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_142068:
    // 0x142068: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x142068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14206c:
    // 0x14206c: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x14206cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_142070:
    // 0x142070: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x142070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142074:
    // 0x142074: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x142074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_142078:
    // 0x142078: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x142078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14207c:
    // 0x14207c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x14207cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_142080:
    // 0x142080: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x142080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_142084:
    // 0x142084: 0xe7b90028  swc1        $f25, 0x28($sp)
    ctx->pc = 0x142084u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_142088:
    // 0x142088: 0xc0d4336  jal         func_350CD8
label_14208c:
    if (ctx->pc == 0x14208Cu) {
        ctx->pc = 0x14208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142088u;
        // 0x14208c: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142090u;
        goto label_142090;
    }
    ctx->pc = 0x142088u;
    SET_GPR_U32(ctx, 31, 0x142090u);
    ctx->pc = 0x14208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142088u;
    // 0x14208c: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x142088u, 0x142090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142090u;
label_142090:
    // 0x142090: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x142090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_142094:
    // 0x142094: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_142098:
    if (ctx->pc == 0x142098u) {
        ctx->pc = 0x142098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142094u;
        // 0x142098: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14209Cu;
        goto label_14209c;
    }
    ctx->pc = 0x142094u;
    {
        const bool branch_taken_0x142094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142094u;
        // 0x142098: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142094) {
            ctx->pc = 0x1420B8u;
            goto label_1420b8;
        }
    }
    ctx->pc = 0x14209Cu;
label_14209c:
    // 0x14209c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x14209cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1420a0:
    // 0x1420a0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1420a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1420a4:
    // 0x1420a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1420a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1420a8:
    // 0x1420a8: 0x0  nop
    ctx->pc = 0x1420a8u;
    // NOP
label_1420ac:
    // 0x1420ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1420acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1420b0:
    // 0x1420b0: 0x4600c801  sub.s       $f0, $f25, $f0
    ctx->pc = 0x1420b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
label_1420b4:
    // 0x1420b4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1420b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1420b8:
    // 0x1420b8: 0x3405a000  ori         $a1, $zero, 0xA000
    ctx->pc = 0x1420b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_1420bc:
    // 0x1420bc: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x1420bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_1420c0:
    // 0x1420c0: 0xc08997c  jal         func_2265F0
label_1420c4:
    if (ctx->pc == 0x1420C4u) {
        ctx->pc = 0x1420C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420C0u;
        // 0x1420c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1420C8u;
        goto label_1420c8;
    }
    ctx->pc = 0x1420C0u;
    SET_GPR_U32(ctx, 31, 0x1420C8u);
    ctx->pc = 0x1420C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1420C0u;
    // 0x1420c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x1420C0u, 0x1420C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1420C8u;
label_1420c8:
    // 0x1420c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1420cc:
    if (ctx->pc == 0x1420CCu) {
        ctx->pc = 0x1420CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420C8u;
        // 0x1420cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1420D0u;
        goto label_1420d0;
    }
    ctx->pc = 0x1420C8u;
    {
        const bool branch_taken_0x1420c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1420CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420C8u;
        // 0x1420cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1420c8) {
            ctx->pc = 0x1420FCu;
            goto label_1420fc;
        }
    }
    ctx->pc = 0x1420D0u;
label_1420d0:
    // 0x1420d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1420d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1420d4:
    // 0x1420d4: 0xc08f824  jal         func_23E090
label_1420d8:
    if (ctx->pc == 0x1420D8u) {
        ctx->pc = 0x1420D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420D4u;
        // 0x1420d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1420DCu;
        goto label_1420dc;
    }
    ctx->pc = 0x1420D4u;
    SET_GPR_U32(ctx, 31, 0x1420DCu);
    ctx->pc = 0x1420D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1420D4u;
    // 0x1420d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E090u, 0x1420D4u, 0x1420DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1420DCu;
label_1420dc:
    // 0x1420dc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1420dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1420e0:
    // 0x1420e0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1420e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1420e4:
    // 0x1420e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1420e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1420e8:
    // 0x1420e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1420e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1420ec:
    // 0x1420ec: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1420ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1420f0:
    // 0x1420f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1420f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1420f4:
    // 0x1420f4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1420f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1420f8:
    // 0x1420f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1420f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1420fc:
    // 0x1420fc: 0x8fa7023c  lw          $a3, 0x23C($sp)
    ctx->pc = 0x1420fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_142100:
    // 0x142100: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x142100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_142104:
    // 0x142104: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x142104u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_142108:
    // 0x142108: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x142108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_14210c:
    // 0x14210c: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x14210cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_142110:
    // 0x142110: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x142110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_142114:
    // 0x142114: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x142114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
label_142118:
    // 0x142118: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x142118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_14211c:
    // 0x14211c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14211cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_142120:
    // 0x142120: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x142120u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_142124:
    // 0x142124: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x142124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_142128:
    // 0x142128: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x142128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14212c:
    // 0x14212c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x14212cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_142130:
    // 0x142130: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x142130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_142134:
    // 0x142134: 0x40f809  jalr        $v0
label_142138:
    if (ctx->pc == 0x142138u) {
        ctx->pc = 0x142138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142134u;
        // 0x142138: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14213Cu;
        goto label_14213c;
    }
    ctx->pc = 0x142134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14213Cu);
        ctx->pc = 0x142138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142134u;
        // 0x142138: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142134u, 0x14213Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14213Cu;
label_14213c:
    // 0x14213c: 0x8e420348  lw          $v0, 0x348($s2)
    ctx->pc = 0x14213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 840)));
label_142140:
    // 0x142140: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x142140u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_142144:
    // 0x142144: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x142144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_142148:
    // 0x142148: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_14214c:
    if (ctx->pc == 0x14214Cu) {
        ctx->pc = 0x14214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142148u;
        // 0x14214c: 0x8fa30230  lw          $v1, 0x230($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142150u;
        goto label_142150;
    }
    ctx->pc = 0x142148u;
    {
        const bool branch_taken_0x142148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142148u;
        // 0x14214c: 0x8fa30230  lw          $v1, 0x230($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142148) {
            ctx->pc = 0x142164u;
            goto label_142164;
        }
    }
    ctx->pc = 0x142150u;
label_142150:
    // 0x142150: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x142150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_142154:
    // 0x142154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_142158:
    // 0x142158: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x142158u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14215c:
    // 0x14215c: 0x1660fb82  bnez        $s3, . + 4 + (-0x47E << 2)
label_142160:
    if (ctx->pc == 0x142160u) {
        ctx->pc = 0x142160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14215Cu;
        // 0x142160: 0x26620090  addiu       $v0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142164u;
        goto label_142164;
    }
    ctx->pc = 0x14215Cu;
    {
        const bool branch_taken_0x14215c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x142160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14215Cu;
        // 0x142160: 0x26620090  addiu       $v0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14215c) {
            ctx->pc = 0x140F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140f68;
        }
    }
    ctx->pc = 0x142164u;
label_142164:
    // 0x142164: 0x7bb002e0  lq          $s0, 0x2E0($sp)
    ctx->pc = 0x142164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_142168:
    // 0x142168: 0x7bb102d0  lq          $s1, 0x2D0($sp)
    ctx->pc = 0x142168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_14216c:
    // 0x14216c: 0x7bb202c0  lq          $s2, 0x2C0($sp)
    ctx->pc = 0x14216cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_142170:
    // 0x142170: 0x7bb302b0  lq          $s3, 0x2B0($sp)
    ctx->pc = 0x142170u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_142174:
    // 0x142174: 0x7bb402a0  lq          $s4, 0x2A0($sp)
    ctx->pc = 0x142174u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_142178:
    // 0x142178: 0x7bb50290  lq          $s5, 0x290($sp)
    ctx->pc = 0x142178u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_14217c:
    // 0x14217c: 0x7bb60280  lq          $s6, 0x280($sp)
    ctx->pc = 0x14217cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_142180:
    // 0x142180: 0x7bb70270  lq          $s7, 0x270($sp)
    ctx->pc = 0x142180u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_142184:
    // 0x142184: 0x7bbe0260  lq          $fp, 0x260($sp)
    ctx->pc = 0x142184u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_142188:
    // 0x142188: 0xdfbf0250  ld          $ra, 0x250($sp)
    ctx->pc = 0x142188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 592)));
label_14218c:
    // 0x14218c: 0xc7bb0328  lwc1        $f27, 0x328($sp)
    ctx->pc = 0x14218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_142190:
    // 0x142190: 0xc7ba0320  lwc1        $f26, 0x320($sp)
    ctx->pc = 0x142190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_142194:
    // 0x142194: 0xc7b90318  lwc1        $f25, 0x318($sp)
    ctx->pc = 0x142194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_142198:
    // 0x142198: 0xc7b80310  lwc1        $f24, 0x310($sp)
    ctx->pc = 0x142198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_14219c:
    // 0x14219c: 0xc7b70308  lwc1        $f23, 0x308($sp)
    ctx->pc = 0x14219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1421a0:
    // 0x1421a0: 0xc7b60300  lwc1        $f22, 0x300($sp)
    ctx->pc = 0x1421a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1421a4:
    // 0x1421a4: 0xc7b502f8  lwc1        $f21, 0x2F8($sp)
    ctx->pc = 0x1421a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1421a8:
    // 0x1421a8: 0xc7b402f0  lwc1        $f20, 0x2F0($sp)
    ctx->pc = 0x1421a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1421ac:
    // 0x1421ac: 0x3e00008  jr          $ra
label_1421b0:
    if (ctx->pc == 0x1421B0u) {
        ctx->pc = 0x1421B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1421ACu;
        // 0x1421b0: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1421B4u;
        goto label_1421b4;
    }
    ctx->pc = 0x1421ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1421B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1421ACu;
        // 0x1421b0: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1421ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1421B4u;
label_1421b4:
    // 0x1421b4: 0x0  nop
    ctx->pc = 0x1421b4u;
    // NOP
    ctx->pc = 0x1421b8u;
}
