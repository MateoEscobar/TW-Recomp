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

// Function: sub_00392B88
// Address: 0x392b88 - 0x3932c8
void sub_00392B88_0x392b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392B88_0x392b88");
#endif

    switch (ctx->pc) {
        case 0x392b88u: goto label_392b88;
        case 0x392b8cu: goto label_392b8c;
        case 0x392b90u: goto label_392b90;
        case 0x392b94u: goto label_392b94;
        case 0x392b98u: goto label_392b98;
        case 0x392b9cu: goto label_392b9c;
        case 0x392ba0u: goto label_392ba0;
        case 0x392ba4u: goto label_392ba4;
        case 0x392ba8u: goto label_392ba8;
        case 0x392bacu: goto label_392bac;
        case 0x392bb0u: goto label_392bb0;
        case 0x392bb4u: goto label_392bb4;
        case 0x392bb8u: goto label_392bb8;
        case 0x392bbcu: goto label_392bbc;
        case 0x392bc0u: goto label_392bc0;
        case 0x392bc4u: goto label_392bc4;
        case 0x392bc8u: goto label_392bc8;
        case 0x392bccu: goto label_392bcc;
        case 0x392bd0u: goto label_392bd0;
        case 0x392bd4u: goto label_392bd4;
        case 0x392bd8u: goto label_392bd8;
        case 0x392bdcu: goto label_392bdc;
        case 0x392be0u: goto label_392be0;
        case 0x392be4u: goto label_392be4;
        case 0x392be8u: goto label_392be8;
        case 0x392becu: goto label_392bec;
        case 0x392bf0u: goto label_392bf0;
        case 0x392bf4u: goto label_392bf4;
        case 0x392bf8u: goto label_392bf8;
        case 0x392bfcu: goto label_392bfc;
        case 0x392c00u: goto label_392c00;
        case 0x392c04u: goto label_392c04;
        case 0x392c08u: goto label_392c08;
        case 0x392c0cu: goto label_392c0c;
        case 0x392c10u: goto label_392c10;
        case 0x392c14u: goto label_392c14;
        case 0x392c18u: goto label_392c18;
        case 0x392c1cu: goto label_392c1c;
        case 0x392c20u: goto label_392c20;
        case 0x392c24u: goto label_392c24;
        case 0x392c28u: goto label_392c28;
        case 0x392c2cu: goto label_392c2c;
        case 0x392c30u: goto label_392c30;
        case 0x392c34u: goto label_392c34;
        case 0x392c38u: goto label_392c38;
        case 0x392c3cu: goto label_392c3c;
        case 0x392c40u: goto label_392c40;
        case 0x392c44u: goto label_392c44;
        case 0x392c48u: goto label_392c48;
        case 0x392c4cu: goto label_392c4c;
        case 0x392c50u: goto label_392c50;
        case 0x392c54u: goto label_392c54;
        case 0x392c58u: goto label_392c58;
        case 0x392c5cu: goto label_392c5c;
        case 0x392c60u: goto label_392c60;
        case 0x392c64u: goto label_392c64;
        case 0x392c68u: goto label_392c68;
        case 0x392c6cu: goto label_392c6c;
        case 0x392c70u: goto label_392c70;
        case 0x392c74u: goto label_392c74;
        case 0x392c78u: goto label_392c78;
        case 0x392c7cu: goto label_392c7c;
        case 0x392c80u: goto label_392c80;
        case 0x392c84u: goto label_392c84;
        case 0x392c88u: goto label_392c88;
        case 0x392c8cu: goto label_392c8c;
        case 0x392c90u: goto label_392c90;
        case 0x392c94u: goto label_392c94;
        case 0x392c98u: goto label_392c98;
        case 0x392c9cu: goto label_392c9c;
        case 0x392ca0u: goto label_392ca0;
        case 0x392ca4u: goto label_392ca4;
        case 0x392ca8u: goto label_392ca8;
        case 0x392cacu: goto label_392cac;
        case 0x392cb0u: goto label_392cb0;
        case 0x392cb4u: goto label_392cb4;
        case 0x392cb8u: goto label_392cb8;
        case 0x392cbcu: goto label_392cbc;
        case 0x392cc0u: goto label_392cc0;
        case 0x392cc4u: goto label_392cc4;
        case 0x392cc8u: goto label_392cc8;
        case 0x392cccu: goto label_392ccc;
        case 0x392cd0u: goto label_392cd0;
        case 0x392cd4u: goto label_392cd4;
        case 0x392cd8u: goto label_392cd8;
        case 0x392cdcu: goto label_392cdc;
        case 0x392ce0u: goto label_392ce0;
        case 0x392ce4u: goto label_392ce4;
        case 0x392ce8u: goto label_392ce8;
        case 0x392cecu: goto label_392cec;
        case 0x392cf0u: goto label_392cf0;
        case 0x392cf4u: goto label_392cf4;
        case 0x392cf8u: goto label_392cf8;
        case 0x392cfcu: goto label_392cfc;
        case 0x392d00u: goto label_392d00;
        case 0x392d04u: goto label_392d04;
        case 0x392d08u: goto label_392d08;
        case 0x392d0cu: goto label_392d0c;
        case 0x392d10u: goto label_392d10;
        case 0x392d14u: goto label_392d14;
        case 0x392d18u: goto label_392d18;
        case 0x392d1cu: goto label_392d1c;
        case 0x392d20u: goto label_392d20;
        case 0x392d24u: goto label_392d24;
        case 0x392d28u: goto label_392d28;
        case 0x392d2cu: goto label_392d2c;
        case 0x392d30u: goto label_392d30;
        case 0x392d34u: goto label_392d34;
        case 0x392d38u: goto label_392d38;
        case 0x392d3cu: goto label_392d3c;
        case 0x392d40u: goto label_392d40;
        case 0x392d44u: goto label_392d44;
        case 0x392d48u: goto label_392d48;
        case 0x392d4cu: goto label_392d4c;
        case 0x392d50u: goto label_392d50;
        case 0x392d54u: goto label_392d54;
        case 0x392d58u: goto label_392d58;
        case 0x392d5cu: goto label_392d5c;
        case 0x392d60u: goto label_392d60;
        case 0x392d64u: goto label_392d64;
        case 0x392d68u: goto label_392d68;
        case 0x392d6cu: goto label_392d6c;
        case 0x392d70u: goto label_392d70;
        case 0x392d74u: goto label_392d74;
        case 0x392d78u: goto label_392d78;
        case 0x392d7cu: goto label_392d7c;
        case 0x392d80u: goto label_392d80;
        case 0x392d84u: goto label_392d84;
        case 0x392d88u: goto label_392d88;
        case 0x392d8cu: goto label_392d8c;
        case 0x392d90u: goto label_392d90;
        case 0x392d94u: goto label_392d94;
        case 0x392d98u: goto label_392d98;
        case 0x392d9cu: goto label_392d9c;
        case 0x392da0u: goto label_392da0;
        case 0x392da4u: goto label_392da4;
        case 0x392da8u: goto label_392da8;
        case 0x392dacu: goto label_392dac;
        case 0x392db0u: goto label_392db0;
        case 0x392db4u: goto label_392db4;
        case 0x392db8u: goto label_392db8;
        case 0x392dbcu: goto label_392dbc;
        case 0x392dc0u: goto label_392dc0;
        case 0x392dc4u: goto label_392dc4;
        case 0x392dc8u: goto label_392dc8;
        case 0x392dccu: goto label_392dcc;
        case 0x392dd0u: goto label_392dd0;
        case 0x392dd4u: goto label_392dd4;
        case 0x392dd8u: goto label_392dd8;
        case 0x392ddcu: goto label_392ddc;
        case 0x392de0u: goto label_392de0;
        case 0x392de4u: goto label_392de4;
        case 0x392de8u: goto label_392de8;
        case 0x392decu: goto label_392dec;
        case 0x392df0u: goto label_392df0;
        case 0x392df4u: goto label_392df4;
        case 0x392df8u: goto label_392df8;
        case 0x392dfcu: goto label_392dfc;
        case 0x392e00u: goto label_392e00;
        case 0x392e04u: goto label_392e04;
        case 0x392e08u: goto label_392e08;
        case 0x392e0cu: goto label_392e0c;
        case 0x392e10u: goto label_392e10;
        case 0x392e14u: goto label_392e14;
        case 0x392e18u: goto label_392e18;
        case 0x392e1cu: goto label_392e1c;
        case 0x392e20u: goto label_392e20;
        case 0x392e24u: goto label_392e24;
        case 0x392e28u: goto label_392e28;
        case 0x392e2cu: goto label_392e2c;
        case 0x392e30u: goto label_392e30;
        case 0x392e34u: goto label_392e34;
        case 0x392e38u: goto label_392e38;
        case 0x392e3cu: goto label_392e3c;
        case 0x392e40u: goto label_392e40;
        case 0x392e44u: goto label_392e44;
        case 0x392e48u: goto label_392e48;
        case 0x392e4cu: goto label_392e4c;
        case 0x392e50u: goto label_392e50;
        case 0x392e54u: goto label_392e54;
        case 0x392e58u: goto label_392e58;
        case 0x392e5cu: goto label_392e5c;
        case 0x392e60u: goto label_392e60;
        case 0x392e64u: goto label_392e64;
        case 0x392e68u: goto label_392e68;
        case 0x392e6cu: goto label_392e6c;
        case 0x392e70u: goto label_392e70;
        case 0x392e74u: goto label_392e74;
        case 0x392e78u: goto label_392e78;
        case 0x392e7cu: goto label_392e7c;
        case 0x392e80u: goto label_392e80;
        case 0x392e84u: goto label_392e84;
        case 0x392e88u: goto label_392e88;
        case 0x392e8cu: goto label_392e8c;
        case 0x392e90u: goto label_392e90;
        case 0x392e94u: goto label_392e94;
        case 0x392e98u: goto label_392e98;
        case 0x392e9cu: goto label_392e9c;
        case 0x392ea0u: goto label_392ea0;
        case 0x392ea4u: goto label_392ea4;
        case 0x392ea8u: goto label_392ea8;
        case 0x392eacu: goto label_392eac;
        case 0x392eb0u: goto label_392eb0;
        case 0x392eb4u: goto label_392eb4;
        case 0x392eb8u: goto label_392eb8;
        case 0x392ebcu: goto label_392ebc;
        case 0x392ec0u: goto label_392ec0;
        case 0x392ec4u: goto label_392ec4;
        case 0x392ec8u: goto label_392ec8;
        case 0x392eccu: goto label_392ecc;
        case 0x392ed0u: goto label_392ed0;
        case 0x392ed4u: goto label_392ed4;
        case 0x392ed8u: goto label_392ed8;
        case 0x392edcu: goto label_392edc;
        case 0x392ee0u: goto label_392ee0;
        case 0x392ee4u: goto label_392ee4;
        case 0x392ee8u: goto label_392ee8;
        case 0x392eecu: goto label_392eec;
        case 0x392ef0u: goto label_392ef0;
        case 0x392ef4u: goto label_392ef4;
        case 0x392ef8u: goto label_392ef8;
        case 0x392efcu: goto label_392efc;
        case 0x392f00u: goto label_392f00;
        case 0x392f04u: goto label_392f04;
        case 0x392f08u: goto label_392f08;
        case 0x392f0cu: goto label_392f0c;
        case 0x392f10u: goto label_392f10;
        case 0x392f14u: goto label_392f14;
        case 0x392f18u: goto label_392f18;
        case 0x392f1cu: goto label_392f1c;
        case 0x392f20u: goto label_392f20;
        case 0x392f24u: goto label_392f24;
        case 0x392f28u: goto label_392f28;
        case 0x392f2cu: goto label_392f2c;
        case 0x392f30u: goto label_392f30;
        case 0x392f34u: goto label_392f34;
        case 0x392f38u: goto label_392f38;
        case 0x392f3cu: goto label_392f3c;
        case 0x392f40u: goto label_392f40;
        case 0x392f44u: goto label_392f44;
        case 0x392f48u: goto label_392f48;
        case 0x392f4cu: goto label_392f4c;
        case 0x392f50u: goto label_392f50;
        case 0x392f54u: goto label_392f54;
        case 0x392f58u: goto label_392f58;
        case 0x392f5cu: goto label_392f5c;
        case 0x392f60u: goto label_392f60;
        case 0x392f64u: goto label_392f64;
        case 0x392f68u: goto label_392f68;
        case 0x392f6cu: goto label_392f6c;
        case 0x392f70u: goto label_392f70;
        case 0x392f74u: goto label_392f74;
        case 0x392f78u: goto label_392f78;
        case 0x392f7cu: goto label_392f7c;
        case 0x392f80u: goto label_392f80;
        case 0x392f84u: goto label_392f84;
        case 0x392f88u: goto label_392f88;
        case 0x392f8cu: goto label_392f8c;
        case 0x392f90u: goto label_392f90;
        case 0x392f94u: goto label_392f94;
        case 0x392f98u: goto label_392f98;
        case 0x392f9cu: goto label_392f9c;
        case 0x392fa0u: goto label_392fa0;
        case 0x392fa4u: goto label_392fa4;
        case 0x392fa8u: goto label_392fa8;
        case 0x392facu: goto label_392fac;
        case 0x392fb0u: goto label_392fb0;
        case 0x392fb4u: goto label_392fb4;
        case 0x392fb8u: goto label_392fb8;
        case 0x392fbcu: goto label_392fbc;
        case 0x392fc0u: goto label_392fc0;
        case 0x392fc4u: goto label_392fc4;
        case 0x392fc8u: goto label_392fc8;
        case 0x392fccu: goto label_392fcc;
        case 0x392fd0u: goto label_392fd0;
        case 0x392fd4u: goto label_392fd4;
        case 0x392fd8u: goto label_392fd8;
        case 0x392fdcu: goto label_392fdc;
        case 0x392fe0u: goto label_392fe0;
        case 0x392fe4u: goto label_392fe4;
        case 0x392fe8u: goto label_392fe8;
        case 0x392fecu: goto label_392fec;
        case 0x392ff0u: goto label_392ff0;
        case 0x392ff4u: goto label_392ff4;
        case 0x392ff8u: goto label_392ff8;
        case 0x392ffcu: goto label_392ffc;
        case 0x393000u: goto label_393000;
        case 0x393004u: goto label_393004;
        case 0x393008u: goto label_393008;
        case 0x39300cu: goto label_39300c;
        case 0x393010u: goto label_393010;
        case 0x393014u: goto label_393014;
        case 0x393018u: goto label_393018;
        case 0x39301cu: goto label_39301c;
        case 0x393020u: goto label_393020;
        case 0x393024u: goto label_393024;
        case 0x393028u: goto label_393028;
        case 0x39302cu: goto label_39302c;
        case 0x393030u: goto label_393030;
        case 0x393034u: goto label_393034;
        case 0x393038u: goto label_393038;
        case 0x39303cu: goto label_39303c;
        case 0x393040u: goto label_393040;
        case 0x393044u: goto label_393044;
        case 0x393048u: goto label_393048;
        case 0x39304cu: goto label_39304c;
        case 0x393050u: goto label_393050;
        case 0x393054u: goto label_393054;
        case 0x393058u: goto label_393058;
        case 0x39305cu: goto label_39305c;
        case 0x393060u: goto label_393060;
        case 0x393064u: goto label_393064;
        case 0x393068u: goto label_393068;
        case 0x39306cu: goto label_39306c;
        case 0x393070u: goto label_393070;
        case 0x393074u: goto label_393074;
        case 0x393078u: goto label_393078;
        case 0x39307cu: goto label_39307c;
        case 0x393080u: goto label_393080;
        case 0x393084u: goto label_393084;
        case 0x393088u: goto label_393088;
        case 0x39308cu: goto label_39308c;
        case 0x393090u: goto label_393090;
        case 0x393094u: goto label_393094;
        case 0x393098u: goto label_393098;
        case 0x39309cu: goto label_39309c;
        case 0x3930a0u: goto label_3930a0;
        case 0x3930a4u: goto label_3930a4;
        case 0x3930a8u: goto label_3930a8;
        case 0x3930acu: goto label_3930ac;
        case 0x3930b0u: goto label_3930b0;
        case 0x3930b4u: goto label_3930b4;
        case 0x3930b8u: goto label_3930b8;
        case 0x3930bcu: goto label_3930bc;
        case 0x3930c0u: goto label_3930c0;
        case 0x3930c4u: goto label_3930c4;
        case 0x3930c8u: goto label_3930c8;
        case 0x3930ccu: goto label_3930cc;
        case 0x3930d0u: goto label_3930d0;
        case 0x3930d4u: goto label_3930d4;
        case 0x3930d8u: goto label_3930d8;
        case 0x3930dcu: goto label_3930dc;
        case 0x3930e0u: goto label_3930e0;
        case 0x3930e4u: goto label_3930e4;
        case 0x3930e8u: goto label_3930e8;
        case 0x3930ecu: goto label_3930ec;
        case 0x3930f0u: goto label_3930f0;
        case 0x3930f4u: goto label_3930f4;
        case 0x3930f8u: goto label_3930f8;
        case 0x3930fcu: goto label_3930fc;
        case 0x393100u: goto label_393100;
        case 0x393104u: goto label_393104;
        case 0x393108u: goto label_393108;
        case 0x39310cu: goto label_39310c;
        case 0x393110u: goto label_393110;
        case 0x393114u: goto label_393114;
        case 0x393118u: goto label_393118;
        case 0x39311cu: goto label_39311c;
        case 0x393120u: goto label_393120;
        case 0x393124u: goto label_393124;
        case 0x393128u: goto label_393128;
        case 0x39312cu: goto label_39312c;
        case 0x393130u: goto label_393130;
        case 0x393134u: goto label_393134;
        case 0x393138u: goto label_393138;
        case 0x39313cu: goto label_39313c;
        case 0x393140u: goto label_393140;
        case 0x393144u: goto label_393144;
        case 0x393148u: goto label_393148;
        case 0x39314cu: goto label_39314c;
        case 0x393150u: goto label_393150;
        case 0x393154u: goto label_393154;
        case 0x393158u: goto label_393158;
        case 0x39315cu: goto label_39315c;
        case 0x393160u: goto label_393160;
        case 0x393164u: goto label_393164;
        case 0x393168u: goto label_393168;
        case 0x39316cu: goto label_39316c;
        case 0x393170u: goto label_393170;
        case 0x393174u: goto label_393174;
        case 0x393178u: goto label_393178;
        case 0x39317cu: goto label_39317c;
        case 0x393180u: goto label_393180;
        case 0x393184u: goto label_393184;
        case 0x393188u: goto label_393188;
        case 0x39318cu: goto label_39318c;
        case 0x393190u: goto label_393190;
        case 0x393194u: goto label_393194;
        case 0x393198u: goto label_393198;
        case 0x39319cu: goto label_39319c;
        case 0x3931a0u: goto label_3931a0;
        case 0x3931a4u: goto label_3931a4;
        case 0x3931a8u: goto label_3931a8;
        case 0x3931acu: goto label_3931ac;
        case 0x3931b0u: goto label_3931b0;
        case 0x3931b4u: goto label_3931b4;
        case 0x3931b8u: goto label_3931b8;
        case 0x3931bcu: goto label_3931bc;
        case 0x3931c0u: goto label_3931c0;
        case 0x3931c4u: goto label_3931c4;
        case 0x3931c8u: goto label_3931c8;
        case 0x3931ccu: goto label_3931cc;
        case 0x3931d0u: goto label_3931d0;
        case 0x3931d4u: goto label_3931d4;
        case 0x3931d8u: goto label_3931d8;
        case 0x3931dcu: goto label_3931dc;
        case 0x3931e0u: goto label_3931e0;
        case 0x3931e4u: goto label_3931e4;
        case 0x3931e8u: goto label_3931e8;
        case 0x3931ecu: goto label_3931ec;
        case 0x3931f0u: goto label_3931f0;
        case 0x3931f4u: goto label_3931f4;
        case 0x3931f8u: goto label_3931f8;
        case 0x3931fcu: goto label_3931fc;
        case 0x393200u: goto label_393200;
        case 0x393204u: goto label_393204;
        case 0x393208u: goto label_393208;
        case 0x39320cu: goto label_39320c;
        case 0x393210u: goto label_393210;
        case 0x393214u: goto label_393214;
        case 0x393218u: goto label_393218;
        case 0x39321cu: goto label_39321c;
        case 0x393220u: goto label_393220;
        case 0x393224u: goto label_393224;
        case 0x393228u: goto label_393228;
        case 0x39322cu: goto label_39322c;
        case 0x393230u: goto label_393230;
        case 0x393234u: goto label_393234;
        case 0x393238u: goto label_393238;
        case 0x39323cu: goto label_39323c;
        case 0x393240u: goto label_393240;
        case 0x393244u: goto label_393244;
        case 0x393248u: goto label_393248;
        case 0x39324cu: goto label_39324c;
        case 0x393250u: goto label_393250;
        case 0x393254u: goto label_393254;
        case 0x393258u: goto label_393258;
        case 0x39325cu: goto label_39325c;
        case 0x393260u: goto label_393260;
        case 0x393264u: goto label_393264;
        case 0x393268u: goto label_393268;
        case 0x39326cu: goto label_39326c;
        case 0x393270u: goto label_393270;
        case 0x393274u: goto label_393274;
        case 0x393278u: goto label_393278;
        case 0x39327cu: goto label_39327c;
        case 0x393280u: goto label_393280;
        case 0x393284u: goto label_393284;
        case 0x393288u: goto label_393288;
        case 0x39328cu: goto label_39328c;
        case 0x393290u: goto label_393290;
        case 0x393294u: goto label_393294;
        case 0x393298u: goto label_393298;
        case 0x39329cu: goto label_39329c;
        case 0x3932a0u: goto label_3932a0;
        case 0x3932a4u: goto label_3932a4;
        case 0x3932a8u: goto label_3932a8;
        case 0x3932acu: goto label_3932ac;
        case 0x3932b0u: goto label_3932b0;
        case 0x3932b4u: goto label_3932b4;
        case 0x3932b8u: goto label_3932b8;
        case 0x3932bcu: goto label_3932bc;
        case 0x3932c0u: goto label_3932c0;
        case 0x3932c4u: goto label_3932c4;
        default: break;
    }

    ctx->pc = 0x392b88u;

