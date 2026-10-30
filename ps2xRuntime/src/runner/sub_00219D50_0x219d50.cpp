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

// Function: sub_00219D50
// Address: 0x219d50 - 0x21a490
void sub_00219D50_0x219d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219D50_0x219d50");
#endif

    switch (ctx->pc) {
        case 0x219d50u: goto label_219d50;
        case 0x219d54u: goto label_219d54;
        case 0x219d58u: goto label_219d58;
        case 0x219d5cu: goto label_219d5c;
        case 0x219d60u: goto label_219d60;
        case 0x219d64u: goto label_219d64;
        case 0x219d68u: goto label_219d68;
        case 0x219d6cu: goto label_219d6c;
        case 0x219d70u: goto label_219d70;
        case 0x219d74u: goto label_219d74;
        case 0x219d78u: goto label_219d78;
        case 0x219d7cu: goto label_219d7c;
        case 0x219d80u: goto label_219d80;
        case 0x219d84u: goto label_219d84;
        case 0x219d88u: goto label_219d88;
        case 0x219d8cu: goto label_219d8c;
        case 0x219d90u: goto label_219d90;
        case 0x219d94u: goto label_219d94;
        case 0x219d98u: goto label_219d98;
        case 0x219d9cu: goto label_219d9c;
        case 0x219da0u: goto label_219da0;
        case 0x219da4u: goto label_219da4;
        case 0x219da8u: goto label_219da8;
        case 0x219dacu: goto label_219dac;
        case 0x219db0u: goto label_219db0;
        case 0x219db4u: goto label_219db4;
        case 0x219db8u: goto label_219db8;
        case 0x219dbcu: goto label_219dbc;
        case 0x219dc0u: goto label_219dc0;
        case 0x219dc4u: goto label_219dc4;
        case 0x219dc8u: goto label_219dc8;
        case 0x219dccu: goto label_219dcc;
        case 0x219dd0u: goto label_219dd0;
        case 0x219dd4u: goto label_219dd4;
        case 0x219dd8u: goto label_219dd8;
        case 0x219ddcu: goto label_219ddc;
        case 0x219de0u: goto label_219de0;
        case 0x219de4u: goto label_219de4;
        case 0x219de8u: goto label_219de8;
        case 0x219decu: goto label_219dec;
        case 0x219df0u: goto label_219df0;
        case 0x219df4u: goto label_219df4;
        case 0x219df8u: goto label_219df8;
        case 0x219dfcu: goto label_219dfc;
        case 0x219e00u: goto label_219e00;
        case 0x219e04u: goto label_219e04;
        case 0x219e08u: goto label_219e08;
        case 0x219e0cu: goto label_219e0c;
        case 0x219e10u: goto label_219e10;
        case 0x219e14u: goto label_219e14;
        case 0x219e18u: goto label_219e18;
        case 0x219e1cu: goto label_219e1c;
        case 0x219e20u: goto label_219e20;
        case 0x219e24u: goto label_219e24;
        case 0x219e28u: goto label_219e28;
        case 0x219e2cu: goto label_219e2c;
        case 0x219e30u: goto label_219e30;
        case 0x219e34u: goto label_219e34;
        case 0x219e38u: goto label_219e38;
        case 0x219e3cu: goto label_219e3c;
        case 0x219e40u: goto label_219e40;
        case 0x219e44u: goto label_219e44;
        case 0x219e48u: goto label_219e48;
        case 0x219e4cu: goto label_219e4c;
        case 0x219e50u: goto label_219e50;
        case 0x219e54u: goto label_219e54;
        case 0x219e58u: goto label_219e58;
        case 0x219e5cu: goto label_219e5c;
        case 0x219e60u: goto label_219e60;
        case 0x219e64u: goto label_219e64;
        case 0x219e68u: goto label_219e68;
        case 0x219e6cu: goto label_219e6c;
        case 0x219e70u: goto label_219e70;
        case 0x219e74u: goto label_219e74;
        case 0x219e78u: goto label_219e78;
        case 0x219e7cu: goto label_219e7c;
        case 0x219e80u: goto label_219e80;
        case 0x219e84u: goto label_219e84;
        case 0x219e88u: goto label_219e88;
        case 0x219e8cu: goto label_219e8c;
        case 0x219e90u: goto label_219e90;
        case 0x219e94u: goto label_219e94;
        case 0x219e98u: goto label_219e98;
        case 0x219e9cu: goto label_219e9c;
        case 0x219ea0u: goto label_219ea0;
        case 0x219ea4u: goto label_219ea4;
        case 0x219ea8u: goto label_219ea8;
        case 0x219eacu: goto label_219eac;
        case 0x219eb0u: goto label_219eb0;
        case 0x219eb4u: goto label_219eb4;
        case 0x219eb8u: goto label_219eb8;
        case 0x219ebcu: goto label_219ebc;
        case 0x219ec0u: goto label_219ec0;
        case 0x219ec4u: goto label_219ec4;
        case 0x219ec8u: goto label_219ec8;
        case 0x219eccu: goto label_219ecc;
        case 0x219ed0u: goto label_219ed0;
        case 0x219ed4u: goto label_219ed4;
        case 0x219ed8u: goto label_219ed8;
        case 0x219edcu: goto label_219edc;
        case 0x219ee0u: goto label_219ee0;
        case 0x219ee4u: goto label_219ee4;
        case 0x219ee8u: goto label_219ee8;
        case 0x219eecu: goto label_219eec;
        case 0x219ef0u: goto label_219ef0;
        case 0x219ef4u: goto label_219ef4;
        case 0x219ef8u: goto label_219ef8;
        case 0x219efcu: goto label_219efc;
        case 0x219f00u: goto label_219f00;
        case 0x219f04u: goto label_219f04;
        case 0x219f08u: goto label_219f08;
        case 0x219f0cu: goto label_219f0c;
        case 0x219f10u: goto label_219f10;
        case 0x219f14u: goto label_219f14;
        case 0x219f18u: goto label_219f18;
        case 0x219f1cu: goto label_219f1c;
        case 0x219f20u: goto label_219f20;
        case 0x219f24u: goto label_219f24;
        case 0x219f28u: goto label_219f28;
        case 0x219f2cu: goto label_219f2c;
        case 0x219f30u: goto label_219f30;
        case 0x219f34u: goto label_219f34;
        case 0x219f38u: goto label_219f38;
        case 0x219f3cu: goto label_219f3c;
        case 0x219f40u: goto label_219f40;
        case 0x219f44u: goto label_219f44;
        case 0x219f48u: goto label_219f48;
        case 0x219f4cu: goto label_219f4c;
        case 0x219f50u: goto label_219f50;
        case 0x219f54u: goto label_219f54;
        case 0x219f58u: goto label_219f58;
        case 0x219f5cu: goto label_219f5c;
        case 0x219f60u: goto label_219f60;
        case 0x219f64u: goto label_219f64;
        case 0x219f68u: goto label_219f68;
        case 0x219f6cu: goto label_219f6c;
        case 0x219f70u: goto label_219f70;
        case 0x219f74u: goto label_219f74;
        case 0x219f78u: goto label_219f78;
        case 0x219f7cu: goto label_219f7c;
        case 0x219f80u: goto label_219f80;
        case 0x219f84u: goto label_219f84;
        case 0x219f88u: goto label_219f88;
        case 0x219f8cu: goto label_219f8c;
        case 0x219f90u: goto label_219f90;
        case 0x219f94u: goto label_219f94;
        case 0x219f98u: goto label_219f98;
        case 0x219f9cu: goto label_219f9c;
        case 0x219fa0u: goto label_219fa0;
        case 0x219fa4u: goto label_219fa4;
        case 0x219fa8u: goto label_219fa8;
        case 0x219facu: goto label_219fac;
        case 0x219fb0u: goto label_219fb0;
        case 0x219fb4u: goto label_219fb4;
        case 0x219fb8u: goto label_219fb8;
        case 0x219fbcu: goto label_219fbc;
        case 0x219fc0u: goto label_219fc0;
        case 0x219fc4u: goto label_219fc4;
        case 0x219fc8u: goto label_219fc8;
        case 0x219fccu: goto label_219fcc;
        case 0x219fd0u: goto label_219fd0;
        case 0x219fd4u: goto label_219fd4;
        case 0x219fd8u: goto label_219fd8;
        case 0x219fdcu: goto label_219fdc;
        case 0x219fe0u: goto label_219fe0;
        case 0x219fe4u: goto label_219fe4;
        case 0x219fe8u: goto label_219fe8;
        case 0x219fecu: goto label_219fec;
        case 0x219ff0u: goto label_219ff0;
        case 0x219ff4u: goto label_219ff4;
        case 0x219ff8u: goto label_219ff8;
        case 0x219ffcu: goto label_219ffc;
        case 0x21a000u: goto label_21a000;
        case 0x21a004u: goto label_21a004;
        case 0x21a008u: goto label_21a008;
        case 0x21a00cu: goto label_21a00c;
        case 0x21a010u: goto label_21a010;
        case 0x21a014u: goto label_21a014;
        case 0x21a018u: goto label_21a018;
        case 0x21a01cu: goto label_21a01c;
        case 0x21a020u: goto label_21a020;
        case 0x21a024u: goto label_21a024;
        case 0x21a028u: goto label_21a028;
        case 0x21a02cu: goto label_21a02c;
        case 0x21a030u: goto label_21a030;
        case 0x21a034u: goto label_21a034;
        case 0x21a038u: goto label_21a038;
        case 0x21a03cu: goto label_21a03c;
        case 0x21a040u: goto label_21a040;
        case 0x21a044u: goto label_21a044;
        case 0x21a048u: goto label_21a048;
        case 0x21a04cu: goto label_21a04c;
        case 0x21a050u: goto label_21a050;
        case 0x21a054u: goto label_21a054;
        case 0x21a058u: goto label_21a058;
        case 0x21a05cu: goto label_21a05c;
        case 0x21a060u: goto label_21a060;
        case 0x21a064u: goto label_21a064;
        case 0x21a068u: goto label_21a068;
        case 0x21a06cu: goto label_21a06c;
        case 0x21a070u: goto label_21a070;
        case 0x21a074u: goto label_21a074;
        case 0x21a078u: goto label_21a078;
        case 0x21a07cu: goto label_21a07c;
        case 0x21a080u: goto label_21a080;
        case 0x21a084u: goto label_21a084;
        case 0x21a088u: goto label_21a088;
        case 0x21a08cu: goto label_21a08c;
        case 0x21a090u: goto label_21a090;
        case 0x21a094u: goto label_21a094;
        case 0x21a098u: goto label_21a098;
        case 0x21a09cu: goto label_21a09c;
        case 0x21a0a0u: goto label_21a0a0;
        case 0x21a0a4u: goto label_21a0a4;
        case 0x21a0a8u: goto label_21a0a8;
        case 0x21a0acu: goto label_21a0ac;
        case 0x21a0b0u: goto label_21a0b0;
        case 0x21a0b4u: goto label_21a0b4;
        case 0x21a0b8u: goto label_21a0b8;
        case 0x21a0bcu: goto label_21a0bc;
        case 0x21a0c0u: goto label_21a0c0;
        case 0x21a0c4u: goto label_21a0c4;
        case 0x21a0c8u: goto label_21a0c8;
        case 0x21a0ccu: goto label_21a0cc;
        case 0x21a0d0u: goto label_21a0d0;
        case 0x21a0d4u: goto label_21a0d4;
        case 0x21a0d8u: goto label_21a0d8;
        case 0x21a0dcu: goto label_21a0dc;
        case 0x21a0e0u: goto label_21a0e0;
        case 0x21a0e4u: goto label_21a0e4;
        case 0x21a0e8u: goto label_21a0e8;
        case 0x21a0ecu: goto label_21a0ec;
        case 0x21a0f0u: goto label_21a0f0;
        case 0x21a0f4u: goto label_21a0f4;
        case 0x21a0f8u: goto label_21a0f8;
        case 0x21a0fcu: goto label_21a0fc;
        case 0x21a100u: goto label_21a100;
        case 0x21a104u: goto label_21a104;
        case 0x21a108u: goto label_21a108;
        case 0x21a10cu: goto label_21a10c;
        case 0x21a110u: goto label_21a110;
        case 0x21a114u: goto label_21a114;
        case 0x21a118u: goto label_21a118;
        case 0x21a11cu: goto label_21a11c;
        case 0x21a120u: goto label_21a120;
        case 0x21a124u: goto label_21a124;
        case 0x21a128u: goto label_21a128;
        case 0x21a12cu: goto label_21a12c;
        case 0x21a130u: goto label_21a130;
        case 0x21a134u: goto label_21a134;
        case 0x21a138u: goto label_21a138;
        case 0x21a13cu: goto label_21a13c;
        case 0x21a140u: goto label_21a140;
        case 0x21a144u: goto label_21a144;
        case 0x21a148u: goto label_21a148;
        case 0x21a14cu: goto label_21a14c;
        case 0x21a150u: goto label_21a150;
        case 0x21a154u: goto label_21a154;
        case 0x21a158u: goto label_21a158;
        case 0x21a15cu: goto label_21a15c;
        case 0x21a160u: goto label_21a160;
        case 0x21a164u: goto label_21a164;
        case 0x21a168u: goto label_21a168;
        case 0x21a16cu: goto label_21a16c;
        case 0x21a170u: goto label_21a170;
        case 0x21a174u: goto label_21a174;
        case 0x21a178u: goto label_21a178;
        case 0x21a17cu: goto label_21a17c;
        case 0x21a180u: goto label_21a180;
        case 0x21a184u: goto label_21a184;
        case 0x21a188u: goto label_21a188;
        case 0x21a18cu: goto label_21a18c;
        case 0x21a190u: goto label_21a190;
        case 0x21a194u: goto label_21a194;
        case 0x21a198u: goto label_21a198;
        case 0x21a19cu: goto label_21a19c;
        case 0x21a1a0u: goto label_21a1a0;
        case 0x21a1a4u: goto label_21a1a4;
        case 0x21a1a8u: goto label_21a1a8;
        case 0x21a1acu: goto label_21a1ac;
        case 0x21a1b0u: goto label_21a1b0;
        case 0x21a1b4u: goto label_21a1b4;
        case 0x21a1b8u: goto label_21a1b8;
        case 0x21a1bcu: goto label_21a1bc;
        case 0x21a1c0u: goto label_21a1c0;
        case 0x21a1c4u: goto label_21a1c4;
        case 0x21a1c8u: goto label_21a1c8;
        case 0x21a1ccu: goto label_21a1cc;
        case 0x21a1d0u: goto label_21a1d0;
        case 0x21a1d4u: goto label_21a1d4;
        case 0x21a1d8u: goto label_21a1d8;
        case 0x21a1dcu: goto label_21a1dc;
        case 0x21a1e0u: goto label_21a1e0;
        case 0x21a1e4u: goto label_21a1e4;
        case 0x21a1e8u: goto label_21a1e8;
        case 0x21a1ecu: goto label_21a1ec;
        case 0x21a1f0u: goto label_21a1f0;
        case 0x21a1f4u: goto label_21a1f4;
        case 0x21a1f8u: goto label_21a1f8;
        case 0x21a1fcu: goto label_21a1fc;
        case 0x21a200u: goto label_21a200;
        case 0x21a204u: goto label_21a204;
        case 0x21a208u: goto label_21a208;
        case 0x21a20cu: goto label_21a20c;
        case 0x21a210u: goto label_21a210;
        case 0x21a214u: goto label_21a214;
        case 0x21a218u: goto label_21a218;
        case 0x21a21cu: goto label_21a21c;
        case 0x21a220u: goto label_21a220;
        case 0x21a224u: goto label_21a224;
        case 0x21a228u: goto label_21a228;
        case 0x21a22cu: goto label_21a22c;
        case 0x21a230u: goto label_21a230;
        case 0x21a234u: goto label_21a234;
        case 0x21a238u: goto label_21a238;
        case 0x21a23cu: goto label_21a23c;
        case 0x21a240u: goto label_21a240;
        case 0x21a244u: goto label_21a244;
        case 0x21a248u: goto label_21a248;
        case 0x21a24cu: goto label_21a24c;
        case 0x21a250u: goto label_21a250;
        case 0x21a254u: goto label_21a254;
        case 0x21a258u: goto label_21a258;
        case 0x21a25cu: goto label_21a25c;
        case 0x21a260u: goto label_21a260;
        case 0x21a264u: goto label_21a264;
        case 0x21a268u: goto label_21a268;
        case 0x21a26cu: goto label_21a26c;
        case 0x21a270u: goto label_21a270;
        case 0x21a274u: goto label_21a274;
        case 0x21a278u: goto label_21a278;
        case 0x21a27cu: goto label_21a27c;
        case 0x21a280u: goto label_21a280;
        case 0x21a284u: goto label_21a284;
        case 0x21a288u: goto label_21a288;
        case 0x21a28cu: goto label_21a28c;
        case 0x21a290u: goto label_21a290;
        case 0x21a294u: goto label_21a294;
        case 0x21a298u: goto label_21a298;
        case 0x21a29cu: goto label_21a29c;
        case 0x21a2a0u: goto label_21a2a0;
        case 0x21a2a4u: goto label_21a2a4;
        case 0x21a2a8u: goto label_21a2a8;
        case 0x21a2acu: goto label_21a2ac;
        case 0x21a2b0u: goto label_21a2b0;
        case 0x21a2b4u: goto label_21a2b4;
        case 0x21a2b8u: goto label_21a2b8;
        case 0x21a2bcu: goto label_21a2bc;
        case 0x21a2c0u: goto label_21a2c0;
        case 0x21a2c4u: goto label_21a2c4;
        case 0x21a2c8u: goto label_21a2c8;
        case 0x21a2ccu: goto label_21a2cc;
        case 0x21a2d0u: goto label_21a2d0;
        case 0x21a2d4u: goto label_21a2d4;
        case 0x21a2d8u: goto label_21a2d8;
        case 0x21a2dcu: goto label_21a2dc;
        case 0x21a2e0u: goto label_21a2e0;
        case 0x21a2e4u: goto label_21a2e4;
        case 0x21a2e8u: goto label_21a2e8;
        case 0x21a2ecu: goto label_21a2ec;
        case 0x21a2f0u: goto label_21a2f0;
        case 0x21a2f4u: goto label_21a2f4;
        case 0x21a2f8u: goto label_21a2f8;
        case 0x21a2fcu: goto label_21a2fc;
        case 0x21a300u: goto label_21a300;
        case 0x21a304u: goto label_21a304;
        case 0x21a308u: goto label_21a308;
        case 0x21a30cu: goto label_21a30c;
        case 0x21a310u: goto label_21a310;
        case 0x21a314u: goto label_21a314;
        case 0x21a318u: goto label_21a318;
        case 0x21a31cu: goto label_21a31c;
        case 0x21a320u: goto label_21a320;
        case 0x21a324u: goto label_21a324;
        case 0x21a328u: goto label_21a328;
        case 0x21a32cu: goto label_21a32c;
        case 0x21a330u: goto label_21a330;
        case 0x21a334u: goto label_21a334;
        case 0x21a338u: goto label_21a338;
        case 0x21a33cu: goto label_21a33c;
        case 0x21a340u: goto label_21a340;
        case 0x21a344u: goto label_21a344;
        case 0x21a348u: goto label_21a348;
        case 0x21a34cu: goto label_21a34c;
        case 0x21a350u: goto label_21a350;
        case 0x21a354u: goto label_21a354;
        case 0x21a358u: goto label_21a358;
        case 0x21a35cu: goto label_21a35c;
        case 0x21a360u: goto label_21a360;
        case 0x21a364u: goto label_21a364;
        case 0x21a368u: goto label_21a368;
        case 0x21a36cu: goto label_21a36c;
        case 0x21a370u: goto label_21a370;
        case 0x21a374u: goto label_21a374;
        case 0x21a378u: goto label_21a378;
        case 0x21a37cu: goto label_21a37c;
        case 0x21a380u: goto label_21a380;
        case 0x21a384u: goto label_21a384;
        case 0x21a388u: goto label_21a388;
        case 0x21a38cu: goto label_21a38c;
        case 0x21a390u: goto label_21a390;
        case 0x21a394u: goto label_21a394;
        case 0x21a398u: goto label_21a398;
        case 0x21a39cu: goto label_21a39c;
        case 0x21a3a0u: goto label_21a3a0;
        case 0x21a3a4u: goto label_21a3a4;
        case 0x21a3a8u: goto label_21a3a8;
        case 0x21a3acu: goto label_21a3ac;
        case 0x21a3b0u: goto label_21a3b0;
        case 0x21a3b4u: goto label_21a3b4;
        case 0x21a3b8u: goto label_21a3b8;
        case 0x21a3bcu: goto label_21a3bc;
        case 0x21a3c0u: goto label_21a3c0;
        case 0x21a3c4u: goto label_21a3c4;
        case 0x21a3c8u: goto label_21a3c8;
        case 0x21a3ccu: goto label_21a3cc;
        case 0x21a3d0u: goto label_21a3d0;
        case 0x21a3d4u: goto label_21a3d4;
        case 0x21a3d8u: goto label_21a3d8;
        case 0x21a3dcu: goto label_21a3dc;
        case 0x21a3e0u: goto label_21a3e0;
        case 0x21a3e4u: goto label_21a3e4;
        case 0x21a3e8u: goto label_21a3e8;
        case 0x21a3ecu: goto label_21a3ec;
        case 0x21a3f0u: goto label_21a3f0;
        case 0x21a3f4u: goto label_21a3f4;
        case 0x21a3f8u: goto label_21a3f8;
        case 0x21a3fcu: goto label_21a3fc;
        case 0x21a400u: goto label_21a400;
        case 0x21a404u: goto label_21a404;
        case 0x21a408u: goto label_21a408;
        case 0x21a40cu: goto label_21a40c;
        case 0x21a410u: goto label_21a410;
        case 0x21a414u: goto label_21a414;
        case 0x21a418u: goto label_21a418;
        case 0x21a41cu: goto label_21a41c;
        case 0x21a420u: goto label_21a420;
        case 0x21a424u: goto label_21a424;
        case 0x21a428u: goto label_21a428;
        case 0x21a42cu: goto label_21a42c;
        case 0x21a430u: goto label_21a430;
        case 0x21a434u: goto label_21a434;
        case 0x21a438u: goto label_21a438;
        case 0x21a43cu: goto label_21a43c;
        case 0x21a440u: goto label_21a440;
        case 0x21a444u: goto label_21a444;
        case 0x21a448u: goto label_21a448;
        case 0x21a44cu: goto label_21a44c;
        case 0x21a450u: goto label_21a450;
        case 0x21a454u: goto label_21a454;
        case 0x21a458u: goto label_21a458;
        case 0x21a45cu: goto label_21a45c;
        case 0x21a460u: goto label_21a460;
        case 0x21a464u: goto label_21a464;
        case 0x21a468u: goto label_21a468;
        case 0x21a46cu: goto label_21a46c;
        case 0x21a470u: goto label_21a470;
        case 0x21a474u: goto label_21a474;
        case 0x21a478u: goto label_21a478;
        case 0x21a47cu: goto label_21a47c;
        case 0x21a480u: goto label_21a480;
        case 0x21a484u: goto label_21a484;
        case 0x21a488u: goto label_21a488;
        case 0x21a48cu: goto label_21a48c;
        default: break;
    }

    ctx->pc = 0x219d50u;

