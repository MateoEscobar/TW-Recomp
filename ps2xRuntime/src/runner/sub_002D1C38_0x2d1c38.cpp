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

// Function: sub_002D1C38
// Address: 0x2d1c38 - 0x2d2318
void sub_002D1C38_0x2d1c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1C38_0x2d1c38");
#endif

    switch (ctx->pc) {
        case 0x2d1c38u: goto label_2d1c38;
        case 0x2d1c3cu: goto label_2d1c3c;
        case 0x2d1c40u: goto label_2d1c40;
        case 0x2d1c44u: goto label_2d1c44;
        case 0x2d1c48u: goto label_2d1c48;
        case 0x2d1c4cu: goto label_2d1c4c;
        case 0x2d1c50u: goto label_2d1c50;
        case 0x2d1c54u: goto label_2d1c54;
        case 0x2d1c58u: goto label_2d1c58;
        case 0x2d1c5cu: goto label_2d1c5c;
        case 0x2d1c60u: goto label_2d1c60;
        case 0x2d1c64u: goto label_2d1c64;
        case 0x2d1c68u: goto label_2d1c68;
        case 0x2d1c6cu: goto label_2d1c6c;
        case 0x2d1c70u: goto label_2d1c70;
        case 0x2d1c74u: goto label_2d1c74;
        case 0x2d1c78u: goto label_2d1c78;
        case 0x2d1c7cu: goto label_2d1c7c;
        case 0x2d1c80u: goto label_2d1c80;
        case 0x2d1c84u: goto label_2d1c84;
        case 0x2d1c88u: goto label_2d1c88;
        case 0x2d1c8cu: goto label_2d1c8c;
        case 0x2d1c90u: goto label_2d1c90;
        case 0x2d1c94u: goto label_2d1c94;
        case 0x2d1c98u: goto label_2d1c98;
        case 0x2d1c9cu: goto label_2d1c9c;
        case 0x2d1ca0u: goto label_2d1ca0;
        case 0x2d1ca4u: goto label_2d1ca4;
        case 0x2d1ca8u: goto label_2d1ca8;
        case 0x2d1cacu: goto label_2d1cac;
        case 0x2d1cb0u: goto label_2d1cb0;
        case 0x2d1cb4u: goto label_2d1cb4;
        case 0x2d1cb8u: goto label_2d1cb8;
        case 0x2d1cbcu: goto label_2d1cbc;
        case 0x2d1cc0u: goto label_2d1cc0;
        case 0x2d1cc4u: goto label_2d1cc4;
        case 0x2d1cc8u: goto label_2d1cc8;
        case 0x2d1cccu: goto label_2d1ccc;
        case 0x2d1cd0u: goto label_2d1cd0;
        case 0x2d1cd4u: goto label_2d1cd4;
        case 0x2d1cd8u: goto label_2d1cd8;
        case 0x2d1cdcu: goto label_2d1cdc;
        case 0x2d1ce0u: goto label_2d1ce0;
        case 0x2d1ce4u: goto label_2d1ce4;
        case 0x2d1ce8u: goto label_2d1ce8;
        case 0x2d1cecu: goto label_2d1cec;
        case 0x2d1cf0u: goto label_2d1cf0;
        case 0x2d1cf4u: goto label_2d1cf4;
        case 0x2d1cf8u: goto label_2d1cf8;
        case 0x2d1cfcu: goto label_2d1cfc;
        case 0x2d1d00u: goto label_2d1d00;
        case 0x2d1d04u: goto label_2d1d04;
        case 0x2d1d08u: goto label_2d1d08;
        case 0x2d1d0cu: goto label_2d1d0c;
        case 0x2d1d10u: goto label_2d1d10;
        case 0x2d1d14u: goto label_2d1d14;
        case 0x2d1d18u: goto label_2d1d18;
        case 0x2d1d1cu: goto label_2d1d1c;
        case 0x2d1d20u: goto label_2d1d20;
        case 0x2d1d24u: goto label_2d1d24;
        case 0x2d1d28u: goto label_2d1d28;
        case 0x2d1d2cu: goto label_2d1d2c;
        case 0x2d1d30u: goto label_2d1d30;
        case 0x2d1d34u: goto label_2d1d34;
        case 0x2d1d38u: goto label_2d1d38;
        case 0x2d1d3cu: goto label_2d1d3c;
        case 0x2d1d40u: goto label_2d1d40;
        case 0x2d1d44u: goto label_2d1d44;
        case 0x2d1d48u: goto label_2d1d48;
        case 0x2d1d4cu: goto label_2d1d4c;
        case 0x2d1d50u: goto label_2d1d50;
        case 0x2d1d54u: goto label_2d1d54;
        case 0x2d1d58u: goto label_2d1d58;
        case 0x2d1d5cu: goto label_2d1d5c;
        case 0x2d1d60u: goto label_2d1d60;
        case 0x2d1d64u: goto label_2d1d64;
        case 0x2d1d68u: goto label_2d1d68;
        case 0x2d1d6cu: goto label_2d1d6c;
        case 0x2d1d70u: goto label_2d1d70;
        case 0x2d1d74u: goto label_2d1d74;
        case 0x2d1d78u: goto label_2d1d78;
        case 0x2d1d7cu: goto label_2d1d7c;
        case 0x2d1d80u: goto label_2d1d80;
        case 0x2d1d84u: goto label_2d1d84;
        case 0x2d1d88u: goto label_2d1d88;
        case 0x2d1d8cu: goto label_2d1d8c;
        case 0x2d1d90u: goto label_2d1d90;
        case 0x2d1d94u: goto label_2d1d94;
        case 0x2d1d98u: goto label_2d1d98;
        case 0x2d1d9cu: goto label_2d1d9c;
        case 0x2d1da0u: goto label_2d1da0;
        case 0x2d1da4u: goto label_2d1da4;
        case 0x2d1da8u: goto label_2d1da8;
        case 0x2d1dacu: goto label_2d1dac;
        case 0x2d1db0u: goto label_2d1db0;
        case 0x2d1db4u: goto label_2d1db4;
        case 0x2d1db8u: goto label_2d1db8;
        case 0x2d1dbcu: goto label_2d1dbc;
        case 0x2d1dc0u: goto label_2d1dc0;
        case 0x2d1dc4u: goto label_2d1dc4;
        case 0x2d1dc8u: goto label_2d1dc8;
        case 0x2d1dccu: goto label_2d1dcc;
        case 0x2d1dd0u: goto label_2d1dd0;
        case 0x2d1dd4u: goto label_2d1dd4;
        case 0x2d1dd8u: goto label_2d1dd8;
        case 0x2d1ddcu: goto label_2d1ddc;
        case 0x2d1de0u: goto label_2d1de0;
        case 0x2d1de4u: goto label_2d1de4;
        case 0x2d1de8u: goto label_2d1de8;
        case 0x2d1decu: goto label_2d1dec;
        case 0x2d1df0u: goto label_2d1df0;
        case 0x2d1df4u: goto label_2d1df4;
        case 0x2d1df8u: goto label_2d1df8;
        case 0x2d1dfcu: goto label_2d1dfc;
        case 0x2d1e00u: goto label_2d1e00;
        case 0x2d1e04u: goto label_2d1e04;
        case 0x2d1e08u: goto label_2d1e08;
        case 0x2d1e0cu: goto label_2d1e0c;
        case 0x2d1e10u: goto label_2d1e10;
        case 0x2d1e14u: goto label_2d1e14;
        case 0x2d1e18u: goto label_2d1e18;
        case 0x2d1e1cu: goto label_2d1e1c;
        case 0x2d1e20u: goto label_2d1e20;
        case 0x2d1e24u: goto label_2d1e24;
        case 0x2d1e28u: goto label_2d1e28;
        case 0x2d1e2cu: goto label_2d1e2c;
        case 0x2d1e30u: goto label_2d1e30;
        case 0x2d1e34u: goto label_2d1e34;
        case 0x2d1e38u: goto label_2d1e38;
        case 0x2d1e3cu: goto label_2d1e3c;
        case 0x2d1e40u: goto label_2d1e40;
        case 0x2d1e44u: goto label_2d1e44;
        case 0x2d1e48u: goto label_2d1e48;
        case 0x2d1e4cu: goto label_2d1e4c;
        case 0x2d1e50u: goto label_2d1e50;
        case 0x2d1e54u: goto label_2d1e54;
        case 0x2d1e58u: goto label_2d1e58;
        case 0x2d1e5cu: goto label_2d1e5c;
        case 0x2d1e60u: goto label_2d1e60;
        case 0x2d1e64u: goto label_2d1e64;
        case 0x2d1e68u: goto label_2d1e68;
        case 0x2d1e6cu: goto label_2d1e6c;
        case 0x2d1e70u: goto label_2d1e70;
        case 0x2d1e74u: goto label_2d1e74;
        case 0x2d1e78u: goto label_2d1e78;
        case 0x2d1e7cu: goto label_2d1e7c;
        case 0x2d1e80u: goto label_2d1e80;
        case 0x2d1e84u: goto label_2d1e84;
        case 0x2d1e88u: goto label_2d1e88;
        case 0x2d1e8cu: goto label_2d1e8c;
        case 0x2d1e90u: goto label_2d1e90;
        case 0x2d1e94u: goto label_2d1e94;
        case 0x2d1e98u: goto label_2d1e98;
        case 0x2d1e9cu: goto label_2d1e9c;
        case 0x2d1ea0u: goto label_2d1ea0;
        case 0x2d1ea4u: goto label_2d1ea4;
        case 0x2d1ea8u: goto label_2d1ea8;
        case 0x2d1eacu: goto label_2d1eac;
        case 0x2d1eb0u: goto label_2d1eb0;
        case 0x2d1eb4u: goto label_2d1eb4;
        case 0x2d1eb8u: goto label_2d1eb8;
        case 0x2d1ebcu: goto label_2d1ebc;
        case 0x2d1ec0u: goto label_2d1ec0;
        case 0x2d1ec4u: goto label_2d1ec4;
        case 0x2d1ec8u: goto label_2d1ec8;
        case 0x2d1eccu: goto label_2d1ecc;
        case 0x2d1ed0u: goto label_2d1ed0;
        case 0x2d1ed4u: goto label_2d1ed4;
        case 0x2d1ed8u: goto label_2d1ed8;
        case 0x2d1edcu: goto label_2d1edc;
        case 0x2d1ee0u: goto label_2d1ee0;
        case 0x2d1ee4u: goto label_2d1ee4;
        case 0x2d1ee8u: goto label_2d1ee8;
        case 0x2d1eecu: goto label_2d1eec;
        case 0x2d1ef0u: goto label_2d1ef0;
        case 0x2d1ef4u: goto label_2d1ef4;
        case 0x2d1ef8u: goto label_2d1ef8;
        case 0x2d1efcu: goto label_2d1efc;
        case 0x2d1f00u: goto label_2d1f00;
        case 0x2d1f04u: goto label_2d1f04;
        case 0x2d1f08u: goto label_2d1f08;
        case 0x2d1f0cu: goto label_2d1f0c;
        case 0x2d1f10u: goto label_2d1f10;
        case 0x2d1f14u: goto label_2d1f14;
        case 0x2d1f18u: goto label_2d1f18;
        case 0x2d1f1cu: goto label_2d1f1c;
        case 0x2d1f20u: goto label_2d1f20;
        case 0x2d1f24u: goto label_2d1f24;
        case 0x2d1f28u: goto label_2d1f28;
        case 0x2d1f2cu: goto label_2d1f2c;
        case 0x2d1f30u: goto label_2d1f30;
        case 0x2d1f34u: goto label_2d1f34;
        case 0x2d1f38u: goto label_2d1f38;
        case 0x2d1f3cu: goto label_2d1f3c;
        case 0x2d1f40u: goto label_2d1f40;
        case 0x2d1f44u: goto label_2d1f44;
        case 0x2d1f48u: goto label_2d1f48;
        case 0x2d1f4cu: goto label_2d1f4c;
        case 0x2d1f50u: goto label_2d1f50;
        case 0x2d1f54u: goto label_2d1f54;
        case 0x2d1f58u: goto label_2d1f58;
        case 0x2d1f5cu: goto label_2d1f5c;
        case 0x2d1f60u: goto label_2d1f60;
        case 0x2d1f64u: goto label_2d1f64;
        case 0x2d1f68u: goto label_2d1f68;
        case 0x2d1f6cu: goto label_2d1f6c;
        case 0x2d1f70u: goto label_2d1f70;
        case 0x2d1f74u: goto label_2d1f74;
        case 0x2d1f78u: goto label_2d1f78;
        case 0x2d1f7cu: goto label_2d1f7c;
        case 0x2d1f80u: goto label_2d1f80;
        case 0x2d1f84u: goto label_2d1f84;
        case 0x2d1f88u: goto label_2d1f88;
        case 0x2d1f8cu: goto label_2d1f8c;
        case 0x2d1f90u: goto label_2d1f90;
        case 0x2d1f94u: goto label_2d1f94;
        case 0x2d1f98u: goto label_2d1f98;
        case 0x2d1f9cu: goto label_2d1f9c;
        case 0x2d1fa0u: goto label_2d1fa0;
        case 0x2d1fa4u: goto label_2d1fa4;
        case 0x2d1fa8u: goto label_2d1fa8;
        case 0x2d1facu: goto label_2d1fac;
        case 0x2d1fb0u: goto label_2d1fb0;
        case 0x2d1fb4u: goto label_2d1fb4;
        case 0x2d1fb8u: goto label_2d1fb8;
        case 0x2d1fbcu: goto label_2d1fbc;
        case 0x2d1fc0u: goto label_2d1fc0;
        case 0x2d1fc4u: goto label_2d1fc4;
        case 0x2d1fc8u: goto label_2d1fc8;
        case 0x2d1fccu: goto label_2d1fcc;
        case 0x2d1fd0u: goto label_2d1fd0;
        case 0x2d1fd4u: goto label_2d1fd4;
        case 0x2d1fd8u: goto label_2d1fd8;
        case 0x2d1fdcu: goto label_2d1fdc;
        case 0x2d1fe0u: goto label_2d1fe0;
        case 0x2d1fe4u: goto label_2d1fe4;
        case 0x2d1fe8u: goto label_2d1fe8;
        case 0x2d1fecu: goto label_2d1fec;
        case 0x2d1ff0u: goto label_2d1ff0;
        case 0x2d1ff4u: goto label_2d1ff4;
        case 0x2d1ff8u: goto label_2d1ff8;
        case 0x2d1ffcu: goto label_2d1ffc;
        case 0x2d2000u: goto label_2d2000;
        case 0x2d2004u: goto label_2d2004;
        case 0x2d2008u: goto label_2d2008;
        case 0x2d200cu: goto label_2d200c;
        case 0x2d2010u: goto label_2d2010;
        case 0x2d2014u: goto label_2d2014;
        case 0x2d2018u: goto label_2d2018;
        case 0x2d201cu: goto label_2d201c;
        case 0x2d2020u: goto label_2d2020;
        case 0x2d2024u: goto label_2d2024;
        case 0x2d2028u: goto label_2d2028;
        case 0x2d202cu: goto label_2d202c;
        case 0x2d2030u: goto label_2d2030;
        case 0x2d2034u: goto label_2d2034;
        case 0x2d2038u: goto label_2d2038;
        case 0x2d203cu: goto label_2d203c;
        case 0x2d2040u: goto label_2d2040;
        case 0x2d2044u: goto label_2d2044;
        case 0x2d2048u: goto label_2d2048;
        case 0x2d204cu: goto label_2d204c;
        case 0x2d2050u: goto label_2d2050;
        case 0x2d2054u: goto label_2d2054;
        case 0x2d2058u: goto label_2d2058;
        case 0x2d205cu: goto label_2d205c;
        case 0x2d2060u: goto label_2d2060;
        case 0x2d2064u: goto label_2d2064;
        case 0x2d2068u: goto label_2d2068;
        case 0x2d206cu: goto label_2d206c;
        case 0x2d2070u: goto label_2d2070;
        case 0x2d2074u: goto label_2d2074;
        case 0x2d2078u: goto label_2d2078;
        case 0x2d207cu: goto label_2d207c;
        case 0x2d2080u: goto label_2d2080;
        case 0x2d2084u: goto label_2d2084;
        case 0x2d2088u: goto label_2d2088;
        case 0x2d208cu: goto label_2d208c;
        case 0x2d2090u: goto label_2d2090;
        case 0x2d2094u: goto label_2d2094;
        case 0x2d2098u: goto label_2d2098;
        case 0x2d209cu: goto label_2d209c;
        case 0x2d20a0u: goto label_2d20a0;
        case 0x2d20a4u: goto label_2d20a4;
        case 0x2d20a8u: goto label_2d20a8;
        case 0x2d20acu: goto label_2d20ac;
        case 0x2d20b0u: goto label_2d20b0;
        case 0x2d20b4u: goto label_2d20b4;
        case 0x2d20b8u: goto label_2d20b8;
        case 0x2d20bcu: goto label_2d20bc;
        case 0x2d20c0u: goto label_2d20c0;
        case 0x2d20c4u: goto label_2d20c4;
        case 0x2d20c8u: goto label_2d20c8;
        case 0x2d20ccu: goto label_2d20cc;
        case 0x2d20d0u: goto label_2d20d0;
        case 0x2d20d4u: goto label_2d20d4;
        case 0x2d20d8u: goto label_2d20d8;
        case 0x2d20dcu: goto label_2d20dc;
        case 0x2d20e0u: goto label_2d20e0;
        case 0x2d20e4u: goto label_2d20e4;
        case 0x2d20e8u: goto label_2d20e8;
        case 0x2d20ecu: goto label_2d20ec;
        case 0x2d20f0u: goto label_2d20f0;
        case 0x2d20f4u: goto label_2d20f4;
        case 0x2d20f8u: goto label_2d20f8;
        case 0x2d20fcu: goto label_2d20fc;
        case 0x2d2100u: goto label_2d2100;
        case 0x2d2104u: goto label_2d2104;
        case 0x2d2108u: goto label_2d2108;
        case 0x2d210cu: goto label_2d210c;
        case 0x2d2110u: goto label_2d2110;
        case 0x2d2114u: goto label_2d2114;
        case 0x2d2118u: goto label_2d2118;
        case 0x2d211cu: goto label_2d211c;
        case 0x2d2120u: goto label_2d2120;
        case 0x2d2124u: goto label_2d2124;
        case 0x2d2128u: goto label_2d2128;
        case 0x2d212cu: goto label_2d212c;
        case 0x2d2130u: goto label_2d2130;
        case 0x2d2134u: goto label_2d2134;
        case 0x2d2138u: goto label_2d2138;
        case 0x2d213cu: goto label_2d213c;
        case 0x2d2140u: goto label_2d2140;
        case 0x2d2144u: goto label_2d2144;
        case 0x2d2148u: goto label_2d2148;
        case 0x2d214cu: goto label_2d214c;
        case 0x2d2150u: goto label_2d2150;
        case 0x2d2154u: goto label_2d2154;
        case 0x2d2158u: goto label_2d2158;
        case 0x2d215cu: goto label_2d215c;
        case 0x2d2160u: goto label_2d2160;
        case 0x2d2164u: goto label_2d2164;
        case 0x2d2168u: goto label_2d2168;
        case 0x2d216cu: goto label_2d216c;
        case 0x2d2170u: goto label_2d2170;
        case 0x2d2174u: goto label_2d2174;
        case 0x2d2178u: goto label_2d2178;
        case 0x2d217cu: goto label_2d217c;
        case 0x2d2180u: goto label_2d2180;
        case 0x2d2184u: goto label_2d2184;
        case 0x2d2188u: goto label_2d2188;
        case 0x2d218cu: goto label_2d218c;
        case 0x2d2190u: goto label_2d2190;
        case 0x2d2194u: goto label_2d2194;
        case 0x2d2198u: goto label_2d2198;
        case 0x2d219cu: goto label_2d219c;
        case 0x2d21a0u: goto label_2d21a0;
        case 0x2d21a4u: goto label_2d21a4;
        case 0x2d21a8u: goto label_2d21a8;
        case 0x2d21acu: goto label_2d21ac;
        case 0x2d21b0u: goto label_2d21b0;
        case 0x2d21b4u: goto label_2d21b4;
        case 0x2d21b8u: goto label_2d21b8;
        case 0x2d21bcu: goto label_2d21bc;
        case 0x2d21c0u: goto label_2d21c0;
        case 0x2d21c4u: goto label_2d21c4;
        case 0x2d21c8u: goto label_2d21c8;
        case 0x2d21ccu: goto label_2d21cc;
        case 0x2d21d0u: goto label_2d21d0;
        case 0x2d21d4u: goto label_2d21d4;
        case 0x2d21d8u: goto label_2d21d8;
        case 0x2d21dcu: goto label_2d21dc;
        case 0x2d21e0u: goto label_2d21e0;
        case 0x2d21e4u: goto label_2d21e4;
        case 0x2d21e8u: goto label_2d21e8;
        case 0x2d21ecu: goto label_2d21ec;
        case 0x2d21f0u: goto label_2d21f0;
        case 0x2d21f4u: goto label_2d21f4;
        case 0x2d21f8u: goto label_2d21f8;
        case 0x2d21fcu: goto label_2d21fc;
        case 0x2d2200u: goto label_2d2200;
        case 0x2d2204u: goto label_2d2204;
        case 0x2d2208u: goto label_2d2208;
        case 0x2d220cu: goto label_2d220c;
        case 0x2d2210u: goto label_2d2210;
        case 0x2d2214u: goto label_2d2214;
        case 0x2d2218u: goto label_2d2218;
        case 0x2d221cu: goto label_2d221c;
        case 0x2d2220u: goto label_2d2220;
        case 0x2d2224u: goto label_2d2224;
        case 0x2d2228u: goto label_2d2228;
        case 0x2d222cu: goto label_2d222c;
        case 0x2d2230u: goto label_2d2230;
        case 0x2d2234u: goto label_2d2234;
        case 0x2d2238u: goto label_2d2238;
        case 0x2d223cu: goto label_2d223c;
        case 0x2d2240u: goto label_2d2240;
        case 0x2d2244u: goto label_2d2244;
        case 0x2d2248u: goto label_2d2248;
        case 0x2d224cu: goto label_2d224c;
        case 0x2d2250u: goto label_2d2250;
        case 0x2d2254u: goto label_2d2254;
        case 0x2d2258u: goto label_2d2258;
        case 0x2d225cu: goto label_2d225c;
        case 0x2d2260u: goto label_2d2260;
        case 0x2d2264u: goto label_2d2264;
        case 0x2d2268u: goto label_2d2268;
        case 0x2d226cu: goto label_2d226c;
        case 0x2d2270u: goto label_2d2270;
        case 0x2d2274u: goto label_2d2274;
        case 0x2d2278u: goto label_2d2278;
        case 0x2d227cu: goto label_2d227c;
        case 0x2d2280u: goto label_2d2280;
        case 0x2d2284u: goto label_2d2284;
        case 0x2d2288u: goto label_2d2288;
        case 0x2d228cu: goto label_2d228c;
        case 0x2d2290u: goto label_2d2290;
        case 0x2d2294u: goto label_2d2294;
        case 0x2d2298u: goto label_2d2298;
        case 0x2d229cu: goto label_2d229c;
        case 0x2d22a0u: goto label_2d22a0;
        case 0x2d22a4u: goto label_2d22a4;
        case 0x2d22a8u: goto label_2d22a8;
        case 0x2d22acu: goto label_2d22ac;
        case 0x2d22b0u: goto label_2d22b0;
        case 0x2d22b4u: goto label_2d22b4;
        case 0x2d22b8u: goto label_2d22b8;
        case 0x2d22bcu: goto label_2d22bc;
        case 0x2d22c0u: goto label_2d22c0;
        case 0x2d22c4u: goto label_2d22c4;
        case 0x2d22c8u: goto label_2d22c8;
        case 0x2d22ccu: goto label_2d22cc;
        case 0x2d22d0u: goto label_2d22d0;
        case 0x2d22d4u: goto label_2d22d4;
        case 0x2d22d8u: goto label_2d22d8;
        case 0x2d22dcu: goto label_2d22dc;
        case 0x2d22e0u: goto label_2d22e0;
        case 0x2d22e4u: goto label_2d22e4;
        case 0x2d22e8u: goto label_2d22e8;
        case 0x2d22ecu: goto label_2d22ec;
        case 0x2d22f0u: goto label_2d22f0;
        case 0x2d22f4u: goto label_2d22f4;
        case 0x2d22f8u: goto label_2d22f8;
        case 0x2d22fcu: goto label_2d22fc;
        case 0x2d2300u: goto label_2d2300;
        case 0x2d2304u: goto label_2d2304;
        case 0x2d2308u: goto label_2d2308;
        case 0x2d230cu: goto label_2d230c;
        case 0x2d2310u: goto label_2d2310;
        case 0x2d2314u: goto label_2d2314;
        default: break;
    }

    ctx->pc = 0x2d1c38u;