label_392b88:
    // 0x392b88: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x392b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_392b8c:
    // 0x392b8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x392b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_392b90:
    // 0x392b90: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x392b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_392b94:
    // 0x392b94: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x392b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_392b98:
    // 0x392b98: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x392b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_392b9c:
    // 0x392b9c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x392b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_392ba0:
    // 0x392ba0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x392ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_392ba4:
    // 0x392ba4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x392ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_392ba8:
    // 0x392ba8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x392ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_392bac:
    // 0x392bac: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x392bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_392bb0:
    // 0x392bb0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x392bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_392bb4:
    // 0x392bb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x392bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_392bb8:
    // 0x392bb8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x392bb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392bbc:
    // 0x392bbc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x392bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_392bc0:
    // 0x392bc0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x392bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_392bc4:
    // 0x392bc4: 0x24160011  addiu       $s6, $zero, 0x11
    ctx->pc = 0x392bc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_392bc8:
    // 0x392bc8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x392bc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_392bcc:
    // 0x392bcc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x392bccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392bd0:
    // 0x392bd0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x392bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_392bd4:
    // 0x392bd4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x392bd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_392bd8:
    // 0x392bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x392bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_392bdc:
    // 0x392bdc: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x392bdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_392be0:
    // 0x392be0: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x392be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_392be4:
    // 0x392be4: 0xc0e44cc  jal         func_391330