label_219d50:
    // 0x219d50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x219d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_219d54:
    // 0x219d54: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x219d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_219d58:
    // 0x219d58: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x219d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_219d5c:
    // 0x219d5c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x219d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_219d60:
    // 0x219d60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x219d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_219d64:
    // 0x219d64: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x219d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_219d68:
    // 0x219d68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x219d68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_219d6c:
    // 0x219d6c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x219d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_219d70:
    // 0x219d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_219d74:
    // 0x219d74: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x219d74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_219d78:
    // 0x219d78: 0xc08a61a  jal         func_229868
label_219d7c:
    if (ctx->pc == 0x219D7Cu) {
        ctx->pc = 0x219D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D78u;
        // 0x219d7c: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D80u;
        goto label_219d80;
    }
    ctx->pc = 0x219D78u;
    SET_GPR_U32(ctx, 31, 0x219D80u);
    ctx->pc = 0x219D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D78u;
    // 0x219d7c: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x219D78u, 0x219D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D80u;
label_219d80:
    // 0x219d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x219d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219d84:
    // 0x219d84: 0x5200002a  beql        $s0, $zero, . + 4 + (0x2A << 2)
label_219d88:
    if (ctx->pc == 0x219D88u) {
        ctx->pc = 0x219D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D84u;
        // 0x219d88: 0x8e650040  lw          $a1, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D8Cu;
        goto label_219d8c;
    }
    ctx->pc = 0x219D84u;
    {
        const bool branch_taken_0x219d84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x219d84) {
            ctx->pc = 0x219D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219D84u;
            // 0x219d88: 0x8e650040  lw          $a1, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219E30u;
            goto label_219e30;
        }
    }
    ctx->pc = 0x219D8Cu;
