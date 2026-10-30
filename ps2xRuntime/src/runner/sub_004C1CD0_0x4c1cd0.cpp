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

// Function: sub_004C1CD0
// Address: 0x4c1cd0 - 0x4c2de8
void sub_004C1CD0_0x4c1cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C1CD0_0x4c1cd0");
#endif

    switch (ctx->pc) {
        case 0x4c1cd0u: goto label_4c1cd0;
        case 0x4c1cd4u: goto label_4c1cd4;
        case 0x4c1cd8u: goto label_4c1cd8;
        case 0x4c1cdcu: goto label_4c1cdc;
        case 0x4c1ce0u: goto label_4c1ce0;
        case 0x4c1ce4u: goto label_4c1ce4;
        case 0x4c1ce8u: goto label_4c1ce8;
        case 0x4c1cecu: goto label_4c1cec;
        case 0x4c1cf0u: goto label_4c1cf0;
        case 0x4c1cf4u: goto label_4c1cf4;
        case 0x4c1cf8u: goto label_4c1cf8;
        case 0x4c1cfcu: goto label_4c1cfc;
        case 0x4c1d00u: goto label_4c1d00;
        case 0x4c1d04u: goto label_4c1d04;
        case 0x4c1d08u: goto label_4c1d08;
        case 0x4c1d0cu: goto label_4c1d0c;
        case 0x4c1d10u: goto label_4c1d10;
        case 0x4c1d14u: goto label_4c1d14;
        case 0x4c1d18u: goto label_4c1d18;
        case 0x4c1d1cu: goto label_4c1d1c;
        case 0x4c1d20u: goto label_4c1d20;
        case 0x4c1d24u: goto label_4c1d24;
        case 0x4c1d28u: goto label_4c1d28;
        case 0x4c1d2cu: goto label_4c1d2c;
        case 0x4c1d30u: goto label_4c1d30;
        case 0x4c1d34u: goto label_4c1d34;
        case 0x4c1d38u: goto label_4c1d38;
        case 0x4c1d3cu: goto label_4c1d3c;
        case 0x4c1d40u: goto label_4c1d40;
        case 0x4c1d44u: goto label_4c1d44;
        case 0x4c1d48u: goto label_4c1d48;
        case 0x4c1d4cu: goto label_4c1d4c;
        case 0x4c1d50u: goto label_4c1d50;
        case 0x4c1d54u: goto label_4c1d54;
        case 0x4c1d58u: goto label_4c1d58;
        case 0x4c1d5cu: goto label_4c1d5c;
        case 0x4c1d60u: goto label_4c1d60;
        case 0x4c1d64u: goto label_4c1d64;
        case 0x4c1d68u: goto label_4c1d68;
        case 0x4c1d6cu: goto label_4c1d6c;
        case 0x4c1d70u: goto label_4c1d70;
        case 0x4c1d74u: goto label_4c1d74;
        case 0x4c1d78u: goto label_4c1d78;
        case 0x4c1d7cu: goto label_4c1d7c;
        case 0x4c1d80u: goto label_4c1d80;
        case 0x4c1d84u: goto label_4c1d84;
        case 0x4c1d88u: goto label_4c1d88;
        case 0x4c1d8cu: goto label_4c1d8c;
        case 0x4c1d90u: goto label_4c1d90;
        case 0x4c1d94u: goto label_4c1d94;
        case 0x4c1d98u: goto label_4c1d98;
        case 0x4c1d9cu: goto label_4c1d9c;
        case 0x4c1da0u: goto label_4c1da0;
        case 0x4c1da4u: goto label_4c1da4;
        case 0x4c1da8u: goto label_4c1da8;
        case 0x4c1dacu: goto label_4c1dac;
        case 0x4c1db0u: goto label_4c1db0;
        case 0x4c1db4u: goto label_4c1db4;
        case 0x4c1db8u: goto label_4c1db8;
        case 0x4c1dbcu: goto label_4c1dbc;
        case 0x4c1dc0u: goto label_4c1dc0;
        case 0x4c1dc4u: goto label_4c1dc4;
        case 0x4c1dc8u: goto label_4c1dc8;
        case 0x4c1dccu: goto label_4c1dcc;
        case 0x4c1dd0u: goto label_4c1dd0;
        case 0x4c1dd4u: goto label_4c1dd4;
        case 0x4c1dd8u: goto label_4c1dd8;
        case 0x4c1ddcu: goto label_4c1ddc;
        case 0x4c1de0u: goto label_4c1de0;
        case 0x4c1de4u: goto label_4c1de4;
        case 0x4c1de8u: goto label_4c1de8;
        case 0x4c1decu: goto label_4c1dec;
        case 0x4c1df0u: goto label_4c1df0;
        case 0x4c1df4u: goto label_4c1df4;
        case 0x4c1df8u: goto label_4c1df8;
        case 0x4c1dfcu: goto label_4c1dfc;
        case 0x4c1e00u: goto label_4c1e00;
        case 0x4c1e04u: goto label_4c1e04;
        case 0x4c1e08u: goto label_4c1e08;
        case 0x4c1e0cu: goto label_4c1e0c;
        case 0x4c1e10u: goto label_4c1e10;
        case 0x4c1e14u: goto label_4c1e14;
        case 0x4c1e18u: goto label_4c1e18;
        case 0x4c1e1cu: goto label_4c1e1c;
        case 0x4c1e20u: goto label_4c1e20;
        case 0x4c1e24u: goto label_4c1e24;
        case 0x4c1e28u: goto label_4c1e28;
        case 0x4c1e2cu: goto label_4c1e2c;
        case 0x4c1e30u: goto label_4c1e30;
        case 0x4c1e34u: goto label_4c1e34;
        case 0x4c1e38u: goto label_4c1e38;
        case 0x4c1e3cu: goto label_4c1e3c;
        case 0x4c1e40u: goto label_4c1e40;
        case 0x4c1e44u: goto label_4c1e44;
        case 0x4c1e48u: goto label_4c1e48;
        case 0x4c1e4cu: goto label_4c1e4c;
        case 0x4c1e50u: goto label_4c1e50;
        case 0x4c1e54u: goto label_4c1e54;
        case 0x4c1e58u: goto label_4c1e58;
        case 0x4c1e5cu: goto label_4c1e5c;
        case 0x4c1e60u: goto label_4c1e60;
        case 0x4c1e64u: goto label_4c1e64;
        case 0x4c1e68u: goto label_4c1e68;
        case 0x4c1e6cu: goto label_4c1e6c;
        case 0x4c1e70u: goto label_4c1e70;
        case 0x4c1e74u: goto label_4c1e74;
        case 0x4c1e78u: goto label_4c1e78;
        case 0x4c1e7cu: goto label_4c1e7c;
        case 0x4c1e80u: goto label_4c1e80;
        case 0x4c1e84u: goto label_4c1e84;
        case 0x4c1e88u: goto label_4c1e88;
        case 0x4c1e8cu: goto label_4c1e8c;
        case 0x4c1e90u: goto label_4c1e90;
        case 0x4c1e94u: goto label_4c1e94;
        case 0x4c1e98u: goto label_4c1e98;
        case 0x4c1e9cu: goto label_4c1e9c;
        case 0x4c1ea0u: goto label_4c1ea0;
        case 0x4c1ea4u: goto label_4c1ea4;
        case 0x4c1ea8u: goto label_4c1ea8;
        case 0x4c1eacu: goto label_4c1eac;
        case 0x4c1eb0u: goto label_4c1eb0;
        case 0x4c1eb4u: goto label_4c1eb4;
        case 0x4c1eb8u: goto label_4c1eb8;
        case 0x4c1ebcu: goto label_4c1ebc;
        case 0x4c1ec0u: goto label_4c1ec0;
        case 0x4c1ec4u: goto label_4c1ec4;
        case 0x4c1ec8u: goto label_4c1ec8;
        case 0x4c1eccu: goto label_4c1ecc;
        case 0x4c1ed0u: goto label_4c1ed0;
        case 0x4c1ed4u: goto label_4c1ed4;
        case 0x4c1ed8u: goto label_4c1ed8;
        case 0x4c1edcu: goto label_4c1edc;
        case 0x4c1ee0u: goto label_4c1ee0;
        case 0x4c1ee4u: goto label_4c1ee4;
        case 0x4c1ee8u: goto label_4c1ee8;
        case 0x4c1eecu: goto label_4c1eec;
        case 0x4c1ef0u: goto label_4c1ef0;
        case 0x4c1ef4u: goto label_4c1ef4;
        case 0x4c1ef8u: goto label_4c1ef8;
        case 0x4c1efcu: goto label_4c1efc;
        case 0x4c1f00u: goto label_4c1f00;
        case 0x4c1f04u: goto label_4c1f04;
        case 0x4c1f08u: goto label_4c1f08;
        case 0x4c1f0cu: goto label_4c1f0c;
        case 0x4c1f10u: goto label_4c1f10;
        case 0x4c1f14u: goto label_4c1f14;
        case 0x4c1f18u: goto label_4c1f18;
        case 0x4c1f1cu: goto label_4c1f1c;
        case 0x4c1f20u: goto label_4c1f20;
        case 0x4c1f24u: goto label_4c1f24;
        case 0x4c1f28u: goto label_4c1f28;
        case 0x4c1f2cu: goto label_4c1f2c;
        case 0x4c1f30u: goto label_4c1f30;
        case 0x4c1f34u: goto label_4c1f34;
        case 0x4c1f38u: goto label_4c1f38;
        case 0x4c1f3cu: goto label_4c1f3c;
        case 0x4c1f40u: goto label_4c1f40;
        case 0x4c1f44u: goto label_4c1f44;
        case 0x4c1f48u: goto label_4c1f48;
        case 0x4c1f4cu: goto label_4c1f4c;
        case 0x4c1f50u: goto label_4c1f50;
        case 0x4c1f54u: goto label_4c1f54;
        case 0x4c1f58u: goto label_4c1f58;
        case 0x4c1f5cu: goto label_4c1f5c;
        case 0x4c1f60u: goto label_4c1f60;
        case 0x4c1f64u: goto label_4c1f64;
        case 0x4c1f68u: goto label_4c1f68;
        case 0x4c1f6cu: goto label_4c1f6c;
        case 0x4c1f70u: goto label_4c1f70;
        case 0x4c1f74u: goto label_4c1f74;
        case 0x4c1f78u: goto label_4c1f78;
        case 0x4c1f7cu: goto label_4c1f7c;
        case 0x4c1f80u: goto label_4c1f80;
        case 0x4c1f84u: goto label_4c1f84;
        case 0x4c1f88u: goto label_4c1f88;
        case 0x4c1f8cu: goto label_4c1f8c;
        case 0x4c1f90u: goto label_4c1f90;
        case 0x4c1f94u: goto label_4c1f94;
        case 0x4c1f98u: goto label_4c1f98;
        case 0x4c1f9cu: goto label_4c1f9c;
        case 0x4c1fa0u: goto label_4c1fa0;
        case 0x4c1fa4u: goto label_4c1fa4;
        case 0x4c1fa8u: goto label_4c1fa8;
        case 0x4c1facu: goto label_4c1fac;
        case 0x4c1fb0u: goto label_4c1fb0;
        case 0x4c1fb4u: goto label_4c1fb4;
        case 0x4c1fb8u: goto label_4c1fb8;
        case 0x4c1fbcu: goto label_4c1fbc;
        case 0x4c1fc0u: goto label_4c1fc0;
        case 0x4c1fc4u: goto label_4c1fc4;
        case 0x4c1fc8u: goto label_4c1fc8;
        case 0x4c1fccu: goto label_4c1fcc;
        case 0x4c1fd0u: goto label_4c1fd0;
        case 0x4c1fd4u: goto label_4c1fd4;
        case 0x4c1fd8u: goto label_4c1fd8;
        case 0x4c1fdcu: goto label_4c1fdc;
        case 0x4c1fe0u: goto label_4c1fe0;
        case 0x4c1fe4u: goto label_4c1fe4;
        case 0x4c1fe8u: goto label_4c1fe8;
        case 0x4c1fecu: goto label_4c1fec;
        case 0x4c1ff0u: goto label_4c1ff0;
        case 0x4c1ff4u: goto label_4c1ff4;
        case 0x4c1ff8u: goto label_4c1ff8;
        case 0x4c1ffcu: goto label_4c1ffc;
        case 0x4c2000u: goto label_4c2000;
        case 0x4c2004u: goto label_4c2004;
        case 0x4c2008u: goto label_4c2008;
        case 0x4c200cu: goto label_4c200c;
        case 0x4c2010u: goto label_4c2010;
        case 0x4c2014u: goto label_4c2014;
        case 0x4c2018u: goto label_4c2018;
        case 0x4c201cu: goto label_4c201c;
        case 0x4c2020u: goto label_4c2020;
        case 0x4c2024u: goto label_4c2024;
        case 0x4c2028u: goto label_4c2028;
        case 0x4c202cu: goto label_4c202c;
        case 0x4c2030u: goto label_4c2030;
        case 0x4c2034u: goto label_4c2034;
        case 0x4c2038u: goto label_4c2038;
        case 0x4c203cu: goto label_4c203c;
        case 0x4c2040u: goto label_4c2040;
        case 0x4c2044u: goto label_4c2044;
        case 0x4c2048u: goto label_4c2048;
        case 0x4c204cu: goto label_4c204c;
        case 0x4c2050u: goto label_4c2050;
        case 0x4c2054u: goto label_4c2054;
        case 0x4c2058u: goto label_4c2058;
        case 0x4c205cu: goto label_4c205c;
        case 0x4c2060u: goto label_4c2060;
        case 0x4c2064u: goto label_4c2064;
        case 0x4c2068u: goto label_4c2068;
        case 0x4c206cu: goto label_4c206c;
        case 0x4c2070u: goto label_4c2070;
        case 0x4c2074u: goto label_4c2074;
        case 0x4c2078u: goto label_4c2078;
        case 0x4c207cu: goto label_4c207c;
        case 0x4c2080u: goto label_4c2080;
        case 0x4c2084u: goto label_4c2084;
        case 0x4c2088u: goto label_4c2088;
        case 0x4c208cu: goto label_4c208c;
        case 0x4c2090u: goto label_4c2090;
        case 0x4c2094u: goto label_4c2094;
        case 0x4c2098u: goto label_4c2098;
        case 0x4c209cu: goto label_4c209c;
        case 0x4c20a0u: goto label_4c20a0;
        case 0x4c20a4u: goto label_4c20a4;
        case 0x4c20a8u: goto label_4c20a8;
        case 0x4c20acu: goto label_4c20ac;
        case 0x4c20b0u: goto label_4c20b0;
        case 0x4c20b4u: goto label_4c20b4;
        case 0x4c20b8u: goto label_4c20b8;
        case 0x4c20bcu: goto label_4c20bc;
        case 0x4c20c0u: goto label_4c20c0;
        case 0x4c20c4u: goto label_4c20c4;
        case 0x4c20c8u: goto label_4c20c8;
        case 0x4c20ccu: goto label_4c20cc;
        case 0x4c20d0u: goto label_4c20d0;
        case 0x4c20d4u: goto label_4c20d4;
        case 0x4c20d8u: goto label_4c20d8;
        case 0x4c20dcu: goto label_4c20dc;
        case 0x4c20e0u: goto label_4c20e0;
        case 0x4c20e4u: goto label_4c20e4;
        case 0x4c20e8u: goto label_4c20e8;
        case 0x4c20ecu: goto label_4c20ec;
        case 0x4c20f0u: goto label_4c20f0;
        case 0x4c20f4u: goto label_4c20f4;
        case 0x4c20f8u: goto label_4c20f8;
        case 0x4c20fcu: goto label_4c20fc;
        case 0x4c2100u: goto label_4c2100;
        case 0x4c2104u: goto label_4c2104;
        case 0x4c2108u: goto label_4c2108;
        case 0x4c210cu: goto label_4c210c;
        case 0x4c2110u: goto label_4c2110;
        case 0x4c2114u: goto label_4c2114;
        case 0x4c2118u: goto label_4c2118;
        case 0x4c211cu: goto label_4c211c;
        case 0x4c2120u: goto label_4c2120;
        case 0x4c2124u: goto label_4c2124;
        case 0x4c2128u: goto label_4c2128;
        case 0x4c212cu: goto label_4c212c;
        case 0x4c2130u: goto label_4c2130;
        case 0x4c2134u: goto label_4c2134;
        case 0x4c2138u: goto label_4c2138;
        case 0x4c213cu: goto label_4c213c;
        case 0x4c2140u: goto label_4c2140;
        case 0x4c2144u: goto label_4c2144;
        case 0x4c2148u: goto label_4c2148;
        case 0x4c214cu: goto label_4c214c;
        case 0x4c2150u: goto label_4c2150;
        case 0x4c2154u: goto label_4c2154;
        case 0x4c2158u: goto label_4c2158;
        case 0x4c215cu: goto label_4c215c;
        case 0x4c2160u: goto label_4c2160;
        case 0x4c2164u: goto label_4c2164;
        case 0x4c2168u: goto label_4c2168;
        case 0x4c216cu: goto label_4c216c;
        case 0x4c2170u: goto label_4c2170;
        case 0x4c2174u: goto label_4c2174;
        case 0x4c2178u: goto label_4c2178;
        case 0x4c217cu: goto label_4c217c;
        case 0x4c2180u: goto label_4c2180;
        case 0x4c2184u: goto label_4c2184;
        case 0x4c2188u: goto label_4c2188;
        case 0x4c218cu: goto label_4c218c;
        case 0x4c2190u: goto label_4c2190;
        case 0x4c2194u: goto label_4c2194;
        case 0x4c2198u: goto label_4c2198;
        case 0x4c219cu: goto label_4c219c;
        case 0x4c21a0u: goto label_4c21a0;
        case 0x4c21a4u: goto label_4c21a4;
        case 0x4c21a8u: goto label_4c21a8;
        case 0x4c21acu: goto label_4c21ac;
        case 0x4c21b0u: goto label_4c21b0;
        case 0x4c21b4u: goto label_4c21b4;
        case 0x4c21b8u: goto label_4c21b8;
        case 0x4c21bcu: goto label_4c21bc;
        case 0x4c21c0u: goto label_4c21c0;
        case 0x4c21c4u: goto label_4c21c4;
        case 0x4c21c8u: goto label_4c21c8;
        case 0x4c21ccu: goto label_4c21cc;
        case 0x4c21d0u: goto label_4c21d0;
        case 0x4c21d4u: goto label_4c21d4;
        case 0x4c21d8u: goto label_4c21d8;
        case 0x4c21dcu: goto label_4c21dc;
        case 0x4c21e0u: goto label_4c21e0;
        case 0x4c21e4u: goto label_4c21e4;
        case 0x4c21e8u: goto label_4c21e8;
        case 0x4c21ecu: goto label_4c21ec;
        case 0x4c21f0u: goto label_4c21f0;
        case 0x4c21f4u: goto label_4c21f4;
        case 0x4c21f8u: goto label_4c21f8;
        case 0x4c21fcu: goto label_4c21fc;
        case 0x4c2200u: goto label_4c2200;
        case 0x4c2204u: goto label_4c2204;
        case 0x4c2208u: goto label_4c2208;
        case 0x4c220cu: goto label_4c220c;
        case 0x4c2210u: goto label_4c2210;
        case 0x4c2214u: goto label_4c2214;
        case 0x4c2218u: goto label_4c2218;
        case 0x4c221cu: goto label_4c221c;
        case 0x4c2220u: goto label_4c2220;
        case 0x4c2224u: goto label_4c2224;
        case 0x4c2228u: goto label_4c2228;
        case 0x4c222cu: goto label_4c222c;
        case 0x4c2230u: goto label_4c2230;
        case 0x4c2234u: goto label_4c2234;
        case 0x4c2238u: goto label_4c2238;
        case 0x4c223cu: goto label_4c223c;
        case 0x4c2240u: goto label_4c2240;
        case 0x4c2244u: goto label_4c2244;
        case 0x4c2248u: goto label_4c2248;
        case 0x4c224cu: goto label_4c224c;
        case 0x4c2250u: goto label_4c2250;
        case 0x4c2254u: goto label_4c2254;
        case 0x4c2258u: goto label_4c2258;
        case 0x4c225cu: goto label_4c225c;
        case 0x4c2260u: goto label_4c2260;
        case 0x4c2264u: goto label_4c2264;
        case 0x4c2268u: goto label_4c2268;
        case 0x4c226cu: goto label_4c226c;
        case 0x4c2270u: goto label_4c2270;
        case 0x4c2274u: goto label_4c2274;
        case 0x4c2278u: goto label_4c2278;
        case 0x4c227cu: goto label_4c227c;
        case 0x4c2280u: goto label_4c2280;
        case 0x4c2284u: goto label_4c2284;
        case 0x4c2288u: goto label_4c2288;
        case 0x4c228cu: goto label_4c228c;
        case 0x4c2290u: goto label_4c2290;
        case 0x4c2294u: goto label_4c2294;
        case 0x4c2298u: goto label_4c2298;
        case 0x4c229cu: goto label_4c229c;
        case 0x4c22a0u: goto label_4c22a0;
        case 0x4c22a4u: goto label_4c22a4;
        case 0x4c22a8u: goto label_4c22a8;
        case 0x4c22acu: goto label_4c22ac;
        case 0x4c22b0u: goto label_4c22b0;
        case 0x4c22b4u: goto label_4c22b4;
        case 0x4c22b8u: goto label_4c22b8;
        case 0x4c22bcu: goto label_4c22bc;
        case 0x4c22c0u: goto label_4c22c0;
        case 0x4c22c4u: goto label_4c22c4;
        case 0x4c22c8u: goto label_4c22c8;
        case 0x4c22ccu: goto label_4c22cc;
        case 0x4c22d0u: goto label_4c22d0;
        case 0x4c22d4u: goto label_4c22d4;
        case 0x4c22d8u: goto label_4c22d8;
        case 0x4c22dcu: goto label_4c22dc;
        case 0x4c22e0u: goto label_4c22e0;
        case 0x4c22e4u: goto label_4c22e4;
        case 0x4c22e8u: goto label_4c22e8;
        case 0x4c22ecu: goto label_4c22ec;
        case 0x4c22f0u: goto label_4c22f0;
        case 0x4c22f4u: goto label_4c22f4;
        case 0x4c22f8u: goto label_4c22f8;
        case 0x4c22fcu: goto label_4c22fc;
        case 0x4c2300u: goto label_4c2300;
        case 0x4c2304u: goto label_4c2304;
        case 0x4c2308u: goto label_4c2308;
        case 0x4c230cu: goto label_4c230c;
        case 0x4c2310u: goto label_4c2310;
        case 0x4c2314u: goto label_4c2314;
        case 0x4c2318u: goto label_4c2318;
        case 0x4c231cu: goto label_4c231c;
        case 0x4c2320u: goto label_4c2320;
        case 0x4c2324u: goto label_4c2324;
        case 0x4c2328u: goto label_4c2328;
        case 0x4c232cu: goto label_4c232c;
        case 0x4c2330u: goto label_4c2330;
        case 0x4c2334u: goto label_4c2334;
        case 0x4c2338u: goto label_4c2338;
        case 0x4c233cu: goto label_4c233c;
        case 0x4c2340u: goto label_4c2340;
        case 0x4c2344u: goto label_4c2344;
        case 0x4c2348u: goto label_4c2348;
        case 0x4c234cu: goto label_4c234c;
        case 0x4c2350u: goto label_4c2350;
        case 0x4c2354u: goto label_4c2354;
        case 0x4c2358u: goto label_4c2358;
        case 0x4c235cu: goto label_4c235c;
        case 0x4c2360u: goto label_4c2360;
        case 0x4c2364u: goto label_4c2364;
        case 0x4c2368u: goto label_4c2368;
        case 0x4c236cu: goto label_4c236c;
        case 0x4c2370u: goto label_4c2370;
        case 0x4c2374u: goto label_4c2374;
        case 0x4c2378u: goto label_4c2378;
        case 0x4c237cu: goto label_4c237c;
        case 0x4c2380u: goto label_4c2380;
        case 0x4c2384u: goto label_4c2384;
        case 0x4c2388u: goto label_4c2388;
        case 0x4c238cu: goto label_4c238c;
        case 0x4c2390u: goto label_4c2390;
        case 0x4c2394u: goto label_4c2394;
        case 0x4c2398u: goto label_4c2398;
        case 0x4c239cu: goto label_4c239c;
        case 0x4c23a0u: goto label_4c23a0;
        case 0x4c23a4u: goto label_4c23a4;
        case 0x4c23a8u: goto label_4c23a8;
        case 0x4c23acu: goto label_4c23ac;
        case 0x4c23b0u: goto label_4c23b0;
        case 0x4c23b4u: goto label_4c23b4;
        case 0x4c23b8u: goto label_4c23b8;
        case 0x4c23bcu: goto label_4c23bc;
        case 0x4c23c0u: goto label_4c23c0;
        case 0x4c23c4u: goto label_4c23c4;
        case 0x4c23c8u: goto label_4c23c8;
        case 0x4c23ccu: goto label_4c23cc;
        case 0x4c23d0u: goto label_4c23d0;
        case 0x4c23d4u: goto label_4c23d4;
        case 0x4c23d8u: goto label_4c23d8;
        case 0x4c23dcu: goto label_4c23dc;
        case 0x4c23e0u: goto label_4c23e0;
        case 0x4c23e4u: goto label_4c23e4;
        case 0x4c23e8u: goto label_4c23e8;
        case 0x4c23ecu: goto label_4c23ec;
        case 0x4c23f0u: goto label_4c23f0;
        case 0x4c23f4u: goto label_4c23f4;
        case 0x4c23f8u: goto label_4c23f8;
        case 0x4c23fcu: goto label_4c23fc;
        case 0x4c2400u: goto label_4c2400;
        case 0x4c2404u: goto label_4c2404;
        case 0x4c2408u: goto label_4c2408;
        case 0x4c240cu: goto label_4c240c;
        case 0x4c2410u: goto label_4c2410;
        case 0x4c2414u: goto label_4c2414;
        case 0x4c2418u: goto label_4c2418;
        case 0x4c241cu: goto label_4c241c;
        case 0x4c2420u: goto label_4c2420;
        case 0x4c2424u: goto label_4c2424;
        case 0x4c2428u: goto label_4c2428;
        case 0x4c242cu: goto label_4c242c;
        case 0x4c2430u: goto label_4c2430;
        case 0x4c2434u: goto label_4c2434;
        case 0x4c2438u: goto label_4c2438;
        case 0x4c243cu: goto label_4c243c;
        case 0x4c2440u: goto label_4c2440;
        case 0x4c2444u: goto label_4c2444;
        case 0x4c2448u: goto label_4c2448;
        case 0x4c244cu: goto label_4c244c;
        case 0x4c2450u: goto label_4c2450;
        case 0x4c2454u: goto label_4c2454;
        case 0x4c2458u: goto label_4c2458;
        case 0x4c245cu: goto label_4c245c;
        case 0x4c2460u: goto label_4c2460;
        case 0x4c2464u: goto label_4c2464;
        case 0x4c2468u: goto label_4c2468;
        case 0x4c246cu: goto label_4c246c;
        case 0x4c2470u: goto label_4c2470;
        case 0x4c2474u: goto label_4c2474;
        case 0x4c2478u: goto label_4c2478;
        case 0x4c247cu: goto label_4c247c;
        case 0x4c2480u: goto label_4c2480;
        case 0x4c2484u: goto label_4c2484;
        case 0x4c2488u: goto label_4c2488;
        case 0x4c248cu: goto label_4c248c;
        case 0x4c2490u: goto label_4c2490;
        case 0x4c2494u: goto label_4c2494;
        case 0x4c2498u: goto label_4c2498;
        case 0x4c249cu: goto label_4c249c;
        case 0x4c24a0u: goto label_4c24a0;
        case 0x4c24a4u: goto label_4c24a4;
        case 0x4c24a8u: goto label_4c24a8;
        case 0x4c24acu: goto label_4c24ac;
        case 0x4c24b0u: goto label_4c24b0;
        case 0x4c24b4u: goto label_4c24b4;
        case 0x4c24b8u: goto label_4c24b8;
        case 0x4c24bcu: goto label_4c24bc;
        case 0x4c24c0u: goto label_4c24c0;
        case 0x4c24c4u: goto label_4c24c4;
        case 0x4c24c8u: goto label_4c24c8;
        case 0x4c24ccu: goto label_4c24cc;
        case 0x4c24d0u: goto label_4c24d0;
        case 0x4c24d4u: goto label_4c24d4;
        case 0x4c24d8u: goto label_4c24d8;
        case 0x4c24dcu: goto label_4c24dc;
        case 0x4c24e0u: goto label_4c24e0;
        case 0x4c24e4u: goto label_4c24e4;
        case 0x4c24e8u: goto label_4c24e8;
        case 0x4c24ecu: goto label_4c24ec;
        case 0x4c24f0u: goto label_4c24f0;
        case 0x4c24f4u: goto label_4c24f4;
        case 0x4c24f8u: goto label_4c24f8;
        case 0x4c24fcu: goto label_4c24fc;
        case 0x4c2500u: goto label_4c2500;
        case 0x4c2504u: goto label_4c2504;
        case 0x4c2508u: goto label_4c2508;
        case 0x4c250cu: goto label_4c250c;
        case 0x4c2510u: goto label_4c2510;
        case 0x4c2514u: goto label_4c2514;
        case 0x4c2518u: goto label_4c2518;
        case 0x4c251cu: goto label_4c251c;
        case 0x4c2520u: goto label_4c2520;
        case 0x4c2524u: goto label_4c2524;
        case 0x4c2528u: goto label_4c2528;
        case 0x4c252cu: goto label_4c252c;
        case 0x4c2530u: goto label_4c2530;
        case 0x4c2534u: goto label_4c2534;
        case 0x4c2538u: goto label_4c2538;
        case 0x4c253cu: goto label_4c253c;
        case 0x4c2540u: goto label_4c2540;
        case 0x4c2544u: goto label_4c2544;
        case 0x4c2548u: goto label_4c2548;
        case 0x4c254cu: goto label_4c254c;
        case 0x4c2550u: goto label_4c2550;
        case 0x4c2554u: goto label_4c2554;
        case 0x4c2558u: goto label_4c2558;
        case 0x4c255cu: goto label_4c255c;
        case 0x4c2560u: goto label_4c2560;
        case 0x4c2564u: goto label_4c2564;
        case 0x4c2568u: goto label_4c2568;
        case 0x4c256cu: goto label_4c256c;
        case 0x4c2570u: goto label_4c2570;
        case 0x4c2574u: goto label_4c2574;
        case 0x4c2578u: goto label_4c2578;
        case 0x4c257cu: goto label_4c257c;
        case 0x4c2580u: goto label_4c2580;
        case 0x4c2584u: goto label_4c2584;
        case 0x4c2588u: goto label_4c2588;
        case 0x4c258cu: goto label_4c258c;
        case 0x4c2590u: goto label_4c2590;
        case 0x4c2594u: goto label_4c2594;
        case 0x4c2598u: goto label_4c2598;
        case 0x4c259cu: goto label_4c259c;
        case 0x4c25a0u: goto label_4c25a0;
        case 0x4c25a4u: goto label_4c25a4;
        case 0x4c25a8u: goto label_4c25a8;
        case 0x4c25acu: goto label_4c25ac;
        case 0x4c25b0u: goto label_4c25b0;
        case 0x4c25b4u: goto label_4c25b4;
        case 0x4c25b8u: goto label_4c25b8;
        case 0x4c25bcu: goto label_4c25bc;
        case 0x4c25c0u: goto label_4c25c0;
        case 0x4c25c4u: goto label_4c25c4;
        case 0x4c25c8u: goto label_4c25c8;
        case 0x4c25ccu: goto label_4c25cc;
        case 0x4c25d0u: goto label_4c25d0;
        case 0x4c25d4u: goto label_4c25d4;
        case 0x4c25d8u: goto label_4c25d8;
        case 0x4c25dcu: goto label_4c25dc;
        case 0x4c25e0u: goto label_4c25e0;
        case 0x4c25e4u: goto label_4c25e4;
        case 0x4c25e8u: goto label_4c25e8;
        case 0x4c25ecu: goto label_4c25ec;
        case 0x4c25f0u: goto label_4c25f0;
        case 0x4c25f4u: goto label_4c25f4;
        case 0x4c25f8u: goto label_4c25f8;
        case 0x4c25fcu: goto label_4c25fc;
        case 0x4c2600u: goto label_4c2600;
        case 0x4c2604u: goto label_4c2604;
        case 0x4c2608u: goto label_4c2608;
        case 0x4c260cu: goto label_4c260c;
        case 0x4c2610u: goto label_4c2610;
        case 0x4c2614u: goto label_4c2614;
        case 0x4c2618u: goto label_4c2618;
        case 0x4c261cu: goto label_4c261c;
        case 0x4c2620u: goto label_4c2620;
        case 0x4c2624u: goto label_4c2624;
        case 0x4c2628u: goto label_4c2628;
        case 0x4c262cu: goto label_4c262c;
        case 0x4c2630u: goto label_4c2630;
        case 0x4c2634u: goto label_4c2634;
        case 0x4c2638u: goto label_4c2638;
        case 0x4c263cu: goto label_4c263c;
        case 0x4c2640u: goto label_4c2640;
        case 0x4c2644u: goto label_4c2644;
        case 0x4c2648u: goto label_4c2648;
        case 0x4c264cu: goto label_4c264c;
        case 0x4c2650u: goto label_4c2650;
        case 0x4c2654u: goto label_4c2654;
        case 0x4c2658u: goto label_4c2658;
        case 0x4c265cu: goto label_4c265c;
        case 0x4c2660u: goto label_4c2660;
        case 0x4c2664u: goto label_4c2664;
        case 0x4c2668u: goto label_4c2668;
        case 0x4c266cu: goto label_4c266c;
        case 0x4c2670u: goto label_4c2670;
        case 0x4c2674u: goto label_4c2674;
        case 0x4c2678u: goto label_4c2678;
        case 0x4c267cu: goto label_4c267c;
        case 0x4c2680u: goto label_4c2680;
        case 0x4c2684u: goto label_4c2684;
        case 0x4c2688u: goto label_4c2688;
        case 0x4c268cu: goto label_4c268c;
        case 0x4c2690u: goto label_4c2690;
        case 0x4c2694u: goto label_4c2694;
        case 0x4c2698u: goto label_4c2698;
        case 0x4c269cu: goto label_4c269c;
        case 0x4c26a0u: goto label_4c26a0;
        case 0x4c26a4u: goto label_4c26a4;
        case 0x4c26a8u: goto label_4c26a8;
        case 0x4c26acu: goto label_4c26ac;
        case 0x4c26b0u: goto label_4c26b0;
        case 0x4c26b4u: goto label_4c26b4;
        case 0x4c26b8u: goto label_4c26b8;
        case 0x4c26bcu: goto label_4c26bc;
        case 0x4c26c0u: goto label_4c26c0;
        case 0x4c26c4u: goto label_4c26c4;
        case 0x4c26c8u: goto label_4c26c8;
        case 0x4c26ccu: goto label_4c26cc;
        case 0x4c26d0u: goto label_4c26d0;
        case 0x4c26d4u: goto label_4c26d4;
        case 0x4c26d8u: goto label_4c26d8;
        case 0x4c26dcu: goto label_4c26dc;
        case 0x4c26e0u: goto label_4c26e0;
        case 0x4c26e4u: goto label_4c26e4;
        case 0x4c26e8u: goto label_4c26e8;
        case 0x4c26ecu: goto label_4c26ec;
        case 0x4c26f0u: goto label_4c26f0;
        case 0x4c26f4u: goto label_4c26f4;
        case 0x4c26f8u: goto label_4c26f8;
        case 0x4c26fcu: goto label_4c26fc;
        case 0x4c2700u: goto label_4c2700;
        case 0x4c2704u: goto label_4c2704;
        case 0x4c2708u: goto label_4c2708;
        case 0x4c270cu: goto label_4c270c;
        case 0x4c2710u: goto label_4c2710;
        case 0x4c2714u: goto label_4c2714;
        case 0x4c2718u: goto label_4c2718;
        case 0x4c271cu: goto label_4c271c;
        case 0x4c2720u: goto label_4c2720;
        case 0x4c2724u: goto label_4c2724;
        case 0x4c2728u: goto label_4c2728;
        case 0x4c272cu: goto label_4c272c;
        case 0x4c2730u: goto label_4c2730;
        case 0x4c2734u: goto label_4c2734;
        case 0x4c2738u: goto label_4c2738;
        case 0x4c273cu: goto label_4c273c;
        case 0x4c2740u: goto label_4c2740;
        case 0x4c2744u: goto label_4c2744;
        case 0x4c2748u: goto label_4c2748;
        case 0x4c274cu: goto label_4c274c;
        case 0x4c2750u: goto label_4c2750;
        case 0x4c2754u: goto label_4c2754;
        case 0x4c2758u: goto label_4c2758;
        case 0x4c275cu: goto label_4c275c;
        case 0x4c2760u: goto label_4c2760;
        case 0x4c2764u: goto label_4c2764;
        case 0x4c2768u: goto label_4c2768;
        case 0x4c276cu: goto label_4c276c;
        case 0x4c2770u: goto label_4c2770;
        case 0x4c2774u: goto label_4c2774;
        case 0x4c2778u: goto label_4c2778;
        case 0x4c277cu: goto label_4c277c;
        case 0x4c2780u: goto label_4c2780;
        case 0x4c2784u: goto label_4c2784;
        case 0x4c2788u: goto label_4c2788;
        case 0x4c278cu: goto label_4c278c;
        case 0x4c2790u: goto label_4c2790;
        case 0x4c2794u: goto label_4c2794;
        case 0x4c2798u: goto label_4c2798;
        case 0x4c279cu: goto label_4c279c;
        case 0x4c27a0u: goto label_4c27a0;
        case 0x4c27a4u: goto label_4c27a4;
        case 0x4c27a8u: goto label_4c27a8;
        case 0x4c27acu: goto label_4c27ac;
        case 0x4c27b0u: goto label_4c27b0;
        case 0x4c27b4u: goto label_4c27b4;
        case 0x4c27b8u: goto label_4c27b8;
        case 0x4c27bcu: goto label_4c27bc;
        case 0x4c27c0u: goto label_4c27c0;
        case 0x4c27c4u: goto label_4c27c4;
        case 0x4c27c8u: goto label_4c27c8;
        case 0x4c27ccu: goto label_4c27cc;
        case 0x4c27d0u: goto label_4c27d0;
        case 0x4c27d4u: goto label_4c27d4;
        case 0x4c27d8u: goto label_4c27d8;
        case 0x4c27dcu: goto label_4c27dc;
        case 0x4c27e0u: goto label_4c27e0;
        case 0x4c27e4u: goto label_4c27e4;
        case 0x4c27e8u: goto label_4c27e8;
        case 0x4c27ecu: goto label_4c27ec;
        case 0x4c27f0u: goto label_4c27f0;
        case 0x4c27f4u: goto label_4c27f4;
        case 0x4c27f8u: goto label_4c27f8;
        case 0x4c27fcu: goto label_4c27fc;
        case 0x4c2800u: goto label_4c2800;
        case 0x4c2804u: goto label_4c2804;
        case 0x4c2808u: goto label_4c2808;
        case 0x4c280cu: goto label_4c280c;
        case 0x4c2810u: goto label_4c2810;
        case 0x4c2814u: goto label_4c2814;
        case 0x4c2818u: goto label_4c2818;
        case 0x4c281cu: goto label_4c281c;
        case 0x4c2820u: goto label_4c2820;
        case 0x4c2824u: goto label_4c2824;
        case 0x4c2828u: goto label_4c2828;
        case 0x4c282cu: goto label_4c282c;
        case 0x4c2830u: goto label_4c2830;
        case 0x4c2834u: goto label_4c2834;
        case 0x4c2838u: goto label_4c2838;
        case 0x4c283cu: goto label_4c283c;
        case 0x4c2840u: goto label_4c2840;
        case 0x4c2844u: goto label_4c2844;
        case 0x4c2848u: goto label_4c2848;
        case 0x4c284cu: goto label_4c284c;
        case 0x4c2850u: goto label_4c2850;
        case 0x4c2854u: goto label_4c2854;
        case 0x4c2858u: goto label_4c2858;
        case 0x4c285cu: goto label_4c285c;
        case 0x4c2860u: goto label_4c2860;
        case 0x4c2864u: goto label_4c2864;
        case 0x4c2868u: goto label_4c2868;
        case 0x4c286cu: goto label_4c286c;
        case 0x4c2870u: goto label_4c2870;
        case 0x4c2874u: goto label_4c2874;
        case 0x4c2878u: goto label_4c2878;
        case 0x4c287cu: goto label_4c287c;
        case 0x4c2880u: goto label_4c2880;
        case 0x4c2884u: goto label_4c2884;
        case 0x4c2888u: goto label_4c2888;
        case 0x4c288cu: goto label_4c288c;
        case 0x4c2890u: goto label_4c2890;
        case 0x4c2894u: goto label_4c2894;
        case 0x4c2898u: goto label_4c2898;
        case 0x4c289cu: goto label_4c289c;
        case 0x4c28a0u: goto label_4c28a0;
        case 0x4c28a4u: goto label_4c28a4;
        case 0x4c28a8u: goto label_4c28a8;
        case 0x4c28acu: goto label_4c28ac;
        case 0x4c28b0u: goto label_4c28b0;
        case 0x4c28b4u: goto label_4c28b4;
        case 0x4c28b8u: goto label_4c28b8;
        case 0x4c28bcu: goto label_4c28bc;
        case 0x4c28c0u: goto label_4c28c0;
        case 0x4c28c4u: goto label_4c28c4;
        case 0x4c28c8u: goto label_4c28c8;
        case 0x4c28ccu: goto label_4c28cc;
        case 0x4c28d0u: goto label_4c28d0;
        case 0x4c28d4u: goto label_4c28d4;
        case 0x4c28d8u: goto label_4c28d8;
        case 0x4c28dcu: goto label_4c28dc;
        case 0x4c28e0u: goto label_4c28e0;
        case 0x4c28e4u: goto label_4c28e4;
        case 0x4c28e8u: goto label_4c28e8;
        case 0x4c28ecu: goto label_4c28ec;
        case 0x4c28f0u: goto label_4c28f0;
        case 0x4c28f4u: goto label_4c28f4;
        case 0x4c28f8u: goto label_4c28f8;
        case 0x4c28fcu: goto label_4c28fc;
        case 0x4c2900u: goto label_4c2900;
        case 0x4c2904u: goto label_4c2904;
        case 0x4c2908u: goto label_4c2908;
        case 0x4c290cu: goto label_4c290c;
        case 0x4c2910u: goto label_4c2910;
        case 0x4c2914u: goto label_4c2914;
        case 0x4c2918u: goto label_4c2918;
        case 0x4c291cu: goto label_4c291c;
        case 0x4c2920u: goto label_4c2920;
        case 0x4c2924u: goto label_4c2924;
        case 0x4c2928u: goto label_4c2928;
        case 0x4c292cu: goto label_4c292c;
        case 0x4c2930u: goto label_4c2930;
        case 0x4c2934u: goto label_4c2934;
        case 0x4c2938u: goto label_4c2938;
        case 0x4c293cu: goto label_4c293c;
        case 0x4c2940u: goto label_4c2940;
        case 0x4c2944u: goto label_4c2944;
        case 0x4c2948u: goto label_4c2948;
        case 0x4c294cu: goto label_4c294c;
        case 0x4c2950u: goto label_4c2950;
        case 0x4c2954u: goto label_4c2954;
        case 0x4c2958u: goto label_4c2958;
        case 0x4c295cu: goto label_4c295c;
        case 0x4c2960u: goto label_4c2960;
        case 0x4c2964u: goto label_4c2964;
        case 0x4c2968u: goto label_4c2968;
        case 0x4c296cu: goto label_4c296c;
        case 0x4c2970u: goto label_4c2970;
        case 0x4c2974u: goto label_4c2974;
        case 0x4c2978u: goto label_4c2978;
        case 0x4c297cu: goto label_4c297c;
        case 0x4c2980u: goto label_4c2980;
        case 0x4c2984u: goto label_4c2984;
        case 0x4c2988u: goto label_4c2988;
        case 0x4c298cu: goto label_4c298c;
        case 0x4c2990u: goto label_4c2990;
        case 0x4c2994u: goto label_4c2994;
        case 0x4c2998u: goto label_4c2998;
        case 0x4c299cu: goto label_4c299c;
        case 0x4c29a0u: goto label_4c29a0;
        case 0x4c29a4u: goto label_4c29a4;
        case 0x4c29a8u: goto label_4c29a8;
        case 0x4c29acu: goto label_4c29ac;
        case 0x4c29b0u: goto label_4c29b0;
        case 0x4c29b4u: goto label_4c29b4;
        case 0x4c29b8u: goto label_4c29b8;
        case 0x4c29bcu: goto label_4c29bc;
        case 0x4c29c0u: goto label_4c29c0;
        case 0x4c29c4u: goto label_4c29c4;
        case 0x4c29c8u: goto label_4c29c8;
        case 0x4c29ccu: goto label_4c29cc;
        case 0x4c29d0u: goto label_4c29d0;
        case 0x4c29d4u: goto label_4c29d4;
        case 0x4c29d8u: goto label_4c29d8;
        case 0x4c29dcu: goto label_4c29dc;
        case 0x4c29e0u: goto label_4c29e0;
        case 0x4c29e4u: goto label_4c29e4;
        case 0x4c29e8u: goto label_4c29e8;
        case 0x4c29ecu: goto label_4c29ec;
        case 0x4c29f0u: goto label_4c29f0;
        case 0x4c29f4u: goto label_4c29f4;
        case 0x4c29f8u: goto label_4c29f8;
        case 0x4c29fcu: goto label_4c29fc;
        case 0x4c2a00u: goto label_4c2a00;
        case 0x4c2a04u: goto label_4c2a04;
        case 0x4c2a08u: goto label_4c2a08;
        case 0x4c2a0cu: goto label_4c2a0c;
        case 0x4c2a10u: goto label_4c2a10;
        case 0x4c2a14u: goto label_4c2a14;
        case 0x4c2a18u: goto label_4c2a18;
        case 0x4c2a1cu: goto label_4c2a1c;
        case 0x4c2a20u: goto label_4c2a20;
        case 0x4c2a24u: goto label_4c2a24;
        case 0x4c2a28u: goto label_4c2a28;
        case 0x4c2a2cu: goto label_4c2a2c;
        case 0x4c2a30u: goto label_4c2a30;
        case 0x4c2a34u: goto label_4c2a34;
        case 0x4c2a38u: goto label_4c2a38;
        case 0x4c2a3cu: goto label_4c2a3c;
        case 0x4c2a40u: goto label_4c2a40;
        case 0x4c2a44u: goto label_4c2a44;
        case 0x4c2a48u: goto label_4c2a48;
        case 0x4c2a4cu: goto label_4c2a4c;
        case 0x4c2a50u: goto label_4c2a50;
        case 0x4c2a54u: goto label_4c2a54;
        case 0x4c2a58u: goto label_4c2a58;
        case 0x4c2a5cu: goto label_4c2a5c;
        case 0x4c2a60u: goto label_4c2a60;
        case 0x4c2a64u: goto label_4c2a64;
        case 0x4c2a68u: goto label_4c2a68;
        case 0x4c2a6cu: goto label_4c2a6c;
        case 0x4c2a70u: goto label_4c2a70;
        case 0x4c2a74u: goto label_4c2a74;
        case 0x4c2a78u: goto label_4c2a78;
        case 0x4c2a7cu: goto label_4c2a7c;
        case 0x4c2a80u: goto label_4c2a80;
        case 0x4c2a84u: goto label_4c2a84;
        case 0x4c2a88u: goto label_4c2a88;
        case 0x4c2a8cu: goto label_4c2a8c;
        case 0x4c2a90u: goto label_4c2a90;
        case 0x4c2a94u: goto label_4c2a94;
        case 0x4c2a98u: goto label_4c2a98;
        case 0x4c2a9cu: goto label_4c2a9c;
        case 0x4c2aa0u: goto label_4c2aa0;
        case 0x4c2aa4u: goto label_4c2aa4;
        case 0x4c2aa8u: goto label_4c2aa8;
        case 0x4c2aacu: goto label_4c2aac;
        case 0x4c2ab0u: goto label_4c2ab0;
        case 0x4c2ab4u: goto label_4c2ab4;
        case 0x4c2ab8u: goto label_4c2ab8;
        case 0x4c2abcu: goto label_4c2abc;
        case 0x4c2ac0u: goto label_4c2ac0;
        case 0x4c2ac4u: goto label_4c2ac4;
        case 0x4c2ac8u: goto label_4c2ac8;
        case 0x4c2accu: goto label_4c2acc;
        case 0x4c2ad0u: goto label_4c2ad0;
        case 0x4c2ad4u: goto label_4c2ad4;
        case 0x4c2ad8u: goto label_4c2ad8;
        case 0x4c2adcu: goto label_4c2adc;
        case 0x4c2ae0u: goto label_4c2ae0;
        case 0x4c2ae4u: goto label_4c2ae4;
        case 0x4c2ae8u: goto label_4c2ae8;
        case 0x4c2aecu: goto label_4c2aec;
        case 0x4c2af0u: goto label_4c2af0;
        case 0x4c2af4u: goto label_4c2af4;
        case 0x4c2af8u: goto label_4c2af8;
        case 0x4c2afcu: goto label_4c2afc;
        case 0x4c2b00u: goto label_4c2b00;
        case 0x4c2b04u: goto label_4c2b04;
        case 0x4c2b08u: goto label_4c2b08;
        case 0x4c2b0cu: goto label_4c2b0c;
        case 0x4c2b10u: goto label_4c2b10;
        case 0x4c2b14u: goto label_4c2b14;
        case 0x4c2b18u: goto label_4c2b18;
        case 0x4c2b1cu: goto label_4c2b1c;
        case 0x4c2b20u: goto label_4c2b20;
        case 0x4c2b24u: goto label_4c2b24;
        case 0x4c2b28u: goto label_4c2b28;
        case 0x4c2b2cu: goto label_4c2b2c;
        case 0x4c2b30u: goto label_4c2b30;
        case 0x4c2b34u: goto label_4c2b34;
        case 0x4c2b38u: goto label_4c2b38;
        case 0x4c2b3cu: goto label_4c2b3c;
        case 0x4c2b40u: goto label_4c2b40;
        case 0x4c2b44u: goto label_4c2b44;
        case 0x4c2b48u: goto label_4c2b48;
        case 0x4c2b4cu: goto label_4c2b4c;
        case 0x4c2b50u: goto label_4c2b50;
        case 0x4c2b54u: goto label_4c2b54;
        case 0x4c2b58u: goto label_4c2b58;
        case 0x4c2b5cu: goto label_4c2b5c;
        case 0x4c2b60u: goto label_4c2b60;
        case 0x4c2b64u: goto label_4c2b64;
        case 0x4c2b68u: goto label_4c2b68;
        case 0x4c2b6cu: goto label_4c2b6c;
        case 0x4c2b70u: goto label_4c2b70;
        case 0x4c2b74u: goto label_4c2b74;
        case 0x4c2b78u: goto label_4c2b78;
        case 0x4c2b7cu: goto label_4c2b7c;
        case 0x4c2b80u: goto label_4c2b80;
        case 0x4c2b84u: goto label_4c2b84;
        case 0x4c2b88u: goto label_4c2b88;
        case 0x4c2b8cu: goto label_4c2b8c;
        case 0x4c2b90u: goto label_4c2b90;
        case 0x4c2b94u: goto label_4c2b94;
        case 0x4c2b98u: goto label_4c2b98;
        case 0x4c2b9cu: goto label_4c2b9c;
        case 0x4c2ba0u: goto label_4c2ba0;
        case 0x4c2ba4u: goto label_4c2ba4;
        case 0x4c2ba8u: goto label_4c2ba8;
        case 0x4c2bacu: goto label_4c2bac;
        case 0x4c2bb0u: goto label_4c2bb0;
        case 0x4c2bb4u: goto label_4c2bb4;
        case 0x4c2bb8u: goto label_4c2bb8;
        case 0x4c2bbcu: goto label_4c2bbc;
        case 0x4c2bc0u: goto label_4c2bc0;
        case 0x4c2bc4u: goto label_4c2bc4;
        case 0x4c2bc8u: goto label_4c2bc8;
        case 0x4c2bccu: goto label_4c2bcc;
        case 0x4c2bd0u: goto label_4c2bd0;
        case 0x4c2bd4u: goto label_4c2bd4;
        case 0x4c2bd8u: goto label_4c2bd8;
        case 0x4c2bdcu: goto label_4c2bdc;
        case 0x4c2be0u: goto label_4c2be0;
        case 0x4c2be4u: goto label_4c2be4;
        case 0x4c2be8u: goto label_4c2be8;
        case 0x4c2becu: goto label_4c2bec;
        case 0x4c2bf0u: goto label_4c2bf0;
        case 0x4c2bf4u: goto label_4c2bf4;
        case 0x4c2bf8u: goto label_4c2bf8;
        case 0x4c2bfcu: goto label_4c2bfc;
        case 0x4c2c00u: goto label_4c2c00;
        case 0x4c2c04u: goto label_4c2c04;
        case 0x4c2c08u: goto label_4c2c08;
        case 0x4c2c0cu: goto label_4c2c0c;
        case 0x4c2c10u: goto label_4c2c10;
        case 0x4c2c14u: goto label_4c2c14;
        case 0x4c2c18u: goto label_4c2c18;
        case 0x4c2c1cu: goto label_4c2c1c;
        case 0x4c2c20u: goto label_4c2c20;
        case 0x4c2c24u: goto label_4c2c24;
        case 0x4c2c28u: goto label_4c2c28;
        case 0x4c2c2cu: goto label_4c2c2c;
        case 0x4c2c30u: goto label_4c2c30;
        case 0x4c2c34u: goto label_4c2c34;
        case 0x4c2c38u: goto label_4c2c38;
        case 0x4c2c3cu: goto label_4c2c3c;
        case 0x4c2c40u: goto label_4c2c40;
        case 0x4c2c44u: goto label_4c2c44;
        case 0x4c2c48u: goto label_4c2c48;
        case 0x4c2c4cu: goto label_4c2c4c;
        case 0x4c2c50u: goto label_4c2c50;
        case 0x4c2c54u: goto label_4c2c54;
        case 0x4c2c58u: goto label_4c2c58;
        case 0x4c2c5cu: goto label_4c2c5c;
        case 0x4c2c60u: goto label_4c2c60;
        case 0x4c2c64u: goto label_4c2c64;
        case 0x4c2c68u: goto label_4c2c68;
        case 0x4c2c6cu: goto label_4c2c6c;
        case 0x4c2c70u: goto label_4c2c70;
        case 0x4c2c74u: goto label_4c2c74;
        case 0x4c2c78u: goto label_4c2c78;
        case 0x4c2c7cu: goto label_4c2c7c;
        case 0x4c2c80u: goto label_4c2c80;
        case 0x4c2c84u: goto label_4c2c84;
        case 0x4c2c88u: goto label_4c2c88;
        case 0x4c2c8cu: goto label_4c2c8c;
        case 0x4c2c90u: goto label_4c2c90;
        case 0x4c2c94u: goto label_4c2c94;
        case 0x4c2c98u: goto label_4c2c98;
        case 0x4c2c9cu: goto label_4c2c9c;
        case 0x4c2ca0u: goto label_4c2ca0;
        case 0x4c2ca4u: goto label_4c2ca4;
        case 0x4c2ca8u: goto label_4c2ca8;
        case 0x4c2cacu: goto label_4c2cac;
        case 0x4c2cb0u: goto label_4c2cb0;
        case 0x4c2cb4u: goto label_4c2cb4;
        case 0x4c2cb8u: goto label_4c2cb8;
        case 0x4c2cbcu: goto label_4c2cbc;
        case 0x4c2cc0u: goto label_4c2cc0;
        case 0x4c2cc4u: goto label_4c2cc4;
        case 0x4c2cc8u: goto label_4c2cc8;
        case 0x4c2cccu: goto label_4c2ccc;
        case 0x4c2cd0u: goto label_4c2cd0;
        case 0x4c2cd4u: goto label_4c2cd4;
        case 0x4c2cd8u: goto label_4c2cd8;
        case 0x4c2cdcu: goto label_4c2cdc;
        case 0x4c2ce0u: goto label_4c2ce0;
        case 0x4c2ce4u: goto label_4c2ce4;
        case 0x4c2ce8u: goto label_4c2ce8;
        case 0x4c2cecu: goto label_4c2cec;
        case 0x4c2cf0u: goto label_4c2cf0;
        case 0x4c2cf4u: goto label_4c2cf4;
        case 0x4c2cf8u: goto label_4c2cf8;
        case 0x4c2cfcu: goto label_4c2cfc;
        case 0x4c2d00u: goto label_4c2d00;
        case 0x4c2d04u: goto label_4c2d04;
        case 0x4c2d08u: goto label_4c2d08;
        case 0x4c2d0cu: goto label_4c2d0c;
        case 0x4c2d10u: goto label_4c2d10;
        case 0x4c2d14u: goto label_4c2d14;
        case 0x4c2d18u: goto label_4c2d18;
        case 0x4c2d1cu: goto label_4c2d1c;
        case 0x4c2d20u: goto label_4c2d20;
        case 0x4c2d24u: goto label_4c2d24;
        case 0x4c2d28u: goto label_4c2d28;
        case 0x4c2d2cu: goto label_4c2d2c;
        case 0x4c2d30u: goto label_4c2d30;
        case 0x4c2d34u: goto label_4c2d34;
        case 0x4c2d38u: goto label_4c2d38;
        case 0x4c2d3cu: goto label_4c2d3c;
        case 0x4c2d40u: goto label_4c2d40;
        case 0x4c2d44u: goto label_4c2d44;
        case 0x4c2d48u: goto label_4c2d48;
        case 0x4c2d4cu: goto label_4c2d4c;
        case 0x4c2d50u: goto label_4c2d50;
        case 0x4c2d54u: goto label_4c2d54;
        case 0x4c2d58u: goto label_4c2d58;
        case 0x4c2d5cu: goto label_4c2d5c;
        case 0x4c2d60u: goto label_4c2d60;
        case 0x4c2d64u: goto label_4c2d64;
        case 0x4c2d68u: goto label_4c2d68;
        case 0x4c2d6cu: goto label_4c2d6c;
        case 0x4c2d70u: goto label_4c2d70;
        case 0x4c2d74u: goto label_4c2d74;
        case 0x4c2d78u: goto label_4c2d78;
        case 0x4c2d7cu: goto label_4c2d7c;
        case 0x4c2d80u: goto label_4c2d80;
        case 0x4c2d84u: goto label_4c2d84;
        case 0x4c2d88u: goto label_4c2d88;
        case 0x4c2d8cu: goto label_4c2d8c;
        case 0x4c2d90u: goto label_4c2d90;
        case 0x4c2d94u: goto label_4c2d94;
        case 0x4c2d98u: goto label_4c2d98;
        case 0x4c2d9cu: goto label_4c2d9c;
        case 0x4c2da0u: goto label_4c2da0;
        case 0x4c2da4u: goto label_4c2da4;
        case 0x4c2da8u: goto label_4c2da8;
        case 0x4c2dacu: goto label_4c2dac;
        case 0x4c2db0u: goto label_4c2db0;
        case 0x4c2db4u: goto label_4c2db4;
        case 0x4c2db8u: goto label_4c2db8;
        case 0x4c2dbcu: goto label_4c2dbc;
        case 0x4c2dc0u: goto label_4c2dc0;
        case 0x4c2dc4u: goto label_4c2dc4;
        case 0x4c2dc8u: goto label_4c2dc8;
        case 0x4c2dccu: goto label_4c2dcc;
        case 0x4c2dd0u: goto label_4c2dd0;
        case 0x4c2dd4u: goto label_4c2dd4;
        case 0x4c2dd8u: goto label_4c2dd8;
        case 0x4c2ddcu: goto label_4c2ddc;
        case 0x4c2de0u: goto label_4c2de0;
        case 0x4c2de4u: goto label_4c2de4;
        default: break;
    }

    ctx->pc = 0x4c1cd0u;