label_392be8:
    if (ctx->pc == 0x392BE8u) {
        ctx->pc = 0x392BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BE4u;
        // 0x392be8: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392BECu;
        goto label_392bec;
    }
    ctx->pc = 0x392BE4u;
    SET_GPR_U32(ctx, 31, 0x392BECu);
    ctx->pc = 0x392BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392BE4u;
    // 0x392be8: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x392BE4u, 0x392BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392BECu;
label_392bec:
    // 0x392bec: 0x90550064  lbu         $s5, 0x64($v0)
    ctx->pc = 0x392becu;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_392bf0:
    // 0x392bf0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_392bf4:
    if (ctx->pc == 0x392BF4u) {
        ctx->pc = 0x392BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BF0u;
        // 0x392bf4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392BF8u;
        goto label_392bf8;
    }
    ctx->pc = 0x392BF0u;
    {
        const bool branch_taken_0x392bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x392BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BF0u;
        // 0x392bf4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392bf0) {
            ctx->pc = 0x392C14u;
            goto label_392c14;
        }
    }
    ctx->pc = 0x392BF8u;
label_392bf8:
    // 0x392bf8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x392bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_392bfc:
    // 0x392bfc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x392bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_392c00:
    // 0x392c00: 0x8e150344  lw          $s5, 0x344($s0)
    ctx->pc = 0x392c00u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 836)));
label_392c04:
    // 0x392c04: 0x80420031  lb          $v0, 0x31($v0)
    ctx->pc = 0x392c04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 49)));
label_392c08:
    // 0x392c08: 0x38430006  xori        $v1, $v0, 0x6
    ctx->pc = 0x392c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_392c0c:
    // 0x392c0c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x392c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_392c10:
    // 0x392c10: 0x83b00b  movn        $s6, $a0, $v1
    ctx->pc = 0x392c10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 4));
label_392c14:
    // 0x392c14: 0x12400167  beqz        $s2, . + 4 + (0x167 << 2)
label_392c18:
    if (ctx->pc == 0x392C18u) {
        ctx->pc = 0x392C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C14u;
        // 0x392c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C1Cu;
        goto label_392c1c;
    }
    ctx->pc = 0x392C14u;
    {
        const bool branch_taken_0x392c14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x392C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C14u;
        // 0x392c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392c14) {
            ctx->pc = 0x3931B4u;
            goto label_3931b4;
        }
    }
    ctx->pc = 0x392C1Cu;
label_392c1c:
    // 0x392c1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x392c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392c20:
    // 0x392c20: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x392c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_392c24:
    // 0x392c24: 0xc088aa4  jal         func_222A90
label_392c28:
    if (ctx->pc == 0x392C28u) {
        ctx->pc = 0x392C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C24u;
        // 0x392c28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C2Cu;
        goto label_392c2c;
    }
    ctx->pc = 0x392C24u;
    SET_GPR_U32(ctx, 31, 0x392C2Cu);
    ctx->pc = 0x392C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392C24u;
    // 0x392c28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x392C24u, 0x392C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392C2Cu;
label_392c2c:
    // 0x392c2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_392c30:
    if (ctx->pc == 0x392C30u) {
        ctx->pc = 0x392C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C2Cu;
        // 0x392c30: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C34u;
        goto label_392c34;
    }
    ctx->pc = 0x392C2Cu;
    {
        const bool branch_taken_0x392c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C2Cu;
        // 0x392c30: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392c2c) {
            ctx->pc = 0x392C3Cu;
            goto label_392c3c;
        }
    }
    ctx->pc = 0x392C34u;
label_392c34:
    // 0x392c34: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x392c34u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_392c38:
    // 0x392c38: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x392c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_392c3c:
    // 0x392c3c: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x392c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_392c40:
    // 0x392c40: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x392c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936208)));
label_392c44:
    // 0x392c44: 0x96850112  lhu         $a1, 0x112($s4)
    ctx->pc = 0x392c44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
label_392c48:
    // 0x392c48: 0xc0e44cc  jal         func_391330
label_392c4c:
    if (ctx->pc == 0x392C4Cu) {
        ctx->pc = 0x392C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C48u;
        // 0x392c4c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C50u;
        goto label_392c50;
    }
    ctx->pc = 0x392C48u;
    SET_GPR_U32(ctx, 31, 0x392C50u);
    ctx->pc = 0x392C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392C48u;
    // 0x392c4c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x392C48u, 0x392C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392C50u;
label_392c50:
    // 0x392c50: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x392c50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_392c54:
    // 0x392c54: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x392c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_392c58:
    // 0x392c58: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_392c5c:
    if (ctx->pc == 0x392C5Cu) {
        ctx->pc = 0x392C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C58u;
        // 0x392c5c: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C60u;
        goto label_392c60;
    }
    ctx->pc = 0x392C58u;
    {
        const bool branch_taken_0x392c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x392C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C58u;
        // 0x392c5c: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392c58) {
            ctx->pc = 0x392CA4u;
            goto label_392ca4;
        }
    }
    ctx->pc = 0x392C60u;
label_392c60:
    // 0x392c60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x392c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_392c64:
    // 0x392c64: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x392c64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_392c68:
    // 0x392c68: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x392c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_392c6c:
    // 0x392c6c: 0x40f809  jalr        $v0
label_392c70:
    if (ctx->pc == 0x392C70u) {
        ctx->pc = 0x392C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C6Cu;
        // 0x392c70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C74u;
        goto label_392c74;
    }
    ctx->pc = 0x392C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392C74u);
        ctx->pc = 0x392C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C6Cu;
        // 0x392c70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392C6Cu, 0x392C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392C74u;
label_392c74:
    // 0x392c74: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
label_392c78:
    if (ctx->pc == 0x392C78u) {
        ctx->pc = 0x392C7Cu;
        goto label_392c7c;
    }
    ctx->pc = 0x392C74u;
    {
        const bool branch_taken_0x392c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392c74) {
            ctx->pc = 0x392F2Cu;
            goto label_392f2c;
        }
    }
    ctx->pc = 0x392C7Cu;
label_392c7c:
    // 0x392c7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x392c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_392c80:
    // 0x392c80: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x392c80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_392c84:
    // 0x392c84: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x392c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_392c88:
    // 0x392c88: 0x40f809  jalr        $v0
label_392c8c:
    if (ctx->pc == 0x392C8Cu) {
        ctx->pc = 0x392C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C88u;
        // 0x392c8c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C90u;
        goto label_392c90;
    }
    ctx->pc = 0x392C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392C90u);
        ctx->pc = 0x392C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C88u;
        // 0x392c8c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392C88u, 0x392C90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392C90u;
label_392c90:
    // 0x392c90: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x392c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_392c94:
    // 0x392c94: 0x146000a5  bnez        $v1, . + 4 + (0xA5 << 2)
label_392c98:
    if (ctx->pc == 0x392C98u) {
        ctx->pc = 0x392C9Cu;
        goto label_392c9c;
    }
    ctx->pc = 0x392C94u;
    {
        const bool branch_taken_0x392c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x392c94) {
            ctx->pc = 0x392F2Cu;
            goto label_392f2c;
        }
    }
    ctx->pc = 0x392C9Cu;
label_392c9c:
    // 0x392c9c: 0x1000000a  b           . + 4 + (0xA << 2)
label_392ca0:
    if (ctx->pc == 0x392CA0u) {
        ctx->pc = 0x392CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C9Cu;
        // 0x392ca0: 0x9282010d  lbu         $v0, 0x10D($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392CA4u;
        goto label_392ca4;
    }
    ctx->pc = 0x392C9Cu;
    {
        const bool branch_taken_0x392c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C9Cu;
        // 0x392ca0: 0x9282010d  lbu         $v0, 0x10D($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392c9c) {
            ctx->pc = 0x392CC8u;
            goto label_392cc8;
        }
    }
    ctx->pc = 0x392CA4u;
label_392ca4:
    // 0x392ca4: 0x8e4201a8  lw          $v0, 0x1A8($s2)
    ctx->pc = 0x392ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_392ca8:
    // 0x392ca8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x392ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_392cac:
    // 0x392cac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x392cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_392cb0:
    // 0x392cb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_392cb4:
    if (ctx->pc == 0x392CB4u) {
        ctx->pc = 0x392CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CB0u;
        // 0x392cb4: 0x9282010d  lbu         $v0, 0x10D($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392CB8u;
        goto label_392cb8;
    }
    ctx->pc = 0x392CB0u;
    {
        const bool branch_taken_0x392cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CB0u;
        // 0x392cb4: 0x9282010d  lbu         $v0, 0x10D($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392cb0) {
            ctx->pc = 0x392CC8u;
            goto label_392cc8;
        }
    }
    ctx->pc = 0x392CB8u;
label_392cb8:
    // 0x392cb8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x392cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_392cbc:
    // 0x392cbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x392cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_392cc0:
    // 0x392cc0: 0x0  nop
    ctx->pc = 0x392cc0u;
    // NOP
label_392cc4:
    // 0x392cc4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x392cc4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_392cc8:
    // 0x392cc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_392ccc:
    if (ctx->pc == 0x392CCCu) {
        ctx->pc = 0x392CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CC8u;
        // 0x392ccc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392CD0u;
        goto label_392cd0;
    }
    ctx->pc = 0x392CC8u;
    {
        const bool branch_taken_0x392cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CC8u;
        // 0x392ccc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392cc8) {
            ctx->pc = 0x392CDCu;
            goto label_392cdc;
        }
    }
    ctx->pc = 0x392CD0u;
label_392cd0:
    // 0x392cd0: 0x9282010e  lbu         $v0, 0x10E($s4)
    ctx->pc = 0x392cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 270)));
label_392cd4:
    // 0x392cd4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_392cd8:
    if (ctx->pc == 0x392CD8u) {
        ctx->pc = 0x392CDCu;
        goto label_392cdc;
    }
    ctx->pc = 0x392CD4u;
    {
        const bool branch_taken_0x392cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392cd4) {
            ctx->pc = 0x392CE0u;
            goto label_392ce0;
        }
    }
    ctx->pc = 0x392CDCu;
label_392cdc:
    // 0x392cdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x392cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392ce0:
    // 0x392ce0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_392ce4:
    if (ctx->pc == 0x392CE4u) {
        ctx->pc = 0x392CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CE0u;
        // 0x392ce4: 0x8fc42c04  lw          $a0, 0x2C04($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392CE8u;
        goto label_392ce8;
    }
    ctx->pc = 0x392CE0u;
    {
        const bool branch_taken_0x392ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x392CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CE0u;
        // 0x392ce4: 0x8fc42c04  lw          $a0, 0x2C04($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ce0) {
            ctx->pc = 0x392D00u;
            goto label_392d00;
        }
    }
    ctx->pc = 0x392CE8u;
label_392ce8:
    // 0x392ce8: 0xc0e44cc  jal         func_391330
label_392cec:
    if (ctx->pc == 0x392CECu) {
        ctx->pc = 0x392CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CE8u;
        // 0x392cec: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392CF0u;
        goto label_392cf0;
    }
    ctx->pc = 0x392CE8u;
    SET_GPR_U32(ctx, 31, 0x392CF0u);
    ctx->pc = 0x392CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392CE8u;
    // 0x392cec: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x392CE8u, 0x392CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392CF0u;
label_392cf0:
    // 0x392cf0: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x392cf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_392cf4:
    // 0x392cf4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x392cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_392cf8:
    // 0x392cf8: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_392cfc:
    if (ctx->pc == 0x392CFCu) {
        ctx->pc = 0x392CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CF8u;
        // 0x392cfc: 0x8fc42c04  lw          $a0, 0x2C04($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D00u;
        goto label_392d00;
    }
    ctx->pc = 0x392CF8u;
    {
        const bool branch_taken_0x392cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x392CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CF8u;
        // 0x392cfc: 0x8fc42c04  lw          $a0, 0x2C04($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392cf8) {
            ctx->pc = 0x392DD0u;
            goto label_392dd0;
        }
    }
    ctx->pc = 0x392D00u;