label_2d1c38:
    // 0x2d1c38: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2d1c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2d1c3c:
    // 0x2d1c3c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2d1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2d1c40:
    // 0x2d1c40: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2d1c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_2d1c44:
    // 0x2d1c44: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2d1c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_2d1c48:
    // 0x2d1c48: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2d1c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_2d1c4c:
    // 0x2d1c4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d1c4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d1c50:
    // 0x2d1c50: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2d1c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2d1c54:
    // 0x2d1c54: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2d1c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_2d1c58:
    // 0x2d1c58: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2d1c58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1c5c:
    // 0x2d1c5c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2d1c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_2d1c60:
    // 0x2d1c60: 0x24574b00  addiu       $s7, $v0, 0x4B00
    ctx->pc = 0x2d1c60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2d1c64:
    // 0x2d1c64: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2d1c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_2d1c68:
    // 0x2d1c68: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2d1c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_2d1c6c:
    // 0x2d1c6c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2d1c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_2d1c70:
    // 0x2d1c70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d1c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2d1c74:
    // 0x2d1c74: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d1c78:
    // 0x2d1c78: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x2d1c78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d1c7c:
    // 0x2d1c7c: 0x26740090  addiu       $s4, $s3, 0x90
    ctx->pc = 0x2d1c7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2d1c80:
    // 0x2d1c80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d1c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d1c84:
    // 0x2d1c84: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x2d1c84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2d1c88:
    // 0x2d1c88: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2d1c8c:
    // 0x2d1c8c: 0xc08a08a  jal         func_228228