label_4c1cd0:
    // 0x4c1cd0: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x4c1cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
label_4c1cd4:
    // 0x4c1cd4: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x4c1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
label_4c1cd8:
    // 0x4c1cd8: 0xffb60410  sd          $s6, 0x410($sp)
    ctx->pc = 0x4c1cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 22));
label_4c1cdc:
    // 0x4c1cdc: 0xffb103e8  sd          $s1, 0x3E8($sp)
    ctx->pc = 0x4c1cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1000), GPR_U64(ctx, 17));
label_4c1ce0:
    // 0x4c1ce0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4c1ce0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c1ce4:
    // 0x4c1ce4: 0xffb50408  sd          $s5, 0x408($sp)
    ctx->pc = 0x4c1ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1032), GPR_U64(ctx, 21));
label_4c1ce8:
    // 0x4c1ce8: 0x2471f090  addiu       $s1, $v1, -0xF70
    ctx->pc = 0x4c1ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963344));
label_4c1cec:
    // 0x4c1cec: 0xffb003e0  sd          $s0, 0x3E0($sp)
    ctx->pc = 0x4c1cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 992), GPR_U64(ctx, 16));
label_4c1cf0:
    // 0x4c1cf0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4c1cf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c1cf4:
    // 0x4c1cf4: 0xffb203f0  sd          $s2, 0x3F0($sp)
    ctx->pc = 0x4c1cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1008), GPR_U64(ctx, 18));