label_219d8c:
    // 0x219d8c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x219d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_219d90:
    // 0x219d90: 0x94620032  lhu         $v0, 0x32($v1)
    ctx->pc = 0x219d90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
label_219d94:
    // 0x219d94: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x219d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_219d98:
    // 0x219d98: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_219d9c:
    if (ctx->pc == 0x219D9Cu) {
        ctx->pc = 0x219D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D98u;
        // 0x219d9c: 0x8e2601a0  lw          $a2, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219DA0u;
        goto label_219da0;
    }
    ctx->pc = 0x219D98u;
    {
        const bool branch_taken_0x219d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219d98) {
            ctx->pc = 0x219D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219D98u;
            // 0x219d9c: 0x8e2601a0  lw          $a2, 0x1A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219DB8u;
            goto label_219db8;
        }
    }
    ctx->pc = 0x219DA0u;
label_219da0:
    // 0x219da0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x219da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_219da4:
    // 0x219da4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x219da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_219da8:
    // 0x219da8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x219da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_219dac:
    // 0x219dac: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_219db0:
    if (ctx->pc == 0x219DB0u) {
        ctx->pc = 0x219DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DACu;
        // 0x219db0: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219DB4u;
        goto label_219db4;
    }
    ctx->pc = 0x219DACu;
    {
        const bool branch_taken_0x219dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219dac) {
            ctx->pc = 0x219DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219DACu;
            // 0x219db0: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219E14u;
            goto label_219e14;
        }
    }
    ctx->pc = 0x219DB4u;
label_219db4:
    // 0x219db4: 0x8e2601a0  lw          $a2, 0x1A0($s1)
    ctx->pc = 0x219db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_219db8:
    // 0x219db8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_219dbc:
    // 0x219dbc: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x219dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_219dc0:
    // 0x219dc0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x219dc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_219dc4:
    // 0x219dc4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x219dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_219dc8:
    // 0x219dc8: 0x40f809  jalr        $v0
label_219dcc:
    if (ctx->pc == 0x219DCCu) {
        ctx->pc = 0x219DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DC8u;
        // 0x219dcc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219DD0u;
        goto label_219dd0;
    }
    ctx->pc = 0x219DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x219DD0u);
        ctx->pc = 0x219DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DC8u;
        // 0x219dcc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219DC8u, 0x219DD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x219DD0u;
label_219dd0:
    // 0x219dd0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_219dd4:
    if (ctx->pc == 0x219DD4u) {
        ctx->pc = 0x219DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DD0u;
        // 0x219dd4: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219DD8u;
        goto label_219dd8;
    }
    ctx->pc = 0x219DD0u;
    {
        const bool branch_taken_0x219dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219dd0) {
            ctx->pc = 0x219DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219DD0u;
            // 0x219dd4: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219E14u;
            goto label_219e14;
        }
    }
    ctx->pc = 0x219DD8u;
label_219dd8:
    // 0x219dd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x219dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_219ddc:
    // 0x219ddc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x219ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_219de0:
    // 0x219de0: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x219de0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_219de4:
    // 0x219de4: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x219de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_219de8:
    // 0x219de8: 0x40f809  jalr        $v0
label_219dec:
    if (ctx->pc == 0x219DECu) {
        ctx->pc = 0x219DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DE8u;
        // 0x219dec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219DF0u;
        goto label_219df0;
    }
    ctx->pc = 0x219DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x219DF0u);
        ctx->pc = 0x219DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DE8u;
        // 0x219dec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219DE8u, 0x219DF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x219DF0u;
label_219df0:
    // 0x219df0: 0x8e2601a0  lw          $a2, 0x1A0($s1)
    ctx->pc = 0x219df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_219df4:
    // 0x219df4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_219df8:
    // 0x219df8: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x219df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_219dfc:
    // 0x219dfc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x219dfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_219e00:
    // 0x219e00: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x219e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_219e04:
    // 0x219e04: 0x60f809  jalr        $v1
label_219e08:
    if (ctx->pc == 0x219E08u) {
        ctx->pc = 0x219E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E04u;
        // 0x219e08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E0Cu;
        goto label_219e0c;
    }
    ctx->pc = 0x219E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x219E0Cu);
        ctx->pc = 0x219E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E04u;
        // 0x219e08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219E04u, 0x219E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x219E0Cu;
label_219e0c:
    // 0x219e0c: 0x10000197  b           . + 4 + (0x197 << 2)
label_219e10:
    if (ctx->pc == 0x219E10u) {
        ctx->pc = 0x219E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E0Cu;
        // 0x219e10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E14u;
        goto label_219e14;
    }
    ctx->pc = 0x219E0Cu;
    {
        const bool branch_taken_0x219e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E0Cu;
        // 0x219e10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e0c) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x219E14u;
label_219e14:
    // 0x219e14: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x219e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_219e18:
    // 0x219e18: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x219e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_219e1c:
    // 0x219e1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x219e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_219e20:
    // 0x219e20: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x219e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_219e24:
    // 0x219e24: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x219e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_219e28:
    // 0x219e28: 0x10000190  b           . + 4 + (0x190 << 2)
label_219e2c:
    if (ctx->pc == 0x219E2Cu) {
        ctx->pc = 0x219E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E28u;
        // 0x219e2c: 0xa3100a  movz        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E30u;
        goto label_219e30;
    }
    ctx->pc = 0x219E28u;
    {
        const bool branch_taken_0x219e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E28u;
        // 0x219e2c: 0xa3100a  movz        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e28) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x219E30u;
label_219e30:
    // 0x219e30: 0x54a0004f  bnel        $a1, $zero, . + 4 + (0x4F << 2)
label_219e34:
    if (ctx->pc == 0x219E34u) {
        ctx->pc = 0x219E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E30u;
        // 0x219e34: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E38u;
        goto label_219e38;
    }
    ctx->pc = 0x219E30u;
    {
        const bool branch_taken_0x219e30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x219e30) {
            ctx->pc = 0x219E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219E30u;
            // 0x219e34: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219F70u;
            goto label_219f70;
        }
    }
    ctx->pc = 0x219E38u;
label_219e38:
    // 0x219e38: 0x922203bd  lbu         $v0, 0x3BD($s1)
    ctx->pc = 0x219e38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 957)));
label_219e3c:
    // 0x219e3c: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_219e40:
    if (ctx->pc == 0x219E40u) {
        ctx->pc = 0x219E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E3Cu;
        // 0x219e40: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E44u;
        goto label_219e44;
    }
    ctx->pc = 0x219E3Cu;
    {
        const bool branch_taken_0x219e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219e3c) {
            ctx->pc = 0x219E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219E3Cu;
            // 0x219e40: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219F00u;
            goto label_219f00;
        }
    }
    ctx->pc = 0x219E44u;
label_219e44:
    // 0x219e44: 0x922205b9  lbu         $v0, 0x5B9($s1)
    ctx->pc = 0x219e44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1465)));
label_219e48:
    // 0x219e48: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_219e4c:
    if (ctx->pc == 0x219E4Cu) {
        ctx->pc = 0x219E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E48u;
        // 0x219e4c: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E50u;
        goto label_219e50;
    }
    ctx->pc = 0x219E48u;
    {
        const bool branch_taken_0x219e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219e48) {
            ctx->pc = 0x219E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219E48u;
            // 0x219e4c: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219F00u;
            goto label_219f00;
        }
    }
    ctx->pc = 0x219E50u;
label_219e50:
    // 0x219e50: 0xc089fd0  jal         func_227F40
label_219e54:
    if (ctx->pc == 0x219E54u) {
        ctx->pc = 0x219E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E50u;
        // 0x219e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E58u;
        goto label_219e58;
    }
    ctx->pc = 0x219E50u;
    SET_GPR_U32(ctx, 31, 0x219E58u);
    ctx->pc = 0x219E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E50u;
    // 0x219e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F40u, 0x219E50u, 0x219E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E58u;
label_219e58:
    // 0x219e58: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_219e5c:
    if (ctx->pc == 0x219E5Cu) {
        ctx->pc = 0x219E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E58u;
        // 0x219e5c: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E60u;
        goto label_219e60;
    }
    ctx->pc = 0x219E58u;
    {
        const bool branch_taken_0x219e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219e58) {
            ctx->pc = 0x219E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219E58u;
            // 0x219e5c: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219F00u;
            goto label_219f00;
        }
    }
    ctx->pc = 0x219E60u;
label_219e60:
    // 0x219e60: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x219e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_219e64:
    // 0x219e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219e68:
    // 0x219e68: 0xc089998  jal         func_226660
label_219e6c:
    if (ctx->pc == 0x219E6Cu) {
        ctx->pc = 0x219E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E68u;
        // 0x219e6c: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E70u;
        goto label_219e70;
    }
    ctx->pc = 0x219E68u;
    SET_GPR_U32(ctx, 31, 0x219E70u);
    ctx->pc = 0x219E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E68u;
    // 0x219e6c: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x219E68u, 0x219E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E70u;
label_219e70:
    // 0x219e70: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_219e74:
    if (ctx->pc == 0x219E74u) {
        ctx->pc = 0x219E78u;
        goto label_219e78;
    }
    ctx->pc = 0x219E70u;
    {
        const bool branch_taken_0x219e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219e70) {
            ctx->pc = 0x219EB0u;
            goto label_219eb0;
        }
    }
    ctx->pc = 0x219E78u;
label_219e78:
    // 0x219e78: 0xc089fda  jal         func_227F68
label_219e7c:
    if (ctx->pc == 0x219E7Cu) {
        ctx->pc = 0x219E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E78u;
        // 0x219e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E80u;
        goto label_219e80;
    }
    ctx->pc = 0x219E78u;
    SET_GPR_U32(ctx, 31, 0x219E80u);
    ctx->pc = 0x219E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E78u;
    // 0x219e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F68u, 0x219E78u, 0x219E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E80u;
label_219e80:
    // 0x219e80: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_219e84:
    if (ctx->pc == 0x219E84u) {
        ctx->pc = 0x219E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E80u;
        // 0x219e84: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E88u;
        goto label_219e88;
    }
    ctx->pc = 0x219E80u;
    {
        const bool branch_taken_0x219e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E80u;
        // 0x219e84: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e80) {
            ctx->pc = 0x219EB0u;
            goto label_219eb0;
        }
    }
    ctx->pc = 0x219E88u;
label_219e88:
    // 0x219e88: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x219e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_219e8c:
    // 0x219e8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x219e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_219e90:
    // 0x219e90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_219e94:
    if (ctx->pc == 0x219E94u) {
        ctx->pc = 0x219E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E90u;
        // 0x219e94: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E98u;
        goto label_219e98;
    }
    ctx->pc = 0x219E90u;
    {
        const bool branch_taken_0x219e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E90u;
        // 0x219e94: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e90) {
            ctx->pc = 0x219EB0u;
            goto label_219eb0;
        }
    }
    ctx->pc = 0x219E98u;