label_392d00:
    // 0x392d00: 0xc088eb4  jal         func_223AD0
label_392d04:
    if (ctx->pc == 0x392D04u) {
        ctx->pc = 0x392D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D00u;
        // 0x392d04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D08u;
        goto label_392d08;
    }
    ctx->pc = 0x392D00u;
    SET_GPR_U32(ctx, 31, 0x392D08u);
    ctx->pc = 0x392D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392D00u;
    // 0x392d04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x392D00u, 0x392D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392D08u;
label_392d08:
    // 0x392d08: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_392d0c:
    if (ctx->pc == 0x392D0Cu) {
        ctx->pc = 0x392D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D08u;
        // 0x392d0c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D10u;
        goto label_392d10;
    }
    ctx->pc = 0x392D08u;
    {
        const bool branch_taken_0x392d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D08u;
        // 0x392d0c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d08) {
            ctx->pc = 0x392DACu;
            goto label_392dac;
        }
    }
    ctx->pc = 0x392D10u;
label_392d10:
    // 0x392d10: 0xc089bfc  jal         func_226FF0
label_392d14:
    if (ctx->pc == 0x392D14u) {
        ctx->pc = 0x392D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D10u;
        // 0x392d14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D18u;
        goto label_392d18;
    }
    ctx->pc = 0x392D10u;
    SET_GPR_U32(ctx, 31, 0x392D18u);
    ctx->pc = 0x392D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392D10u;
    // 0x392d14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x392D10u, 0x392D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392D18u;
label_392d18:
    // 0x392d18: 0xc0e57ce  jal         func_395F38
label_392d1c:
    if (ctx->pc == 0x392D1Cu) {
        ctx->pc = 0x392D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D18u;
        // 0x392d1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D20u;
        goto label_392d20;
    }
    ctx->pc = 0x392D18u;
    SET_GPR_U32(ctx, 31, 0x392D20u);
    ctx->pc = 0x392D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392D18u;
    // 0x392d1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x392D18u, 0x392D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392D20u;
label_392d20:
    // 0x392d20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x392d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392d24:
    // 0x392d24: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_392d28:
    if (ctx->pc == 0x392D28u) {
        ctx->pc = 0x392D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D24u;
        // 0x392d28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D2Cu;
        goto label_392d2c;
    }
    ctx->pc = 0x392D24u;
    {
        const bool branch_taken_0x392d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x392D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D24u;
        // 0x392d28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d24) {
            ctx->pc = 0x392D88u;
            goto label_392d88;
        }
    }
    ctx->pc = 0x392D2Cu;
label_392d2c:
    // 0x392d2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x392d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_392d30:
    // 0x392d30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x392d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_392d34:
    // 0x392d34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x392d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392d38:
    // 0x392d38: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x392d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392d3c:
    // 0x392d3c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x392d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_392d40:
    // 0x392d40: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x392d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_392d44:
    // 0x392d44: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x392d44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_392d48:
    // 0x392d48: 0xc0882b2  jal         func_220AC8
label_392d4c:
    if (ctx->pc == 0x392D4Cu) {
        ctx->pc = 0x392D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D48u;
        // 0x392d4c: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D50u;
        goto label_392d50;
    }
    ctx->pc = 0x392D48u;
    SET_GPR_U32(ctx, 31, 0x392D50u);
    ctx->pc = 0x392D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392D48u;
    // 0x392d4c: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220AC8u, 0x392D48u, 0x392D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392D50u;
label_392d50:
    // 0x392d50: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x392d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_392d54:
    // 0x392d54: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x392d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_392d58:
    // 0x392d58: 0xc0e44cc  jal         func_391330
label_392d5c:
    if (ctx->pc == 0x392D5Cu) {
        ctx->pc = 0x392D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D58u;
        // 0x392d5c: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D60u;
        goto label_392d60;
    }
    ctx->pc = 0x392D58u;
    SET_GPR_U32(ctx, 31, 0x392D60u);
    ctx->pc = 0x392D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392D58u;
    // 0x392d5c: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x392D58u, 0x392D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392D60u;
label_392d60:
    // 0x392d60: 0x90560064  lbu         $s6, 0x64($v0)
    ctx->pc = 0x392d60u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_392d64:
    // 0x392d64: 0x12b60071  beq         $s5, $s6, . + 4 + (0x71 << 2)
label_392d68:
    if (ctx->pc == 0x392D68u) {
        ctx->pc = 0x392D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D64u;
        // 0x392d68: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D6Cu;
        goto label_392d6c;
    }
    ctx->pc = 0x392D64u;
    {
        const bool branch_taken_0x392d64 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x392D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D64u;
        // 0x392d68: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d64) {
            ctx->pc = 0x392F2Cu;
            goto label_392f2c;
        }
    }
    ctx->pc = 0x392D6Cu;
label_392d6c:
    // 0x392d6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x392d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_392d70:
    // 0x392d70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x392d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_392d74:
    // 0x392d74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x392d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392d78:
    // 0x392d78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x392d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392d7c:
    // 0x392d7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x392d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392d80:
    // 0x392d80: 0x1000005d  b           . + 4 + (0x5D << 2)
label_392d84:
    if (ctx->pc == 0x392D84u) {
        ctx->pc = 0x392D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D80u;
        // 0x392d84: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D88u;
        goto label_392d88;
    }
    ctx->pc = 0x392D80u;
    {
        const bool branch_taken_0x392d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D80u;
        // 0x392d84: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d80) {
            ctx->pc = 0x392EF8u;
            goto label_392ef8;
        }
    }
    ctx->pc = 0x392D88u;
label_392d88:
    // 0x392d88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x392d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_392d8c:
    // 0x392d8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x392d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_392d90:
    // 0x392d90: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x392d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_392d94:
    // 0x392d94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x392d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392d98:
    // 0x392d98: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x392d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392d9c:
    // 0x392d9c: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x392d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_392da0:
    // 0x392da0: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x392da0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_392da4:
    // 0x392da4: 0x10000055  b           . + 4 + (0x55 << 2)
label_392da8:
    if (ctx->pc == 0x392DA8u) {
        ctx->pc = 0x392DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DA4u;
        // 0x392da8: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392DACu;
        goto label_392dac;
    }
    ctx->pc = 0x392DA4u;
    {
        const bool branch_taken_0x392da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DA4u;
        // 0x392da8: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392da4) {
            ctx->pc = 0x392EFCu;
            goto label_392efc;
        }
    }
    ctx->pc = 0x392DACu;
label_392dac:
    // 0x392dac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x392dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_392db0:
    // 0x392db0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x392db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_392db4:
    // 0x392db4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x392db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_392db8:
    // 0x392db8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x392db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392dbc:
    // 0x392dbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x392dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392dc0:
    // 0x392dc0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x392dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392dc4:
    // 0x392dc4: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x392dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_392dc8:
    // 0x392dc8: 0x1000004c  b           . + 4 + (0x4C << 2)
label_392dcc:
    if (ctx->pc == 0x392DCCu) {
        ctx->pc = 0x392DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DC8u;
        // 0x392dcc: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392DD0u;
        goto label_392dd0;
    }
    ctx->pc = 0x392DC8u;
    {
        const bool branch_taken_0x392dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DC8u;
        // 0x392dcc: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392dc8) {
            ctx->pc = 0x392EFCu;
            goto label_392efc;
        }
    }
    ctx->pc = 0x392DD0u;
label_392dd0:
    // 0x392dd0: 0xc0e44cc  jal         func_391330
label_392dd4:
    if (ctx->pc == 0x392DD4u) {
        ctx->pc = 0x392DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DD0u;
        // 0x392dd4: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392DD8u;
        goto label_392dd8;
    }
    ctx->pc = 0x392DD0u;
    SET_GPR_U32(ctx, 31, 0x392DD8u);
    ctx->pc = 0x392DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392DD0u;
    // 0x392dd4: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x392DD0u, 0x392DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392DD8u;
label_392dd8:
    // 0x392dd8: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x392dd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_392ddc:
    // 0x392ddc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x392ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_392de0:
    // 0x392de0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_392de4:
    if (ctx->pc == 0x392DE4u) {
        ctx->pc = 0x392DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DE0u;
        // 0x392de4: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392DE8u;
        goto label_392de8;
    }
    ctx->pc = 0x392DE0u;
    {
        const bool branch_taken_0x392de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x392DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DE0u;
        // 0x392de4: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392de0) {
            ctx->pc = 0x392DF8u;
            goto label_392df8;
        }
    }
    ctx->pc = 0x392DE8u;
label_392de8:
    // 0x392de8: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x392de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_392dec:
    // 0x392dec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x392decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_392df0:
    // 0x392df0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_392df4:
    if (ctx->pc == 0x392DF4u) {
        ctx->pc = 0x392DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DF0u;
        // 0x392df4: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392DF8u;
        goto label_392df8;
    }
    ctx->pc = 0x392DF0u;
    {
        const bool branch_taken_0x392df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DF0u;
        // 0x392df4: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392df0) {
            ctx->pc = 0x392E5Cu;
            goto label_392e5c;
        }
    }
    ctx->pc = 0x392DF8u;
label_392df8:
    // 0x392df8: 0x3c028c6f  lui         $v0, 0x8C6F
    ctx->pc = 0x392df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35951 << 16));
label_392dfc:
    // 0x392dfc: 0x8e8300c4  lw          $v1, 0xC4($s4)
    ctx->pc = 0x392dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_392e00:
    // 0x392e00: 0x3442bfe3  ori         $v0, $v0, 0xBFE3
    ctx->pc = 0x392e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49123);
label_392e04:
    // 0x392e04: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_392e08:
    if (ctx->pc == 0x392E08u) {
        ctx->pc = 0x392E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E04u;
        // 0x392e08: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E0Cu;
        goto label_392e0c;
    }
    ctx->pc = 0x392E04u;
    {
        const bool branch_taken_0x392e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x392E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E04u;
        // 0x392e08: 0x26370090  addiu       $s7, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e04) {
            ctx->pc = 0x392E5Cu;
            goto label_392e5c;
        }
    }
    ctx->pc = 0x392E0Cu;
label_392e0c:
    // 0x392e0c: 0x3c028768  lui         $v0, 0x8768
    ctx->pc = 0x392e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34664 << 16));
label_392e10:
    // 0x392e10: 0x344290dd  ori         $v0, $v0, 0x90DD
    ctx->pc = 0x392e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37085);
label_392e14:
    // 0x392e14: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_392e18:
    if (ctx->pc == 0x392E18u) {
        ctx->pc = 0x392E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E14u;
        // 0x392e18: 0x8fc42c04  lw          $a0, 0x2C04($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E1Cu;
        goto label_392e1c;
    }
    ctx->pc = 0x392E14u;
    {
        const bool branch_taken_0x392e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x392E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E14u;
        // 0x392e18: 0x8fc42c04  lw          $a0, 0x2C04($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e14) {
            ctx->pc = 0x392E5Cu;
            goto label_392e5c;
        }
    }
    ctx->pc = 0x392E1Cu;
label_392e1c:
    // 0x392e1c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x392e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_392e20:
    // 0x392e20: 0xc0e44cc  jal         func_391330
label_392e24:
    if (ctx->pc == 0x392E24u) {
        ctx->pc = 0x392E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E20u;
        // 0x392e24: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E28u;
        goto label_392e28;
    }
    ctx->pc = 0x392E20u;
    SET_GPR_U32(ctx, 31, 0x392E28u);
    ctx->pc = 0x392E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392E20u;
    // 0x392e24: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x392E20u, 0x392E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392E28u;
label_392e28:
    // 0x392e28: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x392e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_392e2c:
    // 0x392e2c: 0x96850112  lhu         $a1, 0x112($s4)
    ctx->pc = 0x392e2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
label_392e30:
    // 0x392e30: 0xc0e44cc  jal         func_391330
