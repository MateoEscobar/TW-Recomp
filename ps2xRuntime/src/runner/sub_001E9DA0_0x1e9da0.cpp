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

// Function: sub_001E9DA0
// Address: 0x1e9da0 - 0x1ea7e8
void sub_001E9DA0_0x1e9da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9DA0_0x1e9da0");
#endif

    switch (ctx->pc) {
        case 0x1e9da0u: goto label_1e9da0;
        case 0x1e9da4u: goto label_1e9da4;
        case 0x1e9da8u: goto label_1e9da8;
        case 0x1e9dacu: goto label_1e9dac;
        case 0x1e9db0u: goto label_1e9db0;
        case 0x1e9db4u: goto label_1e9db4;
        case 0x1e9db8u: goto label_1e9db8;
        case 0x1e9dbcu: goto label_1e9dbc;
        case 0x1e9dc0u: goto label_1e9dc0;
        case 0x1e9dc4u: goto label_1e9dc4;
        case 0x1e9dc8u: goto label_1e9dc8;
        case 0x1e9dccu: goto label_1e9dcc;
        case 0x1e9dd0u: goto label_1e9dd0;
        case 0x1e9dd4u: goto label_1e9dd4;
        case 0x1e9dd8u: goto label_1e9dd8;
        case 0x1e9ddcu: goto label_1e9ddc;
        case 0x1e9de0u: goto label_1e9de0;
        case 0x1e9de4u: goto label_1e9de4;
        case 0x1e9de8u: goto label_1e9de8;
        case 0x1e9decu: goto label_1e9dec;
        case 0x1e9df0u: goto label_1e9df0;
        case 0x1e9df4u: goto label_1e9df4;
        case 0x1e9df8u: goto label_1e9df8;
        case 0x1e9dfcu: goto label_1e9dfc;
        case 0x1e9e00u: goto label_1e9e00;
        case 0x1e9e04u: goto label_1e9e04;
        case 0x1e9e08u: goto label_1e9e08;
        case 0x1e9e0cu: goto label_1e9e0c;
        case 0x1e9e10u: goto label_1e9e10;
        case 0x1e9e14u: goto label_1e9e14;
        case 0x1e9e18u: goto label_1e9e18;
        case 0x1e9e1cu: goto label_1e9e1c;
        case 0x1e9e20u: goto label_1e9e20;
        case 0x1e9e24u: goto label_1e9e24;
        case 0x1e9e28u: goto label_1e9e28;
        case 0x1e9e2cu: goto label_1e9e2c;
        case 0x1e9e30u: goto label_1e9e30;
        case 0x1e9e34u: goto label_1e9e34;
        case 0x1e9e38u: goto label_1e9e38;
        case 0x1e9e3cu: goto label_1e9e3c;
        case 0x1e9e40u: goto label_1e9e40;
        case 0x1e9e44u: goto label_1e9e44;
        case 0x1e9e48u: goto label_1e9e48;
        case 0x1e9e4cu: goto label_1e9e4c;
        case 0x1e9e50u: goto label_1e9e50;
        case 0x1e9e54u: goto label_1e9e54;
        case 0x1e9e58u: goto label_1e9e58;
        case 0x1e9e5cu: goto label_1e9e5c;
        case 0x1e9e60u: goto label_1e9e60;
        case 0x1e9e64u: goto label_1e9e64;
        case 0x1e9e68u: goto label_1e9e68;
        case 0x1e9e6cu: goto label_1e9e6c;
        case 0x1e9e70u: goto label_1e9e70;
        case 0x1e9e74u: goto label_1e9e74;
        case 0x1e9e78u: goto label_1e9e78;
        case 0x1e9e7cu: goto label_1e9e7c;
        case 0x1e9e80u: goto label_1e9e80;
        case 0x1e9e84u: goto label_1e9e84;
        case 0x1e9e88u: goto label_1e9e88;
        case 0x1e9e8cu: goto label_1e9e8c;
        case 0x1e9e90u: goto label_1e9e90;
        case 0x1e9e94u: goto label_1e9e94;
        case 0x1e9e98u: goto label_1e9e98;
        case 0x1e9e9cu: goto label_1e9e9c;
        case 0x1e9ea0u: goto label_1e9ea0;
        case 0x1e9ea4u: goto label_1e9ea4;
        case 0x1e9ea8u: goto label_1e9ea8;
        case 0x1e9eacu: goto label_1e9eac;
        case 0x1e9eb0u: goto label_1e9eb0;
        case 0x1e9eb4u: goto label_1e9eb4;
        case 0x1e9eb8u: goto label_1e9eb8;
        case 0x1e9ebcu: goto label_1e9ebc;
        case 0x1e9ec0u: goto label_1e9ec0;
        case 0x1e9ec4u: goto label_1e9ec4;
        case 0x1e9ec8u: goto label_1e9ec8;
        case 0x1e9eccu: goto label_1e9ecc;
        case 0x1e9ed0u: goto label_1e9ed0;
        case 0x1e9ed4u: goto label_1e9ed4;
        case 0x1e9ed8u: goto label_1e9ed8;
        case 0x1e9edcu: goto label_1e9edc;
        case 0x1e9ee0u: goto label_1e9ee0;
        case 0x1e9ee4u: goto label_1e9ee4;
        case 0x1e9ee8u: goto label_1e9ee8;
        case 0x1e9eecu: goto label_1e9eec;
        case 0x1e9ef0u: goto label_1e9ef0;
        case 0x1e9ef4u: goto label_1e9ef4;
        case 0x1e9ef8u: goto label_1e9ef8;
        case 0x1e9efcu: goto label_1e9efc;
        case 0x1e9f00u: goto label_1e9f00;
        case 0x1e9f04u: goto label_1e9f04;
        case 0x1e9f08u: goto label_1e9f08;
        case 0x1e9f0cu: goto label_1e9f0c;
        case 0x1e9f10u: goto label_1e9f10;
        case 0x1e9f14u: goto label_1e9f14;
        case 0x1e9f18u: goto label_1e9f18;
        case 0x1e9f1cu: goto label_1e9f1c;
        case 0x1e9f20u: goto label_1e9f20;
        case 0x1e9f24u: goto label_1e9f24;
        case 0x1e9f28u: goto label_1e9f28;
        case 0x1e9f2cu: goto label_1e9f2c;
        case 0x1e9f30u: goto label_1e9f30;
        case 0x1e9f34u: goto label_1e9f34;
        case 0x1e9f38u: goto label_1e9f38;
        case 0x1e9f3cu: goto label_1e9f3c;
        case 0x1e9f40u: goto label_1e9f40;
        case 0x1e9f44u: goto label_1e9f44;
        case 0x1e9f48u: goto label_1e9f48;
        case 0x1e9f4cu: goto label_1e9f4c;
        case 0x1e9f50u: goto label_1e9f50;
        case 0x1e9f54u: goto label_1e9f54;
        case 0x1e9f58u: goto label_1e9f58;
        case 0x1e9f5cu: goto label_1e9f5c;
        case 0x1e9f60u: goto label_1e9f60;
        case 0x1e9f64u: goto label_1e9f64;
        case 0x1e9f68u: goto label_1e9f68;
        case 0x1e9f6cu: goto label_1e9f6c;
        case 0x1e9f70u: goto label_1e9f70;
        case 0x1e9f74u: goto label_1e9f74;
        case 0x1e9f78u: goto label_1e9f78;
        case 0x1e9f7cu: goto label_1e9f7c;
        case 0x1e9f80u: goto label_1e9f80;
        case 0x1e9f84u: goto label_1e9f84;
        case 0x1e9f88u: goto label_1e9f88;
        case 0x1e9f8cu: goto label_1e9f8c;
        case 0x1e9f90u: goto label_1e9f90;
        case 0x1e9f94u: goto label_1e9f94;
        case 0x1e9f98u: goto label_1e9f98;
        case 0x1e9f9cu: goto label_1e9f9c;
        case 0x1e9fa0u: goto label_1e9fa0;
        case 0x1e9fa4u: goto label_1e9fa4;
        case 0x1e9fa8u: goto label_1e9fa8;
        case 0x1e9facu: goto label_1e9fac;
        case 0x1e9fb0u: goto label_1e9fb0;
        case 0x1e9fb4u: goto label_1e9fb4;
        case 0x1e9fb8u: goto label_1e9fb8;
        case 0x1e9fbcu: goto label_1e9fbc;
        case 0x1e9fc0u: goto label_1e9fc0;
        case 0x1e9fc4u: goto label_1e9fc4;
        case 0x1e9fc8u: goto label_1e9fc8;
        case 0x1e9fccu: goto label_1e9fcc;
        case 0x1e9fd0u: goto label_1e9fd0;
        case 0x1e9fd4u: goto label_1e9fd4;
        case 0x1e9fd8u: goto label_1e9fd8;
        case 0x1e9fdcu: goto label_1e9fdc;
        case 0x1e9fe0u: goto label_1e9fe0;
        case 0x1e9fe4u: goto label_1e9fe4;
        case 0x1e9fe8u: goto label_1e9fe8;
        case 0x1e9fecu: goto label_1e9fec;
        case 0x1e9ff0u: goto label_1e9ff0;
        case 0x1e9ff4u: goto label_1e9ff4;
        case 0x1e9ff8u: goto label_1e9ff8;
        case 0x1e9ffcu: goto label_1e9ffc;
        case 0x1ea000u: goto label_1ea000;
        case 0x1ea004u: goto label_1ea004;
        case 0x1ea008u: goto label_1ea008;
        case 0x1ea00cu: goto label_1ea00c;
        case 0x1ea010u: goto label_1ea010;
        case 0x1ea014u: goto label_1ea014;
        case 0x1ea018u: goto label_1ea018;
        case 0x1ea01cu: goto label_1ea01c;
        case 0x1ea020u: goto label_1ea020;
        case 0x1ea024u: goto label_1ea024;
        case 0x1ea028u: goto label_1ea028;
        case 0x1ea02cu: goto label_1ea02c;
        case 0x1ea030u: goto label_1ea030;
        case 0x1ea034u: goto label_1ea034;
        case 0x1ea038u: goto label_1ea038;
        case 0x1ea03cu: goto label_1ea03c;
        case 0x1ea040u: goto label_1ea040;
        case 0x1ea044u: goto label_1ea044;
        case 0x1ea048u: goto label_1ea048;
        case 0x1ea04cu: goto label_1ea04c;
        case 0x1ea050u: goto label_1ea050;
        case 0x1ea054u: goto label_1ea054;
        case 0x1ea058u: goto label_1ea058;
        case 0x1ea05cu: goto label_1ea05c;
        case 0x1ea060u: goto label_1ea060;
        case 0x1ea064u: goto label_1ea064;
        case 0x1ea068u: goto label_1ea068;
        case 0x1ea06cu: goto label_1ea06c;
        case 0x1ea070u: goto label_1ea070;
        case 0x1ea074u: goto label_1ea074;
        case 0x1ea078u: goto label_1ea078;
        case 0x1ea07cu: goto label_1ea07c;
        case 0x1ea080u: goto label_1ea080;
        case 0x1ea084u: goto label_1ea084;
        case 0x1ea088u: goto label_1ea088;
        case 0x1ea08cu: goto label_1ea08c;
        case 0x1ea090u: goto label_1ea090;
        case 0x1ea094u: goto label_1ea094;
        case 0x1ea098u: goto label_1ea098;
        case 0x1ea09cu: goto label_1ea09c;
        case 0x1ea0a0u: goto label_1ea0a0;
        case 0x1ea0a4u: goto label_1ea0a4;
        case 0x1ea0a8u: goto label_1ea0a8;
        case 0x1ea0acu: goto label_1ea0ac;
        case 0x1ea0b0u: goto label_1ea0b0;
        case 0x1ea0b4u: goto label_1ea0b4;
        case 0x1ea0b8u: goto label_1ea0b8;
        case 0x1ea0bcu: goto label_1ea0bc;
        case 0x1ea0c0u: goto label_1ea0c0;
        case 0x1ea0c4u: goto label_1ea0c4;
        case 0x1ea0c8u: goto label_1ea0c8;
        case 0x1ea0ccu: goto label_1ea0cc;
        case 0x1ea0d0u: goto label_1ea0d0;
        case 0x1ea0d4u: goto label_1ea0d4;
        case 0x1ea0d8u: goto label_1ea0d8;
        case 0x1ea0dcu: goto label_1ea0dc;
        case 0x1ea0e0u: goto label_1ea0e0;
        case 0x1ea0e4u: goto label_1ea0e4;
        case 0x1ea0e8u: goto label_1ea0e8;
        case 0x1ea0ecu: goto label_1ea0ec;
        case 0x1ea0f0u: goto label_1ea0f0;
        case 0x1ea0f4u: goto label_1ea0f4;
        case 0x1ea0f8u: goto label_1ea0f8;
        case 0x1ea0fcu: goto label_1ea0fc;
        case 0x1ea100u: goto label_1ea100;
        case 0x1ea104u: goto label_1ea104;
        case 0x1ea108u: goto label_1ea108;
        case 0x1ea10cu: goto label_1ea10c;
        case 0x1ea110u: goto label_1ea110;
        case 0x1ea114u: goto label_1ea114;
        case 0x1ea118u: goto label_1ea118;
        case 0x1ea11cu: goto label_1ea11c;
        case 0x1ea120u: goto label_1ea120;
        case 0x1ea124u: goto label_1ea124;
        case 0x1ea128u: goto label_1ea128;
        case 0x1ea12cu: goto label_1ea12c;
        case 0x1ea130u: goto label_1ea130;
        case 0x1ea134u: goto label_1ea134;
        case 0x1ea138u: goto label_1ea138;
        case 0x1ea13cu: goto label_1ea13c;
        case 0x1ea140u: goto label_1ea140;
        case 0x1ea144u: goto label_1ea144;
        case 0x1ea148u: goto label_1ea148;
        case 0x1ea14cu: goto label_1ea14c;
        case 0x1ea150u: goto label_1ea150;
        case 0x1ea154u: goto label_1ea154;
        case 0x1ea158u: goto label_1ea158;
        case 0x1ea15cu: goto label_1ea15c;
        case 0x1ea160u: goto label_1ea160;
        case 0x1ea164u: goto label_1ea164;
        case 0x1ea168u: goto label_1ea168;
        case 0x1ea16cu: goto label_1ea16c;
        case 0x1ea170u: goto label_1ea170;
        case 0x1ea174u: goto label_1ea174;
        case 0x1ea178u: goto label_1ea178;
        case 0x1ea17cu: goto label_1ea17c;
        case 0x1ea180u: goto label_1ea180;
        case 0x1ea184u: goto label_1ea184;
        case 0x1ea188u: goto label_1ea188;
        case 0x1ea18cu: goto label_1ea18c;
        case 0x1ea190u: goto label_1ea190;
        case 0x1ea194u: goto label_1ea194;
        case 0x1ea198u: goto label_1ea198;
        case 0x1ea19cu: goto label_1ea19c;
        case 0x1ea1a0u: goto label_1ea1a0;
        case 0x1ea1a4u: goto label_1ea1a4;
        case 0x1ea1a8u: goto label_1ea1a8;
        case 0x1ea1acu: goto label_1ea1ac;
        case 0x1ea1b0u: goto label_1ea1b0;
        case 0x1ea1b4u: goto label_1ea1b4;
        case 0x1ea1b8u: goto label_1ea1b8;
        case 0x1ea1bcu: goto label_1ea1bc;
        case 0x1ea1c0u: goto label_1ea1c0;
        case 0x1ea1c4u: goto label_1ea1c4;
        case 0x1ea1c8u: goto label_1ea1c8;
        case 0x1ea1ccu: goto label_1ea1cc;
        case 0x1ea1d0u: goto label_1ea1d0;
        case 0x1ea1d4u: goto label_1ea1d4;
        case 0x1ea1d8u: goto label_1ea1d8;
        case 0x1ea1dcu: goto label_1ea1dc;
        case 0x1ea1e0u: goto label_1ea1e0;
        case 0x1ea1e4u: goto label_1ea1e4;
        case 0x1ea1e8u: goto label_1ea1e8;
        case 0x1ea1ecu: goto label_1ea1ec;
        case 0x1ea1f0u: goto label_1ea1f0;
        case 0x1ea1f4u: goto label_1ea1f4;
        case 0x1ea1f8u: goto label_1ea1f8;
        case 0x1ea1fcu: goto label_1ea1fc;
        case 0x1ea200u: goto label_1ea200;
        case 0x1ea204u: goto label_1ea204;
        case 0x1ea208u: goto label_1ea208;
        case 0x1ea20cu: goto label_1ea20c;
        case 0x1ea210u: goto label_1ea210;
        case 0x1ea214u: goto label_1ea214;
        case 0x1ea218u: goto label_1ea218;
        case 0x1ea21cu: goto label_1ea21c;
        case 0x1ea220u: goto label_1ea220;
        case 0x1ea224u: goto label_1ea224;
        case 0x1ea228u: goto label_1ea228;
        case 0x1ea22cu: goto label_1ea22c;
        case 0x1ea230u: goto label_1ea230;
        case 0x1ea234u: goto label_1ea234;
        case 0x1ea238u: goto label_1ea238;
        case 0x1ea23cu: goto label_1ea23c;
        case 0x1ea240u: goto label_1ea240;
        case 0x1ea244u: goto label_1ea244;
        case 0x1ea248u: goto label_1ea248;
        case 0x1ea24cu: goto label_1ea24c;
        case 0x1ea250u: goto label_1ea250;
        case 0x1ea254u: goto label_1ea254;
        case 0x1ea258u: goto label_1ea258;
        case 0x1ea25cu: goto label_1ea25c;
        case 0x1ea260u: goto label_1ea260;
        case 0x1ea264u: goto label_1ea264;
        case 0x1ea268u: goto label_1ea268;
        case 0x1ea26cu: goto label_1ea26c;
        case 0x1ea270u: goto label_1ea270;
        case 0x1ea274u: goto label_1ea274;
        case 0x1ea278u: goto label_1ea278;
        case 0x1ea27cu: goto label_1ea27c;
        case 0x1ea280u: goto label_1ea280;
        case 0x1ea284u: goto label_1ea284;
        case 0x1ea288u: goto label_1ea288;
        case 0x1ea28cu: goto label_1ea28c;
        case 0x1ea290u: goto label_1ea290;
        case 0x1ea294u: goto label_1ea294;
        case 0x1ea298u: goto label_1ea298;
        case 0x1ea29cu: goto label_1ea29c;
        case 0x1ea2a0u: goto label_1ea2a0;
        case 0x1ea2a4u: goto label_1ea2a4;
        case 0x1ea2a8u: goto label_1ea2a8;
        case 0x1ea2acu: goto label_1ea2ac;
        case 0x1ea2b0u: goto label_1ea2b0;
        case 0x1ea2b4u: goto label_1ea2b4;
        case 0x1ea2b8u: goto label_1ea2b8;
        case 0x1ea2bcu: goto label_1ea2bc;
        case 0x1ea2c0u: goto label_1ea2c0;
        case 0x1ea2c4u: goto label_1ea2c4;
        case 0x1ea2c8u: goto label_1ea2c8;
        case 0x1ea2ccu: goto label_1ea2cc;
        case 0x1ea2d0u: goto label_1ea2d0;
        case 0x1ea2d4u: goto label_1ea2d4;
        case 0x1ea2d8u: goto label_1ea2d8;
        case 0x1ea2dcu: goto label_1ea2dc;
        case 0x1ea2e0u: goto label_1ea2e0;
        case 0x1ea2e4u: goto label_1ea2e4;
        case 0x1ea2e8u: goto label_1ea2e8;
        case 0x1ea2ecu: goto label_1ea2ec;
        case 0x1ea2f0u: goto label_1ea2f0;
        case 0x1ea2f4u: goto label_1ea2f4;
        case 0x1ea2f8u: goto label_1ea2f8;
        case 0x1ea2fcu: goto label_1ea2fc;
        case 0x1ea300u: goto label_1ea300;
        case 0x1ea304u: goto label_1ea304;
        case 0x1ea308u: goto label_1ea308;
        case 0x1ea30cu: goto label_1ea30c;
        case 0x1ea310u: goto label_1ea310;
        case 0x1ea314u: goto label_1ea314;
        case 0x1ea318u: goto label_1ea318;
        case 0x1ea31cu: goto label_1ea31c;
        case 0x1ea320u: goto label_1ea320;
        case 0x1ea324u: goto label_1ea324;
        case 0x1ea328u: goto label_1ea328;
        case 0x1ea32cu: goto label_1ea32c;
        case 0x1ea330u: goto label_1ea330;
        case 0x1ea334u: goto label_1ea334;
        case 0x1ea338u: goto label_1ea338;
        case 0x1ea33cu: goto label_1ea33c;
        case 0x1ea340u: goto label_1ea340;
        case 0x1ea344u: goto label_1ea344;
        case 0x1ea348u: goto label_1ea348;
        case 0x1ea34cu: goto label_1ea34c;
        case 0x1ea350u: goto label_1ea350;
        case 0x1ea354u: goto label_1ea354;
        case 0x1ea358u: goto label_1ea358;
        case 0x1ea35cu: goto label_1ea35c;
        case 0x1ea360u: goto label_1ea360;
        case 0x1ea364u: goto label_1ea364;
        case 0x1ea368u: goto label_1ea368;
        case 0x1ea36cu: goto label_1ea36c;
        case 0x1ea370u: goto label_1ea370;
        case 0x1ea374u: goto label_1ea374;
        case 0x1ea378u: goto label_1ea378;
        case 0x1ea37cu: goto label_1ea37c;
        case 0x1ea380u: goto label_1ea380;
        case 0x1ea384u: goto label_1ea384;
        case 0x1ea388u: goto label_1ea388;
        case 0x1ea38cu: goto label_1ea38c;
        case 0x1ea390u: goto label_1ea390;
        case 0x1ea394u: goto label_1ea394;
        case 0x1ea398u: goto label_1ea398;
        case 0x1ea39cu: goto label_1ea39c;
        case 0x1ea3a0u: goto label_1ea3a0;
        case 0x1ea3a4u: goto label_1ea3a4;
        case 0x1ea3a8u: goto label_1ea3a8;
        case 0x1ea3acu: goto label_1ea3ac;
        case 0x1ea3b0u: goto label_1ea3b0;
        case 0x1ea3b4u: goto label_1ea3b4;
        case 0x1ea3b8u: goto label_1ea3b8;
        case 0x1ea3bcu: goto label_1ea3bc;
        case 0x1ea3c0u: goto label_1ea3c0;
        case 0x1ea3c4u: goto label_1ea3c4;
        case 0x1ea3c8u: goto label_1ea3c8;
        case 0x1ea3ccu: goto label_1ea3cc;
        case 0x1ea3d0u: goto label_1ea3d0;
        case 0x1ea3d4u: goto label_1ea3d4;
        case 0x1ea3d8u: goto label_1ea3d8;
        case 0x1ea3dcu: goto label_1ea3dc;
        case 0x1ea3e0u: goto label_1ea3e0;
        case 0x1ea3e4u: goto label_1ea3e4;
        case 0x1ea3e8u: goto label_1ea3e8;
        case 0x1ea3ecu: goto label_1ea3ec;
        case 0x1ea3f0u: goto label_1ea3f0;
        case 0x1ea3f4u: goto label_1ea3f4;
        case 0x1ea3f8u: goto label_1ea3f8;
        case 0x1ea3fcu: goto label_1ea3fc;
        case 0x1ea400u: goto label_1ea400;
        case 0x1ea404u: goto label_1ea404;
        case 0x1ea408u: goto label_1ea408;
        case 0x1ea40cu: goto label_1ea40c;
        case 0x1ea410u: goto label_1ea410;
        case 0x1ea414u: goto label_1ea414;
        case 0x1ea418u: goto label_1ea418;
        case 0x1ea41cu: goto label_1ea41c;
        case 0x1ea420u: goto label_1ea420;
        case 0x1ea424u: goto label_1ea424;
        case 0x1ea428u: goto label_1ea428;
        case 0x1ea42cu: goto label_1ea42c;
        case 0x1ea430u: goto label_1ea430;
        case 0x1ea434u: goto label_1ea434;
        case 0x1ea438u: goto label_1ea438;
        case 0x1ea43cu: goto label_1ea43c;
        case 0x1ea440u: goto label_1ea440;
        case 0x1ea444u: goto label_1ea444;
        case 0x1ea448u: goto label_1ea448;
        case 0x1ea44cu: goto label_1ea44c;
        case 0x1ea450u: goto label_1ea450;
        case 0x1ea454u: goto label_1ea454;
        case 0x1ea458u: goto label_1ea458;
        case 0x1ea45cu: goto label_1ea45c;
        case 0x1ea460u: goto label_1ea460;
        case 0x1ea464u: goto label_1ea464;
        case 0x1ea468u: goto label_1ea468;
        case 0x1ea46cu: goto label_1ea46c;
        case 0x1ea470u: goto label_1ea470;
        case 0x1ea474u: goto label_1ea474;
        case 0x1ea478u: goto label_1ea478;
        case 0x1ea47cu: goto label_1ea47c;
        case 0x1ea480u: goto label_1ea480;
        case 0x1ea484u: goto label_1ea484;
        case 0x1ea488u: goto label_1ea488;
        case 0x1ea48cu: goto label_1ea48c;
        case 0x1ea490u: goto label_1ea490;
        case 0x1ea494u: goto label_1ea494;
        case 0x1ea498u: goto label_1ea498;
        case 0x1ea49cu: goto label_1ea49c;
        case 0x1ea4a0u: goto label_1ea4a0;
        case 0x1ea4a4u: goto label_1ea4a4;
        case 0x1ea4a8u: goto label_1ea4a8;
        case 0x1ea4acu: goto label_1ea4ac;
        case 0x1ea4b0u: goto label_1ea4b0;
        case 0x1ea4b4u: goto label_1ea4b4;
        case 0x1ea4b8u: goto label_1ea4b8;
        case 0x1ea4bcu: goto label_1ea4bc;
        case 0x1ea4c0u: goto label_1ea4c0;
        case 0x1ea4c4u: goto label_1ea4c4;
        case 0x1ea4c8u: goto label_1ea4c8;
        case 0x1ea4ccu: goto label_1ea4cc;
        case 0x1ea4d0u: goto label_1ea4d0;
        case 0x1ea4d4u: goto label_1ea4d4;
        case 0x1ea4d8u: goto label_1ea4d8;
        case 0x1ea4dcu: goto label_1ea4dc;
        case 0x1ea4e0u: goto label_1ea4e0;
        case 0x1ea4e4u: goto label_1ea4e4;
        case 0x1ea4e8u: goto label_1ea4e8;
        case 0x1ea4ecu: goto label_1ea4ec;
        case 0x1ea4f0u: goto label_1ea4f0;
        case 0x1ea4f4u: goto label_1ea4f4;
        case 0x1ea4f8u: goto label_1ea4f8;
        case 0x1ea4fcu: goto label_1ea4fc;
        case 0x1ea500u: goto label_1ea500;
        case 0x1ea504u: goto label_1ea504;
        case 0x1ea508u: goto label_1ea508;
        case 0x1ea50cu: goto label_1ea50c;
        case 0x1ea510u: goto label_1ea510;
        case 0x1ea514u: goto label_1ea514;
        case 0x1ea518u: goto label_1ea518;
        case 0x1ea51cu: goto label_1ea51c;
        case 0x1ea520u: goto label_1ea520;
        case 0x1ea524u: goto label_1ea524;
        case 0x1ea528u: goto label_1ea528;
        case 0x1ea52cu: goto label_1ea52c;
        case 0x1ea530u: goto label_1ea530;
        case 0x1ea534u: goto label_1ea534;
        case 0x1ea538u: goto label_1ea538;
        case 0x1ea53cu: goto label_1ea53c;
        case 0x1ea540u: goto label_1ea540;
        case 0x1ea544u: goto label_1ea544;
        case 0x1ea548u: goto label_1ea548;
        case 0x1ea54cu: goto label_1ea54c;
        case 0x1ea550u: goto label_1ea550;
        case 0x1ea554u: goto label_1ea554;
        case 0x1ea558u: goto label_1ea558;
        case 0x1ea55cu: goto label_1ea55c;
        case 0x1ea560u: goto label_1ea560;
        case 0x1ea564u: goto label_1ea564;
        case 0x1ea568u: goto label_1ea568;
        case 0x1ea56cu: goto label_1ea56c;
        case 0x1ea570u: goto label_1ea570;
        case 0x1ea574u: goto label_1ea574;
        case 0x1ea578u: goto label_1ea578;
        case 0x1ea57cu: goto label_1ea57c;
        case 0x1ea580u: goto label_1ea580;
        case 0x1ea584u: goto label_1ea584;
        case 0x1ea588u: goto label_1ea588;
        case 0x1ea58cu: goto label_1ea58c;
        case 0x1ea590u: goto label_1ea590;
        case 0x1ea594u: goto label_1ea594;
        case 0x1ea598u: goto label_1ea598;
        case 0x1ea59cu: goto label_1ea59c;
        case 0x1ea5a0u: goto label_1ea5a0;
        case 0x1ea5a4u: goto label_1ea5a4;
        case 0x1ea5a8u: goto label_1ea5a8;
        case 0x1ea5acu: goto label_1ea5ac;
        case 0x1ea5b0u: goto label_1ea5b0;
        case 0x1ea5b4u: goto label_1ea5b4;
        case 0x1ea5b8u: goto label_1ea5b8;
        case 0x1ea5bcu: goto label_1ea5bc;
        case 0x1ea5c0u: goto label_1ea5c0;
        case 0x1ea5c4u: goto label_1ea5c4;
        case 0x1ea5c8u: goto label_1ea5c8;
        case 0x1ea5ccu: goto label_1ea5cc;
        case 0x1ea5d0u: goto label_1ea5d0;
        case 0x1ea5d4u: goto label_1ea5d4;
        case 0x1ea5d8u: goto label_1ea5d8;
        case 0x1ea5dcu: goto label_1ea5dc;
        case 0x1ea5e0u: goto label_1ea5e0;
        case 0x1ea5e4u: goto label_1ea5e4;
        case 0x1ea5e8u: goto label_1ea5e8;
        case 0x1ea5ecu: goto label_1ea5ec;
        case 0x1ea5f0u: goto label_1ea5f0;
        case 0x1ea5f4u: goto label_1ea5f4;
        case 0x1ea5f8u: goto label_1ea5f8;
        case 0x1ea5fcu: goto label_1ea5fc;
        case 0x1ea600u: goto label_1ea600;
        case 0x1ea604u: goto label_1ea604;
        case 0x1ea608u: goto label_1ea608;
        case 0x1ea60cu: goto label_1ea60c;
        case 0x1ea610u: goto label_1ea610;
        case 0x1ea614u: goto label_1ea614;
        case 0x1ea618u: goto label_1ea618;
        case 0x1ea61cu: goto label_1ea61c;
        case 0x1ea620u: goto label_1ea620;
        case 0x1ea624u: goto label_1ea624;
        case 0x1ea628u: goto label_1ea628;
        case 0x1ea62cu: goto label_1ea62c;
        case 0x1ea630u: goto label_1ea630;
        case 0x1ea634u: goto label_1ea634;
        case 0x1ea638u: goto label_1ea638;
        case 0x1ea63cu: goto label_1ea63c;
        case 0x1ea640u: goto label_1ea640;
        case 0x1ea644u: goto label_1ea644;
        case 0x1ea648u: goto label_1ea648;
        case 0x1ea64cu: goto label_1ea64c;
        case 0x1ea650u: goto label_1ea650;
        case 0x1ea654u: goto label_1ea654;
        case 0x1ea658u: goto label_1ea658;
        case 0x1ea65cu: goto label_1ea65c;
        case 0x1ea660u: goto label_1ea660;
        case 0x1ea664u: goto label_1ea664;
        case 0x1ea668u: goto label_1ea668;
        case 0x1ea66cu: goto label_1ea66c;
        case 0x1ea670u: goto label_1ea670;
        case 0x1ea674u: goto label_1ea674;
        case 0x1ea678u: goto label_1ea678;
        case 0x1ea67cu: goto label_1ea67c;
        case 0x1ea680u: goto label_1ea680;
        case 0x1ea684u: goto label_1ea684;
        case 0x1ea688u: goto label_1ea688;
        case 0x1ea68cu: goto label_1ea68c;
        case 0x1ea690u: goto label_1ea690;
        case 0x1ea694u: goto label_1ea694;
        case 0x1ea698u: goto label_1ea698;
        case 0x1ea69cu: goto label_1ea69c;
        case 0x1ea6a0u: goto label_1ea6a0;
        case 0x1ea6a4u: goto label_1ea6a4;
        case 0x1ea6a8u: goto label_1ea6a8;
        case 0x1ea6acu: goto label_1ea6ac;
        case 0x1ea6b0u: goto label_1ea6b0;
        case 0x1ea6b4u: goto label_1ea6b4;
        case 0x1ea6b8u: goto label_1ea6b8;
        case 0x1ea6bcu: goto label_1ea6bc;
        case 0x1ea6c0u: goto label_1ea6c0;
        case 0x1ea6c4u: goto label_1ea6c4;
        case 0x1ea6c8u: goto label_1ea6c8;
        case 0x1ea6ccu: goto label_1ea6cc;
        case 0x1ea6d0u: goto label_1ea6d0;
        case 0x1ea6d4u: goto label_1ea6d4;
        case 0x1ea6d8u: goto label_1ea6d8;
        case 0x1ea6dcu: goto label_1ea6dc;
        case 0x1ea6e0u: goto label_1ea6e0;
        case 0x1ea6e4u: goto label_1ea6e4;
        case 0x1ea6e8u: goto label_1ea6e8;
        case 0x1ea6ecu: goto label_1ea6ec;
        case 0x1ea6f0u: goto label_1ea6f0;
        case 0x1ea6f4u: goto label_1ea6f4;
        case 0x1ea6f8u: goto label_1ea6f8;
        case 0x1ea6fcu: goto label_1ea6fc;
        case 0x1ea700u: goto label_1ea700;
        case 0x1ea704u: goto label_1ea704;
        case 0x1ea708u: goto label_1ea708;
        case 0x1ea70cu: goto label_1ea70c;
        case 0x1ea710u: goto label_1ea710;
        case 0x1ea714u: goto label_1ea714;
        case 0x1ea718u: goto label_1ea718;
        case 0x1ea71cu: goto label_1ea71c;
        case 0x1ea720u: goto label_1ea720;
        case 0x1ea724u: goto label_1ea724;
        case 0x1ea728u: goto label_1ea728;
        case 0x1ea72cu: goto label_1ea72c;
        case 0x1ea730u: goto label_1ea730;
        case 0x1ea734u: goto label_1ea734;
        case 0x1ea738u: goto label_1ea738;
        case 0x1ea73cu: goto label_1ea73c;
        case 0x1ea740u: goto label_1ea740;
        case 0x1ea744u: goto label_1ea744;
        case 0x1ea748u: goto label_1ea748;
        case 0x1ea74cu: goto label_1ea74c;
        case 0x1ea750u: goto label_1ea750;
        case 0x1ea754u: goto label_1ea754;
        case 0x1ea758u: goto label_1ea758;
        case 0x1ea75cu: goto label_1ea75c;
        case 0x1ea760u: goto label_1ea760;
        case 0x1ea764u: goto label_1ea764;
        case 0x1ea768u: goto label_1ea768;
        case 0x1ea76cu: goto label_1ea76c;
        case 0x1ea770u: goto label_1ea770;
        case 0x1ea774u: goto label_1ea774;
        case 0x1ea778u: goto label_1ea778;
        case 0x1ea77cu: goto label_1ea77c;
        case 0x1ea780u: goto label_1ea780;
        case 0x1ea784u: goto label_1ea784;
        case 0x1ea788u: goto label_1ea788;
        case 0x1ea78cu: goto label_1ea78c;
        case 0x1ea790u: goto label_1ea790;
        case 0x1ea794u: goto label_1ea794;
        case 0x1ea798u: goto label_1ea798;
        case 0x1ea79cu: goto label_1ea79c;
        case 0x1ea7a0u: goto label_1ea7a0;
        case 0x1ea7a4u: goto label_1ea7a4;
        case 0x1ea7a8u: goto label_1ea7a8;
        case 0x1ea7acu: goto label_1ea7ac;
        case 0x1ea7b0u: goto label_1ea7b0;
        case 0x1ea7b4u: goto label_1ea7b4;
        case 0x1ea7b8u: goto label_1ea7b8;
        case 0x1ea7bcu: goto label_1ea7bc;
        case 0x1ea7c0u: goto label_1ea7c0;
        case 0x1ea7c4u: goto label_1ea7c4;
        case 0x1ea7c8u: goto label_1ea7c8;
        case 0x1ea7ccu: goto label_1ea7cc;
        case 0x1ea7d0u: goto label_1ea7d0;
        case 0x1ea7d4u: goto label_1ea7d4;
        case 0x1ea7d8u: goto label_1ea7d8;
        case 0x1ea7dcu: goto label_1ea7dc;
        case 0x1ea7e0u: goto label_1ea7e0;
        case 0x1ea7e4u: goto label_1ea7e4;
        default: break;
    }

    ctx->pc = 0x1e9da0u;