label_4c1cf8:
    // 0x4c1cf8: 0x32c24000  andi        $v0, $s6, 0x4000
    ctx->pc = 0x4c1cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16384);
label_4c1cfc:
    // 0x4c1cfc: 0xffb303f8  sd          $s3, 0x3F8($sp)
    ctx->pc = 0x4c1cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1016), GPR_U64(ctx, 19));
label_4c1d00:
    // 0x4c1d00: 0xffb40400  sd          $s4, 0x400($sp)
    ctx->pc = 0x4c1d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 20));
label_4c1d04:
    // 0x4c1d04: 0xffb70418  sd          $s7, 0x418($sp)
    ctx->pc = 0x4c1d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 23));
label_4c1d08:
    // 0x4c1d08: 0xffbe0420  sd          $fp, 0x420($sp)
    ctx->pc = 0x4c1d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 30));
label_4c1d0c:
    // 0x4c1d0c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4c1d10:
    if (ctx->pc == 0x4C1D10u) {
        ctx->pc = 0x4C1D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1D0Cu;
        // 0x4c1d10: 0xffbf0428  sd          $ra, 0x428($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1D14u;
        goto label_4c1d14;
    }
    ctx->pc = 0x4C1D0Cu;
    {
        const bool branch_taken_0x4c1d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1D0Cu;
        // 0x4c1d10: 0xffbf0428  sd          $ra, 0x428($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1d0c) {
            ctx->pc = 0x4C1D28u;
            goto label_4c1d28;
        }
    }
    ctx->pc = 0x4C1D14u;
label_4c1d14:
    // 0x4c1d14: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4c1d18:
    // 0x4c1d18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c1d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c1d1c:
    // 0x4c1d1c: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4c1d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_4c1d20:
    // 0x4c1d20: 0xac4327a0  sw          $v1, 0x27A0($v0)
    ctx->pc = 0x4c1d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10144), GPR_U32(ctx, 3));
label_4c1d24:
    // 0x4c1d24: 0xac8027a8  sw          $zero, 0x27A8($a0)
    ctx->pc = 0x4c1d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10152), GPR_U32(ctx, 0));
label_4c1d28:
    // 0x4c1d28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4c1d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4c1d2c:
    // 0x4c1d2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c1d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c1d30:
    // 0x4c1d30: 0xc13372a  jal         func_4CDCA8
label_4c1d34:
    if (ctx->pc == 0x4C1D34u) {
        ctx->pc = 0x4C1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1D30u;
        // 0x4c1d34: 0x24060398  addiu       $a2, $zero, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1D38u;
        goto label_4c1d38;
    }
    ctx->pc = 0x4C1D30u;
    SET_GPR_U32(ctx, 31, 0x4C1D38u);
    ctx->pc = 0x4C1D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1D30u;
    // 0x4c1d34: 0x24060398  addiu       $a2, $zero, 0x398 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4C1D30u, 0x4C1D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1D38u;
label_4c1d38:
    // 0x4c1d38: 0xc1334f4  jal         func_4CD3D0
label_4c1d3c:
    if (ctx->pc == 0x4C1D3Cu) {
        ctx->pc = 0x4C1D40u;
        goto label_4c1d40;
    }
    ctx->pc = 0x4C1D38u;
    SET_GPR_U32(ctx, 31, 0x4C1D40u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C1D38u, 0x4C1D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1D40u;
label_4c1d40:
    // 0x4c1d40: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4c1d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_4c1d44:
    // 0x4c1d44: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x4c1d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_4c1d48:
    // 0x4c1d48: 0xafa202b8  sw          $v0, 0x2B8($sp)
    ctx->pc = 0x4c1d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 2));
label_4c1d4c:
    // 0x4c1d4c: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x4c1d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_4c1d50:
    // 0x4c1d50: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_4c1d54:
    if (ctx->pc == 0x4C1D54u) {
        ctx->pc = 0x4C1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1D50u;
        // 0x4c1d54: 0xa0804258  sb          $zero, 0x4258($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16984), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1D58u;
        goto label_4c1d58;
    }
    ctx->pc = 0x4C1D50u;
    {
        const bool branch_taken_0x4c1d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1D50u;
        // 0x4c1d54: 0xa0804258  sb          $zero, 0x4258($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16984), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1d50) {
            ctx->pc = 0x4C1D70u;
            goto label_4c1d70;
        }
    }
    ctx->pc = 0x4C1D58u;
label_4c1d58:
    // 0x4c1d58: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x4c1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_4c1d5c:
    // 0x4c1d5c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4c1d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c1d60:
    // 0x4c1d60: 0xc133518  jal         func_4CD460
label_4c1d64:
    if (ctx->pc == 0x4C1D64u) {
        ctx->pc = 0x4C1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1D60u;
        // 0x4c1d64: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1D68u;
        goto label_4c1d68;
    }
    ctx->pc = 0x4C1D60u;
    SET_GPR_U32(ctx, 31, 0x4C1D68u);
    ctx->pc = 0x4C1D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1D60u;
    // 0x4c1d64: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4C1D60u, 0x4C1D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1D68u;
label_4c1d68:
    // 0x4c1d68: 0x1000002c  b           . + 4 + (0x2C << 2)
label_4c1d6c:
    if (ctx->pc == 0x4C1D6Cu) {
        ctx->pc = 0x4C1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1D68u;
        // 0x4c1d6c: 0x3c02664b  lui         $v0, 0x664B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26187 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1D70u;
        goto label_4c1d70;
    }
    ctx->pc = 0x4C1D68u;
    {
        const bool branch_taken_0x4c1d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1D68u;
        // 0x4c1d6c: 0x3c02664b  lui         $v0, 0x664B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26187 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1d68) {
            ctx->pc = 0x4C1E1Cu;
            goto label_4c1e1c;
        }
    }
    ctx->pc = 0x4C1D70u;
label_4c1d70:
    // 0x4c1d70: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x4c1d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_4c1d74:
    // 0x4c1d74: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x4c1d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_4c1d78:
    // 0x4c1d78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4c1d7c:
    if (ctx->pc == 0x4C1D7Cu) {
        ctx->pc = 0x4C1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1D78u;
        // 0x4c1d7c: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1D80u;
        goto label_4c1d80;
    }
    ctx->pc = 0x4C1D78u;
    {
        const bool branch_taken_0x4c1d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1D78u;
        // 0x4c1d7c: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1d78) {
            ctx->pc = 0x4C1D88u;
            goto label_4c1d88;
        }
    }
    ctx->pc = 0x4C1D80u;
label_4c1d80:
    // 0x4c1d80: 0x8c6227c8  lw          $v0, 0x27C8($v1)
    ctx->pc = 0x4c1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10184)));
label_4c1d84:
    // 0x4c1d84: 0x42880b  movn        $s1, $v0, $v0
    ctx->pc = 0x4c1d84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_4c1d88:
    // 0x4c1d88: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x4c1d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4c1d8c:
    // 0x4c1d8c: 0xac6027c8  sw          $zero, 0x27C8($v1)
    ctx->pc = 0x4c1d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10184), GPR_U32(ctx, 0));
label_4c1d90:
    // 0x4c1d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c1d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c1d94:
    // 0x4c1d94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4c1d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c1d98:
    // 0x4c1d98: 0x220f809  jalr        $s1
label_4c1d9c:
    if (ctx->pc == 0x4C1D9Cu) {
        ctx->pc = 0x4C1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1D98u;
        // 0x4c1d9c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1DA0u;
        goto label_4c1da0;
    }
    ctx->pc = 0x4C1D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x4C1DA0u);
        ctx->pc = 0x4C1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1D98u;
        // 0x4c1d9c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1D98u, 0x4C1DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C1DA0u;
label_4c1da0:
    // 0x4c1da0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_4c1da4:
    if (ctx->pc == 0x4C1DA4u) {
        ctx->pc = 0x4C1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1DA0u;
        // 0x4c1da4: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1DA8u;
        goto label_4c1da8;
    }
    ctx->pc = 0x4C1DA0u;
    {
        const bool branch_taken_0x4c1da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1DA0u;
        // 0x4c1da4: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1da0) {
            ctx->pc = 0x4C1E04u;
            goto label_4c1e04;
        }
    }
    ctx->pc = 0x4C1DA8u;
label_4c1da8:
    // 0x4c1da8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4c1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4c1dac:
    // 0x4c1dac: 0x80624258  lb          $v0, 0x4258($v1)
    ctx->pc = 0x4c1dacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16984)));
label_4c1db0:
    // 0x4c1db0: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
label_4c1db4:
    if (ctx->pc == 0x4C1DB4u) {
        ctx->pc = 0x4C1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1DB0u;
        // 0x4c1db4: 0x24644258  addiu       $a0, $v1, 0x4258 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1DB8u;
        goto label_4c1db8;
    }
    ctx->pc = 0x4C1DB0u;
    {
        const bool branch_taken_0x4c1db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1DB0u;
        // 0x4c1db4: 0x24644258  addiu       $a0, $v1, 0x4258 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1db0) {
            ctx->pc = 0x4C1EB8u;
            goto label_4c1eb8;
        }
    }
    ctx->pc = 0x4C1DB8u;
label_4c1db8:
    // 0x4c1db8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4c1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_4c1dbc:
    // 0x4c1dbc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4c1dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c1dc0:
    // 0x4c1dc0: 0x90621be0  lbu         $v0, 0x1BE0($v1)
    ctx->pc = 0x4c1dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7136)));
label_4c1dc4:
    // 0x4c1dc4: 0x24641be0  addiu       $a0, $v1, 0x1BE0
    ctx->pc = 0x4c1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7136));
label_4c1dc8:
    // 0x4c1dc8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4c1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4c1dcc:
    // 0x4c1dcc: 0xa0624258  sb          $v0, 0x4258($v1)
    ctx->pc = 0x4c1dccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16984), (uint8_t)GPR_U32(ctx, 2));
label_4c1dd0:
    // 0x4c1dd0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4c1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4c1dd4:
    // 0x4c1dd4: 0x104003f8  beqz        $v0, . + 4 + (0x3F8 << 2)
label_4c1dd8:
    if (ctx->pc == 0x4C1DD8u) {
        ctx->pc = 0x4C1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1DD4u;
        // 0x4c1dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1DDCu;
        goto label_4c1ddc;
    }
    ctx->pc = 0x4C1DD4u;
    {
        const bool branch_taken_0x4c1dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1DD4u;
        // 0x4c1dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1dd4) {
            ctx->pc = 0x4C2DB8u;
            goto label_4c2db8;
        }
    }
    ctx->pc = 0x4C1DDCu;
label_4c1ddc:
    // 0x4c1ddc: 0x0  nop
    ctx->pc = 0x4c1ddcu;
    // NOP
label_4c1de0:
    // 0x4c1de0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4c1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4c1de4:
    // 0x4c1de4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c1de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4c1de8:
    // 0x4c1de8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4c1de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4c1dec:
    // 0x4c1dec: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x4c1decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4c1df0:
    // 0x4c1df0: 0x0  nop
    ctx->pc = 0x4c1df0u;
    // NOP
label_4c1df4:
    // 0x4c1df4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4c1df8:
    if (ctx->pc == 0x4C1DF8u) {
        ctx->pc = 0x4C1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1DF4u;
        // 0x4c1df8: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1DFCu;
        goto label_4c1dfc;
    }
    ctx->pc = 0x4C1DF4u;
    {
        const bool branch_taken_0x4c1df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1DF4u;
        // 0x4c1df8: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1df4) {
            ctx->pc = 0x4C1DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1de0;
        }
    }
    ctx->pc = 0x4C1DFCu;
label_4c1dfc:
    // 0x4c1dfc: 0x100003ee  b           . + 4 + (0x3EE << 2)
label_4c1e00:
    if (ctx->pc == 0x4C1E00u) {
        ctx->pc = 0x4C1E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1DFCu;
        // 0x4c1e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1E04u;
        goto label_4c1e04;
    }
    ctx->pc = 0x4C1DFCu;
    {
        const bool branch_taken_0x4c1dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1DFCu;
        // 0x4c1e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1dfc) {
            ctx->pc = 0x4C2DB8u;
            goto label_4c2db8;
        }
    }
    ctx->pc = 0x4C1E04u;
label_4c1e04:
    // 0x4c1e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c1e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c1e08:
    // 0x4c1e08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c1e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c1e0c:
    // 0x4c1e0c: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x4c1e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_4c1e10:
    // 0x4c1e10: 0x40f809  jalr        $v0
label_4c1e14:
    if (ctx->pc == 0x4C1E14u) {
        ctx->pc = 0x4C1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E10u;
        // 0x4c1e14: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1E18u;
        goto label_4c1e18;
    }
    ctx->pc = 0x4C1E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C1E18u);
        ctx->pc = 0x4C1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E10u;
        // 0x4c1e14: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1E10u, 0x4C1E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C1E18u;
label_4c1e18:
    // 0x4c1e18: 0x3c02664b  lui         $v0, 0x664B
    ctx->pc = 0x4c1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26187 << 16));
label_4c1e1c:
    // 0x4c1e1c: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x4c1e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_4c1e20:
    // 0x4c1e20: 0x34424942  ori         $v0, $v0, 0x4942
    ctx->pc = 0x4c1e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18754);
label_4c1e24:
    // 0x4c1e24: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_4c1e28:
    if (ctx->pc == 0x4C1E28u) {
        ctx->pc = 0x4C1E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E24u;
        // 0x4c1e28: 0x3c02674b  lui         $v0, 0x674B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26443 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1E2Cu;
        goto label_4c1e2c;
    }
    ctx->pc = 0x4C1E24u;
    {
        const bool branch_taken_0x4c1e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C1E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E24u;
        // 0x4c1e28: 0x3c02674b  lui         $v0, 0x674B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26443 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1e24) {
            ctx->pc = 0x4C1E50u;
            goto label_4c1e50;
        }
    }
    ctx->pc = 0x4C1E2Cu;
label_4c1e2c:
    // 0x4c1e2c: 0x34424942  ori         $v0, $v0, 0x4942
    ctx->pc = 0x4c1e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18754);
label_4c1e30:
    // 0x4c1e30: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_4c1e34:
    if (ctx->pc == 0x4C1E34u) {
        ctx->pc = 0x4C1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E30u;
        // 0x4c1e34: 0x3c02684b  lui         $v0, 0x684B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26699 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1E38u;
        goto label_4c1e38;
    }
    ctx->pc = 0x4C1E30u;
    {
        const bool branch_taken_0x4c1e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E30u;
        // 0x4c1e34: 0x3c02684b  lui         $v0, 0x684B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26699 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1e30) {
            ctx->pc = 0x4C1E50u;
            goto label_4c1e50;
        }
    }
    ctx->pc = 0x4C1E38u;
label_4c1e38:
    // 0x4c1e38: 0x34424942  ori         $v0, $v0, 0x4942
    ctx->pc = 0x4c1e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18754);
label_4c1e3c:
    // 0x4c1e3c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_4c1e40:
    if (ctx->pc == 0x4C1E40u) {
        ctx->pc = 0x4C1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E3Cu;
        // 0x4c1e40: 0x3c02694b  lui         $v0, 0x694B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26955 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1E44u;
        goto label_4c1e44;
    }
    ctx->pc = 0x4C1E3Cu;
    {
        const bool branch_taken_0x4c1e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E3Cu;
        // 0x4c1e40: 0x3c02694b  lui         $v0, 0x694B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26955 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1e3c) {
            ctx->pc = 0x4C1E50u;
            goto label_4c1e50;
        }
    }
    ctx->pc = 0x4C1E44u;
label_4c1e44:
    // 0x4c1e44: 0x34424942  ori         $v0, $v0, 0x4942
    ctx->pc = 0x4c1e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18754);
label_4c1e48:
    // 0x4c1e48: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_4c1e4c:
    if (ctx->pc == 0x4C1E4Cu) {
        ctx->pc = 0x4C1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E48u;
        // 0x4c1e4c: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1E50u;
        goto label_4c1e50;
    }
    ctx->pc = 0x4C1E48u;
    {
        const bool branch_taken_0x4c1e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E48u;
        // 0x4c1e4c: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1e48) {
            ctx->pc = 0x4C1E5Cu;
            goto label_4c1e5c;
        }
    }
    ctx->pc = 0x4C1E50u;
label_4c1e50:
    // 0x4c1e50: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x4c1e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_4c1e54:
    // 0x4c1e54: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4c1e58:
    if (ctx->pc == 0x4C1E58u) {
        ctx->pc = 0x4C1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E54u;
        // 0x4c1e58: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1E5Cu;
        goto label_4c1e5c;
    }
    ctx->pc = 0x4C1E54u;
    {
        const bool branch_taken_0x4c1e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E54u;
        // 0x4c1e58: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1e54) {
            ctx->pc = 0x4C1EC0u;
            goto label_4c1ec0;
        }
    }
    ctx->pc = 0x4C1E5Cu;
label_4c1e5c:
    // 0x4c1e5c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4c1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_4c1e60:
    // 0x4c1e60: 0x24854258  addiu       $a1, $a0, 0x4258
    ctx->pc = 0x4c1e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16984));
label_4c1e64:
    // 0x4c1e64: 0x90621bf8  lbu         $v0, 0x1BF8($v1)
    ctx->pc = 0x4c1e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7160)));
label_4c1e68:
    // 0x4c1e68: 0x24641bf8  addiu       $a0, $v1, 0x1BF8
    ctx->pc = 0x4c1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7160));
label_4c1e6c:
    // 0x4c1e6c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4c1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4c1e70:
    // 0x4c1e70: 0xa0624258  sb          $v0, 0x4258($v1)
    ctx->pc = 0x4c1e70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16984), (uint8_t)GPR_U32(ctx, 2));
label_4c1e74:
    // 0x4c1e74: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4c1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4c1e78:
    // 0x4c1e78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_4c1e7c:
    if (ctx->pc == 0x4C1E7Cu) {
        ctx->pc = 0x4C1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E78u;
        // 0x4c1e7c: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1E80u;
        goto label_4c1e80;
    }
    ctx->pc = 0x4C1E78u;
    {
        const bool branch_taken_0x4c1e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E78u;
        // 0x4c1e7c: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1e78) {
            ctx->pc = 0x4C1EA0u;
            goto label_4c1ea0;
        }
    }
    ctx->pc = 0x4C1E80u;
label_4c1e80:
    // 0x4c1e80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4c1e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4c1e84:
    // 0x4c1e84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c1e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4c1e88:
    // 0x4c1e88: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4c1e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4c1e8c:
    // 0x4c1e8c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x4c1e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4c1e90:
    // 0x4c1e90: 0x0  nop
    ctx->pc = 0x4c1e90u;
    // NOP
label_4c1e94:
    // 0x4c1e94: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4c1e98:
    if (ctx->pc == 0x4C1E98u) {
        ctx->pc = 0x4C1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E94u;
        // 0x4c1e98: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1E9Cu;
        goto label_4c1e9c;
    }
    ctx->pc = 0x4C1E94u;
    {
        const bool branch_taken_0x4c1e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1E94u;
        // 0x4c1e98: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1e94) {
            ctx->pc = 0x4C1E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1e80;
        }
    }
    ctx->pc = 0x4C1E9Cu;
label_4c1e9c:
    // 0x4c1e9c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x4c1e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_4c1ea0:
    // 0x4c1ea0: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x4c1ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_4c1ea4:
    // 0x4c1ea4: 0x544003c4  bnel        $v0, $zero, . + 4 + (0x3C4 << 2)
label_4c1ea8:
    if (ctx->pc == 0x4C1EA8u) {
        ctx->pc = 0x4C1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1EA4u;
        // 0x4c1ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1EACu;
        goto label_4c1eac;
    }
    ctx->pc = 0x4C1EA4u;
    {
        const bool branch_taken_0x4c1ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c1ea4) {
            ctx->pc = 0x4C1EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1EA4u;
            // 0x4c1ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2DB8u;
            goto label_4c2db8;
        }
    }
    ctx->pc = 0x4C1EACu;
label_4c1eac:
    // 0x4c1eac: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x4c1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_4c1eb0:
    // 0x4c1eb0: 0x40f809  jalr        $v0
label_4c1eb4:
    if (ctx->pc == 0x4C1EB4u) {
        ctx->pc = 0x4C1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1EB0u;
        // 0x4c1eb4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1EB8u;
        goto label_4c1eb8;
    }
    ctx->pc = 0x4C1EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C1EB8u);
        ctx->pc = 0x4C1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1EB0u;
        // 0x4c1eb4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1EB0u, 0x4C1EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C1EB8u;
label_4c1eb8:
    // 0x4c1eb8: 0x100003bf  b           . + 4 + (0x3BF << 2)
label_4c1ebc:
    if (ctx->pc == 0x4C1EBCu) {
        ctx->pc = 0x4C1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1EB8u;
        // 0x4c1ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1EC0u;
        goto label_4c1ec0;
    }
    ctx->pc = 0x4C1EB8u;
    {
        const bool branch_taken_0x4c1eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1EB8u;
        // 0x4c1ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1eb8) {
            ctx->pc = 0x4C2DB8u;
            goto label_4c2db8;
        }
    }
    ctx->pc = 0x4C1EC0u;
label_4c1ec0:
    // 0x4c1ec0: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x4c1ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_4c1ec4:
    // 0x4c1ec4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_4c1ec8:
    if (ctx->pc == 0x4C1EC8u) {
        ctx->pc = 0x4C1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1EC4u;
        // 0x4c1ec8: 0x8faa03b4  lw          $t2, 0x3B4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1ECCu;
        goto label_4c1ecc;
    }
    ctx->pc = 0x4C1EC4u;
    {
        const bool branch_taken_0x4c1ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1EC4u;
        // 0x4c1ec8: 0x8faa03b4  lw          $t2, 0x3B4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1ec4) {
            ctx->pc = 0x4C1F1Cu;
            goto label_4c1f1c;
        }
    }
    ctx->pc = 0x4C1ECCu;
label_4c1ecc:
    // 0x4c1ecc: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4c1eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_4c1ed0:
    // 0x4c1ed0: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4c1ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_4c1ed4:
    // 0x4c1ed4: 0x24854258  addiu       $a1, $a0, 0x4258
    ctx->pc = 0x4c1ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16984));
label_4c1ed8:
    // 0x4c1ed8: 0x90621c10  lbu         $v0, 0x1C10($v1)
    ctx->pc = 0x4c1ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7184)));
label_4c1edc:
    // 0x4c1edc: 0x24641c10  addiu       $a0, $v1, 0x1C10
    ctx->pc = 0x4c1edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7184));
label_4c1ee0:
    // 0x4c1ee0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4c1ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4c1ee4:
    // 0x4c1ee4: 0xa0624258  sb          $v0, 0x4258($v1)
    ctx->pc = 0x4c1ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16984), (uint8_t)GPR_U32(ctx, 2));
label_4c1ee8:
    // 0x4c1ee8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4c1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4c1eec:
    // 0x4c1eec: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
label_4c1ef0:
    if (ctx->pc == 0x4C1EF0u) {
        ctx->pc = 0x4C1EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1EECu;
        // 0x4c1ef0: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1EF4u;
        goto label_4c1ef4;
    }
    ctx->pc = 0x4C1EECu;
    {
        const bool branch_taken_0x4c1eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1EECu;
        // 0x4c1ef0: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1eec) {
            ctx->pc = 0x4C1EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1ea0;
        }
    }
    ctx->pc = 0x4C1EF4u;
label_4c1ef4:
    // 0x4c1ef4: 0x0  nop
    ctx->pc = 0x4c1ef4u;
    // NOP
label_4c1ef8:
    // 0x4c1ef8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4c1ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4c1efc:
    // 0x4c1efc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c1efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4c1f00:
    // 0x4c1f00: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4c1f00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4c1f04:
    // 0x4c1f04: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x4c1f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4c1f08:
    // 0x4c1f08: 0x0  nop
    ctx->pc = 0x4c1f08u;
    // NOP
label_4c1f0c:
    // 0x4c1f0c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4c1f10:
    if (ctx->pc == 0x4C1F10u) {
        ctx->pc = 0x4C1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1F0Cu;
        // 0x4c1f10: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1F14u;
        goto label_4c1f14;
    }
    ctx->pc = 0x4C1F0Cu;
    {
        const bool branch_taken_0x4c1f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1F0Cu;
        // 0x4c1f10: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1f0c) {
            ctx->pc = 0x4C1EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1ef8;
        }
    }
    ctx->pc = 0x4C1F14u;
label_4c1f14:
    // 0x4c1f14: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_4c1f18:
    if (ctx->pc == 0x4C1F18u) {
        ctx->pc = 0x4C1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1F14u;
        // 0x4c1f18: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1F1Cu;
        goto label_4c1f1c;
    }
    ctx->pc = 0x4C1F14u;
    {
        const bool branch_taken_0x4c1f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1F14u;
        // 0x4c1f18: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1f14) {
            ctx->pc = 0x4C1EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1ea0;
        }
    }
    ctx->pc = 0x4C1F1Cu;
label_4c1f1c:
    // 0x4c1f1c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c1f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4c1f20:
    // 0x4c1f20: 0x8fa903b8  lw          $t1, 0x3B8($sp)
    ctx->pc = 0x4c1f20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_4c1f24:
    // 0x4c1f24: 0x3c038fff  lui         $v1, 0x8FFF
    ctx->pc = 0x4c1f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36863 << 16));
label_4c1f28:
    // 0x4c1f28: 0x25450001  addiu       $a1, $t2, 0x1
    ctx->pc = 0x4c1f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_4c1f2c:
    // 0x4c1f2c: 0x8fa803c4  lw          $t0, 0x3C4($sp)
    ctx->pc = 0x4c1f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 964)));
label_4c1f30:
    // 0x4c1f30: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x4c1f30u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_4c1f34:
    // 0x4c1f34: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x4c1f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4c1f38:
    // 0x4c1f38: 0x34c6fff8  ori         $a2, $a2, 0xFFF8
    ctx->pc = 0x4c1f38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65528);