label_392e34:
    if (ctx->pc == 0x392E34u) {
        ctx->pc = 0x392E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E30u;
        // 0x392e34: 0x90500064  lbu         $s0, 0x64($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E38u;
        goto label_392e38;
    }
    ctx->pc = 0x392E30u;
    SET_GPR_U32(ctx, 31, 0x392E38u);
    ctx->pc = 0x392E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392E30u;
    // 0x392e34: 0x90500064  lbu         $s0, 0x64($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x392E30u, 0x392E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392E38u;
label_392e38:
    // 0x392e38: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x392e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_392e3c:
    // 0x392e3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x392e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392e40:
    // 0x392e40: 0x90460064  lbu         $a2, 0x64($v0)
    ctx->pc = 0x392e40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_392e44:
    // 0x392e44: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x392e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_392e48:
    // 0x392e48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x392e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_392e4c:
    // 0x392e4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x392e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_392e50:
    // 0x392e50: 0xc04420c  jal         func_110830
label_392e54:
    if (ctx->pc == 0x392E54u) {
        ctx->pc = 0x392E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E50u;
        // 0x392e54: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E58u;
        goto label_392e58;
    }
    ctx->pc = 0x392E50u;
    SET_GPR_U32(ctx, 31, 0x392E58u);
    ctx->pc = 0x392E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392E50u;
    // 0x392e54: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x392E50u, 0x392E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392E58u;
label_392e58:
    // 0x392e58: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x392e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_392e5c:
    // 0x392e5c: 0xc088eb4  jal         func_223AD0
label_392e60:
    if (ctx->pc == 0x392E60u) {
        ctx->pc = 0x392E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E5Cu;
        // 0x392e60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E64u;
        goto label_392e64;
    }
    ctx->pc = 0x392E5Cu;
    SET_GPR_U32(ctx, 31, 0x392E64u);
    ctx->pc = 0x392E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392E5Cu;
    // 0x392e60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x392E5Cu, 0x392E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392E64u;
label_392e64:
    // 0x392e64: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_392e68:
    if (ctx->pc == 0x392E68u) {
        ctx->pc = 0x392E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E64u;
        // 0x392e68: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E6Cu;
        goto label_392e6c;
    }
    ctx->pc = 0x392E64u;
    {
        const bool branch_taken_0x392e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E64u;
        // 0x392e68: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e64) {
            ctx->pc = 0x392F0Cu;
            goto label_392f0c;
        }
    }
    ctx->pc = 0x392E6Cu;
label_392e6c:
    // 0x392e6c: 0xc089bfc  jal         func_226FF0
label_392e70:
    if (ctx->pc == 0x392E70u) {
        ctx->pc = 0x392E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E6Cu;
        // 0x392e70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E74u;
        goto label_392e74;
    }
    ctx->pc = 0x392E6Cu;
    SET_GPR_U32(ctx, 31, 0x392E74u);
    ctx->pc = 0x392E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392E6Cu;
    // 0x392e70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x392E6Cu, 0x392E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392E74u;
label_392e74:
    // 0x392e74: 0xc0e57ce  jal         func_395F38
label_392e78:
    if (ctx->pc == 0x392E78u) {
        ctx->pc = 0x392E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E74u;
        // 0x392e78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E7Cu;
        goto label_392e7c;
    }
    ctx->pc = 0x392E74u;
    SET_GPR_U32(ctx, 31, 0x392E7Cu);
    ctx->pc = 0x392E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392E74u;
    // 0x392e78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x392E74u, 0x392E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392E7Cu;
label_392e7c:
    // 0x392e7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x392e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392e80:
    // 0x392e80: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_392e84:
    if (ctx->pc == 0x392E84u) {
        ctx->pc = 0x392E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E80u;
        // 0x392e84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392E88u;
        goto label_392e88;
    }
    ctx->pc = 0x392E80u;
    {
        const bool branch_taken_0x392e80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x392E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E80u;
        // 0x392e84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e80) {
            ctx->pc = 0x392EE0u;
            goto label_392ee0;
        }
    }
    ctx->pc = 0x392E88u;
label_392e88:
    // 0x392e88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x392e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_392e8c:
    // 0x392e8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x392e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_392e90:
    // 0x392e90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x392e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392e94:
    // 0x392e94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x392e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392e98:
    // 0x392e98: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x392e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_392e9c:
    // 0x392e9c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x392e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_392ea0:
    // 0x392ea0: 0xc0882b2  jal         func_220AC8
label_392ea4:
    if (ctx->pc == 0x392EA4u) {
        ctx->pc = 0x392EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EA0u;
        // 0x392ea4: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392EA8u;
        goto label_392ea8;
    }
    ctx->pc = 0x392EA0u;
    SET_GPR_U32(ctx, 31, 0x392EA8u);
    ctx->pc = 0x392EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392EA0u;
    // 0x392ea4: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220AC8u, 0x392EA0u, 0x392EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392EA8u;
label_392ea8:
    // 0x392ea8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x392ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_392eac:
    // 0x392eac: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x392eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_392eb0:
    // 0x392eb0: 0xc0e44cc  jal         func_391330
label_392eb4:
    if (ctx->pc == 0x392EB4u) {
        ctx->pc = 0x392EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EB0u;
        // 0x392eb4: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392EB8u;
        goto label_392eb8;
    }
    ctx->pc = 0x392EB0u;
    SET_GPR_U32(ctx, 31, 0x392EB8u);
    ctx->pc = 0x392EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392EB0u;
    // 0x392eb4: 0x96050112  lhu         $a1, 0x112($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x392EB0u, 0x392EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392EB8u;
label_392eb8:
    // 0x392eb8: 0x90560064  lbu         $s6, 0x64($v0)
    ctx->pc = 0x392eb8u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_392ebc:
    // 0x392ebc: 0x12b6001b  beq         $s5, $s6, . + 4 + (0x1B << 2)
label_392ec0:
    if (ctx->pc == 0x392EC0u) {
        ctx->pc = 0x392EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EBCu;
        // 0x392ec0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392EC4u;
        goto label_392ec4;
    }
    ctx->pc = 0x392EBCu;
    {
        const bool branch_taken_0x392ebc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x392EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EBCu;
        // 0x392ec0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ebc) {
            ctx->pc = 0x392F2Cu;
            goto label_392f2c;
        }
    }
    ctx->pc = 0x392EC4u;
label_392ec4:
    // 0x392ec4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x392ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_392ec8:
    // 0x392ec8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x392ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_392ecc:
    // 0x392ecc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x392eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392ed0:
    // 0x392ed0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x392ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392ed4:
    // 0x392ed4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x392ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392ed8:
    // 0x392ed8: 0x10000007  b           . + 4 + (0x7 << 2)
label_392edc:
    if (ctx->pc == 0x392EDCu) {
        ctx->pc = 0x392EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392ED8u;
        // 0x392edc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392EE0u;
        goto label_392ee0;
    }
    ctx->pc = 0x392ED8u;
    {
        const bool branch_taken_0x392ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392ED8u;
        // 0x392edc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ed8) {
            ctx->pc = 0x392EF8u;
            goto label_392ef8;
        }
    }
    ctx->pc = 0x392EE0u;
label_392ee0:
    // 0x392ee0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x392ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_392ee4:
    // 0x392ee4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x392ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_392ee8:
    // 0x392ee8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x392ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_392eec:
    // 0x392eec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x392eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392ef0:
    // 0x392ef0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x392ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392ef4:
    // 0x392ef4: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x392ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_392ef8:
    // 0x392ef8: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x392ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_392efc:
    // 0x392efc: 0xc0882b2  jal         func_220AC8
label_392f00:
    if (ctx->pc == 0x392F00u) {
        ctx->pc = 0x392F04u;
        goto label_392f04;
    }
    ctx->pc = 0x392EFCu;
    SET_GPR_U32(ctx, 31, 0x392F04u);
    ctx->pc = 0x220AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220AC8u, 0x392EFCu, 0x392F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392F04u;
label_392f04:
    // 0x392f04: 0x10000009  b           . + 4 + (0x9 << 2)
label_392f08:
    if (ctx->pc == 0x392F08u) {
        ctx->pc = 0x392F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F04u;
        // 0x392f08: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F0Cu;
        goto label_392f0c;
    }
    ctx->pc = 0x392F04u;
    {
        const bool branch_taken_0x392f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F04u;
        // 0x392f08: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f04) {
            ctx->pc = 0x392F2Cu;
            goto label_392f2c;
        }
    }
    ctx->pc = 0x392F0Cu;
label_392f0c:
    // 0x392f0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x392f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_392f10:
    // 0x392f10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x392f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_392f14:
    // 0x392f14: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x392f14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_392f18:
    // 0x392f18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x392f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392f1c:
    // 0x392f1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x392f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392f20:
    // 0x392f20: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x392f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392f24:
    // 0x392f24: 0xc0882b2  jal         func_220AC8
label_392f28:
    if (ctx->pc == 0x392F28u) {
        ctx->pc = 0x392F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F24u;
        // 0x392f28: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F2Cu;
        goto label_392f2c;
    }
    ctx->pc = 0x392F24u;
    SET_GPR_U32(ctx, 31, 0x392F2Cu);
    ctx->pc = 0x392F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392F24u;
    // 0x392f28: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220AC8u, 0x392F24u, 0x392F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392F2Cu;
label_392f2c:
    // 0x392f2c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x392f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_392f30:
    // 0x392f30: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x392f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_392f34:
    // 0x392f34: 0xc043d5e  jal         func_10F578
label_392f38:
    if (ctx->pc == 0x392F38u) {
        ctx->pc = 0x392F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F34u;
        // 0x392f38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F3Cu;
        goto label_392f3c;
    }
    ctx->pc = 0x392F34u;
    SET_GPR_U32(ctx, 31, 0x392F3Cu);
    ctx->pc = 0x392F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392F34u;
    // 0x392f38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x392F34u, 0x392F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392F3Cu;
label_392f3c:
    // 0x392f3c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_392f40:
    if (ctx->pc == 0x392F40u) {
        ctx->pc = 0x392F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F3Cu;
        // 0x392f40: 0x9282010d  lbu         $v0, 0x10D($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F44u;
        goto label_392f44;
    }
    ctx->pc = 0x392F3Cu;
    {
        const bool branch_taken_0x392f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392f3c) {
            ctx->pc = 0x392F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392F3Cu;
            // 0x392f40: 0x9282010d  lbu         $v0, 0x10D($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392F5Cu;
            goto label_392f5c;
        }
    }
    ctx->pc = 0x392F44u;
label_392f44:
    // 0x392f44: 0xc043d5e  jal         func_10F578
label_392f48:
    if (ctx->pc == 0x392F48u) {
        ctx->pc = 0x392F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F44u;
        // 0x392f48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F4Cu;
        goto label_392f4c;
    }
    ctx->pc = 0x392F44u;
    SET_GPR_U32(ctx, 31, 0x392F4Cu);
    ctx->pc = 0x392F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392F44u;
    // 0x392f48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x392F44u, 0x392F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392F4Cu;
label_392f4c:
    // 0x392f4c: 0xc043c7a  jal         func_10F1E8
label_392f50:
    if (ctx->pc == 0x392F50u) {
        ctx->pc = 0x392F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F4Cu;
        // 0x392f50: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F54u;
        goto label_392f54;
    }
    ctx->pc = 0x392F4Cu;
    SET_GPR_U32(ctx, 31, 0x392F54u);
    ctx->pc = 0x392F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392F4Cu;
    // 0x392f50: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E8u, 0x392F4Cu, 0x392F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392F54u;
label_392f54:
    // 0x392f54: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x392f54u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_392f58:
    // 0x392f58: 0x9282010d  lbu         $v0, 0x10D($s4)
    ctx->pc = 0x392f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
label_392f5c:
    // 0x392f5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_392f60:
    if (ctx->pc == 0x392F60u) {
        ctx->pc = 0x392F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F5Cu;
        // 0x392f60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F64u;
        goto label_392f64;
    }
    ctx->pc = 0x392F5Cu;
    {
        const bool branch_taken_0x392f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F5Cu;
        // 0x392f60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f5c) {
            ctx->pc = 0x392F70u;
            goto label_392f70;
        }
    }
    ctx->pc = 0x392F64u;