label_2d1c90:
    if (ctx->pc == 0x2D1C90u) {
        ctx->pc = 0x2D1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C8Cu;
        // 0x2d1c90: 0x578021  addu        $s0, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1C94u;
        goto label_2d1c94;
    }
    ctx->pc = 0x2D1C8Cu;
    SET_GPR_U32(ctx, 31, 0x2D1C94u);
    ctx->pc = 0x2D1C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1C8Cu;
    // 0x2d1c90: 0x578021  addu        $s0, $v0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2D1C8Cu, 0x2D1C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C94u;
label_2d1c94:
    // 0x2d1c94: 0x10560194  beq         $v0, $s6, . + 4 + (0x194 << 2)
label_2d1c98:
    if (ctx->pc == 0x2D1C98u) {
        ctx->pc = 0x2D1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C94u;
        // 0x2d1c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1C9Cu;
        goto label_2d1c9c;
    }
    ctx->pc = 0x2D1C94u;
    {
        const bool branch_taken_0x2d1c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x2D1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C94u;
        // 0x2d1c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c94) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D1C9Cu;
label_2d1c9c:
    // 0x2d1c9c: 0xc08bfbc  jal         func_22FEF0
label_2d1ca0:
    if (ctx->pc == 0x2D1CA0u) {
        ctx->pc = 0x2D1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C9Cu;
        // 0x2d1ca0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1CA4u;
        goto label_2d1ca4;
    }
    ctx->pc = 0x2D1C9Cu;
    SET_GPR_U32(ctx, 31, 0x2D1CA4u);
    ctx->pc = 0x2D1CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1C9Cu;
    // 0x2d1ca0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2D1C9Cu, 0x2D1CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CA4u;
label_2d1ca4:
    // 0x2d1ca4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2d1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2d1ca8:
    // 0x2d1ca8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d1ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d1cac:
    // 0x2d1cac: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2d1cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2d1cb0:
    // 0x2d1cb0: 0xc1067b8  jal         func_419EE0
label_2d1cb4:
    if (ctx->pc == 0x2D1CB4u) {
        ctx->pc = 0x2D1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CB0u;
        // 0x2d1cb4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1CB8u;
        goto label_2d1cb8;
    }
    ctx->pc = 0x2D1CB0u;
    SET_GPR_U32(ctx, 31, 0x2D1CB8u);
    ctx->pc = 0x2D1CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1CB0u;
    // 0x2d1cb4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2D1CB0u, 0x2D1CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CB8u;
label_2d1cb8:
    // 0x2d1cb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d1cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1cbc:
    // 0x2d1cbc: 0x10a00189  beqz        $a1, . + 4 + (0x189 << 2)
label_2d1cc0:
    if (ctx->pc == 0x2D1CC0u) {
        ctx->pc = 0x2D1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CBCu;
        // 0x2d1cc0: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1CC4u;
        goto label_2d1cc4;
    }
    ctx->pc = 0x2D1CBCu;
    {
        const bool branch_taken_0x2d1cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CBCu;
        // 0x2d1cc0: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cbc) {
            ctx->pc = 0x2D22E4u;
            goto label_2d22e4;
        }
    }
    ctx->pc = 0x2D1CC4u;
label_2d1cc4:
    // 0x2d1cc4: 0x92430036  lbu         $v1, 0x36($s2)
    ctx->pc = 0x2d1cc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_2d1cc8:
    // 0x2d1cc8: 0x1475001b  bne         $v1, $s5, . + 4 + (0x1B << 2)
label_2d1ccc:
    if (ctx->pc == 0x2D1CCCu) {
        ctx->pc = 0x2D1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CC8u;
        // 0x2d1ccc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1CD0u;
        goto label_2d1cd0;
    }
    ctx->pc = 0x2D1CC8u;
    {
        const bool branch_taken_0x2d1cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x2D1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CC8u;
        // 0x2d1ccc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cc8) {
            ctx->pc = 0x2D1D38u;
            goto label_2d1d38;
        }
    }
    ctx->pc = 0x2D1CD0u;
label_2d1cd0:
    // 0x2d1cd0: 0xc105bc2  jal         func_416F08
label_2d1cd4:
    if (ctx->pc == 0x2D1CD4u) {
        ctx->pc = 0x2D1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CD0u;
        // 0x2d1cd4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1CD8u;
        goto label_2d1cd8;
    }
    ctx->pc = 0x2D1CD0u;
    SET_GPR_U32(ctx, 31, 0x2D1CD8u);
    ctx->pc = 0x2D1CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1CD0u;
    // 0x2d1cd4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416F08u, 0x2D1CD0u, 0x2D1CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CD8u;
label_2d1cd8:
    // 0x2d1cd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1cdc:
    // 0x2d1cdc: 0x12200182  beqz        $s1, . + 4 + (0x182 << 2)
label_2d1ce0:
    if (ctx->pc == 0x2D1CE0u) {
        ctx->pc = 0x2D1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CDCu;
        // 0x2d1ce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1CE4u;
        goto label_2d1ce4;
    }
    ctx->pc = 0x2D1CDCu;
    {
        const bool branch_taken_0x2d1cdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CDCu;
        // 0x2d1ce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cdc) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D1CE4u;
label_2d1ce4:
    // 0x2d1ce4: 0xc0a4e54  jal         func_293950
label_2d1ce8:
    if (ctx->pc == 0x2D1CE8u) {
        ctx->pc = 0x2D1CECu;
        goto label_2d1cec;
    }
    ctx->pc = 0x2D1CE4u;
    SET_GPR_U32(ctx, 31, 0x2D1CECu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D1CE4u, 0x2D1CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CECu;
label_2d1cec:
    // 0x2d1cec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1cf0:
    // 0x2d1cf0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2d1cf4:
    if (ctx->pc == 0x2D1CF4u) {
        ctx->pc = 0x2D1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CF0u;
        // 0x2d1cf4: 0x24080059  addiu       $t0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1CF8u;
        goto label_2d1cf8;
    }
    ctx->pc = 0x2D1CF0u;
    {
        const bool branch_taken_0x2d1cf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CF0u;
        // 0x2d1cf4: 0x24080059  addiu       $t0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cf0) {
            ctx->pc = 0x2D1D24u;
            goto label_2d1d24;
        }
    }
    ctx->pc = 0x2D1CF8u;
label_2d1cf8:
    // 0x2d1cf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d1cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d1cfc:
    // 0x2d1cfc: 0x9242003a  lbu         $v0, 0x3A($s2)
    ctx->pc = 0x2d1cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
label_2d1d00:
    // 0x2d1d00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d1d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d04:
    // 0x2d1d04: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d1d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d1d08:
    // 0x2d1d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d0c:
    // 0x2d1d0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d1d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d1d10:
    // 0x2d1d10: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2d1d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2d1d14:
    // 0x2d1d14: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x2d1d14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_2d1d18:
    // 0x2d1d18: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2d1d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d1d1c:
    // 0x2d1d1c: 0xc0b6a3e  jal         func_2DA8F8
label_2d1d20:
    if (ctx->pc == 0x2D1D20u) {
        ctx->pc = 0x2D1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D1Cu;
        // 0x2d1d20: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1D24u;
        goto label_2d1d24;
    }
    ctx->pc = 0x2D1D1Cu;
    SET_GPR_U32(ctx, 31, 0x2D1D24u);
    ctx->pc = 0x2D1D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D1Cu;
    // 0x2d1d20: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8F8u, 0x2D1D1Cu, 0x2D1D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D24u;
label_2d1d24:
    // 0x2d1d24: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d1d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d1d28:
    // 0x2d1d28: 0xc0a35d6  jal         func_28D758
label_2d1d2c:
    if (ctx->pc == 0x2D1D2Cu) {
        ctx->pc = 0x2D1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D28u;
        // 0x2d1d2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1D30u;
        goto label_2d1d30;
    }
    ctx->pc = 0x2D1D28u;
    SET_GPR_U32(ctx, 31, 0x2D1D30u);
    ctx->pc = 0x2D1D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D28u;
    // 0x2d1d2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D1D28u, 0x2D1D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D30u;
label_2d1d30:
    // 0x2d1d30: 0x1000016d  b           . + 4 + (0x16D << 2)
label_2d1d34:
    if (ctx->pc == 0x2D1D34u) {
        ctx->pc = 0x2D1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D30u;
        // 0x2d1d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1D38u;
        goto label_2d1d38;
    }
    ctx->pc = 0x2D1D30u;
    {
        const bool branch_taken_0x2d1d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D30u;
        // 0x2d1d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d30) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D1D38u;
label_2d1d38:
    // 0x2d1d38: 0x1476003d  bne         $v1, $s6, . + 4 + (0x3D << 2)
label_2d1d3c:
    if (ctx->pc == 0x2D1D3Cu) {
        ctx->pc = 0x2D1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D38u;
        // 0x2d1d3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1D40u;
        goto label_2d1d40;
    }
    ctx->pc = 0x2D1D38u;
    {
        const bool branch_taken_0x2d1d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x2D1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D38u;
        // 0x2d1d3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d38) {
            ctx->pc = 0x2D1E30u;
            goto label_2d1e30;
        }
    }
    ctx->pc = 0x2D1D40u;
label_2d1d40:
    // 0x2d1d40: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2d1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2d1d44:
    // 0x2d1d44: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2d1d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_2d1d48:
    // 0x2d1d48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d1d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d1d4c:
    // 0x2d1d4c: 0x2442f250  addiu       $v0, $v0, -0xDB0
    ctx->pc = 0x2d1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
label_2d1d50:
    // 0x2d1d50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d1d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d54:
    // 0x2d1d54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d1d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2d1d58:
    // 0x2d1d58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d1d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d5c:
    // 0x2d1d5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d1d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d60:
    // 0x2d1d60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d1d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1d64:
    // 0x2d1d64: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d1d64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1d68:
    // 0x2d1d68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d1d68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d6c:
    // 0x2d1d6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d1d6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d70:
    // 0x2d1d70: 0xc0a757c  jal         func_29D5F0
label_2d1d74:
    if (ctx->pc == 0x2D1D74u) {
        ctx->pc = 0x2D1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D70u;
        // 0x2d1d74: 0x3c140054  lui         $s4, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1D78u;
        goto label_2d1d78;
    }
    ctx->pc = 0x2D1D70u;
    SET_GPR_U32(ctx, 31, 0x2D1D78u);
    ctx->pc = 0x2D1D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D70u;
    // 0x2d1d74: 0x3c140054  lui         $s4, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)84 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x2D1D70u, 0x2D1D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D78u;
label_2d1d78:
    // 0x2d1d78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d7c:
    // 0x2d1d7c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2d1d80:
    if (ctx->pc == 0x2D1D80u) {
        ctx->pc = 0x2D1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D7Cu;
        // 0x2d1d80: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1D84u;
        goto label_2d1d84;
    }
    ctx->pc = 0x2D1D7Cu;
    {
        const bool branch_taken_0x2d1d7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D7Cu;
        // 0x2d1d80: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d7c) {
            ctx->pc = 0x2D1DE8u;
            goto label_2d1de8;
        }
    }
    ctx->pc = 0x2D1D84u;