label_219e98:
    // 0x219e98: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x219e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_219e9c:
    // 0x219e9c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x219e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_219ea0:
    // 0x219ea0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_219ea4:
    if (ctx->pc == 0x219EA4u) {
        ctx->pc = 0x219EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EA0u;
        // 0x219ea4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EA8u;
        goto label_219ea8;
    }
    ctx->pc = 0x219EA0u;
    {
        const bool branch_taken_0x219ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x219EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EA0u;
        // 0x219ea4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ea0) {
            ctx->pc = 0x219EB0u;
            goto label_219eb0;
        }
    }
    ctx->pc = 0x219EA8u;
label_219ea8:
    // 0x219ea8: 0x54820015  bnel        $a0, $v0, . + 4 + (0x15 << 2)
label_219eac:
    if (ctx->pc == 0x219EACu) {
        ctx->pc = 0x219EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EA8u;
        // 0x219eac: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EB0u;
        goto label_219eb0;
    }
    ctx->pc = 0x219EA8u;
    {
        const bool branch_taken_0x219ea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x219ea8) {
            ctx->pc = 0x219EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219EA8u;
            // 0x219eac: 0x8e6200b0  lw          $v0, 0xB0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219F00u;
            goto label_219f00;
        }
    }
    ctx->pc = 0x219EB0u;
label_219eb0:
    // 0x219eb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x219eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_219eb4:
    // 0x219eb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x219eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_219eb8:
    // 0x219eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219ebc:
    // 0x219ebc: 0xc089998  jal         func_226660
label_219ec0:
    if (ctx->pc == 0x219EC0u) {
        ctx->pc = 0x219EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EBCu;
        // 0x219ec0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EC4u;
        goto label_219ec4;
    }
    ctx->pc = 0x219EBCu;
    SET_GPR_U32(ctx, 31, 0x219EC4u);
    ctx->pc = 0x219EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219EBCu;
    // 0x219ec0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x219EBCu, 0x219EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219EC4u;
label_219ec4:
    // 0x219ec4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_219ec8:
    if (ctx->pc == 0x219EC8u) {
        ctx->pc = 0x219EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EC4u;
        // 0x219ec8: 0x8e6200b4  lw          $v0, 0xB4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219ECCu;
        goto label_219ecc;
    }
    ctx->pc = 0x219EC4u;
    {
        const bool branch_taken_0x219ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EC4u;
        // 0x219ec8: 0x8e6200b4  lw          $v0, 0xB4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ec4) {
            ctx->pc = 0x219ED4u;
            goto label_219ed4;
        }
    }
    ctx->pc = 0x219ECCu;
label_219ecc:
    // 0x219ecc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x219eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_219ed0:
    // 0x219ed0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x219ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_219ed4:
    // 0x219ed4: 0x0  nop
    ctx->pc = 0x219ed4u;
    // NOP
label_219ed8:
    // 0x219ed8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x219ed8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_219edc:
    // 0x219edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219ee0:
    // 0x219ee0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219ee4:
    // 0x219ee4: 0x90480008  lbu         $t0, 0x8($v0)
    ctx->pc = 0x219ee4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_219ee8:
    // 0x219ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x219ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219eec:
    // 0x219eec: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x219eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_219ef0:
    // 0x219ef0: 0xc0882b2  jal         func_220AC8
label_219ef4:
    if (ctx->pc == 0x219EF4u) {
        ctx->pc = 0x219EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EF0u;
        // 0x219ef4: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EF8u;
        goto label_219ef8;
    }
    ctx->pc = 0x219EF0u;
    SET_GPR_U32(ctx, 31, 0x219EF8u);
    ctx->pc = 0x219EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219EF0u;
    // 0x219ef4: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220AC8u, 0x219EF0u, 0x219EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219EF8u;
label_219ef8:
    // 0x219ef8: 0xa22003bd  sb          $zero, 0x3BD($s1)
    ctx->pc = 0x219ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 957), (uint8_t)GPR_U32(ctx, 0));
label_219efc:
    // 0x219efc: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x219efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_219f00:
    // 0x219f00: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x219f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_219f04:
    // 0x219f04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_219f08:
    if (ctx->pc == 0x219F08u) {
        ctx->pc = 0x219F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F04u;
        // 0x219f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F0Cu;
        goto label_219f0c;
    }
    ctx->pc = 0x219F04u;
    {
        const bool branch_taken_0x219f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F04u;
        // 0x219f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f04) {
            ctx->pc = 0x219F18u;
            goto label_219f18;
        }
    }
    ctx->pc = 0x219F0Cu;
label_219f0c:
    // 0x219f0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x219f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219f10:
    // 0x219f10: 0xc08f824  jal         func_23E090
label_219f14:
    if (ctx->pc == 0x219F14u) {
        ctx->pc = 0x219F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F10u;
        // 0x219f14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F18u;
        goto label_219f18;
    }
    ctx->pc = 0x219F10u;
    SET_GPR_U32(ctx, 31, 0x219F18u);
    ctx->pc = 0x219F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F10u;
    // 0x219f14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E090u, 0x219F10u, 0x219F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F18u;
label_219f18:
    // 0x219f18: 0xc088f04  jal         func_223C10
label_219f1c:
    if (ctx->pc == 0x219F1Cu) {
        ctx->pc = 0x219F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F18u;
        // 0x219f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F20u;
        goto label_219f20;
    }
    ctx->pc = 0x219F18u;
    SET_GPR_U32(ctx, 31, 0x219F20u);
    ctx->pc = 0x219F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F18u;
    // 0x219f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x219F18u, 0x219F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F20u;
label_219f20:
    // 0x219f20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_219f24:
    if (ctx->pc == 0x219F24u) {
        ctx->pc = 0x219F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F20u;
        // 0x219f24: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F28u;
        goto label_219f28;
    }
    ctx->pc = 0x219F20u;
    {
        const bool branch_taken_0x219f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F20u;
        // 0x219f24: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f20) {
            ctx->pc = 0x219F4Cu;
            goto label_219f4c;
        }
    }
    ctx->pc = 0x219F28u;
label_219f28:
    // 0x219f28: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x219f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_219f2c:
    // 0x219f2c: 0x90650008  lbu         $a1, 0x8($v1)
    ctx->pc = 0x219f2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_219f30:
    // 0x219f30: 0x24a2ffe2  addiu       $v0, $a1, -0x1E
    ctx->pc = 0x219f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967266));
label_219f34:
    // 0x219f34: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x219f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_219f38:
    // 0x219f38: 0x1440014c  bnez        $v0, . + 4 + (0x14C << 2)
label_219f3c:
    if (ctx->pc == 0x219F3Cu) {
        ctx->pc = 0x219F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F38u;
        // 0x219f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F40u;
        goto label_219f40;
    }
    ctx->pc = 0x219F38u;
    {
        const bool branch_taken_0x219f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F38u;
        // 0x219f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f38) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x219F40u;
label_219f40:
    // 0x219f40: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x219f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_219f44:
    // 0x219f44: 0x10a20075  beq         $a1, $v0, . + 4 + (0x75 << 2)
label_219f48:
    if (ctx->pc == 0x219F48u) {
        ctx->pc = 0x219F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F44u;
        // 0x219f48: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F4Cu;
        goto label_219f4c;
    }
    ctx->pc = 0x219F44u;
    {
        const bool branch_taken_0x219f44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x219F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F44u;
        // 0x219f48: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f44) {
            ctx->pc = 0x21A11Cu;
            goto label_21a11c;
        }
    }
    ctx->pc = 0x219F4Cu;
label_219f4c:
    // 0x219f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219f50:
    // 0x219f50: 0xc089998  jal         func_226660
label_219f54:
    if (ctx->pc == 0x219F54u) {
        ctx->pc = 0x219F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F50u;
        // 0x219f54: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F58u;
        goto label_219f58;
    }
    ctx->pc = 0x219F50u;
    SET_GPR_U32(ctx, 31, 0x219F58u);
    ctx->pc = 0x219F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F50u;
    // 0x219f54: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x219F50u, 0x219F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F58u;
label_219f58:
    // 0x219f58: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
label_219f5c:
    if (ctx->pc == 0x219F5Cu) {
        ctx->pc = 0x219F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F58u;
        // 0x219f5c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F60u;
        goto label_219f60;
    }
    ctx->pc = 0x219F58u;
    {
        const bool branch_taken_0x219f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F58u;
        // 0x219f5c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f58) {
            ctx->pc = 0x21A468u;
            goto label_21a468;
        }
    }
    ctx->pc = 0x219F60u;
label_219f60:
    // 0x219f60: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x219f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_219f64:
    // 0x219f64: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x219f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_219f68:
    // 0x219f68: 0x1000013e  b           . + 4 + (0x13E << 2)
label_219f6c:
    if (ctx->pc == 0x219F6Cu) {
        ctx->pc = 0x219F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F68u;
        // 0x219f6c: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F70u;
        goto label_219f70;
    }
    ctx->pc = 0x219F68u;
    {
        const bool branch_taken_0x219f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F68u;
        // 0x219f6c: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f68) {
            ctx->pc = 0x21A464u;
            goto label_21a464;
        }
    }
    ctx->pc = 0x219F70u;
label_219f70:
    // 0x219f70: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x219f70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_219f74:
    // 0x219f74: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x219f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_219f78:
    // 0x219f78: 0x40f809  jalr        $v0
label_219f7c:
    if (ctx->pc == 0x219F7Cu) {
        ctx->pc = 0x219F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F78u;
        // 0x219f7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F80u;
        goto label_219f80;
    }
    ctx->pc = 0x219F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x219F80u);
        ctx->pc = 0x219F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F78u;
        // 0x219f7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219F78u, 0x219F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x219F80u;
label_219f80:
    // 0x219f80: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x219f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_219f84:
    // 0x219f84: 0x14400139  bnez        $v0, . + 4 + (0x139 << 2)
label_219f88:
    if (ctx->pc == 0x219F88u) {
        ctx->pc = 0x219F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F84u;
        // 0x219f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F8Cu;
        goto label_219f8c;
    }
    ctx->pc = 0x219F84u;
    {
        const bool branch_taken_0x219f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F84u;
        // 0x219f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f84) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x219F8Cu;
label_219f8c:
    // 0x219f8c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x219f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_219f90:
    // 0x219f90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x219f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219f94:
    // 0x219f94: 0x94620032  lhu         $v0, 0x32($v1)
    ctx->pc = 0x219f94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
label_219f98:
    // 0x219f98: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x219f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_219f9c:
    // 0x219f9c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_219fa0:
    if (ctx->pc == 0x219FA0u) {
        ctx->pc = 0x219FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F9Cu;
        // 0x219fa0: 0x8e720040  lw          $s2, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219FA4u;
        goto label_219fa4;
    }
    ctx->pc = 0x219F9Cu;
    {
        const bool branch_taken_0x219f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F9Cu;
        // 0x219fa0: 0x8e720040  lw          $s2, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f9c) {
            ctx->pc = 0x219FC4u;
            goto label_219fc4;
        }
    }
    ctx->pc = 0x219FA4u;
label_219fa4:
    // 0x219fa4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x219fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_219fa8:
    // 0x219fa8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x219fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_219fac:
    // 0x219fac: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x219facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_219fb0:
    // 0x219fb0: 0x40f809  jalr        $v0
label_219fb4:
    if (ctx->pc == 0x219FB4u) {
        ctx->pc = 0x219FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FB0u;
        // 0x219fb4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219FB8u;
        goto label_219fb8;
    }
    ctx->pc = 0x219FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x219FB8u);
        ctx->pc = 0x219FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FB0u;
        // 0x219fb4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219FB0u, 0x219FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x219FB8u;
label_219fb8:
    // 0x219fb8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x219fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_219fbc:
    // 0x219fbc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x219fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_219fc0:
    // 0x219fc0: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x219fc0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_219fc4:
    // 0x219fc4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x219fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_219fc8:
    // 0x219fc8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x219fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_219fcc:
    // 0x219fcc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x219fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_219fd0:
    // 0x219fd0: 0x40f809  jalr        $v0