label_1e9da0:
    // 0x1e9da0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1e9da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1e9da4:
    // 0x1e9da4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9da8:
    // 0x1e9da8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1e9da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1e9dac:
    // 0x1e9dac: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1e9dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1e9db0:
    // 0x1e9db0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1e9db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1e9db4:
    // 0x1e9db4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1e9db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1e9db8:
    // 0x1e9db8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e9db8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9dbc:
    // 0x1e9dbc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1e9dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1e9dc0:
    // 0x1e9dc0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1e9dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1e9dc4:
    // 0x1e9dc4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e9dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e9dc8:
    // 0x1e9dc8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1e9dc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9dcc:
    // 0x1e9dcc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e9dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e9dd0:
    // 0x1e9dd0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1e9dd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e9dd4:
    // 0x1e9dd4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1e9dd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1e9dd8:
    // 0x1e9dd8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e9dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1e9ddc:
    // 0x1e9ddc: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1e9ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1e9de0:
    // 0x1e9de0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e9de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1e9de4:
    // 0x1e9de4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e9de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e9de8:
    // 0x1e9de8: 0x8e4500d4  lw          $a1, 0xD4($s2)
    ctx->pc = 0x1e9de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_1e9dec:
    // 0x1e9dec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e9decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e9df0:
    // 0x1e9df0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1e9df0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1e9df4:
    // 0x1e9df4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1e9df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1e9df8:
    // 0x1e9df8: 0x60f809  jalr        $v1