label_2d1d84:
    // 0x2d1d84: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d1d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d1d88:
    // 0x2d1d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d8c:
    // 0x2d1d8c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2d1d8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2d1d90:
    // 0x2d1d90: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2d1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2d1d94:
    // 0x2d1d94: 0x40f809  jalr        $v0
label_2d1d98:
    if (ctx->pc == 0x2D1D98u) {
        ctx->pc = 0x2D1D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D94u;
        // 0x2d1d98: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1D9Cu;
        goto label_2d1d9c;
    }
    ctx->pc = 0x2D1D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D1D9Cu);
        ctx->pc = 0x2D1D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D94u;
        // 0x2d1d98: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1D94u, 0x2D1D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D1D9Cu;
label_2d1d9c:
    // 0x2d1d9c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d1d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d1da0:
    // 0x2d1da0: 0xc0a3fce  jal         func_28FF38
label_2d1da4:
    if (ctx->pc == 0x2D1DA4u) {
        ctx->pc = 0x2D1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DA0u;
        // 0x2d1da4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1DA8u;
        goto label_2d1da8;
    }
    ctx->pc = 0x2D1DA0u;
    SET_GPR_U32(ctx, 31, 0x2D1DA8u);
    ctx->pc = 0x2D1DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1DA0u;
    // 0x2d1da4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2D1DA0u, 0x2D1DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1DA8u;
label_2d1da8:
    // 0x2d1da8: 0x54560010  bnel        $v0, $s6, . + 4 + (0x10 << 2)
label_2d1dac:
    if (ctx->pc == 0x2D1DACu) {
        ctx->pc = 0x2D1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DA8u;
        // 0x2d1dac: 0x92430037  lbu         $v1, 0x37($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1DB0u;
        goto label_2d1db0;
    }
    ctx->pc = 0x2D1DA8u;
    {
        const bool branch_taken_0x2d1da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2d1da8) {
            ctx->pc = 0x2D1DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1DA8u;
            // 0x2d1dac: 0x92430037  lbu         $v1, 0x37($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1DECu;
            goto label_2d1dec;
        }
    }
    ctx->pc = 0x2D1DB0u;
label_2d1db0:
    // 0x2d1db0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d1db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d1db4:
    // 0x2d1db4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d1db4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d1db8:
    // 0x2d1db8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d1dbc:
    // 0x2d1dbc: 0x40f809  jalr        $v0
label_2d1dc0:
    if (ctx->pc == 0x2D1DC0u) {
        ctx->pc = 0x2D1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DBCu;
        // 0x2d1dc0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1DC4u;
        goto label_2d1dc4;
    }
    ctx->pc = 0x2D1DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D1DC4u);
        ctx->pc = 0x2D1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DBCu;
        // 0x2d1dc0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1DBCu, 0x2D1DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D1DC4u;
label_2d1dc4:
    // 0x2d1dc4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d1dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d1dc8:
    // 0x2d1dc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1dcc:
    // 0x2d1dcc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d1dccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d1dd0:
    // 0x2d1dd0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d1dd4:
    // 0x2d1dd4: 0x40f809  jalr        $v0
label_2d1dd8:
    if (ctx->pc == 0x2D1DD8u) {
        ctx->pc = 0x2D1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DD4u;
        // 0x2d1dd8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1DDCu;
        goto label_2d1ddc;
    }
    ctx->pc = 0x2D1DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D1DDCu);
        ctx->pc = 0x2D1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DD4u;
        // 0x2d1dd8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1DD4u, 0x2D1DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D1DDCu;
label_2d1ddc:
    // 0x2d1ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d1de0:
    // 0x2d1de0: 0xc0b758c  jal         func_2DD630
label_2d1de4:
    if (ctx->pc == 0x2D1DE4u) {
        ctx->pc = 0x2D1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DE0u;
        // 0x2d1de4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1DE8u;
        goto label_2d1de8;
    }
    ctx->pc = 0x2D1DE0u;
    SET_GPR_U32(ctx, 31, 0x2D1DE8u);
    ctx->pc = 0x2D1DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1DE0u;
    // 0x2d1de4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD630u, 0x2D1DE0u, 0x2D1DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1DE8u;
label_2d1de8:
    // 0x2d1de8: 0x92430037  lbu         $v1, 0x37($s2)
    ctx->pc = 0x2d1de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
label_2d1dec:
    // 0x2d1dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1df0:
    // 0x2d1df0: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_2d1df4:
    if (ctx->pc == 0x2D1DF4u) {
        ctx->pc = 0x2D1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DF0u;
        // 0x2d1df4: 0x2682f2f0  addiu       $v0, $s4, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1DF8u;
        goto label_2d1df8;
    }
    ctx->pc = 0x2D1DF0u;
    {
        const bool branch_taken_0x2d1df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DF0u;
        // 0x2d1df4: 0x2682f2f0  addiu       $v0, $s4, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1df0) {
            ctx->pc = 0x2D1E24u;
            goto label_2d1e24;
        }
    }
    ctx->pc = 0x2D1DF8u;
label_2d1df8:
    // 0x2d1df8: 0x92420033  lbu         $v0, 0x33($s2)
    ctx->pc = 0x2d1df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
label_2d1dfc:
    // 0x2d1dfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2d1e00:
    // 0x2d1e00: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2d1e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d1e04:
    // 0x2d1e04: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2d1e08:
    if (ctx->pc == 0x2D1E08u) {
        ctx->pc = 0x2D1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E04u;
        // 0x2d1e08: 0xa2420033  sb          $v0, 0x33($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 51), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1E0Cu;
        goto label_2d1e0c;
    }
    ctx->pc = 0x2D1E04u;
    {
        const bool branch_taken_0x2d1e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E04u;
        // 0x2d1e08: 0xa2420033  sb          $v0, 0x33($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 51), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e04) {
            ctx->pc = 0x2D1E14u;
            goto label_2d1e14;
        }
    }
    ctx->pc = 0x2D1E0Cu;
label_2d1e0c:
    // 0x2d1e0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2d1e10:
    // 0x2d1e10: 0xa2420036  sb          $v0, 0x36($s2)
    ctx->pc = 0x2d1e10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 2));
label_2d1e14:
    // 0x2d1e14: 0x2683f2f0  addiu       $v1, $s4, -0xD10
    ctx->pc = 0x2d1e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963952));
label_2d1e18:
    // 0x2d1e18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d1e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1e1c:
    // 0x2d1e1c: 0x10000132  b           . + 4 + (0x132 << 2)
label_2d1e20:
    if (ctx->pc == 0x2D1E20u) {
        ctx->pc = 0x2D1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E1Cu;
        // 0x2d1e20: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1E24u;
        goto label_2d1e24;
    }
    ctx->pc = 0x2D1E1Cu;
    {
        const bool branch_taken_0x2d1e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E1Cu;
        // 0x2d1e20: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e1c) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D1E24u;
label_2d1e24:
    // 0x2d1e24: 0xa2400036  sb          $zero, 0x36($s2)
    ctx->pc = 0x2d1e24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 0));
label_2d1e28:
    // 0x2d1e28: 0x1000012e  b           . + 4 + (0x12E << 2)
label_2d1e2c:
    if (ctx->pc == 0x2D1E2Cu) {
        ctx->pc = 0x2D1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E28u;
        // 0x2d1e2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1E30u;
        goto label_2d1e30;
    }
    ctx->pc = 0x2D1E28u;
    {
        const bool branch_taken_0x2d1e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E28u;
        // 0x2d1e2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e28) {
            ctx->pc = 0x2D22E4u;
            goto label_2d22e4;
        }
    }
    ctx->pc = 0x2D1E30u;
label_2d1e30:
    // 0x2d1e30: 0x14620064  bne         $v1, $v0, . + 4 + (0x64 << 2)
label_2d1e34:
    if (ctx->pc == 0x2D1E34u) {
        ctx->pc = 0x2D1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E30u;
        // 0x2d1e34: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1E38u;
        goto label_2d1e38;
    }
    ctx->pc = 0x2D1E30u;
    {
        const bool branch_taken_0x2d1e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E30u;
        // 0x2d1e34: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e30) {
            ctx->pc = 0x2D1FC4u;
            goto label_2d1fc4;
        }
    }
    ctx->pc = 0x2D1E38u;
label_2d1e38:
    // 0x2d1e38: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x2d1e38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2d1e3c:
    // 0x2d1e3c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2d1e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2d1e40:
    // 0x2d1e40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d1e40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1e44:
    // 0x2d1e44: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d1e44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d1e48:
    // 0x2d1e48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d1e48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1e4c:
    // 0x2d1e4c: 0xc105df6  jal         func_4177D8
label_2d1e50:
    if (ctx->pc == 0x2D1E50u) {
        ctx->pc = 0x2D1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E4Cu;
        // 0x2d1e50: 0x972021  addu        $a0, $a0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1E54u;
        goto label_2d1e54;
    }
    ctx->pc = 0x2D1E4Cu;
    SET_GPR_U32(ctx, 31, 0x2D1E54u);
    ctx->pc = 0x2D1E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1E4Cu;
    // 0x2d1e50: 0x972021  addu        $a0, $a0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2D1E4Cu, 0x2D1E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E54u;
label_2d1e54:
    // 0x2d1e54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1e58:
    // 0x2d1e58: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
label_2d1e5c:
    if (ctx->pc == 0x2D1E5Cu) {
        ctx->pc = 0x2D1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E58u;
        // 0x2d1e5c: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1E60u;
        goto label_2d1e60;
    }
    ctx->pc = 0x2D1E58u;
    {
        const bool branch_taken_0x2d1e58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E58u;
        // 0x2d1e5c: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e58) {
            ctx->pc = 0x2D1F98u;
            goto label_2d1f98;
        }
    }
    ctx->pc = 0x2D1E60u;
label_2d1e60:
    // 0x2d1e60: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x2d1e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_2d1e64:
    // 0x2d1e64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d1e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d1e68:
    // 0x2d1e68: 0x0  nop
    ctx->pc = 0x2d1e68u;
    // NOP
label_2d1e6c:
    // 0x2d1e6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d1e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d1e70:
    // 0x2d1e70: 0x0  nop
    ctx->pc = 0x2d1e70u;
    // NOP
label_2d1e74:
    // 0x2d1e74: 0x45000048  bc1f        . + 4 + (0x48 << 2)
label_2d1e78:
    if (ctx->pc == 0x2D1E78u) {
        ctx->pc = 0x2D1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E74u;
        // 0x2d1e78: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1E7Cu;
        goto label_2d1e7c;
    }
    ctx->pc = 0x2D1E74u;
    {
        const bool branch_taken_0x2d1e74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E74u;
        // 0x2d1e78: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e74) {
            ctx->pc = 0x2D1F98u;
            goto label_2d1f98;
        }
    }
    ctx->pc = 0x2D1E7Cu;
label_2d1e7c:
    // 0x2d1e7c: 0x923500d8  lbu         $s5, 0xD8($s1)
    ctx->pc = 0x2d1e7cu;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 216)));
label_2d1e80:
    // 0x2d1e80: 0x8fc22c7c  lw          $v0, 0x2C7C($fp)
    ctx->pc = 0x2d1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
label_2d1e84:
    // 0x2d1e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1e88:
    // 0x2d1e88: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d1e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d1e8c:
    // 0x2d1e8c: 0xc0e6960  jal         func_39A580
label_2d1e90:
    if (ctx->pc == 0x2D1E90u) {
        ctx->pc = 0x2D1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E8Cu;
        // 0x2d1e90: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1E94u;
        goto label_2d1e94;
    }
    ctx->pc = 0x2D1E8Cu;
    SET_GPR_U32(ctx, 31, 0x2D1E94u);
    ctx->pc = 0x2D1E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1E8Cu;
    // 0x2d1e90: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A580u, 0x2D1E8Cu, 0x2D1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E94u;