label_219fd4:
    if (ctx->pc == 0x219FD4u) {
        ctx->pc = 0x219FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FD0u;
        // 0x219fd4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219FD8u;
        goto label_219fd8;
    }
    ctx->pc = 0x219FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x219FD8u);
        ctx->pc = 0x219FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FD0u;
        // 0x219fd4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219FD0u, 0x219FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x219FD8u;
label_219fd8:
    // 0x219fd8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x219fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_219fdc:
    // 0x219fdc: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x219fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_219fe0:
    // 0x219fe0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_219fe4:
    if (ctx->pc == 0x219FE4u) {
        ctx->pc = 0x219FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FE0u;
        // 0x219fe4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219FE8u;
        goto label_219fe8;
    }
    ctx->pc = 0x219FE0u;
    {
        const bool branch_taken_0x219fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x219fe0) {
            ctx->pc = 0x219FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219FE0u;
            // 0x219fe4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A03Cu;
            goto label_21a03c;
        }
    }
    ctx->pc = 0x219FE8u;
label_219fe8:
    // 0x219fe8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x219fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_219fec:
    // 0x219fec: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x219fecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_219ff0:
    // 0x219ff0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x219ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_219ff4:
    // 0x219ff4: 0x40f809  jalr        $v0
label_219ff8:
    if (ctx->pc == 0x219FF8u) {
        ctx->pc = 0x219FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FF4u;
        // 0x219ff8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219FFCu;
        goto label_219ffc;
    }
    ctx->pc = 0x219FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x219FFCu);
        ctx->pc = 0x219FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FF4u;
        // 0x219ff8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219FF4u, 0x219FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x219FFCu;
label_219ffc:
    // 0x219ffc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x219ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_21a000:
    // 0x21a000: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21a000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21a004:
    // 0x21a004: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_21a008:
    if (ctx->pc == 0x21A008u) {
        ctx->pc = 0x21A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A004u;
        // 0x21a008: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A00Cu;
        goto label_21a00c;
    }
    ctx->pc = 0x21A004u;
    {
        const bool branch_taken_0x21a004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a004) {
            ctx->pc = 0x21A008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A004u;
            // 0x21a008: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A038u;
            goto label_21a038;
        }
    }
    ctx->pc = 0x21A00Cu;
label_21a00c:
    // 0x21a00c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21a00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21a010:
    // 0x21a010: 0xc089998  jal         func_226660
label_21a014:
    if (ctx->pc == 0x21A014u) {
        ctx->pc = 0x21A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A010u;
        // 0x21a014: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A018u;
        goto label_21a018;
    }
    ctx->pc = 0x21A010u;
    SET_GPR_U32(ctx, 31, 0x21A018u);
    ctx->pc = 0x21A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A010u;
    // 0x21a014: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x21A010u, 0x21A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A018u;
label_21a018:
    // 0x21a018: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21a01c:
    if (ctx->pc == 0x21A01Cu) {
        ctx->pc = 0x21A020u;
        goto label_21a020;
    }
    ctx->pc = 0x21A018u;
    {
        const bool branch_taken_0x21a018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a018) {
            ctx->pc = 0x21A028u;
            goto label_21a028;
        }
    }
    ctx->pc = 0x21A020u;
label_21a020:
    // 0x21a020: 0x10000005  b           . + 4 + (0x5 << 2)
label_21a024:
    if (ctx->pc == 0x21A024u) {
        ctx->pc = 0x21A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A020u;
        // 0x21a024: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A028u;
        goto label_21a028;
    }
    ctx->pc = 0x21A020u;
    {
        const bool branch_taken_0x21a020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A020u;
        // 0x21a024: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a020) {
            ctx->pc = 0x21A038u;
            goto label_21a038;
        }
    }
    ctx->pc = 0x21A028u;
label_21a028:
    // 0x21a028: 0xc089fd0  jal         func_227F40
label_21a02c:
    if (ctx->pc == 0x21A02Cu) {
        ctx->pc = 0x21A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A028u;
        // 0x21a02c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A030u;
        goto label_21a030;
    }
    ctx->pc = 0x21A028u;
    SET_GPR_U32(ctx, 31, 0x21A030u);
    ctx->pc = 0x21A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A028u;
    // 0x21a02c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F40u, 0x21A028u, 0x21A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A030u;
label_21a030:
    // 0x21a030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21a030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a034:
    // 0x21a034: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x21a034u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_21a038:
    // 0x21a038: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21a038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21a03c:
    // 0x21a03c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x21a03cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_21a040:
    // 0x21a040: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x21a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_21a044:
    // 0x21a044: 0x40f809  jalr        $v0
label_21a048:
    if (ctx->pc == 0x21A048u) {
        ctx->pc = 0x21A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A044u;
        // 0x21a048: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A04Cu;
        goto label_21a04c;
    }
    ctx->pc = 0x21A044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A04Cu);
        ctx->pc = 0x21A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A044u;
        // 0x21a048: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A044u, 0x21A04Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A04Cu;
label_21a04c:
    // 0x21a04c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x21a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_21a050:
    // 0x21a050: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x21a050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_21a054:
    // 0x21a054: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21a054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_21a058:
    // 0x21a058: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_21a05c:
    if (ctx->pc == 0x21A05Cu) {
        ctx->pc = 0x21A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A058u;
        // 0x21a05c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A060u;
        goto label_21a060;
    }
    ctx->pc = 0x21A058u;
    {
        const bool branch_taken_0x21a058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A058u;
        // 0x21a05c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a058) {
            ctx->pc = 0x21A074u;
            goto label_21a074;
        }
    }
    ctx->pc = 0x21A060u;
label_21a060:
    // 0x21a060: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x21a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_21a064:
    // 0x21a064: 0xae230368  sw          $v1, 0x368($s1)
    ctx->pc = 0x21a064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 3));
label_21a068:
    // 0x21a068: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x21a068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_21a06c:
    // 0x21a06c: 0x10000002  b           . + 4 + (0x2 << 2)
label_21a070:
    if (ctx->pc == 0x21A070u) {
        ctx->pc = 0x21A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A06Cu;
        // 0x21a070: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A074u;
        goto label_21a074;
    }
    ctx->pc = 0x21A06Cu;
    {
        const bool branch_taken_0x21a06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A06Cu;
        // 0x21a070: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a06c) {
            ctx->pc = 0x21A078u;
            goto label_21a078;
        }
    }
    ctx->pc = 0x21A074u;
label_21a074:
    // 0x21a074: 0xae200368  sw          $zero, 0x368($s1)
    ctx->pc = 0x21a074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 0));
label_21a078:
    // 0x21a078: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_21a07c:
    if (ctx->pc == 0x21A07Cu) {
        ctx->pc = 0x21A080u;
        goto label_21a080;
    }
    ctx->pc = 0x21A078u;
    {
        const bool branch_taken_0x21a078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a078) {
            ctx->pc = 0x21A12Cu;
            goto label_21a12c;
        }
    }
    ctx->pc = 0x21A080u;
label_21a080:
    // 0x21a080: 0x8e650040  lw          $a1, 0x40($s3)
    ctx->pc = 0x21a080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_21a084:
    // 0x21a084: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x21a084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_21a088:
    // 0x21a088: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x21a088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_21a08c:
    // 0x21a08c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x21a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_21a090:
    // 0x21a090: 0x40f809  jalr        $v0
label_21a094:
    if (ctx->pc == 0x21A094u) {
        ctx->pc = 0x21A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A090u;
        // 0x21a094: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A098u;
        goto label_21a098;
    }
    ctx->pc = 0x21A090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A098u);
        ctx->pc = 0x21A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A090u;
        // 0x21a094: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A090u, 0x21A098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A098u;
label_21a098:
    // 0x21a098: 0x8e2701a0  lw          $a3, 0x1A0($s1)
    ctx->pc = 0x21a098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_21a09c:
    // 0x21a09c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a0a0:
    // 0x21a0a0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x21a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_21a0a4:
    // 0x21a0a4: 0x8ce60074  lw          $a2, 0x74($a3)
    ctx->pc = 0x21a0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
label_21a0a8:
    // 0x21a0a8: 0x38083  sra         $s0, $v1, 2
    ctx->pc = 0x21a0a8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
label_21a0ac:
    // 0x21a0ac: 0x84c40030  lh          $a0, 0x30($a2)
    ctx->pc = 0x21a0acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
label_21a0b0:
    // 0x21a0b0: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x21a0b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_21a0b4:
    // 0x21a0b4: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x21a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_21a0b8:
    // 0x21a0b8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x21a0b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_21a0bc:
    // 0x21a0bc: 0x40f809  jalr        $v0
label_21a0c0:
    if (ctx->pc == 0x21A0C0u) {
        ctx->pc = 0x21A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0BCu;
        // 0x21a0c0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0C4u;
        goto label_21a0c4;
    }
    ctx->pc = 0x21A0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A0C4u);
        ctx->pc = 0x21A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0BCu;
        // 0x21a0c0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A0BCu, 0x21A0C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A0C4u;
label_21a0c4:
    // 0x21a0c4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_21a0c8:
    if (ctx->pc == 0x21A0C8u) {
        ctx->pc = 0x21A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0C4u;
        // 0x21a0c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0CCu;
        goto label_21a0cc;
    }
    ctx->pc = 0x21A0C4u;
    {
        const bool branch_taken_0x21a0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0C4u;
        // 0x21a0c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0c4) {
            ctx->pc = 0x21A124u;
            goto label_21a124;
        }
    }
    ctx->pc = 0x21A0CCu;
label_21a0cc:
    // 0x21a0cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21a0d0:
    // 0x21a0d0: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x21a0d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_21a0d4:
    // 0x21a0d4: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x21a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_21a0d8:
    // 0x21a0d8: 0x40f809  jalr        $v0
label_21a0dc:
    if (ctx->pc == 0x21A0DCu) {
        ctx->pc = 0x21A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0D8u;
        // 0x21a0dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0E0u;
        goto label_21a0e0;
    }
    ctx->pc = 0x21A0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A0E0u);
        ctx->pc = 0x21A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0D8u;
        // 0x21a0dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A0D8u, 0x21A0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A0E0u;
label_21a0e0:
    // 0x21a0e0: 0x8e2301a0  lw          $v1, 0x1A0($s1)
    ctx->pc = 0x21a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_21a0e4:
    // 0x21a0e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a0e8:
    // 0x21a0e8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x21a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_21a0ec:
    // 0x21a0ec: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x21a0ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_21a0f0:
    // 0x21a0f0: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x21a0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_21a0f4:
    // 0x21a0f4: 0xc0f809  jalr        $a2
label_21a0f8:
    if (ctx->pc == 0x21A0F8u) {
        ctx->pc = 0x21A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0F4u;
        // 0x21a0f8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0FCu;
        goto label_21a0fc;
    }
    ctx->pc = 0x21A0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x21A0FCu);
        ctx->pc = 0x21A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0F4u;
        // 0x21a0f8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A0F4u, 0x21A0FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A0FCu;
label_21a0fc:
    // 0x21a0fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21a100:
    // 0x21a100: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x21a100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_21a104:
    // 0x21a104: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x21a104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_21a108:
    // 0x21a108: 0x40f809  jalr        $v0
label_21a10c:
    if (ctx->pc == 0x21A10Cu) {
        ctx->pc = 0x21A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A108u;
        // 0x21a10c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A110u;
        goto label_21a110;
    }
    ctx->pc = 0x21A108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A110u);
        ctx->pc = 0x21A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A108u;
        // 0x21a10c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A108u, 0x21A110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A110u;
label_21a110:
    // 0x21a110: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x21a110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_21a114:
    // 0x21a114: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21a118:
    if (ctx->pc == 0x21A118u) {
        ctx->pc = 0x21A11Cu;
        goto label_21a11c;
    }
    ctx->pc = 0x21A114u;
    {
        const bool branch_taken_0x21a114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a114) {
            ctx->pc = 0x21A124u;
            goto label_21a124;
        }
    }
    ctx->pc = 0x21A11Cu;