label_1e9dfc:
    if (ctx->pc == 0x1E9DFCu) {
        ctx->pc = 0x1E9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DF8u;
        // 0x1e9dfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9E00u;
        goto label_1e9e00;
    }
    ctx->pc = 0x1E9DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E9E00u);
        ctx->pc = 0x1E9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DF8u;
        // 0x1e9dfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9DF8u, 0x1E9E00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9E00u;
label_1e9e00:
    // 0x1e9e00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e9e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e9e04:
    // 0x1e9e04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e9e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e9e08:
    // 0x1e9e08: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1e9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e9e0c:
    // 0x1e9e0c: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x1e9e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
label_1e9e10:
    // 0x1e9e10: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1e9e10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1e9e14:
    // 0x1e9e14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e9e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e9e18:
    // 0x1e9e18: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1e9e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e9e1c:
    // 0x1e9e1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e9e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e9e20:
    // 0x1e9e20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e9e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9e24:
    // 0x1e9e24: 0x26470050  addiu       $a3, $s2, 0x50
    ctx->pc = 0x1e9e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1e9e28:
    // 0x1e9e28: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1e9e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1e9e2c:
    // 0x1e9e2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e9e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9e30:
    // 0x1e9e30: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1e9e30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1e9e34:
    // 0x1e9e34: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1e9e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1e9e38:
    // 0x1e9e38: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e9e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1e9e3c:
    // 0x1e9e3c: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x1e9e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e9e40:
    // 0x1e9e40: 0xc075044  jal         func_1D4110
label_1e9e44:
    if (ctx->pc == 0x1E9E44u) {
        ctx->pc = 0x1E9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E40u;
        // 0x1e9e44: 0x8e4400d4  lw          $a0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9E48u;
        goto label_1e9e48;
    }
    ctx->pc = 0x1E9E40u;
    SET_GPR_U32(ctx, 31, 0x1E9E48u);
    ctx->pc = 0x1E9E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9E40u;
    // 0x1e9e44: 0x8e4400d4  lw          $a0, 0xD4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1E9E40u, 0x1E9E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E48u;
label_1e9e48:
    // 0x1e9e48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e9e4c:
    // 0x1e9e4c: 0x3c013f45  lui         $at, 0x3F45
    ctx->pc = 0x1e9e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16197 << 16));
label_1e9e50:
    // 0x1e9e50: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1e9e50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1e9e54:
    // 0x1e9e54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e9e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9e58:
    // 0x1e9e58: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x1e9e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_1e9e5c:
    // 0x1e9e5c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1e9e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1e9e60:
    // 0x1e9e60: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x1e9e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
label_1e9e64:
    // 0x1e9e64: 0xc1078ea  jal         func_41E3A8
label_1e9e68:
    if (ctx->pc == 0x1E9E68u) {
        ctx->pc = 0x1E9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E64u;
        // 0x1e9e68: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9E6Cu;
        goto label_1e9e6c;
    }
    ctx->pc = 0x1E9E64u;
    SET_GPR_U32(ctx, 31, 0x1E9E6Cu);
    ctx->pc = 0x1E9E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9E64u;
    // 0x1e9e68: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E3A8u, 0x1E9E64u, 0x1E9E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E6Cu;
label_1e9e6c:
    // 0x1e9e6c: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1e9e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1e9e70:
    // 0x1e9e70: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1e9e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e9e74:
    // 0x1e9e74: 0x26106bd0  addiu       $s0, $s0, 0x6BD0
    ctx->pc = 0x1e9e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27600));
label_1e9e78:
    // 0x1e9e78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e9e78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9e7c:
    // 0x1e9e7c: 0xc067b9c  jal         func_19EE70
label_1e9e80:
    if (ctx->pc == 0x1E9E80u) {
        ctx->pc = 0x1E9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E7Cu;
        // 0x1e9e80: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9E84u;
        goto label_1e9e84;
    }
    ctx->pc = 0x1E9E7Cu;
    SET_GPR_U32(ctx, 31, 0x1E9E84u);
    ctx->pc = 0x1E9E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9E7Cu;
    // 0x1e9e80: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E9E7Cu, 0x1E9E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E84u;
label_1e9e84:
    // 0x1e9e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9e88:
    // 0x1e9e88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9e8c:
    // 0x1e9e8c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1e9e8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e9e90:
    // 0x1e9e90: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e9e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9e94:
    // 0x1e9e94: 0xc10ca04  jal         func_432810
label_1e9e98:
    if (ctx->pc == 0x1E9E98u) {
        ctx->pc = 0x1E9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E94u;
        // 0x1e9e98: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9E9Cu;
        goto label_1e9e9c;
    }
    ctx->pc = 0x1E9E94u;
    SET_GPR_U32(ctx, 31, 0x1E9E9Cu);
    ctx->pc = 0x1E9E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9E94u;
    // 0x1e9e98: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1E9E94u, 0x1E9E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E9Cu;
label_1e9e9c:
    // 0x1e9e9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e9ea0:
    // 0x1e9ea0: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x1e9ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_1e9ea4:
    // 0x1e9ea4: 0x8c74d320  lw          $s4, -0x2CE0($v1)
    ctx->pc = 0x1e9ea4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955808)));
label_1e9ea8:
    // 0x1e9ea8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e9ea8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e9eac:
    // 0x1e9eac: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x1e9eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_1e9eb0:
    // 0x1e9eb0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e9eb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9eb4:
    // 0x1e9eb4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1e9eb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e9eb8:
    // 0x1e9eb8: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1e9eb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e9ebc:
    // 0x1e9ebc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e9ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ec0:
    // 0x1e9ec0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e9ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9ec4:
    // 0x1e9ec4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e9ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ec8:
    // 0x1e9ec8: 0xc07508c  jal         func_1D4230
label_1e9ecc:
    if (ctx->pc == 0x1E9ECCu) {
        ctx->pc = 0x1E9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9EC8u;
        // 0x1e9ecc: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9ED0u;
        goto label_1e9ed0;
    }
    ctx->pc = 0x1E9EC8u;
    SET_GPR_U32(ctx, 31, 0x1E9ED0u);
    ctx->pc = 0x1E9ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9EC8u;
    // 0x1e9ecc: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1E9EC8u, 0x1E9ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9ED0u;
label_1e9ed0:
    // 0x1e9ed0: 0xc067b9c  jal         func_19EE70
label_1e9ed4:
    if (ctx->pc == 0x1E9ED4u) {
        ctx->pc = 0x1E9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9ED0u;
        // 0x1e9ed4: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9ED8u;
        goto label_1e9ed8;
    }
    ctx->pc = 0x1E9ED0u;
    SET_GPR_U32(ctx, 31, 0x1E9ED8u);
    ctx->pc = 0x1E9ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9ED0u;
    // 0x1e9ed4: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E9ED0u, 0x1E9ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9ED8u;
label_1e9ed8:
    // 0x1e9ed8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9edc:
    // 0x1e9edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ee0:
    // 0x1e9ee0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1e9ee0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ee4:
    // 0x1e9ee4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e9ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ee8:
    // 0x1e9ee8: 0xc10ca04  jal         func_432810
label_1e9eec:
    if (ctx->pc == 0x1E9EECu) {
        ctx->pc = 0x1E9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9EE8u;
        // 0x1e9eec: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9EF0u;
        goto label_1e9ef0;
    }
    ctx->pc = 0x1E9EE8u;
    SET_GPR_U32(ctx, 31, 0x1E9EF0u);
    ctx->pc = 0x1E9EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9EE8u;
    // 0x1e9eec: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1E9EE8u, 0x1E9EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9EF0u;
label_1e9ef0:
    // 0x1e9ef0: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x1e9ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_1e9ef4:
    // 0x1e9ef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e9ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ef8:
    // 0x1e9ef8: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x1e9ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_1e9efc:
    // 0x1e9efc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e9efcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e9f00:
    // 0x1e9f00: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1e9f00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e9f04:
    // 0x1e9f04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e9f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9f08:
    // 0x1e9f08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e9f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9f0c:
    // 0x1e9f0c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1e9f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e9f10:
    // 0x1e9f10: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e9f10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9f14:
    // 0x1e9f14: 0xc07508c  jal         func_1D4230
label_1e9f18:
    if (ctx->pc == 0x1E9F18u) {
        ctx->pc = 0x1E9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F14u;
        // 0x1e9f18: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9F1Cu;
        goto label_1e9f1c;
    }
    ctx->pc = 0x1E9F14u;
    SET_GPR_U32(ctx, 31, 0x1E9F1Cu);
    ctx->pc = 0x1E9F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F14u;
    // 0x1e9f18: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1E9F14u, 0x1E9F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F1Cu;
label_1e9f1c:
    // 0x1e9f1c: 0x8e4500d4  lw          $a1, 0xD4($s2)
    ctx->pc = 0x1e9f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_1e9f20:
    // 0x1e9f20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e9f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e9f24:
    // 0x1e9f24: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e9f24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1e9f28:
    // 0x1e9f28: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1e9f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1e9f2c:
    // 0x1e9f2c: 0x60f809  jalr        $v1
label_1e9f30:
    if (ctx->pc == 0x1E9F30u) {
        ctx->pc = 0x1E9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F2Cu;
        // 0x1e9f30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9F34u;
        goto label_1e9f34;
    }
    ctx->pc = 0x1E9F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E9F34u);
        ctx->pc = 0x1E9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F2Cu;
        // 0x1e9f30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9F2Cu, 0x1E9F34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9F34u;