label_392f64:
    // 0x392f64: 0x9282010e  lbu         $v0, 0x10E($s4)
    ctx->pc = 0x392f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 270)));
label_392f68:
    // 0x392f68: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_392f6c:
    if (ctx->pc == 0x392F6Cu) {
        ctx->pc = 0x392F70u;
        goto label_392f70;
    }
    ctx->pc = 0x392F68u;
    {
        const bool branch_taken_0x392f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392f68) {
            ctx->pc = 0x392F74u;
            goto label_392f74;
        }
    }
    ctx->pc = 0x392F70u;
label_392f70:
    // 0x392f70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x392f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392f74:
    // 0x392f74: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_392f78:
    if (ctx->pc == 0x392F78u) {
        ctx->pc = 0x392F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F74u;
        // 0x392f78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F7Cu;
        goto label_392f7c;
    }
    ctx->pc = 0x392F74u;
    {
        const bool branch_taken_0x392f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x392F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F74u;
        // 0x392f78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f74) {
            ctx->pc = 0x392F84u;
            goto label_392f84;
        }
    }
    ctx->pc = 0x392F7Cu;
label_392f7c:
    // 0x392f7c: 0xc104c06  jal         func_413018
label_392f80:
    if (ctx->pc == 0x392F80u) {
        ctx->pc = 0x392F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F7Cu;
        // 0x392f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F84u;
        goto label_392f84;
    }
    ctx->pc = 0x392F7Cu;
    SET_GPR_U32(ctx, 31, 0x392F84u);
    ctx->pc = 0x392F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392F7Cu;
    // 0x392f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413018u, 0x392F7Cu, 0x392F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392F84u;
label_392f84:
    // 0x392f84: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x392f84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_392f88:
    // 0x392f88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x392f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392f8c:
    // 0x392f8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x392f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392f90:
    // 0x392f90: 0xc0a4daa  jal         func_2936A8
label_392f94:
    if (ctx->pc == 0x392F94u) {
        ctx->pc = 0x392F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F90u;
        // 0x392f94: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392F98u;
        goto label_392f98;
    }
    ctx->pc = 0x392F90u;
    SET_GPR_U32(ctx, 31, 0x392F98u);
    ctx->pc = 0x392F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392F90u;
    // 0x392f94: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2936A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2936A8u, 0x392F90u, 0x392F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392F98u;
label_392f98:
    // 0x392f98: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x392f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_392f9c:
    // 0x392f9c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x392f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_392fa0:
    // 0x392fa0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x392fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_392fa4:
    // 0x392fa4: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_392fa8:
    if (ctx->pc == 0x392FA8u) {
        ctx->pc = 0x392FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FA4u;
        // 0x392fa8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FACu;
        goto label_392fac;
    }
    ctx->pc = 0x392FA4u;
    {
        const bool branch_taken_0x392fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FA4u;
        // 0x392fa8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392fa4) {
            ctx->pc = 0x393098u;
            goto label_393098;
        }
    }
    ctx->pc = 0x392FACu;
label_392fac:
    // 0x392fac: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x392facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_392fb0:
    // 0x392fb0: 0xc0e44cc  jal         func_391330
label_392fb4:
    if (ctx->pc == 0x392FB4u) {
        ctx->pc = 0x392FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FB0u;
        // 0x392fb4: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FB8u;
        goto label_392fb8;
    }
    ctx->pc = 0x392FB0u;
    SET_GPR_U32(ctx, 31, 0x392FB8u);
    ctx->pc = 0x392FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392FB0u;
    // 0x392fb4: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x392FB0u, 0x392FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392FB8u;
label_392fb8:
    // 0x392fb8: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x392fb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_392fbc:
    // 0x392fbc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x392fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_392fc0:
    // 0x392fc0: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
label_392fc4:
    if (ctx->pc == 0x392FC4u) {
        ctx->pc = 0x392FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FC0u;
        // 0x392fc4: 0x8e84011c  lw          $a0, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FC8u;
        goto label_392fc8;
    }
    ctx->pc = 0x392FC0u;
    {
        const bool branch_taken_0x392fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x392FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FC0u;
        // 0x392fc4: 0x8e84011c  lw          $a0, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392fc0) {
            ctx->pc = 0x39309Cu;
            goto label_39309c;
        }
    }
    ctx->pc = 0x392FC8u;
label_392fc8:
    // 0x392fc8: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
label_392fcc:
    if (ctx->pc == 0x392FCCu) {
        ctx->pc = 0x392FD0u;
        goto label_392fd0;
    }
    ctx->pc = 0x392FC8u;
    {
        const bool branch_taken_0x392fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x392fc8) {
            ctx->pc = 0x393138u;
            goto label_393138;
        }
    }
    ctx->pc = 0x392FD0u;
label_392fd0:
    // 0x392fd0: 0xc089b88  jal         func_226E20
label_392fd4:
    if (ctx->pc == 0x392FD4u) {
        ctx->pc = 0x392FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FD0u;
        // 0x392fd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FD8u;
        goto label_392fd8;
    }
    ctx->pc = 0x392FD0u;
    SET_GPR_U32(ctx, 31, 0x392FD8u);
    ctx->pc = 0x392FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392FD0u;
    // 0x392fd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E20u, 0x392FD0u, 0x392FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392FD8u;
label_392fd8:
    // 0x392fd8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x392fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_392fdc:
    // 0x392fdc: 0xc0e409a  jal         func_390268
label_392fe0:
    if (ctx->pc == 0x392FE0u) {
        ctx->pc = 0x392FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FDCu;
        // 0x392fe0: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FE4u;
        goto label_392fe4;
    }
    ctx->pc = 0x392FDCu;
    SET_GPR_U32(ctx, 31, 0x392FE4u);
    ctx->pc = 0x392FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392FDCu;
    // 0x392fe0: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x392FDCu, 0x392FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392FE4u;
label_392fe4:
    // 0x392fe4: 0x50530006  beql        $v0, $s3, . + 4 + (0x6 << 2)
label_392fe8:
    if (ctx->pc == 0x392FE8u) {
        ctx->pc = 0x392FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FE4u;
        // 0x392fe8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FECu;
        goto label_392fec;
    }
    ctx->pc = 0x392FE4u;
    {
        const bool branch_taken_0x392fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x392fe4) {
            ctx->pc = 0x392FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392FE4u;
            // 0x392fe8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393000u;
            goto label_393000;
        }
    }
    ctx->pc = 0x392FECu;
label_392fec:
    // 0x392fec: 0x8e84011c  lw          $a0, 0x11C($s4)
    ctx->pc = 0x392fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_392ff0:
    // 0x392ff0: 0xc088aa4  jal         func_222A90
label_392ff4:
    if (ctx->pc == 0x392FF4u) {
        ctx->pc = 0x392FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FF0u;
        // 0x392ff4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392FF8u;
        goto label_392ff8;
    }
    ctx->pc = 0x392FF0u;
    SET_GPR_U32(ctx, 31, 0x392FF8u);
    ctx->pc = 0x392FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392FF0u;
    // 0x392ff4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x392FF0u, 0x392FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392FF8u;
label_392ff8:
    // 0x392ff8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_392ffc:
    if (ctx->pc == 0x392FFCu) {
        ctx->pc = 0x392FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FF8u;
        // 0x392ffc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393000u;
        goto label_393000;
    }
    ctx->pc = 0x392FF8u;
    {
        const bool branch_taken_0x392ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392ff8) {
            ctx->pc = 0x392FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392FF8u;
            // 0x392ffc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393000u;
            goto label_393000;
        }
    }
    ctx->pc = 0x393000u;
label_393000:
    // 0x393000: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
label_393004:
    if (ctx->pc == 0x393004u) {
        ctx->pc = 0x393004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393000u;
        // 0x393004: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393008u;
        goto label_393008;
    }
    ctx->pc = 0x393000u;
    {
        const bool branch_taken_0x393000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x393004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393000u;
        // 0x393004: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393000) {
            ctx->pc = 0x393098u;
            goto label_393098;
        }
    }
    ctx->pc = 0x393008u;
label_393008:
    // 0x393008: 0x8e6300cc  lw          $v1, 0xCC($s3)
    ctx->pc = 0x393008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_39300c:
    // 0x39300c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_393010:
    if (ctx->pc == 0x393010u) {
        ctx->pc = 0x393010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39300Cu;
        // 0x393010: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393014u;
        goto label_393014;
    }
    ctx->pc = 0x39300Cu;
    {
        const bool branch_taken_0x39300c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x393010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39300Cu;
        // 0x393010: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39300c) {
            ctx->pc = 0x393044u;
            goto label_393044;
        }
    }
    ctx->pc = 0x393014u;
label_393014:
    // 0x393014: 0xc088b90  jal         func_222E40
label_393018:
    if (ctx->pc == 0x393018u) {
        ctx->pc = 0x393018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393014u;
        // 0x393018: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39301Cu;
        goto label_39301c;
    }
    ctx->pc = 0x393014u;
    SET_GPR_U32(ctx, 31, 0x39301Cu);
    ctx->pc = 0x393018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393014u;
    // 0x393018: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x393014u, 0x39301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39301Cu;
label_39301c:
    // 0x39301c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x39301cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_393020:
    // 0x393020: 0x0  nop
    ctx->pc = 0x393020u;
    // NOP
label_393024:
    // 0x393024: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x393024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_393028:
    // 0x393028: 0xc087502  jal         func_21D408
label_39302c:
    if (ctx->pc == 0x39302Cu) {
        ctx->pc = 0x39302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393028u;
        // 0x39302c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393030u;
        goto label_393030;
    }
    ctx->pc = 0x393028u;
    SET_GPR_U32(ctx, 31, 0x393030u);
    ctx->pc = 0x39302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393028u;
    // 0x39302c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x393028u, 0x393030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393030u;
label_393030:
    // 0x393030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x393030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393034:
    // 0x393034: 0xc0a332a  jal         func_28CCA8
label_393038:
    if (ctx->pc == 0x393038u) {
        ctx->pc = 0x393038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393034u;
        // 0x393038: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39303Cu;
        goto label_39303c;
    }
    ctx->pc = 0x393034u;
    SET_GPR_U32(ctx, 31, 0x39303Cu);
    ctx->pc = 0x393038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393034u;
    // 0x393038: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CCA8u, 0x393034u, 0x39303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39303Cu;
label_39303c:
    // 0x39303c: 0x10000013  b           . + 4 + (0x13 << 2)
label_393040:
    if (ctx->pc == 0x393040u) {
        ctx->pc = 0x393040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39303Cu;
        // 0x393040: 0x8e84011c  lw          $a0, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393044u;
        goto label_393044;
    }
    ctx->pc = 0x39303Cu;
    {
        const bool branch_taken_0x39303c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39303Cu;
        // 0x393040: 0x8e84011c  lw          $a0, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39303c) {
            ctx->pc = 0x39308Cu;
            goto label_39308c;
        }
    }
    ctx->pc = 0x393044u;
label_393044:
    // 0x393044: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x393044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_393048:
    // 0x393048: 0xc0e44cc  jal         func_391330
label_39304c:
    if (ctx->pc == 0x39304Cu) {
        ctx->pc = 0x39304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393048u;
        // 0x39304c: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393050u;
        goto label_393050;
    }
    ctx->pc = 0x393048u;
    SET_GPR_U32(ctx, 31, 0x393050u);
    ctx->pc = 0x39304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393048u;
    // 0x39304c: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x393048u, 0x393050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393050u;
label_393050:
    // 0x393050: 0x94420058  lhu         $v0, 0x58($v0)
    ctx->pc = 0x393050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_393054:
    // 0x393054: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_393058:
    if (ctx->pc == 0x393058u) {
        ctx->pc = 0x393058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393054u;
        // 0x393058: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39305Cu;
        goto label_39305c;
    }
    ctx->pc = 0x393054u;
    {
        const bool branch_taken_0x393054 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x393058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393054u;
        // 0x393058: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393054) {
            ctx->pc = 0x393070u;
            goto label_393070;
        }
    }
    ctx->pc = 0x39305Cu;