label_21a11c:
    // 0x21a11c: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_21a120:
    if (ctx->pc == 0x21A120u) {
        ctx->pc = 0x21A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A11Cu;
        // 0x21a120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A124u;
        goto label_21a124;
    }
    ctx->pc = 0x21A11Cu;
    {
        const bool branch_taken_0x21a11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A11Cu;
        // 0x21a120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a11c) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x21A124u;
label_21a124:
    // 0x21a124: 0x160000d1  bnez        $s0, . + 4 + (0xD1 << 2)
label_21a128:
    if (ctx->pc == 0x21A128u) {
        ctx->pc = 0x21A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A124u;
        // 0x21a128: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A12Cu;
        goto label_21a12c;
    }
    ctx->pc = 0x21A124u;
    {
        const bool branch_taken_0x21a124 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A124u;
        // 0x21a128: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a124) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x21A12Cu;
label_21a12c:
    // 0x21a12c: 0xc0e57ce  jal         func_395F38
label_21a130:
    if (ctx->pc == 0x21A130u) {
        ctx->pc = 0x21A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A12Cu;
        // 0x21a130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A134u;
        goto label_21a134;
    }
    ctx->pc = 0x21A12Cu;
    SET_GPR_U32(ctx, 31, 0x21A134u);
    ctx->pc = 0x21A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A12Cu;
    // 0x21a130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x21A12Cu, 0x21A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A134u;
label_21a134:
    // 0x21a134: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21a134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a138:
    // 0x21a138: 0x124000ca  beqz        $s2, . + 4 + (0xCA << 2)
label_21a13c:
    if (ctx->pc == 0x21A13Cu) {
        ctx->pc = 0x21A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A138u;
        // 0x21a13c: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A140u;
        goto label_21a140;
    }
    ctx->pc = 0x21A138u;
    {
        const bool branch_taken_0x21a138 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A138u;
        // 0x21a13c: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a138) {
            ctx->pc = 0x21A464u;
            goto label_21a464;
        }
    }
    ctx->pc = 0x21A140u;
label_21a140:
    // 0x21a140: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x21a140u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_21a144:
    // 0x21a144: 0xc0e44cc  jal         func_391330
label_21a148:
    if (ctx->pc == 0x21A148u) {
        ctx->pc = 0x21A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A144u;
        // 0x21a148: 0x8e842c04  lw          $a0, 0x2C04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A14Cu;
        goto label_21a14c;
    }
    ctx->pc = 0x21A144u;
    SET_GPR_U32(ctx, 31, 0x21A14Cu);
    ctx->pc = 0x21A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A144u;
    // 0x21a148: 0x8e842c04  lw          $a0, 0x2C04($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x21A144u, 0x21A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A14Cu;
label_21a14c:
    // 0x21a14c: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x21a14cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_21a150:
    // 0x21a150: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x21a150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_21a154:
    // 0x21a154: 0x1462006d  bne         $v1, $v0, . + 4 + (0x6D << 2)
label_21a158:
    if (ctx->pc == 0x21A158u) {
        ctx->pc = 0x21A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A154u;
        // 0x21a158: 0x8e842c04  lw          $a0, 0x2C04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A15Cu;
        goto label_21a15c;
    }
    ctx->pc = 0x21A154u;
    {
        const bool branch_taken_0x21a154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A154u;
        // 0x21a158: 0x8e842c04  lw          $a0, 0x2C04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a154) {
            ctx->pc = 0x21A30Cu;
            goto label_21a30c;
        }
    }
    ctx->pc = 0x21A15Cu;
label_21a15c:
    // 0x21a15c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a160:
    // 0x21a160: 0xc087620  jal         func_21D880
label_21a164:
    if (ctx->pc == 0x21A164u) {
        ctx->pc = 0x21A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A160u;
        // 0x21a164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A168u;
        goto label_21a168;
    }
    ctx->pc = 0x21A160u;
    SET_GPR_U32(ctx, 31, 0x21A168u);
    ctx->pc = 0x21A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A160u;
    // 0x21a164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D880u, 0x21A160u, 0x21A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A168u;
label_21a168:
    // 0x21a168: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x21a168u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_21a16c:
    // 0x21a16c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x21a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_21a170:
    // 0x21a170: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x21a170u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a174:
    // 0x21a174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a178:
    // 0x21a178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21a178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a17c:
    // 0x21a17c: 0x84450144  lh          $a1, 0x144($v0)
    ctx->pc = 0x21a17cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 324)));
label_21a180:
    // 0x21a180: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21a180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a184:
    // 0x21a184: 0xc0875a0  jal         func_21D680
label_21a188:
    if (ctx->pc == 0x21A188u) {
        ctx->pc = 0x21A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A184u;
        // 0x21a188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A18Cu;
        goto label_21a18c;
    }
    ctx->pc = 0x21A184u;
    SET_GPR_U32(ctx, 31, 0x21A18Cu);
    ctx->pc = 0x21A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A184u;
    // 0x21a188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x21A184u, 0x21A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A18Cu;
label_21a18c:
    // 0x21a18c: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x21a18cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_21a190:
    // 0x21a190: 0xc0e44cc  jal         func_391330
label_21a194:
    if (ctx->pc == 0x21A194u) {
        ctx->pc = 0x21A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A190u;
        // 0x21a194: 0x8e842c04  lw          $a0, 0x2C04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A198u;
        goto label_21a198;
    }
    ctx->pc = 0x21A190u;
    SET_GPR_U32(ctx, 31, 0x21A198u);
    ctx->pc = 0x21A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A190u;
    // 0x21a194: 0x8e842c04  lw          $a0, 0x2C04($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x21A190u, 0x21A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A198u;
label_21a198:
    // 0x21a198: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x21a198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_21a19c:
    // 0x21a19c: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x21a19cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_21a1a0:
    // 0x21a1a0: 0x90450064  lbu         $a1, 0x64($v0)
    ctx->pc = 0x21a1a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_21a1a4:
    // 0x21a1a4: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x21a1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_21a1a8:
    // 0x21a1a8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x21a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21a1ac:
    // 0x21a1ac: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x21a1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_21a1b0:
    // 0x21a1b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21a1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21a1b4:
    // 0x21a1b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21a1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21a1b8:
    // 0x21a1b8: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x21a1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_21a1bc:
    // 0x21a1bc: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x21a1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21a1c0:
    // 0x21a1c0: 0xc04420c  jal         func_110830
label_21a1c4:
    if (ctx->pc == 0x21A1C4u) {
        ctx->pc = 0x21A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1C0u;
        // 0x21a1c4: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A1C8u;
        goto label_21a1c8;
    }
    ctx->pc = 0x21A1C0u;
    SET_GPR_U32(ctx, 31, 0x21A1C8u);
    ctx->pc = 0x21A1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1C0u;
    // 0x21a1c4: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x21A1C0u, 0x21A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1C8u;
label_21a1c8:
    // 0x21a1c8: 0x8e2501a0  lw          $a1, 0x1A0($s1)
    ctx->pc = 0x21a1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_21a1cc:
    // 0x21a1cc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x21a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_21a1d0:
    // 0x21a1d0: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x21a1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_21a1d4:
    // 0x21a1d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21a1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21a1d8:
    // 0x21a1d8: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x21a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_21a1dc:
    // 0x21a1dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21a1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_21a1e0:
    // 0x21a1e0: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x21a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_21a1e4:
    // 0x21a1e4: 0x8e2301a0  lw          $v1, 0x1A0($s1)
    ctx->pc = 0x21a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_21a1e8:
    // 0x21a1e8: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x21a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_21a1ec:
    // 0x21a1ec: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x21a1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_21a1f0:
    // 0x21a1f0: 0xc089a76  jal         func_2269D8
label_21a1f4:
    if (ctx->pc == 0x21A1F4u) {
        ctx->pc = 0x21A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1F0u;
        // 0x21a1f4: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A1F8u;
        goto label_21a1f8;
    }
    ctx->pc = 0x21A1F0u;
    SET_GPR_U32(ctx, 31, 0x21A1F8u);
    ctx->pc = 0x21A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1F0u;
    // 0x21a1f4: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x21A1F0u, 0x21A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1F8u;
label_21a1f8:
    // 0x21a1f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21a1f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a1fc:
    // 0x21a1fc: 0x1240009b  beqz        $s2, . + 4 + (0x9B << 2)
label_21a200:
    if (ctx->pc == 0x21A200u) {
        ctx->pc = 0x21A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1FCu;
        // 0x21a200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A204u;
        goto label_21a204;
    }
    ctx->pc = 0x21A1FCu;
    {
        const bool branch_taken_0x21a1fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1FCu;
        // 0x21a200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1fc) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x21A204u;
label_21a204:
    // 0x21a204: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x21a204u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_21a208:
    // 0x21a208: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21a208u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21a20c:
    // 0x21a20c: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
label_21a210:
    if (ctx->pc == 0x21A210u) {
        ctx->pc = 0x21A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A20Cu;
        // 0x21a210: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A214u;
        goto label_21a214;
    }
    ctx->pc = 0x21A20Cu;
    {
        const bool branch_taken_0x21a20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A20Cu;
        // 0x21a210: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a20c) {
            ctx->pc = 0x21A11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a11c;
        }
    }
    ctx->pc = 0x21A214u;
label_21a214:
    // 0x21a214: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21a214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a218:
    // 0x21a218: 0x2613e490  addiu       $s3, $s0, -0x1B70
    ctx->pc = 0x21a218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960272));
label_21a21c:
    // 0x21a21c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a220:
    // 0x21a220: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21a220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21a224:
    // 0x21a224: 0xc13b662  jal         func_4ED988
label_21a228:
    if (ctx->pc == 0x21A228u) {
        ctx->pc = 0x21A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A224u;
        // 0x21a228: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A22Cu;
        goto label_21a22c;
    }
    ctx->pc = 0x21A224u;
    SET_GPR_U32(ctx, 31, 0x21A22Cu);
    ctx->pc = 0x21A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A224u;
    // 0x21a228: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x21A224u, 0x21A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A22Cu;
label_21a22c:
    // 0x21a22c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21a22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a230:
    // 0x21a230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a234:
    // 0x21a234: 0xc09933e  jal         func_264CF8
label_21a238:
    if (ctx->pc == 0x21A238u) {
        ctx->pc = 0x21A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A234u;
        // 0x21a238: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A23Cu;
        goto label_21a23c;
    }
    ctx->pc = 0x21A234u;
    SET_GPR_U32(ctx, 31, 0x21A23Cu);
    ctx->pc = 0x21A238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A234u;
    // 0x21a238: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CF8u, 0x21A234u, 0x21A23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A23Cu;
label_21a23c:
    // 0x21a23c: 0xc087502  jal         func_21D408
label_21a240:
    if (ctx->pc == 0x21A240u) {
        ctx->pc = 0x21A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A23Cu;
        // 0x21a240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A244u;
        goto label_21a244;
    }
    ctx->pc = 0x21A23Cu;
    SET_GPR_U32(ctx, 31, 0x21A244u);
    ctx->pc = 0x21A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A23Cu;
    // 0x21a240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x21A23Cu, 0x21A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A244u;
label_21a244:
    // 0x21a244: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21a244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21a248:
    // 0x21a248: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21a24c:
    // 0x21a24c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_21a250:
    if (ctx->pc == 0x21A250u) {
        ctx->pc = 0x21A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A24Cu;
        // 0x21a250: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A254u;
        goto label_21a254;
    }
    ctx->pc = 0x21A24Cu;
    {
        const bool branch_taken_0x21a24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A24Cu;
        // 0x21a250: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a24c) {
            ctx->pc = 0x21A288u;
            goto label_21a288;
        }
    }
    ctx->pc = 0x21A254u;
label_21a254:
    // 0x21a254: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21a258:
    if (ctx->pc == 0x21A258u) {
        ctx->pc = 0x21A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A254u;
        // 0x21a258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A25Cu;
        goto label_21a25c;
    }
    ctx->pc = 0x21A254u;
    {
        const bool branch_taken_0x21a254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A254u;
        // 0x21a258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a254) {
            ctx->pc = 0x21A26Cu;
            goto label_21a26c;
        }
    }
    ctx->pc = 0x21A25Cu;