label_1e9f34:
    // 0x1e9f34: 0x276982b  sltu        $s3, $s3, $s6
    ctx->pc = 0x1e9f34u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_1e9f38:
    // 0x1e9f38: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1e9f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1e9f3c:
    // 0x1e9f3c: 0x3a730001  xori        $s3, $s3, 0x1
    ctx->pc = 0x1e9f3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
label_1e9f40:
    // 0x1e9f40: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1e9f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1e9f44:
    // 0x1e9f44: 0xae5300e0  sw          $s3, 0xE0($s2)
    ctx->pc = 0x1e9f44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 19));
label_1e9f48:
    // 0x1e9f48: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1e9f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e9f4c:
    // 0x1e9f4c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1e9f4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e9f50:
    // 0x1e9f50: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1e9f50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e9f54:
    // 0x1e9f54: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1e9f54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e9f58:
    // 0x1e9f58: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e9f58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e9f5c:
    // 0x1e9f5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e9f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e9f60:
    // 0x1e9f60: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1e9f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e9f64:
    // 0x1e9f64: 0x3e00008  jr          $ra
label_1e9f68:
    if (ctx->pc == 0x1E9F68u) {
        ctx->pc = 0x1E9F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F64u;
        // 0x1e9f68: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9F6Cu;
        goto label_1e9f6c;
    }
    ctx->pc = 0x1E9F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F64u;
        // 0x1e9f68: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9F6Cu;
label_1e9f6c:
    // 0x1e9f6c: 0x0  nop
    ctx->pc = 0x1e9f6cu;
    // NOP
label_1e9f70:
    // 0x1e9f70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e9f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1e9f74:
    // 0x1e9f74: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e9f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1e9f78:
    // 0x1e9f78: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1e9f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_1e9f7c:
    // 0x1e9f7c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e9f7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9f80:
    // 0x1e9f80: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e9f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1e9f84:
    // 0x1e9f84: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e9f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1e9f88:
    // 0x1e9f88: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e9f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1e9f8c:
    // 0x1e9f8c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e9f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1e9f90:
    // 0x1e9f90: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1e9f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1e9f94:
    // 0x1e9f94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e9f98:
    // 0x1e9f98: 0x8e8300dc  lw          $v1, 0xDC($s4)
    ctx->pc = 0x1e9f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_1e9f9c:
    // 0x1e9f9c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1e9f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1e9fa0:
    // 0x1e9fa0: 0x104001d8  beqz        $v0, . + 4 + (0x1D8 << 2)
label_1e9fa4:
    if (ctx->pc == 0x1E9FA4u) {
        ctx->pc = 0x1E9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FA0u;
        // 0x1e9fa4: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9FA8u;
        goto label_1e9fa8;
    }
    ctx->pc = 0x1E9FA0u;
    {
        const bool branch_taken_0x1e9fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FA0u;
        // 0x1e9fa4: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9fa0) {
            ctx->pc = 0x1EA704u;
            goto label_1ea704;
        }
    }
    ctx->pc = 0x1E9FA8u;
label_1e9fa8:
    // 0x1e9fa8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1e9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1e9fac:
    // 0x1e9fac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e9facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e9fb0:
    // 0x1e9fb0: 0x24426c10  addiu       $v0, $v0, 0x6C10
    ctx->pc = 0x1e9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27664));
label_1e9fb4:
    // 0x1e9fb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e9fb8:
    // 0x1e9fb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e9fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e9fbc:
    // 0x1e9fbc: 0x800008  jr          $a0
label_1e9fc0:
    if (ctx->pc == 0x1E9FC0u) {
        ctx->pc = 0x1E9FC4u;
        goto label_1e9fc4;
    }
    ctx->pc = 0x1E9FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9FC4u: goto label_1e9fc4;
            case 0x1EA070u: goto label_1ea070;
            case 0x1EA11Cu: goto label_1ea11c;
            case 0x1EA3D8u: goto label_1ea3d8;
            case 0x1EA4B4u: goto label_1ea4b4;
            case 0x1EA5A8u: goto label_1ea5a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9FBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E9FC4u;
label_1e9fc4:
    // 0x1e9fc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e9fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e9fc8:
    // 0x1e9fc8: 0xc07a6fc  jal         func_1E9BF0
label_1e9fcc:
    if (ctx->pc == 0x1E9FCCu) {
        ctx->pc = 0x1E9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FC8u;
        // 0x1e9fcc: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9FD0u;
        goto label_1e9fd0;
    }
    ctx->pc = 0x1E9FC8u;
    SET_GPR_U32(ctx, 31, 0x1E9FD0u);
    ctx->pc = 0x1E9FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9FC8u;
    // 0x1e9fcc: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9BF0u, 0x1E9FC8u, 0x1E9FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9FD0u;
label_1e9fd0:
    // 0x1e9fd0: 0x8e8600f8  lw          $a2, 0xF8($s4)
    ctx->pc = 0x1e9fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_1e9fd4:
    // 0x1e9fd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9fd8:
    // 0x1e9fd8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e9fdc:
    // 0x1e9fdc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1e9fdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1e9fe0:
    // 0x1e9fe0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1e9fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1e9fe4:
    // 0x1e9fe4: 0x60f809  jalr        $v1
label_1e9fe8:
    if (ctx->pc == 0x1E9FE8u) {
        ctx->pc = 0x1E9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FE4u;
        // 0x1e9fe8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9FECu;
        goto label_1e9fec;
    }
    ctx->pc = 0x1E9FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E9FECu);
        ctx->pc = 0x1E9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FE4u;
        // 0x1e9fe8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9FE4u, 0x1E9FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9FECu;
label_1e9fec:
    // 0x1e9fec: 0x8e8600c4  lw          $a2, 0xC4($s4)
    ctx->pc = 0x1e9fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_1e9ff0:
    // 0x1e9ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ff4:
    // 0x1e9ff4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e9ff8:
    // 0x1e9ff8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1e9ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1e9ffc:
    // 0x1e9ffc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1e9ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea000:
    // 0x1ea000: 0x60f809  jalr        $v1
label_1ea004:
    if (ctx->pc == 0x1EA004u) {
        ctx->pc = 0x1EA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA000u;
        // 0x1ea004: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA008u;
        goto label_1ea008;
    }
    ctx->pc = 0x1EA000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA008u);
        ctx->pc = 0x1EA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA000u;
        // 0x1ea004: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA000u, 0x1EA008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA008u;
label_1ea008:
    // 0x1ea008: 0x8e8600cc  lw          $a2, 0xCC($s4)
    ctx->pc = 0x1ea008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
label_1ea00c:
    // 0x1ea00c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea010:
    // 0x1ea010: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea014:
    // 0x1ea014: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea018:
    // 0x1ea018: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea01c:
    // 0x1ea01c: 0x60f809  jalr        $v1
label_1ea020:
    if (ctx->pc == 0x1EA020u) {
        ctx->pc = 0x1EA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA01Cu;
        // 0x1ea020: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA024u;
        goto label_1ea024;
    }
    ctx->pc = 0x1EA01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA024u);
        ctx->pc = 0x1EA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA01Cu;
        // 0x1ea020: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA01Cu, 0x1EA024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA024u;
label_1ea024:
    // 0x1ea024: 0x8e8600fc  lw          $a2, 0xFC($s4)
    ctx->pc = 0x1ea024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
label_1ea028:
    // 0x1ea028: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea02c:
    // 0x1ea02c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea030:
    // 0x1ea030: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea034:
    // 0x1ea034: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea038:
    // 0x1ea038: 0x60f809  jalr        $v1
label_1ea03c:
    if (ctx->pc == 0x1EA03Cu) {
        ctx->pc = 0x1EA03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA038u;
        // 0x1ea03c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA040u;
        goto label_1ea040;
    }
    ctx->pc = 0x1EA038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA040u);
        ctx->pc = 0x1EA03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA038u;
        // 0x1ea03c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA038u, 0x1EA040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA040u;
label_1ea040:
    // 0x1ea040: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x1ea040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_1ea044:
    // 0x1ea044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea048:
    // 0x1ea048: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1ea048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_1ea04c:
    // 0x1ea04c: 0x8e8600d4  lw          $a2, 0xD4($s4)
    ctx->pc = 0x1ea04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_1ea050:
    // 0x1ea050: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea054:
    // 0x1ea054: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea058:
    // 0x1ea058: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea05c:
    // 0x1ea05c: 0x60f809  jalr        $v1
label_1ea060:
    if (ctx->pc == 0x1EA060u) {
        ctx->pc = 0x1EA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA05Cu;
        // 0x1ea060: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA064u;
        goto label_1ea064;
    }
    ctx->pc = 0x1EA05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA064u);
        ctx->pc = 0x1EA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA05Cu;
        // 0x1ea060: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA05Cu, 0x1EA064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA064u;
label_1ea064:
    // 0x1ea064: 0x8e8600d0  lw          $a2, 0xD0($s4)
    ctx->pc = 0x1ea064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
label_1ea068:
    // 0x1ea068: 0x10000148  b           . + 4 + (0x148 << 2)
label_1ea06c:
    if (ctx->pc == 0x1EA06Cu) {
        ctx->pc = 0x1EA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA068u;
        // 0x1ea06c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA070u;
        goto label_1ea070;
    }
    ctx->pc = 0x1EA068u;
    {
        const bool branch_taken_0x1ea068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA068u;
        // 0x1ea06c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea068) {
            ctx->pc = 0x1EA58Cu;
            goto label_1ea58c;
        }
    }
    ctx->pc = 0x1EA070u;
label_1ea070:
    // 0x1ea070: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ea070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ea074:
    // 0x1ea074: 0xc07a6fc  jal         func_1E9BF0
label_1ea078:
    if (ctx->pc == 0x1EA078u) {
        ctx->pc = 0x1EA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA074u;
        // 0x1ea078: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA07Cu;
        goto label_1ea07c;
    }
    ctx->pc = 0x1EA074u;
    SET_GPR_U32(ctx, 31, 0x1EA07Cu);
    ctx->pc = 0x1EA078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA074u;
    // 0x1ea078: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9BF0u, 0x1EA074u, 0x1EA07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA07Cu;
label_1ea07c:
    // 0x1ea07c: 0x8e8600f8  lw          $a2, 0xF8($s4)
    ctx->pc = 0x1ea07cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_1ea080:
    // 0x1ea080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea084:
    // 0x1ea084: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea088:
    // 0x1ea088: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea08c:
    // 0x1ea08c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea090:
    // 0x1ea090: 0x60f809  jalr        $v1
label_1ea094:
    if (ctx->pc == 0x1EA094u) {
        ctx->pc = 0x1EA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA090u;
        // 0x1ea094: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA098u;
        goto label_1ea098;
    }
    ctx->pc = 0x1EA090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA098u);
        ctx->pc = 0x1EA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA090u;
        // 0x1ea094: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA090u, 0x1EA098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA098u;
label_1ea098:
    // 0x1ea098: 0x8e8600c4  lw          $a2, 0xC4($s4)
    ctx->pc = 0x1ea098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_1ea09c:
    // 0x1ea09c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0a0:
    // 0x1ea0a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea0a4:
    // 0x1ea0a4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea0a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea0a8:
    // 0x1ea0a8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea0ac:
    // 0x1ea0ac: 0x60f809  jalr        $v1
label_1ea0b0:
    if (ctx->pc == 0x1EA0B0u) {
        ctx->pc = 0x1EA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0ACu;
        // 0x1ea0b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0B4u;
        goto label_1ea0b4;
    }
    ctx->pc = 0x1EA0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA0B4u);
        ctx->pc = 0x1EA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0ACu;
        // 0x1ea0b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA0ACu, 0x1EA0B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA0B4u;
label_1ea0b4:
    // 0x1ea0b4: 0x8e8600cc  lw          $a2, 0xCC($s4)
    ctx->pc = 0x1ea0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
label_1ea0b8:
    // 0x1ea0b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea0bc:
    // 0x1ea0bc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea0c0:
    // 0x1ea0c0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea0c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea0c4:
    // 0x1ea0c4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea0c8:
    // 0x1ea0c8: 0x60f809  jalr        $v1
label_1ea0cc:
    if (ctx->pc == 0x1EA0CCu) {
        ctx->pc = 0x1EA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0C8u;
        // 0x1ea0cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0D0u;
        goto label_1ea0d0;
    }
    ctx->pc = 0x1EA0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA0D0u);
        ctx->pc = 0x1EA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0C8u;
        // 0x1ea0cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA0C8u, 0x1EA0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA0D0u;
label_1ea0d0:
    // 0x1ea0d0: 0x8e8600fc  lw          $a2, 0xFC($s4)
    ctx->pc = 0x1ea0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
label_1ea0d4:
    // 0x1ea0d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0d8:
    // 0x1ea0d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea0dc:
    // 0x1ea0dc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea0e0:
    // 0x1ea0e0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea0e4:
    // 0x1ea0e4: 0x60f809  jalr        $v1
label_1ea0e8:
    if (ctx->pc == 0x1EA0E8u) {
        ctx->pc = 0x1EA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0E4u;
        // 0x1ea0e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0ECu;
        goto label_1ea0ec;
    }
    ctx->pc = 0x1EA0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA0ECu);
        ctx->pc = 0x1EA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0E4u;
        // 0x1ea0e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA0E4u, 0x1EA0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA0ECu;
label_1ea0ec:
    // 0x1ea0ec: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x1ea0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_1ea0f0:
    // 0x1ea0f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0f4:
    // 0x1ea0f4: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1ea0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_1ea0f8:
    // 0x1ea0f8: 0x8e8600d4  lw          $a2, 0xD4($s4)
    ctx->pc = 0x1ea0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_1ea0fc:
    // 0x1ea0fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea100:
    // 0x1ea100: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea104:
    // 0x1ea104: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea108:
    // 0x1ea108: 0x60f809  jalr        $v1
label_1ea10c:
    if (ctx->pc == 0x1EA10Cu) {
        ctx->pc = 0x1EA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA108u;
        // 0x1ea10c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA110u;
        goto label_1ea110;
    }
    ctx->pc = 0x1EA108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA110u);
        ctx->pc = 0x1EA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA108u;
        // 0x1ea10c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA108u, 0x1EA110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA110u;
label_1ea110:
    // 0x1ea110: 0x8e8600d0  lw          $a2, 0xD0($s4)
    ctx->pc = 0x1ea110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
label_1ea114:
    // 0x1ea114: 0x1000011d  b           . + 4 + (0x11D << 2)
label_1ea118:
    if (ctx->pc == 0x1EA118u) {
        ctx->pc = 0x1EA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA114u;
        // 0x1ea118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA11Cu;
        goto label_1ea11c;
    }
    ctx->pc = 0x1EA114u;
    {
        const bool branch_taken_0x1ea114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA114u;
        // 0x1ea118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea114) {
            ctx->pc = 0x1EA58Cu;
            goto label_1ea58c;
        }
    }
    ctx->pc = 0x1EA11Cu;
label_1ea11c:
    // 0x1ea11c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ea11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ea120:
    // 0x1ea120: 0xc07a6fc  jal         func_1E9BF0
label_1ea124:
    if (ctx->pc == 0x1EA124u) {
        ctx->pc = 0x1EA124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA120u;
        // 0x1ea124: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA128u;
        goto label_1ea128;
    }
    ctx->pc = 0x1EA120u;
    SET_GPR_U32(ctx, 31, 0x1EA128u);
    ctx->pc = 0x1EA124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA120u;
    // 0x1ea124: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9BF0u, 0x1EA120u, 0x1EA128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA128u;
label_1ea128:
    // 0x1ea128: 0x8e8600f8  lw          $a2, 0xF8($s4)
    ctx->pc = 0x1ea128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_1ea12c:
    // 0x1ea12c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea130:
    // 0x1ea130: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea134:
    // 0x1ea134: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea134u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea138:
    // 0x1ea138: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea13c:
    // 0x1ea13c: 0x60f809  jalr        $v1