label_39305c:
    // 0x39305c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x39305cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_393060:
    // 0x393060: 0x0  nop
    ctx->pc = 0x393060u;
    // NOP
label_393064:
    // 0x393064: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x393064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_393068:
    // 0x393068: 0x10000008  b           . + 4 + (0x8 << 2)
label_39306c:
    if (ctx->pc == 0x39306Cu) {
        ctx->pc = 0x39306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393068u;
        // 0x39306c: 0x8e84011c  lw          $a0, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393070u;
        goto label_393070;
    }
    ctx->pc = 0x393068u;
    {
        const bool branch_taken_0x393068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393068u;
        // 0x39306c: 0x8e84011c  lw          $a0, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393068) {
            ctx->pc = 0x39308Cu;
            goto label_39308c;
        }
    }
    ctx->pc = 0x393070u;
label_393070:
    // 0x393070: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x393070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_393074:
    // 0x393074: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x393074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_393078:
    // 0x393078: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x393078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_39307c:
    // 0x39307c: 0x0  nop
    ctx->pc = 0x39307cu;
    // NOP
label_393080:
    // 0x393080: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x393080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_393084:
    // 0x393084: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x393084u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_393088:
    // 0x393088: 0x8e84011c  lw          $a0, 0x11C($s4)
    ctx->pc = 0x393088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_39308c:
    // 0x39308c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39308cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_393090:
    // 0x393090: 0xc0993e8  jal         func_264FA0
label_393094:
    if (ctx->pc == 0x393094u) {
        ctx->pc = 0x393094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393090u;
        // 0x393094: 0x240601eb  addiu       $a2, $zero, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 491));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393098u;
        goto label_393098;
    }
    ctx->pc = 0x393090u;
    SET_GPR_U32(ctx, 31, 0x393098u);
    ctx->pc = 0x393094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393090u;
    // 0x393094: 0x240601eb  addiu       $a2, $zero, 0x1EB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 491));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264FA0u, 0x393090u, 0x393098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393098u;
label_393098:
    // 0x393098: 0x8e84011c  lw          $a0, 0x11C($s4)
    ctx->pc = 0x393098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_39309c:
    // 0x39309c: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
label_3930a0:
    if (ctx->pc == 0x3930A0u) {
        ctx->pc = 0x3930A4u;
        goto label_3930a4;
    }
    ctx->pc = 0x39309Cu;
    {
        const bool branch_taken_0x39309c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39309c) {
            ctx->pc = 0x393138u;
            goto label_393138;
        }
    }
    ctx->pc = 0x3930A4u;
label_3930a4:
    // 0x3930a4: 0xc087502  jal         func_21D408
label_3930a8:
    if (ctx->pc == 0x3930A8u) {
        ctx->pc = 0x3930ACu;
        goto label_3930ac;
    }
    ctx->pc = 0x3930A4u;
    SET_GPR_U32(ctx, 31, 0x3930ACu);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3930A4u, 0x3930ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3930ACu;
label_3930ac:
    // 0x3930ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3930acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3930b0:
    // 0x3930b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3930b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3930b4:
    // 0x3930b4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_3930b8:
    if (ctx->pc == 0x3930B8u) {
        ctx->pc = 0x3930B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930B4u;
        // 0x3930b8: 0x8e83011c  lw          $v1, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3930BCu;
        goto label_3930bc;
    }
    ctx->pc = 0x3930B4u;
    {
        const bool branch_taken_0x3930b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3930b4) {
            ctx->pc = 0x3930B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3930B4u;
            // 0x3930b8: 0x8e83011c  lw          $v1, 0x11C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3930DCu;
            goto label_3930dc;
        }
    }
    ctx->pc = 0x3930BCu;
label_3930bc:
    // 0x3930bc: 0xc088f88  jal         func_223E20
label_3930c0:
    if (ctx->pc == 0x3930C0u) {
        ctx->pc = 0x3930C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930BCu;
        // 0x3930c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3930C4u;
        goto label_3930c4;
    }
    ctx->pc = 0x3930BCu;
    SET_GPR_U32(ctx, 31, 0x3930C4u);
    ctx->pc = 0x3930C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3930BCu;
    // 0x3930c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x3930BCu, 0x3930C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3930C4u;
label_3930c4:
    // 0x3930c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3930c8:
    if (ctx->pc == 0x3930C8u) {
        ctx->pc = 0x3930C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930C4u;
        // 0x3930c8: 0x8e83011c  lw          $v1, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3930CCu;
        goto label_3930cc;
    }
    ctx->pc = 0x3930C4u;
    {
        const bool branch_taken_0x3930c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3930C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930C4u;
        // 0x3930c8: 0x8e83011c  lw          $v1, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3930c4) {
            ctx->pc = 0x3930DCu;
            goto label_3930dc;
        }
    }
    ctx->pc = 0x3930CCu;
label_3930cc:
    // 0x3930cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3930ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3930d0:
    // 0x3930d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3930d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3930d4:
    // 0x3930d4: 0x0  nop
    ctx->pc = 0x3930d4u;
    // NOP
label_3930d8:
    // 0x3930d8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3930d8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3930dc:
    // 0x3930dc: 0x806201b0  lb          $v0, 0x1B0($v1)
    ctx->pc = 0x3930dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
label_3930e0:
    // 0x3930e0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3930e0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3930e4:
    // 0x3930e4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3930e8:
    if (ctx->pc == 0x3930E8u) {
        ctx->pc = 0x3930E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930E4u;
        // 0x3930e8: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3930ECu;
        goto label_3930ec;
    }
    ctx->pc = 0x3930E4u;
    {
        const bool branch_taken_0x3930e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3930E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930E4u;
        // 0x3930e8: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3930e4) {
            ctx->pc = 0x393138u;
            goto label_393138;
        }
    }
    ctx->pc = 0x3930ECu;
label_3930ec:
    // 0x3930ec: 0x8e6300cc  lw          $v1, 0xCC($s3)
    ctx->pc = 0x3930ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_3930f0:
    // 0x3930f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3930f4:
    if (ctx->pc == 0x3930F4u) {
        ctx->pc = 0x3930F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930F0u;
        // 0x3930f4: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3930F8u;
        goto label_3930f8;
    }
    ctx->pc = 0x3930F0u;
    {
        const bool branch_taken_0x3930f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3930F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930F0u;
        // 0x3930f4: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3930f0) {
            ctx->pc = 0x393100u;
            goto label_393100;
        }
    }
    ctx->pc = 0x3930F8u;
label_3930f8:
    // 0x3930f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3930fc:
    if (ctx->pc == 0x3930FCu) {
        ctx->pc = 0x3930FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930F8u;
        // 0x3930fc: 0x24020087  addiu       $v0, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393100u;
        goto label_393100;
    }
    ctx->pc = 0x3930F8u;
    {
        const bool branch_taken_0x3930f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3930FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930F8u;
        // 0x3930fc: 0x24020087  addiu       $v0, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3930f8) {
            ctx->pc = 0x393110u;
            goto label_393110;
        }
    }
    ctx->pc = 0x393100u;
label_393100:
    // 0x393100: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x393100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_393104:
    // 0x393104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x393104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_393108:
    // 0x393108: 0x10000007  b           . + 4 + (0x7 << 2)
label_39310c:
    if (ctx->pc == 0x39310Cu) {
        ctx->pc = 0x39310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393108u;
        // 0x39310c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x393110u;
        goto label_393110;
    }
    ctx->pc = 0x393108u;
    {
        const bool branch_taken_0x393108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393108u;
        // 0x39310c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393108) {
            ctx->pc = 0x393128u;
            goto label_393128;
        }
    }
    ctx->pc = 0x393110u;
label_393110:
    // 0x393110: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_393114:
    if (ctx->pc == 0x393114u) {
        ctx->pc = 0x393114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393110u;
        // 0x393114: 0x8e84011c  lw          $a0, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393118u;
        goto label_393118;
    }
    ctx->pc = 0x393110u;
    {
        const bool branch_taken_0x393110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x393110) {
            ctx->pc = 0x393114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393110u;
            // 0x393114: 0x8e84011c  lw          $a0, 0x11C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39312Cu;
            goto label_39312c;
        }
    }
    ctx->pc = 0x393118u;
label_393118:
    // 0x393118: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x393118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_39311c:
    // 0x39311c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39311cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_393120:
    // 0x393120: 0x0  nop
    ctx->pc = 0x393120u;
    // NOP
label_393124:
    // 0x393124: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x393124u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_393128:
    // 0x393128: 0x8e84011c  lw          $a0, 0x11C($s4)
    ctx->pc = 0x393128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_39312c:
    // 0x39312c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39312cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_393130:
    // 0x393130: 0xc0993e8  jal         func_264FA0
label_393134:
    if (ctx->pc == 0x393134u) {
        ctx->pc = 0x393134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393130u;
        // 0x393134: 0x240601d3  addiu       $a2, $zero, 0x1D3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393138u;
        goto label_393138;
    }
    ctx->pc = 0x393130u;
    SET_GPR_U32(ctx, 31, 0x393138u);
    ctx->pc = 0x393134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393130u;
    // 0x393134: 0x240601d3  addiu       $a2, $zero, 0x1D3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264FA0u, 0x393130u, 0x393138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393138u;
label_393138:
    // 0x393138: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x393138u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_39313c:
    // 0x39313c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x39313cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_393140:
    // 0x393140: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x393140u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_393144:
    // 0x393144: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x393144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_393148:
    // 0x393148: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x393148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39314c:
    // 0x39314c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x39314cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393150:
    // 0x393150: 0xc0875a0  jal         func_21D680
label_393154:
    if (ctx->pc == 0x393154u) {
        ctx->pc = 0x393154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393150u;
        // 0x393154: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393158u;
        goto label_393158;
    }
    ctx->pc = 0x393150u;
    SET_GPR_U32(ctx, 31, 0x393158u);
    ctx->pc = 0x393154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393150u;
    // 0x393154: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x393150u, 0x393158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393158u;
label_393158:
    // 0x393158: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x393158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_39315c:
    // 0x39315c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39315cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393160:
    // 0x393160: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x393160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_393164:
    // 0x393164: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x393164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_393168:
    // 0x393168: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x393168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39316c:
    // 0x39316c: 0xc08764a  jal         func_21D928
label_393170:
    if (ctx->pc == 0x393170u) {
        ctx->pc = 0x393170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39316Cu;
        // 0x393170: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393174u;
        goto label_393174;
    }
    ctx->pc = 0x39316Cu;
    SET_GPR_U32(ctx, 31, 0x393174u);
    ctx->pc = 0x393170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39316Cu;
    // 0x393170: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D928u, 0x39316Cu, 0x393174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393174u;
label_393174:
    // 0x393174: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
label_393178:
    if (ctx->pc == 0x393178u) {
        ctx->pc = 0x393178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393174u;
        // 0x393178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39317Cu;
        goto label_39317c;
    }
    ctx->pc = 0x393174u;
    {
        const bool branch_taken_0x393174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x393178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393174u;
        // 0x393178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393174) {
            ctx->pc = 0x393290u;
            goto label_393290;
        }
    }
    ctx->pc = 0x39317Cu;
label_39317c:
    // 0x39317c: 0x9282010d  lbu         $v0, 0x10D($s4)
    ctx->pc = 0x39317cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
label_393180:
    // 0x393180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_393184:
    if (ctx->pc == 0x393184u) {
        ctx->pc = 0x393184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393180u;
        // 0x393184: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393188u;
        goto label_393188;
    }
    ctx->pc = 0x393180u;
    {
        const bool branch_taken_0x393180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393180u;
        // 0x393184: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393180) {
            ctx->pc = 0x393194u;
            goto label_393194;
        }
    }
    ctx->pc = 0x393188u;