label_21a25c:
    // 0x21a25c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_21a260:
    if (ctx->pc == 0x21A260u) {
        ctx->pc = 0x21A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A25Cu;
        // 0x21a260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A264u;
        goto label_21a264;
    }
    ctx->pc = 0x21A25Cu;
    {
        const bool branch_taken_0x21a25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A25Cu;
        // 0x21a260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a25c) {
            ctx->pc = 0x21A2E4u;
            goto label_21a2e4;
        }
    }
    ctx->pc = 0x21A264u;
label_21a264:
    // 0x21a264: 0x10000082  b           . + 4 + (0x82 << 2)
label_21a268:
    if (ctx->pc == 0x21A268u) {
        ctx->pc = 0x21A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A264u;
        // 0x21a268: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A26Cu;
        goto label_21a26c;
    }
    ctx->pc = 0x21A264u;
    {
        const bool branch_taken_0x21a264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A264u;
        // 0x21a268: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a264) {
            ctx->pc = 0x21A470u;
            goto label_21a470;
        }
    }
    ctx->pc = 0x21A26Cu;
label_21a26c:
    // 0x21a26c: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x21a26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_21a270:
    // 0x21a270: 0x1040ffaa  beqz        $v0, . + 4 + (-0x56 << 2)
label_21a274:
    if (ctx->pc == 0x21A274u) {
        ctx->pc = 0x21A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A270u;
        // 0x21a274: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A278u;
        goto label_21a278;
    }
    ctx->pc = 0x21A270u;
    {
        const bool branch_taken_0x21a270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A270u;
        // 0x21a274: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a270) {
            ctx->pc = 0x21A11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a11c;
        }
    }
    ctx->pc = 0x21A278u;
label_21a278:
    // 0x21a278: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
label_21a27c:
    if (ctx->pc == 0x21A27Cu) {
        ctx->pc = 0x21A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A278u;
        // 0x21a27c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A280u;
        goto label_21a280;
    }
    ctx->pc = 0x21A278u;
    {
        const bool branch_taken_0x21a278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A278u;
        // 0x21a27c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a278) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x21A280u;
label_21a280:
    // 0x21a280: 0x10000019  b           . + 4 + (0x19 << 2)
label_21a284:
    if (ctx->pc == 0x21A284u) {
        ctx->pc = 0x21A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A280u;
        // 0x21a284: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A288u;
        goto label_21a288;
    }
    ctx->pc = 0x21A280u;
    {
        const bool branch_taken_0x21a280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A280u;
        // 0x21a284: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a280) {
            ctx->pc = 0x21A2E8u;
            goto label_21a2e8;
        }
    }
    ctx->pc = 0x21A288u;
label_21a288:
    // 0x21a288: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21a288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21a28c:
    // 0x21a28c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a290:
    // 0x21a290: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x21a290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_21a294:
    // 0x21a294: 0xc13b632  jal         func_4ED8C8
label_21a298:
    if (ctx->pc == 0x21A298u) {
        ctx->pc = 0x21A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A294u;
        // 0x21a298: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A29Cu;
        goto label_21a29c;
    }
    ctx->pc = 0x21A294u;
    SET_GPR_U32(ctx, 31, 0x21A29Cu);
    ctx->pc = 0x21A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A294u;
    // 0x21a298: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x21A294u, 0x21A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A29Cu;
label_21a29c:
    // 0x21a29c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x21a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_21a2a0:
    // 0x21a2a0: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x21a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_21a2a4:
    // 0x21a2a4: 0x8c440158  lw          $a0, 0x158($v0)
    ctx->pc = 0x21a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
label_21a2a8:
    // 0x21a2a8: 0x14800070  bnez        $a0, . + 4 + (0x70 << 2)
label_21a2ac:
    if (ctx->pc == 0x21A2ACu) {
        ctx->pc = 0x21A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2A8u;
        // 0x21a2ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2B0u;
        goto label_21a2b0;
    }
    ctx->pc = 0x21A2A8u;
    {
        const bool branch_taken_0x21a2a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2A8u;
        // 0x21a2ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2a8) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x21A2B0u;
label_21a2b0:
    // 0x21a2b0: 0xc08a200  jal         func_228800
label_21a2b4:
    if (ctx->pc == 0x21A2B4u) {
        ctx->pc = 0x21A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2B0u;
        // 0x21a2b4: 0x8e2400cc  lw          $a0, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2B8u;
        goto label_21a2b8;
    }
    ctx->pc = 0x21A2B0u;
    SET_GPR_U32(ctx, 31, 0x21A2B8u);
    ctx->pc = 0x21A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A2B0u;
    // 0x21a2b4: 0x8e2400cc  lw          $a0, 0xCC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x21A2B0u, 0x21A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A2B8u;
label_21a2b8:
    // 0x21a2b8: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x21a2b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_21a2bc:
    // 0x21a2bc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x21a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_21a2c0:
    // 0x21a2c0: 0x1462006a  bne         $v1, $v0, . + 4 + (0x6A << 2)
label_21a2c4:
    if (ctx->pc == 0x21A2C4u) {
        ctx->pc = 0x21A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2C0u;
        // 0x21a2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2C8u;
        goto label_21a2c8;
    }
    ctx->pc = 0x21A2C0u;
    {
        const bool branch_taken_0x21a2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2C0u;
        // 0x21a2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2c0) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x21A2C8u;
label_21a2c8:
    // 0x21a2c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21a2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21a2cc:
    // 0x21a2cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a2d0:
    // 0x21a2d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21a2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a2d4:
    // 0x21a2d4: 0xc13b642  jal         func_4ED908
label_21a2d8:
    if (ctx->pc == 0x21A2D8u) {
        ctx->pc = 0x21A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2D4u;
        // 0x21a2d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2DCu;
        goto label_21a2dc;
    }
    ctx->pc = 0x21A2D4u;
    SET_GPR_U32(ctx, 31, 0x21A2DCu);
    ctx->pc = 0x21A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A2D4u;
    // 0x21a2d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED908u, 0x21A2D4u, 0x21A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A2DCu;
label_21a2dc:
    // 0x21a2dc: 0x10000063  b           . + 4 + (0x63 << 2)
label_21a2e0:
    if (ctx->pc == 0x21A2E0u) {
        ctx->pc = 0x21A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2DCu;
        // 0x21a2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2E4u;
        goto label_21a2e4;
    }
    ctx->pc = 0x21A2DCu;
    {
        const bool branch_taken_0x21a2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2DCu;
        // 0x21a2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2dc) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x21A2E4u;
label_21a2e4:
    // 0x21a2e4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x21a2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_21a2e8:
    // 0x21a2e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21a2ec:
    // 0x21a2ec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21a2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21a2f0:
    // 0x21a2f0: 0x2604e490  addiu       $a0, $s0, -0x1B70
    ctx->pc = 0x21a2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960272));
label_21a2f4:
    // 0x21a2f4: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x21a2f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_21a2f8:
    // 0x21a2f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a2fc:
    // 0x21a2fc: 0xc13b652  jal         func_4ED948
label_21a300:
    if (ctx->pc == 0x21A300u) {
        ctx->pc = 0x21A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2FCu;
        // 0x21a300: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A304u;
        goto label_21a304;
    }
    ctx->pc = 0x21A2FCu;
    SET_GPR_U32(ctx, 31, 0x21A304u);
    ctx->pc = 0x21A300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A2FCu;
    // 0x21a300: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x21A2FCu, 0x21A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A304u;
label_21a304:
    // 0x21a304: 0x10000059  b           . + 4 + (0x59 << 2)
label_21a308:
    if (ctx->pc == 0x21A308u) {
        ctx->pc = 0x21A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A304u;
        // 0x21a308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A30Cu;
        goto label_21a30c;
    }
    ctx->pc = 0x21A304u;
    {
        const bool branch_taken_0x21a304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A304u;
        // 0x21a308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a304) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x21A30Cu;
label_21a30c:
    // 0x21a30c: 0xc0e44cc  jal         func_391330
label_21a310:
    if (ctx->pc == 0x21A310u) {
        ctx->pc = 0x21A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A30Cu;
        // 0x21a310: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A314u;
        goto label_21a314;
    }
    ctx->pc = 0x21A30Cu;
    SET_GPR_U32(ctx, 31, 0x21A314u);
    ctx->pc = 0x21A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A30Cu;
    // 0x21a310: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x21A30Cu, 0x21A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A314u;
label_21a314:
    // 0x21a314: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x21a314u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_21a318:
    // 0x21a318: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x21a318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_21a31c:
    // 0x21a31c: 0x54620022  bnel        $v1, $v0, . + 4 + (0x22 << 2)
label_21a320:
    if (ctx->pc == 0x21A320u) {
        ctx->pc = 0x21A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A31Cu;
        // 0x21a320: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A324u;
        goto label_21a324;
    }
    ctx->pc = 0x21A31Cu;
    {
        const bool branch_taken_0x21a31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a31c) {
            ctx->pc = 0x21A320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A31Cu;
            // 0x21a320: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A3A8u;
            goto label_21a3a8;
        }
    }
    ctx->pc = 0x21A324u;
label_21a324:
    // 0x21a324: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x21a324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_21a328:
    // 0x21a328: 0x1051ff7c  beq         $v0, $s1, . + 4 + (-0x84 << 2)
label_21a32c:
    if (ctx->pc == 0x21A32Cu) {
        ctx->pc = 0x21A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A328u;
        // 0x21a32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A330u;
        goto label_21a330;
    }
    ctx->pc = 0x21A328u;
    {
        const bool branch_taken_0x21a328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x21A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A328u;
        // 0x21a32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a328) {
            ctx->pc = 0x21A11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a11c;
        }
    }
    ctx->pc = 0x21A330u;
label_21a330:
    // 0x21a330: 0xc088b98  jal         func_222E60
label_21a334:
    if (ctx->pc == 0x21A334u) {
        ctx->pc = 0x21A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A330u;
        // 0x21a334: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A338u;
        goto label_21a338;
    }
    ctx->pc = 0x21A330u;
    SET_GPR_U32(ctx, 31, 0x21A338u);
    ctx->pc = 0x21A334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A330u;
    // 0x21a334: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x21A330u, 0x21A338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A338u;
label_21a338:
    // 0x21a338: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21a338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21a33c:
    // 0x21a33c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a33cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a340:
    // 0x21a340: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x21a340u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21a344:
    // 0x21a344: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21a344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21a348:
    // 0x21a348: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_21a34c:
    if (ctx->pc == 0x21A34Cu) {
        ctx->pc = 0x21A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A348u;
        // 0x21a34c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A350u;
        goto label_21a350;
    }
    ctx->pc = 0x21A348u;
    {
        const bool branch_taken_0x21a348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a348) {
            ctx->pc = 0x21A34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A348u;
            // 0x21a34c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A350u;
            goto label_21a350;
        }
    }
    ctx->pc = 0x21A350u;
label_21a350:
    // 0x21a350: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21a350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a354:
    // 0x21a354: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x21a354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a358:
    // 0x21a358: 0x2812  mflo        $a1
    ctx->pc = 0x21a358u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_21a35c:
    // 0x21a35c: 0xc0875a0  jal         func_21D680
label_21a360:
    if (ctx->pc == 0x21A360u) {
        ctx->pc = 0x21A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A35Cu;
        // 0x21a360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A364u;
        goto label_21a364;
    }
    ctx->pc = 0x21A35Cu;
    SET_GPR_U32(ctx, 31, 0x21A364u);
    ctx->pc = 0x21A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A35Cu;
    // 0x21a360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x21A35Cu, 0x21A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A364u;
label_21a364:
    // 0x21a364: 0x8e842c04  lw          $a0, 0x2C04($s4)
    ctx->pc = 0x21a364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
label_21a368:
    // 0x21a368: 0xc0e44cc  jal         func_391330
label_21a36c:
    if (ctx->pc == 0x21A36Cu) {
        ctx->pc = 0x21A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A368u;
        // 0x21a36c: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A370u;
        goto label_21a370;
    }
    ctx->pc = 0x21A368u;
    SET_GPR_U32(ctx, 31, 0x21A370u);
    ctx->pc = 0x21A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A368u;
    // 0x21a36c: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x21A368u, 0x21A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A370u;