label_1ea140:
    if (ctx->pc == 0x1EA140u) {
        ctx->pc = 0x1EA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA13Cu;
        // 0x1ea140: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA144u;
        goto label_1ea144;
    }
    ctx->pc = 0x1EA13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA144u);
        ctx->pc = 0x1EA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA13Cu;
        // 0x1ea140: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA13Cu, 0x1EA144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA144u;
label_1ea144:
    // 0x1ea144: 0x8ec40014  lw          $a0, 0x14($s6)
    ctx->pc = 0x1ea144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_1ea148:
    // 0x1ea148: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1ea14c:
    if (ctx->pc == 0x1EA14Cu) {
        ctx->pc = 0x1EA14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA148u;
        // 0x1ea14c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA150u;
        goto label_1ea150;
    }
    ctx->pc = 0x1EA148u;
    {
        const bool branch_taken_0x1ea148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA148u;
        // 0x1ea14c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea148) {
            ctx->pc = 0x1EA160u;
            goto label_1ea160;
        }
    }
    ctx->pc = 0x1EA150u;
label_1ea150:
    // 0x1ea150: 0xc10c313  jal         func_430C4C
label_1ea154:
    if (ctx->pc == 0x1EA154u) {
        ctx->pc = 0x1EA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA150u;
        // 0x1ea154: 0x24a56b98  addiu       $a1, $a1, 0x6B98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA158u;
        goto label_1ea158;
    }
    ctx->pc = 0x1EA150u;
    SET_GPR_U32(ctx, 31, 0x1EA158u);
    ctx->pc = 0x1EA154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA150u;
    // 0x1ea154: 0x24a56b98  addiu       $a1, $a1, 0x6B98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1EA150u, 0x1EA158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA158u;
label_1ea158:
    // 0x1ea158: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
label_1ea15c:
    if (ctx->pc == 0x1EA15Cu) {
        ctx->pc = 0x1EA160u;
        goto label_1ea160;
    }
    ctx->pc = 0x1EA158u;
    {
        const bool branch_taken_0x1ea158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea158) {
            ctx->pc = 0x1EA2FCu;
            goto label_1ea2fc;
        }
    }
    ctx->pc = 0x1EA160u;
label_1ea160:
    // 0x1ea160: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ea160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1ea164:
    // 0x1ea164: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x1ea164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1ea168:
    // 0x1ea168: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ea168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ea16c:
    // 0x1ea16c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ea16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ea170:
    // 0x1ea170: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x1ea170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_1ea174:
    // 0x1ea174: 0xc108f4c  jal         func_423D30
label_1ea178:
    if (ctx->pc == 0x1EA178u) {
        ctx->pc = 0x1EA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA174u;
        // 0x1ea178: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA17Cu;
        goto label_1ea17c;
    }
    ctx->pc = 0x1EA174u;
    SET_GPR_U32(ctx, 31, 0x1EA17Cu);
    ctx->pc = 0x1EA178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA174u;
    // 0x1ea178: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423D30u, 0x1EA174u, 0x1EA17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA17Cu;
label_1ea17c:
    // 0x1ea17c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ea17cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea180:
    // 0x1ea180: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ea180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea184:
    // 0x1ea184: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ea184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ea188:
    // 0x1ea188: 0x8c42489c  lw          $v0, 0x489C($v0)
    ctx->pc = 0x1ea188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1ea18c:
    // 0x1ea18c: 0x245014d4  addiu       $s0, $v0, 0x14D4
    ctx->pc = 0x1ea18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5332));
label_1ea190:
    // 0x1ea190: 0x8e054200  lw          $a1, 0x4200($s0)
    ctx->pc = 0x1ea190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16896)));
label_1ea194:
    // 0x1ea194: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_1ea198:
    if (ctx->pc == 0x1EA198u) {
        ctx->pc = 0x1EA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA194u;
        // 0x1ea198: 0x92b10000  lbu         $s1, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA19Cu;
        goto label_1ea19c;
    }
    ctx->pc = 0x1EA194u;
    {
        const bool branch_taken_0x1ea194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA194u;
        // 0x1ea198: 0x92b10000  lbu         $s1, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea194) {
            ctx->pc = 0x1EA1D4u;
            goto label_1ea1d4;
        }
    }
    ctx->pc = 0x1EA19Cu;
label_1ea19c:
    // 0x1ea19c: 0x8c4214d8  lw          $v0, 0x14D8($v0)
    ctx->pc = 0x1ea19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_1ea1a0:
    // 0x1ea1a0: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
label_1ea1a4:
    if (ctx->pc == 0x1EA1A4u) {
        ctx->pc = 0x1EA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1A0u;
        // 0x1ea1a4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1A8u;
        goto label_1ea1a8;
    }
    ctx->pc = 0x1EA1A0u;
    {
        const bool branch_taken_0x1ea1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1EA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1A0u;
        // 0x1ea1a4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1a0) {
            ctx->pc = 0x1EA1B0u;
            goto label_1ea1b0;
        }
    }
    ctx->pc = 0x1EA1A8u;
label_1ea1a8:
    // 0x1ea1a8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ea1ac:
    if (ctx->pc == 0x1EA1ACu) {
        ctx->pc = 0x1EA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1A8u;
        // 0x1ea1ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1B0u;
        goto label_1ea1b0;
    }
    ctx->pc = 0x1EA1A8u;
    {
        const bool branch_taken_0x1ea1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1A8u;
        // 0x1ea1ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1a8) {
            ctx->pc = 0x1EA1D4u;
            goto label_1ea1d4;
        }
    }
    ctx->pc = 0x1EA1B0u;
label_1ea1b0:
    // 0x1ea1b0: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x1ea1b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1ea1b4:
    // 0x1ea1b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1ea1b8:
    if (ctx->pc == 0x1EA1B8u) {
        ctx->pc = 0x1EA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1B4u;
        // 0x1ea1b8: 0x24020084  addiu       $v0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1BCu;
        goto label_1ea1bc;
    }
    ctx->pc = 0x1EA1B4u;
    {
        const bool branch_taken_0x1ea1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1B4u;
        // 0x1ea1b8: 0x24020084  addiu       $v0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1b4) {
            ctx->pc = 0x1EA1D4u;
            goto label_1ea1d4;
        }
    }
    ctx->pc = 0x1EA1BCu;
label_1ea1bc:
    // 0x1ea1bc: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1ea1bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ea1c0:
    // 0x1ea1c0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1ea1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1ea1c4:
    // 0x1ea1c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ea1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ea1c8:
    // 0x1ea1c8: 0x5471fff9  bnel        $v1, $s1, . + 4 + (-0x7 << 2)
label_1ea1cc:
    if (ctx->pc == 0x1EA1CCu) {
        ctx->pc = 0x1EA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1C8u;
        // 0x1ea1cc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1D0u;
        goto label_1ea1d0;
    }
    ctx->pc = 0x1EA1C8u;
    {
        const bool branch_taken_0x1ea1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x1ea1c8) {
            ctx->pc = 0x1EA1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA1C8u;
            // 0x1ea1cc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea1b0;
        }
    }
    ctx->pc = 0x1EA1D0u;
label_1ea1d0:
    // 0x1ea1d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ea1d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ea1d4:
    // 0x1ea1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea1d8:
    // 0x1ea1d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ea1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ea1dc:
    // 0x1ea1dc: 0xc107d0a  jal         func_41F428
label_1ea1e0:
    if (ctx->pc == 0x1EA1E0u) {
        ctx->pc = 0x1EA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1DCu;
        // 0x1ea1e0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1E4u;
        goto label_1ea1e4;
    }
    ctx->pc = 0x1EA1DCu;
    SET_GPR_U32(ctx, 31, 0x1EA1E4u);
    ctx->pc = 0x1EA1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA1DCu;
    // 0x1ea1e0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x1EA1DCu, 0x1EA1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA1E4u;
label_1ea1e4:
    // 0x1ea1e4: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x1ea1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1ea1e8:
    // 0x1ea1e8: 0x2664e998  addiu       $a0, $s3, -0x1668
    ctx->pc = 0x1ea1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961560));
label_1ea1ec:
    // 0x1ea1ec: 0x2431018  mult        $v0, $s2, $v1
    ctx->pc = 0x1ea1ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ea1f0:
    // 0x1ea1f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ea1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ea1f4:
    // 0x1ea1f4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1ea1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1ea1f8:
    // 0x1ea1f8: 0xc109076  jal         func_4241D8
label_1ea1fc:
    if (ctx->pc == 0x1EA1FCu) {
        ctx->pc = 0x1EA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1F8u;
        // 0x1ea1fc: 0x24730049  addiu       $s3, $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA200u;
        goto label_1ea200;
    }
    ctx->pc = 0x1EA1F8u;
    SET_GPR_U32(ctx, 31, 0x1EA200u);
    ctx->pc = 0x1EA1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA1F8u;
    // 0x1ea1fc: 0x24730049  addiu       $s3, $v1, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4241D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4241D8u, 0x1EA1F8u, 0x1EA200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA200u;
label_1ea200:
    // 0x1ea200: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1ea204:
    if (ctx->pc == 0x1EA204u) {
        ctx->pc = 0x1EA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA200u;
        // 0x1ea204: 0x92a20002  lbu         $v0, 0x2($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA208u;
        goto label_1ea208;
    }
    ctx->pc = 0x1EA200u;
    {
        const bool branch_taken_0x1ea200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA200u;
        // 0x1ea204: 0x92a20002  lbu         $v0, 0x2($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea200) {
            ctx->pc = 0x1EA270u;
            goto label_1ea270;
        }
    }
    ctx->pc = 0x1EA208u;
label_1ea208:
    // 0x1ea208: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
label_1ea20c:
    if (ctx->pc == 0x1EA20Cu) {
        ctx->pc = 0x1EA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA208u;
        // 0x1ea20c: 0x8e8700c4  lw          $a3, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA210u;
        goto label_1ea210;
    }
    ctx->pc = 0x1EA208u;
    {
        const bool branch_taken_0x1ea208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea208) {
            ctx->pc = 0x1EA20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA208u;
            // 0x1ea20c: 0x8e8700c4  lw          $a3, 0xC4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA32Cu;
            goto label_1ea32c;
        }
    }
    ctx->pc = 0x1EA210u;
label_1ea210:
    // 0x1ea210: 0xc067b9c  jal         func_19EE70
label_1ea214:
    if (ctx->pc == 0x1EA214u) {
        ctx->pc = 0x1EA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA210u;
        // 0x1ea214: 0x2404004f  addiu       $a0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA218u;
        goto label_1ea218;
    }
    ctx->pc = 0x1EA210u;
    SET_GPR_U32(ctx, 31, 0x1EA218u);
    ctx->pc = 0x1EA214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA210u;
    // 0x1ea214: 0x2404004f  addiu       $a0, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EA210u, 0x1EA218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA218u;
label_1ea218:
    // 0x1ea218: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ea218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea21c:
    // 0x1ea21c: 0xc067b9c  jal         func_19EE70
label_1ea220:
    if (ctx->pc == 0x1EA220u) {
        ctx->pc = 0x1EA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA21Cu;
        // 0x1ea220: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA224u;
        goto label_1ea224;
    }
    ctx->pc = 0x1EA21Cu;
    SET_GPR_U32(ctx, 31, 0x1EA224u);
    ctx->pc = 0x1EA220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA21Cu;
    // 0x1ea220: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EA21Cu, 0x1EA224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA224u;
label_1ea224:
    // 0x1ea224: 0x92b00002  lbu         $s0, 0x2($s5)
    ctx->pc = 0x1ea224u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_1ea228:
    // 0x1ea228: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1ea228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1ea22c:
    // 0x1ea22c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ea22cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea230:
    // 0x1ea230: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x1ea230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_1ea234:
    // 0x1ea234: 0xc067b9c  jal         func_19EE70
label_1ea238:
    if (ctx->pc == 0x1EA238u) {
        ctx->pc = 0x1EA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA234u;
        // 0x1ea238: 0x2038018  mult        $s0, $s0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA23Cu;
        goto label_1ea23c;
    }
    ctx->pc = 0x1EA234u;
    SET_GPR_U32(ctx, 31, 0x1EA23Cu);
    ctx->pc = 0x1EA238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA234u;
    // 0x1ea238: 0x2038018  mult        $s0, $s0, $v1 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EA234u, 0x1EA23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA23Cu;
label_1ea23c:
    // 0x1ea23c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1ea23cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1ea240:
    // 0x1ea240: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x1ea240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_1ea244:
    // 0x1ea244: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ea244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1ea248:
    // 0x1ea248: 0x24c66bd8  addiu       $a2, $a2, 0x6BD8
    ctx->pc = 0x1ea248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27608));
label_1ea24c:
    // 0x1ea24c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ea24cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ea250:
    // 0x1ea250: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1ea250u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ea254:
    // 0x1ea254: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1ea254u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ea258:
    // 0x1ea258: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x1ea258u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea25c:
    // 0x1ea25c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ea25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ea260:
    // 0x1ea260: 0xc10ca04  jal         func_432810
label_1ea264:
    if (ctx->pc == 0x1EA264u) {
        ctx->pc = 0x1EA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA260u;
        // 0x1ea264: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA268u;
        goto label_1ea268;
    }
    ctx->pc = 0x1EA260u;
    SET_GPR_U32(ctx, 31, 0x1EA268u);
    ctx->pc = 0x1EA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA260u;
    // 0x1ea264: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1EA260u, 0x1EA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA268u;
label_1ea268:
    // 0x1ea268: 0x10000030  b           . + 4 + (0x30 << 2)
label_1ea26c:
    if (ctx->pc == 0x1EA26Cu) {
        ctx->pc = 0x1EA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA268u;
        // 0x1ea26c: 0x8e8700c4  lw          $a3, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA270u;
        goto label_1ea270;
    }
    ctx->pc = 0x1EA268u;
    {
        const bool branch_taken_0x1ea268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA268u;
        // 0x1ea26c: 0x8e8700c4  lw          $a3, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea268) {
            ctx->pc = 0x1EA32Cu;
            goto label_1ea32c;
        }
    }
    ctx->pc = 0x1EA270u;
label_1ea270:
    // 0x1ea270: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1ea274:
    if (ctx->pc == 0x1EA274u) {
        ctx->pc = 0x1EA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA270u;
        // 0x1ea274: 0x3c110055  lui         $s1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA278u;
        goto label_1ea278;
    }
    ctx->pc = 0x1EA270u;
    {
        const bool branch_taken_0x1ea270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA270u;
        // 0x1ea274: 0x3c110055  lui         $s1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea270) {
            ctx->pc = 0x1EA2A4u;
            goto label_1ea2a4;
        }
    }
    ctx->pc = 0x1EA278u;
label_1ea278:
    // 0x1ea278: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1ea278u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1ea27c:
    // 0x1ea27c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1ea27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1ea280:
    // 0x1ea280: 0xc067b9c  jal         func_19EE70
label_1ea284:
    if (ctx->pc == 0x1EA284u) {
        ctx->pc = 0x1EA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA280u;
        // 0x1ea284: 0x26106bf0  addiu       $s0, $s0, 0x6BF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA288u;
        goto label_1ea288;
    }
    ctx->pc = 0x1EA280u;
    SET_GPR_U32(ctx, 31, 0x1EA288u);
    ctx->pc = 0x1EA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA280u;
    // 0x1ea284: 0x26106bf0  addiu       $s0, $s0, 0x6BF0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EA280u, 0x1EA288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA288u;
label_1ea288:
    // 0x1ea288: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x1ea288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_1ea28c:
    // 0x1ea28c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ea28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea290:
    // 0x1ea290: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ea290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea294:
    // 0x1ea294: 0xc10ca04  jal         func_432810
label_1ea298:
    if (ctx->pc == 0x1EA298u) {
        ctx->pc = 0x1EA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA294u;
        // 0x1ea298: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA29Cu;
        goto label_1ea29c;
    }
    ctx->pc = 0x1EA294u;
    SET_GPR_U32(ctx, 31, 0x1EA29Cu);
    ctx->pc = 0x1EA298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA294u;
    // 0x1ea298: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1EA294u, 0x1EA29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA29Cu;