label_4c1f3c:
    // 0x4c1f3c: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x4c1f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_4c1f40:
    // 0x4c1f40: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x4c1f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_4c1f44:
    // 0x4c1f44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c1f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4c1f48:
    // 0x4c1f48: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4c1f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_4c1f4c:
    // 0x4c1f4c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4c1f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_4c1f50:
    // 0x4c1f50: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x4c1f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_4c1f54:
    // 0x4c1f54: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x4c1f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_4c1f58:
    // 0x4c1f58: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x4c1f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_4c1f5c:
    // 0x4c1f5c: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4c1f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_4c1f60:
    // 0x4c1f60: 0x55840  sll         $t3, $a1, 1
    ctx->pc = 0x4c1f60u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4c1f64:
    // 0x4c1f64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c1f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c1f68:
    // 0x4c1f68: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x4c1f68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4c1f6c:
    // 0x4c1f6c: 0xb3902  srl         $a3, $t3, 4
    ctx->pc = 0x4c1f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), 4));
label_4c1f70:
    // 0x4c1f70: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x4c1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_4c1f74:
    // 0x4c1f74: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x4c1f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
label_4c1f78:
    // 0x4c1f78: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x4c1f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_4c1f7c:
    // 0x4c1f7c: 0xafa700e0  sw          $a3, 0xE0($sp)
    ctx->pc = 0x4c1f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 7));
label_4c1f80:
    // 0x4c1f80: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x4c1f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
label_4c1f84:
    // 0x4c1f84: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x4c1f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
label_4c1f88:
    // 0x4c1f88: 0xafaa0254  sw          $t2, 0x254($sp)
    ctx->pc = 0x4c1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 10));
label_4c1f8c:
    // 0x4c1f8c: 0xafa90258  sw          $t1, 0x258($sp)
    ctx->pc = 0x4c1f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 9));
label_4c1f90:
    // 0x4c1f90: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x4c1f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
label_4c1f94:
    // 0x4c1f94: 0xafa500d4  sw          $a1, 0xD4($sp)
    ctx->pc = 0x4c1f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
label_4c1f98:
    // 0x4c1f98: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x4c1f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
label_4c1f9c:
    // 0x4c1f9c: 0xafab00cc  sw          $t3, 0xCC($sp)
    ctx->pc = 0x4c1f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 11));
label_4c1fa0:
    // 0x4c1fa0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4c1fa4:
    if (ctx->pc == 0x4C1FA4u) {
        ctx->pc = 0x4C1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1FA0u;
        // 0x4c1fa4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1FA8u;
        goto label_4c1fa8;
    }
    ctx->pc = 0x4C1FA0u;
    {
        const bool branch_taken_0x4c1fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1FA0u;
        // 0x4c1fa4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1fa0) {
            ctx->pc = 0x4C1FB8u;
            goto label_4c1fb8;
        }
    }
    ctx->pc = 0x4C1FA8u;
label_4c1fa8:
    // 0x4c1fa8: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x4c1fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_4c1fac:
    // 0x4c1fac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c1facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4c1fb0:
    // 0x4c1fb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c1fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c1fb4:
    // 0x4c1fb4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4c1fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_4c1fb8:
    // 0x4c1fb8: 0x3c02664b  lui         $v0, 0x664B
    ctx->pc = 0x4c1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26187 << 16));
label_4c1fbc:
    // 0x4c1fbc: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x4c1fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_4c1fc0:
    // 0x4c1fc0: 0x34424942  ori         $v0, $v0, 0x4942
    ctx->pc = 0x4c1fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18754);
label_4c1fc4:
    // 0x4c1fc4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_4c1fc8:
    if (ctx->pc == 0x4C1FC8u) {
        ctx->pc = 0x4C1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1FC4u;
        // 0x4c1fc8: 0x3c02674b  lui         $v0, 0x674B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26443 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1FCCu;
        goto label_4c1fcc;
    }
    ctx->pc = 0x4C1FC4u;
    {
        const bool branch_taken_0x4c1fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1FC4u;
        // 0x4c1fc8: 0x3c02674b  lui         $v0, 0x674B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26443 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1fc4) {
            ctx->pc = 0x4C1FD8u;
            goto label_4c1fd8;
        }
    }
    ctx->pc = 0x4C1FCCu;
label_4c1fcc:
    // 0x4c1fcc: 0x34424942  ori         $v0, $v0, 0x4942
    ctx->pc = 0x4c1fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18754);
label_4c1fd0:
    // 0x4c1fd0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_4c1fd4:
    if (ctx->pc == 0x4C1FD4u) {
        ctx->pc = 0x4C1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1FD0u;
        // 0x4c1fd4: 0x3c02684b  lui         $v0, 0x684B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26699 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1FD8u;
        goto label_4c1fd8;
    }
    ctx->pc = 0x4C1FD0u;
    {
        const bool branch_taken_0x4c1fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1FD0u;
        // 0x4c1fd4: 0x3c02684b  lui         $v0, 0x684B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26699 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1fd0) {
            ctx->pc = 0x4C1FF0u;
            goto label_4c1ff0;
        }
    }
    ctx->pc = 0x4C1FD8u;
label_4c1fd8:
    // 0x4c1fd8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4c1fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4c1fdc:
    // 0x4c1fdc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c1fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4c1fe0:
    // 0x4c1fe0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4c1fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4c1fe4:
    // 0x4c1fe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c1fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c1fe8:
    // 0x4c1fe8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4c1fec:
    if (ctx->pc == 0x4C1FECu) {
        ctx->pc = 0x4C1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1FE8u;
        // 0x4c1fec: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1FF0u;
        goto label_4c1ff0;
    }
    ctx->pc = 0x4C1FE8u;
    {
        const bool branch_taken_0x4c1fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1FE8u;
        // 0x4c1fec: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1fe8) {
            ctx->pc = 0x4C2008u;
            goto label_4c2008;
        }
    }
    ctx->pc = 0x4C1FF0u;
label_4c1ff0:
    // 0x4c1ff0: 0x34424942  ori         $v0, $v0, 0x4942
    ctx->pc = 0x4c1ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18754);
label_4c1ff4:
    // 0x4c1ff4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_4c1ff8:
    if (ctx->pc == 0x4C1FF8u) {
        ctx->pc = 0x4C1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1FF4u;
        // 0x4c1ff8: 0x8fa203a8  lw          $v0, 0x3A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1FFCu;
        goto label_4c1ffc;
    }
    ctx->pc = 0x4C1FF4u;
    {
        const bool branch_taken_0x4c1ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1FF4u;
        // 0x4c1ff8: 0x8fa203a8  lw          $v0, 0x3A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1ff4) {
            ctx->pc = 0x4C200Cu;
            goto label_4c200c;
        }
    }
    ctx->pc = 0x4C1FFCu;
label_4c1ffc:
    // 0x4c1ffc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4c1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4c2000:
    // 0x4c2000: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4c2000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4c2004:
    // 0x4c2004: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4c2004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_4c2008:
    // 0x4c2008: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x4c2008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_4c200c:
    // 0x4c200c: 0x32c41000  andi        $a0, $s6, 0x1000
    ctx->pc = 0x4c200cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4096);
label_4c2010:
    // 0x4c2010: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x4c2010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_4c2014:
    // 0x4c2014: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4c2014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_4c2018:
    // 0x4c2018: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4c201c:
    if (ctx->pc == 0x4C201Cu) {
        ctx->pc = 0x4C201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2018u;
        // 0x4c201c: 0xafa300ec  sw          $v1, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2020u;
        goto label_4c2020;
    }
    ctx->pc = 0x4C2018u;
    {
        const bool branch_taken_0x4c2018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2018u;
        // 0x4c201c: 0xafa300ec  sw          $v1, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2018) {
            ctx->pc = 0x4C2044u;
            goto label_4c2044;
        }
    }
    ctx->pc = 0x4C2020u;
label_4c2020:
    // 0x4c2020: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4c2020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_4c2024:
    // 0x4c2024: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4c2024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c2028:
    // 0x4c2028: 0x8ca42794  lw          $a0, 0x2794($a1)
    ctx->pc = 0x4c2028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10132)));
label_4c202c:
    // 0x4c202c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_4c2030:
    if (ctx->pc == 0x4C2030u) {
        ctx->pc = 0x4C2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C202Cu;
        // 0x4c2030: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2034u;
        goto label_4c2034;
    }
    ctx->pc = 0x4C202Cu;
    {
        const bool branch_taken_0x4c202c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C202Cu;
        // 0x4c2030: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c202c) {
            ctx->pc = 0x4C2044u;
            goto label_4c2044;
        }
    }
    ctx->pc = 0x4C2034u;
label_4c2034:
    // 0x4c2034: 0xaca32794  sw          $v1, 0x2794($a1)
    ctx->pc = 0x4c2034u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 10132), GPR_U32(ctx, 3));
label_4c2038:
    // 0x4c2038: 0x8c434358  lw          $v1, 0x4358($v0)
    ctx->pc = 0x4c2038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17240)));
label_4c203c:
    // 0x4c203c: 0x10000004  b           . + 4 + (0x4 << 2)
label_4c2040:
    if (ctx->pc == 0x4C2040u) {
        ctx->pc = 0x4C2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C203Cu;
        // 0x4c2040: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2044u;
        goto label_4c2044;
    }
    ctx->pc = 0x4C203Cu;
    {
        const bool branch_taken_0x4c203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C203Cu;
        // 0x4c2040: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c203c) {
            ctx->pc = 0x4C2050u;
            goto label_4c2050;
        }
    }
    ctx->pc = 0x4C2044u;
label_4c2044:
    // 0x4c2044: 0x8fa203bc  lw          $v0, 0x3BC($sp)
    ctx->pc = 0x4c2044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
label_4c2048:
    // 0x4c2048: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x4c2048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_4c204c:
    // 0x4c204c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4c204cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_4c2050:
    // 0x4c2050: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x4c2050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_4c2054:
    // 0x4c2054: 0x8fa603c0  lw          $a2, 0x3C0($sp)
    ctx->pc = 0x4c2054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_4c2058:
    // 0x4c2058: 0x8fa903bc  lw          $t1, 0x3BC($sp)
    ctx->pc = 0x4c2058u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
label_4c205c:
    // 0x4c205c: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x4c205cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_4c2060:
    // 0x4c2060: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x4c2060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_4c2064:
    // 0x4c2064: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4c2064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_4c2068:
    // 0x4c2068: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x4c2068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_4c206c:
    // 0x4c206c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x4c206cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4c2070:
    // 0x4c2070: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x4c2070u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_4c2074:
    // 0x4c2074: 0x8fa503a4  lw          $a1, 0x3A4($sp)
    ctx->pc = 0x4c2074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 932)));
label_4c2078:
    // 0x4c2078: 0x8fa703ac  lw          $a3, 0x3AC($sp)
    ctx->pc = 0x4c2078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 940)));
label_4c207c:
    // 0x4c207c: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x4c207cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_4c2080:
    // 0x4c2080: 0xafa700e8  sw          $a3, 0xE8($sp)
    ctx->pc = 0x4c2080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
label_4c2084:
    // 0x4c2084: 0xafa902bc  sw          $t1, 0x2BC($sp)
    ctx->pc = 0x4c2084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 9));
label_4c2088:
    // 0x4c2088: 0xafa602c0  sw          $a2, 0x2C0($sp)
    ctx->pc = 0x4c2088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 6));
label_4c208c:
    // 0x4c208c: 0x1812  mflo        $v1
    ctx->pc = 0x4c208cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4c2090:
    // 0x4c2090: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x4c2090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4c2094:
    // 0x4c2094: 0xafa302c4  sw          $v1, 0x2C4($sp)
    ctx->pc = 0x4c2094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 3));
label_4c2098:
    // 0x4c2098: 0x8fa403c8  lw          $a0, 0x3C8($sp)
    ctx->pc = 0x4c2098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_4c209c:
    // 0x4c209c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x4c209cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
label_4c20a0:
    // 0x4c20a0: 0x24182  srl         $t0, $v0, 6
    ctx->pc = 0x4c20a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_4c20a4:
    // 0x4c20a4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x4c20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_4c20a8:
    // 0x4c20a8: 0xafa802fc  sw          $t0, 0x2FC($sp)
    ctx->pc = 0x4c20a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 8));
label_4c20ac:
    // 0x4c20ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_4c20b0:
    if (ctx->pc == 0x4C20B0u) {
        ctx->pc = 0x4C20B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C20ACu;
        // 0x4c20b0: 0xafa200e4  sw          $v0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C20B4u;
        goto label_4c20b4;
    }
    ctx->pc = 0x4C20ACu;
    {
        const bool branch_taken_0x4c20ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C20B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C20ACu;
        // 0x4c20b0: 0xafa200e4  sw          $v0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c20ac) {
            ctx->pc = 0x4C20BCu;
            goto label_4c20bc;
        }
    }
    ctx->pc = 0x4C20B4u;
label_4c20b4:
    // 0x4c20b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c20b8:
    // 0x4c20b8: 0xafa202c4  sw          $v0, 0x2C4($sp)
    ctx->pc = 0x4c20b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 2));
label_4c20bc:
    // 0x4c20bc: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x4c20bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_4c20c0:
    // 0x4c20c0: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x4c20c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_4c20c4:
    // 0x4c20c4: 0xc1322ac  jal         func_4C8AB0
label_4c20c8:
    if (ctx->pc == 0x4C20C8u) {
        ctx->pc = 0x4C20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C20C4u;
        // 0x4c20c8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C20CCu;
        goto label_4c20cc;
    }
    ctx->pc = 0x4C20C4u;
    SET_GPR_U32(ctx, 31, 0x4C20CCu);
    ctx->pc = 0x4C20C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C20C4u;
    // 0x4c20c8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C20C4u, 0x4C20CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C20CCu;
label_4c20cc:
    // 0x4c20cc: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x4c20ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_4c20d0:
    // 0x4c20d0: 0x27a402cc  addiu       $a0, $sp, 0x2CC
    ctx->pc = 0x4c20d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_4c20d4:
    // 0x4c20d4: 0xc1322ac  jal         func_4C8AB0
label_4c20d8:
    if (ctx->pc == 0x4C20D8u) {
        ctx->pc = 0x4C20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C20D4u;
        // 0x4c20d8: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C20DCu;
        goto label_4c20dc;
    }
    ctx->pc = 0x4C20D4u;
    SET_GPR_U32(ctx, 31, 0x4C20DCu);
    ctx->pc = 0x4C20D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C20D4u;
    // 0x4c20d8: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C20D4u, 0x4C20DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C20DCu;
label_4c20dc:
    // 0x4c20dc: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x4c20dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_4c20e0:
    // 0x4c20e0: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x4c20e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_4c20e4:
    // 0x4c20e4: 0xc1322ac  jal         func_4C8AB0
label_4c20e8:
    if (ctx->pc == 0x4C20E8u) {
        ctx->pc = 0x4C20E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C20E4u;
        // 0x4c20e8: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C20ECu;
        goto label_4c20ec;
    }
    ctx->pc = 0x4C20E4u;
    SET_GPR_U32(ctx, 31, 0x4C20ECu);
    ctx->pc = 0x4C20E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C20E4u;
    // 0x4c20e8: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C20E4u, 0x4C20ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C20ECu;
label_4c20ec:
    // 0x4c20ec: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x4c20ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_4c20f0:
    // 0x4c20f0: 0x27a402d4  addiu       $a0, $sp, 0x2D4
    ctx->pc = 0x4c20f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 724));
label_4c20f4:
    // 0x4c20f4: 0xc1322ac  jal         func_4C8AB0
label_4c20f8:
    if (ctx->pc == 0x4C20F8u) {
        ctx->pc = 0x4C20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C20F4u;
        // 0x4c20f8: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C20FCu;
        goto label_4c20fc;
    }
    ctx->pc = 0x4C20F4u;
    SET_GPR_U32(ctx, 31, 0x4C20FCu);
    ctx->pc = 0x4C20F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C20F4u;
    // 0x4c20f8: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C20F4u, 0x4C20FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C20FCu;
label_4c20fc:
    // 0x4c20fc: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x4c20fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_4c2100:
    // 0x4c2100: 0x27a402d8  addiu       $a0, $sp, 0x2D8
    ctx->pc = 0x4c2100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_4c2104:
    // 0x4c2104: 0xc1322ac  jal         func_4C8AB0
label_4c2108:
    if (ctx->pc == 0x4C2108u) {
        ctx->pc = 0x4C2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2104u;
        // 0x4c2108: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C210Cu;
        goto label_4c210c;
    }
    ctx->pc = 0x4C2104u;
    SET_GPR_U32(ctx, 31, 0x4C210Cu);
    ctx->pc = 0x4C2108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2104u;
    // 0x4c2108: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C2104u, 0x4C210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C210Cu;
label_4c210c:
    // 0x4c210c: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x4c210cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_4c2110:
    // 0x4c2110: 0x27a402dc  addiu       $a0, $sp, 0x2DC
    ctx->pc = 0x4c2110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 732));
label_4c2114:
    // 0x4c2114: 0xc1322ac  jal         func_4C8AB0
label_4c2118:
    if (ctx->pc == 0x4C2118u) {
        ctx->pc = 0x4C2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2114u;
        // 0x4c2118: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C211Cu;
        goto label_4c211c;
    }
    ctx->pc = 0x4C2114u;
    SET_GPR_U32(ctx, 31, 0x4C211Cu);
    ctx->pc = 0x4C2118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2114u;
    // 0x4c2118: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C2114u, 0x4C211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C211Cu;
label_4c211c:
    // 0x4c211c: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x4c211cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_4c2120:
    // 0x4c2120: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x4c2120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_4c2124:
    // 0x4c2124: 0xc1322ac  jal         func_4C8AB0
label_4c2128:
    if (ctx->pc == 0x4C2128u) {
        ctx->pc = 0x4C2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2124u;
        // 0x4c2128: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C212Cu;
        goto label_4c212c;
    }
    ctx->pc = 0x4C2124u;
    SET_GPR_U32(ctx, 31, 0x4C212Cu);
    ctx->pc = 0x4C2128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2124u;
    // 0x4c2128: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C2124u, 0x4C212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C212Cu;
label_4c212c:
    // 0x4c212c: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x4c212cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_4c2130:
    // 0x4c2130: 0x27a402e4  addiu       $a0, $sp, 0x2E4
    ctx->pc = 0x4c2130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
label_4c2134:
    // 0x4c2134: 0xc1322ac  jal         func_4C8AB0
label_4c2138:
    if (ctx->pc == 0x4C2138u) {
        ctx->pc = 0x4C2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2134u;
        // 0x4c2138: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C213Cu;
        goto label_4c213c;
    }
    ctx->pc = 0x4C2134u;
    SET_GPR_U32(ctx, 31, 0x4C213Cu);
    ctx->pc = 0x4C2138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2134u;
    // 0x4c2138: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C2134u, 0x4C213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C213Cu;
label_4c213c:
    // 0x4c213c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c213cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4c2140:
    // 0x4c2140: 0x8c4527a0  lw          $a1, 0x27A0($v0)
    ctx->pc = 0x4c2140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10144)));
label_4c2144:
    // 0x4c2144: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_4c2148:
    if (ctx->pc == 0x4C2148u) {
        ctx->pc = 0x4C2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2144u;
        // 0x4c2148: 0x27a40308  addiu       $a0, $sp, 0x308 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C214Cu;
        goto label_4c214c;
    }
    ctx->pc = 0x4C2144u;
    {
        const bool branch_taken_0x4c2144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2144u;
        // 0x4c2148: 0x27a40308  addiu       $a0, $sp, 0x308 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2144) {
            ctx->pc = 0x4C2158u;
            goto label_4c2158;
        }
    }
    ctx->pc = 0x4C214Cu;
label_4c214c:
    // 0x4c214c: 0x2402017c  addiu       $v0, $zero, 0x17C
    ctx->pc = 0x4c214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
label_4c2150:
    // 0x4c2150: 0x10000002  b           . + 4 + (0x2 << 2)
label_4c2154:
    if (ctx->pc == 0x4C2154u) {
        ctx->pc = 0x4C2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2150u;
        // 0x4c2154: 0xa22818  mult        $a1, $a1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2158u;
        goto label_4c2158;
    }
    ctx->pc = 0x4C2150u;
    {
        const bool branch_taken_0x4c2150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2150u;
        // 0x4c2154: 0xa22818  mult        $a1, $a1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2150) {
            ctx->pc = 0x4C215Cu;
            goto label_4c215c;
        }
    }
    ctx->pc = 0x4C2158u;
label_4c2158:
    // 0x4c2158: 0x2405017c  addiu       $a1, $zero, 0x17C
    ctx->pc = 0x4c2158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
label_4c215c:
    // 0x4c215c: 0xc1322ac  jal         func_4C8AB0
label_4c2160:
    if (ctx->pc == 0x4C2160u) {
        ctx->pc = 0x4C2164u;
        goto label_4c2164;
    }
    ctx->pc = 0x4C215Cu;
    SET_GPR_U32(ctx, 31, 0x4C2164u);
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C215Cu, 0x4C2164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2164u;
label_4c2164:
    // 0x4c2164: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c2164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4c2168:
    // 0x4c2168: 0x27a4025c  addiu       $a0, $sp, 0x25C
    ctx->pc = 0x4c2168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_4c216c:
    // 0x4c216c: 0x8c4527a0  lw          $a1, 0x27A0($v0)
    ctx->pc = 0x4c216cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10144)));
label_4c2170:
    // 0x4c2170: 0xc1322ac  jal         func_4C8AB0
label_4c2174:
    if (ctx->pc == 0x4C2174u) {
        ctx->pc = 0x4C2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2170u;
        // 0x4c2174: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2178u;
        goto label_4c2178;
    }
    ctx->pc = 0x4C2170u;
    SET_GPR_U32(ctx, 31, 0x4C2178u);
    ctx->pc = 0x4C2174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2170u;
    // 0x4c2174: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C2170u, 0x4C2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2178u;
label_4c2178:
    // 0x4c2178: 0x27b00318  addiu       $s0, $sp, 0x318
    ctx->pc = 0x4c2178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_4c217c:
    // 0x4c217c: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x4c217cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_4c2180:
    // 0x4c2180: 0xc131bf6  jal         func_4C6FD8
label_4c2184:
    if (ctx->pc == 0x4C2184u) {
        ctx->pc = 0x4C2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2180u;
        // 0x4c2184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2188u;
        goto label_4c2188;
    }
    ctx->pc = 0x4C2180u;
    SET_GPR_U32(ctx, 31, 0x4C2188u);
    ctx->pc = 0x4C2184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2180u;
    // 0x4c2184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C6FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C6FD8u, 0x4C2180u, 0x4C2188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2188u;
label_4c2188:
    // 0x4c2188: 0x8fa50318  lw          $a1, 0x318($sp)
    ctx->pc = 0x4c2188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
label_4c218c:
    // 0x4c218c: 0xc1322ac  jal         func_4C8AB0
label_4c2190:
    if (ctx->pc == 0x4C2190u) {
        ctx->pc = 0x4C2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C218Cu;
        // 0x4c2190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2194u;
        goto label_4c2194;
    }
    ctx->pc = 0x4C218Cu;
    SET_GPR_U32(ctx, 31, 0x4C2194u);
    ctx->pc = 0x4C2190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C218Cu;
    // 0x4c2190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C218Cu, 0x4C2194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2194u;
label_4c2194:
    // 0x4c2194: 0x8fa5031c  lw          $a1, 0x31C($sp)
    ctx->pc = 0x4c2194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
label_4c2198:
    // 0x4c2198: 0xc1322ac  jal         func_4C8AB0
label_4c219c:
    if (ctx->pc == 0x4C219Cu) {
        ctx->pc = 0x4C219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2198u;
        // 0x4c219c: 0x27a4031c  addiu       $a0, $sp, 0x31C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 796));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C21A0u;
        goto label_4c21a0;
    }
    ctx->pc = 0x4C2198u;
    SET_GPR_U32(ctx, 31, 0x4C21A0u);
    ctx->pc = 0x4C219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2198u;
    // 0x4c219c: 0x27a4031c  addiu       $a0, $sp, 0x31C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 796));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C2198u, 0x4C21A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C21A0u;
label_4c21a0:
    // 0x4c21a0: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x4c21a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
label_4c21a4:
    // 0x4c21a4: 0xc1322ac  jal         func_4C8AB0
label_4c21a8:
    if (ctx->pc == 0x4C21A8u) {
        ctx->pc = 0x4C21A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C21A4u;
        // 0x4c21a8: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C21ACu;
        goto label_4c21ac;
    }
    ctx->pc = 0x4C21A4u;
    SET_GPR_U32(ctx, 31, 0x4C21ACu);
    ctx->pc = 0x4C21A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C21A4u;
    // 0x4c21a8: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C21A4u, 0x4C21ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C21ACu;
label_4c21ac:
    // 0x4c21ac: 0x8fa50324  lw          $a1, 0x324($sp)
    ctx->pc = 0x4c21acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_4c21b0:
    // 0x4c21b0: 0xc1322ac  jal         func_4C8AB0
label_4c21b4:
    if (ctx->pc == 0x4C21B4u) {
        ctx->pc = 0x4C21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C21B0u;
        // 0x4c21b4: 0x27a40324  addiu       $a0, $sp, 0x324 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 804));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C21B8u;
        goto label_4c21b8;
    }
    ctx->pc = 0x4C21B0u;
    SET_GPR_U32(ctx, 31, 0x4C21B8u);
    ctx->pc = 0x4C21B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C21B0u;
    // 0x4c21b4: 0x27a40324  addiu       $a0, $sp, 0x324 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 804));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C21B0u, 0x4C21B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C21B8u;
label_4c21b8:
    // 0x4c21b8: 0x8fa50328  lw          $a1, 0x328($sp)
    ctx->pc = 0x4c21b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_4c21bc:
    // 0x4c21bc: 0xc1322ac  jal         func_4C8AB0
label_4c21c0:
    if (ctx->pc == 0x4C21C0u) {
        ctx->pc = 0x4C21C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C21BCu;
        // 0x4c21c0: 0x27a40328  addiu       $a0, $sp, 0x328 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C21C4u;
        goto label_4c21c4;
    }
    ctx->pc = 0x4C21BCu;
    SET_GPR_U32(ctx, 31, 0x4C21C4u);
    ctx->pc = 0x4C21C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C21BCu;
    // 0x4c21c0: 0x27a40328  addiu       $a0, $sp, 0x328 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C21BCu, 0x4C21C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C21C4u;
label_4c21c4:
    // 0x4c21c4: 0x8fa5032c  lw          $a1, 0x32C($sp)
    ctx->pc = 0x4c21c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
label_4c21c8:
    // 0x4c21c8: 0xc1322ac  jal         func_4C8AB0
label_4c21cc:
    if (ctx->pc == 0x4C21CCu) {
        ctx->pc = 0x4C21CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C21C8u;
        // 0x4c21cc: 0x27a4032c  addiu       $a0, $sp, 0x32C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 812));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C21D0u;
        goto label_4c21d0;
    }
    ctx->pc = 0x4C21C8u;
    SET_GPR_U32(ctx, 31, 0x4C21D0u);
    ctx->pc = 0x4C21CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C21C8u;
    // 0x4c21cc: 0x27a4032c  addiu       $a0, $sp, 0x32C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 812));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C21C8u, 0x4C21D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C21D0u;
label_4c21d0:
    // 0x4c21d0: 0x8fa50330  lw          $a1, 0x330($sp)
    ctx->pc = 0x4c21d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
label_4c21d4:
    // 0x4c21d4: 0xc1322ac  jal         func_4C8AB0
label_4c21d8:
    if (ctx->pc == 0x4C21D8u) {
        ctx->pc = 0x4C21D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C21D4u;
        // 0x4c21d8: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C21DCu;
        goto label_4c21dc;
    }
    ctx->pc = 0x4C21D4u;
    SET_GPR_U32(ctx, 31, 0x4C21DCu);
    ctx->pc = 0x4C21D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C21D4u;
    // 0x4c21d8: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C21D4u, 0x4C21DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C21DCu;
label_4c21dc:
    // 0x4c21dc: 0x8fa50334  lw          $a1, 0x334($sp)
    ctx->pc = 0x4c21dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 820)));
label_4c21e0:
    // 0x4c21e0: 0xc1322ac  jal         func_4C8AB0
label_4c21e4:
    if (ctx->pc == 0x4C21E4u) {
        ctx->pc = 0x4C21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C21E0u;
        // 0x4c21e4: 0x27a40334  addiu       $a0, $sp, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 820));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C21E8u;
        goto label_4c21e8;
    }
    ctx->pc = 0x4C21E0u;
    SET_GPR_U32(ctx, 31, 0x4C21E8u);
    ctx->pc = 0x4C21E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C21E0u;
    // 0x4c21e4: 0x27a40334  addiu       $a0, $sp, 0x334 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 820));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C21E0u, 0x4C21E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C21E8u;
label_4c21e8:
    // 0x4c21e8: 0x8fa50338  lw          $a1, 0x338($sp)
    ctx->pc = 0x4c21e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
label_4c21ec:
    // 0x4c21ec: 0xc1322ac  jal         func_4C8AB0
label_4c21f0:
    if (ctx->pc == 0x4C21F0u) {
        ctx->pc = 0x4C21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C21ECu;
        // 0x4c21f0: 0x27a40338  addiu       $a0, $sp, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C21F4u;
        goto label_4c21f4;
    }
    ctx->pc = 0x4C21ECu;
    SET_GPR_U32(ctx, 31, 0x4C21F4u);
    ctx->pc = 0x4C21F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C21ECu;
    // 0x4c21f0: 0x27a40338  addiu       $a0, $sp, 0x338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C21ECu, 0x4C21F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C21F4u;