label_2d1e94:
    // 0x2d1e94: 0x54560041  bnel        $v0, $s6, . + 4 + (0x41 << 2)
label_2d1e98:
    if (ctx->pc == 0x2D1E98u) {
        ctx->pc = 0x2D1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E94u;
        // 0x2d1e98: 0x92430037  lbu         $v1, 0x37($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1E9Cu;
        goto label_2d1e9c;
    }
    ctx->pc = 0x2D1E94u;
    {
        const bool branch_taken_0x2d1e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2d1e94) {
            ctx->pc = 0x2D1E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1E94u;
            // 0x2d1e98: 0x92430037  lbu         $v1, 0x37($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1F9Cu;
            goto label_2d1f9c;
        }
    }
    ctx->pc = 0x2D1E9Cu;
label_2d1e9c:
    // 0x2d1e9c: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x2d1e9cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2d1ea0:
    // 0x2d1ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1ea4:
    // 0x2d1ea4: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2d1ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2d1ea8:
    // 0x2d1ea8: 0xc10587a  jal         func_4161E8
label_2d1eac:
    if (ctx->pc == 0x2D1EACu) {
        ctx->pc = 0x2D1EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1EA8u;
        // 0x2d1eac: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1EB0u;
        goto label_2d1eb0;
    }
    ctx->pc = 0x2D1EA8u;
    SET_GPR_U32(ctx, 31, 0x2D1EB0u);
    ctx->pc = 0x2D1EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1EA8u;
    // 0x2d1eac: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2D1EA8u, 0x2D1EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1EB0u;
label_2d1eb0:
    // 0x2d1eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d1eb4:
    // 0x2d1eb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d1eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1eb8:
    // 0x2d1eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1ebc:
    // 0x2d1ebc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d1ebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1ec0:
    // 0x2d1ec0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d1ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1ec4:
    // 0x2d1ec4: 0xc09381e  jal         func_24E078
label_2d1ec8:
    if (ctx->pc == 0x2D1EC8u) {
        ctx->pc = 0x2D1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1EC4u;
        // 0x2d1ec8: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1ECCu;
        goto label_2d1ecc;
    }
    ctx->pc = 0x2D1EC4u;
    SET_GPR_U32(ctx, 31, 0x2D1ECCu);
    ctx->pc = 0x2D1EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1EC4u;
    // 0x2d1ec8: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2D1EC4u, 0x2D1ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1ECCu;
label_2d1ecc:
    // 0x2d1ecc: 0x54560033  bnel        $v0, $s6, . + 4 + (0x33 << 2)
label_2d1ed0:
    if (ctx->pc == 0x2D1ED0u) {
        ctx->pc = 0x2D1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1ECCu;
        // 0x2d1ed0: 0x92430037  lbu         $v1, 0x37($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1ED4u;
        goto label_2d1ed4;
    }
    ctx->pc = 0x2D1ECCu;
    {
        const bool branch_taken_0x2d1ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2d1ecc) {
            ctx->pc = 0x2D1ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1ECCu;
            // 0x2d1ed0: 0x92430037  lbu         $v1, 0x37($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1F9Cu;
            goto label_2d1f9c;
        }
    }
    ctx->pc = 0x2D1ED4u;
label_2d1ed4:
    // 0x2d1ed4: 0x8fc22c7c  lw          $v0, 0x2C7C($fp)
    ctx->pc = 0x2d1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
label_2d1ed8:
    // 0x2d1ed8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d1ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d1edc:
    // 0x2d1edc: 0x86860002  lh          $a2, 0x2($s4)
    ctx->pc = 0x2d1edcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_2d1ee0:
    // 0x2d1ee0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2d1ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d1ee4:
    // 0x2d1ee4: 0x8c440840  lw          $a0, 0x840($v0)
    ctx->pc = 0x2d1ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
label_2d1ee8:
    // 0x2d1ee8: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2d1ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2d1eec:
    // 0x2d1eec: 0xc0e68b0  jal         func_39A2C0
label_2d1ef0:
    if (ctx->pc == 0x2D1EF0u) {
        ctx->pc = 0x2D1EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1EECu;
        // 0x2d1ef0: 0xd73021  addu        $a2, $a2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1EF4u;
        goto label_2d1ef4;
    }
    ctx->pc = 0x2D1EECu;
    SET_GPR_U32(ctx, 31, 0x2D1EF4u);
    ctx->pc = 0x2D1EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1EECu;
    // 0x2d1ef0: 0xd73021  addu        $a2, $a2, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A2C0u, 0x2D1EECu, 0x2D1EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1EF4u;
label_2d1ef4:
    // 0x2d1ef4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2d1ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2d1ef8:
    // 0x2d1ef8: 0xc0e4060  jal         func_390180
label_2d1efc:
    if (ctx->pc == 0x2D1EFCu) {
        ctx->pc = 0x2D1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1EF8u;
        // 0x2d1efc: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1F00u;
        goto label_2d1f00;
    }
    ctx->pc = 0x2D1EF8u;
    SET_GPR_U32(ctx, 31, 0x2D1F00u);
    ctx->pc = 0x2D1EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1EF8u;
    // 0x2d1efc: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D1EF8u, 0x2D1F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F00u;
label_2d1f00:
    // 0x2d1f00: 0xc0e57ce  jal         func_395F38
label_2d1f04:
    if (ctx->pc == 0x2D1F04u) {
        ctx->pc = 0x2D1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F00u;
        // 0x2d1f04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1F08u;
        goto label_2d1f08;
    }
    ctx->pc = 0x2D1F00u;
    SET_GPR_U32(ctx, 31, 0x2D1F08u);
    ctx->pc = 0x2D1F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1F00u;
    // 0x2d1f04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2D1F00u, 0x2D1F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F08u;
label_2d1f08:
    // 0x2d1f08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1f0c:
    // 0x2d1f0c: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_2d1f10:
    if (ctx->pc == 0x2D1F10u) {
        ctx->pc = 0x2D1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F0Cu;
        // 0x2d1f10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1F14u;
        goto label_2d1f14;
    }
    ctx->pc = 0x2D1F0Cu;
    {
        const bool branch_taken_0x2d1f0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F0Cu;
        // 0x2d1f10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1f0c) {
            ctx->pc = 0x2D1F98u;
            goto label_2d1f98;
        }
    }
    ctx->pc = 0x2D1F14u;
label_2d1f14:
    // 0x2d1f14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d1f18:
    // 0x2d1f18: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2d1f18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2d1f1c:
    // 0x2d1f1c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2d1f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2d1f20:
    // 0x2d1f20: 0x60f809  jalr        $v1
label_2d1f24:
    if (ctx->pc == 0x2D1F24u) {
        ctx->pc = 0x2D1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F20u;
        // 0x2d1f24: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1F28u;
        goto label_2d1f28;
    }
    ctx->pc = 0x2D1F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D1F28u);
        ctx->pc = 0x2D1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F20u;
        // 0x2d1f24: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1F20u, 0x2D1F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D1F28u;
label_2d1f28:
    // 0x2d1f28: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d1f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d1f2c:
    // 0x2d1f2c: 0xc0a3fce  jal         func_28FF38
label_2d1f30:
    if (ctx->pc == 0x2D1F30u) {
        ctx->pc = 0x2D1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F2Cu;
        // 0x2d1f30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1F34u;
        goto label_2d1f34;
    }
    ctx->pc = 0x2D1F2Cu;
    SET_GPR_U32(ctx, 31, 0x2D1F34u);
    ctx->pc = 0x2D1F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1F2Cu;
    // 0x2d1f30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2D1F2Cu, 0x2D1F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F34u;
label_2d1f34:
    // 0x2d1f34: 0x54560019  bnel        $v0, $s6, . + 4 + (0x19 << 2)
label_2d1f38:
    if (ctx->pc == 0x2D1F38u) {
        ctx->pc = 0x2D1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F34u;
        // 0x2d1f38: 0x92430037  lbu         $v1, 0x37($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1F3Cu;
        goto label_2d1f3c;
    }
    ctx->pc = 0x2D1F34u;
    {
        const bool branch_taken_0x2d1f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2d1f34) {
            ctx->pc = 0x2D1F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1F34u;
            // 0x2d1f38: 0x92430037  lbu         $v1, 0x37($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1F9Cu;
            goto label_2d1f9c;
        }
    }
    ctx->pc = 0x2D1F3Cu;
label_2d1f3c:
    // 0x2d1f3c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d1f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d1f40:
    // 0x2d1f40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2d1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2d1f44:
    // 0x2d1f44: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2d1f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2d1f48:
    // 0x2d1f48: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x2d1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_2d1f4c:
    // 0x2d1f4c: 0xae2300ec  sw          $v1, 0xEC($s1)
    ctx->pc = 0x2d1f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 3));
label_2d1f50:
    // 0x2d1f50: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2d1f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2d1f54:
    // 0x2d1f54: 0x24421388  addiu       $v0, $v0, 0x1388
    ctx->pc = 0x2d1f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
label_2d1f58:
    // 0x2d1f58: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x2d1f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_2d1f5c:
    // 0x2d1f5c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d1f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d1f60:
    // 0x2d1f60: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d1f60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d1f64:
    // 0x2d1f64: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d1f68:
    // 0x2d1f68: 0x40f809  jalr        $v0
label_2d1f6c:
    if (ctx->pc == 0x2D1F6Cu) {
        ctx->pc = 0x2D1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F68u;
        // 0x2d1f6c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1F70u;
        goto label_2d1f70;
    }
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D1F70u);
        ctx->pc = 0x2D1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F68u;
        // 0x2d1f6c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1F68u, 0x2D1F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D1F70u;
label_2d1f70:
    // 0x2d1f70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d1f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d1f74:
    // 0x2d1f74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1f78:
    // 0x2d1f78: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d1f78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d1f7c:
    // 0x2d1f7c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d1f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d1f80:
    // 0x2d1f80: 0x40f809  jalr        $v0
label_2d1f84:
    if (ctx->pc == 0x2D1F84u) {
        ctx->pc = 0x2D1F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F80u;
        // 0x2d1f84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1F88u;
        goto label_2d1f88;
    }
    ctx->pc = 0x2D1F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D1F88u);
        ctx->pc = 0x2D1F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F80u;
        // 0x2d1f84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1F80u, 0x2D1F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D1F88u;
label_2d1f88:
    // 0x2d1f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d1f8c:
    // 0x2d1f8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d1f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1f90:
    // 0x2d1f90: 0xc0b71c2  jal         func_2DC708
label_2d1f94:
    if (ctx->pc == 0x2D1F94u) {
        ctx->pc = 0x2D1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1F90u;
        // 0x2d1f94: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1F98u;
        goto label_2d1f98;
    }
    ctx->pc = 0x2D1F90u;
    SET_GPR_U32(ctx, 31, 0x2D1F98u);
    ctx->pc = 0x2D1F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1F90u;
    // 0x2d1f94: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2D1F90u, 0x2D1F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1F98u;
label_2d1f98:
    // 0x2d1f98: 0x92430037  lbu         $v1, 0x37($s2)
    ctx->pc = 0x2d1f98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
label_2d1f9c:
    // 0x2d1f9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1fa0:
    // 0x2d1fa0: 0x546200d0  bnel        $v1, $v0, . + 4 + (0xD0 << 2)
label_2d1fa4:
    if (ctx->pc == 0x2D1FA4u) {
        ctx->pc = 0x2D1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FA0u;
        // 0x2d1fa4: 0xa2400036  sb          $zero, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1FA8u;
        goto label_2d1fa8;
    }
    ctx->pc = 0x2D1FA0u;
    {
        const bool branch_taken_0x2d1fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d1fa0) {
            ctx->pc = 0x2D1FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1FA0u;
            // 0x2d1fa4: 0xa2400036  sb          $zero, 0x36($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D22E4u;
            goto label_2d22e4;
        }
    }
    ctx->pc = 0x2D1FA8u;
label_2d1fa8:
    // 0x2d1fa8: 0x92420033  lbu         $v0, 0x33($s2)
    ctx->pc = 0x2d1fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
label_2d1fac:
    // 0x2d1fac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d1facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2d1fb0:
    // 0x2d1fb0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2d1fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d1fb4:
    // 0x2d1fb4: 0x146000cb  bnez        $v1, . + 4 + (0xCB << 2)