label_1ea29c:
    // 0x1ea29c: 0x10000023  b           . + 4 + (0x23 << 2)
label_1ea2a0:
    if (ctx->pc == 0x1EA2A0u) {
        ctx->pc = 0x1EA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA29Cu;
        // 0x1ea2a0: 0x8e8700c4  lw          $a3, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2A4u;
        goto label_1ea2a4;
    }
    ctx->pc = 0x1EA29Cu;
    {
        const bool branch_taken_0x1ea29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA29Cu;
        // 0x1ea2a0: 0x8e8700c4  lw          $a3, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea29c) {
            ctx->pc = 0x1EA32Cu;
            goto label_1ea32c;
        }
    }
    ctx->pc = 0x1EA2A4u;
label_1ea2a4:
    // 0x1ea2a4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1ea2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1ea2a8:
    // 0x1ea2a8: 0xc067b9c  jal         func_19EE70
label_1ea2ac:
    if (ctx->pc == 0x1EA2ACu) {
        ctx->pc = 0x1EA2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2A8u;
        // 0x1ea2ac: 0x26316bf8  addiu       $s1, $s1, 0x6BF8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2B0u;
        goto label_1ea2b0;
    }
    ctx->pc = 0x1EA2A8u;
    SET_GPR_U32(ctx, 31, 0x1EA2B0u);
    ctx->pc = 0x1EA2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2A8u;
    // 0x1ea2ac: 0x26316bf8  addiu       $s1, $s1, 0x6BF8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EA2A8u, 0x1EA2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2B0u;
label_1ea2b0:
    // 0x1ea2b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ea2b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2b4:
    // 0x1ea2b4: 0xc067b9c  jal         func_19EE70
label_1ea2b8:
    if (ctx->pc == 0x1EA2B8u) {
        ctx->pc = 0x1EA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2B4u;
        // 0x1ea2b8: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2BCu;
        goto label_1ea2bc;
    }
    ctx->pc = 0x1EA2B4u;
    SET_GPR_U32(ctx, 31, 0x1EA2BCu);
    ctx->pc = 0x1EA2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2B4u;
    // 0x1ea2b8: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EA2B4u, 0x1EA2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2BCu;
label_1ea2bc:
    // 0x1ea2bc: 0x92b00002  lbu         $s0, 0x2($s5)
    ctx->pc = 0x1ea2bcu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_1ea2c0:
    // 0x1ea2c0: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1ea2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1ea2c4:
    // 0x1ea2c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ea2c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2c8:
    // 0x1ea2c8: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x1ea2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_1ea2cc:
    // 0x1ea2cc: 0xc067b9c  jal         func_19EE70
label_1ea2d0:
    if (ctx->pc == 0x1EA2D0u) {
        ctx->pc = 0x1EA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2CCu;
        // 0x1ea2d0: 0x2038018  mult        $s0, $s0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2D4u;
        goto label_1ea2d4;
    }
    ctx->pc = 0x1EA2CCu;
    SET_GPR_U32(ctx, 31, 0x1EA2D4u);
    ctx->pc = 0x1EA2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2CCu;
    // 0x1ea2d0: 0x2038018  mult        $s0, $s0, $v1 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1EA2CCu, 0x1EA2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2D4u;
label_1ea2d4:
    // 0x1ea2d4: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x1ea2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_1ea2d8:
    // 0x1ea2d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ea2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2dc:
    // 0x1ea2dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ea2dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2e0:
    // 0x1ea2e0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1ea2e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2e4:
    // 0x1ea2e4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ea2e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2e8:
    // 0x1ea2e8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1ea2e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2ec:
    // 0x1ea2ec: 0xc10ca04  jal         func_432810
label_1ea2f0:
    if (ctx->pc == 0x1EA2F0u) {
        ctx->pc = 0x1EA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2ECu;
        // 0x1ea2f0: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2F4u;
        goto label_1ea2f4;
    }
    ctx->pc = 0x1EA2ECu;
    SET_GPR_U32(ctx, 31, 0x1EA2F4u);
    ctx->pc = 0x1EA2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2ECu;
    // 0x1ea2f0: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1EA2ECu, 0x1EA2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2F4u;
label_1ea2f4:
    // 0x1ea2f4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ea2f8:
    if (ctx->pc == 0x1EA2F8u) {
        ctx->pc = 0x1EA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2F4u;
        // 0x1ea2f8: 0x8e8700c4  lw          $a3, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2FCu;
        goto label_1ea2fc;
    }
    ctx->pc = 0x1EA2F4u;
    {
        const bool branch_taken_0x1ea2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2F4u;
        // 0x1ea2f8: 0x8e8700c4  lw          $a3, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2f4) {
            ctx->pc = 0x1EA32Cu;
            goto label_1ea32c;
        }
    }
    ctx->pc = 0x1EA2FCu;
label_1ea2fc:
    // 0x1ea2fc: 0xc10c3ac  jal         func_430EB0
label_1ea300:
    if (ctx->pc == 0x1EA300u) {
        ctx->pc = 0x1EA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2FCu;
        // 0x1ea300: 0x8ec40014  lw          $a0, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA304u;
        goto label_1ea304;
    }
    ctx->pc = 0x1EA2FCu;
    SET_GPR_U32(ctx, 31, 0x1EA304u);
    ctx->pc = 0x1EA300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2FCu;
    // 0x1ea300: 0x8ec40014  lw          $a0, 0x14($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1EA2FCu, 0x1EA304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA304u;
label_1ea304:
    // 0x1ea304: 0x8e8300c8  lw          $v1, 0xC8($s4)
    ctx->pc = 0x1ea304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_1ea308:
    // 0x1ea308: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea30c:
    // 0x1ea30c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ea30cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ea310:
    // 0x1ea310: 0xc10c3ac  jal         func_430EB0
label_1ea314:
    if (ctx->pc == 0x1EA314u) {
        ctx->pc = 0x1EA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA310u;
        // 0x1ea314: 0x8ec40014  lw          $a0, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA318u;
        goto label_1ea318;
    }
    ctx->pc = 0x1EA310u;
    SET_GPR_U32(ctx, 31, 0x1EA318u);
    ctx->pc = 0x1EA314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA310u;
    // 0x1ea314: 0x8ec40014  lw          $a0, 0x14($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1EA310u, 0x1EA318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA318u;
label_1ea318:
    // 0x1ea318: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x1ea318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_1ea31c:
    // 0x1ea31c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ea31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea320:
    // 0x1ea320: 0xc10c4de  jal         func_431378
label_1ea324:
    if (ctx->pc == 0x1EA324u) {
        ctx->pc = 0x1EA324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA320u;
        // 0x1ea324: 0x8ec50014  lw          $a1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA328u;
        goto label_1ea328;
    }
    ctx->pc = 0x1EA320u;
    SET_GPR_U32(ctx, 31, 0x1EA328u);
    ctx->pc = 0x1EA324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA320u;
    // 0x1ea324: 0x8ec50014  lw          $a1, 0x14($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1EA320u, 0x1EA328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA328u;
label_1ea328:
    // 0x1ea328: 0x8e8700c4  lw          $a3, 0xC4($s4)
    ctx->pc = 0x1ea328u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_1ea32c:
    // 0x1ea32c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ea32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea330:
    // 0x1ea330: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ea330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1ea334:
    // 0x1ea334: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ea334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1ea338:
    // 0x1ea338: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ea338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ea33c:
    // 0x1ea33c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1ea33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ea340:
    // 0x1ea340: 0x8e8500c8  lw          $a1, 0xC8($s4)
    ctx->pc = 0x1ea340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_1ea344:
    // 0x1ea344: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1ea344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1ea348:
    // 0x1ea348: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1ea348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1ea34c:
    // 0x1ea34c: 0x60f809  jalr        $v1
label_1ea350:
    if (ctx->pc == 0x1EA350u) {
        ctx->pc = 0x1EA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA34Cu;
        // 0x1ea350: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA354u;
        goto label_1ea354;
    }
    ctx->pc = 0x1EA34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA354u);
        ctx->pc = 0x1EA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA34Cu;
        // 0x1ea350: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA34Cu, 0x1EA354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA354u;
label_1ea354:
    // 0x1ea354: 0x8e8600c4  lw          $a2, 0xC4($s4)
    ctx->pc = 0x1ea354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_1ea358:
    // 0x1ea358: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea35c:
    // 0x1ea35c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea360:
    // 0x1ea360: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea364:
    // 0x1ea364: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea368:
    // 0x1ea368: 0x60f809  jalr        $v1
label_1ea36c:
    if (ctx->pc == 0x1EA36Cu) {
        ctx->pc = 0x1EA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA368u;
        // 0x1ea36c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA370u;
        goto label_1ea370;
    }
    ctx->pc = 0x1EA368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA370u);
        ctx->pc = 0x1EA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA368u;
        // 0x1ea36c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA368u, 0x1EA370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA370u;
label_1ea370:
    // 0x1ea370: 0x8e8600cc  lw          $a2, 0xCC($s4)
    ctx->pc = 0x1ea370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
label_1ea374:
    // 0x1ea374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea378:
    // 0x1ea378: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea37c:
    // 0x1ea37c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea37cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea380:
    // 0x1ea380: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea384:
    // 0x1ea384: 0x60f809  jalr        $v1
label_1ea388:
    if (ctx->pc == 0x1EA388u) {
        ctx->pc = 0x1EA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA384u;
        // 0x1ea388: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA38Cu;
        goto label_1ea38c;
    }
    ctx->pc = 0x1EA384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA38Cu);
        ctx->pc = 0x1EA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA384u;
        // 0x1ea388: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA384u, 0x1EA38Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA38Cu;
label_1ea38c:
    // 0x1ea38c: 0x8e8600fc  lw          $a2, 0xFC($s4)
    ctx->pc = 0x1ea38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
label_1ea390:
    // 0x1ea390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea394:
    // 0x1ea394: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea398:
    // 0x1ea398: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea39c:
    // 0x1ea39c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea3a0:
    // 0x1ea3a0: 0x60f809  jalr        $v1
label_1ea3a4:
    if (ctx->pc == 0x1EA3A4u) {
        ctx->pc = 0x1EA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3A0u;
        // 0x1ea3a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3A8u;
        goto label_1ea3a8;
    }
    ctx->pc = 0x1EA3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA3A8u);
        ctx->pc = 0x1EA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3A0u;
        // 0x1ea3a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA3A0u, 0x1EA3A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA3A8u;
label_1ea3a8:
    // 0x1ea3a8: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x1ea3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_1ea3ac:
    // 0x1ea3ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea3b0:
    // 0x1ea3b0: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1ea3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_1ea3b4:
    // 0x1ea3b4: 0x8e8600d4  lw          $a2, 0xD4($s4)
    ctx->pc = 0x1ea3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_1ea3b8:
    // 0x1ea3b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea3bc:
    // 0x1ea3bc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea3bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea3c0:
    // 0x1ea3c0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea3c4:
    // 0x1ea3c4: 0x60f809  jalr        $v1
label_1ea3c8:
    if (ctx->pc == 0x1EA3C8u) {
        ctx->pc = 0x1EA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3C4u;
        // 0x1ea3c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3CCu;
        goto label_1ea3cc;
    }
    ctx->pc = 0x1EA3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA3CCu);
        ctx->pc = 0x1EA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3C4u;
        // 0x1ea3c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA3C4u, 0x1EA3CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA3CCu;
label_1ea3cc:
    // 0x1ea3cc: 0x8e8600d0  lw          $a2, 0xD0($s4)
    ctx->pc = 0x1ea3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
label_1ea3d0:
    // 0x1ea3d0: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1ea3d4:
    if (ctx->pc == 0x1EA3D4u) {
        ctx->pc = 0x1EA3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3D0u;
        // 0x1ea3d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3D8u;
        goto label_1ea3d8;
    }
    ctx->pc = 0x1EA3D0u;
    {
        const bool branch_taken_0x1ea3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3D0u;
        // 0x1ea3d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3d0) {
            ctx->pc = 0x1EA58Cu;
            goto label_1ea58c;
        }
    }
    ctx->pc = 0x1EA3D8u;
label_1ea3d8:
    // 0x1ea3d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ea3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ea3dc:
    // 0x1ea3dc: 0xc07a6fc  jal         func_1E9BF0
label_1ea3e0:
    if (ctx->pc == 0x1EA3E0u) {
        ctx->pc = 0x1EA3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3DCu;
        // 0x1ea3e0: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3E4u;
        goto label_1ea3e4;
    }
    ctx->pc = 0x1EA3DCu;
    SET_GPR_U32(ctx, 31, 0x1EA3E4u);
    ctx->pc = 0x1EA3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3DCu;
    // 0x1ea3e0: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9BF0u, 0x1EA3DCu, 0x1EA3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3E4u;
label_1ea3e4:
    // 0x1ea3e4: 0x8e8600f8  lw          $a2, 0xF8($s4)
    ctx->pc = 0x1ea3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_1ea3e8:
    // 0x1ea3e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea3ec:
    // 0x1ea3ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea3f0:
    // 0x1ea3f0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea3f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea3f4:
    // 0x1ea3f4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea3f8:
    // 0x1ea3f8: 0x60f809  jalr        $v1
label_1ea3fc:
    if (ctx->pc == 0x1EA3FCu) {
        ctx->pc = 0x1EA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3F8u;
        // 0x1ea3fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA400u;
        goto label_1ea400;
    }
    ctx->pc = 0x1EA3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA400u);
        ctx->pc = 0x1EA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3F8u;
        // 0x1ea3fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA3F8u, 0x1EA400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA400u;
label_1ea400:
    // 0x1ea400: 0x8e8600c4  lw          $a2, 0xC4($s4)
    ctx->pc = 0x1ea400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_1ea404:
    // 0x1ea404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea408:
    // 0x1ea408: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea40c:
    // 0x1ea40c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea40cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea410:
    // 0x1ea410: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea414:
    // 0x1ea414: 0x60f809  jalr        $v1
label_1ea418:
    if (ctx->pc == 0x1EA418u) {
        ctx->pc = 0x1EA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA414u;
        // 0x1ea418: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA41Cu;
        goto label_1ea41c;
    }
    ctx->pc = 0x1EA414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA41Cu);
        ctx->pc = 0x1EA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA414u;
        // 0x1ea418: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA414u, 0x1EA41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA41Cu;
label_1ea41c:
    // 0x1ea41c: 0x8e8600cc  lw          $a2, 0xCC($s4)
    ctx->pc = 0x1ea41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
label_1ea420:
    // 0x1ea420: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea424:
    // 0x1ea424: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea428:
    // 0x1ea428: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea42c:
    // 0x1ea42c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea430:
    // 0x1ea430: 0x60f809  jalr        $v1
label_1ea434:
    if (ctx->pc == 0x1EA434u) {
        ctx->pc = 0x1EA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA430u;
        // 0x1ea434: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA438u;
        goto label_1ea438;
    }
    ctx->pc = 0x1EA430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA438u);
        ctx->pc = 0x1EA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA430u;
        // 0x1ea434: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA430u, 0x1EA438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA438u;
label_1ea438:
    // 0x1ea438: 0x8e8600fc  lw          $a2, 0xFC($s4)
    ctx->pc = 0x1ea438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
label_1ea43c:
    // 0x1ea43c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea440:
    // 0x1ea440: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea444:
    // 0x1ea444: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea448:
    // 0x1ea448: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea44c:
    // 0x1ea44c: 0x60f809  jalr        $v1
label_1ea450:
    if (ctx->pc == 0x1EA450u) {
        ctx->pc = 0x1EA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA44Cu;
        // 0x1ea450: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA454u;
        goto label_1ea454;
    }
    ctx->pc = 0x1EA44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA454u);
        ctx->pc = 0x1EA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA44Cu;
        // 0x1ea450: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA44Cu, 0x1EA454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA454u;