label_21a370:
    // 0x21a370: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x21a370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_21a374:
    // 0x21a374: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x21a374u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_21a378:
    // 0x21a378: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x21a378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
label_21a37c:
    // 0x21a37c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x21a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_21a380:
    // 0x21a380: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x21a380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21a384:
    // 0x21a384: 0x90450064  lbu         $a1, 0x64($v0)
    ctx->pc = 0x21a384u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_21a388:
    // 0x21a388: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21a388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21a38c:
    // 0x21a38c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21a38cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21a390:
    // 0x21a390: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x21a390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_21a394:
    // 0x21a394: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x21a394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21a398:
    // 0x21a398: 0xc04420c  jal         func_110830
label_21a39c:
    if (ctx->pc == 0x21A39Cu) {
        ctx->pc = 0x21A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A398u;
        // 0x21a39c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3A0u;
        goto label_21a3a0;
    }
    ctx->pc = 0x21A398u;
    SET_GPR_U32(ctx, 31, 0x21A3A0u);
    ctx->pc = 0x21A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A398u;
    // 0x21a39c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x21A398u, 0x21A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A3A0u;
label_21a3a0:
    // 0x21a3a0: 0x1000ff5e  b           . + 4 + (-0xA2 << 2)
label_21a3a4:
    if (ctx->pc == 0x21A3A4u) {
        ctx->pc = 0x21A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3A0u;
        // 0x21a3a4: 0xae320564  sw          $s2, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3A8u;
        goto label_21a3a8;
    }
    ctx->pc = 0x21A3A0u;
    {
        const bool branch_taken_0x21a3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3A0u;
        // 0x21a3a4: 0xae320564  sw          $s2, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3a0) {
            ctx->pc = 0x21A11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a11c;
        }
    }
    ctx->pc = 0x21A3A8u;
label_21a3a8:
    // 0x21a3a8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x21a3a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_21a3ac:
    // 0x21a3ac: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x21a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_21a3b0:
    // 0x21a3b0: 0x40f809  jalr        $v0
label_21a3b4:
    if (ctx->pc == 0x21A3B4u) {
        ctx->pc = 0x21A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3B0u;
        // 0x21a3b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3B8u;
        goto label_21a3b8;
    }
    ctx->pc = 0x21A3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A3B8u);
        ctx->pc = 0x21A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3B0u;
        // 0x21a3b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A3B0u, 0x21A3B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A3B8u;
label_21a3b8:
    // 0x21a3b8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x21a3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_21a3bc:
    // 0x21a3bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21a3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a3c0:
    // 0x21a3c0: 0xc10c313  jal         func_430C4C
label_21a3c4:
    if (ctx->pc == 0x21A3C4u) {
        ctx->pc = 0x21A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3C0u;
        // 0x21a3c4: 0x24a5a908  addiu       $a1, $a1, -0x56F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3C8u;
        goto label_21a3c8;
    }
    ctx->pc = 0x21A3C0u;
    SET_GPR_U32(ctx, 31, 0x21A3C8u);
    ctx->pc = 0x21A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A3C0u;
    // 0x21a3c4: 0x24a5a908  addiu       $a1, $a1, -0x56F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x21A3C0u, 0x21A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A3C8u;
label_21a3c8:
    // 0x21a3c8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_21a3cc:
    if (ctx->pc == 0x21A3CCu) {
        ctx->pc = 0x21A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3C8u;
        // 0x21a3cc: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3D0u;
        goto label_21a3d0;
    }
    ctx->pc = 0x21A3C8u;
    {
        const bool branch_taken_0x21a3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3C8u;
        // 0x21a3cc: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3c8) {
            ctx->pc = 0x21A468u;
            goto label_21a468;
        }
    }
    ctx->pc = 0x21A3D0u;
label_21a3d0:
    // 0x21a3d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21a3d4:
    // 0x21a3d4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x21a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_21a3d8:
    // 0x21a3d8: 0x906456e5  lbu         $a0, 0x56E5($v1)
    ctx->pc = 0x21a3d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22245)));
label_21a3dc:
    // 0x21a3dc: 0x14800013  bnez        $a0, . + 4 + (0x13 << 2)
label_21a3e0:
    if (ctx->pc == 0x21A3E0u) {
        ctx->pc = 0x21A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3DCu;
        // 0x21a3e0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3E4u;
        goto label_21a3e4;
    }
    ctx->pc = 0x21A3DCu;
    {
        const bool branch_taken_0x21a3dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3DCu;
        // 0x21a3e0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3dc) {
            ctx->pc = 0x21A42Cu;
            goto label_21a42c;
        }
    }
    ctx->pc = 0x21A3E4u;
label_21a3e4:
    // 0x21a3e4: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x21a3e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_21a3e8:
    // 0x21a3e8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21a3e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21a3ec:
    // 0x21a3ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_21a3f0:
    if (ctx->pc == 0x21A3F0u) {
        ctx->pc = 0x21A3F4u;
        goto label_21a3f4;
    }
    ctx->pc = 0x21A3ECu;
    {
        const bool branch_taken_0x21a3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a3ec) {
            ctx->pc = 0x21A42Cu;
            goto label_21a42c;
        }
    }
    ctx->pc = 0x21A3F4u;
label_21a3f4:
    // 0x21a3f4: 0x8e842c04  lw          $a0, 0x2C04($s4)
    ctx->pc = 0x21a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
label_21a3f8:
    // 0x21a3f8: 0xc0e44cc  jal         func_391330
label_21a3fc:
    if (ctx->pc == 0x21A3FCu) {
        ctx->pc = 0x21A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3F8u;
        // 0x21a3fc: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A400u;
        goto label_21a400;
    }
    ctx->pc = 0x21A3F8u;
    SET_GPR_U32(ctx, 31, 0x21A400u);
    ctx->pc = 0x21A3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A3F8u;
    // 0x21a3fc: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x21A3F8u, 0x21A400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A400u;
label_21a400:
    // 0x21a400: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x21a400u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_21a404:
    // 0x21a404: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x21a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_21a408:
    // 0x21a408: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_21a40c:
    if (ctx->pc == 0x21A40Cu) {
        ctx->pc = 0x21A410u;
        goto label_21a410;
    }
    ctx->pc = 0x21A408u;
    {
        const bool branch_taken_0x21a408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a408) {
            ctx->pc = 0x21A42Cu;
            goto label_21a42c;
        }
    }
    ctx->pc = 0x21A410u;
label_21a410:
    // 0x21a410: 0xc088b90  jal         func_222E40
label_21a414:
    if (ctx->pc == 0x21A414u) {
        ctx->pc = 0x21A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A410u;
        // 0x21a414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A418u;
        goto label_21a418;
    }
    ctx->pc = 0x21A410u;
    SET_GPR_U32(ctx, 31, 0x21A418u);
    ctx->pc = 0x21A414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A410u;
    // 0x21a414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x21A410u, 0x21A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A418u;
label_21a418:
    // 0x21a418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a41c:
    // 0x21a41c: 0xc088b98  jal         func_222E60
label_21a420:
    if (ctx->pc == 0x21A420u) {
        ctx->pc = 0x21A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A41Cu;
        // 0x21a420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A424u;
        goto label_21a424;
    }
    ctx->pc = 0x21A41Cu;
    SET_GPR_U32(ctx, 31, 0x21A424u);
    ctx->pc = 0x21A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A41Cu;
    // 0x21a420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x21A41Cu, 0x21A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A424u;
label_21a424:
    // 0x21a424: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x21a424u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_21a428:
    // 0x21a428: 0x10980a  movz        $s3, $zero, $s0
    ctx->pc = 0x21a428u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_21a42c:
    // 0x21a42c: 0x1260ff3b  beqz        $s3, . + 4 + (-0xC5 << 2)
label_21a430:
    if (ctx->pc == 0x21A430u) {
        ctx->pc = 0x21A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A42Cu;
        // 0x21a430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A434u;
        goto label_21a434;
    }
    ctx->pc = 0x21A42Cu;
    {
        const bool branch_taken_0x21a42c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A42Cu;
        // 0x21a430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a42c) {
            ctx->pc = 0x21A11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a11c;
        }
    }
    ctx->pc = 0x21A434u;
label_21a434:
    // 0x21a434: 0xc08715c  jal         func_21C570
label_21a438:
    if (ctx->pc == 0x21A438u) {
        ctx->pc = 0x21A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A434u;
        // 0x21a438: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A43Cu;
        goto label_21a43c;
    }
    ctx->pc = 0x21A434u;
    SET_GPR_U32(ctx, 31, 0x21A43Cu);
    ctx->pc = 0x21A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A434u;
    // 0x21a438: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C570u, 0x21A434u, 0x21A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A43Cu;
label_21a43c:
    // 0x21a43c: 0x1040ff37  beqz        $v0, . + 4 + (-0xC9 << 2)
label_21a440:
    if (ctx->pc == 0x21A440u) {
        ctx->pc = 0x21A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A43Cu;
        // 0x21a440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A444u;
        goto label_21a444;
    }
    ctx->pc = 0x21A43Cu;
    {
        const bool branch_taken_0x21a43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A43Cu;
        // 0x21a440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a43c) {
            ctx->pc = 0x21A11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a11c;
        }
    }
    ctx->pc = 0x21A444u;
label_21a444:
    // 0x21a444: 0xc08efc0  jal         func_23BF00
label_21a448:
    if (ctx->pc == 0x21A448u) {
        ctx->pc = 0x21A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A444u;
        // 0x21a448: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A44Cu;
        goto label_21a44c;
    }
    ctx->pc = 0x21A444u;
    SET_GPR_U32(ctx, 31, 0x21A44Cu);
    ctx->pc = 0x21A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A444u;
    // 0x21a448: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BF00u, 0x21A444u, 0x21A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A44Cu;
label_21a44c:
    // 0x21a44c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_21a450:
    if (ctx->pc == 0x21A450u) {
        ctx->pc = 0x21A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A44Cu;
        // 0x21a450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A454u;
        goto label_21a454;
    }
    ctx->pc = 0x21A44Cu;
    {
        const bool branch_taken_0x21a44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A44Cu;
        // 0x21a450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a44c) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x21A454u;
label_21a454:
    // 0x21a454: 0xc0e4936  jal         func_3924D8
label_21a458:
    if (ctx->pc == 0x21A458u) {
        ctx->pc = 0x21A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A454u;
        // 0x21a458: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A45Cu;
        goto label_21a45c;
    }
    ctx->pc = 0x21A454u;
    SET_GPR_U32(ctx, 31, 0x21A45Cu);
    ctx->pc = 0x21A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A454u;
    // 0x21a458: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3924D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3924D8u, 0x21A454u, 0x21A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A45Cu;
label_21a45c:
    // 0x21a45c: 0x10000003  b           . + 4 + (0x3 << 2)
label_21a460:
    if (ctx->pc == 0x21A460u) {
        ctx->pc = 0x21A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A45Cu;
        // 0x21a460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A464u;
        goto label_21a464;
    }
    ctx->pc = 0x21A45Cu;
    {
        const bool branch_taken_0x21a45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A45Cu;
        // 0x21a460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a45c) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x21A464u;
label_21a464:
    // 0x21a464: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x21a464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_21a468:
    // 0x21a468: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21a468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_21a46c:
    // 0x21a46c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x21a46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21a470:
    // 0x21a470: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x21a470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21a474:
    // 0x21a474: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x21a474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21a478:
    // 0x21a478: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x21a478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21a47c:
    // 0x21a47c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x21a47cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21a480:
    // 0x21a480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21a484:
    // 0x21a484: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x21a484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21a488:
    // 0x21a488: 0x3e00008  jr          $ra
label_21a48c:
    if (ctx->pc == 0x21A48Cu) {
        ctx->pc = 0x21A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A488u;
        // 0x21a48c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A490u;
        goto label_fallthrough_0x21a488;
    }
    ctx->pc = 0x21A488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A488u;
        // 0x21a48c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21a488:
    ctx->pc = 0x21A490u;
}