label_4c21f4:
    // 0x4c21f4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x4c21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_4c21f8:
    // 0x4c21f8: 0x2c28024  and         $s0, $s6, $v0
    ctx->pc = 0x4c21f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_4c21fc:
    // 0x4c21fc: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
label_4c2200:
    if (ctx->pc == 0x4C2200u) {
        ctx->pc = 0x4C2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C21FCu;
        // 0x4c2200: 0x8fa500ec  lw          $a1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2204u;
        goto label_4c2204;
    }
    ctx->pc = 0x4C21FCu;
    {
        const bool branch_taken_0x4c21fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C21FCu;
        // 0x4c2200: 0x8fa500ec  lw          $a1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c21fc) {
            ctx->pc = 0x4C2244u;
            goto label_4c2244;
        }
    }
    ctx->pc = 0x4C2204u;
label_4c2204:
    // 0x4c2204: 0x27a4010c  addiu       $a0, $sp, 0x10C
    ctx->pc = 0x4c2204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_4c2208:
    // 0x4c2208: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c2208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4c220c:
    // 0x4c220c: 0xc1322ac  jal         func_4C8AB0
label_4c2210:
    if (ctx->pc == 0x4C2210u) {
        ctx->pc = 0x4C2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C220Cu;
        // 0x4c2210: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2214u;
        goto label_4c2214;
    }
    ctx->pc = 0x4C220Cu;
    SET_GPR_U32(ctx, 31, 0x4C2214u);
    ctx->pc = 0x4C2210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C220Cu;
    // 0x4c2210: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C220Cu, 0x4C2214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2214u;
label_4c2214:
    // 0x4c2214: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x4c2214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4c2218:
    // 0x4c2218: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x4c2218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_4c221c:
    // 0x4c221c: 0xc1322ac  jal         func_4C8AB0
label_4c2220:
    if (ctx->pc == 0x4C2220u) {
        ctx->pc = 0x4C2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C221Cu;
        // 0x4c2220: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2224u;
        goto label_4c2224;
    }
    ctx->pc = 0x4C221Cu;
    SET_GPR_U32(ctx, 31, 0x4C2224u);
    ctx->pc = 0x4C2220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C221Cu;
    // 0x4c2220: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C221Cu, 0x4C2224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2224u;
label_4c2224:
    // 0x4c2224: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x4c2224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4c2228:
    // 0x4c2228: 0x27a40264  addiu       $a0, $sp, 0x264
    ctx->pc = 0x4c2228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
label_4c222c:
    // 0x4c222c: 0xc1322ac  jal         func_4C8AB0
label_4c2230:
    if (ctx->pc == 0x4C2230u) {
        ctx->pc = 0x4C2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C222Cu;
        // 0x4c2230: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2234u;
        goto label_4c2234;
    }
    ctx->pc = 0x4C222Cu;
    SET_GPR_U32(ctx, 31, 0x4C2234u);
    ctx->pc = 0x4C2230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C222Cu;
    // 0x4c2230: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C222Cu, 0x4C2234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2234u;
label_4c2234:
    // 0x4c2234: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x4c2234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4c2238:
    // 0x4c2238: 0x27a40268  addiu       $a0, $sp, 0x268
    ctx->pc = 0x4c2238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
label_4c223c:
    // 0x4c223c: 0xc1322ac  jal         func_4C8AB0
label_4c2240:
    if (ctx->pc == 0x4C2240u) {
        ctx->pc = 0x4C2240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C223Cu;
        // 0x4c2240: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2244u;
        goto label_4c2244;
    }
    ctx->pc = 0x4C223Cu;
    SET_GPR_U32(ctx, 31, 0x4C2244u);
    ctx->pc = 0x4C2240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C223Cu;
    // 0x4c2240: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C223Cu, 0x4C2244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2244u;
label_4c2244:
    // 0x4c2244: 0xc13232c  jal         func_4C8CB0
label_4c2248:
    if (ctx->pc == 0x4C2248u) {
        ctx->pc = 0x4C224Cu;
        goto label_4c224c;
    }
    ctx->pc = 0x4C2244u;
    SET_GPR_U32(ctx, 31, 0x4C224Cu);
    ctx->pc = 0x4C8CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8CB0u, 0x4C2244u, 0x4C224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C224Cu;
label_4c224c:
    // 0x4c224c: 0x8fa302a8  lw          $v1, 0x2A8($sp)
    ctx->pc = 0x4c224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_4c2250:
    // 0x4c2250: 0x24420398  addiu       $v0, $v0, 0x398
    ctx->pc = 0x4c2250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 920));
label_4c2254:
    // 0x4c2254: 0x24040398  addiu       $a0, $zero, 0x398
    ctx->pc = 0x4c2254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
label_4c2258:
    // 0x4c2258: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c2258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c225c:
    // 0x4c225c: 0xc132300  jal         func_4C8C00
label_4c2260:
    if (ctx->pc == 0x4C2260u) {
        ctx->pc = 0x4C2260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C225Cu;
        // 0x4c2260: 0xafa302a8  sw          $v1, 0x2A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2264u;
        goto label_4c2264;
    }
    ctx->pc = 0x4C225Cu;
    SET_GPR_U32(ctx, 31, 0x4C2264u);
    ctx->pc = 0x4C2260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C225Cu;
    // 0x4c2260: 0xafa302a8  sw          $v1, 0x2A8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8C00u, 0x4C225Cu, 0x4C2264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2264u;
label_4c2264:
    // 0x4c2264: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4c2264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c2268:
    // 0x4c2268: 0x16200014  bnez        $s1, . + 4 + (0x14 << 2)
label_4c226c:
    if (ctx->pc == 0x4C226Cu) {
        ctx->pc = 0x4C226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2268u;
        // 0x4c226c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2270u;
        goto label_4c2270;
    }
    ctx->pc = 0x4C2268u;
    {
        const bool branch_taken_0x4c2268 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2268u;
        // 0x4c226c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2268) {
            ctx->pc = 0x4C22BCu;
            goto label_4c22bc;
        }
    }
    ctx->pc = 0x4C2270u;
label_4c2270:
    // 0x4c2270: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4c2270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_4c2274:
    // 0x4c2274: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4c2274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_4c2278:
    // 0x4c2278: 0x24854258  addiu       $a1, $a0, 0x4258
    ctx->pc = 0x4c2278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16984));
label_4c227c:
    // 0x4c227c: 0x90621c48  lbu         $v0, 0x1C48($v1)
    ctx->pc = 0x4c227cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7240)));
label_4c2280:
    // 0x4c2280: 0x24641c48  addiu       $a0, $v1, 0x1C48
    ctx->pc = 0x4c2280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7240));
label_4c2284:
    // 0x4c2284: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4c2284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4c2288:
    // 0x4c2288: 0xa0624258  sb          $v0, 0x4258($v1)
    ctx->pc = 0x4c2288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16984), (uint8_t)GPR_U32(ctx, 2));
label_4c228c:
    // 0x4c228c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4c228cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4c2290:
    // 0x4c2290: 0x1040ff03  beqz        $v0, . + 4 + (-0xFD << 2)
label_4c2294:
    if (ctx->pc == 0x4C2294u) {
        ctx->pc = 0x4C2294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2290u;
        // 0x4c2294: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2298u;
        goto label_4c2298;
    }
    ctx->pc = 0x4C2290u;
    {
        const bool branch_taken_0x4c2290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2290u;
        // 0x4c2294: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2290) {
            ctx->pc = 0x4C1EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1ea0;
        }
    }
    ctx->pc = 0x4C2298u;
label_4c2298:
    // 0x4c2298: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4c2298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4c229c:
    // 0x4c229c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c229cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4c22a0:
    // 0x4c22a0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4c22a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4c22a4:
    // 0x4c22a4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x4c22a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4c22a8:
    // 0x4c22a8: 0x0  nop
    ctx->pc = 0x4c22a8u;
    // NOP
label_4c22ac:
    // 0x4c22ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4c22b0:
    if (ctx->pc == 0x4C22B0u) {
        ctx->pc = 0x4C22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C22ACu;
        // 0x4c22b0: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C22B4u;
        goto label_4c22b4;
    }
    ctx->pc = 0x4C22ACu;
    {
        const bool branch_taken_0x4c22ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C22ACu;
        // 0x4c22b0: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c22ac) {
            ctx->pc = 0x4C2298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c2298;
        }
    }
    ctx->pc = 0x4C22B4u;
label_4c22b4:
    // 0x4c22b4: 0x1000fefa  b           . + 4 + (-0x106 << 2)
label_4c22b8:
    if (ctx->pc == 0x4C22B8u) {
        ctx->pc = 0x4C22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C22B4u;
        // 0x4c22b8: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C22BCu;
        goto label_4c22bc;
    }
    ctx->pc = 0x4C22B4u;
    {
        const bool branch_taken_0x4c22b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C22B4u;
        // 0x4c22b8: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c22b4) {
            ctx->pc = 0x4C1EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1ea0;
        }
    }
    ctx->pc = 0x4C22BCu;
label_4c22bc:
    // 0x4c22bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4c22bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4c22c0:
    // 0x4c22c0: 0xc133518  jal         func_4CD460
label_4c22c4:
    if (ctx->pc == 0x4C22C4u) {
        ctx->pc = 0x4C22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C22C0u;
        // 0x4c22c4: 0x24060398  addiu       $a2, $zero, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C22C8u;
        goto label_4c22c8;
    }
    ctx->pc = 0x4C22C0u;
    SET_GPR_U32(ctx, 31, 0x4C22C8u);
    ctx->pc = 0x4C22C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C22C0u;
    // 0x4c22c4: 0x24060398  addiu       $a2, $zero, 0x398 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4C22C0u, 0x4C22C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C22C8u;
label_4c22c8:
    // 0x4c22c8: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x4c22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
label_4c22cc:
    // 0x4c22cc: 0x8e2302d4  lw          $v1, 0x2D4($s1)
    ctx->pc = 0x4c22ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 724)));
label_4c22d0:
    // 0x4c22d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4c22d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4c22d4:
    // 0x4c22d4: 0x8e2402d8  lw          $a0, 0x2D8($s1)
    ctx->pc = 0x4c22d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
label_4c22d8:
    // 0x4c22d8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4c22d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4c22dc:
    // 0x4c22dc: 0x8e2502dc  lw          $a1, 0x2DC($s1)
    ctx->pc = 0x4c22dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
label_4c22e0:
    // 0x4c22e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4c22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_4c22e4:
    // 0x4c22e4: 0x8e2302e0  lw          $v1, 0x2E0($s1)
    ctx->pc = 0x4c22e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
label_4c22e8:
    // 0x4c22e8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4c22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_4c22ec:
    // 0x4c22ec: 0x8e2202e4  lw          $v0, 0x2E4($s1)
    ctx->pc = 0x4c22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_4c22f0:
    // 0x4c22f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4c22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4c22f4:
    // 0x4c22f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4c22f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4c22f8:
    // 0x4c22f8: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_4c22fc:
    if (ctx->pc == 0x4C22FCu) {
        ctx->pc = 0x4C22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C22F8u;
        // 0x4c22fc: 0xae310128  sw          $s1, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2300u;
        goto label_4c2300;
    }
    ctx->pc = 0x4C22F8u;
    {
        const bool branch_taken_0x4c22f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C22F8u;
        // 0x4c22fc: 0xae310128  sw          $s1, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c22f8) {
            ctx->pc = 0x4C2344u;
            goto label_4c2344;
        }
    }
    ctx->pc = 0x4C2300u;
label_4c2300:
    // 0x4c2300: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x4c2300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_4c2304:
    // 0x4c2304: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x4c2304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4c2308:
    // 0x4c2308: 0x26a5002c  addiu       $a1, $s5, 0x2C
    ctx->pc = 0x4c2308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 44));
label_4c230c:
    // 0x4c230c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x4c230cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4c2310:
    // 0x4c2310: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4c2310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c2314:
    // 0x4c2314: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4c2314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4c2318:
    // 0x4c2318: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x4c2318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_4c231c:
    // 0x4c231c: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x4c231cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_4c2320:
    // 0x4c2320: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x4c2320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_4c2324:
    // 0x4c2324: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4c2324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4c2328:
    // 0x4c2328: 0xae250260  sw          $a1, 0x260($s1)
    ctx->pc = 0x4c2328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 5));
label_4c232c:
    // 0x4c232c: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x4c232cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
label_4c2330:
    // 0x4c2330: 0xae240264  sw          $a0, 0x264($s1)
    ctx->pc = 0x4c2330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 4));
label_4c2334:
    // 0x4c2334: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x4c2334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_4c2338:
    // 0x4c2338: 0xae220268  sw          $v0, 0x268($s1)
    ctx->pc = 0x4c2338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 2));
label_4c233c:
    // 0x4c233c: 0x10000035  b           . + 4 + (0x35 << 2)
label_4c2340:
    if (ctx->pc == 0x4C2340u) {
        ctx->pc = 0x4C2340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C233Cu;
        // 0x4c2340: 0xae23010c  sw          $v1, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2344u;
        goto label_4c2344;
    }
    ctx->pc = 0x4C233Cu;
    {
        const bool branch_taken_0x4c233c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C233Cu;
        // 0x4c2340: 0xae23010c  sw          $v1, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c233c) {
            ctx->pc = 0x4C2414u;
            goto label_4c2414;
        }
    }
    ctx->pc = 0x4C2344u;
label_4c2344:
    // 0x4c2344: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x4c2344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_4c2348:
    // 0x4c2348: 0x26300110  addiu       $s0, $s1, 0x110
    ctx->pc = 0x4c2348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_4c234c:
    // 0x4c234c: 0x8e260260  lw          $a2, 0x260($s1)
    ctx->pc = 0x4c234cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_4c2350:
    // 0x4c2350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c2350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c2354:
    // 0x4c2354: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x4c2354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_4c2358:
    // 0x4c2358: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x4c2358u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4c235c:
    // 0x4c235c: 0x40f809  jalr        $v0
label_4c2360:
    if (ctx->pc == 0x4C2360u) {
        ctx->pc = 0x4C2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C235Cu;
        // 0x4c2360: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2364u;
        goto label_4c2364;
    }
    ctx->pc = 0x4C235Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C2364u);
        ctx->pc = 0x4C2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C235Cu;
        // 0x4c2360: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C235Cu, 0x4C2364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C2364u;
label_4c2364:
    // 0x4c2364: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x4c2364u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_4c2368:
    // 0x4c2368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c2368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c236c:
    // 0x4c236c: 0x8e260264  lw          $a2, 0x264($s1)
    ctx->pc = 0x4c236cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_4c2370:
    // 0x4c2370: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4c2370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c2374:
    // 0x4c2374: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x4c2374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_4c2378:
    // 0x4c2378: 0x40f809  jalr        $v0
label_4c237c:
    if (ctx->pc == 0x4C237Cu) {
        ctx->pc = 0x4C237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2378u;
        // 0x4c237c: 0x73880  sll         $a3, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2380u;
        goto label_4c2380;
    }
    ctx->pc = 0x4C2378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C2380u);
        ctx->pc = 0x4C237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2378u;
        // 0x4c237c: 0x73880  sll         $a3, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C2378u, 0x4C2380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C2380u;
label_4c2380:
    // 0x4c2380: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x4c2380u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_4c2384:
    // 0x4c2384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c2384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c2388:
    // 0x4c2388: 0x8e260268  lw          $a2, 0x268($s1)
    ctx->pc = 0x4c2388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
label_4c238c:
    // 0x4c238c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4c238cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c2390:
    // 0x4c2390: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x4c2390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_4c2394:
    // 0x4c2394: 0x40f809  jalr        $v0
label_4c2398:
    if (ctx->pc == 0x4C2398u) {
        ctx->pc = 0x4C2398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2394u;
        // 0x4c2398: 0x73880  sll         $a3, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C239Cu;
        goto label_4c239c;
    }
    ctx->pc = 0x4C2394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C239Cu);
        ctx->pc = 0x4C2398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2394u;
        // 0x4c2398: 0x73880  sll         $a3, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C2394u, 0x4C239Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C239Cu;
label_4c239c:
    // 0x4c239c: 0x8e2700ec  lw          $a3, 0xEC($s1)
    ctx->pc = 0x4c239cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_4c23a0:
    // 0x4c23a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c23a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c23a4:
    // 0x4c23a4: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x4c23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_4c23a8:
    // 0x4c23a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4c23a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c23ac:
    // 0x4c23ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4c23acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4c23b0:
    // 0x4c23b0: 0x8e26010c  lw          $a2, 0x10C($s1)
    ctx->pc = 0x4c23b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_4c23b4:
    // 0x4c23b4: 0x40f809  jalr        $v0
label_4c23b8:
    if (ctx->pc == 0x4C23B8u) {
        ctx->pc = 0x4C23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C23B4u;
        // 0x4c23b8: 0x73880  sll         $a3, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C23BCu;
        goto label_4c23bc;
    }
    ctx->pc = 0x4C23B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C23BCu);
        ctx->pc = 0x4C23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C23B4u;
        // 0x4c23b8: 0x73880  sll         $a3, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C23B4u, 0x4C23BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C23BCu;
label_4c23bc:
    // 0x4c23bc: 0x8e23012c  lw          $v1, 0x12C($s1)
    ctx->pc = 0x4c23bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_4c23c0:
    // 0x4c23c0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_4c23c4:
    if (ctx->pc == 0x4C23C4u) {
        ctx->pc = 0x4C23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C23C0u;
        // 0x4c23c4: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C23C8u;
        goto label_4c23c8;
    }
    ctx->pc = 0x4C23C0u;
    {
        const bool branch_taken_0x4c23c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C23C0u;
        // 0x4c23c4: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c23c0) {
            ctx->pc = 0x4C2414u;
            goto label_4c2414;
        }
    }
    ctx->pc = 0x4C23C8u;
label_4c23c8:
    // 0x4c23c8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4c23c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_4c23cc:
    // 0x4c23cc: 0x24854258  addiu       $a1, $a0, 0x4258
    ctx->pc = 0x4c23ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16984));
label_4c23d0:
    // 0x4c23d0: 0x90621c58  lbu         $v0, 0x1C58($v1)
    ctx->pc = 0x4c23d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7256)));
label_4c23d4:
    // 0x4c23d4: 0x24641c58  addiu       $a0, $v1, 0x1C58
    ctx->pc = 0x4c23d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7256));
label_4c23d8:
    // 0x4c23d8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4c23d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4c23dc:
    // 0x4c23dc: 0xa0624258  sb          $v0, 0x4258($v1)
    ctx->pc = 0x4c23dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16984), (uint8_t)GPR_U32(ctx, 2));
label_4c23e0:
    // 0x4c23e0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4c23e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4c23e4:
    // 0x4c23e4: 0x1040feae  beqz        $v0, . + 4 + (-0x152 << 2)
label_4c23e8:
    if (ctx->pc == 0x4C23E8u) {
        ctx->pc = 0x4C23E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C23E4u;
        // 0x4c23e8: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C23ECu;
        goto label_4c23ec;
    }
    ctx->pc = 0x4C23E4u;
    {
        const bool branch_taken_0x4c23e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C23E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C23E4u;
        // 0x4c23e8: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c23e4) {
            ctx->pc = 0x4C1EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1ea0;
        }
    }
    ctx->pc = 0x4C23ECu;
label_4c23ec:
    // 0x4c23ec: 0x0  nop
    ctx->pc = 0x4c23ecu;
    // NOP
label_4c23f0:
    // 0x4c23f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4c23f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4c23f4:
    // 0x4c23f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c23f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4c23f8:
    // 0x4c23f8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4c23f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4c23fc:
    // 0x4c23fc: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x4c23fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4c2400:
    // 0x4c2400: 0x0  nop
    ctx->pc = 0x4c2400u;
    // NOP
label_4c2404:
    // 0x4c2404: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4c2408:
    if (ctx->pc == 0x4C2408u) {
        ctx->pc = 0x4C2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2404u;
        // 0x4c2408: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C240Cu;
        goto label_4c240c;
    }
    ctx->pc = 0x4C2404u;
    {
        const bool branch_taken_0x4c2404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2404u;
        // 0x4c2408: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2404) {
            ctx->pc = 0x4C23F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c23f0;
        }
    }
    ctx->pc = 0x4C240Cu;
label_4c240c:
    // 0x4c240c: 0x1000fea4  b           . + 4 + (-0x15C << 2)
label_4c2410:
    if (ctx->pc == 0x4C2410u) {
        ctx->pc = 0x4C2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C240Cu;
        // 0x4c2410: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2414u;
        goto label_4c2414;
    }
    ctx->pc = 0x4C240Cu;
    {
        const bool branch_taken_0x4c240c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C240Cu;
        // 0x4c2410: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c240c) {
            ctx->pc = 0x4C1EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1ea0;
        }
    }
    ctx->pc = 0x4C2414u;
label_4c2414:
    // 0x4c2414: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x4c2414u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4c2418:
    // 0x4c2418: 0x263e00f8  addiu       $fp, $s1, 0xF8
    ctx->pc = 0x4c2418u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
label_4c241c:
    // 0x4c241c: 0x8e2502c4  lw          $a1, 0x2C4($s1)
    ctx->pc = 0x4c241cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 708)));
label_4c2420:
    // 0x4c2420: 0x27b703d0  addiu       $s7, $sp, 0x3D0
    ctx->pc = 0x4c2420u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_4c2424:
    // 0x4c2424: 0x8e30010c  lw          $s0, 0x10C($s1)
    ctx->pc = 0x4c2424u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_4c2428:
    // 0x4c2428: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4c2428u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c242c:
    // 0x4c242c: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x4c242cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_4c2430:
    // 0x4c2430: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4c2430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c2434:
    // 0x4c2434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4c2434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c2438:
    // 0x4c2438: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
label_4c243c:
    if (ctx->pc == 0x4C243Cu) {
        ctx->pc = 0x4C243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2438u;
        // 0x4c243c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2440u;
        goto label_4c2440;
    }
    ctx->pc = 0x4C2438u;
    {
        const bool branch_taken_0x4c2438 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4C243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2438u;
        // 0x4c243c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2438) {
            ctx->pc = 0x4C2484u;
            goto label_4c2484;
        }
    }
    ctx->pc = 0x4C2440u;
label_4c2440:
    // 0x4c2440: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4c2440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4c2444:
    // 0x4c2444: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x4c2444u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c2448:
    // 0x4c2448: 0x504021  addu        $t0, $v0, $s0
    ctx->pc = 0x4c2448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4c244c:
    // 0x4c244c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4c244cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c2450:
    // 0x4c2450: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4c2450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4c2454:
    // 0x4c2454: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4c2454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4c2458:
    // 0x4c2458: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c2458u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c245c:
    // 0x4c245c: 0x122202b  sltu        $a0, $t1, $v0
    ctx->pc = 0x4c245cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c2460:
    // 0x4c2460: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_4c2464:
    if (ctx->pc == 0x4C2464u) {
        ctx->pc = 0x4C2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2460u;
        // 0x4c2464: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2468u;
        goto label_4c2468;
    }
    ctx->pc = 0x4C2460u;
    {
        const bool branch_taken_0x4c2460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2460) {
            ctx->pc = 0x4C2464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2460u;
            // 0x4c2464: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2474u;
            goto label_4c2474;
        }
    }
    ctx->pc = 0x4C2468u;
label_4c2468:
    // 0x4c2468: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4c2468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c246c:
    // 0x4c246c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4c246cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4c2470:
    // 0x4c2470: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4c2470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4c2474:
    // 0x4c2474: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4c2474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_4c2478:
    // 0x4c2478: 0xca102a  slt         $v0, $a2, $t2
    ctx->pc = 0x4c2478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_4c247c:
    // 0x4c247c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4c2480:
    if (ctx->pc == 0x4C2480u) {
        ctx->pc = 0x4C2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C247Cu;
        // 0x4c2480: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2484u;
        goto label_4c2484;
    }
    ctx->pc = 0x4C247Cu;
    {
        const bool branch_taken_0x4c247c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C247Cu;
        // 0x4c2480: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c247c) {
            ctx->pc = 0x4C2450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c2450;
        }
    }
    ctx->pc = 0x4C2484u;
label_4c2484:
    // 0x4c2484: 0x15200008  bnez        $t1, . + 4 + (0x8 << 2)
label_4c2488:
    if (ctx->pc == 0x4C2488u) {
        ctx->pc = 0x4C2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2484u;
        // 0x4c2488: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C248Cu;
        goto label_4c248c;
    }
    ctx->pc = 0x4C2484u;
    {
        const bool branch_taken_0x4c2484 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2484u;
        // 0x4c2488: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2484) {
            ctx->pc = 0x4C24A8u;
            goto label_4c24a8;
        }
    }
    ctx->pc = 0x4C248Cu;
label_4c248c:
    // 0x4c248c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c2490:
    // 0x4c2490: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4c2490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4c2494:
    // 0x4c2494: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4c2494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c2498:
    // 0x4c2498: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c2498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c249c:
    // 0x4c249c: 0xc13399c  jal         func_4CE670
label_4c24a0:
    if (ctx->pc == 0x4C24A0u) {
        ctx->pc = 0x4C24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C249Cu;
        // 0x4c24a0: 0x832023  subu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C24A4u;
        goto label_4c24a4;
    }
    ctx->pc = 0x4C249Cu;
    SET_GPR_U32(ctx, 31, 0x4C24A4u);
    ctx->pc = 0x4C24A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C249Cu;
    // 0x4c24a0: 0x832023  subu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4C249Cu, 0x4C24A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C24A4u;
label_4c24a4:
    // 0x4c24a4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4c24a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c24a8:
    // 0x4c24a8: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
label_4c24ac:
    if (ctx->pc == 0x4C24ACu) {
        ctx->pc = 0x4C24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C24A8u;
        // 0x4c24ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C24B0u;
        goto label_4c24b0;
    }
    ctx->pc = 0x4C24A8u;
    {
        const bool branch_taken_0x4c24a8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x4C24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C24A8u;
        // 0x4c24ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c24a8) {
            ctx->pc = 0x4C24ECu;
            goto label_4c24ec;
        }
    }
    ctx->pc = 0x4C24B0u;
label_4c24b0:
    // 0x4c24b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4c24b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c24b4:
    // 0x4c24b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4c24b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4c24b8:
    // 0x4c24b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_4c24bc:
    if (ctx->pc == 0x4C24BCu) {
        ctx->pc = 0x4C24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C24B8u;
        // 0x4c24bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C24C0u;
        goto label_4c24c0;
    }
    ctx->pc = 0x4C24B8u;
    {
        const bool branch_taken_0x4c24b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c24b8) {
            ctx->pc = 0x4C24BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C24B8u;
            // 0x4c24bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C24ECu;
            goto label_4c24ec;
        }
    }
    ctx->pc = 0x4C24C0u;
label_4c24c0:
    // 0x4c24c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4c24c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4c24c4:
    // 0x4c24c4: 0x0  nop
    ctx->pc = 0x4c24c4u;
    // NOP
label_4c24c8:
    // 0x4c24c8: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x4c24c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_4c24cc:
    // 0x4c24cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4c24d0:
    if (ctx->pc == 0x4C24D0u) {
        ctx->pc = 0x4C24D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C24CCu;
        // 0x4c24d0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C24D4u;
        goto label_4c24d4;
    }
    ctx->pc = 0x4C24CCu;
    {
        const bool branch_taken_0x4c24cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C24D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C24CCu;
        // 0x4c24d0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c24cc) {
            ctx->pc = 0x4C24ECu;
            goto label_4c24ec;
        }
    }
    ctx->pc = 0x4C24D4u;
label_4c24d4:
    // 0x4c24d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4c24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4c24d8:
    // 0x4c24d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c24d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c24dc:
    // 0x4c24dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4c24dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4c24e0:
    // 0x4c24e0: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_4c24e4:
    if (ctx->pc == 0x4C24E4u) {
        ctx->pc = 0x4C24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C24E0u;
        // 0x4c24e4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C24E8u;
        goto label_4c24e8;
    }
    ctx->pc = 0x4C24E0u;
    {
        const bool branch_taken_0x4c24e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c24e0) {
            ctx->pc = 0x4C24E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C24E0u;
            // 0x4c24e4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C24C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c24c8;
        }
    }
    ctx->pc = 0x4C24E8u;
label_4c24e8:
    // 0x4c24e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c24e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c24ec:
    // 0x4c24ec: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x4c24ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
label_4c24f0:
    // 0x4c24f0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x4c24f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_4c24f4:
    // 0x4c24f4: 0xafd40000  sw          $s4, 0x0($fp)
    ctx->pc = 0x4c24f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 20));
label_4c24f8:
    // 0x4c24f8: 0xae2900f4  sw          $t1, 0xF4($s1)
    ctx->pc = 0x4c24f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 9));
label_4c24fc:
    // 0x4c24fc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x4c24fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4c2500:
    // 0x4c2500: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c2500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4c2504:
    // 0x4c2504: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_4c2508:
    if (ctx->pc == 0x4C2508u) {
        ctx->pc = 0x4C2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2504u;
        // 0x4c2508: 0x8fa203d0  lw          $v0, 0x3D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C250Cu;
        goto label_4c250c;
    }
    ctx->pc = 0x4C2504u;
    {
        const bool branch_taken_0x4c2504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2504u;
        // 0x4c2508: 0x8fa203d0  lw          $v0, 0x3D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2504) {
            ctx->pc = 0x4C254Cu;
            goto label_4c254c;
        }
    }
    ctx->pc = 0x4C250Cu;