label_1ea454:
    // 0x1ea454: 0x8e840100  lw          $a0, 0x100($s4)
    ctx->pc = 0x1ea454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_1ea458:
    // 0x1ea458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea45c:
    // 0x1ea45c: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x1ea45cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
label_1ea460:
    // 0x1ea460: 0x8e8500d4  lw          $a1, 0xD4($s4)
    ctx->pc = 0x1ea460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_1ea464:
    // 0x1ea464: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ea464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ea468:
    // 0x1ea468: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1ea468u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1ea46c:
    // 0x1ea46c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1ea46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1ea470:
    // 0x1ea470: 0x40f809  jalr        $v0
label_1ea474:
    if (ctx->pc == 0x1EA474u) {
        ctx->pc = 0x1EA474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA470u;
        // 0x1ea474: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA478u;
        goto label_1ea478;
    }
    ctx->pc = 0x1EA470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA478u);
        ctx->pc = 0x1EA474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA470u;
        // 0x1ea474: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA470u, 0x1EA478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA478u;
label_1ea478:
    // 0x1ea478: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1ea47c:
    if (ctx->pc == 0x1EA47Cu) {
        ctx->pc = 0x1EA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA478u;
        // 0x1ea47c: 0x8e8600d4  lw          $a2, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA480u;
        goto label_1ea480;
    }
    ctx->pc = 0x1EA478u;
    {
        const bool branch_taken_0x1ea478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea478) {
            ctx->pc = 0x1EA47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA478u;
            // 0x1ea47c: 0x8e8600d4  lw          $a2, 0xD4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA490u;
            goto label_1ea490;
        }
    }
    ctx->pc = 0x1EA480u;
label_1ea480:
    // 0x1ea480: 0x96c5000e  lhu         $a1, 0xE($s6)
    ctx->pc = 0x1ea480u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 14)));
label_1ea484:
    // 0x1ea484: 0xc07a768  jal         func_1E9DA0
label_1ea488:
    if (ctx->pc == 0x1EA488u) {
        ctx->pc = 0x1EA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA484u;
        // 0x1ea488: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA48Cu;
        goto label_1ea48c;
    }
    ctx->pc = 0x1EA484u;
    SET_GPR_U32(ctx, 31, 0x1EA48Cu);
    ctx->pc = 0x1EA488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA484u;
    // 0x1ea488: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9DA0u;
    goto label_1e9da0;
    ctx->pc = 0x1EA48Cu;
label_1ea48c:
    // 0x1ea48c: 0x8e8600d4  lw          $a2, 0xD4($s4)
    ctx->pc = 0x1ea48cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_1ea490:
    // 0x1ea490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea494:
    // 0x1ea494: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea498:
    // 0x1ea498: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea49c:
    // 0x1ea49c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea4a0:
    // 0x1ea4a0: 0x60f809  jalr        $v1
label_1ea4a4:
    if (ctx->pc == 0x1EA4A4u) {
        ctx->pc = 0x1EA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4A0u;
        // 0x1ea4a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4A8u;
        goto label_1ea4a8;
    }
    ctx->pc = 0x1EA4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA4A8u);
        ctx->pc = 0x1EA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4A0u;
        // 0x1ea4a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA4A0u, 0x1EA4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA4A8u;
label_1ea4a8:
    // 0x1ea4a8: 0x8e8600d0  lw          $a2, 0xD0($s4)
    ctx->pc = 0x1ea4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
label_1ea4ac:
    // 0x1ea4ac: 0x10000037  b           . + 4 + (0x37 << 2)
label_1ea4b0:
    if (ctx->pc == 0x1EA4B0u) {
        ctx->pc = 0x1EA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4ACu;
        // 0x1ea4b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4B4u;
        goto label_1ea4b4;
    }
    ctx->pc = 0x1EA4ACu;
    {
        const bool branch_taken_0x1ea4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4ACu;
        // 0x1ea4b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea4ac) {
            ctx->pc = 0x1EA58Cu;
            goto label_1ea58c;
        }
    }
    ctx->pc = 0x1EA4B4u;
label_1ea4b4:
    // 0x1ea4b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ea4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ea4b8:
    // 0x1ea4b8: 0xc07a6fc  jal         func_1E9BF0
label_1ea4bc:
    if (ctx->pc == 0x1EA4BCu) {
        ctx->pc = 0x1EA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4B8u;
        // 0x1ea4bc: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4C0u;
        goto label_1ea4c0;
    }
    ctx->pc = 0x1EA4B8u;
    SET_GPR_U32(ctx, 31, 0x1EA4C0u);
    ctx->pc = 0x1EA4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4B8u;
    // 0x1ea4bc: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9BF0u, 0x1EA4B8u, 0x1EA4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4C0u;
label_1ea4c0:
    // 0x1ea4c0: 0x8e8600f8  lw          $a2, 0xF8($s4)
    ctx->pc = 0x1ea4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_1ea4c4:
    // 0x1ea4c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea4c8:
    // 0x1ea4c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea4cc:
    // 0x1ea4cc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea4ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea4d0:
    // 0x1ea4d0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea4d4:
    // 0x1ea4d4: 0x60f809  jalr        $v1
label_1ea4d8:
    if (ctx->pc == 0x1EA4D8u) {
        ctx->pc = 0x1EA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4D4u;
        // 0x1ea4d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4DCu;
        goto label_1ea4dc;
    }
    ctx->pc = 0x1EA4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA4DCu);
        ctx->pc = 0x1EA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4D4u;
        // 0x1ea4d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA4D4u, 0x1EA4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA4DCu;
label_1ea4dc:
    // 0x1ea4dc: 0x8e8600c4  lw          $a2, 0xC4($s4)
    ctx->pc = 0x1ea4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_1ea4e0:
    // 0x1ea4e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea4e4:
    // 0x1ea4e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea4e8:
    // 0x1ea4e8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea4e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea4ec:
    // 0x1ea4ec: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea4f0:
    // 0x1ea4f0: 0x60f809  jalr        $v1
label_1ea4f4:
    if (ctx->pc == 0x1EA4F4u) {
        ctx->pc = 0x1EA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4F0u;
        // 0x1ea4f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4F8u;
        goto label_1ea4f8;
    }
    ctx->pc = 0x1EA4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA4F8u);
        ctx->pc = 0x1EA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4F0u;
        // 0x1ea4f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA4F0u, 0x1EA4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA4F8u;
label_1ea4f8:
    // 0x1ea4f8: 0x8e8600cc  lw          $a2, 0xCC($s4)
    ctx->pc = 0x1ea4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
label_1ea4fc:
    // 0x1ea4fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea500:
    // 0x1ea500: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea504:
    // 0x1ea504: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea508:
    // 0x1ea508: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea50c:
    // 0x1ea50c: 0x60f809  jalr        $v1
label_1ea510:
    if (ctx->pc == 0x1EA510u) {
        ctx->pc = 0x1EA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA50Cu;
        // 0x1ea510: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA514u;
        goto label_1ea514;
    }
    ctx->pc = 0x1EA50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA514u);
        ctx->pc = 0x1EA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA50Cu;
        // 0x1ea510: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA50Cu, 0x1EA514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA514u;
label_1ea514:
    // 0x1ea514: 0x8e8600fc  lw          $a2, 0xFC($s4)
    ctx->pc = 0x1ea514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
label_1ea518:
    // 0x1ea518: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea51c:
    // 0x1ea51c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea520:
    // 0x1ea520: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea524:
    // 0x1ea524: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea528:
    // 0x1ea528: 0x60f809  jalr        $v1
label_1ea52c:
    if (ctx->pc == 0x1EA52Cu) {
        ctx->pc = 0x1EA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA528u;
        // 0x1ea52c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA530u;
        goto label_1ea530;
    }
    ctx->pc = 0x1EA528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA530u);
        ctx->pc = 0x1EA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA528u;
        // 0x1ea52c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA528u, 0x1EA530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA530u;
label_1ea530:
    // 0x1ea530: 0x8e840100  lw          $a0, 0x100($s4)
    ctx->pc = 0x1ea530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_1ea534:
    // 0x1ea534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea538:
    // 0x1ea538: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x1ea538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
label_1ea53c:
    // 0x1ea53c: 0x8e8500d4  lw          $a1, 0xD4($s4)
    ctx->pc = 0x1ea53cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_1ea540:
    // 0x1ea540: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ea540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ea544:
    // 0x1ea544: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1ea544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1ea548:
    // 0x1ea548: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1ea548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1ea54c:
    // 0x1ea54c: 0x40f809  jalr        $v0
label_1ea550:
    if (ctx->pc == 0x1EA550u) {
        ctx->pc = 0x1EA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA54Cu;
        // 0x1ea550: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA554u;
        goto label_1ea554;
    }
    ctx->pc = 0x1EA54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA554u);
        ctx->pc = 0x1EA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA54Cu;
        // 0x1ea550: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA54Cu, 0x1EA554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA554u;
label_1ea554:
    // 0x1ea554: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1ea558:
    if (ctx->pc == 0x1EA558u) {
        ctx->pc = 0x1EA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA554u;
        // 0x1ea558: 0x8e8600d4  lw          $a2, 0xD4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA55Cu;
        goto label_1ea55c;
    }
    ctx->pc = 0x1EA554u;
    {
        const bool branch_taken_0x1ea554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea554) {
            ctx->pc = 0x1EA558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA554u;
            // 0x1ea558: 0x8e8600d4  lw          $a2, 0xD4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA56Cu;
            goto label_1ea56c;
        }
    }
    ctx->pc = 0x1EA55Cu;
label_1ea55c:
    // 0x1ea55c: 0x96c5000e  lhu         $a1, 0xE($s6)
    ctx->pc = 0x1ea55cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 14)));
label_1ea560:
    // 0x1ea560: 0xc07a768  jal         func_1E9DA0
label_1ea564:
    if (ctx->pc == 0x1EA564u) {
        ctx->pc = 0x1EA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA560u;
        // 0x1ea564: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA568u;
        goto label_1ea568;
    }
    ctx->pc = 0x1EA560u;
    SET_GPR_U32(ctx, 31, 0x1EA568u);
    ctx->pc = 0x1EA564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA560u;
    // 0x1ea564: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9DA0u;
    goto label_1e9da0;
    ctx->pc = 0x1EA568u;
label_1ea568:
    // 0x1ea568: 0x8e8600d4  lw          $a2, 0xD4($s4)
    ctx->pc = 0x1ea568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_1ea56c:
    // 0x1ea56c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea570:
    // 0x1ea570: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea574:
    // 0x1ea574: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea578:
    // 0x1ea578: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea57c:
    // 0x1ea57c: 0x60f809  jalr        $v1
label_1ea580:
    if (ctx->pc == 0x1EA580u) {
        ctx->pc = 0x1EA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA57Cu;
        // 0x1ea580: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA584u;
        goto label_1ea584;
    }
    ctx->pc = 0x1EA57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA584u);
        ctx->pc = 0x1EA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA57Cu;
        // 0x1ea580: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA57Cu, 0x1EA584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA584u;
label_1ea584:
    // 0x1ea584: 0x8e8600d0  lw          $a2, 0xD0($s4)
    ctx->pc = 0x1ea584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
label_1ea588:
    // 0x1ea588: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea58c:
    // 0x1ea58c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea590:
    // 0x1ea590: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea594:
    // 0x1ea594: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea598:
    // 0x1ea598: 0x60f809  jalr        $v1
label_1ea59c:
    if (ctx->pc == 0x1EA59Cu) {
        ctx->pc = 0x1EA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA598u;
        // 0x1ea59c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5A0u;
        goto label_1ea5a0;
    }
    ctx->pc = 0x1EA598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA5A0u);
        ctx->pc = 0x1EA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA598u;
        // 0x1ea59c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA598u, 0x1EA5A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA5A0u;
label_1ea5a0:
    // 0x1ea5a0: 0x10000058  b           . + 4 + (0x58 << 2)
label_1ea5a4:
    if (ctx->pc == 0x1EA5A4u) {
        ctx->pc = 0x1EA5A8u;
        goto label_1ea5a8;
    }
    ctx->pc = 0x1EA5A0u;
    {
        const bool branch_taken_0x1ea5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea5a0) {
            ctx->pc = 0x1EA704u;
            goto label_1ea704;
        }
    }
    ctx->pc = 0x1EA5A8u;
label_1ea5a8:
    // 0x1ea5a8: 0x8e8500bc  lw          $a1, 0xBC($s4)
    ctx->pc = 0x1ea5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
label_1ea5ac:
    // 0x1ea5ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ea5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ea5b0:
    // 0x1ea5b0: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x1ea5b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_1ea5b4:
    // 0x1ea5b4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x1ea5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1ea5b8:
    // 0x1ea5b8: 0x40f809  jalr        $v0
label_1ea5bc:
    if (ctx->pc == 0x1EA5BCu) {
        ctx->pc = 0x1EA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5B8u;
        // 0x1ea5bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5C0u;
        goto label_1ea5c0;
    }
    ctx->pc = 0x1EA5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA5C0u);
        ctx->pc = 0x1EA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5B8u;
        // 0x1ea5bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA5B8u, 0x1EA5C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA5C0u;
label_1ea5c0:
    // 0x1ea5c0: 0x8e8800bc  lw          $t0, 0xBC($s4)
    ctx->pc = 0x1ea5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
label_1ea5c4:
    // 0x1ea5c4: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x1ea5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea5c8:
    // 0x1ea5c8: 0x8e84008c  lw          $a0, 0x8C($s4)
    ctx->pc = 0x1ea5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_1ea5cc:
    // 0x1ea5cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ea5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea5d0:
    // 0x1ea5d0: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x1ea5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1ea5d4:
    // 0x1ea5d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ea5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ea5d8:
    // 0x1ea5d8: 0x84c40118  lh          $a0, 0x118($a2)
    ctx->pc = 0x1ea5d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 280)));
label_1ea5dc:
    // 0x1ea5dc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1ea5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1ea5e0:
    // 0x1ea5e0: 0x8cc2011c  lw          $v0, 0x11C($a2)
    ctx->pc = 0x1ea5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 284)));
label_1ea5e4:
    // 0x1ea5e4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1ea5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ea5e8:
    // 0x1ea5e8: 0x40f809  jalr        $v0
label_1ea5ec:
    if (ctx->pc == 0x1EA5ECu) {
        ctx->pc = 0x1EA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5E8u;
        // 0x1ea5ec: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5F0u;
        goto label_1ea5f0;
    }
    ctx->pc = 0x1EA5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA5F0u);
        ctx->pc = 0x1EA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5E8u;
        // 0x1ea5ec: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA5E8u, 0x1EA5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA5F0u;
label_1ea5f0:
    // 0x1ea5f0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_1ea5f4:
    if (ctx->pc == 0x1EA5F4u) {
        ctx->pc = 0x1EA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5F0u;
        // 0x1ea5f4: 0x8e8600f8  lw          $a2, 0xF8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5F8u;
        goto label_1ea5f8;
    }
    ctx->pc = 0x1EA5F0u;
    {
        const bool branch_taken_0x1ea5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea5f0) {
            ctx->pc = 0x1EA5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA5F0u;
            // 0x1ea5f4: 0x8e8600f8  lw          $a2, 0xF8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA654u;
            goto label_1ea654;
        }
    }
    ctx->pc = 0x1EA5F8u;
label_1ea5f8:
    // 0x1ea5f8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1ea5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ea5fc:
    // 0x1ea5fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ea5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ea600:
    // 0x1ea600: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1ea600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1ea604:
    // 0x1ea604: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1ea604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1ea608:
    // 0x1ea608: 0x40f809  jalr        $v0
label_1ea60c:
    if (ctx->pc == 0x1EA60Cu) {
        ctx->pc = 0x1EA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA608u;
        // 0x1ea60c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA610u;
        goto label_1ea610;
    }
    ctx->pc = 0x1EA608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA610u);
        ctx->pc = 0x1EA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA608u;
        // 0x1ea60c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA608u, 0x1EA610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA610u;