label_2d1fb8:
    if (ctx->pc == 0x2D1FB8u) {
        ctx->pc = 0x2D1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FB4u;
        // 0x2d1fb8: 0xa2420033  sb          $v0, 0x33($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 51), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1FBCu;
        goto label_2d1fbc;
    }
    ctx->pc = 0x2D1FB4u;
    {
        const bool branch_taken_0x2d1fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FB4u;
        // 0x2d1fb8: 0xa2420033  sb          $v0, 0x33($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 51), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1fb4) {
            ctx->pc = 0x2D22E4u;
            goto label_2d22e4;
        }
    }
    ctx->pc = 0x2D1FBCu;
label_2d1fbc:
    // 0x2d1fbc: 0x10000041  b           . + 4 + (0x41 << 2)
label_2d1fc0:
    if (ctx->pc == 0x2D1FC0u) {
        ctx->pc = 0x2D1FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FBCu;
        // 0x2d1fc0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1FC4u;
        goto label_2d1fc4;
    }
    ctx->pc = 0x2D1FBCu;
    {
        const bool branch_taken_0x2d1fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FBCu;
        // 0x2d1fc0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1fbc) {
            ctx->pc = 0x2D20C4u;
            goto label_2d20c4;
        }
    }
    ctx->pc = 0x2D1FC4u;
label_2d1fc4:
    // 0x2d1fc4: 0x146000c8  bnez        $v1, . + 4 + (0xC8 << 2)
label_2d1fc8:
    if (ctx->pc == 0x2D1FC8u) {
        ctx->pc = 0x2D1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FC4u;
        // 0x2d1fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1FCCu;
        goto label_2d1fcc;
    }
    ctx->pc = 0x2D1FC4u;
    {
        const bool branch_taken_0x2d1fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FC4u;
        // 0x2d1fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1fc4) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D1FCCu;
label_2d1fcc:
    // 0x2d1fcc: 0xc0a3fd6  jal         func_28FF58
label_2d1fd0:
    if (ctx->pc == 0x2D1FD0u) {
        ctx->pc = 0x2D1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FCCu;
        // 0x2d1fd0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1FD4u;
        goto label_2d1fd4;
    }
    ctx->pc = 0x2D1FCCu;
    SET_GPR_U32(ctx, 31, 0x2D1FD4u);
    ctx->pc = 0x2D1FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1FCCu;
    // 0x2d1fd0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF58u, 0x2D1FCCu, 0x2D1FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1FD4u;
label_2d1fd4:
    // 0x2d1fd4: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x2d1fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d1fd8:
    // 0x2d1fd8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2d1fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d1fdc:
    // 0x2d1fdc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2d1fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2d1fe0:
    // 0x2d1fe0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d1fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d1fe4:
    // 0x2d1fe4: 0x0  nop
    ctx->pc = 0x2d1fe4u;
    // NOP
label_2d1fe8:
    // 0x2d1fe8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2d1fec:
    if (ctx->pc == 0x2D1FECu) {
        ctx->pc = 0x2D1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FE8u;
        // 0x2d1fec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1FF0u;
        goto label_2d1ff0;
    }
    ctx->pc = 0x2D1FE8u;
    {
        const bool branch_taken_0x2d1fe8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FE8u;
        // 0x2d1fec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1fe8) {
            ctx->pc = 0x2D1FF8u;
            goto label_2d1ff8;
        }
    }
    ctx->pc = 0x2D1FF0u;
label_2d1ff0:
    // 0x2d1ff0: 0x16000036  bnez        $s0, . + 4 + (0x36 << 2)
label_2d1ff4:
    if (ctx->pc == 0x2D1FF4u) {
        ctx->pc = 0x2D1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FF0u;
        // 0x2d1ff4: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D1FF8u;
        goto label_2d1ff8;
    }
    ctx->pc = 0x2D1FF0u;
    {
        const bool branch_taken_0x2d1ff0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FF0u;
        // 0x2d1ff4: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ff0) {
            ctx->pc = 0x2D20CCu;
            goto label_2d20cc;
        }
    }
    ctx->pc = 0x2D1FF8u;
label_2d1ff8:
    // 0x2d1ff8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2d1ffc:
    if (ctx->pc == 0x2D1FFCu) {
        ctx->pc = 0x2D1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FF8u;
        // 0x2d1ffc: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2000u;
        goto label_2d2000;
    }
    ctx->pc = 0x2D1FF8u;
    {
        const bool branch_taken_0x2d1ff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1FF8u;
        // 0x2d1ffc: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ff8) {
            ctx->pc = 0x2D203Cu;
            goto label_2d203c;
        }
    }
    ctx->pc = 0x2D2000u;
label_2d2000:
    // 0x2d2000: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d2000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d2004:
    // 0x2d2004: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2d2008:
    if (ctx->pc == 0x2D2008u) {
        ctx->pc = 0x2D2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2004u;
        // 0x2d2008: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D200Cu;
        goto label_2d200c;
    }
    ctx->pc = 0x2D2004u;
    {
        const bool branch_taken_0x2d2004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2004) {
            ctx->pc = 0x2D2008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2004u;
            // 0x2d2008: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D200Cu;
            goto label_2d200c;
        }
    }
    ctx->pc = 0x2D200Cu;
label_2d200c:
    // 0x2d200c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2d200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2d2010:
    // 0x2d2010: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2d2010u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2d2014:
    // 0x2d2014: 0x2010  mfhi        $a0
    ctx->pc = 0x2d2014u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2d2018:
    // 0x2d2018: 0x1480002c  bnez        $a0, . + 4 + (0x2C << 2)
label_2d201c:
    if (ctx->pc == 0x2D201Cu) {
        ctx->pc = 0x2D201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2018u;
        // 0x2d201c: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2020u;
        goto label_2d2020;
    }
    ctx->pc = 0x2D2018u;
    {
        const bool branch_taken_0x2d2018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2018u;
        // 0x2d201c: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2018) {
            ctx->pc = 0x2D20CCu;
            goto label_2d20cc;
        }
    }
    ctx->pc = 0x2D2020u;
label_2d2020:
    // 0x2d2020: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d2020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2d2024:
    // 0x2d2024: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2d2024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2d2028:
    // 0x2d2028: 0xc0cd4ee  jal         func_3353B8
label_2d202c:
    if (ctx->pc == 0x2D202Cu) {
        ctx->pc = 0x2D202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2028u;
        // 0x2d202c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2030u;
        goto label_2d2030;
    }
    ctx->pc = 0x2D2028u;
    SET_GPR_U32(ctx, 31, 0x2D2030u);
    ctx->pc = 0x2D202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2028u;
    // 0x2d202c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D2028u, 0x2D2030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2030u;
label_2d2030:
    // 0x2d2030: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2d2030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_2d2034:
    // 0x2d2034: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2d2038:
    if (ctx->pc == 0x2D2038u) {
        ctx->pc = 0x2D2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2034u;
        // 0x2d2038: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D203Cu;
        goto label_2d203c;
    }
    ctx->pc = 0x2D2034u;
    {
        const bool branch_taken_0x2d2034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2034u;
        // 0x2d2038: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2034) {
            ctx->pc = 0x2D20CCu;
            goto label_2d20cc;
        }
    }
    ctx->pc = 0x2D203Cu;
label_2d203c:
    // 0x2d203c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d203cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2d2040:
    // 0x2d2040: 0xa2560037  sb          $s6, 0x37($s2)
    ctx->pc = 0x2d2040u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 55), (uint8_t)GPR_U32(ctx, 22));
label_2d2044:
    // 0x2d2044: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d2044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d2048:
    // 0x2d2048: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2d2048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2d204c:
    // 0x2d204c: 0xc0cd4ee  jal         func_3353B8
label_2d2050:
    if (ctx->pc == 0x2D2050u) {
        ctx->pc = 0x2D2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D204Cu;
        // 0x2d2050: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2054u;
        goto label_2d2054;
    }
    ctx->pc = 0x2D204Cu;
    SET_GPR_U32(ctx, 31, 0x2D2054u);
    ctx->pc = 0x2D2050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D204Cu;
    // 0x2d2050: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D204Cu, 0x2D2054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2054u;
label_2d2054:
    // 0x2d2054: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d2054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d2058:
    // 0x2d2058: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x2d2058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_2d205c:
    // 0x2d205c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d205cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d2060:
    // 0x2d2060: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2d2064:
    if (ctx->pc == 0x2D2064u) {
        ctx->pc = 0x2D2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2060u;
        // 0x2d2064: 0x92420032  lbu         $v0, 0x32($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2068u;
        goto label_2d2068;
    }
    ctx->pc = 0x2D2060u;
    {
        const bool branch_taken_0x2d2060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2060) {
            ctx->pc = 0x2D2064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2060u;
            // 0x2d2064: 0x92420032  lbu         $v0, 0x32($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2088u;
            goto label_2d2088;
        }
    }
    ctx->pc = 0x2D2068u;
label_2d2068:
    // 0x2d2068: 0x56160007  bnel        $s0, $s6, . + 4 + (0x7 << 2)
label_2d206c:
    if (ctx->pc == 0x2D206Cu) {
        ctx->pc = 0x2D206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2068u;
        // 0x2d206c: 0x92420032  lbu         $v0, 0x32($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2070u;
        goto label_2d2070;
    }
    ctx->pc = 0x2D2068u;
    {
        const bool branch_taken_0x2d2068 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        if (branch_taken_0x2d2068) {
            ctx->pc = 0x2D206Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2068u;
            // 0x2d206c: 0x92420032  lbu         $v0, 0x32($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2088u;
            goto label_2d2088;
        }
    }
    ctx->pc = 0x2D2070u;
label_2d2070:
    // 0x2d2070: 0xc0b44a2  jal         func_2D1288
label_2d2074:
    if (ctx->pc == 0x2D2074u) {
        ctx->pc = 0x2D2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2070u;
        // 0x2d2074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2078u;
        goto label_2d2078;
    }
    ctx->pc = 0x2D2070u;
    SET_GPR_U32(ctx, 31, 0x2D2078u);
    ctx->pc = 0x2D2074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2070u;
    // 0x2d2074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1288u, 0x2D2070u, 0x2D2078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2078u;
label_2d2078:
    // 0x2d2078: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
label_2d207c:
    if (ctx->pc == 0x2D207Cu) {
        ctx->pc = 0x2D207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2078u;
        // 0x2d207c: 0x92420032  lbu         $v0, 0x32($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2080u;
        goto label_2d2080;
    }
    ctx->pc = 0x2D2078u;
    {
        const bool branch_taken_0x2d2078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2d2078) {
            ctx->pc = 0x2D207Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2078u;
            // 0x2d207c: 0x92420032  lbu         $v0, 0x32($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2088u;
            goto label_2d2088;
        }
    }
    ctx->pc = 0x2D2080u;
label_2d2080:
    // 0x2d2080: 0x10000098  b           . + 4 + (0x98 << 2)
label_2d2084:
    if (ctx->pc == 0x2D2084u) {
        ctx->pc = 0x2D2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2080u;
        // 0x2d2084: 0xa2550036  sb          $s5, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2088u;
        goto label_2d2088;
    }
    ctx->pc = 0x2D2080u;
    {
        const bool branch_taken_0x2d2080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2080u;
        // 0x2d2084: 0xa2550036  sb          $s5, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2080) {
            ctx->pc = 0x2D22E4u;
            goto label_2d22e4;
        }
    }
    ctx->pc = 0x2D2088u;
label_2d2088:
    // 0x2d2088: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d2088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d208c:
    // 0x2d208c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2d2090:
    if (ctx->pc == 0x2D2090u) {
        ctx->pc = 0x2D2090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D208Cu;
        // 0x2d2090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2094u;
        goto label_2d2094;
    }
    ctx->pc = 0x2D208Cu;
    {
        const bool branch_taken_0x2d208c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D208Cu;
        // 0x2d2090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d208c) {
            ctx->pc = 0x2D20C0u;
            goto label_2d20c0;
        }
    }
    ctx->pc = 0x2D2094u;
label_2d2094:
    // 0x2d2094: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
label_2d2098:
    if (ctx->pc == 0x2D2098u) {
        ctx->pc = 0x2D2098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2094u;
        // 0x2d2098: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D209Cu;
        goto label_2d209c;
    }
    ctx->pc = 0x2D2094u;
    {
        const bool branch_taken_0x2d2094 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D2098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2094u;
        // 0x2d2098: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2094) {
            ctx->pc = 0x2D20C4u;
            goto label_2d20c4;
        }
    }
    ctx->pc = 0x2D209Cu;
label_2d209c:
    // 0x2d209c: 0x2664b880  addiu       $a0, $s3, -0x4780
    ctx->pc = 0x2d209cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294948992));