label_393188:
    // 0x393188: 0x9282010e  lbu         $v0, 0x10E($s4)
    ctx->pc = 0x393188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 270)));
label_39318c:
    // 0x39318c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_393190:
    if (ctx->pc == 0x393190u) {
        ctx->pc = 0x393194u;
        goto label_393194;
    }
    ctx->pc = 0x39318Cu;
    {
        const bool branch_taken_0x39318c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39318c) {
            ctx->pc = 0x393198u;
            goto label_393198;
        }
    }
    ctx->pc = 0x393194u;
label_393194:
    // 0x393194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x393194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393198:
    // 0x393198: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
label_39319c:
    if (ctx->pc == 0x39319Cu) {
        ctx->pc = 0x39319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393198u;
        // 0x39319c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3931A0u;
        goto label_3931a0;
    }
    ctx->pc = 0x393198u;
    {
        const bool branch_taken_0x393198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393198u;
        // 0x39319c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393198) {
            ctx->pc = 0x393290u;
            goto label_393290;
        }
    }
    ctx->pc = 0x3931A0u;
label_3931a0:
    // 0x3931a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3931a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3931a4:
    // 0x3931a4: 0xc0931ec  jal         func_24C7B0
label_3931a8:
    if (ctx->pc == 0x3931A8u) {
        ctx->pc = 0x3931A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931A4u;
        // 0x3931a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3931ACu;
        goto label_3931ac;
    }
    ctx->pc = 0x3931A4u;
    SET_GPR_U32(ctx, 31, 0x3931ACu);
    ctx->pc = 0x3931A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3931A4u;
    // 0x3931a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C7B0u, 0x3931A4u, 0x3931ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3931ACu;
label_3931ac:
    // 0x3931ac: 0x10000038  b           . + 4 + (0x38 << 2)
label_3931b0:
    if (ctx->pc == 0x3931B0u) {
        ctx->pc = 0x3931B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931ACu;
        // 0x3931b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3931B4u;
        goto label_3931b4;
    }
    ctx->pc = 0x3931ACu;
    {
        const bool branch_taken_0x3931ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3931B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931ACu;
        // 0x3931b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3931ac) {
            ctx->pc = 0x393290u;
            goto label_393290;
        }
    }
    ctx->pc = 0x3931B4u;
label_3931b4:
    // 0x3931b4: 0x9282010d  lbu         $v0, 0x10D($s4)
    ctx->pc = 0x3931b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
label_3931b8:
    // 0x3931b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3931bc:
    if (ctx->pc == 0x3931BCu) {
        ctx->pc = 0x3931BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931B8u;
        // 0x3931bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3931C0u;
        goto label_3931c0;
    }
    ctx->pc = 0x3931B8u;
    {
        const bool branch_taken_0x3931b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3931BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931B8u;
        // 0x3931bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3931b8) {
            ctx->pc = 0x3931CCu;
            goto label_3931cc;
        }
    }
    ctx->pc = 0x3931C0u;
label_3931c0:
    // 0x3931c0: 0x9282010e  lbu         $v0, 0x10E($s4)
    ctx->pc = 0x3931c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 270)));
label_3931c4:
    // 0x3931c4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3931c8:
    if (ctx->pc == 0x3931C8u) {
        ctx->pc = 0x3931CCu;
        goto label_3931cc;
    }
    ctx->pc = 0x3931C4u;
    {
        const bool branch_taken_0x3931c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3931c4) {
            ctx->pc = 0x3931D0u;
            goto label_3931d0;
        }
    }
    ctx->pc = 0x3931CCu;
label_3931cc:
    // 0x3931cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3931ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3931d0:
    // 0x3931d0: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_3931d4:
    if (ctx->pc == 0x3931D4u) {
        ctx->pc = 0x3931D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931D0u;
        // 0x3931d4: 0x8fc42c04  lw          $a0, 0x2C04($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3931D8u;
        goto label_3931d8;
    }
    ctx->pc = 0x3931D0u;
    {
        const bool branch_taken_0x3931d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3931D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931D0u;
        // 0x3931d4: 0x8fc42c04  lw          $a0, 0x2C04($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3931d0) {
            ctx->pc = 0x393254u;
            goto label_393254;
        }
    }
    ctx->pc = 0x3931D8u;
label_3931d8:
    // 0x3931d8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x3931d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_3931dc:
    // 0x3931dc: 0x96850112  lhu         $a1, 0x112($s4)
    ctx->pc = 0x3931dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
label_3931e0:
    // 0x3931e0: 0xc0e44cc  jal         func_391330
label_3931e4:
    if (ctx->pc == 0x3931E4u) {
        ctx->pc = 0x3931E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931E0u;
        // 0x3931e4: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3931E8u;
        goto label_3931e8;
    }
    ctx->pc = 0x3931E0u;
    SET_GPR_U32(ctx, 31, 0x3931E8u);
    ctx->pc = 0x3931E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3931E0u;
    // 0x3931e4: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3931E0u, 0x3931E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3931E8u;
label_3931e8:
    // 0x3931e8: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x3931e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_3931ec:
    // 0x3931ec: 0x96850112  lhu         $a1, 0x112($s4)
    ctx->pc = 0x3931ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
label_3931f0:
    // 0x3931f0: 0xc0e44cc  jal         func_391330
label_3931f4:
    if (ctx->pc == 0x3931F4u) {
        ctx->pc = 0x3931F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931F0u;
        // 0x3931f4: 0x90500064  lbu         $s0, 0x64($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3931F8u;
        goto label_3931f8;
    }
    ctx->pc = 0x3931F0u;
    SET_GPR_U32(ctx, 31, 0x3931F8u);
    ctx->pc = 0x3931F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3931F0u;
    // 0x3931f4: 0x90500064  lbu         $s0, 0x64($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3931F0u, 0x3931F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3931F8u;
label_3931f8:
    // 0x3931f8: 0x90460064  lbu         $a2, 0x64($v0)
    ctx->pc = 0x3931f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_3931fc:
    // 0x3931fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3931fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393200:
    // 0x393200: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x393200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_393204:
    // 0x393204: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x393204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_393208:
    // 0x393208: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x393208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_39320c:
    // 0x39320c: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x39320cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_393210:
    // 0x393210: 0xc04420c  jal         func_110830
label_393214:
    if (ctx->pc == 0x393214u) {
        ctx->pc = 0x393214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393210u;
        // 0x393214: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393218u;
        goto label_393218;
    }
    ctx->pc = 0x393210u;
    SET_GPR_U32(ctx, 31, 0x393218u);
    ctx->pc = 0x393214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393210u;
    // 0x393214: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x393210u, 0x393218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393218u;
label_393218:
    // 0x393218: 0xc088eb4  jal         func_223AD0
label_39321c:
    if (ctx->pc == 0x39321Cu) {
        ctx->pc = 0x39321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393218u;
        // 0x39321c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393220u;
        goto label_393220;
    }
    ctx->pc = 0x393218u;
    SET_GPR_U32(ctx, 31, 0x393220u);
    ctx->pc = 0x39321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393218u;
    // 0x39321c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x393218u, 0x393220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393220u;
label_393220:
    // 0x393220: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x393220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_393224:
    // 0x393224: 0xc0e44cc  jal         func_391330
label_393228:
    if (ctx->pc == 0x393228u) {
        ctx->pc = 0x393228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393224u;
        // 0x393228: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39322Cu;
        goto label_39322c;
    }
    ctx->pc = 0x393224u;
    SET_GPR_U32(ctx, 31, 0x39322Cu);
    ctx->pc = 0x393228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393224u;
    // 0x393228: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x393224u, 0x39322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39322Cu;
label_39322c:
    // 0x39322c: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x39322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_393230:
    // 0x393230: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x393230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393234:
    // 0x393234: 0x90450064  lbu         $a1, 0x64($v0)
    ctx->pc = 0x393234u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_393238:
    // 0x393238: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x393238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_39323c:
    // 0x39323c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x39323cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_393240:
    // 0x393240: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x393240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_393244:
    // 0x393244: 0xc04420c  jal         func_110830
label_393248:
    if (ctx->pc == 0x393248u) {
        ctx->pc = 0x393248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393244u;
        // 0x393248: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39324Cu;
        goto label_39324c;
    }
    ctx->pc = 0x393244u;
    SET_GPR_U32(ctx, 31, 0x39324Cu);
    ctx->pc = 0x393248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393244u;
    // 0x393248: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x393244u, 0x39324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39324Cu;
label_39324c:
    // 0x39324c: 0x10000010  b           . + 4 + (0x10 << 2)
label_393250:
    if (ctx->pc == 0x393250u) {
        ctx->pc = 0x393250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39324Cu;
        // 0x393250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393254u;
        goto label_393254;
    }
    ctx->pc = 0x39324Cu;
    {
        const bool branch_taken_0x39324c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39324Cu;
        // 0x393250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39324c) {
            ctx->pc = 0x393290u;
            goto label_393290;
        }
    }
    ctx->pc = 0x393254u;
label_393254:
    // 0x393254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x393254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_393258:
    // 0x393258: 0xc088eb4  jal         func_223AD0
label_39325c:
    if (ctx->pc == 0x39325Cu) {
        ctx->pc = 0x39325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393258u;
        // 0x39325c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393260u;
        goto label_393260;
    }
    ctx->pc = 0x393258u;
    SET_GPR_U32(ctx, 31, 0x393260u);
    ctx->pc = 0x39325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393258u;
    // 0x39325c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x393258u, 0x393260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393260u;
label_393260:
    // 0x393260: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x393260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_393264:
    // 0x393264: 0xc0e44cc  jal         func_391330
label_393268:
    if (ctx->pc == 0x393268u) {
        ctx->pc = 0x393268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393264u;
        // 0x393268: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39326Cu;
        goto label_39326c;
    }
    ctx->pc = 0x393264u;
    SET_GPR_U32(ctx, 31, 0x39326Cu);
    ctx->pc = 0x393268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393264u;
    // 0x393268: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x393264u, 0x39326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39326Cu;
label_39326c:
    // 0x39326c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x39326cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_393270:
    // 0x393270: 0x26270090  addiu       $a3, $s1, 0x90
    ctx->pc = 0x393270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_393274:
    // 0x393274: 0x90450064  lbu         $a1, 0x64($v0)
    ctx->pc = 0x393274u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_393278:
    // 0x393278: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x393278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_39327c:
    // 0x39327c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x39327cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_393280:
    // 0x393280: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x393280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_393284:
    // 0x393284: 0xc04420c  jal         func_110830
label_393288:
    if (ctx->pc == 0x393288u) {
        ctx->pc = 0x393288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393284u;
        // 0x393288: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39328Cu;
        goto label_39328c;
    }
    ctx->pc = 0x393284u;
    SET_GPR_U32(ctx, 31, 0x39328Cu);
    ctx->pc = 0x393288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393284u;
    // 0x393288: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x393284u, 0x39328Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39328Cu;
label_39328c:
    // 0x39328c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39328cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393290:
    // 0x393290: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x393290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_393294:
    // 0x393294: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x393294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_393298:
    // 0x393298: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x393298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39329c:
    // 0x39329c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x39329cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3932a0:
    // 0x3932a0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3932a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3932a4:
    // 0x3932a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3932a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3932a8:
    // 0x3932a8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3932a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3932ac:
    // 0x3932ac: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3932acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3932b0:
    // 0x3932b0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3932b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3932b4:
    // 0x3932b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3932b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3932b8:
    // 0x3932b8: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x3932b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3932bc:
    // 0x3932bc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3932bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3932c0:
    // 0x3932c0: 0x3e00008  jr          $ra
label_3932c4:
    if (ctx->pc == 0x3932C4u) {
        ctx->pc = 0x3932C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932C0u;
        // 0x3932c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3932C8u;
        goto label_fallthrough_0x3932c0;
    }
    ctx->pc = 0x3932C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3932C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932C0u;
        // 0x3932c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3932C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3932c0:
    ctx->pc = 0x3932C8u;
}