label_1ea610:
    // 0x1ea610: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_1ea614:
    if (ctx->pc == 0x1EA614u) {
        ctx->pc = 0x1EA614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA610u;
        // 0x1ea614: 0x8e8600f8  lw          $a2, 0xF8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA618u;
        goto label_1ea618;
    }
    ctx->pc = 0x1EA610u;
    {
        const bool branch_taken_0x1ea610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea610) {
            ctx->pc = 0x1EA614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA610u;
            // 0x1ea614: 0x8e8600f8  lw          $a2, 0xF8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA654u;
            goto label_1ea654;
        }
    }
    ctx->pc = 0x1EA618u;
label_1ea618:
    // 0x1ea618: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1ea618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ea61c:
    // 0x1ea61c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ea61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ea620:
    // 0x1ea620: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x1ea620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_1ea624:
    // 0x1ea624: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x1ea624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1ea628:
    // 0x1ea628: 0x40f809  jalr        $v0
label_1ea62c:
    if (ctx->pc == 0x1EA62Cu) {
        ctx->pc = 0x1EA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA628u;
        // 0x1ea62c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA630u;
        goto label_1ea630;
    }
    ctx->pc = 0x1EA628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA630u);
        ctx->pc = 0x1EA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA628u;
        // 0x1ea62c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA628u, 0x1EA630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA630u;
label_1ea630:
    // 0x1ea630: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ea630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea634:
    // 0x1ea634: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1ea634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
label_1ea638:
    // 0x1ea638: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
label_1ea63c:
    if (ctx->pc == 0x1EA63Cu) {
        ctx->pc = 0x1EA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA638u;
        // 0x1ea63c: 0x8e8600f8  lw          $a2, 0xF8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA640u;
        goto label_1ea640;
    }
    ctx->pc = 0x1EA638u;
    {
        const bool branch_taken_0x1ea638 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ea638) {
            ctx->pc = 0x1EA63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA638u;
            // 0x1ea63c: 0x8e8600f8  lw          $a2, 0xF8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA654u;
            goto label_1ea654;
        }
    }
    ctx->pc = 0x1EA640u;
label_1ea640:
    // 0x1ea640: 0x96c50000  lhu         $a1, 0x0($s6)
    ctx->pc = 0x1ea640u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_1ea644:
    // 0x1ea644: 0xc07a6fc  jal         func_1E9BF0
label_1ea648:
    if (ctx->pc == 0x1EA648u) {
        ctx->pc = 0x1EA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA644u;
        // 0x1ea648: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA64Cu;
        goto label_1ea64c;
    }
    ctx->pc = 0x1EA644u;
    SET_GPR_U32(ctx, 31, 0x1EA64Cu);
    ctx->pc = 0x1EA648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA644u;
    // 0x1ea648: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9BF0u, 0x1EA644u, 0x1EA64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA64Cu;
label_1ea64c:
    // 0x1ea64c: 0xae900090  sw          $s0, 0x90($s4)
    ctx->pc = 0x1ea64cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 16));
label_1ea650:
    // 0x1ea650: 0x8e8600f8  lw          $a2, 0xF8($s4)
    ctx->pc = 0x1ea650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_1ea654:
    // 0x1ea654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea658:
    // 0x1ea658: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea65c:
    // 0x1ea65c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea65cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea660:
    // 0x1ea660: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea664:
    // 0x1ea664: 0x60f809  jalr        $v1
label_1ea668:
    if (ctx->pc == 0x1EA668u) {
        ctx->pc = 0x1EA668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA664u;
        // 0x1ea668: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA66Cu;
        goto label_1ea66c;
    }
    ctx->pc = 0x1EA664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA66Cu);
        ctx->pc = 0x1EA668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA664u;
        // 0x1ea668: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA664u, 0x1EA66Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA66Cu;
label_1ea66c:
    // 0x1ea66c: 0x8e8600c4  lw          $a2, 0xC4($s4)
    ctx->pc = 0x1ea66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_1ea670:
    // 0x1ea670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea674:
    // 0x1ea674: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea678:
    // 0x1ea678: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea67c:
    // 0x1ea67c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea680:
    // 0x1ea680: 0x60f809  jalr        $v1
label_1ea684:
    if (ctx->pc == 0x1EA684u) {
        ctx->pc = 0x1EA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA680u;
        // 0x1ea684: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA688u;
        goto label_1ea688;
    }
    ctx->pc = 0x1EA680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA688u);
        ctx->pc = 0x1EA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA680u;
        // 0x1ea684: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA680u, 0x1EA688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA688u;
label_1ea688:
    // 0x1ea688: 0x8e8600cc  lw          $a2, 0xCC($s4)
    ctx->pc = 0x1ea688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
label_1ea68c:
    // 0x1ea68c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea690:
    // 0x1ea690: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea694:
    // 0x1ea694: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea694u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea698:
    // 0x1ea698: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea69c:
    // 0x1ea69c: 0x60f809  jalr        $v1
label_1ea6a0:
    if (ctx->pc == 0x1EA6A0u) {
        ctx->pc = 0x1EA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA69Cu;
        // 0x1ea6a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6A4u;
        goto label_1ea6a4;
    }
    ctx->pc = 0x1EA69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA6A4u);
        ctx->pc = 0x1EA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA69Cu;
        // 0x1ea6a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA69Cu, 0x1EA6A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA6A4u;
label_1ea6a4:
    // 0x1ea6a4: 0x8e8600fc  lw          $a2, 0xFC($s4)
    ctx->pc = 0x1ea6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
label_1ea6a8:
    // 0x1ea6a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea6ac:
    // 0x1ea6ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea6b0:
    // 0x1ea6b0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea6b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea6b4:
    // 0x1ea6b4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea6b8:
    // 0x1ea6b8: 0x60f809  jalr        $v1
label_1ea6bc:
    if (ctx->pc == 0x1EA6BCu) {
        ctx->pc = 0x1EA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6B8u;
        // 0x1ea6bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6C0u;
        goto label_1ea6c0;
    }
    ctx->pc = 0x1EA6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA6C0u);
        ctx->pc = 0x1EA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6B8u;
        // 0x1ea6bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA6B8u, 0x1EA6C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA6C0u;
label_1ea6c0:
    // 0x1ea6c0: 0x8e840100  lw          $a0, 0x100($s4)
    ctx->pc = 0x1ea6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_1ea6c4:
    // 0x1ea6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea6c8:
    // 0x1ea6c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea6cc:
    // 0x1ea6cc: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x1ea6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
label_1ea6d0:
    // 0x1ea6d0: 0x8e8600d4  lw          $a2, 0xD4($s4)
    ctx->pc = 0x1ea6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_1ea6d4:
    // 0x1ea6d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea6d8:
    // 0x1ea6d8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea6d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea6dc:
    // 0x1ea6dc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea6e0:
    // 0x1ea6e0: 0x60f809  jalr        $v1
label_1ea6e4:
    if (ctx->pc == 0x1EA6E4u) {
        ctx->pc = 0x1EA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6E0u;
        // 0x1ea6e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6E8u;
        goto label_1ea6e8;
    }
    ctx->pc = 0x1EA6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA6E8u);
        ctx->pc = 0x1EA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6E0u;
        // 0x1ea6e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA6E0u, 0x1EA6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA6E8u;
label_1ea6e8:
    // 0x1ea6e8: 0x8e8600d0  lw          $a2, 0xD0($s4)
    ctx->pc = 0x1ea6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
label_1ea6ec:
    // 0x1ea6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea6f0:
    // 0x1ea6f0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ea6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea6f4:
    // 0x1ea6f4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ea6f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1ea6f8:
    // 0x1ea6f8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1ea6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1ea6fc:
    // 0x1ea6fc: 0x60f809  jalr        $v1
label_1ea700:
    if (ctx->pc == 0x1EA700u) {
        ctx->pc = 0x1EA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6FCu;
        // 0x1ea700: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA704u;
        goto label_1ea704;
    }
    ctx->pc = 0x1EA6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA704u);
        ctx->pc = 0x1EA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6FCu;
        // 0x1ea700: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA6FCu, 0x1EA704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA704u;
label_1ea704:
    // 0x1ea704: 0x12c0002d  beqz        $s6, . + 4 + (0x2D << 2)
label_1ea708:
    if (ctx->pc == 0x1EA708u) {
        ctx->pc = 0x1EA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA704u;
        // 0x1ea708: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA70Cu;
        goto label_1ea70c;
    }
    ctx->pc = 0x1EA704u;
    {
        const bool branch_taken_0x1ea704 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA704u;
        // 0x1ea708: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea704) {
            ctx->pc = 0x1EA7BCu;
            goto label_1ea7bc;
        }
    }
    ctx->pc = 0x1EA70Cu;
label_1ea70c:
    // 0x1ea70c: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x1ea70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1ea710:
    // 0x1ea710: 0xc073478  jal         func_1CD1E0
label_1ea714:
    if (ctx->pc == 0x1EA714u) {
        ctx->pc = 0x1EA714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA710u;
        // 0x1ea714: 0x8e8400f8  lw          $a0, 0xF8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA718u;
        goto label_1ea718;
    }
    ctx->pc = 0x1EA710u;
    SET_GPR_U32(ctx, 31, 0x1EA718u);
    ctx->pc = 0x1EA714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA710u;
    // 0x1ea714: 0x8e8400f8  lw          $a0, 0xF8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1EA710u, 0x1EA718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA718u;
label_1ea718:
    // 0x1ea718: 0x92c20010  lbu         $v0, 0x10($s6)
    ctx->pc = 0x1ea718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 16)));
label_1ea71c:
    // 0x1ea71c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ea71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1ea720:
    // 0x1ea720: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ea720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1ea724:
    // 0x1ea724: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ea724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ea728:
    // 0x1ea728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ea72c:
    // 0x1ea72c: 0x0  nop
    ctx->pc = 0x1ea72cu;
    // NOP
label_1ea730:
    // 0x1ea730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ea730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ea734:
    // 0x1ea734: 0x8e830100  lw          $v1, 0x100($s4)
    ctx->pc = 0x1ea734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_1ea738:
    // 0x1ea738: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ea738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ea73c:
    // 0x1ea73c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ea73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ea740:
    // 0x1ea740: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ea740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ea744:
    // 0x1ea744: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ea744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1ea748:
    // 0x1ea748: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1ea748u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_1ea74c:
    // 0x1ea74c: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x1ea74cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
label_1ea750:
    // 0x1ea750: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x1ea750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_1ea754:
    // 0x1ea754: 0xc07f952  jal         func_1FE548
label_1ea758:
    if (ctx->pc == 0x1EA758u) {
        ctx->pc = 0x1EA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA754u;
        // 0x1ea758: 0x92c4000d  lbu         $a0, 0xD($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA75Cu;
        goto label_1ea75c;
    }
    ctx->pc = 0x1EA754u;
    SET_GPR_U32(ctx, 31, 0x1EA75Cu);
    ctx->pc = 0x1EA758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA754u;
    // 0x1ea758: 0x92c4000d  lbu         $a0, 0xD($s6) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 13)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE548u, 0x1EA754u, 0x1EA75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA75Cu;
label_1ea75c:
    // 0x1ea75c: 0x8e8400fc  lw          $a0, 0xFC($s4)
    ctx->pc = 0x1ea75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
label_1ea760:
    // 0x1ea760: 0xc073478  jal         func_1CD1E0
label_1ea764:
    if (ctx->pc == 0x1EA764u) {
        ctx->pc = 0x1EA764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA760u;
        // 0x1ea764: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA768u;
        goto label_1ea768;
    }
    ctx->pc = 0x1EA760u;
    SET_GPR_U32(ctx, 31, 0x1EA768u);
    ctx->pc = 0x1EA764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA760u;
    // 0x1ea764: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1EA760u, 0x1EA768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA768u;
label_1ea768:
    // 0x1ea768: 0x8e8400ec  lw          $a0, 0xEC($s4)
    ctx->pc = 0x1ea768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
label_1ea76c:
    // 0x1ea76c: 0x8e8600d4  lw          $a2, 0xD4($s4)
    ctx->pc = 0x1ea76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_1ea770:
    // 0x1ea770: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ea770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ea774:
    // 0x1ea774: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x1ea774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1ea778:
    // 0x1ea778: 0x84620040  lh          $v0, 0x40($v1)
    ctx->pc = 0x1ea778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1ea77c:
    // 0x1ea77c: 0x24710040  addiu       $s1, $v1, 0x40
    ctx->pc = 0x1ea77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1ea780:
    // 0x1ea780: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1ea784:
    if (ctx->pc == 0x1EA784u) {
        ctx->pc = 0x1EA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA780u;
        // 0x1ea784: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA788u;
        goto label_1ea788;
    }
    ctx->pc = 0x1EA780u;
    {
        const bool branch_taken_0x1ea780 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA780u;
        // 0x1ea784: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea780) {
            ctx->pc = 0x1EA7ACu;
            goto label_1ea7ac;
        }
    }
    ctx->pc = 0x1EA788u;
label_1ea788:
    // 0x1ea788: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1ea788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ea78c:
    // 0x1ea78c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1ea78cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1ea790:
    // 0x1ea790: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1ea790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1ea794:
    // 0x1ea794: 0x40f809  jalr        $v0
label_1ea798:
    if (ctx->pc == 0x1EA798u) {
        ctx->pc = 0x1EA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA794u;
        // 0x1ea798: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA79Cu;
        goto label_1ea79c;
    }
    ctx->pc = 0x1EA794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA79Cu);
        ctx->pc = 0x1EA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA794u;
        // 0x1ea798: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA794u, 0x1EA79Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA79Cu;
label_1ea79c:
    // 0x1ea79c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1ea7a0:
    if (ctx->pc == 0x1EA7A0u) {
        ctx->pc = 0x1EA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA79Cu;
        // 0x1ea7a0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA7A4u;
        goto label_1ea7a4;
    }
    ctx->pc = 0x1EA79Cu;
    {
        const bool branch_taken_0x1ea79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea79c) {
            ctx->pc = 0x1EA7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA79Cu;
            // 0x1ea7a0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA7B0u;
            goto label_1ea7b0;
        }
    }
    ctx->pc = 0x1EA7A4u;
label_1ea7a4:
    // 0x1ea7a4: 0x8e8200e0  lw          $v0, 0xE0($s4)
    ctx->pc = 0x1ea7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1ea7a8:
    // 0x1ea7a8: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x1ea7a8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ea7ac:
    // 0x1ea7ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ea7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea7b0:
    // 0x1ea7b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea7b4:
    // 0x1ea7b4: 0x40f809  jalr        $v0
label_1ea7b8:
    if (ctx->pc == 0x1EA7B8u) {
        ctx->pc = 0x1EA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7B4u;
        // 0x1ea7b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA7BCu;
        goto label_1ea7bc;
    }
    ctx->pc = 0x1EA7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA7BCu);
        ctx->pc = 0x1EA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7B4u;
        // 0x1ea7b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA7B4u, 0x1EA7BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA7BCu;
label_1ea7bc:
    // 0x1ea7bc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1ea7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ea7c0:
    // 0x1ea7c0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1ea7c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ea7c4:
    // 0x1ea7c4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1ea7c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ea7c8:
    // 0x1ea7c8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1ea7c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ea7cc:
    // 0x1ea7cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1ea7ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ea7d0:
    // 0x1ea7d0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1ea7d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ea7d4:
    // 0x1ea7d4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1ea7d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ea7d8:
    // 0x1ea7d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ea7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ea7dc:
    // 0x1ea7dc: 0x3e00008  jr          $ra
label_1ea7e0:
    if (ctx->pc == 0x1EA7E0u) {
        ctx->pc = 0x1EA7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7DCu;
        // 0x1ea7e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA7E4u;
        goto label_1ea7e4;
    }
    ctx->pc = 0x1EA7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7DCu;
        // 0x1ea7e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA7E4u;
label_1ea7e4:
    // 0x1ea7e4: 0x0  nop
    ctx->pc = 0x1ea7e4u;
    // NOP
    ctx->pc = 0x1ea7e8u;
}