label_4c250c:
    // 0x4c250c: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x4c250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_4c2510:
    // 0x4c2510: 0x8e2500d0  lw          $a1, 0xD0($s1)
    ctx->pc = 0x4c2510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_4c2514:
    // 0x4c2514: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x4c2514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4c2518:
    // 0x4c2518: 0x2812  mflo        $a1
    ctx->pc = 0x4c2518u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_4c251c:
    // 0x4c251c: 0xc1322ac  jal         func_4C8AB0
label_4c2520:
    if (ctx->pc == 0x4C2520u) {
        ctx->pc = 0x4C2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C251Cu;
        // 0x4c2520: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2524u;
        goto label_4c2524;
    }
    ctx->pc = 0x4C251Cu;
    SET_GPR_U32(ctx, 31, 0x4C2524u);
    ctx->pc = 0x4C2520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C251Cu;
    // 0x4c2520: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C251Cu, 0x4C2524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2524u;
label_4c2524:
    // 0x4c2524: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x4c2524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_4c2528:
    // 0x4c2528: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_4c252c:
    if (ctx->pc == 0x4C252Cu) {
        ctx->pc = 0x4C252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2528u;
        // 0x4c252c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2530u;
        goto label_4c2530;
    }
    ctx->pc = 0x4C2528u;
    {
        const bool branch_taken_0x4c2528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c2528) {
            ctx->pc = 0x4C252Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2528u;
            // 0x4c252c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2580u;
            goto label_4c2580;
        }
    }
    ctx->pc = 0x4C2530u;
label_4c2530:
    // 0x4c2530: 0x8e2500d0  lw          $a1, 0xD0($s1)
    ctx->pc = 0x4c2530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_4c2534:
    // 0x4c2534: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x4c2534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_4c2538:
    // 0x4c2538: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x4c2538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4c253c:
    // 0x4c253c: 0x2812  mflo        $a1
    ctx->pc = 0x4c253cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_4c2540:
    // 0x4c2540: 0xc1322ac  jal         func_4C8AB0
label_4c2544:
    if (ctx->pc == 0x4C2544u) {
        ctx->pc = 0x4C2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2540u;
        // 0x4c2544: 0x262400c8  addiu       $a0, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2548u;
        goto label_4c2548;
    }
    ctx->pc = 0x4C2540u;
    SET_GPR_U32(ctx, 31, 0x4C2548u);
    ctx->pc = 0x4C2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2540u;
    // 0x4c2544: 0x262400c8  addiu       $a0, $s1, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C2540u, 0x4C2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2548u;
label_4c2548:
    // 0x4c2548: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x4c2548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_4c254c:
    // 0x4c254c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_4c2550:
    if (ctx->pc == 0x4C2550u) {
        ctx->pc = 0x4C2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C254Cu;
        // 0x4c2550: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2554u;
        goto label_4c2554;
    }
    ctx->pc = 0x4C254Cu;
    {
        const bool branch_taken_0x4c254c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c254c) {
            ctx->pc = 0x4C2550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C254Cu;
            // 0x4c2550: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2580u;
            goto label_4c2580;
        }
    }
    ctx->pc = 0x4C2554u;
label_4c2554:
    // 0x4c2554: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x4c2554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_4c2558:
    // 0x4c2558: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x4c2558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_4c255c:
    // 0x4c255c: 0x8e2600d8  lw          $a2, 0xD8($s1)
    ctx->pc = 0x4c255cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_4c2560:
    // 0x4c2560: 0x8e2500cc  lw          $a1, 0xCC($s1)
    ctx->pc = 0x4c2560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_4c2564:
    // 0x4c2564: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x4c2564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_4c2568:
    // 0x4c2568: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x4c2568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4c256c:
    // 0x4c256c: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x4c256cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4c2570:
    // 0x4c2570: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c2570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4c2574:
    // 0x4c2574: 0xc1322ac  jal         func_4C8AB0
label_4c2578:
    if (ctx->pc == 0x4C2578u) {
        ctx->pc = 0x4C2578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2574u;
        // 0x4c2578: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C257Cu;
        goto label_4c257c;
    }
    ctx->pc = 0x4C2574u;
    SET_GPR_U32(ctx, 31, 0x4C257Cu);
    ctx->pc = 0x4C2578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2574u;
    // 0x4c2578: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C2574u, 0x4C257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C257Cu;
label_4c257c:
    // 0x4c257c: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x4c257cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_4c2580:
    // 0x4c2580: 0x8e3000d4  lw          $s0, 0xD4($s1)
    ctx->pc = 0x4c2580u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_4c2584:
    // 0x4c2584: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x4c2584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_4c2588:
    // 0x4c2588: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x4c2588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_4c258c:
    // 0x4c258c: 0x2048018  mult        $s0, $s0, $a0
    ctx->pc = 0x4c258cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_4c2590:
    // 0x4c2590: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4c2590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4c2594:
    // 0x4c2594: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x4c2594u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4c2598:
    // 0x4c2598: 0xc13232c  jal         func_4C8CB0
label_4c259c:
    if (ctx->pc == 0x4C259Cu) {
        ctx->pc = 0x4C259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2598u;
        // 0x4c259c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C25A0u;
        goto label_4c25a0;
    }
    ctx->pc = 0x4C2598u;
    SET_GPR_U32(ctx, 31, 0x4C25A0u);
    ctx->pc = 0x4C259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2598u;
    // 0x4c259c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8CB0u, 0x4C2598u, 0x4C25A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C25A0u;
label_4c25a0:
    // 0x4c25a0: 0x8e2302a8  lw          $v1, 0x2A8($s1)
    ctx->pc = 0x4c25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_4c25a4:
    // 0x4c25a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4c25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4c25a8:
    // 0x4c25a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c25a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c25ac:
    // 0x4c25ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c25acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c25b0:
    // 0x4c25b0: 0xc132300  jal         func_4C8C00
label_4c25b4:
    if (ctx->pc == 0x4C25B4u) {
        ctx->pc = 0x4C25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C25B0u;
        // 0x4c25b4: 0xae2302a8  sw          $v1, 0x2A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C25B8u;
        goto label_4c25b8;
    }
    ctx->pc = 0x4C25B0u;
    SET_GPR_U32(ctx, 31, 0x4C25B8u);
    ctx->pc = 0x4C25B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C25B0u;
    // 0x4c25b4: 0xae2302a8  sw          $v1, 0x2A8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8C00u, 0x4C25B0u, 0x4C25B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C25B8u;
label_4c25b8:
    // 0x4c25b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4c25b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c25bc:
    // 0x4c25bc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_4c25c0:
    if (ctx->pc == 0x4C25C0u) {
        ctx->pc = 0x4C25C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C25BCu;
        // 0x4c25c0: 0xae2300bc  sw          $v1, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C25C4u;
        goto label_4c25c4;
    }
    ctx->pc = 0x4C25BCu;
    {
        const bool branch_taken_0x4c25bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C25C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C25BCu;
        // 0x4c25c0: 0xae2300bc  sw          $v1, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c25bc) {
            ctx->pc = 0x4C25D4u;
            goto label_4c25d4;
        }
    }
    ctx->pc = 0x4C25C4u;
label_4c25c4:
    // 0x4c25c4: 0xc132364  jal         func_4C8D90
label_4c25c8:
    if (ctx->pc == 0x4C25C8u) {
        ctx->pc = 0x4C25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C25C4u;
        // 0x4c25c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C25CCu;
        goto label_4c25cc;
    }
    ctx->pc = 0x4C25C4u;
    SET_GPR_U32(ctx, 31, 0x4C25CCu);
    ctx->pc = 0x4C25C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C25C4u;
    // 0x4c25c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8D90u, 0x4C25C4u, 0x4C25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C25CCu;
label_4c25cc:
    // 0x4c25cc: 0x1000ff29  b           . + 4 + (-0xD7 << 2)
label_4c25d0:
    if (ctx->pc == 0x4C25D0u) {
        ctx->pc = 0x4C25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C25CCu;
        // 0x4c25d0: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C25D4u;
        goto label_4c25d4;
    }
    ctx->pc = 0x4C25CCu;
    {
        const bool branch_taken_0x4c25cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C25CCu;
        // 0x4c25d0: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c25cc) {
            ctx->pc = 0x4C2274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c2274;
        }
    }
    ctx->pc = 0x4C25D4u;
label_4c25d4:
    // 0x4c25d4: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x4c25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_4c25d8:
    // 0x4c25d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c25dc:
    if (ctx->pc == 0x4C25DCu) {
        ctx->pc = 0x4C25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C25D8u;
        // 0x4c25dc: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C25E0u;
        goto label_4c25e0;
    }
    ctx->pc = 0x4C25D8u;
    {
        const bool branch_taken_0x4c25d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C25D8u;
        // 0x4c25dc: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c25d8) {
            ctx->pc = 0x4C25F0u;
            goto label_4c25f0;
        }
    }
    ctx->pc = 0x4C25E0u;
label_4c25e0:
    // 0x4c25e0: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x4c25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_4c25e4:
    // 0x4c25e4: 0xae2300c0  sw          $v1, 0xC0($s1)
    ctx->pc = 0x4c25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 3));
label_4c25e8:
    // 0x4c25e8: 0xae2200c8  sw          $v0, 0xC8($s1)
    ctx->pc = 0x4c25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
label_4c25ec:
    // 0x4c25ec: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x4c25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_4c25f0:
    // 0x4c25f0: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x4c25f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_4c25f4:
    // 0x4c25f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c25f8:
    if (ctx->pc == 0x4C25F8u) {
        ctx->pc = 0x4C25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C25F4u;
        // 0x4c25f8: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C25FCu;
        goto label_4c25fc;
    }
    ctx->pc = 0x4C25F4u;
    {
        const bool branch_taken_0x4c25f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C25F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C25F4u;
        // 0x4c25f8: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c25f4) {
            ctx->pc = 0x4C2618u;
            goto label_4c2618;
        }
    }
    ctx->pc = 0x4C25FCu;
label_4c25fc:
    // 0x4c25fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4c25fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c2600:
    // 0x4c2600: 0x8c822798  lw          $v0, 0x2798($a0)
    ctx->pc = 0x4c2600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10136)));
label_4c2604:
    // 0x4c2604: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
label_4c2608:
    if (ctx->pc == 0x4C2608u) {
        ctx->pc = 0x4C2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2604u;
        // 0x4c2608: 0x8e2200f4  lw          $v0, 0xF4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C260Cu;
        goto label_4c260c;
    }
    ctx->pc = 0x4C2604u;
    {
        const bool branch_taken_0x4c2604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c2604) {
            ctx->pc = 0x4C2608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2604u;
            // 0x4c2608: 0x8e2200f4  lw          $v0, 0xF4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C261Cu;
            goto label_4c261c;
        }
    }
    ctx->pc = 0x4C260Cu;
label_4c260c:
    // 0x4c260c: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x4c260cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_4c2610:
    // 0x4c2610: 0x10000003  b           . + 4 + (0x3 << 2)
label_4c2614:
    if (ctx->pc == 0x4C2614u) {
        ctx->pc = 0x4C2614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2610u;
        // 0x4c2614: 0xac832798  sw          $v1, 0x2798($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2618u;
        goto label_4c2618;
    }
    ctx->pc = 0x4C2610u;
    {
        const bool branch_taken_0x4c2610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2610u;
        // 0x4c2614: 0xac832798  sw          $v1, 0x2798($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2610) {
            ctx->pc = 0x4C2620u;
            goto label_4c2620;
        }
    }
    ctx->pc = 0x4C2618u;
label_4c2618:
    // 0x4c2618: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x4c2618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_4c261c:
    // 0x4c261c: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x4c261cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_4c2620:
    // 0x4c2620: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x4c2620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_4c2624:
    // 0x4c2624: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x4c2624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_4c2628:
    // 0x4c2628: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4c262c:
    if (ctx->pc == 0x4C262Cu) {
        ctx->pc = 0x4C262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2628u;
        // 0x4c262c: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2630u;
        goto label_4c2630;
    }
    ctx->pc = 0x4C2628u;
    {
        const bool branch_taken_0x4c2628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2628u;
        // 0x4c262c: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2628) {
            ctx->pc = 0x4C2648u;
            goto label_4c2648;
        }
    }
    ctx->pc = 0x4C2630u;
label_4c2630:
    // 0x4c2630: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4c2630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c2634:
    // 0x4c2634: 0x8c68279c  lw          $t0, 0x279C($v1)
    ctx->pc = 0x4c2634u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10140)));
label_4c2638:
    // 0x4c2638: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
label_4c263c:
    if (ctx->pc == 0x4C263Cu) {
        ctx->pc = 0x4C263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2638u;
        // 0x4c263c: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2640u;
        goto label_4c2640;
    }
    ctx->pc = 0x4C2638u;
    {
        const bool branch_taken_0x4c2638 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x4C263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2638u;
        // 0x4c263c: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2638) {
            ctx->pc = 0x4C2648u;
            goto label_4c2648;
        }
    }
    ctx->pc = 0x4C2640u;
label_4c2640:
    // 0x4c2640: 0x10000002  b           . + 4 + (0x2 << 2)
label_4c2644:
    if (ctx->pc == 0x4C2644u) {
        ctx->pc = 0x4C2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2640u;
        // 0x4c2644: 0xac62279c  sw          $v0, 0x279C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2648u;
        goto label_4c2648;
    }
    ctx->pc = 0x4C2640u;
    {
        const bool branch_taken_0x4c2640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2640u;
        // 0x4c2644: 0xac62279c  sw          $v0, 0x279C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2640) {
            ctx->pc = 0x4C264Cu;
            goto label_4c264c;
        }
    }
    ctx->pc = 0x4C2648u;
label_4c2648:
    // 0x4c2648: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4c2648u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c264c:
    // 0x4c264c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x4c264cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_4c2650:
    // 0x4c2650: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x4c2650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_4c2654:
    // 0x4c2654: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_4c2658:
    if (ctx->pc == 0x4C2658u) {
        ctx->pc = 0x4C2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2654u;
        // 0x4c2658: 0x8e250250  lw          $a1, 0x250($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C265Cu;
        goto label_4c265c;
    }
    ctx->pc = 0x4C2654u;
    {
        const bool branch_taken_0x4c2654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2654) {
            ctx->pc = 0x4C2658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2654u;
            // 0x4c2658: 0x8e250250  lw          $a1, 0x250($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C267Cu;
            goto label_4c267c;
        }
    }
    ctx->pc = 0x4C265Cu;
label_4c265c:
    // 0x4c265c: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x4c265cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_4c2660:
    // 0x4c2660: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c2660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4c2664:
    // 0x4c2664: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x4c2664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
label_4c2668:
    // 0x4c2668: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c2668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c266c:
    // 0x4c266c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c266cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4c2670:
    // 0x4c2670: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4c2670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4c2674:
    // 0x4c2674: 0x10000057  b           . + 4 + (0x57 << 2)
label_4c2678:
    if (ctx->pc == 0x4C2678u) {
        ctx->pc = 0x4C2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2674u;
        // 0x4c2678: 0xae220108  sw          $v0, 0x108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C267Cu;
        goto label_4c267c;
    }
    ctx->pc = 0x4C2674u;
    {
        const bool branch_taken_0x4c2674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2674u;
        // 0x4c2678: 0xae220108  sw          $v0, 0x108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2674) {
            ctx->pc = 0x4C27D4u;
            goto label_4c27d4;
        }
    }
    ctx->pc = 0x4C267Cu;
label_4c267c:
    // 0x4c267c: 0x26330110  addiu       $s3, $s1, 0x110
    ctx->pc = 0x4c267cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_4c2680:
    // 0x4c2680: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x4c2680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_4c2684:
    // 0x4c2684: 0x40f809  jalr        $v0
label_4c2688:
    if (ctx->pc == 0x4C2688u) {
        ctx->pc = 0x4C2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2684u;
        // 0x4c2688: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C268Cu;
        goto label_4c268c;
    }
    ctx->pc = 0x4C2684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C268Cu);
        ctx->pc = 0x4C2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2684u;
        // 0x4c2688: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C2684u, 0x4C268Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C268Cu;
label_4c268c:
    // 0x4c268c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x4c268cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_4c2690:
    // 0x4c2690: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4c2690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4c2694:
    // 0x4c2694: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x4c2694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_4c2698:
    // 0x4c2698: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x4c2698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4c269c:
    // 0x4c269c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c269cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c26a0:
    // 0x4c26a0: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x4c26a0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4c26a4:
    // 0x4c26a4: 0x1812  mflo        $v1
    ctx->pc = 0x4c26a4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4c26a8:
    // 0x4c26a8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4c26a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c26ac:
    // 0x4c26ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4c26b0:
    if (ctx->pc == 0x4C26B0u) {
        ctx->pc = 0x4C26B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C26ACu;
        // 0x4c26b0: 0x32c22000  andi        $v0, $s6, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C26B4u;
        goto label_4c26b4;
    }
    ctx->pc = 0x4C26ACu;
    {
        const bool branch_taken_0x4c26ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C26B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C26ACu;
        // 0x4c26b0: 0x32c22000  andi        $v0, $s6, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c26ac) {
            ctx->pc = 0x4C26C8u;
            goto label_4c26c8;
        }
    }
    ctx->pc = 0x4C26B4u;
label_4c26b4:
    // 0x4c26b4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x4c26b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4c26b8:
    // 0x4c26b8: 0x36d62000  ori         $s6, $s6, 0x2000
    ctx->pc = 0x4c26b8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)8192);
label_4c26bc:
    // 0x4c26bc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4c26bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_4c26c0:
    // 0x4c26c0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x4c26c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_4c26c4:
    // 0x4c26c4: 0x32c22000  andi        $v0, $s6, 0x2000
    ctx->pc = 0x4c26c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8192);
label_4c26c8:
    // 0x4c26c8: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
label_4c26cc:
    if (ctx->pc == 0x4C26CCu) {
        ctx->pc = 0x4C26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C26C8u;
        // 0x4c26cc: 0x8e2500e8  lw          $a1, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C26D0u;
        goto label_4c26d0;
    }
    ctx->pc = 0x4C26C8u;
    {
        const bool branch_taken_0x4c26c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c26c8) {
            ctx->pc = 0x4C26CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C26C8u;
            // 0x4c26cc: 0x8e2500e8  lw          $a1, 0xE8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2780u;
            goto label_4c2780;
        }
    }
    ctx->pc = 0x4C26D0u;
label_4c26d0:
    // 0x4c26d0: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x4c26d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_4c26d4:
    // 0x4c26d4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4c26d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_4c26d8:
    // 0x4c26d8: 0x3652fffe  ori         $s2, $s2, 0xFFFE
    ctx->pc = 0x4c26d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65534);
label_4c26dc:
    // 0x4c26dc: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x4c26dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_4c26e0:
    // 0x4c26e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c26e4:
    // 0x4c26e4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4c26e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_4c26e8:
    // 0x4c26e8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x4c26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_4c26ec:
    // 0x4c26ec: 0xc13232c  jal         func_4C8CB0
label_4c26f0:
    if (ctx->pc == 0x4C26F0u) {
        ctx->pc = 0x4C26F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C26ECu;
        // 0x4c26f0: 0x828023  subu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C26F4u;
        goto label_4c26f4;
    }
    ctx->pc = 0x4C26ECu;
    SET_GPR_U32(ctx, 31, 0x4C26F4u);
    ctx->pc = 0x4C26F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C26ECu;
    // 0x4c26f0: 0x828023  subu        $s0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8CB0u, 0x4C26ECu, 0x4C26F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C26F4u;
label_4c26f4:
    // 0x4c26f4: 0x8e2302a8  lw          $v1, 0x2A8($s1)
    ctx->pc = 0x4c26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_4c26f8:
    // 0x4c26f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4c26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4c26fc:
    // 0x4c26fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c26fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c2700:
    // 0x4c2700: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c2700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c2704:
    // 0x4c2704: 0xc132300  jal         func_4C8C00
label_4c2708:
    if (ctx->pc == 0x4C2708u) {
        ctx->pc = 0x4C2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2704u;
        // 0x4c2708: 0xae2302a8  sw          $v1, 0x2A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C270Cu;
        goto label_4c270c;
    }
    ctx->pc = 0x4C2704u;
    SET_GPR_U32(ctx, 31, 0x4C270Cu);
    ctx->pc = 0x4C2708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2704u;
    // 0x4c2708: 0xae2302a8  sw          $v1, 0x2A8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8C00u, 0x4C2704u, 0x4C270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C270Cu;
label_4c270c:
    // 0x4c270c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4c2710:
    if (ctx->pc == 0x4C2710u) {
        ctx->pc = 0x4C2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C270Cu;
        // 0x4c2710: 0xae220108  sw          $v0, 0x108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2714u;
        goto label_4c2714;
    }
    ctx->pc = 0x4C270Cu;
    {
        const bool branch_taken_0x4c270c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C270Cu;
        // 0x4c2710: 0xae220108  sw          $v0, 0x108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c270c) {
            ctx->pc = 0x4C2724u;
            goto label_4c2724;
        }
    }
    ctx->pc = 0x4C2714u;
label_4c2714:
    // 0x4c2714: 0xc132364  jal         func_4C8D90
label_4c2718:
    if (ctx->pc == 0x4C2718u) {
        ctx->pc = 0x4C2718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2714u;
        // 0x4c2718: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C271Cu;
        goto label_4c271c;
    }
    ctx->pc = 0x4C2714u;
    SET_GPR_U32(ctx, 31, 0x4C271Cu);
    ctx->pc = 0x4C2718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2714u;
    // 0x4c2718: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8D90u, 0x4C2714u, 0x4C271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C271Cu;
label_4c271c:
    // 0x4c271c: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
label_4c2720:
    if (ctx->pc == 0x4C2720u) {
        ctx->pc = 0x4C2724u;
        goto label_4c2724;
    }
    ctx->pc = 0x4C271Cu;
    {
        const bool branch_taken_0x4c271c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c271c) {
            ctx->pc = 0x4C25C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c25c4;
        }
    }
    ctx->pc = 0x4C2724u;
label_4c2724:
    // 0x4c2724: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x4c2724u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_4c2728:
    // 0x4c2728: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4c2728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c272c:
    // 0x4c272c: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x4c272cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_4c2730:
    // 0x4c2730: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4c2730u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c2734:
    // 0x4c2734: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c2734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c2738:
    // 0x4c2738: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x4c2738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_4c273c:
    // 0x4c273c: 0x60f809  jalr        $v1
label_4c2740:
    if (ctx->pc == 0x4C2740u) {
        ctx->pc = 0x4C2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C273Cu;
        // 0x4c2740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2744u;
        goto label_4c2744;
    }
    ctx->pc = 0x4C273Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4C2744u);
        ctx->pc = 0x4C2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C273Cu;
        // 0x4c2740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C273Cu, 0x4C2744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C2744u;
label_4c2744:
    // 0x4c2744: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x4c2744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_4c2748:
    // 0x4c2748: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4c2748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c274c:
    // 0x4c274c: 0x8e270108  lw          $a3, 0x108($s1)
    ctx->pc = 0x4c274cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_4c2750:
    // 0x4c2750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c2750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c2754:
    // 0x4c2754: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4c2754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c2758:
    // 0x4c2758: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c2758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c275c:
    // 0x4c275c: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x4c275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_4c2760:
    // 0x4c2760: 0x40f809  jalr        $v0
label_4c2764:
    if (ctx->pc == 0x4C2764u) {
        ctx->pc = 0x4C2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2760u;
        // 0x4c2764: 0xd23024  and         $a2, $a2, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2768u;
        goto label_4c2768;
    }
    ctx->pc = 0x4C2760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C2768u);
        ctx->pc = 0x4C2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2760u;
        // 0x4c2764: 0xd23024  and         $a2, $a2, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C2760u, 0x4C2768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C2768u;
label_4c2768:
    // 0x4c2768: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x4c2768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_4c276c:
    // 0x4c276c: 0x60f809  jalr        $v1
label_4c2770:
    if (ctx->pc == 0x4C2770u) {
        ctx->pc = 0x4C2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C276Cu;
        // 0x4c2770: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2774u;
        goto label_4c2774;
    }
    ctx->pc = 0x4C276Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4C2774u);
        ctx->pc = 0x4C2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C276Cu;
        // 0x4c2770: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C276Cu, 0x4C2774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C2774u;
label_4c2774:
    // 0x4c2774: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x4c2774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_4c2778:
    // 0x4c2778: 0x10000017  b           . + 4 + (0x17 << 2)
label_4c277c:
    if (ctx->pc == 0x4C277Cu) {
        ctx->pc = 0x4C277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2778u;
        // 0x4c277c: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2780u;
        goto label_4c2780;
    }
    ctx->pc = 0x4C2778u;
    {
        const bool branch_taken_0x4c2778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2778u;
        // 0x4c277c: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2778) {
            ctx->pc = 0x4C27D8u;
            goto label_4c27d8;
        }
    }
    ctx->pc = 0x4C2780u;
label_4c2780:
    // 0x4c2780: 0xc1322ac  jal         func_4C8AB0
label_4c2784:
    if (ctx->pc == 0x4C2784u) {
        ctx->pc = 0x4C2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2780u;
        // 0x4c2784: 0x26240104  addiu       $a0, $s1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2788u;
        goto label_4c2788;
    }
    ctx->pc = 0x4C2780u;
    SET_GPR_U32(ctx, 31, 0x4C2788u);
    ctx->pc = 0x4C2784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2780u;
    // 0x4c2784: 0x26240104  addiu       $a0, $s1, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4C2780u, 0x4C2788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2788u;
label_4c2788:
    // 0x4c2788: 0xc13232c  jal         func_4C8CB0
label_4c278c:
    if (ctx->pc == 0x4C278Cu) {
        ctx->pc = 0x4C278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2788u;
        // 0x4c278c: 0x8e300250  lw          $s0, 0x250($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2790u;
        goto label_4c2790;
    }
    ctx->pc = 0x4C2788u;
    SET_GPR_U32(ctx, 31, 0x4C2790u);
    ctx->pc = 0x4C278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2788u;
    // 0x4c278c: 0x8e300250  lw          $s0, 0x250($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8CB0u, 0x4C2788u, 0x4C2790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2790u;
label_4c2790:
    // 0x4c2790: 0x8e2302a8  lw          $v1, 0x2A8($s1)
    ctx->pc = 0x4c2790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_4c2794:
    // 0x4c2794: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4c2794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4c2798:
    // 0x4c2798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c2798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c279c:
    // 0x4c279c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c279cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c27a0:
    // 0x4c27a0: 0xc132300  jal         func_4C8C00
label_4c27a4:
    if (ctx->pc == 0x4C27A4u) {
        ctx->pc = 0x4C27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C27A0u;
        // 0x4c27a4: 0xae2302a8  sw          $v1, 0x2A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C27A8u;
        goto label_4c27a8;
    }
    ctx->pc = 0x4C27A0u;
    SET_GPR_U32(ctx, 31, 0x4C27A8u);
    ctx->pc = 0x4C27A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C27A0u;
    // 0x4c27a4: 0xae2302a8  sw          $v1, 0x2A8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8C00u, 0x4C27A0u, 0x4C27A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C27A8u;
label_4c27a8:
    // 0x4c27a8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4c27ac:
    if (ctx->pc == 0x4C27ACu) {
        ctx->pc = 0x4C27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C27A8u;
        // 0x4c27ac: 0xae22024c  sw          $v0, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C27B0u;
        goto label_4c27b0;
    }
    ctx->pc = 0x4C27A8u;
    {
        const bool branch_taken_0x4c27a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C27A8u;
        // 0x4c27ac: 0xae22024c  sw          $v0, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c27a8) {
            ctx->pc = 0x4C27B4u;
            goto label_4c27b4;
        }
    }
    ctx->pc = 0x4C27B0u;
label_4c27b0:
    // 0x4c27b0: 0xae200250  sw          $zero, 0x250($s1)
    ctx->pc = 0x4c27b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
label_4c27b4:
    // 0x4c27b4: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x4c27b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_4c27b8:
    // 0x4c27b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c27b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c27bc:
    // 0x4c27bc: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x4c27bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_4c27c0:
    // 0x4c27c0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4c27c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c27c4:
    // 0x4c27c4: 0x8e25024c  lw          $a1, 0x24C($s1)
    ctx->pc = 0x4c27c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
label_4c27c8:
    // 0x4c27c8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x4c27c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_4c27cc:
    // 0x4c27cc: 0x40f809  jalr        $v0
label_4c27d0:
    if (ctx->pc == 0x4C27D0u) {
        ctx->pc = 0x4C27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C27CCu;
        // 0x4c27d0: 0x8e260250  lw          $a2, 0x250($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C27D4u;
        goto label_4c27d4;
    }
    ctx->pc = 0x4C27CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C27D4u);
        ctx->pc = 0x4C27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C27CCu;
        // 0x4c27d0: 0x8e260250  lw          $a2, 0x250($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C27CCu, 0x4C27D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C27D4u;