label_2d20a0:
    // 0x2d20a0: 0xc0cd4ee  jal         func_3353B8
label_2d20a4:
    if (ctx->pc == 0x2D20A4u) {
        ctx->pc = 0x2D20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20A0u;
        // 0x2d20a4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D20A8u;
        goto label_2d20a8;
    }
    ctx->pc = 0x2D20A0u;
    SET_GPR_U32(ctx, 31, 0x2D20A8u);
    ctx->pc = 0x2D20A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D20A0u;
    // 0x2d20a4: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D20A0u, 0x2D20A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D20A8u;
label_2d20a8:
    // 0x2d20a8: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2d20a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_2d20ac:
    // 0x2d20ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2d20b0:
    if (ctx->pc == 0x2D20B0u) {
        ctx->pc = 0x2D20B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20ACu;
        // 0x2d20b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D20B4u;
        goto label_2d20b4;
    }
    ctx->pc = 0x2D20ACu;
    {
        const bool branch_taken_0x2d20ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D20B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20ACu;
        // 0x2d20b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d20ac) {
            ctx->pc = 0x2D20B8u;
            goto label_2d20b8;
        }
    }
    ctx->pc = 0x2D20B4u;
label_2d20b4:
    // 0x2d20b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d20b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d20b8:
    // 0x2d20b8: 0x1000008a  b           . + 4 + (0x8A << 2)
label_2d20bc:
    if (ctx->pc == 0x2D20BCu) {
        ctx->pc = 0x2D20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20B8u;
        // 0x2d20bc: 0xa2430036  sb          $v1, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D20C0u;
        goto label_2d20c0;
    }
    ctx->pc = 0x2D20B8u;
    {
        const bool branch_taken_0x2d20b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20B8u;
        // 0x2d20bc: 0xa2430036  sb          $v1, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d20b8) {
            ctx->pc = 0x2D22E4u;
            goto label_2d22e4;
        }
    }
    ctx->pc = 0x2D20C0u;
label_2d20c0:
    // 0x2d20c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2d20c4:
    // 0x2d20c4: 0x10000087  b           . + 4 + (0x87 << 2)
label_2d20c8:
    if (ctx->pc == 0x2D20C8u) {
        ctx->pc = 0x2D20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20C4u;
        // 0x2d20c8: 0xa2420036  sb          $v0, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D20CCu;
        goto label_2d20cc;
    }
    ctx->pc = 0x2D20C4u;
    {
        const bool branch_taken_0x2d20c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20C4u;
        // 0x2d20c8: 0xa2420036  sb          $v0, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d20c4) {
            ctx->pc = 0x2D22E4u;
            goto label_2d22e4;
        }
    }
    ctx->pc = 0x2D20CCu;
label_2d20cc:
    // 0x2d20cc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2d20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2d20d0:
    // 0x2d20d0: 0x8cc3b734  lw          $v1, -0x48CC($a2)
    ctx->pc = 0x2d20d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948660)));
label_2d20d4:
    // 0x2d20d4: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x2d20d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2d20d8:
    // 0x2d20d8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2d20d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2d20dc:
    // 0x2d20dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2d20e0:
    if (ctx->pc == 0x2D20E0u) {
        ctx->pc = 0x2D20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20DCu;
        // 0x2d20e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D20E4u;
        goto label_2d20e4;
    }
    ctx->pc = 0x2D20DCu;
    {
        const bool branch_taken_0x2d20dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D20DCu;
        // 0x2d20e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d20dc) {
            ctx->pc = 0x2D2104u;
            goto label_2d2104;
        }
    }
    ctx->pc = 0x2D20E4u;
label_2d20e4:
    // 0x2d20e4: 0x92630333  lbu         $v1, 0x333($s3)
    ctx->pc = 0x2d20e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 819)));
label_2d20e8:
    // 0x2d20e8: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x2d20e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2d20ec:
    // 0x2d20ec: 0x24a203e8  addiu       $v0, $a1, 0x3E8
    ctx->pc = 0x2d20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
label_2d20f0:
    // 0x2d20f0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2d20f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d20f4:
    // 0x2d20f4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2d20f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2d20f8:
    // 0x2d20f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d20f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d20fc:
    // 0x2d20fc: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x2d20fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_2d2100:
    // 0x2d2100: 0x8cc3b734  lw          $v1, -0x48CC($a2)
    ctx->pc = 0x2d2100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948660)));
label_2d2104:
    // 0x2d2104: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2d2104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2d2108:
    // 0x2d2108: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x2d2108u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2d210c:
    // 0x2d210c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2d210cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2d2110:
    // 0x2d2110: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2d2114:
    if (ctx->pc == 0x2D2114u) {
        ctx->pc = 0x2D2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2110u;
        // 0x2d2114: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2118u;
        goto label_2d2118;
    }
    ctx->pc = 0x2D2110u;
    {
        const bool branch_taken_0x2d2110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2110u;
        // 0x2d2114: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2110) {
            ctx->pc = 0x2D216Cu;
            goto label_2d216c;
        }
    }
    ctx->pc = 0x2D2118u;
label_2d2118:
    // 0x2d2118: 0x24050fa0  addiu       $a1, $zero, 0xFA0
    ctx->pc = 0x2d2118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_2d211c:
    // 0x2d211c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2d211cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2d2120:
    // 0x2d2120: 0xc0cd4fc  jal         func_3353F0
label_2d2124:
    if (ctx->pc == 0x2D2124u) {
        ctx->pc = 0x2D2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2120u;
        // 0x2d2124: 0x24061194  addiu       $a2, $zero, 0x1194 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2128u;
        goto label_2d2128;
    }
    ctx->pc = 0x2D2120u;
    SET_GPR_U32(ctx, 31, 0x2D2128u);
    ctx->pc = 0x2D2124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2120u;
    // 0x2d2124: 0x24061194  addiu       $a2, $zero, 0x1194 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2D2120u, 0x2D2128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2128u;
label_2d2128:
    // 0x2d2128: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d2128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2d212c:
    // 0x2d212c: 0x9243003a  lbu         $v1, 0x3A($s2)
    ctx->pc = 0x2d212cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
label_2d2130:
    // 0x2d2130: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2d2130u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_2d2134:
    // 0x2d2134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2138:
    // 0x2d2138: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_2d213c:
    if (ctx->pc == 0x2D213Cu) {
        ctx->pc = 0x2D213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2138u;
        // 0x2d213c: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2140u;
        goto label_2d2140;
    }
    ctx->pc = 0x2D2138u;
    {
        const bool branch_taken_0x2d2138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2138u;
        // 0x2d213c: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2138) {
            ctx->pc = 0x2D2170u;
            goto label_2d2170;
        }
    }
    ctx->pc = 0x2D2140u;
label_2d2140:
    // 0x2d2140: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d2140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2d2144:
    // 0x2d2144: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d2144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d2148:
    // 0x2d2148: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d2148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d214c:
    // 0x2d214c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2d214cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d2150:
    // 0x2d2150: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d2150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d2154:
    // 0x2d2154: 0x24050059  addiu       $a1, $zero, 0x59
    ctx->pc = 0x2d2154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_2d2158:
    // 0x2d2158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d2158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d215c:
    // 0x2d215c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d215cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2160:
    // 0x2d2160: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d2160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2164:
    // 0x2d2164: 0xc088178  jal         func_2205E0
label_2d2168:
    if (ctx->pc == 0x2D2168u) {
        ctx->pc = 0x2D2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2164u;
        // 0x2d2168: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D216Cu;
        goto label_2d216c;
    }
    ctx->pc = 0x2D2164u;
    SET_GPR_U32(ctx, 31, 0x2D216Cu);
    ctx->pc = 0x2D2168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2164u;
    // 0x2d2168: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D2164u, 0x2D216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D216Cu;
label_2d216c:
    // 0x2d216c: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x2d216cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_2d2170:
    // 0x2d2170: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d2170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d2174:
    // 0x2d2174: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2d2178:
    if (ctx->pc == 0x2D2178u) {
        ctx->pc = 0x2D2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2174u;
        // 0x2d2178: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D217Cu;
        goto label_2d217c;
    }
    ctx->pc = 0x2D2174u;
    {
        const bool branch_taken_0x2d2174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2174) {
            ctx->pc = 0x2D2178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2174u;
            // 0x2d2178: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D217Cu;
            goto label_2d217c;
        }
    }
    ctx->pc = 0x2D217Cu;
label_2d217c:
    // 0x2d217c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2d217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2d2180:
    // 0x2d2180: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2d2180u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2d2184:
    // 0x2d2184: 0x2010  mfhi        $a0
    ctx->pc = 0x2d2184u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2d2188:
    // 0x2d2188: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
label_2d218c:
    if (ctx->pc == 0x2D218Cu) {
        ctx->pc = 0x2D218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2188u;
        // 0x2d218c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2190u;
        goto label_2d2190;
    }
    ctx->pc = 0x2D2188u;
    {
        const bool branch_taken_0x2d2188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2188) {
            ctx->pc = 0x2D218Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2188u;
            // 0x2d218c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D21A8u;
            goto label_2d21a8;
        }
    }
    ctx->pc = 0x2D2190u;
label_2d2190:
    // 0x2d2190: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d2190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d2194:
    // 0x2d2194: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d2194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d2198:
    // 0x2d2198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d2198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d219c:
    // 0x2d219c: 0xc08c734  jal         func_231CD0
label_2d21a0:
    if (ctx->pc == 0x2D21A0u) {
        ctx->pc = 0x2D21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D219Cu;
        // 0x2d21a0: 0x240502ee  addiu       $a1, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D21A4u;
        goto label_2d21a4;
    }
    ctx->pc = 0x2D219Cu;
    SET_GPR_U32(ctx, 31, 0x2D21A4u);
    ctx->pc = 0x2D21A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D219Cu;
    // 0x2d21a0: 0x240502ee  addiu       $a1, $zero, 0x2EE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CD0u, 0x2D219Cu, 0x2D21A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21A4u;
label_2d21a4:
    // 0x2d21a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d21a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d21a8:
    // 0x2d21a8: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d21a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2d21ac:
    // 0x2d21ac: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2d21b0:
    if (ctx->pc == 0x2D21B0u) {
        ctx->pc = 0x2D21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21ACu;
        // 0x2d21b0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D21B4u;
        goto label_2d21b4;
    }
    ctx->pc = 0x2D21ACu;
    {
        const bool branch_taken_0x2d21ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21ACu;
        // 0x2d21b0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21ac) {
            ctx->pc = 0x2D21BCu;
            goto label_2d21bc;
        }
    }
    ctx->pc = 0x2D21B4u;
label_2d21b4:
    // 0x2d21b4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2d21b8:
    if (ctx->pc == 0x2D21B8u) {
        ctx->pc = 0x2D21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21B4u;
        // 0x2d21b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D21BCu;
        goto label_2d21bc;
    }
    ctx->pc = 0x2D21B4u;
    {
        const bool branch_taken_0x2d21b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21B4u;
        // 0x2d21b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21b4) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D21BCu;
label_2d21bc:
    // 0x2d21bc: 0x8c820284  lw          $v0, 0x284($a0)
    ctx->pc = 0x2d21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
label_2d21c0:
    // 0x2d21c0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_2d21c4:
    if (ctx->pc == 0x2D21C4u) {
        ctx->pc = 0x2D21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21C0u;
        // 0x2d21c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D21C8u;
        goto label_2d21c8;
    }
    ctx->pc = 0x2D21C0u;
    {
        const bool branch_taken_0x2d21c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d21c0) {
            ctx->pc = 0x2D21C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D21C0u;
            // 0x2d21c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D221Cu;
            goto label_2d221c;
        }
    }
    ctx->pc = 0x2D21C8u;
label_2d21c8:
    // 0x2d21c8: 0x92420038  lbu         $v0, 0x38($s2)
    ctx->pc = 0x2d21c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
label_2d21cc:
    // 0x2d21cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d21d0:
    // 0x2d21d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2d21d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d21d4:
    // 0x2d21d4: 0x2c63001e  sltiu       $v1, $v1, 0x1E
    ctx->pc = 0x2d21d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_2d21d8:
    // 0x2d21d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2d21dc:
    if (ctx->pc == 0x2D21DCu) {
        ctx->pc = 0x2D21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21D8u;
        // 0x2d21dc: 0xa2420038  sb          $v0, 0x38($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 56), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D21E0u;
        goto label_2d21e0;
    }
    ctx->pc = 0x2D21D8u;
    {
        const bool branch_taken_0x2d21d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21D8u;
        // 0x2d21dc: 0xa2420038  sb          $v0, 0x38($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 56), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21d8) {
            ctx->pc = 0x2D21F0u;
            goto label_2d21f0;
        }
    }
    ctx->pc = 0x2D21E0u;