label_4c27d4:
    // 0x4c27d4: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x4c27d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_4c27d8:
    // 0x4c27d8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c27d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4c27dc:
    // 0x4c27dc: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x4c27dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_4c27e0:
    // 0x4c27e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c27e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4c27e4:
    // 0x4c27e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c27e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4c27e8:
    // 0x4c27e8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x4c27e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_4c27ec:
    // 0x4c27ec: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x4c27ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_4c27f0:
    // 0x4c27f0: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x4c27f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4c27f4:
    // 0x4c27f4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_4c27f8:
    if (ctx->pc == 0x4C27F8u) {
        ctx->pc = 0x4C27F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C27F4u;
        // 0x4c27f8: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C27FCu;
        goto label_4c27fc;
    }
    ctx->pc = 0x4C27F4u;
    {
        const bool branch_taken_0x4c27f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C27F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C27F4u;
        // 0x4c27f8: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c27f4) {
            ctx->pc = 0x4C2810u;
            goto label_4c2810;
        }
    }
    ctx->pc = 0x4C27FCu;
label_4c27fc:
    // 0x4c27fc: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x4c27fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4c2800:
    // 0x4c2800: 0xc13399c  jal         func_4CE670
label_4c2804:
    if (ctx->pc == 0x4C2804u) {
        ctx->pc = 0x4C2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2800u;
        // 0x4c2804: 0x240407d0  addiu       $a0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2808u;
        goto label_4c2808;
    }
    ctx->pc = 0x4C2800u;
    SET_GPR_U32(ctx, 31, 0x4C2808u);
    ctx->pc = 0x4C2804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2800u;
    // 0x4c2804: 0x240407d0  addiu       $a0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4C2800u, 0x4C2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2808u;
label_4c2808:
    // 0x4c2808: 0x10000002  b           . + 4 + (0x2 << 2)
label_4c280c:
    if (ctx->pc == 0x4C280Cu) {
        ctx->pc = 0x4C280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2808u;
        // 0x4c280c: 0xae220288  sw          $v0, 0x288($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2810u;
        goto label_4c2810;
    }
    ctx->pc = 0x4C2808u;
    {
        const bool branch_taken_0x4c2808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2808u;
        // 0x4c280c: 0xae220288  sw          $v0, 0x288($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2808) {
            ctx->pc = 0x4C2814u;
            goto label_4c2814;
        }
    }
    ctx->pc = 0x4C2810u;
label_4c2810:
    // 0x4c2810: 0xae220288  sw          $v0, 0x288($s1)
    ctx->pc = 0x4c2810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 2));
label_4c2814:
    // 0x4c2814: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4c2814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c2818:
    // 0x4c2818: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x4c2818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_4c281c:
    // 0x4c281c: 0xae3002a4  sw          $s0, 0x2A4($s1)
    ctx->pc = 0x4c281cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 16));
label_4c2820:
    // 0x4c2820: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4c2824:
    if (ctx->pc == 0x4C2824u) {
        ctx->pc = 0x4C2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2820u;
        // 0x4c2824: 0xae200310  sw          $zero, 0x310($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2828u;
        goto label_4c2828;
    }
    ctx->pc = 0x4C2820u;
    {
        const bool branch_taken_0x4c2820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2820u;
        // 0x4c2824: 0xae200310  sw          $zero, 0x310($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2820) {
            ctx->pc = 0x4C2830u;
            goto label_4c2830;
        }
    }
    ctx->pc = 0x4C2828u;
label_4c2828:
    // 0x4c2828: 0xc130664  jal         func_4C1990
label_4c282c:
    if (ctx->pc == 0x4C282Cu) {
        ctx->pc = 0x4C282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2828u;
        // 0x4c282c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2830u;
        goto label_4c2830;
    }
    ctx->pc = 0x4C2828u;
    SET_GPR_U32(ctx, 31, 0x4C2830u);
    ctx->pc = 0x4C282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2828u;
    // 0x4c282c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1990u, 0x4C2828u, 0x4C2830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2830u;
label_4c2830:
    // 0x4c2830: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4c2830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4c2834:
    // 0x4c2834: 0xc1334f4  jal         func_4CD3D0
label_4c2838:
    if (ctx->pc == 0x4C2838u) {
        ctx->pc = 0x4C2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2834u;
        // 0x4c2838: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C283Cu;
        goto label_4c283c;
    }
    ctx->pc = 0x4C2834u;
    SET_GPR_U32(ctx, 31, 0x4C283Cu);
    ctx->pc = 0x4C2838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2834u;
    // 0x4c2838: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C2834u, 0x4C283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C283Cu;
label_4c283c:
    // 0x4c283c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c283cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c2840:
    // 0x4c2840: 0x8e2202f0  lw          $v0, 0x2F0($s1)
    ctx->pc = 0x4c2840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
label_4c2844:
    // 0x4c2844: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4c2848:
    if (ctx->pc == 0x4C2848u) {
        ctx->pc = 0x4C2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2844u;
        // 0x4c2848: 0xae2402f0  sw          $a0, 0x2F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C284Cu;
        goto label_4c284c;
    }
    ctx->pc = 0x4C2844u;
    {
        const bool branch_taken_0x4c2844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2844) {
            ctx->pc = 0x4C2848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2844u;
            // 0x4c2848: 0xae2402f0  sw          $a0, 0x2F0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C284Cu;
            goto label_4c284c;
        }
    }
    ctx->pc = 0x4C284Cu;
label_4c284c:
    // 0x4c284c: 0x8e2302f0  lw          $v1, 0x2F0($s1)
    ctx->pc = 0x4c284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
label_4c2850:
    // 0x4c2850: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4c2850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4c2854:
    // 0x4c2854: 0x344293e0  ori         $v0, $v0, 0x93E0
    ctx->pc = 0x4c2854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37856);
label_4c2858:
    // 0x4c2858: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4c2858u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4c285c:
    // 0x4c285c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4c285cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c2860:
    // 0x4c2860: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4c2864:
    if (ctx->pc == 0x4C2864u) {
        ctx->pc = 0x4C2864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2860u;
        // 0x4c2864: 0x8e220108  lw          $v0, 0x108($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2868u;
        goto label_4c2868;
    }
    ctx->pc = 0x4C2860u;
    {
        const bool branch_taken_0x4c2860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2860) {
            ctx->pc = 0x4C2864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2860u;
            // 0x4c2864: 0x8e220108  lw          $v0, 0x108($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2874u;
            goto label_4c2874;
        }
    }
    ctx->pc = 0x4C2868u;
label_4c2868:
    // 0x4c2868: 0xae2402f0  sw          $a0, 0x2F0($s1)
    ctx->pc = 0x4c2868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 4));
label_4c286c:
    // 0x4c286c: 0xae3002f4  sw          $s0, 0x2F4($s1)
    ctx->pc = 0x4c286cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 756), GPR_U32(ctx, 16));
label_4c2870:
    // 0x4c2870: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x4c2870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_4c2874:
    // 0x4c2874: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_4c2878:
    if (ctx->pc == 0x4C2878u) {
        ctx->pc = 0x4C2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2874u;
        // 0x4c2878: 0x8e25010c  lw          $a1, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C287Cu;
        goto label_4c287c;
    }
    ctx->pc = 0x4C2874u;
    {
        const bool branch_taken_0x4c2874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2874) {
            ctx->pc = 0x4C2878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2874u;
            // 0x4c2878: 0x8e25010c  lw          $a1, 0x10C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2884u;
            goto label_4c2884;
        }
    }
    ctx->pc = 0x4C287Cu;
label_4c287c:
    // 0x4c287c: 0x1000000d  b           . + 4 + (0xD << 2)
label_4c2880:
    if (ctx->pc == 0x4C2880u) {
        ctx->pc = 0x4C2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C287Cu;
        // 0x4c2880: 0xae220104  sw          $v0, 0x104($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2884u;
        goto label_4c2884;
    }
    ctx->pc = 0x4C287Cu;
    {
        const bool branch_taken_0x4c287c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C287Cu;
        // 0x4c2880: 0xae220104  sw          $v0, 0x104($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c287c) {
            ctx->pc = 0x4C28B4u;
            goto label_4c28b4;
        }
    }
    ctx->pc = 0x4C2884u;
label_4c2884:
    // 0x4c2884: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c2884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4c2888:
    // 0x4c2888: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x4c2888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
label_4c288c:
    // 0x4c288c: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x4c288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_4c2890:
    // 0x4c2890: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x4c2890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c2894:
    // 0x4c2894: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x4c2894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_4c2898:
    // 0x4c2898: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x4c2898u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4c289c:
    // 0x4c289c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4c289cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_4c28a0:
    // 0x4c28a0: 0x8e270104  lw          $a3, 0x104($s1)
    ctx->pc = 0x4c28a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_4c28a4:
    // 0x4c28a4: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4c28a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_4c28a8:
    // 0x4c28a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c28a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c28ac:
    // 0x4c28ac: 0x40f809  jalr        $v0
label_4c28b0:
    if (ctx->pc == 0x4C28B0u) {
        ctx->pc = 0x4C28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C28ACu;
        // 0x4c28b0: 0x1064023  subu        $t0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C28B4u;
        goto label_4c28b4;
    }
    ctx->pc = 0x4C28ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C28B4u);
        ctx->pc = 0x4C28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C28ACu;
        // 0x4c28b0: 0x1064023  subu        $t0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C28ACu, 0x4C28B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C28B4u;
label_4c28b4:
    // 0x4c28b4: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x4c28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_4c28b8:
    // 0x4c28b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4c28bc:
    if (ctx->pc == 0x4C28BCu) {
        ctx->pc = 0x4C28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C28B8u;
        // 0x4c28bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C28C0u;
        goto label_4c28c0;
    }
    ctx->pc = 0x4C28B8u;
    {
        const bool branch_taken_0x4c28b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C28B8u;
        // 0x4c28bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c28b8) {
            ctx->pc = 0x4C28CCu;
            goto label_4c28cc;
        }
    }
    ctx->pc = 0x4C28C0u;
label_4c28c0:
    // 0x4c28c0: 0xc130664  jal         func_4C1990
label_4c28c4:
    if (ctx->pc == 0x4C28C4u) {
        ctx->pc = 0x4C28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C28C0u;
        // 0x4c28c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C28C8u;
        goto label_4c28c8;
    }
    ctx->pc = 0x4C28C0u;
    SET_GPR_U32(ctx, 31, 0x4C28C8u);
    ctx->pc = 0x4C28C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C28C0u;
    // 0x4c28c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1990u, 0x4C28C0u, 0x4C28C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C28C8u;
label_4c28c8:
    // 0x4c28c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c28cc:
    // 0x4c28cc: 0x3c1e004c  lui         $fp, 0x4C
    ctx->pc = 0x4c28ccu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)76 << 16));
label_4c28d0:
    // 0x4c28d0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4c28d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4c28d4:
    // 0x4c28d4: 0xc1334f4  jal         func_4CD3D0
label_4c28d8:
    if (ctx->pc == 0x4C28D8u) {
        ctx->pc = 0x4C28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C28D4u;
        // 0x4c28d8: 0x3c17004c  lui         $s7, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C28DCu;
        goto label_4c28dc;
    }
    ctx->pc = 0x4C28D4u;
    SET_GPR_U32(ctx, 31, 0x4C28DCu);
    ctx->pc = 0x4C28D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C28D4u;
    // 0x4c28d8: 0x3c17004c  lui         $s7, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)76 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C28D4u, 0x4C28DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C28DCu;
label_4c28dc:
    // 0x4c28dc: 0x8e2302b8  lw          $v1, 0x2B8($s1)
    ctx->pc = 0x4c28dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
label_4c28e0:
    // 0x4c28e0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x4c28e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_4c28e4:
    // 0x4c28e4: 0x8e240308  lw          $a0, 0x308($s1)
    ctx->pc = 0x4c28e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c28e8:
    // 0x4c28e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c28e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c28ec:
    // 0x4c28ec: 0xae2202b8  sw          $v0, 0x2B8($s1)
    ctx->pc = 0x4c28ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 2));
label_4c28f0:
    // 0x4c28f0: 0xac85006c  sw          $a1, 0x6C($a0)
    ctx->pc = 0x4c28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
label_4c28f4:
    // 0x4c28f4: 0xae200300  sw          $zero, 0x300($s1)
    ctx->pc = 0x4c28f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 768), GPR_U32(ctx, 0));
label_4c28f8:
    // 0x4c28f8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x4c28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_4c28fc:
    // 0x4c28fc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_4c2900:
    if (ctx->pc == 0x4C2900u) {
        ctx->pc = 0x4C2900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C28FCu;
        // 0x4c2900: 0x3c0b0053  lui         $t3, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2904u;
        goto label_4c2904;
    }
    ctx->pc = 0x4C28FCu;
    {
        const bool branch_taken_0x4c28fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C28FCu;
        // 0x4c2900: 0x3c0b0053  lui         $t3, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c28fc) {
            ctx->pc = 0x4C298Cu;
            goto label_4c298c;
        }
    }
    ctx->pc = 0x4C2904u;
label_4c2904:
    // 0x4c2904: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4c2904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4c2908:
    // 0x4c2908: 0x8c6227a0  lw          $v0, 0x27A0($v1)
    ctx->pc = 0x4c2908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10144)));
label_4c290c:
    // 0x4c290c: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_4c2910:
    if (ctx->pc == 0x4C2910u) {
        ctx->pc = 0x4C2910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C290Cu;
        // 0x4c2910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2914u;
        goto label_4c2914;
    }
    ctx->pc = 0x4C290Cu;
    {
        const bool branch_taken_0x4c290c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c290c) {
            ctx->pc = 0x4C2910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C290Cu;
            // 0x4c2910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2990u;
            goto label_4c2990;
        }
    }
    ctx->pc = 0x4C2914u;
label_4c2914:
    // 0x4c2914: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4c2918:
    if (ctx->pc == 0x4C2918u) {
        ctx->pc = 0x4C2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2914u;
        // 0x4c2918: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C291Cu;
        goto label_4c291c;
    }
    ctx->pc = 0x4C2914u;
    {
        const bool branch_taken_0x4c2914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2914u;
        // 0x4c2918: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2914) {
            ctx->pc = 0x4C298Cu;
            goto label_4c298c;
        }
    }
    ctx->pc = 0x4C291Cu;
label_4c291c:
    // 0x4c291c: 0x256927a8  addiu       $t1, $t3, 0x27A8
    ctx->pc = 0x4c291cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 10152));
label_4c2920:
    // 0x4c2920: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x4c2920u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c2924:
    // 0x4c2924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4c2924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c2928:
    // 0x4c2928: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x4c2928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_4c292c:
    // 0x4c292c: 0x26480001  addiu       $t0, $s2, 0x1
    ctx->pc = 0x4c292cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4c2930:
    // 0x4c2930: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x4c2930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_4c2934:
    // 0x4c2934: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_4c2938:
    if (ctx->pc == 0x4C2938u) {
        ctx->pc = 0x4C2938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2934u;
        // 0x4c2938: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C293Cu;
        goto label_4c293c;
    }
    ctx->pc = 0x4C2934u;
    {
        const bool branch_taken_0x4c2934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2934u;
        // 0x4c2938: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2934) {
            ctx->pc = 0x4C2978u;
            goto label_4c2978;
        }
    }
    ctx->pc = 0x4C293Cu;
label_4c293c:
    // 0x4c293c: 0x8e220268  lw          $v0, 0x268($s1)
    ctx->pc = 0x4c293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
label_4c2940:
    // 0x4c2940: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x4c2940u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_4c2944:
    // 0x4c2944: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c2944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c2948:
    // 0x4c2948: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x4c2948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_4c294c:
    // 0x4c294c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4c294cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c2950:
    // 0x4c2950: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c2950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c2954:
    // 0x4c2954: 0x54a2fff6  bnel        $a1, $v0, . + 4 + (-0xA << 2)
label_4c2958:
    if (ctx->pc == 0x4C2958u) {
        ctx->pc = 0x4C2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2954u;
        // 0x4c2958: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C295Cu;
        goto label_4c295c;
    }
    ctx->pc = 0x4C2954u;
    {
        const bool branch_taken_0x4c2954 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x4c2954) {
            ctx->pc = 0x4C2958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2954u;
            // 0x4c2958: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c2930;
        }
    }
    ctx->pc = 0x4C295Cu;
label_4c295c:
    // 0x4c295c: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x4c295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_4c2960:
    // 0x4c2960: 0x8e24025c  lw          $a0, 0x25C($s1)
    ctx->pc = 0x4c2960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_4c2964:
    // 0x4c2964: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4c2964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c2968:
    // 0x4c2968: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c2968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c296c:
    // 0x4c296c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c2970:
    // 0x4c2970: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x4c2970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_4c2974:
    // 0x4c2974: 0xae220300  sw          $v0, 0x300($s1)
    ctx->pc = 0x4c2974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 768), GPR_U32(ctx, 2));
label_4c2978:
    // 0x4c2978: 0x8d4227a0  lw          $v0, 0x27A0($t2)
    ctx->pc = 0x4c2978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 10144)));
label_4c297c:
    // 0x4c297c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x4c297cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4c2980:
    // 0x4c2980: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4c2980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c2984:
    // 0x4c2984: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_4c2988:
    if (ctx->pc == 0x4C2988u) {
        ctx->pc = 0x4C2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2984u;
        // 0x4c2988: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C298Cu;
        goto label_4c298c;
    }
    ctx->pc = 0x4C2984u;
    {
        const bool branch_taken_0x4c2984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2984u;
        // 0x4c2988: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2984) {
            ctx->pc = 0x4C2928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c2928;
        }
    }
    ctx->pc = 0x4C298Cu;
label_4c298c:
    // 0x4c298c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c2990:
    // 0x4c2990: 0xad6027a8  sw          $zero, 0x27A8($t3)
    ctx->pc = 0x4c2990u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 10152), GPR_U32(ctx, 0));
label_4c2994:
    // 0x4c2994: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4c2994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_4c2998:
    // 0x4c2998: 0xac8227a0  sw          $v0, 0x27A0($a0)
    ctx->pc = 0x4c2998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10144), GPR_U32(ctx, 2));
label_4c299c:
    // 0x4c299c: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x4c299cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_4c29a0:
    // 0x4c29a0: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
label_4c29a4:
    if (ctx->pc == 0x4C29A4u) {
        ctx->pc = 0x4C29A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C29A0u;
        // 0x4c29a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C29A8u;
        goto label_4c29a8;
    }
    ctx->pc = 0x4C29A0u;
    {
        const bool branch_taken_0x4c29a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C29A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C29A0u;
        // 0x4c29a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c29a0) {
            ctx->pc = 0x4C2CF8u;
            goto label_4c2cf8;
        }
    }
    ctx->pc = 0x4C29A8u;
label_4c29a8:
    // 0x4c29a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4c29a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c29ac:
    // 0x4c29ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4c29acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c29b0:
    // 0x4c29b0: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x4c29b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_4c29b4:
    // 0x4c29b4: 0x0  nop
    ctx->pc = 0x4c29b4u;
    // NOP
label_4c29b8:
    // 0x4c29b8: 0x8e240308  lw          $a0, 0x308($s1)
    ctx->pc = 0x4c29b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c29bc:
    // 0x4c29bc: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x4c29bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_4c29c0:
    // 0x4c29c0: 0x8e250264  lw          $a1, 0x264($s1)
    ctx->pc = 0x4c29c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_4c29c4:
    // 0x4c29c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c29c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c29c8:
    // 0x4c29c8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x4c29c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_4c29cc:
    // 0x4c29cc: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x4c29ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_4c29d0:
    // 0x4c29d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c29d4:
    // 0x4c29d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4c29d8:
    // 0x4c29d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c29d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c29dc:
    // 0x4c29dc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_4c29e0:
    if (ctx->pc == 0x4C29E0u) {
        ctx->pc = 0x4C29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C29DCu;
        // 0x4c29e0: 0x41702  srl         $v0, $a0, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C29E4u;
        goto label_4c29e4;
    }
    ctx->pc = 0x4C29DCu;
    {
        const bool branch_taken_0x4c29dc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4C29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C29DCu;
        // 0x4c29e0: 0x41702  srl         $v0, $a0, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c29dc) {
            ctx->pc = 0x4C29F0u;
            goto label_4c29f0;
        }
    }
    ctx->pc = 0x4C29E4u;
label_4c29e4:
    // 0x4c29e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4c29e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4c29e8:
    // 0x4c29e8: 0x504000a5  beql        $v0, $zero, . + 4 + (0xA5 << 2)
label_4c29ec:
    if (ctx->pc == 0x4C29ECu) {
        ctx->pc = 0x4C29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C29E8u;
        // 0x4c29ec: 0x8e220308  lw          $v0, 0x308($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C29F0u;
        goto label_4c29f0;
    }
    ctx->pc = 0x4C29E8u;
    {
        const bool branch_taken_0x4c29e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c29e8) {
            ctx->pc = 0x4C29ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C29E8u;
            // 0x4c29ec: 0x8e220308  lw          $v0, 0x308($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2C80u;
            goto label_4c2c80;
        }
    }
    ctx->pc = 0x4C29F0u;
label_4c29f0:
    // 0x4c29f0: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4c29f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4c29f4:
    // 0x4c29f4: 0x8c622784  lw          $v0, 0x2784($v1)
    ctx->pc = 0x4c29f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10116)));
label_4c29f8:
    // 0x4c29f8: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
label_4c29fc:
    if (ctx->pc == 0x4C29FCu) {
        ctx->pc = 0x4C29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C29F8u;
        // 0x4c29fc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2A00u;
        goto label_4c2a00;
    }
    ctx->pc = 0x4C29F8u;
    {
        const bool branch_taken_0x4c29f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C29F8u;
        // 0x4c29fc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c29f8) {
            ctx->pc = 0x4C2C7Cu;
            goto label_4c2c7c;
        }
    }
    ctx->pc = 0x4C2A00u;
label_4c2a00:
    // 0x4c2a00: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x4c2a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_4c2a04:
    // 0x4c2a04: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_4c2a08:
    if (ctx->pc == 0x4C2A08u) {
        ctx->pc = 0x4C2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2A04u;
        // 0x4c2a08: 0x3093ffff  andi        $s3, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2A0Cu;
        goto label_4c2a0c;
    }
    ctx->pc = 0x4C2A04u;
    {
        const bool branch_taken_0x4c2a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2A04u;
        // 0x4c2a08: 0x3093ffff  andi        $s3, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2a04) {
            ctx->pc = 0x4C2A64u;
            goto label_4c2a64;
        }
    }
    ctx->pc = 0x4C2A0Cu;
label_4c2a0c:
    // 0x4c2a0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x4c2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_4c2a10:
    // 0x4c2a10: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_4c2a14:
    if (ctx->pc == 0x4C2A14u) {
        ctx->pc = 0x4C2A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2A10u;
        // 0x4c2a14: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2A18u;
        goto label_4c2a18;
    }
    ctx->pc = 0x4C2A10u;
    {
        const bool branch_taken_0x4c2a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2a10) {
            ctx->pc = 0x4C2A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2A10u;
            // 0x4c2a14: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2A68u;
            goto label_4c2a68;
        }
    }
    ctx->pc = 0x4C2A18u;
label_4c2a18:
    // 0x4c2a18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4c2a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4c2a1c:
    // 0x4c2a1c: 0x0  nop
    ctx->pc = 0x4c2a1cu;
    // NOP
label_4c2a20:
    // 0x4c2a20: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4c2a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4c2a24:
    // 0x4c2a24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4c2a24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c2a28:
    // 0x4c2a28: 0x0  nop
    ctx->pc = 0x4c2a28u;
    // NOP
label_4c2a2c:
    // 0x4c2a2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4c2a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4c2a30:
    // 0x4c2a30: 0xc7a302c0  lwc1        $f3, 0x2C0($sp)
    ctx->pc = 0x4c2a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c2a34:
    // 0x4c2a34: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4c2a34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4c2a38:
    // 0x4c2a38: 0xc7a402bc  lwc1        $f4, 0x2BC($sp)
    ctx->pc = 0x4c2a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c2a3c:
    // 0x4c2a3c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4c2a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_4c2a40:
    // 0x4c2a40: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4c2a40u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c2a44:
    // 0x4c2a44: 0x0  nop
    ctx->pc = 0x4c2a44u;
    // NOP
label_4c2a48:
    // 0x4c2a48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4c2a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4c2a4c:
    // 0x4c2a4c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x4c2a4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_4c2a50:
    // 0x4c2a50: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x4c2a50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_4c2a54:
    // 0x4c2a54: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x4c2a54u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_4c2a58:
    // 0x4c2a58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4c2a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4c2a5c:
    // 0x4c2a5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c2a5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4c2a60:
    // 0x4c2a60: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x4c2a60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_4c2a64:
    // 0x4c2a64: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x4c2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_4c2a68:
    // 0x4c2a68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4c2a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c2a6c:
    // 0x4c2a6c: 0x8e260264  lw          $a2, 0x264($s1)
    ctx->pc = 0x4c2a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_4c2a70:
    // 0x4c2a70: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x4c2a70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c2a74:
    // 0x4c2a74: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4c2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4c2a78:
    // 0x4c2a78: 0x8e240308  lw          $a0, 0x308($s1)
    ctx->pc = 0x4c2a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c2a7c:
    // 0x4c2a7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c2a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c2a80:
    // 0x4c2a80: 0x8ce22784  lw          $v0, 0x2784($a3)
    ctx->pc = 0x4c2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10116)));
label_4c2a84:
    // 0x4c2a84: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x4c2a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_4c2a88:
    // 0x4c2a88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c2a8c:
    // 0x4c2a8c: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x4c2a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4c2a90:
    // 0x4c2a90: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4c2a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4c2a94:
    // 0x4c2a94: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x4c2a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c2a98:
    // 0x4c2a98: 0x63f42  srl         $a3, $a2, 29
    ctx->pc = 0x4c2a98u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 29));
label_4c2a9c:
    // 0x4c2a9c: 0x636c2  srl         $a2, $a2, 27
    ctx->pc = 0x4c2a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 27));
label_4c2aa0:
    // 0x4c2aa0: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x4c2aa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_4c2aa4:
    // 0x4c2aa4: 0x30c60008  andi        $a2, $a2, 0x8
    ctx->pc = 0x4c2aa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_4c2aa8:
    // 0x4c2aa8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4c2aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4c2aac:
    // 0x4c2aac: 0x40f809  jalr        $v0
label_4c2ab0:
    if (ctx->pc == 0x4C2AB0u) {
        ctx->pc = 0x4C2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2AACu;
        // 0x4c2ab0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2AB4u;
        goto label_4c2ab4;
    }
    ctx->pc = 0x4C2AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C2AB4u);
        ctx->pc = 0x4C2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2AACu;
        // 0x4c2ab0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C2AACu, 0x4C2AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C2AB4u;
label_4c2ab4:
    // 0x4c2ab4: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
label_4c2ab8:
    if (ctx->pc == 0x4C2AB8u) {
        ctx->pc = 0x4C2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2AB4u;
        // 0x4c2ab8: 0x8e220308  lw          $v0, 0x308($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2ABCu;
        goto label_4c2abc;
    }
    ctx->pc = 0x4C2AB4u;
    {
        const bool branch_taken_0x4c2ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2AB4u;
        // 0x4c2ab8: 0x8e220308  lw          $v0, 0x308($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2ab4) {
            ctx->pc = 0x4C2C80u;
            goto label_4c2c80;
        }
    }
    ctx->pc = 0x4C2ABCu;
label_4c2abc:
    // 0x4c2abc: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x4c2abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4c2ac0:
    // 0x4c2ac0: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4c2ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4c2ac4:
    // 0x4c2ac4: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_4c2ac8:
    if (ctx->pc == 0x4C2AC8u) {
        ctx->pc = 0x4C2AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2AC4u;
        // 0x4c2ac8: 0x8e23025c  lw          $v1, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2ACCu;
        goto label_4c2acc;
    }
    ctx->pc = 0x4C2AC4u;
    {
        const bool branch_taken_0x4c2ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c2ac4) {
            ctx->pc = 0x4C2AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2AC4u;
            // 0x4c2ac8: 0x8e23025c  lw          $v1, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2ADCu;
            goto label_4c2adc;
        }
    }
    ctx->pc = 0x4C2ACCu;
label_4c2acc:
    // 0x4c2acc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c2accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4c2ad0:
    // 0x4c2ad0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c2ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4c2ad4:
    // 0x4c2ad4: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x4c2ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
label_4c2ad8:
    // 0x4c2ad8: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x4c2ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_4c2adc:
    // 0x4c2adc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4c2adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4c2ae0:
    // 0x4c2ae0: 0x8e260260  lw          $a2, 0x260($s1)
    ctx->pc = 0x4c2ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_4c2ae4:
    // 0x4c2ae4: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x4c2ae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65280);
label_4c2ae8:
    // 0x4c2ae8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x4c2ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_4c2aec:
    // 0x4c2aec: 0x8e240308  lw          $a0, 0x308($s1)
    ctx->pc = 0x4c2aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c2af0:
    // 0x4c2af0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c2af4:
    // 0x4c2af4: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x4c2af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_4c2af8:
    // 0x4c2af8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c2af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c2afc:
    // 0x4c2afc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4c2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4c2b00:
    // 0x4c2b00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4c2b00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c2b04:
    // 0x4c2b04: 0x261000ff  addiu       $s0, $s0, 0xFF
    ctx->pc = 0x4c2b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 255));
label_4c2b08:
    // 0x4c2b08: 0x2058024  and         $s0, $s0, $a1
    ctx->pc = 0x4c2b08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
label_4c2b0c:
    // 0x4c2b0c: 0xc13232c  jal         func_4C8CB0
label_4c2b10:
    if (ctx->pc == 0x4C2B10u) {
        ctx->pc = 0x4C2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2B0Cu;
        // 0x4c2b10: 0xac900028  sw          $s0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2B14u;
        goto label_4c2b14;
    }
    ctx->pc = 0x4C2B0Cu;
    SET_GPR_U32(ctx, 31, 0x4C2B14u);
    ctx->pc = 0x4C2B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2B0Cu;
    // 0x4c2b10: 0xac900028  sw          $s0, 0x28($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8CB0u, 0x4C2B0Cu, 0x4C2B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2B14u;
label_4c2b14:
    // 0x4c2b14: 0x8e2302a8  lw          $v1, 0x2A8($s1)
    ctx->pc = 0x4c2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_4c2b18:
    // 0x4c2b18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4c2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4c2b1c:
    // 0x4c2b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c2b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c2b20:
    // 0x4c2b20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c2b24:
    // 0x4c2b24: 0xc132300  jal         func_4C8C00
label_4c2b28:
    if (ctx->pc == 0x4C2B28u) {
        ctx->pc = 0x4C2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2B24u;
        // 0x4c2b28: 0xae2302a8  sw          $v1, 0x2A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2B2Cu;
        goto label_4c2b2c;
    }
    ctx->pc = 0x4C2B24u;
    SET_GPR_U32(ctx, 31, 0x4C2B2Cu);
    ctx->pc = 0x4C2B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2B24u;
    // 0x4c2b28: 0xae2302a8  sw          $v1, 0x2A8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8C00u, 0x4C2B24u, 0x4C2B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2B2Cu;
label_4c2b2c:
    // 0x4c2b2c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x4c2b2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c2b30:
    // 0x4c2b30: 0x8e220308  lw          $v0, 0x308($s1)
    ctx->pc = 0x4c2b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c2b34:
    // 0x4c2b34: 0x2825021  addu        $t2, $s4, $v0
    ctx->pc = 0x4c2b34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4c2b38:
    // 0x4c2b38: 0x15600006  bnez        $t3, . + 4 + (0x6 << 2)
label_4c2b3c:
    if (ctx->pc == 0x4C2B3Cu) {
        ctx->pc = 0x4C2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2B38u;
        // 0x4c2b3c: 0xad4b002c  sw          $t3, 0x2C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2B40u;
        goto label_4c2b40;
    }
    ctx->pc = 0x4C2B38u;
    {
        const bool branch_taken_0x4c2b38 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2B38u;
        // 0x4c2b3c: 0xad4b002c  sw          $t3, 0x2C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2b38) {
            ctx->pc = 0x4C2B54u;
            goto label_4c2b54;
        }
    }
    ctx->pc = 0x4C2B40u;
label_4c2b40:
    // 0x4c2b40: 0x8d42001c  lw          $v0, 0x1C($t2)
    ctx->pc = 0x4c2b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
label_4c2b44:
    // 0x4c2b44: 0x40f809  jalr        $v0
label_4c2b48:
    if (ctx->pc == 0x4C2B48u) {
        ctx->pc = 0x4C2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2B44u;
        // 0x4c2b48: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2B4Cu;
        goto label_4c2b4c;
    }
    ctx->pc = 0x4C2B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C2B4Cu);
        ctx->pc = 0x4C2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2B44u;
        // 0x4c2b48: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C2B44u, 0x4C2B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C2B4Cu;
label_4c2b4c:
    // 0x4c2b4c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_4c2b50:
    if (ctx->pc == 0x4C2B50u) {
        ctx->pc = 0x4C2B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2B4Cu;
        // 0x4c2b50: 0x8e220308  lw          $v0, 0x308($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2B54u;
        goto label_4c2b54;
    }
    ctx->pc = 0x4C2B4Cu;
    {
        const bool branch_taken_0x4c2b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2B4Cu;
        // 0x4c2b50: 0x8e220308  lw          $v0, 0x308($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2b4c) {
            ctx->pc = 0x4C2C80u;
            goto label_4c2c80;
        }
    }
    ctx->pc = 0x4C2B54u;
label_4c2b54:
    // 0x4c2b54: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4c2b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4c2b58:
    // 0x4c2b58: 0x8d440028  lw          $a0, 0x28($t2)
    ctx->pc = 0x4c2b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
label_4c2b5c:
    // 0x4c2b5c: 0x8c622788  lw          $v0, 0x2788($v1)
    ctx->pc = 0x4c2b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10120)));
label_4c2b60:
    // 0x4c2b60: 0x240802ee  addiu       $t0, $zero, 0x2EE
    ctx->pc = 0x4c2b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
label_4c2b64:
    // 0x4c2b64: 0x8e27025c  lw          $a3, 0x25C($s1)
    ctx->pc = 0x4c2b64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_4c2b68:
    // 0x4c2b68: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4c2b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4c2b6c:
    // 0x4c2b6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c2b70:
    // 0x4c2b70: 0x8e290264  lw          $t1, 0x264($s1)
    ctx->pc = 0x4c2b70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_4c2b74:
    // 0x4c2b74: 0xac622788  sw          $v0, 0x2788($v1)
    ctx->pc = 0x4c2b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10120), GPR_U32(ctx, 2));
label_4c2b78:
    // 0x4c2b78: 0x2a73821  addu        $a3, $s5, $a3
    ctx->pc = 0x4c2b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_4c2b7c:
    // 0x4c2b7c: 0xad440030  sw          $a0, 0x30($t2)
    ctx->pc = 0x4c2b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 4));
label_4c2b80:
    // 0x4c2b80: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x4c2b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4c2b84:
    // 0x4c2b84: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4c2b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4c2b88:
    // 0x4c2b88: 0x8d450068  lw          $a1, 0x68($t2)
    ctx->pc = 0x4c2b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 104)));
label_4c2b8c:
    // 0x4c2b8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c2b90:
    // 0x4c2b90: 0xad4b0038  sw          $t3, 0x38($t2)
    ctx->pc = 0x4c2b90u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 56), GPR_U32(ctx, 11));
label_4c2b94:
    // 0x4c2b94: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4c2b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_4c2b98:
    // 0x4c2b98: 0x1052823  subu        $a1, $t0, $a1
    ctx->pc = 0x4c2b98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_4c2b9c:
    // 0x4c2b9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c2ba0:
    // 0x4c2ba0: 0xad4b0034  sw          $t3, 0x34($t2)
    ctx->pc = 0x4c2ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 52), GPR_U32(ctx, 11));
label_4c2ba4:
    // 0x4c2ba4: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x4c2ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
label_4c2ba8:
    // 0x4c2ba8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4c2ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_4c2bac:
    // 0x4c2bac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c2bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4c2bb0:
    // 0x4c2bb0: 0xad420044  sw          $v0, 0x44($t2)
    ctx->pc = 0x4c2bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 68), GPR_U32(ctx, 2));
label_4c2bb4:
    // 0x4c2bb4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4c2bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4c2bb8:
    // 0x4c2bb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c2bbc:
    // 0x4c2bbc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4c2bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_4c2bc0:
    // 0x4c2bc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c2bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c2bc4:
    // 0x4c2bc4: 0x42742  srl         $a0, $a0, 29
    ctx->pc = 0x4c2bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 29));
label_4c2bc8:
    // 0x4c2bc8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4c2bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4c2bcc:
    // 0x4c2bcc: 0x932004  sllv        $a0, $s3, $a0
    ctx->pc = 0x4c2bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
label_4c2bd0:
    // 0x4c2bd0: 0xc13399c  jal         func_4CE670
label_4c2bd4:
    if (ctx->pc == 0x4C2BD4u) {
        ctx->pc = 0x4C2BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2BD0u;
        // 0x4c2bd4: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2BD8u;
        goto label_4c2bd8;
    }
    ctx->pc = 0x4C2BD0u;
    SET_GPR_U32(ctx, 31, 0x4C2BD8u);
    ctx->pc = 0x4C2BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2BD0u;
    // 0x4c2bd4: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4C2BD0u, 0x4C2BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2BD8u;
label_4c2bd8:
    // 0x4c2bd8: 0x8e240308  lw          $a0, 0x308($s1)
    ctx->pc = 0x4c2bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c2bdc:
    // 0x4c2bdc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c2bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4c2be0:
    // 0x4c2be0: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x4c2be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_4c2be4:
    // 0x4c2be4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c2be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4c2be8:
    // 0x4c2be8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x4c2be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_4c2bec:
    // 0x4c2bec: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x4c2becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4c2bf0:
    // 0x4c2bf0: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x4c2bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
label_4c2bf4:
    // 0x4c2bf4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4c2bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c2bf8:
    // 0x4c2bf8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4c2bfc:
    if (ctx->pc == 0x4C2BFCu) {
        ctx->pc = 0x4C2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2BF8u;
        // 0x4c2bfc: 0xac83004c  sw          $v1, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2C00u;
        goto label_4c2c00;
    }
    ctx->pc = 0x4C2BF8u;
    {
        const bool branch_taken_0x4c2bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c2bf8) {
            ctx->pc = 0x4C2BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2BF8u;
            // 0x4c2bfc: 0xac83004c  sw          $v1, 0x4C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2C00u;
            goto label_4c2c00;
        }
    }
    ctx->pc = 0x4C2C00u;
label_4c2c00:
    // 0x4c2c00: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x4c2c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_4c2c04:
    // 0x4c2c04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4c2c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c2c08:
    // 0x4c2c08: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x4c2c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_4c2c0c:
    // 0x4c2c0c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x4c2c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_4c2c10:
    // 0x4c2c10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c2c14:
    // 0x4c2c14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c2c18:
    // 0x4c2c18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4c2c1c:
    // 0x4c2c1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c2c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c2c20:
    // 0x4c2c20: 0x31742  srl         $v0, $v1, 29
    ctx->pc = 0x4c2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
label_4c2c24:
    // 0x4c2c24: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4c2c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4c2c28:
    // 0x4c2c28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4c2c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4c2c2c:
    // 0x4c2c2c: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
label_4c2c30:
    if (ctx->pc == 0x4C2C30u) {
        ctx->pc = 0x4C2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2C2Cu;
        // 0x4c2c30: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2C34u;
        goto label_4c2c34;
    }
    ctx->pc = 0x4C2C2Cu;
    {
        const bool branch_taken_0x4c2c2c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4C2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2C2Cu;
        // 0x4c2c30: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2c2c) {
            ctx->pc = 0x4C2C3Cu;
            goto label_4c2c3c;
        }
    }
    ctx->pc = 0x4C2C34u;
label_4c2c34:
    // 0x4c2c34: 0x31702  srl         $v0, $v1, 28
    ctx->pc = 0x4c2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
label_4c2c38:
    // 0x4c2c38: 0x30460001  andi        $a2, $v0, 0x1
    ctx->pc = 0x4c2c38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4c2c3c:
    // 0x4c2c3c: 0xc13437c  jal         func_4D0DF0
label_4c2c40:
    if (ctx->pc == 0x4C2C40u) {
        ctx->pc = 0x4C2C44u;
        goto label_4c2c44;
    }
    ctx->pc = 0x4C2C3Cu;
    SET_GPR_U32(ctx, 31, 0x4C2C44u);
    ctx->pc = 0x4D0DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D0DF0u, 0x4C2C3Cu, 0x4C2C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2C44u;
label_4c2c44:
    // 0x4c2c44: 0x8e250308  lw          $a1, 0x308($s1)
    ctx->pc = 0x4c2c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c2c48:
    // 0x4c2c48: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x4c2c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_4c2c4c:
    // 0x4c2c4c: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x4c2c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
label_4c2c50:
    // 0x4c2c50: 0x8e2602bc  lw          $a2, 0x2BC($s1)
    ctx->pc = 0x4c2c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
label_4c2c54:
    // 0x4c2c54: 0x8e2302c0  lw          $v1, 0x2C0($s1)
    ctx->pc = 0x4c2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
label_4c2c58:
    // 0x4c2c58: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x4c2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_4c2c5c:
    // 0x4c2c5c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4c2c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4c2c60:
    // 0x4c2c60: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4c2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4c2c64:
    // 0x4c2c64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c2c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c2c68:
    // 0x4c2c68: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4c2c68u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_4c2c6c:
    // 0x4c2c6c: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x4c2c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
label_4c2c70:
    // 0x4c2c70: 0x1012  mflo        $v0
    ctx->pc = 0x4c2c70u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_4c2c74:
    // 0x4c2c74: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4c2c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4c2c78:
    // 0x4c2c78: 0xaca40048  sw          $a0, 0x48($a1)
    ctx->pc = 0x4c2c78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 4));
label_4c2c7c:
    // 0x4c2c7c: 0x8e220308  lw          $v0, 0x308($s1)
    ctx->pc = 0x4c2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c2c80:
    // 0x4c2c80: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x4c2c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4c2c84:
    // 0x4c2c84: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x4c2c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_4c2c88:
    // 0x4c2c88: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_4c2c8c:
    if (ctx->pc == 0x4C2C8Cu) {
        ctx->pc = 0x4C2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2C88u;
        // 0x4c2c8c: 0x8e220308  lw          $v0, 0x308($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2C90u;
        goto label_4c2c90;
    }
    ctx->pc = 0x4C2C88u;
    {
        const bool branch_taken_0x4c2c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c2c88) {
            ctx->pc = 0x4C2C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2C88u;
            // 0x4c2c8c: 0x8e220308  lw          $v0, 0x308($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2C9Cu;
            goto label_4c2c9c;
        }
    }
    ctx->pc = 0x4C2C90u;
label_4c2c90:
    // 0x4c2c90: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4c2c94:
    // 0x4c2c94: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x4c2c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
label_4c2c98:
    // 0x4c2c98: 0x8e220308  lw          $v0, 0x308($s1)
    ctx->pc = 0x4c2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c2c9c:
    // 0x4c2c9c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4c2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4c2ca0:
    // 0x4c2ca0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x4c2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_4c2ca4:
    // 0x4c2ca4: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
label_4c2ca8:
    if (ctx->pc == 0x4C2CA8u) {
        ctx->pc = 0x4C2CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2CA4u;
        // 0x4c2ca8: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2CACu;
        goto label_4c2cac;
    }
    ctx->pc = 0x4C2CA4u;
    {
        const bool branch_taken_0x4c2ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c2ca4) {
            ctx->pc = 0x4C2CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2CA4u;
            // 0x4c2ca8: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2CDCu;
            goto label_4c2cdc;
        }
    }
    ctx->pc = 0x4C2CACu;
label_4c2cac:
    // 0x4c2cac: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x4c2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_4c2cb0:
    // 0x4c2cb0: 0x26a50004  addiu       $a1, $s5, 0x4
    ctx->pc = 0x4c2cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_4c2cb4:
    // 0x4c2cb4: 0x8e24025c  lw          $a0, 0x25C($s1)
    ctx->pc = 0x4c2cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_4c2cb8:
    // 0x4c2cb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4c2cbc:
    // 0x4c2cbc: 0x523023  subu        $a2, $v0, $s2
    ctx->pc = 0x4c2cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4c2cc0:
    // 0x4c2cc0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x4c2cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4c2cc4:
    // 0x4c2cc4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4c2cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4c2cc8:
    // 0x4c2cc8: 0xae220300  sw          $v0, 0x300($s1)
    ctx->pc = 0x4c2cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 768), GPR_U32(ctx, 2));
label_4c2ccc:
    // 0x4c2ccc: 0xc133518  jal         func_4CD460
label_4c2cd0:
    if (ctx->pc == 0x4C2CD0u) {
        ctx->pc = 0x4C2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2CCCu;
        // 0x4c2cd0: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2CD4u;
        goto label_4c2cd4;
    }
    ctx->pc = 0x4C2CCCu;
    SET_GPR_U32(ctx, 31, 0x4C2CD4u);
    ctx->pc = 0x4C2CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2CCCu;
    // 0x4c2cd0: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4C2CCCu, 0x4C2CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2CD4u;
label_4c2cd4:
    // 0x4c2cd4: 0x10000004  b           . + 4 + (0x4 << 2)
label_4c2cd8:
    if (ctx->pc == 0x4C2CD8u) {
        ctx->pc = 0x4C2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2CD4u;
        // 0x4c2cd8: 0x8e220300  lw          $v0, 0x300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2CDCu;
        goto label_4c2cdc;
    }
    ctx->pc = 0x4C2CD4u;
    {
        const bool branch_taken_0x4c2cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2CD4u;
        // 0x4c2cd8: 0x8e220300  lw          $v0, 0x300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2cd4) {
            ctx->pc = 0x4C2CE8u;
            goto label_4c2ce8;
        }
    }
    ctx->pc = 0x4C2CDCu;
label_4c2cdc:
    // 0x4c2cdc: 0x2694017c  addiu       $s4, $s4, 0x17C
    ctx->pc = 0x4c2cdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 380));
label_4c2ce0:
    // 0x4c2ce0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4c2ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4c2ce4:
    // 0x4c2ce4: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x4c2ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_4c2ce8:
    // 0x4c2ce8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4c2ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c2cec:
    // 0x4c2cec: 0x5440ff32  bnel        $v0, $zero, . + 4 + (-0xCE << 2)
label_4c2cf0:
    if (ctx->pc == 0x4C2CF0u) {
        ctx->pc = 0x4C2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2CECu;
        // 0x4c2cf0: 0x8e23025c  lw          $v1, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2CF4u;
        goto label_4c2cf4;
    }
    ctx->pc = 0x4C2CECu;
    {
        const bool branch_taken_0x4c2cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c2cec) {
            ctx->pc = 0x4C2CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2CECu;
            // 0x4c2cf0: 0x8e23025c  lw          $v1, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C29B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c29b8;
        }
    }
    ctx->pc = 0x4C2CF4u;
label_4c2cf4:
    // 0x4c2cf4: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x4c2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_4c2cf8:
    // 0x4c2cf8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_4c2cfc:
    if (ctx->pc == 0x4C2CFCu) {
        ctx->pc = 0x4C2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2CF8u;
        // 0x4c2cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2D00u;
        goto label_4c2d00;
    }
    ctx->pc = 0x4C2CF8u;
    {
        const bool branch_taken_0x4c2cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2CF8u;
        // 0x4c2cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2cf8) {
            ctx->pc = 0x4C2D54u;
            goto label_4c2d54;
        }
    }
    ctx->pc = 0x4C2D00u;
label_4c2d00:
    // 0x4c2d00: 0x8e240308  lw          $a0, 0x308($s1)
    ctx->pc = 0x4c2d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c2d04:
    // 0x4c2d04: 0xae2202a0  sw          $v0, 0x2A0($s1)
    ctx->pc = 0x4c2d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 2));
label_4c2d08:
    // 0x4c2d08: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x4c2d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_4c2d0c:
    // 0x4c2d0c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_4c2d10:
    if (ctx->pc == 0x4C2D10u) {
        ctx->pc = 0x4C2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2D0Cu;
        // 0x4c2d10: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2D14u;
        goto label_4c2d14;
    }
    ctx->pc = 0x4C2D0Cu;
    {
        const bool branch_taken_0x4c2d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2D0Cu;
        // 0x4c2d10: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2d0c) {
            ctx->pc = 0x4C2D58u;
            goto label_4c2d58;
        }
    }
    ctx->pc = 0x4C2D14u;
label_4c2d14:
    // 0x4c2d14: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x4c2d14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
label_4c2d18:
    // 0x4c2d18: 0x8e022790  lw          $v0, 0x2790($s0)
    ctx->pc = 0x4c2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10128)));
label_4c2d1c:
    // 0x4c2d1c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4c2d20:
    if (ctx->pc == 0x4C2D20u) {
        ctx->pc = 0x4C2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2D1Cu;
        // 0x4c2d20: 0x3c06004c  lui         $a2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2D24u;
        goto label_4c2d24;
    }
    ctx->pc = 0x4C2D1Cu;
    {
        const bool branch_taken_0x4c2d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2D1Cu;
        // 0x4c2d20: 0x3c06004c  lui         $a2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2d1c) {
            ctx->pc = 0x4C2D3Cu;
            goto label_4c2d3c;
        }
    }
    ctx->pc = 0x4C2D24u;
label_4c2d24:
    // 0x4c2d24: 0xc132378  jal         func_4C8DE0
label_4c2d28:
    if (ctx->pc == 0x4C2D28u) {
        ctx->pc = 0x4C2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2D24u;
        // 0x4c2d28: 0x2404fff3  addiu       $a0, $zero, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2D2Cu;
        goto label_4c2d2c;
    }
    ctx->pc = 0x4C2D24u;
    SET_GPR_U32(ctx, 31, 0x4C2D2Cu);
    ctx->pc = 0x4C2D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2D24u;
    // 0x4c2d28: 0x2404fff3  addiu       $a0, $zero, -0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8DE0u, 0x4C2D24u, 0x4C2D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2D2Cu;
label_4c2d2c:
    // 0x4c2d2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c2d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c2d30:
    // 0x4c2d30: 0xc13237e  jal         func_4C8DF8
label_4c2d34:
    if (ctx->pc == 0x4C2D34u) {
        ctx->pc = 0x4C2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2D30u;
        // 0x4c2d34: 0xae022790  sw          $v0, 0x2790($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2D38u;
        goto label_4c2d38;
    }
    ctx->pc = 0x4C2D30u;
    SET_GPR_U32(ctx, 31, 0x4C2D38u);
    ctx->pc = 0x4C2D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2D30u;
    // 0x4c2d34: 0xae022790  sw          $v0, 0x2790($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 10128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8DF8u, 0x4C2D30u, 0x4C2D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2D38u;
label_4c2d38:
    // 0x4c2d38: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x4c2d38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
label_4c2d3c:
    // 0x4c2d3c: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x4c2d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
label_4c2d40:
    // 0x4c2d40: 0x8e042790  lw          $a0, 0x2790($s0)
    ctx->pc = 0x4c2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10128)));
label_4c2d44:
    // 0x4c2d44: 0x24c64c38  addiu       $a2, $a2, 0x4C38
    ctx->pc = 0x4c2d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19512));
label_4c2d48:
    // 0x4c2d48: 0x24e74c58  addiu       $a3, $a3, 0x4C58
    ctx->pc = 0x4c2d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19544));
label_4c2d4c:
    // 0x4c2d4c: 0xc13237a  jal         func_4C8DE8
label_4c2d50:
    if (ctx->pc == 0x4C2D50u) {
        ctx->pc = 0x4C2D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2D4Cu;
        // 0x4c2d50: 0x26250358  addiu       $a1, $s1, 0x358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2D54u;
        goto label_4c2d54;
    }
    ctx->pc = 0x4C2D4Cu;
    SET_GPR_U32(ctx, 31, 0x4C2D54u);
    ctx->pc = 0x4C2D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2D4Cu;
    // 0x4c2d50: 0x26250358  addiu       $a1, $s1, 0x358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8DE8u, 0x4C2D4Cu, 0x4C2D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C2D54u;
label_4c2d54:
    // 0x4c2d54: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x4c2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_4c2d58:
    // 0x4c2d58: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x4c2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_4c2d5c:
    // 0x4c2d5c: 0x24624bf0  addiu       $v0, $v1, 0x4BF0
    ctx->pc = 0x4c2d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19440));
label_4c2d60:
    // 0x4c2d60: 0x26e54c18  addiu       $a1, $s7, 0x4C18
    ctx->pc = 0x4c2d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 19480));
label_4c2d64:
    // 0x4c2d64: 0x24834ba0  addiu       $v1, $a0, 0x4BA0
    ctx->pc = 0x4c2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 19360));
label_4c2d68:
    // 0x4c2d68: 0x8e260108  lw          $a2, 0x108($s1)
    ctx->pc = 0x4c2d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_4c2d6c:
    // 0x4c2d6c: 0x27c44bc8  addiu       $a0, $fp, 0x4BC8
    ctx->pc = 0x4c2d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 19400));
label_4c2d70:
    // 0x4c2d70: 0xae220204  sw          $v0, 0x204($s1)
    ctx->pc = 0x4c2d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 2));
label_4c2d74:
    // 0x4c2d74: 0xae2301fc  sw          $v1, 0x1FC($s1)
    ctx->pc = 0x4c2d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 508), GPR_U32(ctx, 3));
label_4c2d78:
    // 0x4c2d78: 0xae240200  sw          $a0, 0x200($s1)
    ctx->pc = 0x4c2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 4));
label_4c2d7c:
    // 0x4c2d7c: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
label_4c2d80:
    if (ctx->pc == 0x4C2D80u) {
        ctx->pc = 0x4C2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2D7Cu;
        // 0x4c2d80: 0xae250208  sw          $a1, 0x208($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2D84u;
        goto label_4c2d84;
    }
    ctx->pc = 0x4C2D7Cu;
    {
        const bool branch_taken_0x4c2d7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2D7Cu;
        // 0x4c2d80: 0xae250208  sw          $a1, 0x208($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2d7c) {
            ctx->pc = 0x4C2DB4u;
            goto label_4c2db4;
        }
    }
    ctx->pc = 0x4C2D84u;
label_4c2d84:
    // 0x4c2d84: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x4c2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_4c2d88:
    // 0x4c2d88: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x4c2d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_4c2d8c:
    // 0x4c2d8c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_4c2d90:
    if (ctx->pc == 0x4C2D90u) {
        ctx->pc = 0x4C2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2D8Cu;
        // 0x4c2d90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2D94u;
        goto label_4c2d94;
    }
    ctx->pc = 0x4C2D8Cu;
    {
        const bool branch_taken_0x4c2d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2D8Cu;
        // 0x4c2d90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2d8c) {
            ctx->pc = 0x4C2DB8u;
            goto label_4c2db8;
        }
    }
    ctx->pc = 0x4C2D94u;
label_4c2d94:
    // 0x4c2d94: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x4c2d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_4c2d98:
    // 0x4c2d98: 0x40f809  jalr        $v0
label_4c2d9c:
    if (ctx->pc == 0x4C2D9Cu) {
        ctx->pc = 0x4C2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2D98u;
        // 0x4c2d9c: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2DA0u;
        goto label_4c2da0;
    }
    ctx->pc = 0x4C2D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C2DA0u);
        ctx->pc = 0x4C2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2D98u;
        // 0x4c2d9c: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C2D98u, 0x4C2DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C2DA0u;
label_4c2da0:
    // 0x4c2da0: 0x0  nop
    ctx->pc = 0x4c2da0u;
    // NOP
label_4c2da4:
    // 0x4c2da4: 0x0  nop
    ctx->pc = 0x4c2da4u;
    // NOP
label_4c2da8:
    // 0x4c2da8: 0x0  nop
    ctx->pc = 0x4c2da8u;
    // NOP
label_4c2dac:
    // 0x4c2dac: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_4c2db0:
    if (ctx->pc == 0x4C2DB0u) {
        ctx->pc = 0x4C2DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2DACu;
        // 0x4c2db0: 0x8e220120  lw          $v0, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2DB4u;
        goto label_4c2db4;
    }
    ctx->pc = 0x4C2DACu;
    {
        const bool branch_taken_0x4c2dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c2dac) {
            ctx->pc = 0x4C2DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C2DACu;
            // 0x4c2db0: 0x8e220120  lw          $v0, 0x120($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C2D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c2d98;
        }
    }
    ctx->pc = 0x4C2DB4u;
label_4c2db4:
    // 0x4c2db4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4c2db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c2db8:
    // 0x4c2db8: 0xdfb003e0  ld          $s0, 0x3E0($sp)
    ctx->pc = 0x4c2db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 992)));
label_4c2dbc:
    // 0x4c2dbc: 0xdfb103e8  ld          $s1, 0x3E8($sp)
    ctx->pc = 0x4c2dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1000)));
label_4c2dc0:
    // 0x4c2dc0: 0xdfb203f0  ld          $s2, 0x3F0($sp)
    ctx->pc = 0x4c2dc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1008)));
label_4c2dc4:
    // 0x4c2dc4: 0xdfb303f8  ld          $s3, 0x3F8($sp)
    ctx->pc = 0x4c2dc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1016)));
label_4c2dc8:
    // 0x4c2dc8: 0xdfb40400  ld          $s4, 0x400($sp)
    ctx->pc = 0x4c2dc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
label_4c2dcc:
    // 0x4c2dcc: 0xdfb50408  ld          $s5, 0x408($sp)
    ctx->pc = 0x4c2dccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1032)));
label_4c2dd0:
    // 0x4c2dd0: 0xdfb60410  ld          $s6, 0x410($sp)
    ctx->pc = 0x4c2dd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_4c2dd4:
    // 0x4c2dd4: 0xdfb70418  ld          $s7, 0x418($sp)
    ctx->pc = 0x4c2dd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
label_4c2dd8:
    // 0x4c2dd8: 0xdfbe0420  ld          $fp, 0x420($sp)
    ctx->pc = 0x4c2dd8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_4c2ddc:
    // 0x4c2ddc: 0xdfbf0428  ld          $ra, 0x428($sp)
    ctx->pc = 0x4c2ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
label_4c2de0:
    // 0x4c2de0: 0x3e00008  jr          $ra
label_4c2de4:
    if (ctx->pc == 0x4C2DE4u) {
        ctx->pc = 0x4C2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2DE0u;
        // 0x4c2de4: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C2DE8u;
        goto label_fallthrough_0x4c2de0;
    }
    ctx->pc = 0x4C2DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C2DE0u;
        // 0x4c2de4: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C2DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4c2de0:
    ctx->pc = 0x4C2DE8u;
}