label_2d21e0:
    // 0x2d21e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d21e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2d21e4:
    // 0x2d21e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d21e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d21e8:
    // 0x2d21e8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_2d21ec:
    if (ctx->pc == 0x2D21ECu) {
        ctx->pc = 0x2D21ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21E8u;
        // 0x2d21ec: 0xa2430036  sb          $v1, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D21F0u;
        goto label_2d21f0;
    }
    ctx->pc = 0x2D21E8u;
    {
        const bool branch_taken_0x2d21e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D21ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21E8u;
        // 0x2d21ec: 0xa2430036  sb          $v1, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d21e8) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D21F0u;
label_2d21f0:
    // 0x2d21f0: 0x92440038  lbu         $a0, 0x38($s2)
    ctx->pc = 0x2d21f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
label_2d21f4:
    // 0x2d21f4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2d21f8:
    // 0x2d21f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2d21fc:
    if (ctx->pc == 0x2D21FCu) {
        ctx->pc = 0x2D21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D21F8u;
        // 0x2d21fc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2200u;
        goto label_2d2200;
    }
    ctx->pc = 0x2D21F8u;
    {
        const bool branch_taken_0x2d21f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d21f8) {
            ctx->pc = 0x2D21FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D21F8u;
            // 0x2d21fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2200u;
            goto label_2d2200;
        }
    }
    ctx->pc = 0x2D2200u;
label_2d2200:
    // 0x2d2200: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2d2200u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2d2204:
    // 0x2d2204: 0x1810  mfhi        $v1
    ctx->pc = 0x2d2204u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2d2208:
    // 0x2d2208: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_2d220c:
    if (ctx->pc == 0x2D220Cu) {
        ctx->pc = 0x2D220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2208u;
        // 0x2d220c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2210u;
        goto label_2d2210;
    }
    ctx->pc = 0x2D2208u;
    {
        const bool branch_taken_0x2d2208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2208u;
        // 0x2d220c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2208) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D2210u;
label_2d2210:
    // 0x2d2210: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d2210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d2214:
    // 0x2d2214: 0x10000033  b           . + 4 + (0x33 << 2)
label_2d2218:
    if (ctx->pc == 0x2D2218u) {
        ctx->pc = 0x2D2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2214u;
        // 0x2d2218: 0xac400284  sw          $zero, 0x284($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D221Cu;
        goto label_2d221c;
    }
    ctx->pc = 0x2D2214u;
    {
        const bool branch_taken_0x2d2214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2214u;
        // 0x2d2218: 0xac400284  sw          $zero, 0x284($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2214) {
            ctx->pc = 0x2D22E4u;
            goto label_2d22e4;
        }
    }
    ctx->pc = 0x2D221Cu;
label_2d221c:
    // 0x2d221c: 0xc0b462e  jal         func_2D18B8
label_2d2220:
    if (ctx->pc == 0x2D2220u) {
        ctx->pc = 0x2D2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D221Cu;
        // 0x2d2220: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2224u;
        goto label_2d2224;
    }
    ctx->pc = 0x2D221Cu;
    SET_GPR_U32(ctx, 31, 0x2D2224u);
    ctx->pc = 0x2D2220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D221Cu;
    // 0x2d2220: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18B8u, 0x2D221Cu, 0x2D2224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2224u;
label_2d2224:
    // 0x2d2224: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d2224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d2228:
    // 0x2d2228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d222c:
    // 0x2d222c: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
label_2d2230:
    if (ctx->pc == 0x2D2230u) {
        ctx->pc = 0x2D2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D222Cu;
        // 0x2d2230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2234u;
        goto label_2d2234;
    }
    ctx->pc = 0x2D222Cu;
    {
        const bool branch_taken_0x2d222c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D222Cu;
        // 0x2d2230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d222c) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D2234u;
label_2d2234:
    // 0x2d2234: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d2234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d2238:
    // 0x2d2238: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2d2238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2d223c:
    // 0x2d223c: 0x2882a  slt         $s1, $zero, $v0
    ctx->pc = 0x2d223cu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2d2240:
    // 0x2d2240: 0x16230019  bne         $s1, $v1, . + 4 + (0x19 << 2)
label_2d2244:
    if (ctx->pc == 0x2D2244u) {
        ctx->pc = 0x2D2248u;
        goto label_2d2248;
    }
    ctx->pc = 0x2D2240u;
    {
        const bool branch_taken_0x2d2240 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d2240) {
            ctx->pc = 0x2D22A8u;
            goto label_2d22a8;
        }
    }
    ctx->pc = 0x2D2248u;
label_2d2248:
    // 0x2d2248: 0xc0a36c2  jal         func_28DB08
label_2d224c:
    if (ctx->pc == 0x2D224Cu) {
        ctx->pc = 0x2D2250u;
        goto label_2d2250;
    }
    ctx->pc = 0x2D2248u;
    SET_GPR_U32(ctx, 31, 0x2D2250u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2D2248u, 0x2D2250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2250u;
label_2d2250:
    // 0x2d2250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d2254:
    // 0x2d2254: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d2254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2d2258:
    // 0x2d2258: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2d2258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2d225c:
    // 0x2d225c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d225cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2d2260:
    // 0x2d2260: 0x40f809  jalr        $v0
label_2d2264:
    if (ctx->pc == 0x2D2264u) {
        ctx->pc = 0x2D2264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2260u;
        // 0x2d2264: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2268u;
        goto label_2d2268;
    }
    ctx->pc = 0x2D2260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D2268u);
        ctx->pc = 0x2D2264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2260u;
        // 0x2d2264: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2260u, 0x2D2268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D2268u;
label_2d2268:
    // 0x2d2268: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
label_2d226c:
    if (ctx->pc == 0x2D226Cu) {
        ctx->pc = 0x2D226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2268u;
        // 0x2d226c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2270u;
        goto label_2d2270;
    }
    ctx->pc = 0x2D2268u;
    {
        const bool branch_taken_0x2d2268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2D226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2268u;
        // 0x2d226c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2268) {
            ctx->pc = 0x2D228Cu;
            goto label_2d228c;
        }
    }
    ctx->pc = 0x2D2270u;
label_2d2270:
    // 0x2d2270: 0xc0beefa  jal         func_2FBBE8
label_2d2274:
    if (ctx->pc == 0x2D2274u) {
        ctx->pc = 0x2D2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2270u;
        // 0x2d2274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2278u;
        goto label_2d2278;
    }
    ctx->pc = 0x2D2270u;
    SET_GPR_U32(ctx, 31, 0x2D2278u);
    ctx->pc = 0x2D2274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2270u;
    // 0x2d2274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBE8u, 0x2D2270u, 0x2D2278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2278u;
label_2d2278:
    // 0x2d2278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d227c:
    // 0x2d227c: 0xc0bf0fa  jal         func_2FC3E8
label_2d2280:
    if (ctx->pc == 0x2D2280u) {
        ctx->pc = 0x2D2280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D227Cu;
        // 0x2d2280: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2284u;
        goto label_2d2284;
    }
    ctx->pc = 0x2D227Cu;
    SET_GPR_U32(ctx, 31, 0x2D2284u);
    ctx->pc = 0x2D2280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D227Cu;
    // 0x2d2280: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3E8u, 0x2D227Cu, 0x2D2284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2284u;
label_2d2284:
    // 0x2d2284: 0x10000018  b           . + 4 + (0x18 << 2)
label_2d2288:
    if (ctx->pc == 0x2D2288u) {
        ctx->pc = 0x2D2288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2284u;
        // 0x2d2288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D228Cu;
        goto label_2d228c;
    }
    ctx->pc = 0x2D2284u;
    {
        const bool branch_taken_0x2d2284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2284u;
        // 0x2d2288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2284) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D228Cu;
label_2d228c:
    // 0x2d228c: 0xc0a36c8  jal         func_28DB20
label_2d2290:
    if (ctx->pc == 0x2D2290u) {
        ctx->pc = 0x2D2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D228Cu;
        // 0x2d2290: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2294u;
        goto label_2d2294;
    }
    ctx->pc = 0x2D228Cu;
    SET_GPR_U32(ctx, 31, 0x2D2294u);
    ctx->pc = 0x2D2290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D228Cu;
    // 0x2d2290: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2D228Cu, 0x2D2294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2294u;
label_2d2294:
    // 0x2d2294: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d2294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d2298:
    // 0x2d2298: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d2298u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2d229c:
    // 0x2d229c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2d229cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2d22a0:
    // 0x2d22a0: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
label_2d22a4:
    if (ctx->pc == 0x2D22A4u) {
        ctx->pc = 0x2D22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22A0u;
        // 0x2d22a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D22A8u;
        goto label_2d22a8;
    }
    ctx->pc = 0x2D22A0u;
    {
        const bool branch_taken_0x2d22a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2D22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22A0u;
        // 0x2d22a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d22a0) {
            ctx->pc = 0x2D22E8u;
            goto label_2d22e8;
        }
    }
    ctx->pc = 0x2D22A8u;
label_2d22a8:
    // 0x2d22a8: 0xc0a367c  jal         func_28D9F0
label_2d22ac:
    if (ctx->pc == 0x2D22ACu) {
        ctx->pc = 0x2D22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22A8u;
        // 0x2d22ac: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D22B0u;
        goto label_2d22b0;
    }
    ctx->pc = 0x2D22A8u;
    SET_GPR_U32(ctx, 31, 0x2D22B0u);
    ctx->pc = 0x2D22ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D22A8u;
    // 0x2d22ac: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D22A8u, 0x2D22B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D22B0u;
label_2d22b0:
    // 0x2d22b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d22b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d22b4:
    // 0x2d22b4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2d22b8:
    if (ctx->pc == 0x2D22B8u) {
        ctx->pc = 0x2D22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22B4u;
        // 0x2d22b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D22BCu;
        goto label_2d22bc;
    }
    ctx->pc = 0x2D22B4u;
    {
        const bool branch_taken_0x2d22b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22B4u;
        // 0x2d22b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d22b4) {
            ctx->pc = 0x2D22E4u;
            goto label_2d22e4;
        }
    }
    ctx->pc = 0x2D22BCu;
label_2d22bc:
    // 0x2d22bc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d22bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d22c0:
    // 0x2d22c0: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d22c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d22c4:
    // 0x2d22c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d22c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d22c8:
    // 0x2d22c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d22c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2d22cc:
    // 0x2d22cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d22ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d22d0:
    // 0x2d22d0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2d22d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d22d4:
    // 0x2d22d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d22d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d22d8:
    // 0x2d22d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d22d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d22dc:
    // 0x2d22dc: 0xc0bee7a  jal         func_2FB9E8
label_2d22e0:
    if (ctx->pc == 0x2D22E0u) {
        ctx->pc = 0x2D22E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22DCu;
        // 0x2d22e0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D22E4u;
        goto label_2d22e4;
    }
    ctx->pc = 0x2D22DCu;
    SET_GPR_U32(ctx, 31, 0x2D22E4u);
    ctx->pc = 0x2D22E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D22DCu;
    // 0x2d22e0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D22DCu, 0x2D22E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D22E4u;
label_2d22e4:
    // 0x2d22e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d22e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d22e8:
    // 0x2d22e8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2d22e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2d22ec:
    // 0x2d22ec: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2d22ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2d22f0:
    // 0x2d22f0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2d22f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2d22f4:
    // 0x2d22f4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2d22f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2d22f8:
    // 0x2d22f8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2d22f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2d22fc:
    // 0x2d22fc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2d22fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d2300:
    // 0x2d2300: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2d2300u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d2304:
    // 0x2d2304: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2d2304u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d2308:
    // 0x2d2308: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2d2308u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d230c:
    // 0x2d230c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d230cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d2310:
    // 0x2d2310: 0x3e00008  jr          $ra
label_2d2314:
    if (ctx->pc == 0x2D2314u) {
        ctx->pc = 0x2D2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2310u;
        // 0x2d2314: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2318u;
        goto label_fallthrough_0x2d2310;
    }
    ctx->pc = 0x2D2310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2310u;
        // 0x2d2314: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d2310:
    ctx->pc = 0x2D2318u;
}
