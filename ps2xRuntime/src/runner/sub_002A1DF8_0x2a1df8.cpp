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

// Function: sub_002A1DF8
// Address: 0x2a1df8 - 0x2a309c
void sub_002A1DF8_0x2a1df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1DF8_0x2a1df8");
#endif

    switch (ctx->pc) {
        case 0x2a1df8u: goto label_2a1df8;
        case 0x2a1dfcu: goto label_2a1dfc;
        case 0x2a1e00u: goto label_2a1e00;
        case 0x2a1e04u: goto label_2a1e04;
        case 0x2a1e08u: goto label_2a1e08;
        case 0x2a1e0cu: goto label_2a1e0c;
        case 0x2a1e10u: goto label_2a1e10;
        case 0x2a1e14u: goto label_2a1e14;
        case 0x2a1e18u: goto label_2a1e18;
        case 0x2a1e1cu: goto label_2a1e1c;
        case 0x2a1e20u: goto label_2a1e20;
        case 0x2a1e24u: goto label_2a1e24;
        case 0x2a1e28u: goto label_2a1e28;
        case 0x2a1e2cu: goto label_2a1e2c;
        case 0x2a1e30u: goto label_2a1e30;
        case 0x2a1e34u: goto label_2a1e34;
        case 0x2a1e38u: goto label_2a1e38;
        case 0x2a1e3cu: goto label_2a1e3c;
        case 0x2a1e40u: goto label_2a1e40;
        case 0x2a1e44u: goto label_2a1e44;
        case 0x2a1e48u: goto label_2a1e48;
        case 0x2a1e4cu: goto label_2a1e4c;
        case 0x2a1e50u: goto label_2a1e50;
        case 0x2a1e54u: goto label_2a1e54;
        case 0x2a1e58u: goto label_2a1e58;
        case 0x2a1e5cu: goto label_2a1e5c;
        case 0x2a1e60u: goto label_2a1e60;
        case 0x2a1e64u: goto label_2a1e64;
        case 0x2a1e68u: goto label_2a1e68;
        case 0x2a1e6cu: goto label_2a1e6c;
        case 0x2a1e70u: goto label_2a1e70;
        case 0x2a1e74u: goto label_2a1e74;
        case 0x2a1e78u: goto label_2a1e78;
        case 0x2a1e7cu: goto label_2a1e7c;
        case 0x2a1e80u: goto label_2a1e80;
        case 0x2a1e84u: goto label_2a1e84;
        case 0x2a1e88u: goto label_2a1e88;
        case 0x2a1e8cu: goto label_2a1e8c;
        case 0x2a1e90u: goto label_2a1e90;
        case 0x2a1e94u: goto label_2a1e94;
        case 0x2a1e98u: goto label_2a1e98;
        case 0x2a1e9cu: goto label_2a1e9c;
        case 0x2a1ea0u: goto label_2a1ea0;
        case 0x2a1ea4u: goto label_2a1ea4;
        case 0x2a1ea8u: goto label_2a1ea8;
        case 0x2a1eacu: goto label_2a1eac;
        case 0x2a1eb0u: goto label_2a1eb0;
        case 0x2a1eb4u: goto label_2a1eb4;
        case 0x2a1eb8u: goto label_2a1eb8;
        case 0x2a1ebcu: goto label_2a1ebc;
        case 0x2a1ec0u: goto label_2a1ec0;
        case 0x2a1ec4u: goto label_2a1ec4;
        case 0x2a1ec8u: goto label_2a1ec8;
        case 0x2a1eccu: goto label_2a1ecc;
        case 0x2a1ed0u: goto label_2a1ed0;
        case 0x2a1ed4u: goto label_2a1ed4;
        case 0x2a1ed8u: goto label_2a1ed8;
        case 0x2a1edcu: goto label_2a1edc;
        case 0x2a1ee0u: goto label_2a1ee0;
        case 0x2a1ee4u: goto label_2a1ee4;
        case 0x2a1ee8u: goto label_2a1ee8;
        case 0x2a1eecu: goto label_2a1eec;
        case 0x2a1ef0u: goto label_2a1ef0;
        case 0x2a1ef4u: goto label_2a1ef4;
        case 0x2a1ef8u: goto label_2a1ef8;
        case 0x2a1efcu: goto label_2a1efc;
        case 0x2a1f00u: goto label_2a1f00;
        case 0x2a1f04u: goto label_2a1f04;
        case 0x2a1f08u: goto label_2a1f08;
        case 0x2a1f0cu: goto label_2a1f0c;
        case 0x2a1f10u: goto label_2a1f10;
        case 0x2a1f14u: goto label_2a1f14;
        case 0x2a1f18u: goto label_2a1f18;
        case 0x2a1f1cu: goto label_2a1f1c;
        case 0x2a1f20u: goto label_2a1f20;
        case 0x2a1f24u: goto label_2a1f24;
        case 0x2a1f28u: goto label_2a1f28;
        case 0x2a1f2cu: goto label_2a1f2c;
        case 0x2a1f30u: goto label_2a1f30;
        case 0x2a1f34u: goto label_2a1f34;
        case 0x2a1f38u: goto label_2a1f38;
        case 0x2a1f3cu: goto label_2a1f3c;
        case 0x2a1f40u: goto label_2a1f40;
        case 0x2a1f44u: goto label_2a1f44;
        case 0x2a1f48u: goto label_2a1f48;
        case 0x2a1f4cu: goto label_2a1f4c;
        case 0x2a1f50u: goto label_2a1f50;
        case 0x2a1f54u: goto label_2a1f54;
        case 0x2a1f58u: goto label_2a1f58;
        case 0x2a1f5cu: goto label_2a1f5c;
        case 0x2a1f60u: goto label_2a1f60;
        case 0x2a1f64u: goto label_2a1f64;
        case 0x2a1f68u: goto label_2a1f68;
        case 0x2a1f6cu: goto label_2a1f6c;
        case 0x2a1f70u: goto label_2a1f70;
        case 0x2a1f74u: goto label_2a1f74;
        case 0x2a1f78u: goto label_2a1f78;
        case 0x2a1f7cu: goto label_2a1f7c;
        case 0x2a1f80u: goto label_2a1f80;
        case 0x2a1f84u: goto label_2a1f84;
        case 0x2a1f88u: goto label_2a1f88;
        case 0x2a1f8cu: goto label_2a1f8c;
        case 0x2a1f90u: goto label_2a1f90;
        case 0x2a1f94u: goto label_2a1f94;
        case 0x2a1f98u: goto label_2a1f98;
        case 0x2a1f9cu: goto label_2a1f9c;
        case 0x2a1fa0u: goto label_2a1fa0;
        case 0x2a1fa4u: goto label_2a1fa4;
        case 0x2a1fa8u: goto label_2a1fa8;
        case 0x2a1facu: goto label_2a1fac;
        case 0x2a1fb0u: goto label_2a1fb0;
        case 0x2a1fb4u: goto label_2a1fb4;
        case 0x2a1fb8u: goto label_2a1fb8;
        case 0x2a1fbcu: goto label_2a1fbc;
        case 0x2a1fc0u: goto label_2a1fc0;
        case 0x2a1fc4u: goto label_2a1fc4;
        case 0x2a1fc8u: goto label_2a1fc8;
        case 0x2a1fccu: goto label_2a1fcc;
        case 0x2a1fd0u: goto label_2a1fd0;
        case 0x2a1fd4u: goto label_2a1fd4;
        case 0x2a1fd8u: goto label_2a1fd8;
        case 0x2a1fdcu: goto label_2a1fdc;
        case 0x2a1fe0u: goto label_2a1fe0;
        case 0x2a1fe4u: goto label_2a1fe4;
        case 0x2a1fe8u: goto label_2a1fe8;
        case 0x2a1fecu: goto label_2a1fec;
        case 0x2a1ff0u: goto label_2a1ff0;
        case 0x2a1ff4u: goto label_2a1ff4;
        case 0x2a1ff8u: goto label_2a1ff8;
        case 0x2a1ffcu: goto label_2a1ffc;
        case 0x2a2000u: goto label_2a2000;
        case 0x2a2004u: goto label_2a2004;
        case 0x2a2008u: goto label_2a2008;
        case 0x2a200cu: goto label_2a200c;
        case 0x2a2010u: goto label_2a2010;
        case 0x2a2014u: goto label_2a2014;
        case 0x2a2018u: goto label_2a2018;
        case 0x2a201cu: goto label_2a201c;
        case 0x2a2020u: goto label_2a2020;
        case 0x2a2024u: goto label_2a2024;
        case 0x2a2028u: goto label_2a2028;
        case 0x2a202cu: goto label_2a202c;
        case 0x2a2030u: goto label_2a2030;
        case 0x2a2034u: goto label_2a2034;
        case 0x2a2038u: goto label_2a2038;
        case 0x2a203cu: goto label_2a203c;
        case 0x2a2040u: goto label_2a2040;
        case 0x2a2044u: goto label_2a2044;
        case 0x2a2048u: goto label_2a2048;
        case 0x2a204cu: goto label_2a204c;
        case 0x2a2050u: goto label_2a2050;
        case 0x2a2054u: goto label_2a2054;
        case 0x2a2058u: goto label_2a2058;
        case 0x2a205cu: goto label_2a205c;
        case 0x2a2060u: goto label_2a2060;
        case 0x2a2064u: goto label_2a2064;
        case 0x2a2068u: goto label_2a2068;
        case 0x2a206cu: goto label_2a206c;
        case 0x2a2070u: goto label_2a2070;
        case 0x2a2074u: goto label_2a2074;
        case 0x2a2078u: goto label_2a2078;
        case 0x2a207cu: goto label_2a207c;
        case 0x2a2080u: goto label_2a2080;
        case 0x2a2084u: goto label_2a2084;
        case 0x2a2088u: goto label_2a2088;
        case 0x2a208cu: goto label_2a208c;
        case 0x2a2090u: goto label_2a2090;
        case 0x2a2094u: goto label_2a2094;
        case 0x2a2098u: goto label_2a2098;
        case 0x2a209cu: goto label_2a209c;
        case 0x2a20a0u: goto label_2a20a0;
        case 0x2a20a4u: goto label_2a20a4;
        case 0x2a20a8u: goto label_2a20a8;
        case 0x2a20acu: goto label_2a20ac;
        case 0x2a20b0u: goto label_2a20b0;
        case 0x2a20b4u: goto label_2a20b4;
        case 0x2a20b8u: goto label_2a20b8;
        case 0x2a20bcu: goto label_2a20bc;
        case 0x2a20c0u: goto label_2a20c0;
        case 0x2a20c4u: goto label_2a20c4;
        case 0x2a20c8u: goto label_2a20c8;
        case 0x2a20ccu: goto label_2a20cc;
        case 0x2a20d0u: goto label_2a20d0;
        case 0x2a20d4u: goto label_2a20d4;
        case 0x2a20d8u: goto label_2a20d8;
        case 0x2a20dcu: goto label_2a20dc;
        case 0x2a20e0u: goto label_2a20e0;
        case 0x2a20e4u: goto label_2a20e4;
        case 0x2a20e8u: goto label_2a20e8;
        case 0x2a20ecu: goto label_2a20ec;
        case 0x2a20f0u: goto label_2a20f0;
        case 0x2a20f4u: goto label_2a20f4;
        case 0x2a20f8u: goto label_2a20f8;
        case 0x2a20fcu: goto label_2a20fc;
        case 0x2a2100u: goto label_2a2100;
        case 0x2a2104u: goto label_2a2104;
        case 0x2a2108u: goto label_2a2108;
        case 0x2a210cu: goto label_2a210c;
        case 0x2a2110u: goto label_2a2110;
        case 0x2a2114u: goto label_2a2114;
        case 0x2a2118u: goto label_2a2118;
        case 0x2a211cu: goto label_2a211c;
        case 0x2a2120u: goto label_2a2120;
        case 0x2a2124u: goto label_2a2124;
        case 0x2a2128u: goto label_2a2128;
        case 0x2a212cu: goto label_2a212c;
        case 0x2a2130u: goto label_2a2130;
        case 0x2a2134u: goto label_2a2134;
        case 0x2a2138u: goto label_2a2138;
        case 0x2a213cu: goto label_2a213c;
        case 0x2a2140u: goto label_2a2140;
        case 0x2a2144u: goto label_2a2144;
        case 0x2a2148u: goto label_2a2148;
        case 0x2a214cu: goto label_2a214c;
        case 0x2a2150u: goto label_2a2150;
        case 0x2a2154u: goto label_2a2154;
        case 0x2a2158u: goto label_2a2158;
        case 0x2a215cu: goto label_2a215c;
        case 0x2a2160u: goto label_2a2160;
        case 0x2a2164u: goto label_2a2164;
        case 0x2a2168u: goto label_2a2168;
        case 0x2a216cu: goto label_2a216c;
        case 0x2a2170u: goto label_2a2170;
        case 0x2a2174u: goto label_2a2174;
        case 0x2a2178u: goto label_2a2178;
        case 0x2a217cu: goto label_2a217c;
        case 0x2a2180u: goto label_2a2180;
        case 0x2a2184u: goto label_2a2184;
        case 0x2a2188u: goto label_2a2188;
        case 0x2a218cu: goto label_2a218c;
        case 0x2a2190u: goto label_2a2190;
        case 0x2a2194u: goto label_2a2194;
        case 0x2a2198u: goto label_2a2198;
        case 0x2a219cu: goto label_2a219c;
        case 0x2a21a0u: goto label_2a21a0;
        case 0x2a21a4u: goto label_2a21a4;
        case 0x2a21a8u: goto label_2a21a8;
        case 0x2a21acu: goto label_2a21ac;
        case 0x2a21b0u: goto label_2a21b0;
        case 0x2a21b4u: goto label_2a21b4;
        case 0x2a21b8u: goto label_2a21b8;
        case 0x2a21bcu: goto label_2a21bc;
        case 0x2a21c0u: goto label_2a21c0;
        case 0x2a21c4u: goto label_2a21c4;
        case 0x2a21c8u: goto label_2a21c8;
        case 0x2a21ccu: goto label_2a21cc;
        case 0x2a21d0u: goto label_2a21d0;
        case 0x2a21d4u: goto label_2a21d4;
        case 0x2a21d8u: goto label_2a21d8;
        case 0x2a21dcu: goto label_2a21dc;
        case 0x2a21e0u: goto label_2a21e0;
        case 0x2a21e4u: goto label_2a21e4;
        case 0x2a21e8u: goto label_2a21e8;
        case 0x2a21ecu: goto label_2a21ec;
        case 0x2a21f0u: goto label_2a21f0;
        case 0x2a21f4u: goto label_2a21f4;
        case 0x2a21f8u: goto label_2a21f8;
        case 0x2a21fcu: goto label_2a21fc;
        case 0x2a2200u: goto label_2a2200;
        case 0x2a2204u: goto label_2a2204;
        case 0x2a2208u: goto label_2a2208;
        case 0x2a220cu: goto label_2a220c;
        case 0x2a2210u: goto label_2a2210;
        case 0x2a2214u: goto label_2a2214;
        case 0x2a2218u: goto label_2a2218;
        case 0x2a221cu: goto label_2a221c;
        case 0x2a2220u: goto label_2a2220;
        case 0x2a2224u: goto label_2a2224;
        case 0x2a2228u: goto label_2a2228;
        case 0x2a222cu: goto label_2a222c;
        case 0x2a2230u: goto label_2a2230;
        case 0x2a2234u: goto label_2a2234;
        case 0x2a2238u: goto label_2a2238;
        case 0x2a223cu: goto label_2a223c;
        case 0x2a2240u: goto label_2a2240;
        case 0x2a2244u: goto label_2a2244;
        case 0x2a2248u: goto label_2a2248;
        case 0x2a224cu: goto label_2a224c;
        case 0x2a2250u: goto label_2a2250;
        case 0x2a2254u: goto label_2a2254;
        case 0x2a2258u: goto label_2a2258;
        case 0x2a225cu: goto label_2a225c;
        case 0x2a2260u: goto label_2a2260;
        case 0x2a2264u: goto label_2a2264;
        case 0x2a2268u: goto label_2a2268;
        case 0x2a226cu: goto label_2a226c;
        case 0x2a2270u: goto label_2a2270;
        case 0x2a2274u: goto label_2a2274;
        case 0x2a2278u: goto label_2a2278;
        case 0x2a227cu: goto label_2a227c;
        case 0x2a2280u: goto label_2a2280;
        case 0x2a2284u: goto label_2a2284;
        case 0x2a2288u: goto label_2a2288;
        case 0x2a228cu: goto label_2a228c;
        case 0x2a2290u: goto label_2a2290;
        case 0x2a2294u: goto label_2a2294;
        case 0x2a2298u: goto label_2a2298;
        case 0x2a229cu: goto label_2a229c;
        case 0x2a22a0u: goto label_2a22a0;
        case 0x2a22a4u: goto label_2a22a4;
        case 0x2a22a8u: goto label_2a22a8;
        case 0x2a22acu: goto label_2a22ac;
        case 0x2a22b0u: goto label_2a22b0;
        case 0x2a22b4u: goto label_2a22b4;
        case 0x2a22b8u: goto label_2a22b8;
        case 0x2a22bcu: goto label_2a22bc;
        case 0x2a22c0u: goto label_2a22c0;
        case 0x2a22c4u: goto label_2a22c4;
        case 0x2a22c8u: goto label_2a22c8;
        case 0x2a22ccu: goto label_2a22cc;
        case 0x2a22d0u: goto label_2a22d0;
        case 0x2a22d4u: goto label_2a22d4;
        case 0x2a22d8u: goto label_2a22d8;
        case 0x2a22dcu: goto label_2a22dc;
        case 0x2a22e0u: goto label_2a22e0;
        case 0x2a22e4u: goto label_2a22e4;
        case 0x2a22e8u: goto label_2a22e8;
        case 0x2a22ecu: goto label_2a22ec;
        case 0x2a22f0u: goto label_2a22f0;
        case 0x2a22f4u: goto label_2a22f4;
        case 0x2a22f8u: goto label_2a22f8;
        case 0x2a22fcu: goto label_2a22fc;
        case 0x2a2300u: goto label_2a2300;
        case 0x2a2304u: goto label_2a2304;
        case 0x2a2308u: goto label_2a2308;
        case 0x2a230cu: goto label_2a230c;
        case 0x2a2310u: goto label_2a2310;
        case 0x2a2314u: goto label_2a2314;
        case 0x2a2318u: goto label_2a2318;
        case 0x2a231cu: goto label_2a231c;
        case 0x2a2320u: goto label_2a2320;
        case 0x2a2324u: goto label_2a2324;
        case 0x2a2328u: goto label_2a2328;
        case 0x2a232cu: goto label_2a232c;
        case 0x2a2330u: goto label_2a2330;
        case 0x2a2334u: goto label_2a2334;
        case 0x2a2338u: goto label_2a2338;
        case 0x2a233cu: goto label_2a233c;
        case 0x2a2340u: goto label_2a2340;
        case 0x2a2344u: goto label_2a2344;
        case 0x2a2348u: goto label_2a2348;
        case 0x2a234cu: goto label_2a234c;
        case 0x2a2350u: goto label_2a2350;
        case 0x2a2354u: goto label_2a2354;
        case 0x2a2358u: goto label_2a2358;
        case 0x2a235cu: goto label_2a235c;
        case 0x2a2360u: goto label_2a2360;
        case 0x2a2364u: goto label_2a2364;
        case 0x2a2368u: goto label_2a2368;
        case 0x2a236cu: goto label_2a236c;
        case 0x2a2370u: goto label_2a2370;
        case 0x2a2374u: goto label_2a2374;
        case 0x2a2378u: goto label_2a2378;
        case 0x2a237cu: goto label_2a237c;
        case 0x2a2380u: goto label_2a2380;
        case 0x2a2384u: goto label_2a2384;
        case 0x2a2388u: goto label_2a2388;
        case 0x2a238cu: goto label_2a238c;
        case 0x2a2390u: goto label_2a2390;
        case 0x2a2394u: goto label_2a2394;
        case 0x2a2398u: goto label_2a2398;
        case 0x2a239cu: goto label_2a239c;
        case 0x2a23a0u: goto label_2a23a0;
        case 0x2a23a4u: goto label_2a23a4;
        case 0x2a23a8u: goto label_2a23a8;
        case 0x2a23acu: goto label_2a23ac;
        case 0x2a23b0u: goto label_2a23b0;
        case 0x2a23b4u: goto label_2a23b4;
        case 0x2a23b8u: goto label_2a23b8;
        case 0x2a23bcu: goto label_2a23bc;
        case 0x2a23c0u: goto label_2a23c0;
        case 0x2a23c4u: goto label_2a23c4;
        case 0x2a23c8u: goto label_2a23c8;
        case 0x2a23ccu: goto label_2a23cc;
        case 0x2a23d0u: goto label_2a23d0;
        case 0x2a23d4u: goto label_2a23d4;
        case 0x2a23d8u: goto label_2a23d8;
        case 0x2a23dcu: goto label_2a23dc;
        case 0x2a23e0u: goto label_2a23e0;
        case 0x2a23e4u: goto label_2a23e4;
        case 0x2a23e8u: goto label_2a23e8;
        case 0x2a23ecu: goto label_2a23ec;
        case 0x2a23f0u: goto label_2a23f0;
        case 0x2a23f4u: goto label_2a23f4;
        case 0x2a23f8u: goto label_2a23f8;
        case 0x2a23fcu: goto label_2a23fc;
        case 0x2a2400u: goto label_2a2400;
        case 0x2a2404u: goto label_2a2404;
        case 0x2a2408u: goto label_2a2408;
        case 0x2a240cu: goto label_2a240c;
        case 0x2a2410u: goto label_2a2410;
        case 0x2a2414u: goto label_2a2414;
        case 0x2a2418u: goto label_2a2418;
        case 0x2a241cu: goto label_2a241c;
        case 0x2a2420u: goto label_2a2420;
        case 0x2a2424u: goto label_2a2424;
        case 0x2a2428u: goto label_2a2428;
        case 0x2a242cu: goto label_2a242c;
        case 0x2a2430u: goto label_2a2430;
        case 0x2a2434u: goto label_2a2434;
        case 0x2a2438u: goto label_2a2438;
        case 0x2a243cu: goto label_2a243c;
        case 0x2a2440u: goto label_2a2440;
        case 0x2a2444u: goto label_2a2444;
        case 0x2a2448u: goto label_2a2448;
        case 0x2a244cu: goto label_2a244c;
        case 0x2a2450u: goto label_2a2450;
        case 0x2a2454u: goto label_2a2454;
        case 0x2a2458u: goto label_2a2458;
        case 0x2a245cu: goto label_2a245c;
        case 0x2a2460u: goto label_2a2460;
        case 0x2a2464u: goto label_2a2464;
        case 0x2a2468u: goto label_2a2468;
        case 0x2a246cu: goto label_2a246c;
        case 0x2a2470u: goto label_2a2470;
        case 0x2a2474u: goto label_2a2474;
        case 0x2a2478u: goto label_2a2478;
        case 0x2a247cu: goto label_2a247c;
        case 0x2a2480u: goto label_2a2480;
        case 0x2a2484u: goto label_2a2484;
        case 0x2a2488u: goto label_2a2488;
        case 0x2a248cu: goto label_2a248c;
        case 0x2a2490u: goto label_2a2490;
        case 0x2a2494u: goto label_2a2494;
        case 0x2a2498u: goto label_2a2498;
        case 0x2a249cu: goto label_2a249c;
        case 0x2a24a0u: goto label_2a24a0;
        case 0x2a24a4u: goto label_2a24a4;
        case 0x2a24a8u: goto label_2a24a8;
        case 0x2a24acu: goto label_2a24ac;
        case 0x2a24b0u: goto label_2a24b0;
        case 0x2a24b4u: goto label_2a24b4;
        case 0x2a24b8u: goto label_2a24b8;
        case 0x2a24bcu: goto label_2a24bc;
        case 0x2a24c0u: goto label_2a24c0;
        case 0x2a24c4u: goto label_2a24c4;
        case 0x2a24c8u: goto label_2a24c8;
        case 0x2a24ccu: goto label_2a24cc;
        case 0x2a24d0u: goto label_2a24d0;
        case 0x2a24d4u: goto label_2a24d4;
        case 0x2a24d8u: goto label_2a24d8;
        case 0x2a24dcu: goto label_2a24dc;
        case 0x2a24e0u: goto label_2a24e0;
        case 0x2a24e4u: goto label_2a24e4;
        case 0x2a24e8u: goto label_2a24e8;
        case 0x2a24ecu: goto label_2a24ec;
        case 0x2a24f0u: goto label_2a24f0;
        case 0x2a24f4u: goto label_2a24f4;
        case 0x2a24f8u: goto label_2a24f8;
        case 0x2a24fcu: goto label_2a24fc;
        case 0x2a2500u: goto label_2a2500;
        case 0x2a2504u: goto label_2a2504;
        case 0x2a2508u: goto label_2a2508;
        case 0x2a250cu: goto label_2a250c;
        case 0x2a2510u: goto label_2a2510;
        case 0x2a2514u: goto label_2a2514;
        case 0x2a2518u: goto label_2a2518;
        case 0x2a251cu: goto label_2a251c;
        case 0x2a2520u: goto label_2a2520;
        case 0x2a2524u: goto label_2a2524;
        case 0x2a2528u: goto label_2a2528;
        case 0x2a252cu: goto label_2a252c;
        case 0x2a2530u: goto label_2a2530;
        case 0x2a2534u: goto label_2a2534;
        case 0x2a2538u: goto label_2a2538;
        case 0x2a253cu: goto label_2a253c;
        case 0x2a2540u: goto label_2a2540;
        case 0x2a2544u: goto label_2a2544;
        case 0x2a2548u: goto label_2a2548;
        case 0x2a254cu: goto label_2a254c;
        case 0x2a2550u: goto label_2a2550;
        case 0x2a2554u: goto label_2a2554;
        case 0x2a2558u: goto label_2a2558;
        case 0x2a255cu: goto label_2a255c;
        case 0x2a2560u: goto label_2a2560;
        case 0x2a2564u: goto label_2a2564;
        case 0x2a2568u: goto label_2a2568;
        case 0x2a256cu: goto label_2a256c;
        case 0x2a2570u: goto label_2a2570;
        case 0x2a2574u: goto label_2a2574;
        case 0x2a2578u: goto label_2a2578;
        case 0x2a257cu: goto label_2a257c;
        case 0x2a2580u: goto label_2a2580;
        case 0x2a2584u: goto label_2a2584;
        case 0x2a2588u: goto label_2a2588;
        case 0x2a258cu: goto label_2a258c;
        case 0x2a2590u: goto label_2a2590;
        case 0x2a2594u: goto label_2a2594;
        case 0x2a2598u: goto label_2a2598;
        case 0x2a259cu: goto label_2a259c;
        case 0x2a25a0u: goto label_2a25a0;
        case 0x2a25a4u: goto label_2a25a4;
        case 0x2a25a8u: goto label_2a25a8;
        case 0x2a25acu: goto label_2a25ac;
        case 0x2a25b0u: goto label_2a25b0;
        case 0x2a25b4u: goto label_2a25b4;
        case 0x2a25b8u: goto label_2a25b8;
        case 0x2a25bcu: goto label_2a25bc;
        case 0x2a25c0u: goto label_2a25c0;
        case 0x2a25c4u: goto label_2a25c4;
        case 0x2a25c8u: goto label_2a25c8;
        case 0x2a25ccu: goto label_2a25cc;
        case 0x2a25d0u: goto label_2a25d0;
        case 0x2a25d4u: goto label_2a25d4;
        case 0x2a25d8u: goto label_2a25d8;
        case 0x2a25dcu: goto label_2a25dc;
        case 0x2a25e0u: goto label_2a25e0;
        case 0x2a25e4u: goto label_2a25e4;
        case 0x2a25e8u: goto label_2a25e8;
        case 0x2a25ecu: goto label_2a25ec;
        case 0x2a25f0u: goto label_2a25f0;
        case 0x2a25f4u: goto label_2a25f4;
        case 0x2a25f8u: goto label_2a25f8;
        case 0x2a25fcu: goto label_2a25fc;
        case 0x2a2600u: goto label_2a2600;
        case 0x2a2604u: goto label_2a2604;
        case 0x2a2608u: goto label_2a2608;
        case 0x2a260cu: goto label_2a260c;
        case 0x2a2610u: goto label_2a2610;
        case 0x2a2614u: goto label_2a2614;
        case 0x2a2618u: goto label_2a2618;
        case 0x2a261cu: goto label_2a261c;
        case 0x2a2620u: goto label_2a2620;
        case 0x2a2624u: goto label_2a2624;
        case 0x2a2628u: goto label_2a2628;
        case 0x2a262cu: goto label_2a262c;
        case 0x2a2630u: goto label_2a2630;
        case 0x2a2634u: goto label_2a2634;
        case 0x2a2638u: goto label_2a2638;
        case 0x2a263cu: goto label_2a263c;
        case 0x2a2640u: goto label_2a2640;
        case 0x2a2644u: goto label_2a2644;
        case 0x2a2648u: goto label_2a2648;
        case 0x2a264cu: goto label_2a264c;
        case 0x2a2650u: goto label_2a2650;
        case 0x2a2654u: goto label_2a2654;
        case 0x2a2658u: goto label_2a2658;
        case 0x2a265cu: goto label_2a265c;
        case 0x2a2660u: goto label_2a2660;
        case 0x2a2664u: goto label_2a2664;
        case 0x2a2668u: goto label_2a2668;
        case 0x2a266cu: goto label_2a266c;
        case 0x2a2670u: goto label_2a2670;
        case 0x2a2674u: goto label_2a2674;
        case 0x2a2678u: goto label_2a2678;
        case 0x2a267cu: goto label_2a267c;
        case 0x2a2680u: goto label_2a2680;
        case 0x2a2684u: goto label_2a2684;
        case 0x2a2688u: goto label_2a2688;
        case 0x2a268cu: goto label_2a268c;
        case 0x2a2690u: goto label_2a2690;
        case 0x2a2694u: goto label_2a2694;
        case 0x2a2698u: goto label_2a2698;
        case 0x2a269cu: goto label_2a269c;
        case 0x2a26a0u: goto label_2a26a0;
        case 0x2a26a4u: goto label_2a26a4;
        case 0x2a26a8u: goto label_2a26a8;
        case 0x2a26acu: goto label_2a26ac;
        case 0x2a26b0u: goto label_2a26b0;
        case 0x2a26b4u: goto label_2a26b4;
        case 0x2a26b8u: goto label_2a26b8;
        case 0x2a26bcu: goto label_2a26bc;
        case 0x2a26c0u: goto label_2a26c0;
        case 0x2a26c4u: goto label_2a26c4;
        case 0x2a26c8u: goto label_2a26c8;
        case 0x2a26ccu: goto label_2a26cc;
        case 0x2a26d0u: goto label_2a26d0;
        case 0x2a26d4u: goto label_2a26d4;
        case 0x2a26d8u: goto label_2a26d8;
        case 0x2a26dcu: goto label_2a26dc;
        case 0x2a26e0u: goto label_2a26e0;
        case 0x2a26e4u: goto label_2a26e4;
        case 0x2a26e8u: goto label_2a26e8;
        case 0x2a26ecu: goto label_2a26ec;
        case 0x2a26f0u: goto label_2a26f0;
        case 0x2a26f4u: goto label_2a26f4;
        case 0x2a26f8u: goto label_2a26f8;
        case 0x2a26fcu: goto label_2a26fc;
        case 0x2a2700u: goto label_2a2700;
        case 0x2a2704u: goto label_2a2704;
        case 0x2a2708u: goto label_2a2708;
        case 0x2a270cu: goto label_2a270c;
        case 0x2a2710u: goto label_2a2710;
        case 0x2a2714u: goto label_2a2714;
        case 0x2a2718u: goto label_2a2718;
        case 0x2a271cu: goto label_2a271c;
        case 0x2a2720u: goto label_2a2720;
        case 0x2a2724u: goto label_2a2724;
        case 0x2a2728u: goto label_2a2728;
        case 0x2a272cu: goto label_2a272c;
        case 0x2a2730u: goto label_2a2730;
        case 0x2a2734u: goto label_2a2734;
        case 0x2a2738u: goto label_2a2738;
        case 0x2a273cu: goto label_2a273c;
        case 0x2a2740u: goto label_2a2740;
        case 0x2a2744u: goto label_2a2744;
        case 0x2a2748u: goto label_2a2748;
        case 0x2a274cu: goto label_2a274c;
        case 0x2a2750u: goto label_2a2750;
        case 0x2a2754u: goto label_2a2754;
        case 0x2a2758u: goto label_2a2758;
        case 0x2a275cu: goto label_2a275c;
        case 0x2a2760u: goto label_2a2760;
        case 0x2a2764u: goto label_2a2764;
        case 0x2a2768u: goto label_2a2768;
        case 0x2a276cu: goto label_2a276c;
        case 0x2a2770u: goto label_2a2770;
        case 0x2a2774u: goto label_2a2774;
        case 0x2a2778u: goto label_2a2778;
        case 0x2a277cu: goto label_2a277c;
        case 0x2a2780u: goto label_2a2780;
        case 0x2a2784u: goto label_2a2784;
        case 0x2a2788u: goto label_2a2788;
        case 0x2a278cu: goto label_2a278c;
        case 0x2a2790u: goto label_2a2790;
        case 0x2a2794u: goto label_2a2794;
        case 0x2a2798u: goto label_2a2798;
        case 0x2a279cu: goto label_2a279c;
        case 0x2a27a0u: goto label_2a27a0;
        case 0x2a27a4u: goto label_2a27a4;
        case 0x2a27a8u: goto label_2a27a8;
        case 0x2a27acu: goto label_2a27ac;
        case 0x2a27b0u: goto label_2a27b0;
        case 0x2a27b4u: goto label_2a27b4;
        case 0x2a27b8u: goto label_2a27b8;
        case 0x2a27bcu: goto label_2a27bc;
        case 0x2a27c0u: goto label_2a27c0;
        case 0x2a27c4u: goto label_2a27c4;
        case 0x2a27c8u: goto label_2a27c8;
        case 0x2a27ccu: goto label_2a27cc;
        case 0x2a27d0u: goto label_2a27d0;
        case 0x2a27d4u: goto label_2a27d4;
        case 0x2a27d8u: goto label_2a27d8;
        case 0x2a27dcu: goto label_2a27dc;
        case 0x2a27e0u: goto label_2a27e0;
        case 0x2a27e4u: goto label_2a27e4;
        case 0x2a27e8u: goto label_2a27e8;
        case 0x2a27ecu: goto label_2a27ec;
        case 0x2a27f0u: goto label_2a27f0;
        case 0x2a27f4u: goto label_2a27f4;
        case 0x2a27f8u: goto label_2a27f8;
        case 0x2a27fcu: goto label_2a27fc;
        case 0x2a2800u: goto label_2a2800;
        case 0x2a2804u: goto label_2a2804;
        case 0x2a2808u: goto label_2a2808;
        case 0x2a280cu: goto label_2a280c;
        case 0x2a2810u: goto label_2a2810;
        case 0x2a2814u: goto label_2a2814;
        case 0x2a2818u: goto label_2a2818;
        case 0x2a281cu: goto label_2a281c;
        case 0x2a2820u: goto label_2a2820;
        case 0x2a2824u: goto label_2a2824;
        case 0x2a2828u: goto label_2a2828;
        case 0x2a282cu: goto label_2a282c;
        case 0x2a2830u: goto label_2a2830;
        case 0x2a2834u: goto label_2a2834;
        case 0x2a2838u: goto label_2a2838;
        case 0x2a283cu: goto label_2a283c;
        case 0x2a2840u: goto label_2a2840;
        case 0x2a2844u: goto label_2a2844;
        case 0x2a2848u: goto label_2a2848;
        case 0x2a284cu: goto label_2a284c;
        case 0x2a2850u: goto label_2a2850;
        case 0x2a2854u: goto label_2a2854;
        case 0x2a2858u: goto label_2a2858;
        case 0x2a285cu: goto label_2a285c;
        case 0x2a2860u: goto label_2a2860;
        case 0x2a2864u: goto label_2a2864;
        case 0x2a2868u: goto label_2a2868;
        case 0x2a286cu: goto label_2a286c;
        case 0x2a2870u: goto label_2a2870;
        case 0x2a2874u: goto label_2a2874;
        case 0x2a2878u: goto label_2a2878;
        case 0x2a287cu: goto label_2a287c;
        case 0x2a2880u: goto label_2a2880;
        case 0x2a2884u: goto label_2a2884;
        case 0x2a2888u: goto label_2a2888;
        case 0x2a288cu: goto label_2a288c;
        case 0x2a2890u: goto label_2a2890;
        case 0x2a2894u: goto label_2a2894;
        case 0x2a2898u: goto label_2a2898;
        case 0x2a289cu: goto label_2a289c;
        case 0x2a28a0u: goto label_2a28a0;
        case 0x2a28a4u: goto label_2a28a4;
        case 0x2a28a8u: goto label_2a28a8;
        case 0x2a28acu: goto label_2a28ac;
        case 0x2a28b0u: goto label_2a28b0;
        case 0x2a28b4u: goto label_2a28b4;
        case 0x2a28b8u: goto label_2a28b8;
        case 0x2a28bcu: goto label_2a28bc;
        case 0x2a28c0u: goto label_2a28c0;
        case 0x2a28c4u: goto label_2a28c4;
        case 0x2a28c8u: goto label_2a28c8;
        case 0x2a28ccu: goto label_2a28cc;
        case 0x2a28d0u: goto label_2a28d0;
        case 0x2a28d4u: goto label_2a28d4;
        case 0x2a28d8u: goto label_2a28d8;
        case 0x2a28dcu: goto label_2a28dc;
        case 0x2a28e0u: goto label_2a28e0;
        case 0x2a28e4u: goto label_2a28e4;
        case 0x2a28e8u: goto label_2a28e8;
        case 0x2a28ecu: goto label_2a28ec;
        case 0x2a28f0u: goto label_2a28f0;
        case 0x2a28f4u: goto label_2a28f4;
        case 0x2a28f8u: goto label_2a28f8;
        case 0x2a28fcu: goto label_2a28fc;
        case 0x2a2900u: goto label_2a2900;
        case 0x2a2904u: goto label_2a2904;
        case 0x2a2908u: goto label_2a2908;
        case 0x2a290cu: goto label_2a290c;
        case 0x2a2910u: goto label_2a2910;
        case 0x2a2914u: goto label_2a2914;
        case 0x2a2918u: goto label_2a2918;
        case 0x2a291cu: goto label_2a291c;
        case 0x2a2920u: goto label_2a2920;
        case 0x2a2924u: goto label_2a2924;
        case 0x2a2928u: goto label_2a2928;
        case 0x2a292cu: goto label_2a292c;
        case 0x2a2930u: goto label_2a2930;
        case 0x2a2934u: goto label_2a2934;
        case 0x2a2938u: goto label_2a2938;
        case 0x2a293cu: goto label_2a293c;
        case 0x2a2940u: goto label_2a2940;
        case 0x2a2944u: goto label_2a2944;
        case 0x2a2948u: goto label_2a2948;
        case 0x2a294cu: goto label_2a294c;
        case 0x2a2950u: goto label_2a2950;
        case 0x2a2954u: goto label_2a2954;
        case 0x2a2958u: goto label_2a2958;
        case 0x2a295cu: goto label_2a295c;
        case 0x2a2960u: goto label_2a2960;
        case 0x2a2964u: goto label_2a2964;
        case 0x2a2968u: goto label_2a2968;
        case 0x2a296cu: goto label_2a296c;
        case 0x2a2970u: goto label_2a2970;
        case 0x2a2974u: goto label_2a2974;
        case 0x2a2978u: goto label_2a2978;
        case 0x2a297cu: goto label_2a297c;
        case 0x2a2980u: goto label_2a2980;
        case 0x2a2984u: goto label_2a2984;
        case 0x2a2988u: goto label_2a2988;
        case 0x2a298cu: goto label_2a298c;
        case 0x2a2990u: goto label_2a2990;
        case 0x2a2994u: goto label_2a2994;
        case 0x2a2998u: goto label_2a2998;
        case 0x2a299cu: goto label_2a299c;
        case 0x2a29a0u: goto label_2a29a0;
        case 0x2a29a4u: goto label_2a29a4;
        case 0x2a29a8u: goto label_2a29a8;
        case 0x2a29acu: goto label_2a29ac;
        case 0x2a29b0u: goto label_2a29b0;
        case 0x2a29b4u: goto label_2a29b4;
        case 0x2a29b8u: goto label_2a29b8;
        case 0x2a29bcu: goto label_2a29bc;
        case 0x2a29c0u: goto label_2a29c0;
        case 0x2a29c4u: goto label_2a29c4;
        case 0x2a29c8u: goto label_2a29c8;
        case 0x2a29ccu: goto label_2a29cc;
        case 0x2a29d0u: goto label_2a29d0;
        case 0x2a29d4u: goto label_2a29d4;
        case 0x2a29d8u: goto label_2a29d8;
        case 0x2a29dcu: goto label_2a29dc;
        case 0x2a29e0u: goto label_2a29e0;
        case 0x2a29e4u: goto label_2a29e4;
        case 0x2a29e8u: goto label_2a29e8;
        case 0x2a29ecu: goto label_2a29ec;
        case 0x2a29f0u: goto label_2a29f0;
        case 0x2a29f4u: goto label_2a29f4;
        case 0x2a29f8u: goto label_2a29f8;
        case 0x2a29fcu: goto label_2a29fc;
        case 0x2a2a00u: goto label_2a2a00;
        case 0x2a2a04u: goto label_2a2a04;
        case 0x2a2a08u: goto label_2a2a08;
        case 0x2a2a0cu: goto label_2a2a0c;
        case 0x2a2a10u: goto label_2a2a10;
        case 0x2a2a14u: goto label_2a2a14;
        case 0x2a2a18u: goto label_2a2a18;
        case 0x2a2a1cu: goto label_2a2a1c;
        case 0x2a2a20u: goto label_2a2a20;
        case 0x2a2a24u: goto label_2a2a24;
        case 0x2a2a28u: goto label_2a2a28;
        case 0x2a2a2cu: goto label_2a2a2c;
        case 0x2a2a30u: goto label_2a2a30;
        case 0x2a2a34u: goto label_2a2a34;
        case 0x2a2a38u: goto label_2a2a38;
        case 0x2a2a3cu: goto label_2a2a3c;
        case 0x2a2a40u: goto label_2a2a40;
        case 0x2a2a44u: goto label_2a2a44;
        case 0x2a2a48u: goto label_2a2a48;
        case 0x2a2a4cu: goto label_2a2a4c;
        case 0x2a2a50u: goto label_2a2a50;
        case 0x2a2a54u: goto label_2a2a54;
        case 0x2a2a58u: goto label_2a2a58;
        case 0x2a2a5cu: goto label_2a2a5c;
        case 0x2a2a60u: goto label_2a2a60;
        case 0x2a2a64u: goto label_2a2a64;
        case 0x2a2a68u: goto label_2a2a68;
        case 0x2a2a6cu: goto label_2a2a6c;
        case 0x2a2a70u: goto label_2a2a70;
        case 0x2a2a74u: goto label_2a2a74;
        case 0x2a2a78u: goto label_2a2a78;
        case 0x2a2a7cu: goto label_2a2a7c;
        case 0x2a2a80u: goto label_2a2a80;
        case 0x2a2a84u: goto label_2a2a84;
        case 0x2a2a88u: goto label_2a2a88;
        case 0x2a2a8cu: goto label_2a2a8c;
        case 0x2a2a90u: goto label_2a2a90;
        case 0x2a2a94u: goto label_2a2a94;
        case 0x2a2a98u: goto label_2a2a98;
        case 0x2a2a9cu: goto label_2a2a9c;
        case 0x2a2aa0u: goto label_2a2aa0;
        case 0x2a2aa4u: goto label_2a2aa4;
        case 0x2a2aa8u: goto label_2a2aa8;
        case 0x2a2aacu: goto label_2a2aac;
        case 0x2a2ab0u: goto label_2a2ab0;
        case 0x2a2ab4u: goto label_2a2ab4;
        case 0x2a2ab8u: goto label_2a2ab8;
        case 0x2a2abcu: goto label_2a2abc;
        case 0x2a2ac0u: goto label_2a2ac0;
        case 0x2a2ac4u: goto label_2a2ac4;
        case 0x2a2ac8u: goto label_2a2ac8;
        case 0x2a2accu: goto label_2a2acc;
        case 0x2a2ad0u: goto label_2a2ad0;
        case 0x2a2ad4u: goto label_2a2ad4;
        case 0x2a2ad8u: goto label_2a2ad8;
        case 0x2a2adcu: goto label_2a2adc;
        case 0x2a2ae0u: goto label_2a2ae0;
        case 0x2a2ae4u: goto label_2a2ae4;
        case 0x2a2ae8u: goto label_2a2ae8;
        case 0x2a2aecu: goto label_2a2aec;
        case 0x2a2af0u: goto label_2a2af0;
        case 0x2a2af4u: goto label_2a2af4;
        case 0x2a2af8u: goto label_2a2af8;
        case 0x2a2afcu: goto label_2a2afc;
        case 0x2a2b00u: goto label_2a2b00;
        case 0x2a2b04u: goto label_2a2b04;
        case 0x2a2b08u: goto label_2a2b08;
        case 0x2a2b0cu: goto label_2a2b0c;
        case 0x2a2b10u: goto label_2a2b10;
        case 0x2a2b14u: goto label_2a2b14;
        case 0x2a2b18u: goto label_2a2b18;
        case 0x2a2b1cu: goto label_2a2b1c;
        case 0x2a2b20u: goto label_2a2b20;
        case 0x2a2b24u: goto label_2a2b24;
        case 0x2a2b28u: goto label_2a2b28;
        case 0x2a2b2cu: goto label_2a2b2c;
        case 0x2a2b30u: goto label_2a2b30;
        case 0x2a2b34u: goto label_2a2b34;
        case 0x2a2b38u: goto label_2a2b38;
        case 0x2a2b3cu: goto label_2a2b3c;
        case 0x2a2b40u: goto label_2a2b40;
        case 0x2a2b44u: goto label_2a2b44;
        case 0x2a2b48u: goto label_2a2b48;
        case 0x2a2b4cu: goto label_2a2b4c;
        case 0x2a2b50u: goto label_2a2b50;
        case 0x2a2b54u: goto label_2a2b54;
        case 0x2a2b58u: goto label_2a2b58;
        case 0x2a2b5cu: goto label_2a2b5c;
        case 0x2a2b60u: goto label_2a2b60;
        case 0x2a2b64u: goto label_2a2b64;
        case 0x2a2b68u: goto label_2a2b68;
        case 0x2a2b6cu: goto label_2a2b6c;
        case 0x2a2b70u: goto label_2a2b70;
        case 0x2a2b74u: goto label_2a2b74;
        case 0x2a2b78u: goto label_2a2b78;
        case 0x2a2b7cu: goto label_2a2b7c;
        case 0x2a2b80u: goto label_2a2b80;
        case 0x2a2b84u: goto label_2a2b84;
        case 0x2a2b88u: goto label_2a2b88;
        case 0x2a2b8cu: goto label_2a2b8c;
        case 0x2a2b90u: goto label_2a2b90;
        case 0x2a2b94u: goto label_2a2b94;
        case 0x2a2b98u: goto label_2a2b98;
        case 0x2a2b9cu: goto label_2a2b9c;
        case 0x2a2ba0u: goto label_2a2ba0;
        case 0x2a2ba4u: goto label_2a2ba4;
        case 0x2a2ba8u: goto label_2a2ba8;
        case 0x2a2bacu: goto label_2a2bac;
        case 0x2a2bb0u: goto label_2a2bb0;
        case 0x2a2bb4u: goto label_2a2bb4;
        case 0x2a2bb8u: goto label_2a2bb8;
        case 0x2a2bbcu: goto label_2a2bbc;
        case 0x2a2bc0u: goto label_2a2bc0;
        case 0x2a2bc4u: goto label_2a2bc4;
        case 0x2a2bc8u: goto label_2a2bc8;
        case 0x2a2bccu: goto label_2a2bcc;
        case 0x2a2bd0u: goto label_2a2bd0;
        case 0x2a2bd4u: goto label_2a2bd4;
        case 0x2a2bd8u: goto label_2a2bd8;
        case 0x2a2bdcu: goto label_2a2bdc;
        case 0x2a2be0u: goto label_2a2be0;
        case 0x2a2be4u: goto label_2a2be4;
        case 0x2a2be8u: goto label_2a2be8;
        case 0x2a2becu: goto label_2a2bec;
        case 0x2a2bf0u: goto label_2a2bf0;
        case 0x2a2bf4u: goto label_2a2bf4;
        case 0x2a2bf8u: goto label_2a2bf8;
        case 0x2a2bfcu: goto label_2a2bfc;
        case 0x2a2c00u: goto label_2a2c00;
        case 0x2a2c04u: goto label_2a2c04;
        case 0x2a2c08u: goto label_2a2c08;
        case 0x2a2c0cu: goto label_2a2c0c;
        case 0x2a2c10u: goto label_2a2c10;
        case 0x2a2c14u: goto label_2a2c14;
        case 0x2a2c18u: goto label_2a2c18;
        case 0x2a2c1cu: goto label_2a2c1c;
        case 0x2a2c20u: goto label_2a2c20;
        case 0x2a2c24u: goto label_2a2c24;
        case 0x2a2c28u: goto label_2a2c28;
        case 0x2a2c2cu: goto label_2a2c2c;
        case 0x2a2c30u: goto label_2a2c30;
        case 0x2a2c34u: goto label_2a2c34;
        case 0x2a2c38u: goto label_2a2c38;
        case 0x2a2c3cu: goto label_2a2c3c;
        case 0x2a2c40u: goto label_2a2c40;
        case 0x2a2c44u: goto label_2a2c44;
        case 0x2a2c48u: goto label_2a2c48;
        case 0x2a2c4cu: goto label_2a2c4c;
        case 0x2a2c50u: goto label_2a2c50;
        case 0x2a2c54u: goto label_2a2c54;
        case 0x2a2c58u: goto label_2a2c58;
        case 0x2a2c5cu: goto label_2a2c5c;
        case 0x2a2c60u: goto label_2a2c60;
        case 0x2a2c64u: goto label_2a2c64;
        case 0x2a2c68u: goto label_2a2c68;
        case 0x2a2c6cu: goto label_2a2c6c;
        case 0x2a2c70u: goto label_2a2c70;
        case 0x2a2c74u: goto label_2a2c74;
        case 0x2a2c78u: goto label_2a2c78;
        case 0x2a2c7cu: goto label_2a2c7c;
        case 0x2a2c80u: goto label_2a2c80;
        case 0x2a2c84u: goto label_2a2c84;
        case 0x2a2c88u: goto label_2a2c88;
        case 0x2a2c8cu: goto label_2a2c8c;
        case 0x2a2c90u: goto label_2a2c90;
        case 0x2a2c94u: goto label_2a2c94;
        case 0x2a2c98u: goto label_2a2c98;
        case 0x2a2c9cu: goto label_2a2c9c;
        case 0x2a2ca0u: goto label_2a2ca0;
        case 0x2a2ca4u: goto label_2a2ca4;
        case 0x2a2ca8u: goto label_2a2ca8;
        case 0x2a2cacu: goto label_2a2cac;
        case 0x2a2cb0u: goto label_2a2cb0;
        case 0x2a2cb4u: goto label_2a2cb4;
        case 0x2a2cb8u: goto label_2a2cb8;
        case 0x2a2cbcu: goto label_2a2cbc;
        case 0x2a2cc0u: goto label_2a2cc0;
        case 0x2a2cc4u: goto label_2a2cc4;
        case 0x2a2cc8u: goto label_2a2cc8;
        case 0x2a2cccu: goto label_2a2ccc;
        case 0x2a2cd0u: goto label_2a2cd0;
        case 0x2a2cd4u: goto label_2a2cd4;
        case 0x2a2cd8u: goto label_2a2cd8;
        case 0x2a2cdcu: goto label_2a2cdc;
        case 0x2a2ce0u: goto label_2a2ce0;
        case 0x2a2ce4u: goto label_2a2ce4;
        case 0x2a2ce8u: goto label_2a2ce8;
        case 0x2a2cecu: goto label_2a2cec;
        case 0x2a2cf0u: goto label_2a2cf0;
        case 0x2a2cf4u: goto label_2a2cf4;
        case 0x2a2cf8u: goto label_2a2cf8;
        case 0x2a2cfcu: goto label_2a2cfc;
        case 0x2a2d00u: goto label_2a2d00;
        case 0x2a2d04u: goto label_2a2d04;
        case 0x2a2d08u: goto label_2a2d08;
        case 0x2a2d0cu: goto label_2a2d0c;
        case 0x2a2d10u: goto label_2a2d10;
        case 0x2a2d14u: goto label_2a2d14;
        case 0x2a2d18u: goto label_2a2d18;
        case 0x2a2d1cu: goto label_2a2d1c;
        case 0x2a2d20u: goto label_2a2d20;
        case 0x2a2d24u: goto label_2a2d24;
        case 0x2a2d28u: goto label_2a2d28;
        case 0x2a2d2cu: goto label_2a2d2c;
        case 0x2a2d30u: goto label_2a2d30;
        case 0x2a2d34u: goto label_2a2d34;
        case 0x2a2d38u: goto label_2a2d38;
        case 0x2a2d3cu: goto label_2a2d3c;
        case 0x2a2d40u: goto label_2a2d40;
        case 0x2a2d44u: goto label_2a2d44;
        case 0x2a2d48u: goto label_2a2d48;
        case 0x2a2d4cu: goto label_2a2d4c;
        case 0x2a2d50u: goto label_2a2d50;
        case 0x2a2d54u: goto label_2a2d54;
        case 0x2a2d58u: goto label_2a2d58;
        case 0x2a2d5cu: goto label_2a2d5c;
        case 0x2a2d60u: goto label_2a2d60;
        case 0x2a2d64u: goto label_2a2d64;
        case 0x2a2d68u: goto label_2a2d68;
        case 0x2a2d6cu: goto label_2a2d6c;
        case 0x2a2d70u: goto label_2a2d70;
        case 0x2a2d74u: goto label_2a2d74;
        case 0x2a2d78u: goto label_2a2d78;
        case 0x2a2d7cu: goto label_2a2d7c;
        case 0x2a2d80u: goto label_2a2d80;
        case 0x2a2d84u: goto label_2a2d84;
        case 0x2a2d88u: goto label_2a2d88;
        case 0x2a2d8cu: goto label_2a2d8c;
        case 0x2a2d90u: goto label_2a2d90;
        case 0x2a2d94u: goto label_2a2d94;
        case 0x2a2d98u: goto label_2a2d98;
        case 0x2a2d9cu: goto label_2a2d9c;
        case 0x2a2da0u: goto label_2a2da0;
        case 0x2a2da4u: goto label_2a2da4;
        case 0x2a2da8u: goto label_2a2da8;
        case 0x2a2dacu: goto label_2a2dac;
        case 0x2a2db0u: goto label_2a2db0;
        case 0x2a2db4u: goto label_2a2db4;
        case 0x2a2db8u: goto label_2a2db8;
        case 0x2a2dbcu: goto label_2a2dbc;
        case 0x2a2dc0u: goto label_2a2dc0;
        case 0x2a2dc4u: goto label_2a2dc4;
        case 0x2a2dc8u: goto label_2a2dc8;
        case 0x2a2dccu: goto label_2a2dcc;
        case 0x2a2dd0u: goto label_2a2dd0;
        case 0x2a2dd4u: goto label_2a2dd4;
        case 0x2a2dd8u: goto label_2a2dd8;
        case 0x2a2ddcu: goto label_2a2ddc;
        case 0x2a2de0u: goto label_2a2de0;
        case 0x2a2de4u: goto label_2a2de4;
        case 0x2a2de8u: goto label_2a2de8;
        case 0x2a2decu: goto label_2a2dec;
        case 0x2a2df0u: goto label_2a2df0;
        case 0x2a2df4u: goto label_2a2df4;
        case 0x2a2df8u: goto label_2a2df8;
        case 0x2a2dfcu: goto label_2a2dfc;
        case 0x2a2e00u: goto label_2a2e00;
        case 0x2a2e04u: goto label_2a2e04;
        case 0x2a2e08u: goto label_2a2e08;
        case 0x2a2e0cu: goto label_2a2e0c;
        case 0x2a2e10u: goto label_2a2e10;
        case 0x2a2e14u: goto label_2a2e14;
        case 0x2a2e18u: goto label_2a2e18;
        case 0x2a2e1cu: goto label_2a2e1c;
        case 0x2a2e20u: goto label_2a2e20;
        case 0x2a2e24u: goto label_2a2e24;
        case 0x2a2e28u: goto label_2a2e28;
        case 0x2a2e2cu: goto label_2a2e2c;
        case 0x2a2e30u: goto label_2a2e30;
        case 0x2a2e34u: goto label_2a2e34;
        case 0x2a2e38u: goto label_2a2e38;
        case 0x2a2e3cu: goto label_2a2e3c;
        case 0x2a2e40u: goto label_2a2e40;
        case 0x2a2e44u: goto label_2a2e44;
        case 0x2a2e48u: goto label_2a2e48;
        case 0x2a2e4cu: goto label_2a2e4c;
        case 0x2a2e50u: goto label_2a2e50;
        case 0x2a2e54u: goto label_2a2e54;
        case 0x2a2e58u: goto label_2a2e58;
        case 0x2a2e5cu: goto label_2a2e5c;
        case 0x2a2e60u: goto label_2a2e60;
        case 0x2a2e64u: goto label_2a2e64;
        case 0x2a2e68u: goto label_2a2e68;
        case 0x2a2e6cu: goto label_2a2e6c;
        case 0x2a2e70u: goto label_2a2e70;
        case 0x2a2e74u: goto label_2a2e74;
        case 0x2a2e78u: goto label_2a2e78;
        case 0x2a2e7cu: goto label_2a2e7c;
        case 0x2a2e80u: goto label_2a2e80;
        case 0x2a2e84u: goto label_2a2e84;
        case 0x2a2e88u: goto label_2a2e88;
        case 0x2a2e8cu: goto label_2a2e8c;
        case 0x2a2e90u: goto label_2a2e90;
        case 0x2a2e94u: goto label_2a2e94;
        case 0x2a2e98u: goto label_2a2e98;
        case 0x2a2e9cu: goto label_2a2e9c;
        case 0x2a2ea0u: goto label_2a2ea0;
        case 0x2a2ea4u: goto label_2a2ea4;
        case 0x2a2ea8u: goto label_2a2ea8;
        case 0x2a2eacu: goto label_2a2eac;
        case 0x2a2eb0u: goto label_2a2eb0;
        case 0x2a2eb4u: goto label_2a2eb4;
        case 0x2a2eb8u: goto label_2a2eb8;
        case 0x2a2ebcu: goto label_2a2ebc;
        case 0x2a2ec0u: goto label_2a2ec0;
        case 0x2a2ec4u: goto label_2a2ec4;
        case 0x2a2ec8u: goto label_2a2ec8;
        case 0x2a2eccu: goto label_2a2ecc;
        case 0x2a2ed0u: goto label_2a2ed0;
        case 0x2a2ed4u: goto label_2a2ed4;
        case 0x2a2ed8u: goto label_2a2ed8;
        case 0x2a2edcu: goto label_2a2edc;
        case 0x2a2ee0u: goto label_2a2ee0;
        case 0x2a2ee4u: goto label_2a2ee4;
        case 0x2a2ee8u: goto label_2a2ee8;
        case 0x2a2eecu: goto label_2a2eec;
        case 0x2a2ef0u: goto label_2a2ef0;
        case 0x2a2ef4u: goto label_2a2ef4;
        case 0x2a2ef8u: goto label_2a2ef8;
        case 0x2a2efcu: goto label_2a2efc;
        case 0x2a2f00u: goto label_2a2f00;
        case 0x2a2f04u: goto label_2a2f04;
        case 0x2a2f08u: goto label_2a2f08;
        case 0x2a2f0cu: goto label_2a2f0c;
        case 0x2a2f10u: goto label_2a2f10;
        case 0x2a2f14u: goto label_2a2f14;
        case 0x2a2f18u: goto label_2a2f18;
        case 0x2a2f1cu: goto label_2a2f1c;
        case 0x2a2f20u: goto label_2a2f20;
        case 0x2a2f24u: goto label_2a2f24;
        case 0x2a2f28u: goto label_2a2f28;
        case 0x2a2f2cu: goto label_2a2f2c;
        case 0x2a2f30u: goto label_2a2f30;
        case 0x2a2f34u: goto label_2a2f34;
        case 0x2a2f38u: goto label_2a2f38;
        case 0x2a2f3cu: goto label_2a2f3c;
        case 0x2a2f40u: goto label_2a2f40;
        case 0x2a2f44u: goto label_2a2f44;
        case 0x2a2f48u: goto label_2a2f48;
        case 0x2a2f4cu: goto label_2a2f4c;
        case 0x2a2f50u: goto label_2a2f50;
        case 0x2a2f54u: goto label_2a2f54;
        case 0x2a2f58u: goto label_2a2f58;
        case 0x2a2f5cu: goto label_2a2f5c;
        case 0x2a2f60u: goto label_2a2f60;
        case 0x2a2f64u: goto label_2a2f64;
        case 0x2a2f68u: goto label_2a2f68;
        case 0x2a2f6cu: goto label_2a2f6c;
        case 0x2a2f70u: goto label_2a2f70;
        case 0x2a2f74u: goto label_2a2f74;
        case 0x2a2f78u: goto label_2a2f78;
        case 0x2a2f7cu: goto label_2a2f7c;
        case 0x2a2f80u: goto label_2a2f80;
        case 0x2a2f84u: goto label_2a2f84;
        case 0x2a2f88u: goto label_2a2f88;
        case 0x2a2f8cu: goto label_2a2f8c;
        case 0x2a2f90u: goto label_2a2f90;
        case 0x2a2f94u: goto label_2a2f94;
        case 0x2a2f98u: goto label_2a2f98;
        case 0x2a2f9cu: goto label_2a2f9c;
        case 0x2a2fa0u: goto label_2a2fa0;
        case 0x2a2fa4u: goto label_2a2fa4;
        case 0x2a2fa8u: goto label_2a2fa8;
        case 0x2a2facu: goto label_2a2fac;
        case 0x2a2fb0u: goto label_2a2fb0;
        case 0x2a2fb4u: goto label_2a2fb4;
        case 0x2a2fb8u: goto label_2a2fb8;
        case 0x2a2fbcu: goto label_2a2fbc;
        case 0x2a2fc0u: goto label_2a2fc0;
        case 0x2a2fc4u: goto label_2a2fc4;
        case 0x2a2fc8u: goto label_2a2fc8;
        case 0x2a2fccu: goto label_2a2fcc;
        case 0x2a2fd0u: goto label_2a2fd0;
        case 0x2a2fd4u: goto label_2a2fd4;
        case 0x2a2fd8u: goto label_2a2fd8;
        case 0x2a2fdcu: goto label_2a2fdc;
        case 0x2a2fe0u: goto label_2a2fe0;
        case 0x2a2fe4u: goto label_2a2fe4;
        case 0x2a2fe8u: goto label_2a2fe8;
        case 0x2a2fecu: goto label_2a2fec;
        case 0x2a2ff0u: goto label_2a2ff0;
        case 0x2a2ff4u: goto label_2a2ff4;
        case 0x2a2ff8u: goto label_2a2ff8;
        case 0x2a2ffcu: goto label_2a2ffc;
        case 0x2a3000u: goto label_2a3000;
        case 0x2a3004u: goto label_2a3004;
        case 0x2a3008u: goto label_2a3008;
        case 0x2a300cu: goto label_2a300c;
        case 0x2a3010u: goto label_2a3010;
        case 0x2a3014u: goto label_2a3014;
        case 0x2a3018u: goto label_2a3018;
        case 0x2a301cu: goto label_2a301c;
        case 0x2a3020u: goto label_2a3020;
        case 0x2a3024u: goto label_2a3024;
        case 0x2a3028u: goto label_2a3028;
        case 0x2a302cu: goto label_2a302c;
        case 0x2a3030u: goto label_2a3030;
        case 0x2a3034u: goto label_2a3034;
        case 0x2a3038u: goto label_2a3038;
        case 0x2a303cu: goto label_2a303c;
        case 0x2a3040u: goto label_2a3040;
        case 0x2a3044u: goto label_2a3044;
        case 0x2a3048u: goto label_2a3048;
        case 0x2a304cu: goto label_2a304c;
        case 0x2a3050u: goto label_2a3050;
        case 0x2a3054u: goto label_2a3054;
        case 0x2a3058u: goto label_2a3058;
        case 0x2a305cu: goto label_2a305c;
        case 0x2a3060u: goto label_2a3060;
        case 0x2a3064u: goto label_2a3064;
        case 0x2a3068u: goto label_2a3068;
        case 0x2a306cu: goto label_2a306c;
        case 0x2a3070u: goto label_2a3070;
        case 0x2a3074u: goto label_2a3074;
        case 0x2a3078u: goto label_2a3078;
        case 0x2a307cu: goto label_2a307c;
        case 0x2a3080u: goto label_2a3080;
        case 0x2a3084u: goto label_2a3084;
        case 0x2a3088u: goto label_2a3088;
        case 0x2a308cu: goto label_2a308c;
        case 0x2a3090u: goto label_2a3090;
        case 0x2a3094u: goto label_2a3094;
        case 0x2a3098u: goto label_2a3098;
        default: break;
    }

    ctx->pc = 0x2a1df8u;

label_2a1df8:
    // 0x2a1df8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a1df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2a1dfc:
    // 0x2a1dfc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2a1dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2a1e00:
    // 0x2a1e00: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2a1e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2a1e04:
    // 0x2a1e04: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2a1e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a1e08:
    // 0x2a1e08: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2a1e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2a1e0c:
    // 0x2a1e0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a1e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a1e10:
    // 0x2a1e10: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2a1e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2a1e14:
    // 0x2a1e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a1e18:
    // 0x2a1e18: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2a1e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2a1e1c:
    // 0x2a1e1c: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x2a1e1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
label_2a1e20:
    // 0x2a1e20: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a1e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2a1e24:
    // 0x2a1e24: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x2a1e24u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_2a1e28:
    // 0x2a1e28: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a1e2c:
    // 0x2a1e2c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2a1e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a1e30:
    // 0x2a1e30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a1e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a1e34:
    // 0x2a1e34: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2a1e34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2a1e38:
    // 0x2a1e38: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2a1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2a1e3c:
    // 0x2a1e3c: 0x60f809  jalr        $v1
label_2a1e40:
    if (ctx->pc == 0x2A1E40u) {
        ctx->pc = 0x2A1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E3Cu;
        // 0x2a1e40: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1E44u;
        goto label_2a1e44;
    }
    ctx->pc = 0x2A1E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A1E44u);
        ctx->pc = 0x2A1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E3Cu;
        // 0x2a1e40: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1E3Cu, 0x2A1E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1E44u;
label_2a1e44:
    // 0x2a1e44: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2a1e44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a1e48:
    // 0x2a1e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a1e4c:
    // 0x2a1e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a1e50:
    // 0x2a1e50: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2a1e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2a1e54:
    // 0x2a1e54: 0xc10c1fa  jal         func_4307E8
label_2a1e58:
    if (ctx->pc == 0x2A1E58u) {
        ctx->pc = 0x2A1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E54u;
        // 0x2a1e58: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1E5Cu;
        goto label_2a1e5c;
    }
    ctx->pc = 0x2A1E54u;
    SET_GPR_U32(ctx, 31, 0x2A1E5Cu);
    ctx->pc = 0x2A1E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E54u;
    // 0x2a1e58: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x2A1E54u, 0x2A1E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E5Cu;
label_2a1e5c:
    // 0x2a1e5c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a1e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a1e60:
    // 0x2a1e60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2a1e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2a1e64:
    // 0x2a1e64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a1e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a1e68:
    // 0x2a1e68: 0x24840124  addiu       $a0, $a0, 0x124
    ctx->pc = 0x2a1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
label_2a1e6c:
    // 0x2a1e6c: 0xc0e409a  jal         func_390268
label_2a1e70:
    if (ctx->pc == 0x2A1E70u) {
        ctx->pc = 0x2A1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E6Cu;
        // 0x2a1e70: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1E74u;
        goto label_2a1e74;
    }
    ctx->pc = 0x2A1E6Cu;
    SET_GPR_U32(ctx, 31, 0x2A1E74u);
    ctx->pc = 0x2A1E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E6Cu;
    // 0x2a1e70: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A1E6Cu, 0x2A1E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E74u;
label_2a1e74:
    // 0x2a1e74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a1e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1e78:
    // 0x2a1e78: 0xc08a08a  jal         func_228228
label_2a1e7c:
    if (ctx->pc == 0x2A1E7Cu) {
        ctx->pc = 0x2A1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E78u;
        // 0x2a1e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1E80u;
        goto label_2a1e80;
    }
    ctx->pc = 0x2A1E78u;
    SET_GPR_U32(ctx, 31, 0x2A1E80u);
    ctx->pc = 0x2A1E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E78u;
    // 0x2a1e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2A1E78u, 0x2A1E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E80u;
label_2a1e80:
    // 0x2a1e80: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2a1e84:
    if (ctx->pc == 0x2A1E84u) {
        ctx->pc = 0x2A1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E80u;
        // 0x2a1e84: 0x96420024  lhu         $v0, 0x24($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1E88u;
        goto label_2a1e88;
    }
    ctx->pc = 0x2A1E80u;
    {
        const bool branch_taken_0x2a1e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1e80) {
            ctx->pc = 0x2A1E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1E80u;
            // 0x2a1e84: 0x96420024  lhu         $v0, 0x24($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1E9Cu;
            goto label_2a1e9c;
        }
    }
    ctx->pc = 0x2A1E88u;
label_2a1e88:
    // 0x2a1e88: 0xc088ef0  jal         func_223BC0
label_2a1e8c:
    if (ctx->pc == 0x2A1E8Cu) {
        ctx->pc = 0x2A1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E88u;
        // 0x2a1e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1E90u;
        goto label_2a1e90;
    }
    ctx->pc = 0x2A1E88u;
    SET_GPR_U32(ctx, 31, 0x2A1E90u);
    ctx->pc = 0x2A1E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1E88u;
    // 0x2a1e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2A1E88u, 0x2A1E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E90u;
label_2a1e90:
    // 0x2a1e90: 0x10400483  beqz        $v0, . + 4 + (0x483 << 2)
label_2a1e94:
    if (ctx->pc == 0x2A1E94u) {
        ctx->pc = 0x2A1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E90u;
        // 0x2a1e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1E98u;
        goto label_2a1e98;
    }
    ctx->pc = 0x2A1E90u;
    {
        const bool branch_taken_0x2a1e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E90u;
        // 0x2a1e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1e90) {
            ctx->pc = 0x2A30A0u;
            return;
        }
    }
    ctx->pc = 0x2A1E98u;
label_2a1e98:
    // 0x2a1e98: 0x96420024  lhu         $v0, 0x24($s2)
    ctx->pc = 0x2a1e98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
label_2a1e9c:
    // 0x2a1e9c: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x2a1e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_2a1ea0:
    // 0x2a1ea0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2a1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a1ea4:
    // 0x2a1ea4: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x2a1ea4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
label_2a1ea8:
    // 0x2a1ea8: 0x2c830071  sltiu       $v1, $a0, 0x71
    ctx->pc = 0x2a1ea8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)113) ? 1 : 0);
label_2a1eac:
    // 0x2a1eac: 0x1060047b  beqz        $v1, . + 4 + (0x47B << 2)
label_2a1eb0:
    if (ctx->pc == 0x2A1EB0u) {
        ctx->pc = 0x2A1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EACu;
        // 0x2a1eb0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1EB4u;
        goto label_2a1eb4;
    }
    ctx->pc = 0x2A1EACu;
    {
        const bool branch_taken_0x2a1eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EACu;
        // 0x2a1eb0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1eac) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A1EB4u;
label_2a1eb4:
    // 0x2a1eb4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2a1eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2a1eb8:
    // 0x2a1eb8: 0x24422bd0  addiu       $v0, $v0, 0x2BD0
    ctx->pc = 0x2a1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11216));
label_2a1ebc:
    // 0x2a1ebc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a1ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a1ec0:
    // 0x2a1ec0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a1ec4:
    // 0x2a1ec4: 0x800008  jr          $a0
label_2a1ec8:
    if (ctx->pc == 0x2A1EC8u) {
        ctx->pc = 0x2A1ECCu;
        goto label_2a1ecc;
    }
    ctx->pc = 0x2A1EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A1ECCu: goto label_2a1ecc;
            case 0x2A1F04u: goto label_2a1f04;
            case 0x2A2060u: goto label_2a2060;
            case 0x2A2100u: goto label_2a2100;
            case 0x2A222Cu: goto label_2a222c;
            case 0x2A224Cu: goto label_2a224c;
            case 0x2A2278u: goto label_2a2278;
            case 0x2A228Cu: goto label_2a228c;
            case 0x2A22E4u: goto label_2a22e4;
            case 0x2A235Cu: goto label_2a235c;
            case 0x2A2384u: goto label_2a2384;
            case 0x2A23A0u: goto label_2a23a0;
            case 0x2A2438u: goto label_2a2438;
            case 0x2A24E8u: goto label_2a24e8;
            case 0x2A26F8u: goto label_2a26f8;
            case 0x2A2724u: goto label_2a2724;
            case 0x2A2830u: goto label_2a2830;
            case 0x2A286Cu: goto label_2a286c;
            case 0x2A28F4u: goto label_2a28f4;
            case 0x2A2AF0u: goto label_2a2af0;
            case 0x2A2BA8u: goto label_2a2ba8;
            case 0x2A2C2Cu: goto label_2a2c2c;
            case 0x2A2C90u: goto label_2a2c90;
            case 0x2A2CF4u: goto label_2a2cf4;
            case 0x2A2DB8u: goto label_2a2db8;
            case 0x2A2E54u: goto label_2a2e54;
            case 0x2A2EB0u: goto label_2a2eb0;
            case 0x2A2EE0u: goto label_2a2ee0;
            case 0x2A2F38u: goto label_2a2f38;
            case 0x2A2F60u: goto label_2a2f60;
            case 0x2A2FB0u: goto label_2a2fb0;
            case 0x2A3000u: goto label_2a3000;
            case 0x2A304Cu: goto label_2a304c;
            case 0x2A3078u: goto label_2a3078;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1EC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A1ECCu;
label_2a1ecc:
    // 0x2a1ecc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a1eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a1ed0:
    // 0x2a1ed0: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x2a1ed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_2a1ed4:
    // 0x2a1ed4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2a1ed8:
    // 0x2a1ed8: 0x40f809  jalr        $v0
label_2a1edc:
    if (ctx->pc == 0x2A1EDCu) {
        ctx->pc = 0x2A1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1ED8u;
        // 0x2a1edc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1EE0u;
        goto label_2a1ee0;
    }
    ctx->pc = 0x2A1ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1EE0u);
        ctx->pc = 0x2A1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1ED8u;
        // 0x2a1edc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A1F04u: goto label_2a1f04;
            case 0x2A2060u: goto label_2a2060;
            case 0x2A2100u: goto label_2a2100;
            case 0x2A222Cu: goto label_2a222c;
            case 0x2A224Cu: goto label_2a224c;
            case 0x2A2278u: goto label_2a2278;
            case 0x2A228Cu: goto label_2a228c;
            case 0x2A22E4u: goto label_2a22e4;
            case 0x2A235Cu: goto label_2a235c;
            case 0x2A2384u: goto label_2a2384;
            case 0x2A23A0u: goto label_2a23a0;
            case 0x2A2438u: goto label_2a2438;
            case 0x2A24E8u: goto label_2a24e8;
            case 0x2A26F8u: goto label_2a26f8;
            case 0x2A2724u: goto label_2a2724;
            case 0x2A2830u: goto label_2a2830;
            case 0x2A286Cu: goto label_2a286c;
            case 0x2A28F4u: goto label_2a28f4;
            case 0x2A2AF0u: goto label_2a2af0;
            case 0x2A2BA8u: goto label_2a2ba8;
            case 0x2A2C2Cu: goto label_2a2c2c;
            case 0x2A2CF4u: goto label_2a2cf4;
            case 0x2A2DB8u: goto label_2a2db8;
            case 0x2A2E54u: goto label_2a2e54;
            case 0x2A2EB0u: goto label_2a2eb0;
            case 0x2A2EE0u: goto label_2a2ee0;
            case 0x2A2F38u: goto label_2a2f38;
            case 0x2A2F60u: goto label_2a2f60;
            case 0x2A2FB0u: goto label_2a2fb0;
            case 0x2A3000u: goto label_2a3000;
            case 0x2A304Cu: goto label_2a304c;
            case 0x2A3078u: goto label_2a3078;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1ED8u, 0x2A1EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1EE0u;
label_2a1ee0:
    // 0x2a1ee0: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x2a1ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2a1ee4:
    // 0x2a1ee4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1ee8:
    // 0x2a1ee8: 0x26490034  addiu       $t1, $s2, 0x34
    ctx->pc = 0x2a1ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
label_2a1eec:
    // 0x2a1eec: 0x26460028  addiu       $a2, $s2, 0x28
    ctx->pc = 0x2a1eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_2a1ef0:
    // 0x2a1ef0: 0x26470024  addiu       $a3, $s2, 0x24
    ctx->pc = 0x2a1ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_2a1ef4:
    // 0x2a1ef4: 0xc0a7e8a  jal         func_29FA28
label_2a1ef8:
    if (ctx->pc == 0x2A1EF8u) {
        ctx->pc = 0x2A1EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EF4u;
        // 0x2a1ef8: 0x26480026  addiu       $t0, $s2, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1EFCu;
        goto label_2a1efc;
    }
    ctx->pc = 0x2A1EF4u;
    SET_GPR_U32(ctx, 31, 0x2A1EFCu);
    ctx->pc = 0x2A1EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1EF4u;
    // 0x2a1ef8: 0x26480026  addiu       $t0, $s2, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FA28u, 0x2A1EF4u, 0x2A1EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1EFCu;
label_2a1efc:
    // 0x2a1efc: 0x10000468  b           . + 4 + (0x468 << 2)
label_2a1f00:
    if (ctx->pc == 0x2A1F00u) {
        ctx->pc = 0x2A1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EFCu;
        // 0x2a1f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1F04u;
        goto label_2a1f04;
    }
    ctx->pc = 0x2A1EFCu;
    {
        const bool branch_taken_0x2a1efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EFCu;
        // 0x2a1f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1efc) {
            ctx->pc = 0x2A30A0u;
            return;
        }
    }
    ctx->pc = 0x2A1F04u;
label_2a1f04:
    // 0x2a1f04: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x2a1f04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
label_2a1f08:
    // 0x2a1f08: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2a1f0c:
    if (ctx->pc == 0x2A1F0Cu) {
        ctx->pc = 0x2A1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F08u;
        // 0x2a1f0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1F10u;
        goto label_2a1f10;
    }
    ctx->pc = 0x2A1F08u;
    {
        const bool branch_taken_0x2a1f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F08u;
        // 0x2a1f0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f08) {
            ctx->pc = 0x2A1F20u;
            goto label_2a1f20;
        }
    }
    ctx->pc = 0x2A1F10u;
label_2a1f10:
    // 0x2a1f10: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
label_2a1f14:
    if (ctx->pc == 0x2A1F14u) {
        ctx->pc = 0x2A1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F10u;
        // 0x2a1f14: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1F18u;
        goto label_2a1f18;
    }
    ctx->pc = 0x2A1F10u;
    {
        const bool branch_taken_0x2a1f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F10u;
        // 0x2a1f14: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f10) {
            ctx->pc = 0x2A1FECu;
            goto label_2a1fec;
        }
    }
    ctx->pc = 0x2A1F18u;
label_2a1f18:
    // 0x2a1f18: 0x10000460  b           . + 4 + (0x460 << 2)
label_2a1f1c:
    if (ctx->pc == 0x2A1F1Cu) {
        ctx->pc = 0x2A1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F18u;
        // 0x2a1f1c: 0xa6420024  sh          $v0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1F20u;
        goto label_2a1f20;
    }
    ctx->pc = 0x2A1F18u;
    {
        const bool branch_taken_0x2a1f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F18u;
        // 0x2a1f1c: 0xa6420024  sh          $v0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f18) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A1F20u;
label_2a1f20:
    // 0x2a1f20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a1f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a1f24:
    // 0x2a1f24: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2a1f24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2a1f28:
    // 0x2a1f28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a1f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a1f2c:
    // 0x2a1f2c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a1f2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a1f30:
    // 0x2a1f30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a1f34:
    // 0x2a1f34: 0x40f809  jalr        $v0
label_2a1f38:
    if (ctx->pc == 0x2A1F38u) {
        ctx->pc = 0x2A1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F34u;
        // 0x2a1f38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1F3Cu;
        goto label_2a1f3c;
    }
    ctx->pc = 0x2A1F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1F3Cu);
        ctx->pc = 0x2A1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F34u;
        // 0x2a1f38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1F34u, 0x2A1F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1F3Cu;
label_2a1f3c:
    // 0x2a1f3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1f40:
    // 0x2a1f40: 0xc08d480  jal         func_235200
label_2a1f44:
    if (ctx->pc == 0x2A1F44u) {
        ctx->pc = 0x2A1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F40u;
        // 0x2a1f44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1F48u;
        goto label_2a1f48;
    }
    ctx->pc = 0x2A1F40u;
    SET_GPR_U32(ctx, 31, 0x2A1F48u);
    ctx->pc = 0x2A1F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F40u;
    // 0x2a1f44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235200u, 0x2A1F40u, 0x2A1F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F48u;
label_2a1f48:
    // 0x2a1f48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a1f4c:
    // 0x2a1f4c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a1f4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a1f50:
    // 0x2a1f50: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a1f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a1f54:
    // 0x2a1f54: 0x40f809  jalr        $v0
label_2a1f58:
    if (ctx->pc == 0x2A1F58u) {
        ctx->pc = 0x2A1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F54u;
        // 0x2a1f58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1F5Cu;
        goto label_2a1f5c;
    }
    ctx->pc = 0x2A1F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1F5Cu);
        ctx->pc = 0x2A1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F54u;
        // 0x2a1f58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1F54u, 0x2A1F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1F5Cu;
label_2a1f5c:
    // 0x2a1f5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1f60:
    // 0x2a1f60: 0xc08d784  jal         func_235E10
label_2a1f64:
    if (ctx->pc == 0x2A1F64u) {
        ctx->pc = 0x2A1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F60u;
        // 0x2a1f64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1F68u;
        goto label_2a1f68;
    }
    ctx->pc = 0x2A1F60u;
    SET_GPR_U32(ctx, 31, 0x2A1F68u);
    ctx->pc = 0x2A1F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F60u;
    // 0x2a1f64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235E10u, 0x2A1F60u, 0x2A1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F68u;
label_2a1f68:
    // 0x2a1f68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a1f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a1f6c:
    // 0x2a1f6c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a1f6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a1f70:
    // 0x2a1f70: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a1f74:
    // 0x2a1f74: 0x40f809  jalr        $v0
label_2a1f78:
    if (ctx->pc == 0x2A1F78u) {
        ctx->pc = 0x2A1F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F74u;
        // 0x2a1f78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1F7Cu;
        goto label_2a1f7c;
    }
    ctx->pc = 0x2A1F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1F7Cu);
        ctx->pc = 0x2A1F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F74u;
        // 0x2a1f78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1F74u, 0x2A1F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1F7Cu;
label_2a1f7c:
    // 0x2a1f7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1f80:
    // 0x2a1f80: 0xc08d466  jal         func_235198
label_2a1f84:
    if (ctx->pc == 0x2A1F84u) {
        ctx->pc = 0x2A1F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F80u;
        // 0x2a1f84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1F88u;
        goto label_2a1f88;
    }
    ctx->pc = 0x2A1F80u;
    SET_GPR_U32(ctx, 31, 0x2A1F88u);
    ctx->pc = 0x2A1F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F80u;
    // 0x2a1f84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235198u, 0x2A1F80u, 0x2A1F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F88u;
label_2a1f88:
    // 0x2a1f88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a1f8c:
    // 0x2a1f8c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a1f8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a1f90:
    // 0x2a1f90: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a1f94:
    // 0x2a1f94: 0x40f809  jalr        $v0
label_2a1f98:
    if (ctx->pc == 0x2A1F98u) {
        ctx->pc = 0x2A1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F94u;
        // 0x2a1f98: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1F9Cu;
        goto label_2a1f9c;
    }
    ctx->pc = 0x2A1F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1F9Cu);
        ctx->pc = 0x2A1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F94u;
        // 0x2a1f98: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1F94u, 0x2A1F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1F9Cu;
label_2a1f9c:
    // 0x2a1f9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1fa0:
    // 0x2a1fa0: 0xc08d6ba  jal         func_235AE8
label_2a1fa4:
    if (ctx->pc == 0x2A1FA4u) {
        ctx->pc = 0x2A1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FA0u;
        // 0x2a1fa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1FA8u;
        goto label_2a1fa8;
    }
    ctx->pc = 0x2A1FA0u;
    SET_GPR_U32(ctx, 31, 0x2A1FA8u);
    ctx->pc = 0x2A1FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1FA0u;
    // 0x2a1fa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235AE8u, 0x2A1FA0u, 0x2A1FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FA8u;
label_2a1fa8:
    // 0x2a1fa8: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2a1fa8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2a1fac:
    // 0x2a1fac: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2a1facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2a1fb0:
    // 0x2a1fb0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2a1fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2a1fb4:
    // 0x2a1fb4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2a1fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a1fb8:
    // 0x2a1fb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a1fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a1fbc:
    // 0x2a1fbc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2a1fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2a1fc0:
    // 0x2a1fc0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2a1fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2a1fc4:
    // 0x2a1fc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a1fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a1fc8:
    // 0x2a1fc8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2a1fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2a1fcc:
    // 0x2a1fcc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a1fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a1fd0:
    // 0x2a1fd0: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2a1fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2a1fd4:
    // 0x2a1fd4: 0x84c400e0  lh          $a0, 0xE0($a2)
    ctx->pc = 0x2a1fd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 224)));
label_2a1fd8:
    // 0x2a1fd8: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x2a1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_2a1fdc:
    // 0x2a1fdc: 0x40f809  jalr        $v0
label_2a1fe0:
    if (ctx->pc == 0x2A1FE0u) {
        ctx->pc = 0x2A1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FDCu;
        // 0x2a1fe0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1FE4u;
        goto label_2a1fe4;
    }
    ctx->pc = 0x2A1FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1FE4u);
        ctx->pc = 0x2A1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FDCu;
        // 0x2a1fe0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1FDCu, 0x2A1FE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1FE4u;
label_2a1fe4:
    // 0x2a1fe4: 0x1000042c  b           . + 4 + (0x42C << 2)
label_2a1fe8:
    if (ctx->pc == 0x2A1FE8u) {
        ctx->pc = 0x2A1FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FE4u;
        // 0x2a1fe8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1FECu;
        goto label_2a1fec;
    }
    ctx->pc = 0x2A1FE4u;
    {
        const bool branch_taken_0x2a1fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FE4u;
        // 0x2a1fe8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1fe4) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A1FECu;
label_2a1fec:
    // 0x2a1fec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a1ff0:
    // 0x2a1ff0: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2a1ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2a1ff4:
    // 0x2a1ff4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a1ff8:
    // 0x2a1ff8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a1ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a1ffc:
    // 0x2a1ffc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2000:
    // 0x2a2000: 0x40f809  jalr        $v0
label_2a2004:
    if (ctx->pc == 0x2A2004u) {
        ctx->pc = 0x2A2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2000u;
        // 0x2a2004: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2008u;
        goto label_2a2008;
    }
    ctx->pc = 0x2A2000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2008u);
        ctx->pc = 0x2A2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2000u;
        // 0x2a2004: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2000u, 0x2A2008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2008u;
label_2a2008:
    // 0x2a2008: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a200c:
    // 0x2a200c: 0xc08d480  jal         func_235200
label_2a2010:
    if (ctx->pc == 0x2A2010u) {
        ctx->pc = 0x2A2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A200Cu;
        // 0x2a2010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2014u;
        goto label_2a2014;
    }
    ctx->pc = 0x2A200Cu;
    SET_GPR_U32(ctx, 31, 0x2A2014u);
    ctx->pc = 0x2A2010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A200Cu;
    // 0x2a2010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235200u, 0x2A200Cu, 0x2A2014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2014u;
label_2a2014:
    // 0x2a2014: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2018:
    // 0x2a2018: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a201c:
    // 0x2a201c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2020:
    // 0x2a2020: 0x40f809  jalr        $v0
label_2a2024:
    if (ctx->pc == 0x2A2024u) {
        ctx->pc = 0x2A2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2020u;
        // 0x2a2024: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2028u;
        goto label_2a2028;
    }
    ctx->pc = 0x2A2020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2028u);
        ctx->pc = 0x2A2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2020u;
        // 0x2a2024: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2020u, 0x2A2028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2028u;
label_2a2028:
    // 0x2a2028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a202c:
    // 0x2a202c: 0xc08d6ba  jal         func_235AE8
label_2a2030:
    if (ctx->pc == 0x2A2030u) {
        ctx->pc = 0x2A2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A202Cu;
        // 0x2a2030: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2034u;
        goto label_2a2034;
    }
    ctx->pc = 0x2A202Cu;
    SET_GPR_U32(ctx, 31, 0x2A2034u);
    ctx->pc = 0x2A2030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A202Cu;
    // 0x2a2030: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235AE8u, 0x2A202Cu, 0x2A2034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2034u;
label_2a2034:
    // 0x2a2034: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2038:
    // 0x2a2038: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a2038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a203c:
    // 0x2a203c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2a203cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2a2040:
    // 0x2a2040: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2a2040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2a2044:
    // 0x2a2044: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a2044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a2048:
    // 0x2a2048: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2a2048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2a204c:
    // 0x2a204c: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2a204cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2a2050:
    // 0x2a2050: 0x40f809  jalr        $v0
label_2a2054:
    if (ctx->pc == 0x2A2054u) {
        ctx->pc = 0x2A2054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2050u;
        // 0x2a2054: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2058u;
        goto label_2a2058;
    }
    ctx->pc = 0x2A2050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2058u);
        ctx->pc = 0x2A2054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2050u;
        // 0x2a2054: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2050u, 0x2A2058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2058u;
label_2a2058:
    // 0x2a2058: 0x1000040f  b           . + 4 + (0x40F << 2)
label_2a205c:
    if (ctx->pc == 0x2A205Cu) {
        ctx->pc = 0x2A205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2058u;
        // 0x2a205c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2060u;
        goto label_2a2060;
    }
    ctx->pc = 0x2A2058u;
    {
        const bool branch_taken_0x2a2058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2058u;
        // 0x2a205c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2058) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A2060u;
label_2a2060:
    // 0x2a2060: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a2060u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a2064:
    // 0x2a2064: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2a2064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2a2068:
    // 0x2a2068: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2a2068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2a206c:
    // 0x2a206c: 0x24a52b88  addiu       $a1, $a1, 0x2B88
    ctx->pc = 0x2a206cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11144));
label_2a2070:
    // 0x2a2070: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a2070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a2074:
    // 0x2a2074: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2a2074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2a2078:
    // 0x2a2078: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2a2078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2a207c:
    // 0x2a207c: 0x40f809  jalr        $v0
label_2a2080:
    if (ctx->pc == 0x2A2080u) {
        ctx->pc = 0x2A2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A207Cu;
        // 0x2a2080: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2084u;
        goto label_2a2084;
    }
    ctx->pc = 0x2A207Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2084u);
        ctx->pc = 0x2A2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A207Cu;
        // 0x2a2080: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A207Cu, 0x2A2084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2084u;
label_2a2084:
    // 0x2a2084: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a2088:
    if (ctx->pc == 0x2A2088u) {
        ctx->pc = 0x2A2088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2084u;
        // 0x2a2088: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A208Cu;
        goto label_2a208c;
    }
    ctx->pc = 0x2A2084u;
    {
        const bool branch_taken_0x2a2084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2084u;
        // 0x2a2088: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2084) {
            ctx->pc = 0x2A20A8u;
            goto label_2a20a8;
        }
    }
    ctx->pc = 0x2A208Cu;
label_2a208c:
    // 0x2a208c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a208cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2090:
    // 0x2a2090: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a2090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2094:
    // 0x2a2094: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2a2094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2a2098:
    // 0x2a2098: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2a2098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2a209c:
    // 0x2a209c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2a209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2a20a0:
    // 0x2a20a0: 0x60f809  jalr        $v1
label_2a20a4:
    if (ctx->pc == 0x2A20A4u) {
        ctx->pc = 0x2A20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20A0u;
        // 0x2a20a4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A20A8u;
        goto label_2a20a8;
    }
    ctx->pc = 0x2A20A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A20A8u);
        ctx->pc = 0x2A20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20A0u;
        // 0x2a20a4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A20A0u, 0x2A20A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A20A8u;
label_2a20a8:
    // 0x2a20a8: 0xc0a36c8  jal         func_28DB20
label_2a20ac:
    if (ctx->pc == 0x2A20ACu) {
        ctx->pc = 0x2A20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20A8u;
        // 0x2a20ac: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A20B0u;
        goto label_2a20b0;
    }
    ctx->pc = 0x2A20A8u;
    SET_GPR_U32(ctx, 31, 0x2A20B0u);
    ctx->pc = 0x2A20ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A20A8u;
    // 0x2a20ac: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2A20A8u, 0x2A20B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A20B0u;
label_2a20b0:
    // 0x2a20b0: 0xa640002c  sh          $zero, 0x2C($s2)
    ctx->pc = 0x2a20b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 0));
label_2a20b4:
    // 0x2a20b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a20b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a20b8:
    // 0x2a20b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a20b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a20bc:
    // 0x2a20bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a20c0:
    // 0x2a20c0: 0x40f809  jalr        $v0
label_2a20c4:
    if (ctx->pc == 0x2A20C4u) {
        ctx->pc = 0x2A20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20C0u;
        // 0x2a20c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A20C8u;
        goto label_2a20c8;
    }
    ctx->pc = 0x2A20C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A20C8u);
        ctx->pc = 0x2A20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20C0u;
        // 0x2a20c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A20C0u, 0x2A20C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A20C8u;
label_2a20c8:
    // 0x2a20c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a20c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a20cc:
    // 0x2a20cc: 0xc08d52e  jal         func_2354B8
label_2a20d0:
    if (ctx->pc == 0x2A20D0u) {
        ctx->pc = 0x2A20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20CCu;
        // 0x2a20d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A20D4u;
        goto label_2a20d4;
    }
    ctx->pc = 0x2A20CCu;
    SET_GPR_U32(ctx, 31, 0x2A20D4u);
    ctx->pc = 0x2A20D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A20CCu;
    // 0x2a20d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2354B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2354B8u, 0x2A20CCu, 0x2A20D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A20D4u;
label_2a20d4:
    // 0x2a20d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a20d8:
    // 0x2a20d8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a20d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a20dc:
    // 0x2a20dc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a20e0:
    // 0x2a20e0: 0x40f809  jalr        $v0
label_2a20e4:
    if (ctx->pc == 0x2A20E4u) {
        ctx->pc = 0x2A20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20E0u;
        // 0x2a20e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A20E8u;
        goto label_2a20e8;
    }
    ctx->pc = 0x2A20E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A20E8u);
        ctx->pc = 0x2A20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20E0u;
        // 0x2a20e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A20E0u, 0x2A20E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A20E8u;
label_2a20e8:
    // 0x2a20e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a20e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a20ec:
    // 0x2a20ec: 0xc08d466  jal         func_235198
label_2a20f0:
    if (ctx->pc == 0x2A20F0u) {
        ctx->pc = 0x2A20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20ECu;
        // 0x2a20f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A20F4u;
        goto label_2a20f4;
    }
    ctx->pc = 0x2A20ECu;
    SET_GPR_U32(ctx, 31, 0x2A20F4u);
    ctx->pc = 0x2A20F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A20ECu;
    // 0x2a20f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235198u, 0x2A20ECu, 0x2A20F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A20F4u;
label_2a20f4:
    // 0x2a20f4: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2a20f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2a20f8:
    // 0x2a20f8: 0x1000004e  b           . + 4 + (0x4E << 2)
label_2a20fc:
    if (ctx->pc == 0x2A20FCu) {
        ctx->pc = 0x2A20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20F8u;
        // 0x2a20fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2100u;
        goto label_2a2100;
    }
    ctx->pc = 0x2A20F8u;
    {
        const bool branch_taken_0x2a20f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20F8u;
        // 0x2a20fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20f8) {
            ctx->pc = 0x2A2234u;
            goto label_2a2234;
        }
    }
    ctx->pc = 0x2A2100u;
label_2a2100:
    // 0x2a2100: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a2100u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a2104:
    // 0x2a2104: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2a2104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2a2108:
    // 0x2a2108: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2a2108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2a210c:
    // 0x2a210c: 0x24a52b98  addiu       $a1, $a1, 0x2B98
    ctx->pc = 0x2a210cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11160));
label_2a2110:
    // 0x2a2110: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a2110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a2114:
    // 0x2a2114: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2a2114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2a2118:
    // 0x2a2118: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2a2118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2a211c:
    // 0x2a211c: 0x40f809  jalr        $v0
label_2a2120:
    if (ctx->pc == 0x2A2120u) {
        ctx->pc = 0x2A2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A211Cu;
        // 0x2a2120: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2124u;
        goto label_2a2124;
    }
    ctx->pc = 0x2A211Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2124u);
        ctx->pc = 0x2A2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A211Cu;
        // 0x2a2120: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A211Cu, 0x2A2124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2124u;
label_2a2124:
    // 0x2a2124: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a2128:
    if (ctx->pc == 0x2A2128u) {
        ctx->pc = 0x2A2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2124u;
        // 0x2a2128: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A212Cu;
        goto label_2a212c;
    }
    ctx->pc = 0x2A2124u;
    {
        const bool branch_taken_0x2a2124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2124u;
        // 0x2a2128: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2124) {
            ctx->pc = 0x2A2148u;
            goto label_2a2148;
        }
    }
    ctx->pc = 0x2A212Cu;
label_2a212c:
    // 0x2a212c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a212cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2130:
    // 0x2a2130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a2130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2134:
    // 0x2a2134: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2a2134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2a2138:
    // 0x2a2138: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2a2138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2a213c:
    // 0x2a213c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2a213cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2a2140:
    // 0x2a2140: 0x60f809  jalr        $v1
label_2a2144:
    if (ctx->pc == 0x2A2144u) {
        ctx->pc = 0x2A2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2140u;
        // 0x2a2144: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2148u;
        goto label_2a2148;
    }
    ctx->pc = 0x2A2140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A2148u);
        ctx->pc = 0x2A2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2140u;
        // 0x2a2144: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2140u, 0x2A2148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2148u;
label_2a2148:
    // 0x2a2148: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x2a2148u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_2a214c:
    // 0x2a214c: 0xc087502  jal         func_21D408
label_2a2150:
    if (ctx->pc == 0x2A2150u) {
        ctx->pc = 0x2A2150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A214Cu;
        // 0x2a2150: 0x8e049404  lw          $a0, -0x6BFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2154u;
        goto label_2a2154;
    }
    ctx->pc = 0x2A214Cu;
    SET_GPR_U32(ctx, 31, 0x2A2154u);
    ctx->pc = 0x2A2150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A214Cu;
    // 0x2a2150: 0x8e049404  lw          $a0, -0x6BFC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939652)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A214Cu, 0x2A2154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2154u;
label_2a2154:
    // 0x2a2154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2158:
    // 0x2a2158: 0xc0a3658  jal         func_28D960
label_2a215c:
    if (ctx->pc == 0x2A215Cu) {
        ctx->pc = 0x2A215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2158u;
        // 0x2a215c: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2160u;
        goto label_2a2160;
    }
    ctx->pc = 0x2A2158u;
    SET_GPR_U32(ctx, 31, 0x2A2160u);
    ctx->pc = 0x2A215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2158u;
    // 0x2a215c: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2A2158u, 0x2A2160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2160u;
label_2a2160:
    // 0x2a2160: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2a2160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a2164:
    // 0x2a2164: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a2168:
    if (ctx->pc == 0x2A2168u) {
        ctx->pc = 0x2A2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2164u;
        // 0x2a2168: 0x29c03  sra         $s3, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A216Cu;
        goto label_2a216c;
    }
    ctx->pc = 0x2A2164u;
    {
        const bool branch_taken_0x2a2164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2164u;
        // 0x2a2168: 0x29c03  sra         $s3, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2164) {
            ctx->pc = 0x2A2180u;
            goto label_2a2180;
        }
    }
    ctx->pc = 0x2A216Cu;
label_2a216c:
    // 0x2a216c: 0x0  nop
    ctx->pc = 0x2a216cu;
    // NOP
label_2a2170:
    // 0x2a2170: 0xc087502  jal         func_21D408
label_2a2174:
    if (ctx->pc == 0x2A2174u) {
        ctx->pc = 0x2A2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2170u;
        // 0x2a2174: 0x8e049404  lw          $a0, -0x6BFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2178u;
        goto label_2a2178;
    }
    ctx->pc = 0x2A2170u;
    SET_GPR_U32(ctx, 31, 0x2A2178u);
    ctx->pc = 0x2A2174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2170u;
    // 0x2a2174: 0x8e049404  lw          $a0, -0x6BFC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939652)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A2170u, 0x2A2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2178u;
label_2a2178:
    // 0x2a2178: 0xc0a35f6  jal         func_28D7D8
label_2a217c:
    if (ctx->pc == 0x2A217Cu) {
        ctx->pc = 0x2A217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2178u;
        // 0x2a217c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2180u;
        goto label_2a2180;
    }
    ctx->pc = 0x2A2178u;
    SET_GPR_U32(ctx, 31, 0x2A2180u);
    ctx->pc = 0x2A217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2178u;
    // 0x2a217c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x2A2178u, 0x2A2180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2180u;
label_2a2180:
    // 0x2a2180: 0xc087502  jal         func_21D408
label_2a2184:
    if (ctx->pc == 0x2A2184u) {
        ctx->pc = 0x2A2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2180u;
        // 0x2a2184: 0x8e049404  lw          $a0, -0x6BFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2188u;
        goto label_2a2188;
    }
    ctx->pc = 0x2A2180u;
    SET_GPR_U32(ctx, 31, 0x2A2188u);
    ctx->pc = 0x2A2184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2180u;
    // 0x2a2184: 0x8e049404  lw          $a0, -0x6BFC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939652)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A2180u, 0x2A2188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2188u;
label_2a2188:
    // 0x2a2188: 0x8043002c  lb          $v1, 0x2C($v0)
    ctx->pc = 0x2a2188u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
label_2a218c:
    // 0x2a218c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2a218cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a2190:
    // 0x2a2190: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_2a2194:
    if (ctx->pc == 0x2A2194u) {
        ctx->pc = 0x2A2198u;
        goto label_2a2198;
    }
    ctx->pc = 0x2A2190u;
    {
        const bool branch_taken_0x2a2190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2190) {
            ctx->pc = 0x2A2170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2170;
        }
    }
    ctx->pc = 0x2A2198u;
label_2a2198:
    // 0x2a2198: 0xc087502  jal         func_21D408
label_2a219c:
    if (ctx->pc == 0x2A219Cu) {
        ctx->pc = 0x2A219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2198u;
        // 0x2a219c: 0x8e049404  lw          $a0, -0x6BFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A21A0u;
        goto label_2a21a0;
    }
    ctx->pc = 0x2A2198u;
    SET_GPR_U32(ctx, 31, 0x2A21A0u);
    ctx->pc = 0x2A219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2198u;
    // 0x2a219c: 0x8e049404  lw          $a0, -0x6BFC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939652)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A2198u, 0x2A21A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A21A0u;
label_2a21a0:
    // 0x2a21a0: 0x6600009  bltz        $s3, . + 4 + (0x9 << 2)
label_2a21a4:
    if (ctx->pc == 0x2A21A4u) {
        ctx->pc = 0x2A21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21A0u;
        // 0x2a21a4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A21A8u;
        goto label_2a21a8;
    }
    ctx->pc = 0x2A21A0u;
    {
        const bool branch_taken_0x2a21a0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2A21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21A0u;
        // 0x2a21a4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21a0) {
            ctx->pc = 0x2A21C8u;
            goto label_2a21c8;
        }
    }
    ctx->pc = 0x2A21A8u;
label_2a21a8:
    // 0x2a21a8: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2a21a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2a21ac:
    // 0x2a21ac: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x2a21acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2a21b0:
    // 0x2a21b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2a21b4:
    if (ctx->pc == 0x2A21B4u) {
        ctx->pc = 0x2A21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21B0u;
        // 0x2a21b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A21B8u;
        goto label_2a21b8;
    }
    ctx->pc = 0x2A21B0u;
    {
        const bool branch_taken_0x2a21b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a21b0) {
            ctx->pc = 0x2A21B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A21B0u;
            // 0x2a21b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A21CCu;
            goto label_2a21cc;
        }
    }
    ctx->pc = 0x2A21B8u;
label_2a21b8:
    // 0x2a21b8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2a21b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2a21bc:
    // 0x2a21bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2a21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a21c0:
    // 0x2a21c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a21c4:
    if (ctx->pc == 0x2A21C4u) {
        ctx->pc = 0x2A21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21C0u;
        // 0x2a21c4: 0x8c430040  lw          $v1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A21C8u;
        goto label_2a21c8;
    }
    ctx->pc = 0x2A21C0u;
    {
        const bool branch_taken_0x2a21c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21C0u;
        // 0x2a21c4: 0x8c430040  lw          $v1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21c0) {
            ctx->pc = 0x2A21CCu;
            goto label_2a21cc;
        }
    }
    ctx->pc = 0x2A21C8u;
label_2a21c8:
    // 0x2a21c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a21c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a21cc:
    // 0x2a21cc: 0x240200c5  addiu       $v0, $zero, 0xC5
    ctx->pc = 0x2a21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
label_2a21d0:
    // 0x2a21d0: 0xa4620024  sh          $v0, 0x24($v1)
    ctx->pc = 0x2a21d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 36), (uint16_t)GPR_U32(ctx, 2));
label_2a21d4:
    // 0x2a21d4: 0xc0a36c8  jal         func_28DB20
label_2a21d8:
    if (ctx->pc == 0x2A21D8u) {
        ctx->pc = 0x2A21D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21D4u;
        // 0x2a21d8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A21DCu;
        goto label_2a21dc;
    }
    ctx->pc = 0x2A21D4u;
    SET_GPR_U32(ctx, 31, 0x2A21DCu);
    ctx->pc = 0x2A21D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A21D4u;
    // 0x2a21d8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2A21D4u, 0x2A21DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A21DCu;
label_2a21dc:
    // 0x2a21dc: 0xa640002c  sh          $zero, 0x2C($s2)
    ctx->pc = 0x2a21dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 0));
label_2a21e0:
    // 0x2a21e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a21e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a21e4:
    // 0x2a21e4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a21e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a21e8:
    // 0x2a21e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a21ec:
    // 0x2a21ec: 0x40f809  jalr        $v0
label_2a21f0:
    if (ctx->pc == 0x2A21F0u) {
        ctx->pc = 0x2A21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21ECu;
        // 0x2a21f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A21F4u;
        goto label_2a21f4;
    }
    ctx->pc = 0x2A21ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A21F4u);
        ctx->pc = 0x2A21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21ECu;
        // 0x2a21f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A21ECu, 0x2A21F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A21F4u;
label_2a21f4:
    // 0x2a21f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a21f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a21f8:
    // 0x2a21f8: 0xc08d52e  jal         func_2354B8
label_2a21fc:
    if (ctx->pc == 0x2A21FCu) {
        ctx->pc = 0x2A21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21F8u;
        // 0x2a21fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2200u;
        goto label_2a2200;
    }
    ctx->pc = 0x2A21F8u;
    SET_GPR_U32(ctx, 31, 0x2A2200u);
    ctx->pc = 0x2A21FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A21F8u;
    // 0x2a21fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2354B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2354B8u, 0x2A21F8u, 0x2A2200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2200u;
label_2a2200:
    // 0x2a2200: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2204:
    // 0x2a2204: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2208:
    // 0x2a2208: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a220c:
    // 0x2a220c: 0x40f809  jalr        $v0
label_2a2210:
    if (ctx->pc == 0x2A2210u) {
        ctx->pc = 0x2A2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A220Cu;
        // 0x2a2210: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2214u;
        goto label_2a2214;
    }
    ctx->pc = 0x2A220Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2214u);
        ctx->pc = 0x2A2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A220Cu;
        // 0x2a2210: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A220Cu, 0x2A2214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2214u;
label_2a2214:
    // 0x2a2214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2218:
    // 0x2a2218: 0xc08d466  jal         func_235198
label_2a221c:
    if (ctx->pc == 0x2A221Cu) {
        ctx->pc = 0x2A221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2218u;
        // 0x2a221c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2220u;
        goto label_2a2220;
    }
    ctx->pc = 0x2A2218u;
    SET_GPR_U32(ctx, 31, 0x2A2220u);
    ctx->pc = 0x2A221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2218u;
    // 0x2a221c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235198u, 0x2A2218u, 0x2A2220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2220u;
label_2a2220:
    // 0x2a2220: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2a2220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2a2224:
    // 0x2a2224: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a2228:
    if (ctx->pc == 0x2A2228u) {
        ctx->pc = 0x2A2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2224u;
        // 0x2a2228: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A222Cu;
        goto label_2a222c;
    }
    ctx->pc = 0x2A2224u;
    {
        const bool branch_taken_0x2a2224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2224u;
        // 0x2a2228: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2224) {
            ctx->pc = 0x2A2234u;
            goto label_2a2234;
        }
    }
    ctx->pc = 0x2A222Cu;
label_2a222c:
    // 0x2a222c: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2a222cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2a2230:
    // 0x2a2230: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a2230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2234:
    // 0x2a2234: 0xc0a7e74  jal         func_29F9D0
label_2a2238:
    if (ctx->pc == 0x2A2238u) {
        ctx->pc = 0x2A223Cu;
        goto label_2a223c;
    }
    ctx->pc = 0x2A2234u;
    SET_GPR_U32(ctx, 31, 0x2A223Cu);
    ctx->pc = 0x29F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F9D0u, 0x2A2234u, 0x2A223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A223Cu;
label_2a223c:
    // 0x2a223c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2a223cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a2240:
    // 0x2a2240: 0xa6420028  sh          $v0, 0x28($s2)
    ctx->pc = 0x2a2240u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
label_2a2244:
    // 0x2a2244: 0x10000395  b           . + 4 + (0x395 << 2)
label_2a2248:
    if (ctx->pc == 0x2A2248u) {
        ctx->pc = 0x2A2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2244u;
        // 0x2a2248: 0xa6430024  sh          $v1, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A224Cu;
        goto label_2a224c;
    }
    ctx->pc = 0x2A2244u;
    {
        const bool branch_taken_0x2a2244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2244u;
        // 0x2a2248: 0xa6430024  sh          $v1, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2244) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A224Cu;
label_2a224c:
    // 0x2a224c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2250:
    // 0x2a2250: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2254:
    // 0x2a2254: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2258:
    // 0x2a2258: 0x40f809  jalr        $v0
label_2a225c:
    if (ctx->pc == 0x2A225Cu) {
        ctx->pc = 0x2A225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2258u;
        // 0x2a225c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2260u;
        goto label_2a2260;
    }
    ctx->pc = 0x2A2258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2260u);
        ctx->pc = 0x2A225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2258u;
        // 0x2a225c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2258u, 0x2A2260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2260u;
label_2a2260:
    // 0x2a2260: 0x86450026  lh          $a1, 0x26($s2)
    ctx->pc = 0x2a2260u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
label_2a2264:
    // 0x2a2264: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2268:
    // 0x2a2268: 0xc08d68a  jal         func_235A28
label_2a226c:
    if (ctx->pc == 0x2A226Cu) {
        ctx->pc = 0x2A226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2268u;
        // 0x2a226c: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2270u;
        goto label_2a2270;
    }
    ctx->pc = 0x2A2268u;
    SET_GPR_U32(ctx, 31, 0x2A2270u);
    ctx->pc = 0x2A226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2268u;
    // 0x2a226c: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x235A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A28u, 0x2A2268u, 0x2A2270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2270u;
label_2a2270:
    // 0x2a2270: 0x10000389  b           . + 4 + (0x389 << 2)
label_2a2274:
    if (ctx->pc == 0x2A2274u) {
        ctx->pc = 0x2A2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2270u;
        // 0x2a2274: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2278u;
        goto label_2a2278;
    }
    ctx->pc = 0x2A2270u;
    {
        const bool branch_taken_0x2a2270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2270u;
        // 0x2a2274: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2270) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A2278u;
label_2a2278:
    // 0x2a2278: 0x86450026  lh          $a1, 0x26($s2)
    ctx->pc = 0x2a2278u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
label_2a227c:
    // 0x2a227c: 0xc0a8c30  jal         func_2A30C0
label_2a2280:
    if (ctx->pc == 0x2A2280u) {
        ctx->pc = 0x2A2280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A227Cu;
        // 0x2a2280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2284u;
        goto label_2a2284;
    }
    ctx->pc = 0x2A227Cu;
    SET_GPR_U32(ctx, 31, 0x2A2284u);
    ctx->pc = 0x2A2280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A227Cu;
    // 0x2a2280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A30C0u, 0x2A227Cu, 0x2A2284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2284u;
label_2a2284:
    // 0x2a2284: 0x10000384  b           . + 4 + (0x384 << 2)
label_2a2288:
    if (ctx->pc == 0x2A2288u) {
        ctx->pc = 0x2A2288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2284u;
        // 0x2a2288: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A228Cu;
        goto label_2a228c;
    }
    ctx->pc = 0x2A2284u;
    {
        const bool branch_taken_0x2a2284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2284u;
        // 0x2a2288: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2284) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A228Cu;
label_2a228c:
    // 0x2a228c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a228cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a2290:
    // 0x2a2290: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x2a2290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2a2294:
    // 0x2a2294: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2a2294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a2298:
    // 0x2a2298: 0x24632710  addiu       $v1, $v1, 0x2710
    ctx->pc = 0x2a2298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10000));
label_2a229c:
    // 0x2a229c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2a229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a22a0:
    // 0x2a22a0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2a22a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a22a4:
    // 0x2a22a4: 0x1060037d  beqz        $v1, . + 4 + (0x37D << 2)
label_2a22a8:
    if (ctx->pc == 0x2A22A8u) {
        ctx->pc = 0x2A22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22A4u;
        // 0x2a22a8: 0x2403008d  addiu       $v1, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A22ACu;
        goto label_2a22ac;
    }
    ctx->pc = 0x2A22A4u;
    {
        const bool branch_taken_0x2a22a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22A4u;
        // 0x2a22a8: 0x2403008d  addiu       $v1, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22a4) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A22ACu;
label_2a22ac:
    // 0x2a22ac: 0xa6430024  sh          $v1, 0x24($s2)
    ctx->pc = 0x2a22acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 3));
label_2a22b0:
    // 0x2a22b0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2a22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a22b4:
    // 0x2a22b4: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2a22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_2a22b8:
    // 0x2a22b8: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x2a22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_2a22bc:
    // 0x2a22bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a22bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a22c0:
    // 0x2a22c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a22c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a22c4:
    // 0x2a22c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a22c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a22c8:
    // 0x2a22c8: 0x40f809  jalr        $v0
label_2a22cc:
    if (ctx->pc == 0x2A22CCu) {
        ctx->pc = 0x2A22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22C8u;
        // 0x2a22cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A22D0u;
        goto label_2a22d0;
    }
    ctx->pc = 0x2A22C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A22D0u);
        ctx->pc = 0x2A22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22C8u;
        // 0x2a22cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A22C8u, 0x2A22D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A22D0u;
label_2a22d0:
    // 0x2a22d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a22d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a22d4:
    // 0x2a22d4: 0xc0ab742  jal         func_2ADD08
label_2a22d8:
    if (ctx->pc == 0x2A22D8u) {
        ctx->pc = 0x2A22D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22D4u;
        // 0x2a22d8: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A22DCu;
        goto label_2a22dc;
    }
    ctx->pc = 0x2A22D4u;
    SET_GPR_U32(ctx, 31, 0x2A22DCu);
    ctx->pc = 0x2A22D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A22D4u;
    // 0x2a22d8: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x2A22D4u, 0x2A22DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A22DCu;
label_2a22dc:
    // 0x2a22dc: 0x10000370  b           . + 4 + (0x370 << 2)
label_2a22e0:
    if (ctx->pc == 0x2A22E0u) {
        ctx->pc = 0x2A22E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22DCu;
        // 0x2a22e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A22E4u;
        goto label_2a22e4;
    }
    ctx->pc = 0x2A22DCu;
    {
        const bool branch_taken_0x2a22dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A22E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22DCu;
        // 0x2a22e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22dc) {
            ctx->pc = 0x2A30A0u;
            return;
        }
    }
    ctx->pc = 0x2A22E4u;
label_2a22e4:
    // 0x2a22e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a22e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a22e8:
    // 0x2a22e8: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x2a22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2a22ec:
    // 0x2a22ec: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2a22ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a22f0:
    // 0x2a22f0: 0x24632710  addiu       $v1, $v1, 0x2710
    ctx->pc = 0x2a22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10000));
label_2a22f4:
    // 0x2a22f4: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2a22f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a22f8:
    // 0x2a22f8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2a22f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a22fc:
    // 0x2a22fc: 0x10600367  beqz        $v1, . + 4 + (0x367 << 2)
label_2a2300:
    if (ctx->pc == 0x2A2300u) {
        ctx->pc = 0x2A2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22FCu;
        // 0x2a2300: 0x2403008c  addiu       $v1, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2304u;
        goto label_2a2304;
    }
    ctx->pc = 0x2A22FCu;
    {
        const bool branch_taken_0x2a22fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22FCu;
        // 0x2a2300: 0x2403008c  addiu       $v1, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a22fc) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A2304u;
label_2a2304:
    // 0x2a2304: 0xa6430024  sh          $v1, 0x24($s2)
    ctx->pc = 0x2a2304u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 3));
label_2a2308:
    // 0x2a2308: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2a2308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a230c:
    // 0x2a230c: 0x24422710  addiu       $v0, $v0, 0x2710
    ctx->pc = 0x2a230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10000));
label_2a2310:
    // 0x2a2310: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x2a2310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_2a2314:
    // 0x2a2314: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2318:
    // 0x2a2318: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a231c:
    // 0x2a231c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2320:
    // 0x2a2320: 0x40f809  jalr        $v0
label_2a2324:
    if (ctx->pc == 0x2A2324u) {
        ctx->pc = 0x2A2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2320u;
        // 0x2a2324: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2328u;
        goto label_2a2328;
    }
    ctx->pc = 0x2A2320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2328u);
        ctx->pc = 0x2A2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2320u;
        // 0x2a2324: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2320u, 0x2A2328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2328u;
label_2a2328:
    // 0x2a2328: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2a2328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a232c:
    // 0x2a232c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2330:
    // 0x2a2330: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2a2330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_2a2334:
    // 0x2a2334: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a2334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a2338:
    // 0x2a2338: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a2338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a233c:
    // 0x2a233c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2a233cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_2a2340:
    // 0x2a2340: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a2340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a2344:
    // 0x2a2344: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2a2344u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_2a2348:
    // 0x2a2348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a2348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a234c:
    // 0x2a234c: 0xc0b8c24  jal         func_2E3090
label_2a2350:
    if (ctx->pc == 0x2A2350u) {
        ctx->pc = 0x2A2350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A234Cu;
        // 0x2a2350: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2354u;
        goto label_2a2354;
    }
    ctx->pc = 0x2A234Cu;
    SET_GPR_U32(ctx, 31, 0x2A2354u);
    ctx->pc = 0x2A2350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A234Cu;
    // 0x2a2350: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3090u, 0x2A234Cu, 0x2A2354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2354u;
label_2a2354:
    // 0x2a2354: 0x10000352  b           . + 4 + (0x352 << 2)
label_2a2358:
    if (ctx->pc == 0x2A2358u) {
        ctx->pc = 0x2A2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2354u;
        // 0x2a2358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A235Cu;
        goto label_2a235c;
    }
    ctx->pc = 0x2A2354u;
    {
        const bool branch_taken_0x2a2354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2354u;
        // 0x2a2358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2354) {
            ctx->pc = 0x2A30A0u;
            return;
        }
    }
    ctx->pc = 0x2A235Cu;
label_2a235c:
    // 0x2a235c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a2360:
    // 0x2a2360: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2a2360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2a2364:
    // 0x2a2364: 0xc0e409a  jal         func_390268
label_2a2368:
    if (ctx->pc == 0x2A2368u) {
        ctx->pc = 0x2A2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2364u;
        // 0x2a2368: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A236Cu;
        goto label_2a236c;
    }
    ctx->pc = 0x2A2364u;
    SET_GPR_U32(ctx, 31, 0x2A236Cu);
    ctx->pc = 0x2A2368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2364u;
    // 0x2a2368: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A2364u, 0x2A236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A236Cu;
label_2a236c:
    // 0x2a236c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a236cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2370:
    // 0x2a2370: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a2370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2374:
    // 0x2a2374: 0xc0a33f8  jal         func_28CFE0
label_2a2378:
    if (ctx->pc == 0x2A2378u) {
        ctx->pc = 0x2A2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2374u;
        // 0x2a2378: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A237Cu;
        goto label_2a237c;
    }
    ctx->pc = 0x2A2374u;
    SET_GPR_U32(ctx, 31, 0x2A237Cu);
    ctx->pc = 0x2A2378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2374u;
    // 0x2a2378: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2A2374u, 0x2A237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A237Cu;
label_2a237c:
    // 0x2a237c: 0x10000346  b           . + 4 + (0x346 << 2)
label_2a2380:
    if (ctx->pc == 0x2A2380u) {
        ctx->pc = 0x2A2380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A237Cu;
        // 0x2a2380: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2384u;
        goto label_2a2384;
    }
    ctx->pc = 0x2A237Cu;
    {
        const bool branch_taken_0x2a237c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A237Cu;
        // 0x2a2380: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a237c) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A2384u;
label_2a2384:
    // 0x2a2384: 0x12600343  beqz        $s3, . + 4 + (0x343 << 2)
label_2a2388:
    if (ctx->pc == 0x2A2388u) {
        ctx->pc = 0x2A2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2384u;
        // 0x2a2388: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A238Cu;
        goto label_2a238c;
    }
    ctx->pc = 0x2A2384u;
    {
        const bool branch_taken_0x2a2384 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2384u;
        // 0x2a2388: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2384) {
            ctx->pc = 0x2A3094u;
            goto label_2a3094;
        }
    }
    ctx->pc = 0x2A238Cu;
label_2a238c:
    // 0x2a238c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a238cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2390:
    // 0x2a2390: 0xc0a33f8  jal         func_28CFE0
label_2a2394:
    if (ctx->pc == 0x2A2394u) {
        ctx->pc = 0x2A2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2390u;
        // 0x2a2394: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2398u;
        goto label_2a2398;
    }
    ctx->pc = 0x2A2390u;
    SET_GPR_U32(ctx, 31, 0x2A2398u);
    ctx->pc = 0x2A2394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2390u;
    // 0x2a2394: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2A2390u, 0x2A2398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2398u;
label_2a2398:
    // 0x2a2398: 0x1000033f  b           . + 4 + (0x33F << 2)
label_2a239c:
    if (ctx->pc == 0x2A239Cu) {
        ctx->pc = 0x2A239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2398u;
        // 0x2a239c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A23A0u;
        goto label_2a23a0;
    }
    ctx->pc = 0x2A2398u;
    {
        const bool branch_taken_0x2a2398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2398u;
        // 0x2a239c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2398) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A23A0u;
label_2a23a0:
    // 0x2a23a0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a23a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a23a4:
    // 0x2a23a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a23a8:
    // 0x2a23a8: 0xa0820265  sb          $v0, 0x265($a0)
    ctx->pc = 0x2a23a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 613), (uint8_t)GPR_U32(ctx, 2));
label_2a23ac:
    // 0x2a23ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a23acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a23b0:
    // 0x2a23b0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2a23b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a23b4:
    // 0x2a23b4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2a23b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a23b8:
    // 0x2a23b8: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x2a23b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_2a23bc:
    // 0x2a23bc: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2a23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a23c0:
    // 0x2a23c0: 0x40f809  jalr        $v0
label_2a23c4:
    if (ctx->pc == 0x2A23C4u) {
        ctx->pc = 0x2A23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23C0u;
        // 0x2a23c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A23C8u;
        goto label_2a23c8;
    }
    ctx->pc = 0x2A23C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A23C8u);
        ctx->pc = 0x2A23C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23C0u;
        // 0x2a23c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A23C0u, 0x2A23C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A23C8u;
label_2a23c8:
    // 0x2a23c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a23c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a23cc:
    // 0x2a23cc: 0xc0a49c2  jal         func_292708
label_2a23d0:
    if (ctx->pc == 0x2A23D0u) {
        ctx->pc = 0x2A23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23CCu;
        // 0x2a23d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A23D4u;
        goto label_2a23d4;
    }
    ctx->pc = 0x2A23CCu;
    SET_GPR_U32(ctx, 31, 0x2A23D4u);
    ctx->pc = 0x2A23D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A23CCu;
    // 0x2a23d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x2A23CCu, 0x2A23D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23D4u;
label_2a23d4:
    // 0x2a23d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a23d8:
    // 0x2a23d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a23d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a23dc:
    // 0x2a23dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a23dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a23e0:
    // 0x2a23e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a23e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a23e4:
    // 0x2a23e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a23e8:
    // 0x2a23e8: 0x40f809  jalr        $v0
label_2a23ec:
    if (ctx->pc == 0x2A23ECu) {
        ctx->pc = 0x2A23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23E8u;
        // 0x2a23ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A23F0u;
        goto label_2a23f0;
    }
    ctx->pc = 0x2A23E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A23F0u);
        ctx->pc = 0x2A23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23E8u;
        // 0x2a23ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A23E8u, 0x2A23F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A23F0u;
label_2a23f0:
    // 0x2a23f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a23f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a23f4:
    // 0x2a23f4: 0xc0a49d6  jal         func_292758
label_2a23f8:
    if (ctx->pc == 0x2A23F8u) {
        ctx->pc = 0x2A23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A23F4u;
        // 0x2a23f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A23FCu;
        goto label_2a23fc;
    }
    ctx->pc = 0x2A23F4u;
    SET_GPR_U32(ctx, 31, 0x2A23FCu);
    ctx->pc = 0x2A23F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A23F4u;
    // 0x2a23f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x2A23F4u, 0x2A23FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23FCu;
label_2a23fc:
    // 0x2a23fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a23fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2400:
    // 0x2a2400: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2404:
    // 0x2a2404: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2408:
    // 0x2a2408: 0x40f809  jalr        $v0
label_2a240c:
    if (ctx->pc == 0x2A240Cu) {
        ctx->pc = 0x2A240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2408u;
        // 0x2a240c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2410u;
        goto label_2a2410;
    }
    ctx->pc = 0x2A2408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2410u);
        ctx->pc = 0x2A240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2408u;
        // 0x2a240c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2408u, 0x2A2410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2410u;
label_2a2410:
    // 0x2a2410: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a2410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a2414:
    // 0x2a2414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2418:
    // 0x2a2418: 0x8c65bd30  lw          $a1, -0x42D0($v1)
    ctx->pc = 0x2a2418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2a241c:
    // 0x2a241c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a241cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2420:
    // 0x2a2420: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2a2420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a2424:
    // 0x2a2424: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a2424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2428:
    // 0x2a2428: 0xc0a95fa  jal         func_2A57E8
label_2a242c:
    if (ctx->pc == 0x2A242Cu) {
        ctx->pc = 0x2A242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2428u;
        // 0x2a242c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2430u;
        goto label_2a2430;
    }
    ctx->pc = 0x2A2428u;
    SET_GPR_U32(ctx, 31, 0x2A2430u);
    ctx->pc = 0x2A242Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2428u;
    // 0x2a242c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A57E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A57E8u, 0x2A2428u, 0x2A2430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2430u;
label_2a2430:
    // 0x2a2430: 0x10000319  b           . + 4 + (0x319 << 2)
label_2a2434:
    if (ctx->pc == 0x2A2434u) {
        ctx->pc = 0x2A2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2430u;
        // 0x2a2434: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2438u;
        goto label_2a2438;
    }
    ctx->pc = 0x2A2430u;
    {
        const bool branch_taken_0x2a2430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2430u;
        // 0x2a2434: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2430) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A2438u;
label_2a2438:
    // 0x2a2438: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a2438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a243c:
    // 0x2a243c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2440:
    // 0x2a2440: 0xa0820265  sb          $v0, 0x265($a0)
    ctx->pc = 0x2a2440u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 613), (uint8_t)GPR_U32(ctx, 2));
label_2a2444:
    // 0x2a2444: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a2444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2448:
    // 0x2a2448: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2a2448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a244c:
    // 0x2a244c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2a244cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a2450:
    // 0x2a2450: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x2a2450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_2a2454:
    // 0x2a2454: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2a2454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a2458:
    // 0x2a2458: 0x40f809  jalr        $v0
label_2a245c:
    if (ctx->pc == 0x2A245Cu) {
        ctx->pc = 0x2A245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2458u;
        // 0x2a245c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2460u;
        goto label_2a2460;
    }
    ctx->pc = 0x2A2458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2460u);
        ctx->pc = 0x2A245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2458u;
        // 0x2a245c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2458u, 0x2A2460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2460u;
label_2a2460:
    // 0x2a2460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2464:
    // 0x2a2464: 0xc0a49c2  jal         func_292708
label_2a2468:
    if (ctx->pc == 0x2A2468u) {
        ctx->pc = 0x2A2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2464u;
        // 0x2a2468: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A246Cu;
        goto label_2a246c;
    }
    ctx->pc = 0x2A2464u;
    SET_GPR_U32(ctx, 31, 0x2A246Cu);
    ctx->pc = 0x2A2468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2464u;
    // 0x2a2468: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x2A2464u, 0x2A246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A246Cu;
label_2a246c:
    // 0x2a246c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2470:
    // 0x2a2470: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a2474:
    // 0x2a2474: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a2474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a2478:
    // 0x2a2478: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a247c:
    // 0x2a247c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2480:
    // 0x2a2480: 0x40f809  jalr        $v0
label_2a2484:
    if (ctx->pc == 0x2A2484u) {
        ctx->pc = 0x2A2484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2480u;
        // 0x2a2484: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2488u;
        goto label_2a2488;
    }
    ctx->pc = 0x2A2480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2488u);
        ctx->pc = 0x2A2484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2480u;
        // 0x2a2484: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2480u, 0x2A2488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2488u;
label_2a2488:
    // 0x2a2488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a248c:
    // 0x2a248c: 0xc0a49d6  jal         func_292758
label_2a2490:
    if (ctx->pc == 0x2A2490u) {
        ctx->pc = 0x2A2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A248Cu;
        // 0x2a2490: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2494u;
        goto label_2a2494;
    }
    ctx->pc = 0x2A248Cu;
    SET_GPR_U32(ctx, 31, 0x2A2494u);
    ctx->pc = 0x2A2490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A248Cu;
    // 0x2a2490: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x2A248Cu, 0x2A2494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2494u;
label_2a2494:
    // 0x2a2494: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a2494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a2498:
    // 0x2a2498: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2a2498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2a249c:
    // 0x2a249c: 0xc0e409a  jal         func_390268
label_2a24a0:
    if (ctx->pc == 0x2A24A0u) {
        ctx->pc = 0x2A24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A249Cu;
        // 0x2a24a0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A24A4u;
        goto label_2a24a4;
    }
    ctx->pc = 0x2A249Cu;
    SET_GPR_U32(ctx, 31, 0x2A24A4u);
    ctx->pc = 0x2A24A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A249Cu;
    // 0x2a24a0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A249Cu, 0x2A24A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A24A4u;
label_2a24a4:
    // 0x2a24a4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a24a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a24a8:
    // 0x2a24a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a24a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a24ac:
    // 0x2a24ac: 0xc0a33f8  jal         func_28CFE0
label_2a24b0:
    if (ctx->pc == 0x2A24B0u) {
        ctx->pc = 0x2A24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24ACu;
        // 0x2a24b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A24B4u;
        goto label_2a24b4;
    }
    ctx->pc = 0x2A24ACu;
    SET_GPR_U32(ctx, 31, 0x2A24B4u);
    ctx->pc = 0x2A24B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A24ACu;
    // 0x2a24b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2A24ACu, 0x2A24B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A24B4u;
label_2a24b4:
    // 0x2a24b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a24b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a24b8:
    // 0x2a24b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a24b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a24bc:
    // 0x2a24bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a24c0:
    // 0x2a24c0: 0x40f809  jalr        $v0
label_2a24c4:
    if (ctx->pc == 0x2A24C4u) {
        ctx->pc = 0x2A24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24C0u;
        // 0x2a24c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A24C8u;
        goto label_2a24c8;
    }
    ctx->pc = 0x2A24C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A24C8u);
        ctx->pc = 0x2A24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24C0u;
        // 0x2a24c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A24C0u, 0x2A24C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A24C8u;
label_2a24c8:
    // 0x2a24c8: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x2a24c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
label_2a24cc:
    // 0x2a24cc: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2a24ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2a24d0:
    // 0x2a24d0: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x2a24d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2a24d4:
    // 0x2a24d4: 0x2812  mflo        $a1
    ctx->pc = 0x2a24d4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_2a24d8:
    // 0x2a24d8: 0xc0ab742  jal         func_2ADD08
label_2a24dc:
    if (ctx->pc == 0x2A24DCu) {
        ctx->pc = 0x2A24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24D8u;
        // 0x2a24dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A24E0u;
        goto label_2a24e0;
    }
    ctx->pc = 0x2A24D8u;
    SET_GPR_U32(ctx, 31, 0x2A24E0u);
    ctx->pc = 0x2A24DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A24D8u;
    // 0x2a24dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x2A24D8u, 0x2A24E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A24E0u;
label_2a24e0:
    // 0x2a24e0: 0x100002ed  b           . + 4 + (0x2ED << 2)
label_2a24e4:
    if (ctx->pc == 0x2A24E4u) {
        ctx->pc = 0x2A24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24E0u;
        // 0x2a24e4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A24E8u;
        goto label_2a24e8;
    }
    ctx->pc = 0x2A24E0u;
    {
        const bool branch_taken_0x2a24e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24E0u;
        // 0x2a24e4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a24e0) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A24E8u;
label_2a24e8:
    // 0x2a24e8: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
label_2a24ec:
    if (ctx->pc == 0x2A24ECu) {
        ctx->pc = 0x2A24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24E8u;
        // 0x2a24ec: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A24F0u;
        goto label_2a24f0;
    }
    ctx->pc = 0x2A24E8u;
    {
        const bool branch_taken_0x2a24e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a24e8) {
            ctx->pc = 0x2A24ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A24E8u;
            // 0x2a24ec: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2508u;
            goto label_2a2508;
        }
    }
    ctx->pc = 0x2A24F0u;
label_2a24f0:
    // 0x2a24f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a24f4:
    // 0x2a24f4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2a24f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2a24f8:
    // 0x2a24f8: 0xc0e409a  jal         func_390268
label_2a24fc:
    if (ctx->pc == 0x2A24FCu) {
        ctx->pc = 0x2A24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24F8u;
        // 0x2a24fc: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2500u;
        goto label_2a2500;
    }
    ctx->pc = 0x2A24F8u;
    SET_GPR_U32(ctx, 31, 0x2A2500u);
    ctx->pc = 0x2A24FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A24F8u;
    // 0x2a24fc: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A24F8u, 0x2A2500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2500u;
label_2a2500:
    // 0x2a2500: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a2500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2504:
    // 0x2a2504: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a2504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a2508:
    // 0x2a2508: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2a2508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a250c:
    // 0x2a250c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a250cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2510:
    // 0x2a2510: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2a2510u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2a2514:
    // 0x2a2514: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2a2514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2a2518:
    // 0x2a2518: 0x40f809  jalr        $v0
label_2a251c:
    if (ctx->pc == 0x2A251Cu) {
        ctx->pc = 0x2A251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2518u;
        // 0x2a251c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2520u;
        goto label_2a2520;
    }
    ctx->pc = 0x2A2518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2520u);
        ctx->pc = 0x2A251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2518u;
        // 0x2a251c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2518u, 0x2A2520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2520u;
label_2a2520:
    // 0x2a2520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2524:
    // 0x2a2524: 0xc0cdb38  jal         func_336CE0
label_2a2528:
    if (ctx->pc == 0x2A2528u) {
        ctx->pc = 0x2A2528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2524u;
        // 0x2a2528: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A252Cu;
        goto label_2a252c;
    }
    ctx->pc = 0x2A2524u;
    SET_GPR_U32(ctx, 31, 0x2A252Cu);
    ctx->pc = 0x2A2528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2524u;
    // 0x2a2528: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2A2524u, 0x2A252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A252Cu;
label_2a252c:
    // 0x2a252c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2a252cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2a2530:
    // 0x2a2530: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a2530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a2534:
    // 0x2a2534: 0x0  nop
    ctx->pc = 0x2a2534u;
    // NOP
label_2a2538:
    // 0x2a2538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a2538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a253c:
    // 0x2a253c: 0x0  nop
    ctx->pc = 0x2a253cu;
    // NOP
label_2a2540:
    // 0x2a2540: 0x45020057  bc1fl       . + 4 + (0x57 << 2)
label_2a2544:
    if (ctx->pc == 0x2A2544u) {
        ctx->pc = 0x2A2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2540u;
        // 0x2a2544: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2548u;
        goto label_2a2548;
    }
    ctx->pc = 0x2A2540u;
    {
        const bool branch_taken_0x2a2540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a2540) {
            ctx->pc = 0x2A2544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2540u;
            // 0x2a2544: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A26A0u;
            goto label_2a26a0;
        }
    }
    ctx->pc = 0x2A2548u;
label_2a2548:
    // 0x2a2548: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a254c:
    // 0x2a254c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a254cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a2550:
    // 0x2a2550: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a2550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a2554:
    // 0x2a2554: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2558:
    // 0x2a2558: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a255c:
    // 0x2a255c: 0x40f809  jalr        $v0
label_2a2560:
    if (ctx->pc == 0x2A2560u) {
        ctx->pc = 0x2A2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A255Cu;
        // 0x2a2560: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2564u;
        goto label_2a2564;
    }
    ctx->pc = 0x2A255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2564u);
        ctx->pc = 0x2A2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A255Cu;
        // 0x2a2560: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A255Cu, 0x2A2564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2564u;
label_2a2564:
    // 0x2a2564: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2568:
    // 0x2a2568: 0xc08e884  jal         func_23A210
label_2a256c:
    if (ctx->pc == 0x2A256Cu) {
        ctx->pc = 0x2A256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2568u;
        // 0x2a256c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2570u;
        goto label_2a2570;
    }
    ctx->pc = 0x2A2568u;
    SET_GPR_U32(ctx, 31, 0x2A2570u);
    ctx->pc = 0x2A256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2568u;
    // 0x2a256c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A210u, 0x2A2568u, 0x2A2570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2570u;
label_2a2570:
    // 0x2a2570: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2574:
    // 0x2a2574: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a2578:
    // 0x2a2578: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a2578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a257c:
    // 0x2a257c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a257cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2580:
    // 0x2a2580: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2584:
    // 0x2a2584: 0x40f809  jalr        $v0
label_2a2588:
    if (ctx->pc == 0x2A2588u) {
        ctx->pc = 0x2A2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2584u;
        // 0x2a2588: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A258Cu;
        goto label_2a258c;
    }
    ctx->pc = 0x2A2584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A258Cu);
        ctx->pc = 0x2A2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2584u;
        // 0x2a2588: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2584u, 0x2A258Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A258Cu;
label_2a258c:
    // 0x2a258c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a258cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2590:
    // 0x2a2590: 0xc0a49c2  jal         func_292708
label_2a2594:
    if (ctx->pc == 0x2A2594u) {
        ctx->pc = 0x2A2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2590u;
        // 0x2a2594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2598u;
        goto label_2a2598;
    }
    ctx->pc = 0x2A2590u;
    SET_GPR_U32(ctx, 31, 0x2A2598u);
    ctx->pc = 0x2A2594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2590u;
    // 0x2a2594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x2A2590u, 0x2A2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2598u;
label_2a2598:
    // 0x2a2598: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a259c:
    // 0x2a259c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a259cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a25a0:
    // 0x2a25a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a25a4:
    // 0x2a25a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a25a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a25a8:
    // 0x2a25a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a25a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a25ac:
    // 0x2a25ac: 0x40f809  jalr        $v0
label_2a25b0:
    if (ctx->pc == 0x2A25B0u) {
        ctx->pc = 0x2A25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25ACu;
        // 0x2a25b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A25B4u;
        goto label_2a25b4;
    }
    ctx->pc = 0x2A25ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A25B4u);
        ctx->pc = 0x2A25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25ACu;
        // 0x2a25b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A25ACu, 0x2A25B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A25B4u;
label_2a25b4:
    // 0x2a25b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a25b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a25b8:
    // 0x2a25b8: 0xc0a49d6  jal         func_292758
label_2a25bc:
    if (ctx->pc == 0x2A25BCu) {
        ctx->pc = 0x2A25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25B8u;
        // 0x2a25bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A25C0u;
        goto label_2a25c0;
    }
    ctx->pc = 0x2A25B8u;
    SET_GPR_U32(ctx, 31, 0x2A25C0u);
    ctx->pc = 0x2A25BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A25B8u;
    // 0x2a25bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x2A25B8u, 0x2A25C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A25C0u;
label_2a25c0:
    // 0x2a25c0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a25c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a25c4:
    // 0x2a25c4: 0xc0cd4e4  jal         func_335390
label_2a25c8:
    if (ctx->pc == 0x2A25C8u) {
        ctx->pc = 0x2A25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25C4u;
        // 0x2a25c8: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A25CCu;
        goto label_2a25cc;
    }
    ctx->pc = 0x2A25C4u;
    SET_GPR_U32(ctx, 31, 0x2A25CCu);
    ctx->pc = 0x2A25C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A25C4u;
    // 0x2a25c8: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A25C4u, 0x2A25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A25CCu;
label_2a25cc:
    // 0x2a25cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a25ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a25d0:
    // 0x2a25d0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2a25d4:
    if (ctx->pc == 0x2A25D4u) {
        ctx->pc = 0x2A25D8u;
        goto label_2a25d8;
    }
    ctx->pc = 0x2A25D0u;
    {
        const bool branch_taken_0x2a25d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a25d0) {
            ctx->pc = 0x2A263Cu;
            goto label_2a263c;
        }
    }
    ctx->pc = 0x2A25D8u;
label_2a25d8:
    // 0x2a25d8: 0xc0a367c  jal         func_28D9F0
label_2a25dc:
    if (ctx->pc == 0x2A25DCu) {
        ctx->pc = 0x2A25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25D8u;
        // 0x2a25dc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A25E0u;
        goto label_2a25e0;
    }
    ctx->pc = 0x2A25D8u;
    SET_GPR_U32(ctx, 31, 0x2A25E0u);
    ctx->pc = 0x2A25DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A25D8u;
    // 0x2a25dc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A25D8u, 0x2A25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A25E0u;
label_2a25e0:
    // 0x2a25e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a25e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a25e4:
    // 0x2a25e4: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_2a25e8:
    if (ctx->pc == 0x2A25E8u) {
        ctx->pc = 0x2A25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25E4u;
        // 0x2a25e8: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A25ECu;
        goto label_2a25ec;
    }
    ctx->pc = 0x2A25E4u;
    {
        const bool branch_taken_0x2a25e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25E4u;
        // 0x2a25e8: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25e4) {
            ctx->pc = 0x2A2698u;
            goto label_2a2698;
        }
    }
    ctx->pc = 0x2A25ECu;
label_2a25ec:
    // 0x2a25ec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a25f0:
    // 0x2a25f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a25f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a25f4:
    // 0x2a25f4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2a25f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2a25f8:
    // 0x2a25f8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2a25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2a25fc:
    // 0x2a25fc: 0x40f809  jalr        $v0
label_2a2600:
    if (ctx->pc == 0x2A2600u) {
        ctx->pc = 0x2A2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25FCu;
        // 0x2a2600: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2604u;
        goto label_2a2604;
    }
    ctx->pc = 0x2A25FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2604u);
        ctx->pc = 0x2A2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25FCu;
        // 0x2a2600: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A25FCu, 0x2A2604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2604u;
label_2a2604:
    // 0x2a2604: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a2604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a2608:
    // 0x2a2608: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a2608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a260c:
    // 0x2a260c: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2a260cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2a2610:
    // 0x2a2610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2614:
    // 0x2a2614: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2a2614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2a2618:
    // 0x2a2618: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a2618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a261c:
    // 0x2a261c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a261cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2620:
    // 0x2a2620: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2a2620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a2624:
    // 0x2a2624: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a2624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2628:
    // 0x2a2628: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a2628u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a262c:
    // 0x2a262c: 0xc0bee7a  jal         func_2FB9E8
label_2a2630:
    if (ctx->pc == 0x2A2630u) {
        ctx->pc = 0x2A2630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A262Cu;
        // 0x2a2630: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2634u;
        goto label_2a2634;
    }
    ctx->pc = 0x2A262Cu;
    SET_GPR_U32(ctx, 31, 0x2A2634u);
    ctx->pc = 0x2A2630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A262Cu;
    // 0x2a2630: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A262Cu, 0x2A2634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2634u;
label_2a2634:
    // 0x2a2634: 0x10000298  b           . + 4 + (0x298 << 2)
label_2a2638:
    if (ctx->pc == 0x2A2638u) {
        ctx->pc = 0x2A2638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2634u;
        // 0x2a2638: 0x24020075  addiu       $v0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A263Cu;
        goto label_2a263c;
    }
    ctx->pc = 0x2A2634u;
    {
        const bool branch_taken_0x2a2634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2634u;
        // 0x2a2638: 0x24020075  addiu       $v0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2634) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A263Cu;
label_2a263c:
    // 0x2a263c: 0xc0a367c  jal         func_28D9F0
label_2a2640:
    if (ctx->pc == 0x2A2640u) {
        ctx->pc = 0x2A2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A263Cu;
        // 0x2a2640: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2644u;
        goto label_2a2644;
    }
    ctx->pc = 0x2A263Cu;
    SET_GPR_U32(ctx, 31, 0x2A2644u);
    ctx->pc = 0x2A2640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A263Cu;
    // 0x2a2640: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A263Cu, 0x2A2644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2644u;
label_2a2644:
    // 0x2a2644: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a2644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2648:
    // 0x2a2648: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2a264c:
    if (ctx->pc == 0x2A264Cu) {
        ctx->pc = 0x2A264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2648u;
        // 0x2a264c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2650u;
        goto label_2a2650;
    }
    ctx->pc = 0x2A2648u;
    {
        const bool branch_taken_0x2a2648 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2648u;
        // 0x2a264c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2648) {
            ctx->pc = 0x2A2698u;
            goto label_2a2698;
        }
    }
    ctx->pc = 0x2A2650u;
label_2a2650:
    // 0x2a2650: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a2650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a2654:
    // 0x2a2654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2658:
    // 0x2a2658: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2a2658u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2a265c:
    // 0x2a265c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2a265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2a2660:
    // 0x2a2660: 0x40f809  jalr        $v0
label_2a2664:
    if (ctx->pc == 0x2A2664u) {
        ctx->pc = 0x2A2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2660u;
        // 0x2a2664: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2668u;
        goto label_2a2668;
    }
    ctx->pc = 0x2A2660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2668u);
        ctx->pc = 0x2A2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2660u;
        // 0x2a2664: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2660u, 0x2A2668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2668u;
label_2a2668:
    // 0x2a2668: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a2668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a266c:
    // 0x2a266c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a266cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2670:
    // 0x2a2670: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2a2670u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2a2674:
    // 0x2a2674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2678:
    // 0x2a2678: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a2678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a267c:
    // 0x2a267c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a267cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a2680:
    // 0x2a2680: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a2680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2684:
    // 0x2a2684: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2a2684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a2688:
    // 0x2a2688: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a2688u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a268c:
    // 0x2a268c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a268cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a2690:
    // 0x2a2690: 0xc0bee7a  jal         func_2FB9E8
label_2a2694:
    if (ctx->pc == 0x2A2694u) {
        ctx->pc = 0x2A2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2690u;
        // 0x2a2694: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2698u;
        goto label_2a2698;
    }
    ctx->pc = 0x2A2690u;
    SET_GPR_U32(ctx, 31, 0x2A2698u);
    ctx->pc = 0x2A2694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2690u;
    // 0x2a2694: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A2690u, 0x2A2698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2698u;
label_2a2698:
    // 0x2a2698: 0x1000027f  b           . + 4 + (0x27F << 2)
label_2a269c:
    if (ctx->pc == 0x2A269Cu) {
        ctx->pc = 0x2A269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2698u;
        // 0x2a269c: 0x24020075  addiu       $v0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A26A0u;
        goto label_2a26a0;
    }
    ctx->pc = 0x2A2698u;
    {
        const bool branch_taken_0x2a2698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2698u;
        // 0x2a269c: 0x24020075  addiu       $v0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2698) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A26A0u;
label_2a26a0:
    // 0x2a26a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a26a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a26a4:
    // 0x2a26a4: 0xc0a33f8  jal         func_28CFE0
label_2a26a8:
    if (ctx->pc == 0x2A26A8u) {
        ctx->pc = 0x2A26A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26A4u;
        // 0x2a26a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A26ACu;
        goto label_2a26ac;
    }
    ctx->pc = 0x2A26A4u;
    SET_GPR_U32(ctx, 31, 0x2A26ACu);
    ctx->pc = 0x2A26A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26A4u;
    // 0x2a26a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2A26A4u, 0x2A26ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26ACu;
label_2a26ac:
    // 0x2a26ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a26acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a26b0:
    // 0x2a26b0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a26b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a26b4:
    // 0x2a26b4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a26b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a26b8:
    // 0x2a26b8: 0x40f809  jalr        $v0
label_2a26bc:
    if (ctx->pc == 0x2A26BCu) {
        ctx->pc = 0x2A26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26B8u;
        // 0x2a26bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A26C0u;
        goto label_2a26c0;
    }
    ctx->pc = 0x2A26B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A26C0u);
        ctx->pc = 0x2A26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26B8u;
        // 0x2a26bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A26B8u, 0x2A26C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A26C0u;
label_2a26c0:
    // 0x2a26c0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a26c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a26c4:
    // 0x2a26c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a26c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a26c8:
    // 0x2a26c8: 0xc0cd4e4  jal         func_335390
label_2a26cc:
    if (ctx->pc == 0x2A26CCu) {
        ctx->pc = 0x2A26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26C8u;
        // 0x2a26cc: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A26D0u;
        goto label_2a26d0;
    }
    ctx->pc = 0x2A26C8u;
    SET_GPR_U32(ctx, 31, 0x2A26D0u);
    ctx->pc = 0x2A26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26C8u;
    // 0x2a26cc: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A26C8u, 0x2A26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26D0u;
label_2a26d0:
    // 0x2a26d0: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x2a26d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_2a26d4:
    // 0x2a26d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a26d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a26d8:
    // 0x2a26d8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a26d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a26dc:
    // 0x2a26dc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a26e0:
    if (ctx->pc == 0x2A26E0u) {
        ctx->pc = 0x2A26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26DCu;
        // 0x2a26e0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A26E4u;
        goto label_2a26e4;
    }
    ctx->pc = 0x2A26DCu;
    {
        const bool branch_taken_0x2a26dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a26dc) {
            ctx->pc = 0x2A26E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A26DCu;
            // 0x2a26e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A26E4u;
            goto label_2a26e4;
        }
    }
    ctx->pc = 0x2A26E4u;
label_2a26e4:
    // 0x2a26e4: 0x2810  mfhi        $a1
    ctx->pc = 0x2a26e4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2a26e8:
    // 0x2a26e8: 0xc0ab742  jal         func_2ADD08
label_2a26ec:
    if (ctx->pc == 0x2A26ECu) {
        ctx->pc = 0x2A26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26E8u;
        // 0x2a26ec: 0x24a50bb8  addiu       $a1, $a1, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A26F0u;
        goto label_2a26f0;
    }
    ctx->pc = 0x2A26E8u;
    SET_GPR_U32(ctx, 31, 0x2A26F0u);
    ctx->pc = 0x2A26ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26E8u;
    // 0x2a26ec: 0x24a50bb8  addiu       $a1, $a1, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x2A26E8u, 0x2A26F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26F0u;
label_2a26f0:
    // 0x2a26f0: 0x10000269  b           . + 4 + (0x269 << 2)
label_2a26f4:
    if (ctx->pc == 0x2A26F4u) {
        ctx->pc = 0x2A26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26F0u;
        // 0x2a26f4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A26F8u;
        goto label_2a26f8;
    }
    ctx->pc = 0x2A26F0u;
    {
        const bool branch_taken_0x2a26f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26F0u;
        // 0x2a26f4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a26f0) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A26F8u;
label_2a26f8:
    // 0x2a26f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a26fc:
    // 0x2a26fc: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a26fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a2700:
    // 0x2a2700: 0x1c600267  bgtz        $v1, . + 4 + (0x267 << 2)
label_2a2704:
    if (ctx->pc == 0x2A2704u) {
        ctx->pc = 0x2A2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2700u;
        // 0x2a2704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2708u;
        goto label_2a2708;
    }
    ctx->pc = 0x2A2700u;
    {
        const bool branch_taken_0x2a2700 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2700u;
        // 0x2a2704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2700) {
            ctx->pc = 0x2A30A0u;
            return;
        }
    }
    ctx->pc = 0x2A2708u;
label_2a2708:
    // 0x2a2708: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a2708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a270c:
    // 0x2a270c: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x2a270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_2a2710:
    // 0x2a2710: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2a2710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a2714:
    // 0x2a2714: 0xa6440024  sh          $a0, 0x24($s2)
    ctx->pc = 0x2a2714u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 4));
label_2a2718:
    // 0x2a2718: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a2718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a271c:
    // 0x2a271c: 0x1000025f  b           . + 4 + (0x25F << 2)
label_2a2720:
    if (ctx->pc == 0x2A2720u) {
        ctx->pc = 0x2A2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A271Cu;
        // 0x2a2720: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2724u;
        goto label_2a2724;
    }
    ctx->pc = 0x2A271Cu;
    {
        const bool branch_taken_0x2a271c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A271Cu;
        // 0x2a2720: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a271c) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A2724u;
label_2a2724:
    // 0x2a2724: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a2724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a2728:
    // 0x2a2728: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2a2728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2a272c:
    // 0x2a272c: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2a272cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a2730:
    // 0x2a2730: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a2730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a2734:
    // 0x2a2734: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2a2734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a2738:
    // 0x2a2738: 0x10400259  beqz        $v0, . + 4 + (0x259 << 2)
label_2a273c:
    if (ctx->pc == 0x2A273Cu) {
        ctx->pc = 0x2A273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2738u;
        // 0x2a273c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2740u;
        goto label_2a2740;
    }
    ctx->pc = 0x2A2738u;
    {
        const bool branch_taken_0x2a2738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2738u;
        // 0x2a273c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2738) {
            ctx->pc = 0x2A30A0u;
            return;
        }
    }
    ctx->pc = 0x2A2740u;
label_2a2740:
    // 0x2a2740: 0x9642002c  lhu         $v0, 0x2C($s2)
    ctx->pc = 0x2a2740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_2a2744:
    // 0x2a2744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a2744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a2748:
    // 0x2a2748: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2a2748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a274c:
    // 0x2a274c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2a274cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2a2750:
    // 0x2a2750: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2a2750u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2a2754:
    // 0x2a2754: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_2a2758:
    if (ctx->pc == 0x2A2758u) {
        ctx->pc = 0x2A2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2754u;
        // 0x2a2758: 0xa642002c  sh          $v0, 0x2C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A275Cu;
        goto label_2a275c;
    }
    ctx->pc = 0x2A2754u;
    {
        const bool branch_taken_0x2a2754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2754u;
        // 0x2a2758: 0xa642002c  sh          $v0, 0x2C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2754) {
            ctx->pc = 0x2A2794u;
            goto label_2a2794;
        }
    }
    ctx->pc = 0x2A275Cu;
label_2a275c:
    // 0x2a275c: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x2a275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_2a2760:
    // 0x2a2760: 0xa640002c  sh          $zero, 0x2C($s2)
    ctx->pc = 0x2a2760u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 0));
label_2a2764:
    // 0x2a2764: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a2764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a2768:
    // 0x2a2768: 0xa6420024  sh          $v0, 0x24($s2)
    ctx->pc = 0x2a2768u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
label_2a276c:
    // 0x2a276c: 0xc0cd4e4  jal         func_335390
label_2a2770:
    if (ctx->pc == 0x2A2770u) {
        ctx->pc = 0x2A2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A276Cu;
        // 0x2a2770: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2774u;
        goto label_2a2774;
    }
    ctx->pc = 0x2A276Cu;
    SET_GPR_U32(ctx, 31, 0x2A2774u);
    ctx->pc = 0x2A2770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A276Cu;
    // 0x2a2770: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A276Cu, 0x2A2774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2774u;
label_2a2774:
    // 0x2a2774: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a2774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2a2778:
    // 0x2a2778: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a2778u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a277c:
    // 0x2a277c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a2780:
    if (ctx->pc == 0x2A2780u) {
        ctx->pc = 0x2A2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A277Cu;
        // 0x2a2780: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2784u;
        goto label_2a2784;
    }
    ctx->pc = 0x2A277Cu;
    {
        const bool branch_taken_0x2a277c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a277c) {
            ctx->pc = 0x2A2780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A277Cu;
            // 0x2a2780: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2784u;
            goto label_2a2784;
        }
    }
    ctx->pc = 0x2A2784u;
label_2a2784:
    // 0x2a2784: 0x2010  mfhi        $a0
    ctx->pc = 0x2a2784u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2a2788:
    // 0x2a2788: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x2a2788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_2a278c:
    // 0x2a278c: 0x10000243  b           . + 4 + (0x243 << 2)
label_2a2790:
    if (ctx->pc == 0x2A2790u) {
        ctx->pc = 0x2A2790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A278Cu;
        // 0x2a2790: 0xa6440026  sh          $a0, 0x26($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2794u;
        goto label_2a2794;
    }
    ctx->pc = 0x2A278Cu;
    {
        const bool branch_taken_0x2a278c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A278Cu;
        // 0x2a2790: 0xa6440026  sh          $a0, 0x26($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a278c) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A2794u;
label_2a2794:
    // 0x2a2794: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2798:
    // 0x2a2798: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a279c:
    // 0x2a279c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a279cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a27a0:
    // 0x2a27a0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a27a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a27a4:
    // 0x2a27a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a27a8:
    // 0x2a27a8: 0x40f809  jalr        $v0
label_2a27ac:
    if (ctx->pc == 0x2A27ACu) {
        ctx->pc = 0x2A27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27A8u;
        // 0x2a27ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A27B0u;
        goto label_2a27b0;
    }
    ctx->pc = 0x2A27A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A27B0u);
        ctx->pc = 0x2A27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27A8u;
        // 0x2a27ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A27A8u, 0x2A27B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A27B0u;
label_2a27b0:
    // 0x2a27b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a27b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a27b4:
    // 0x2a27b4: 0xc0a49c2  jal         func_292708
label_2a27b8:
    if (ctx->pc == 0x2A27B8u) {
        ctx->pc = 0x2A27B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27B4u;
        // 0x2a27b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A27BCu;
        goto label_2a27bc;
    }
    ctx->pc = 0x2A27B4u;
    SET_GPR_U32(ctx, 31, 0x2A27BCu);
    ctx->pc = 0x2A27B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A27B4u;
    // 0x2a27b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x2A27B4u, 0x2A27BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A27BCu;
label_2a27bc:
    // 0x2a27bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a27bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a27c0:
    // 0x2a27c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a27c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a27c4:
    // 0x2a27c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a27c8:
    // 0x2a27c8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a27c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a27cc:
    // 0x2a27cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a27d0:
    // 0x2a27d0: 0x40f809  jalr        $v0
label_2a27d4:
    if (ctx->pc == 0x2A27D4u) {
        ctx->pc = 0x2A27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27D0u;
        // 0x2a27d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A27D8u;
        goto label_2a27d8;
    }
    ctx->pc = 0x2A27D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A27D8u);
        ctx->pc = 0x2A27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27D0u;
        // 0x2a27d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A27D0u, 0x2A27D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A27D8u;
label_2a27d8:
    // 0x2a27d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a27d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a27dc:
    // 0x2a27dc: 0xc0a49d6  jal         func_292758
label_2a27e0:
    if (ctx->pc == 0x2A27E0u) {
        ctx->pc = 0x2A27E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27DCu;
        // 0x2a27e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A27E4u;
        goto label_2a27e4;
    }
    ctx->pc = 0x2A27DCu;
    SET_GPR_U32(ctx, 31, 0x2A27E4u);
    ctx->pc = 0x2A27E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A27DCu;
    // 0x2a27e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x2A27DCu, 0x2A27E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A27E4u;
label_2a27e4:
    // 0x2a27e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a27e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a27e8:
    // 0x2a27e8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a27e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a27ec:
    // 0x2a27ec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a27f0:
    // 0x2a27f0: 0x40f809  jalr        $v0
label_2a27f4:
    if (ctx->pc == 0x2A27F4u) {
        ctx->pc = 0x2A27F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27F0u;
        // 0x2a27f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A27F8u;
        goto label_2a27f8;
    }
    ctx->pc = 0x2A27F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A27F8u);
        ctx->pc = 0x2A27F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A27F0u;
        // 0x2a27f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A27F0u, 0x2A27F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A27F8u;
label_2a27f8:
    // 0x2a27f8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a27f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a27fc:
    // 0x2a27fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a27fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2800:
    // 0x2a2800: 0xc0cd4e4  jal         func_335390
label_2a2804:
    if (ctx->pc == 0x2A2804u) {
        ctx->pc = 0x2A2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2800u;
        // 0x2a2804: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2808u;
        goto label_2a2808;
    }
    ctx->pc = 0x2A2800u;
    SET_GPR_U32(ctx, 31, 0x2A2808u);
    ctx->pc = 0x2A2804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2800u;
    // 0x2a2804: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A2800u, 0x2A2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2808u;
label_2a2808:
    // 0x2a2808: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x2a2808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_2a280c:
    // 0x2a280c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a280cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2810:
    // 0x2a2810: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a2810u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a2814:
    // 0x2a2814: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a2818:
    if (ctx->pc == 0x2A2818u) {
        ctx->pc = 0x2A2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2814u;
        // 0x2a2818: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A281Cu;
        goto label_2a281c;
    }
    ctx->pc = 0x2A2814u;
    {
        const bool branch_taken_0x2a2814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2814) {
            ctx->pc = 0x2A2818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2814u;
            // 0x2a2818: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A281Cu;
            goto label_2a281c;
        }
    }
    ctx->pc = 0x2A281Cu;
label_2a281c:
    // 0x2a281c: 0x2810  mfhi        $a1
    ctx->pc = 0x2a281cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2a2820:
    // 0x2a2820: 0xc0ab742  jal         func_2ADD08
label_2a2824:
    if (ctx->pc == 0x2A2824u) {
        ctx->pc = 0x2A2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2820u;
        // 0x2a2824: 0x24a50bb8  addiu       $a1, $a1, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2828u;
        goto label_2a2828;
    }
    ctx->pc = 0x2A2820u;
    SET_GPR_U32(ctx, 31, 0x2A2828u);
    ctx->pc = 0x2A2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2820u;
    // 0x2a2824: 0x24a50bb8  addiu       $a1, $a1, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x2A2820u, 0x2A2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2828u;
label_2a2828:
    // 0x2a2828: 0x1000021b  b           . + 4 + (0x21B << 2)
label_2a282c:
    if (ctx->pc == 0x2A282Cu) {
        ctx->pc = 0x2A282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2828u;
        // 0x2a282c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2830u;
        goto label_2a2830;
    }
    ctx->pc = 0x2A2828u;
    {
        const bool branch_taken_0x2a2828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2828u;
        // 0x2a282c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2828) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A2830u;
label_2a2830:
    // 0x2a2830: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x2a2830u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
label_2a2834:
    // 0x2a2834: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2a2838:
    if (ctx->pc == 0x2A2838u) {
        ctx->pc = 0x2A2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2834u;
        // 0x2a2838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A283Cu;
        goto label_2a283c;
    }
    ctx->pc = 0x2A2834u;
    {
        const bool branch_taken_0x2a2834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2834u;
        // 0x2a2838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2834) {
            ctx->pc = 0x2A284Cu;
            goto label_2a284c;
        }
    }
    ctx->pc = 0x2A283Cu;
label_2a283c:
    // 0x2a283c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2a2840:
    if (ctx->pc == 0x2A2840u) {
        ctx->pc = 0x2A2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A283Cu;
        // 0x2a2840: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2844u;
        goto label_2a2844;
    }
    ctx->pc = 0x2A283Cu;
    {
        const bool branch_taken_0x2a283c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A283Cu;
        // 0x2a2840: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a283c) {
            ctx->pc = 0x2A285Cu;
            goto label_2a285c;
        }
    }
    ctx->pc = 0x2A2844u;
label_2a2844:
    // 0x2a2844: 0x10000215  b           . + 4 + (0x215 << 2)
label_2a2848:
    if (ctx->pc == 0x2A2848u) {
        ctx->pc = 0x2A2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2844u;
        // 0x2a2848: 0xa6420024  sh          $v0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A284Cu;
        goto label_2a284c;
    }
    ctx->pc = 0x2A2844u;
    {
        const bool branch_taken_0x2a2844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2844u;
        // 0x2a2848: 0xa6420024  sh          $v0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2844) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A284Cu;
label_2a284c:
    // 0x2a284c: 0xc0a7e3a  jal         func_29F8E8
label_2a2850:
    if (ctx->pc == 0x2A2850u) {
        ctx->pc = 0x2A2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A284Cu;
        // 0x2a2850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2854u;
        goto label_2a2854;
    }
    ctx->pc = 0x2A284Cu;
    SET_GPR_U32(ctx, 31, 0x2A2854u);
    ctx->pc = 0x2A2850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A284Cu;
    // 0x2a2850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F8E8u, 0x2A284Cu, 0x2A2854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2854u;
label_2a2854:
    // 0x2a2854: 0x10000210  b           . + 4 + (0x210 << 2)
label_2a2858:
    if (ctx->pc == 0x2A2858u) {
        ctx->pc = 0x2A2858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2854u;
        // 0x2a2858: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A285Cu;
        goto label_2a285c;
    }
    ctx->pc = 0x2A2854u;
    {
        const bool branch_taken_0x2a2854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2854u;
        // 0x2a2858: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2854) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A285Cu;
label_2a285c:
    // 0x2a285c: 0xc0a7e04  jal         func_29F810
label_2a2860:
    if (ctx->pc == 0x2A2860u) {
        ctx->pc = 0x2A2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A285Cu;
        // 0x2a2860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2864u;
        goto label_2a2864;
    }
    ctx->pc = 0x2A285Cu;
    SET_GPR_U32(ctx, 31, 0x2A2864u);
    ctx->pc = 0x2A2860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A285Cu;
    // 0x2a2860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F810u, 0x2A285Cu, 0x2A2864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2864u;
label_2a2864:
    // 0x2a2864: 0x1000020c  b           . + 4 + (0x20C << 2)
label_2a2868:
    if (ctx->pc == 0x2A2868u) {
        ctx->pc = 0x2A2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2864u;
        // 0x2a2868: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A286Cu;
        goto label_2a286c;
    }
    ctx->pc = 0x2A2864u;
    {
        const bool branch_taken_0x2a2864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2864u;
        // 0x2a2868: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2864) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A286Cu;
label_2a286c:
    // 0x2a286c: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x2a286cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
label_2a2870:
    // 0x2a2870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2874:
    // 0x2a2874: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_2a2878:
    if (ctx->pc == 0x2A2878u) {
        ctx->pc = 0x2A2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2874u;
        // 0x2a2878: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A287Cu;
        goto label_2a287c;
    }
    ctx->pc = 0x2A2874u;
    {
        const bool branch_taken_0x2a2874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2874u;
        // 0x2a2878: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2874) {
            ctx->pc = 0x2A28C0u;
            goto label_2a28c0;
        }
    }
    ctx->pc = 0x2A287Cu;
label_2a287c:
    // 0x2a287c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a2880:
    if (ctx->pc == 0x2A2880u) {
        ctx->pc = 0x2A2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A287Cu;
        // 0x2a2880: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2884u;
        goto label_2a2884;
    }
    ctx->pc = 0x2A287Cu;
    {
        const bool branch_taken_0x2a287c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A287Cu;
        // 0x2a2880: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a287c) {
            ctx->pc = 0x2A2894u;
            goto label_2a2894;
        }
    }
    ctx->pc = 0x2A2884u;
label_2a2884:
    // 0x2a2884: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2a2888:
    if (ctx->pc == 0x2A2888u) {
        ctx->pc = 0x2A2888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2884u;
        // 0x2a2888: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A288Cu;
        goto label_2a288c;
    }
    ctx->pc = 0x2A2884u;
    {
        const bool branch_taken_0x2a2884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2884u;
        // 0x2a2888: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2884) {
            ctx->pc = 0x2A28A4u;
            goto label_2a28a4;
        }
    }
    ctx->pc = 0x2A288Cu;
label_2a288c:
    // 0x2a288c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2a2890:
    if (ctx->pc == 0x2A2890u) {
        ctx->pc = 0x2A2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A288Cu;
        // 0x2a2890: 0xa0400265  sb          $zero, 0x265($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2894u;
        goto label_2a2894;
    }
    ctx->pc = 0x2A288Cu;
    {
        const bool branch_taken_0x2a288c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A288Cu;
        // 0x2a2890: 0xa0400265  sb          $zero, 0x265($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a288c) {
            ctx->pc = 0x2A28FCu;
            goto label_2a28fc;
        }
    }
    ctx->pc = 0x2A2894u;
label_2a2894:
    // 0x2a2894: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2a2898:
    if (ctx->pc == 0x2A2898u) {
        ctx->pc = 0x2A2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2894u;
        // 0x2a2898: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A289Cu;
        goto label_2a289c;
    }
    ctx->pc = 0x2A2894u;
    {
        const bool branch_taken_0x2a2894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2894u;
        // 0x2a2898: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2894) {
            ctx->pc = 0x2A28F8u;
            goto label_2a28f8;
        }
    }
    ctx->pc = 0x2A289Cu;
label_2a289c:
    // 0x2a289c: 0x10000010  b           . + 4 + (0x10 << 2)
label_2a28a0:
    if (ctx->pc == 0x2A28A0u) {
        ctx->pc = 0x2A28A4u;
        goto label_2a28a4;
    }
    ctx->pc = 0x2A289Cu;
    {
        const bool branch_taken_0x2a289c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a289c) {
            ctx->pc = 0x2A28E0u;
            goto label_2a28e0;
        }
    }
    ctx->pc = 0x2A28A4u;
label_2a28a4:
    // 0x2a28a4: 0xc0874fa  jal         func_21D3E8
label_2a28a8:
    if (ctx->pc == 0x2A28A8u) {
        ctx->pc = 0x2A28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28A4u;
        // 0x2a28a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A28ACu;
        goto label_2a28ac;
    }
    ctx->pc = 0x2A28A4u;
    SET_GPR_U32(ctx, 31, 0x2A28ACu);
    ctx->pc = 0x2A28A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A28A4u;
    // 0x2a28a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2A28A4u, 0x2A28ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28ACu;
label_2a28ac:
    // 0x2a28ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a28acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a28b0:
    // 0x2a28b0: 0xc051fbc  jal         func_147EF0
label_2a28b4:
    if (ctx->pc == 0x2A28B4u) {
        ctx->pc = 0x2A28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28B0u;
        // 0x2a28b4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A28B8u;
        goto label_2a28b8;
    }
    ctx->pc = 0x2A28B0u;
    SET_GPR_U32(ctx, 31, 0x2A28B8u);
    ctx->pc = 0x2A28B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A28B0u;
    // 0x2a28b4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2A28B0u, 0x2A28B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28B8u;
label_2a28b8:
    // 0x2a28b8: 0x1000000f  b           . + 4 + (0xF << 2)
label_2a28bc:
    if (ctx->pc == 0x2A28BCu) {
        ctx->pc = 0x2A28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28B8u;
        // 0x2a28bc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A28C0u;
        goto label_2a28c0;
    }
    ctx->pc = 0x2A28B8u;
    {
        const bool branch_taken_0x2a28b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28B8u;
        // 0x2a28bc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28b8) {
            ctx->pc = 0x2A28F8u;
            goto label_2a28f8;
        }
    }
    ctx->pc = 0x2A28C0u;
label_2a28c0:
    // 0x2a28c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a28c4:
    // 0x2a28c4: 0xc0874fa  jal         func_21D3E8
label_2a28c8:
    if (ctx->pc == 0x2A28C8u) {
        ctx->pc = 0x2A28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28C4u;
        // 0x2a28c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A28CCu;
        goto label_2a28cc;
    }
    ctx->pc = 0x2A28C4u;
    SET_GPR_U32(ctx, 31, 0x2A28CCu);
    ctx->pc = 0x2A28C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A28C4u;
    // 0x2a28c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2A28C4u, 0x2A28CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28CCu;
label_2a28cc:
    // 0x2a28cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a28ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a28d0:
    // 0x2a28d0: 0xc051fbc  jal         func_147EF0
label_2a28d4:
    if (ctx->pc == 0x2A28D4u) {
        ctx->pc = 0x2A28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28D0u;
        // 0x2a28d4: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A28D8u;
        goto label_2a28d8;
    }
    ctx->pc = 0x2A28D0u;
    SET_GPR_U32(ctx, 31, 0x2A28D8u);
    ctx->pc = 0x2A28D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A28D0u;
    // 0x2a28d4: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2A28D0u, 0x2A28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28D8u;
label_2a28d8:
    // 0x2a28d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a28dc:
    if (ctx->pc == 0x2A28DCu) {
        ctx->pc = 0x2A28DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28D8u;
        // 0x2a28dc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A28E0u;
        goto label_2a28e0;
    }
    ctx->pc = 0x2A28D8u;
    {
        const bool branch_taken_0x2a28d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A28DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28D8u;
        // 0x2a28dc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28d8) {
            ctx->pc = 0x2A28F8u;
            goto label_2a28f8;
        }
    }
    ctx->pc = 0x2A28E0u;
label_2a28e0:
    // 0x2a28e0: 0xc0874fa  jal         func_21D3E8
label_2a28e4:
    if (ctx->pc == 0x2A28E4u) {
        ctx->pc = 0x2A28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28E0u;
        // 0x2a28e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A28E8u;
        goto label_2a28e8;
    }
    ctx->pc = 0x2A28E0u;
    SET_GPR_U32(ctx, 31, 0x2A28E8u);
    ctx->pc = 0x2A28E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A28E0u;
    // 0x2a28e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2A28E0u, 0x2A28E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28E8u;
label_2a28e8:
    // 0x2a28e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a28e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a28ec:
    // 0x2a28ec: 0xc051fbc  jal         func_147EF0
label_2a28f0:
    if (ctx->pc == 0x2A28F0u) {
        ctx->pc = 0x2A28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A28ECu;
        // 0x2a28f0: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A28F4u;
        goto label_2a28f4;
    }
    ctx->pc = 0x2A28ECu;
    SET_GPR_U32(ctx, 31, 0x2A28F4u);
    ctx->pc = 0x2A28F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A28ECu;
    // 0x2a28f0: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2A28ECu, 0x2A28F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28F4u;
label_2a28f4:
    // 0x2a28f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a28f8:
    // 0x2a28f8: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2a28f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2a28fc:
    // 0x2a28fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a28fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2900:
    // 0x2a2900: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2904:
    // 0x2a2904: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2908:
    // 0x2a2908: 0x40f809  jalr        $v0
label_2a290c:
    if (ctx->pc == 0x2A290Cu) {
        ctx->pc = 0x2A290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2908u;
        // 0x2a290c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2910u;
        goto label_2a2910;
    }
    ctx->pc = 0x2A2908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2910u);
        ctx->pc = 0x2A290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2908u;
        // 0x2a290c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2908u, 0x2A2910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2910u;
label_2a2910:
    // 0x2a2910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2914:
    // 0x2a2914: 0xc08e884  jal         func_23A210
label_2a2918:
    if (ctx->pc == 0x2A2918u) {
        ctx->pc = 0x2A2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2914u;
        // 0x2a2918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A291Cu;
        goto label_2a291c;
    }
    ctx->pc = 0x2A2914u;
    SET_GPR_U32(ctx, 31, 0x2A291Cu);
    ctx->pc = 0x2A2918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2914u;
    // 0x2a2918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A210u, 0x2A2914u, 0x2A291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A291Cu;
label_2a291c:
    // 0x2a291c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2920:
    // 0x2a2920: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a2924:
    // 0x2a2924: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a2924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a2928:
    // 0x2a2928: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a292c:
    // 0x2a292c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2930:
    // 0x2a2930: 0x40f809  jalr        $v0
label_2a2934:
    if (ctx->pc == 0x2A2934u) {
        ctx->pc = 0x2A2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2930u;
        // 0x2a2934: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2938u;
        goto label_2a2938;
    }
    ctx->pc = 0x2A2930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2938u);
        ctx->pc = 0x2A2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2930u;
        // 0x2a2934: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2930u, 0x2A2938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2938u;
label_2a2938:
    // 0x2a2938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a293c:
    // 0x2a293c: 0xc0a49c2  jal         func_292708
label_2a2940:
    if (ctx->pc == 0x2A2940u) {
        ctx->pc = 0x2A2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A293Cu;
        // 0x2a2940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2944u;
        goto label_2a2944;
    }
    ctx->pc = 0x2A293Cu;
    SET_GPR_U32(ctx, 31, 0x2A2944u);
    ctx->pc = 0x2A2940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A293Cu;
    // 0x2a2940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x2A293Cu, 0x2A2944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2944u;
label_2a2944:
    // 0x2a2944: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2948:
    // 0x2a2948: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a294c:
    // 0x2a294c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a294cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a2950:
    // 0x2a2950: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2954:
    // 0x2a2954: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2958:
    // 0x2a2958: 0x40f809  jalr        $v0
label_2a295c:
    if (ctx->pc == 0x2A295Cu) {
        ctx->pc = 0x2A295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2958u;
        // 0x2a295c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2960u;
        goto label_2a2960;
    }
    ctx->pc = 0x2A2958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2960u);
        ctx->pc = 0x2A295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2958u;
        // 0x2a295c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2958u, 0x2A2960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2960u;
label_2a2960:
    // 0x2a2960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2964:
    // 0x2a2964: 0xc0a49d6  jal         func_292758
label_2a2968:
    if (ctx->pc == 0x2A2968u) {
        ctx->pc = 0x2A2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2964u;
        // 0x2a2968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A296Cu;
        goto label_2a296c;
    }
    ctx->pc = 0x2A2964u;
    SET_GPR_U32(ctx, 31, 0x2A296Cu);
    ctx->pc = 0x2A2968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2964u;
    // 0x2a2968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x2A2964u, 0x2A296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A296Cu;
label_2a296c:
    // 0x2a296c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a296cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2970:
    // 0x2a2970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2974:
    // 0x2a2974: 0xc0a33f8  jal         func_28CFE0
label_2a2978:
    if (ctx->pc == 0x2A2978u) {
        ctx->pc = 0x2A2978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2974u;
        // 0x2a2978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A297Cu;
        goto label_2a297c;
    }
    ctx->pc = 0x2A2974u;
    SET_GPR_U32(ctx, 31, 0x2A297Cu);
    ctx->pc = 0x2A2978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2974u;
    // 0x2a2978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2A2974u, 0x2A297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A297Cu;
label_2a297c:
    // 0x2a297c: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x2a297cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
label_2a2980:
    // 0x2a2980: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
label_2a2984:
    if (ctx->pc == 0x2A2984u) {
        ctx->pc = 0x2A2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2980u;
        // 0x2a2984: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2988u;
        goto label_2a2988;
    }
    ctx->pc = 0x2A2980u;
    {
        const bool branch_taken_0x2a2980 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2A2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2980u;
        // 0x2a2984: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2980) {
            ctx->pc = 0x2A29BCu;
            goto label_2a29bc;
        }
    }
    ctx->pc = 0x2A2988u;
label_2a2988:
    // 0x2a2988: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2a298c:
    if (ctx->pc == 0x2A298Cu) {
        ctx->pc = 0x2A298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2988u;
        // 0x2a298c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2990u;
        goto label_2a2990;
    }
    ctx->pc = 0x2A2988u;
    {
        const bool branch_taken_0x2a2988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2988u;
        // 0x2a298c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2988) {
            ctx->pc = 0x2A29A4u;
            goto label_2a29a4;
        }
    }
    ctx->pc = 0x2A2990u;
label_2a2990:
    // 0x2a2990: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a2990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a2994:
    // 0x2a2994: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_2a2998:
    if (ctx->pc == 0x2A2998u) {
        ctx->pc = 0x2A2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2994u;
        // 0x2a2998: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A299Cu;
        goto label_2a299c;
    }
    ctx->pc = 0x2A2994u;
    {
        const bool branch_taken_0x2a2994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2994u;
        // 0x2a2998: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2994) {
            ctx->pc = 0x2A29B0u;
            goto label_2a29b0;
        }
    }
    ctx->pc = 0x2A299Cu;
label_2a299c:
    // 0x2a299c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a29a0:
    if (ctx->pc == 0x2A29A0u) {
        ctx->pc = 0x2A29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A299Cu;
        // 0x2a29a0: 0x86430024  lh          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A29A4u;
        goto label_2a29a4;
    }
    ctx->pc = 0x2A299Cu;
    {
        const bool branch_taken_0x2a299c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A299Cu;
        // 0x2a29a0: 0x86430024  lh          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a299c) {
            ctx->pc = 0x2A29C0u;
            goto label_2a29c0;
        }
    }
    ctx->pc = 0x2A29A4u;
label_2a29a4:
    // 0x2a29a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2a29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2a29a8:
    // 0x2a29a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a29ac:
    if (ctx->pc == 0x2A29ACu) {
        ctx->pc = 0x2A29ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29A8u;
        // 0x2a29ac: 0x8c540014  lw          $s4, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A29B0u;
        goto label_2a29b0;
    }
    ctx->pc = 0x2A29A8u;
    {
        const bool branch_taken_0x2a29a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A29ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29A8u;
        // 0x2a29ac: 0x8c540014  lw          $s4, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29a8) {
            ctx->pc = 0x2A29BCu;
            goto label_2a29bc;
        }
    }
    ctx->pc = 0x2A29B0u;
label_2a29b0:
    // 0x2a29b0: 0xc105712  jal         func_415C48
label_2a29b4:
    if (ctx->pc == 0x2A29B4u) {
        ctx->pc = 0x2A29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29B0u;
        // 0x2a29b4: 0x24842ba8  addiu       $a0, $a0, 0x2BA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A29B8u;
        goto label_2a29b8;
    }
    ctx->pc = 0x2A29B0u;
    SET_GPR_U32(ctx, 31, 0x2A29B8u);
    ctx->pc = 0x2A29B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A29B0u;
    // 0x2a29b4: 0x24842ba8  addiu       $a0, $a0, 0x2BA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2A29B0u, 0x2A29B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A29B8u;
label_2a29b8:
    // 0x2a29b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a29b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a29bc:
    // 0x2a29bc: 0x86430024  lh          $v1, 0x24($s2)
    ctx->pc = 0x2a29bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
label_2a29c0:
    // 0x2a29c0: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x2a29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_2a29c4:
    // 0x2a29c4: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_2a29c8:
    if (ctx->pc == 0x2A29C8u) {
        ctx->pc = 0x2A29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29C4u;
        // 0x2a29c8: 0x286200a2  slti        $v0, $v1, 0xA2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)162) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A29CCu;
        goto label_2a29cc;
    }
    ctx->pc = 0x2A29C4u;
    {
        const bool branch_taken_0x2a29c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29C4u;
        // 0x2a29c8: 0x286200a2  slti        $v0, $v1, 0xA2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)162) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29c4) {
            ctx->pc = 0x2A2A60u;
            goto label_2a2a60;
        }
    }
    ctx->pc = 0x2A29CCu;
label_2a29cc:
    // 0x2a29cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a29d0:
    if (ctx->pc == 0x2A29D0u) {
        ctx->pc = 0x2A29D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29CCu;
        // 0x2a29d0: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A29D4u;
        goto label_2a29d4;
    }
    ctx->pc = 0x2A29CCu;
    {
        const bool branch_taken_0x2a29cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A29D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29CCu;
        // 0x2a29d0: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29cc) {
            ctx->pc = 0x2A29E4u;
            goto label_2a29e4;
        }
    }
    ctx->pc = 0x2A29D4u;
label_2a29d4:
    // 0x2a29d4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_2a29d8:
    if (ctx->pc == 0x2A29D8u) {
        ctx->pc = 0x2A29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29D4u;
        // 0x2a29d8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A29DCu;
        goto label_2a29dc;
    }
    ctx->pc = 0x2A29D4u;
    {
        const bool branch_taken_0x2a29d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29D4u;
        // 0x2a29d8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29d4) {
            ctx->pc = 0x2A2A00u;
            goto label_2a2a00;
        }
    }
    ctx->pc = 0x2A29DCu;
label_2a29dc:
    // 0x2a29dc: 0x100001af  b           . + 4 + (0x1AF << 2)
label_2a29e0:
    if (ctx->pc == 0x2A29E0u) {
        ctx->pc = 0x2A29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29DCu;
        // 0x2a29e0: 0xa6420024  sh          $v0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A29E4u;
        goto label_2a29e4;
    }
    ctx->pc = 0x2A29DCu;
    {
        const bool branch_taken_0x2a29dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29DCu;
        // 0x2a29e0: 0xa6420024  sh          $v0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29dc) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A29E4u;
label_2a29e4:
    // 0x2a29e4: 0x240200a2  addiu       $v0, $zero, 0xA2
    ctx->pc = 0x2a29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_2a29e8:
    // 0x2a29e8: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
label_2a29ec:
    if (ctx->pc == 0x2A29ECu) {
        ctx->pc = 0x2A29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29E8u;
        // 0x2a29ec: 0x240200a3  addiu       $v0, $zero, 0xA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A29F0u;
        goto label_2a29f0;
    }
    ctx->pc = 0x2A29E8u;
    {
        const bool branch_taken_0x2a29e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29E8u;
        // 0x2a29ec: 0x240200a3  addiu       $v0, $zero, 0xA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29e8) {
            ctx->pc = 0x2A2AA8u;
            goto label_2a2aa8;
        }
    }
    ctx->pc = 0x2A29F0u;
label_2a29f0:
    // 0x2a29f0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_2a29f4:
    if (ctx->pc == 0x2A29F4u) {
        ctx->pc = 0x2A29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29F0u;
        // 0x2a29f4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A29F8u;
        goto label_2a29f8;
    }
    ctx->pc = 0x2A29F0u;
    {
        const bool branch_taken_0x2a29f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29F0u;
        // 0x2a29f4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29f0) {
            ctx->pc = 0x2A2A30u;
            goto label_2a2a30;
        }
    }
    ctx->pc = 0x2A29F8u;
label_2a29f8:
    // 0x2a29f8: 0x100001a8  b           . + 4 + (0x1A8 << 2)
label_2a29fc:
    if (ctx->pc == 0x2A29FCu) {
        ctx->pc = 0x2A29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29F8u;
        // 0x2a29fc: 0xa6420024  sh          $v0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2A00u;
        goto label_2a2a00;
    }
    ctx->pc = 0x2A29F8u;
    {
        const bool branch_taken_0x2a29f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29F8u;
        // 0x2a29fc: 0xa6420024  sh          $v0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29f8) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A2A00u;
label_2a2a00:
    // 0x2a2a00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2a04:
    // 0x2a2a04: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2a04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2a08:
    // 0x2a2a08: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2a0c:
    // 0x2a2a0c: 0x40f809  jalr        $v0
label_2a2a10:
    if (ctx->pc == 0x2A2A10u) {
        ctx->pc = 0x2A2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A0Cu;
        // 0x2a2a10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2A14u;
        goto label_2a2a14;
    }
    ctx->pc = 0x2A2A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2A14u);
        ctx->pc = 0x2A2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A0Cu;
        // 0x2a2a10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2A0Cu, 0x2A2A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2A14u;
label_2a2a14:
    // 0x2a2a14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a2a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a2a18:
    // 0x2a2a18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2a1c:
    // 0x2a2a1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a2a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a2a20:
    // 0x2a2a20: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a2a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a2a24:
    // 0x2a2a24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a2a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a2a28:
    // 0x2a2a28: 0x10000018  b           . + 4 + (0x18 << 2)
label_2a2a2c:
    if (ctx->pc == 0x2A2A2Cu) {
        ctx->pc = 0x2A2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A28u;
        // 0x2a2a2c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2A30u;
        goto label_2a2a30;
    }
    ctx->pc = 0x2A2A28u;
    {
        const bool branch_taken_0x2a2a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A28u;
        // 0x2a2a2c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a28) {
            ctx->pc = 0x2A2A8Cu;
            goto label_2a2a8c;
        }
    }
    ctx->pc = 0x2A2A30u;
label_2a2a30:
    // 0x2a2a30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2a34:
    // 0x2a2a34: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2a34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2a38:
    // 0x2a2a38: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2a3c:
    // 0x2a2a3c: 0x40f809  jalr        $v0
label_2a2a40:
    if (ctx->pc == 0x2A2A40u) {
        ctx->pc = 0x2A2A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A3Cu;
        // 0x2a2a40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2A44u;
        goto label_2a2a44;
    }
    ctx->pc = 0x2A2A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2A44u);
        ctx->pc = 0x2A2A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A3Cu;
        // 0x2a2a40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2A3Cu, 0x2A2A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2A44u;
label_2a2a44:
    // 0x2a2a44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a2a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a2a48:
    // 0x2a2a48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2a4c:
    // 0x2a2a4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a2a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a2a50:
    // 0x2a2a50: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a2a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a2a54:
    // 0x2a2a54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a2a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a2a58:
    // 0x2a2a58: 0x1000000c  b           . + 4 + (0xC << 2)
label_2a2a5c:
    if (ctx->pc == 0x2A2A5Cu) {
        ctx->pc = 0x2A2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A58u;
        // 0x2a2a5c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2A60u;
        goto label_2a2a60;
    }
    ctx->pc = 0x2A2A58u;
    {
        const bool branch_taken_0x2a2a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A58u;
        // 0x2a2a5c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a58) {
            ctx->pc = 0x2A2A8Cu;
            goto label_2a2a8c;
        }
    }
    ctx->pc = 0x2A2A60u;
label_2a2a60:
    // 0x2a2a60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2a64:
    // 0x2a2a64: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2a68:
    // 0x2a2a68: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2a6c:
    // 0x2a2a6c: 0x40f809  jalr        $v0
label_2a2a70:
    if (ctx->pc == 0x2A2A70u) {
        ctx->pc = 0x2A2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A6Cu;
        // 0x2a2a70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2A74u;
        goto label_2a2a74;
    }
    ctx->pc = 0x2A2A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2A74u);
        ctx->pc = 0x2A2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A6Cu;
        // 0x2a2a70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2A6Cu, 0x2A2A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2A74u;
label_2a2a74:
    // 0x2a2a74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a2a74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a2a78:
    // 0x2a2a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2a7c:
    // 0x2a2a7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a2a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a2a80:
    // 0x2a2a80: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a2a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a2a84:
    // 0x2a2a84: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a2a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a2a88:
    // 0x2a2a88: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a2a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a2a8c:
    // 0x2a2a8c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a2a8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2a2a90:
    // 0x2a2a90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a2a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2a94:
    // 0x2a2a94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a2a94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2a98:
    // 0x2a2a98: 0xc0b68b0  jal         func_2DA2C0
label_2a2a9c:
    if (ctx->pc == 0x2A2A9Cu) {
        ctx->pc = 0x2A2A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A98u;
        // 0x2a2a9c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2AA0u;
        goto label_2a2aa0;
    }
    ctx->pc = 0x2A2A98u;
    SET_GPR_U32(ctx, 31, 0x2A2AA0u);
    ctx->pc = 0x2A2A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A98u;
    // 0x2a2a9c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x2A2A98u, 0x2A2AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AA0u;
label_2a2aa0:
    // 0x2a2aa0: 0x1000017d  b           . + 4 + (0x17D << 2)
label_2a2aa4:
    if (ctx->pc == 0x2A2AA4u) {
        ctx->pc = 0x2A2AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2AA0u;
        // 0x2a2aa4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2AA8u;
        goto label_2a2aa8;
    }
    ctx->pc = 0x2A2AA0u;
    {
        const bool branch_taken_0x2a2aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2AA0u;
        // 0x2a2aa4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2aa0) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A2AA8u;
label_2a2aa8:
    // 0x2a2aa8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2aac:
    // 0x2a2aac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2aacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2ab0:
    // 0x2a2ab0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2ab4:
    // 0x2a2ab4: 0x40f809  jalr        $v0
label_2a2ab8:
    if (ctx->pc == 0x2A2AB8u) {
        ctx->pc = 0x2A2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2AB4u;
        // 0x2a2ab8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2ABCu;
        goto label_2a2abc;
    }
    ctx->pc = 0x2A2AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2ABCu);
        ctx->pc = 0x2A2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2AB4u;
        // 0x2a2ab8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2AB4u, 0x2A2ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2ABCu;
label_2a2abc:
    // 0x2a2abc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a2abcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a2ac0:
    // 0x2a2ac0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2ac4:
    // 0x2a2ac4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2a2ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2a2ac8:
    // 0x2a2ac8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a2ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a2acc:
    // 0x2a2acc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a2accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a2ad0:
    // 0x2a2ad0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2a2ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a2ad4:
    // 0x2a2ad4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a2ad4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2a2ad8:
    // 0x2a2ad8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a2ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2adc:
    // 0x2a2adc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a2adcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2ae0:
    // 0x2a2ae0: 0xc0b68b0  jal         func_2DA2C0
label_2a2ae4:
    if (ctx->pc == 0x2A2AE4u) {
        ctx->pc = 0x2A2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2AE0u;
        // 0x2a2ae4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2AE8u;
        goto label_2a2ae8;
    }
    ctx->pc = 0x2A2AE0u;
    SET_GPR_U32(ctx, 31, 0x2A2AE8u);
    ctx->pc = 0x2A2AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2AE0u;
    // 0x2a2ae4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x2A2AE0u, 0x2A2AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AE8u;
label_2a2ae8:
    // 0x2a2ae8: 0x1000016b  b           . + 4 + (0x16B << 2)
label_2a2aec:
    if (ctx->pc == 0x2A2AECu) {
        ctx->pc = 0x2A2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2AE8u;
        // 0x2a2aec: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2AF0u;
        goto label_2a2af0;
    }
    ctx->pc = 0x2A2AE8u;
    {
        const bool branch_taken_0x2a2ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2AE8u;
        // 0x2a2aec: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ae8) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A2AF0u;
label_2a2af0:
    // 0x2a2af0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2af4:
    // 0x2a2af4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a2af8:
    // 0x2a2af8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a2af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a2afc:
    // 0x2a2afc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2afcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2b00:
    // 0x2a2b00: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2b04:
    // 0x2a2b04: 0x40f809  jalr        $v0
label_2a2b08:
    if (ctx->pc == 0x2A2B08u) {
        ctx->pc = 0x2A2B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B04u;
        // 0x2a2b08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2B0Cu;
        goto label_2a2b0c;
    }
    ctx->pc = 0x2A2B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2B0Cu);
        ctx->pc = 0x2A2B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B04u;
        // 0x2a2b08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2B04u, 0x2A2B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2B0Cu;
label_2a2b0c:
    // 0x2a2b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2b10:
    // 0x2a2b10: 0xc0a49c2  jal         func_292708
label_2a2b14:
    if (ctx->pc == 0x2A2B14u) {
        ctx->pc = 0x2A2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B10u;
        // 0x2a2b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2B18u;
        goto label_2a2b18;
    }
    ctx->pc = 0x2A2B10u;
    SET_GPR_U32(ctx, 31, 0x2A2B18u);
    ctx->pc = 0x2A2B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B10u;
    // 0x2a2b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x2A2B10u, 0x2A2B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B18u;
label_2a2b18:
    // 0x2a2b18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2b1c:
    // 0x2a2b1c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a2b20:
    // 0x2a2b20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a2b24:
    // 0x2a2b24: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2b28:
    // 0x2a2b28: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2b2c:
    // 0x2a2b2c: 0x40f809  jalr        $v0
label_2a2b30:
    if (ctx->pc == 0x2A2B30u) {
        ctx->pc = 0x2A2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B2Cu;
        // 0x2a2b30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2B34u;
        goto label_2a2b34;
    }
    ctx->pc = 0x2A2B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2B34u);
        ctx->pc = 0x2A2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B2Cu;
        // 0x2a2b30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2B2Cu, 0x2A2B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2B34u;
label_2a2b34:
    // 0x2a2b34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2b38:
    // 0x2a2b38: 0xc0a49d6  jal         func_292758
label_2a2b3c:
    if (ctx->pc == 0x2A2B3Cu) {
        ctx->pc = 0x2A2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B38u;
        // 0x2a2b3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2B40u;
        goto label_2a2b40;
    }
    ctx->pc = 0x2A2B38u;
    SET_GPR_U32(ctx, 31, 0x2A2B40u);
    ctx->pc = 0x2A2B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B38u;
    // 0x2a2b3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x2A2B38u, 0x2A2B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B40u;
label_2a2b40:
    // 0x2a2b40: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a2b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2b44:
    // 0x2a2b44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a2b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2b48:
    // 0x2a2b48: 0xc0a33f8  jal         func_28CFE0
label_2a2b4c:
    if (ctx->pc == 0x2A2B4Cu) {
        ctx->pc = 0x2A2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B48u;
        // 0x2a2b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2B50u;
        goto label_2a2b50;
    }
    ctx->pc = 0x2A2B48u;
    SET_GPR_U32(ctx, 31, 0x2A2B50u);
    ctx->pc = 0x2A2B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B48u;
    // 0x2a2b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2A2B48u, 0x2A2B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B50u;
label_2a2b50:
    // 0x2a2b50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2b54:
    // 0x2a2b54: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2b54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2b58:
    // 0x2a2b58: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2b5c:
    // 0x2a2b5c: 0x40f809  jalr        $v0
label_2a2b60:
    if (ctx->pc == 0x2A2B60u) {
        ctx->pc = 0x2A2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B5Cu;
        // 0x2a2b60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2B64u;
        goto label_2a2b64;
    }
    ctx->pc = 0x2A2B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2B64u);
        ctx->pc = 0x2A2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B5Cu;
        // 0x2a2b60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2B5Cu, 0x2A2B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2B64u;
label_2a2b64:
    // 0x2a2b64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2b68:
    // 0x2a2b68: 0xc08e884  jal         func_23A210
label_2a2b6c:
    if (ctx->pc == 0x2A2B6Cu) {
        ctx->pc = 0x2A2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B68u;
        // 0x2a2b6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2B70u;
        goto label_2a2b70;
    }
    ctx->pc = 0x2A2B68u;
    SET_GPR_U32(ctx, 31, 0x2A2B70u);
    ctx->pc = 0x2A2B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B68u;
    // 0x2a2b6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A210u, 0x2A2B68u, 0x2A2B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B70u;
label_2a2b70:
    // 0x2a2b70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2b74:
    // 0x2a2b74: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2b74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2b78:
    // 0x2a2b78: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2b7c:
    // 0x2a2b7c: 0x40f809  jalr        $v0
label_2a2b80:
    if (ctx->pc == 0x2A2B80u) {
        ctx->pc = 0x2A2B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B7Cu;
        // 0x2a2b80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2B84u;
        goto label_2a2b84;
    }
    ctx->pc = 0x2A2B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2B84u);
        ctx->pc = 0x2A2B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B7Cu;
        // 0x2a2b80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2B7Cu, 0x2A2B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2B84u;
label_2a2b84:
    // 0x2a2b84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2b88:
    // 0x2a2b88: 0xc08d52e  jal         func_2354B8
label_2a2b8c:
    if (ctx->pc == 0x2A2B8Cu) {
        ctx->pc = 0x2A2B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2B88u;
        // 0x2a2b8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2B90u;
        goto label_2a2b90;
    }
    ctx->pc = 0x2A2B88u;
    SET_GPR_U32(ctx, 31, 0x2A2B90u);
    ctx->pc = 0x2A2B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B88u;
    // 0x2a2b8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2354B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2354B8u, 0x2A2B88u, 0x2A2B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B90u;
label_2a2b90:
    // 0x2a2b90: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x2a2b90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
label_2a2b94:
    // 0x2a2b94: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a2b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a2b98:
    // 0x2a2b98: 0x8ca4b734  lw          $a0, -0x48CC($a1)
    ctx->pc = 0x2a2b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a2b9c:
    // 0x2a2b9c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x2a2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2a2ba0:
    // 0x2a2ba0: 0x1000012f  b           . + 4 + (0x12F << 2)
label_2a2ba4:
    if (ctx->pc == 0x2A2BA4u) {
        ctx->pc = 0x2A2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BA0u;
        // 0x2a2ba4: 0x2406007e  addiu       $a2, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BA8u;
        goto label_2a2ba8;
    }
    ctx->pc = 0x2A2BA0u;
    {
        const bool branch_taken_0x2a2ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BA0u;
        // 0x2a2ba4: 0x2406007e  addiu       $a2, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ba0) {
            ctx->pc = 0x2A3060u;
            goto label_2a3060;
        }
    }
    ctx->pc = 0x2A2BA8u;
label_2a2ba8:
    // 0x2a2ba8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a2ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a2bac:
    // 0x2a2bac: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2a2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2a2bb0:
    // 0x2a2bb0: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2a2bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a2bb4:
    // 0x2a2bb4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a2bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a2bb8:
    // 0x2a2bb8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2a2bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a2bbc:
    // 0x2a2bbc: 0x50400138  beql        $v0, $zero, . + 4 + (0x138 << 2)
label_2a2bc0:
    if (ctx->pc == 0x2A2BC0u) {
        ctx->pc = 0x2A2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BBCu;
        // 0x2a2bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BC4u;
        goto label_2a2bc4;
    }
    ctx->pc = 0x2A2BBCu;
    {
        const bool branch_taken_0x2a2bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2bbc) {
            ctx->pc = 0x2A2BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2BBCu;
            // 0x2a2bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A30A0u;
            return;
        }
    }
    ctx->pc = 0x2A2BC4u;
label_2a2bc4:
    // 0x2a2bc4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2bc8:
    // 0x2a2bc8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2bc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2bcc:
    // 0x2a2bcc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2bd0:
    // 0x2a2bd0: 0x40f809  jalr        $v0
label_2a2bd4:
    if (ctx->pc == 0x2A2BD4u) {
        ctx->pc = 0x2A2BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BD0u;
        // 0x2a2bd4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BD8u;
        goto label_2a2bd8;
    }
    ctx->pc = 0x2A2BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2BD8u);
        ctx->pc = 0x2A2BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BD0u;
        // 0x2a2bd4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2BD0u, 0x2A2BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2BD8u;
label_2a2bd8:
    // 0x2a2bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2bdc:
    // 0x2a2bdc: 0xc08d52e  jal         func_2354B8
label_2a2be0:
    if (ctx->pc == 0x2A2BE0u) {
        ctx->pc = 0x2A2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BDCu;
        // 0x2a2be0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BE4u;
        goto label_2a2be4;
    }
    ctx->pc = 0x2A2BDCu;
    SET_GPR_U32(ctx, 31, 0x2A2BE4u);
    ctx->pc = 0x2A2BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2BDCu;
    // 0x2a2be0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2354B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2354B8u, 0x2A2BDCu, 0x2A2BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2BE4u;
label_2a2be4:
    // 0x2a2be4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2be8:
    // 0x2a2be8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2be8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2bec:
    // 0x2a2bec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2bf0:
    // 0x2a2bf0: 0x40f809  jalr        $v0
label_2a2bf4:
    if (ctx->pc == 0x2A2BF4u) {
        ctx->pc = 0x2A2BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BF0u;
        // 0x2a2bf4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2BF8u;
        goto label_2a2bf8;
    }
    ctx->pc = 0x2A2BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2BF8u);
        ctx->pc = 0x2A2BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BF0u;
        // 0x2a2bf4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2BF0u, 0x2A2BF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2BF8u;
label_2a2bf8:
    // 0x2a2bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2bfc:
    // 0x2a2bfc: 0xc08e884  jal         func_23A210
label_2a2c00:
    if (ctx->pc == 0x2A2C00u) {
        ctx->pc = 0x2A2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2BFCu;
        // 0x2a2c00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C04u;
        goto label_2a2c04;
    }
    ctx->pc = 0x2A2BFCu;
    SET_GPR_U32(ctx, 31, 0x2A2C04u);
    ctx->pc = 0x2A2C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2BFCu;
    // 0x2a2c00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A210u, 0x2A2BFCu, 0x2A2C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C04u;
label_2a2c04:
    // 0x2a2c04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2c08:
    // 0x2a2c08: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2c08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2c0c:
    // 0x2a2c0c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2c10:
    // 0x2a2c10: 0x40f809  jalr        $v0
label_2a2c14:
    if (ctx->pc == 0x2A2C14u) {
        ctx->pc = 0x2A2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C10u;
        // 0x2a2c14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C18u;
        goto label_2a2c18;
    }
    ctx->pc = 0x2A2C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2C18u);
        ctx->pc = 0x2A2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C10u;
        // 0x2a2c14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2C10u, 0x2A2C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2C18u;
label_2a2c18:
    // 0x2a2c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2c1c:
    // 0x2a2c1c: 0xc08d466  jal         func_235198
label_2a2c20:
    if (ctx->pc == 0x2A2C20u) {
        ctx->pc = 0x2A2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C1Cu;
        // 0x2a2c20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C24u;
        goto label_2a2c24;
    }
    ctx->pc = 0x2A2C1Cu;
    SET_GPR_U32(ctx, 31, 0x2A2C24u);
    ctx->pc = 0x2A2C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2C1Cu;
    // 0x2a2c20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235198u, 0x2A2C1Cu, 0x2A2C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C24u;
label_2a2c24:
    // 0x2a2c24: 0x1000011c  b           . + 4 + (0x11C << 2)
label_2a2c28:
    if (ctx->pc == 0x2A2C28u) {
        ctx->pc = 0x2A2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C24u;
        // 0x2a2c28: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C2Cu;
        goto label_2a2c2c;
    }
    ctx->pc = 0x2A2C24u;
    {
        const bool branch_taken_0x2a2c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C24u;
        // 0x2a2c28: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c24) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A2C2Cu;
label_2a2c2c:
    // 0x2a2c2c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a2c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2c30:
    // 0x2a2c30: 0x80a2002e  lb          $v0, 0x2E($a1)
    ctx->pc = 0x2a2c30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
label_2a2c34:
    // 0x2a2c34: 0x1c40011a  bgtz        $v0, . + 4 + (0x11A << 2)
label_2a2c38:
    if (ctx->pc == 0x2A2C38u) {
        ctx->pc = 0x2A2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C34u;
        // 0x2a2c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C3Cu;
        goto label_2a2c3c;
    }
    ctx->pc = 0x2A2C34u;
    {
        const bool branch_taken_0x2a2c34 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C34u;
        // 0x2a2c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c34) {
            ctx->pc = 0x2A30A0u;
            return;
        }
    }
    ctx->pc = 0x2A2C3Cu;
label_2a2c3c:
    // 0x2a2c3c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2a2c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a2c40:
    // 0x2a2c40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a2c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a2c44:
    // 0x2a2c44: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2c44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2c48:
    // 0x2a2c48: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2c4c:
    // 0x2a2c4c: 0x40f809  jalr        $v0
label_2a2c50:
    if (ctx->pc == 0x2A2C50u) {
        ctx->pc = 0x2A2C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C4Cu;
        // 0x2a2c50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C54u;
        goto label_2a2c54;
    }
    ctx->pc = 0x2A2C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2C54u);
        ctx->pc = 0x2A2C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C4Cu;
        // 0x2a2c50: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2C4Cu, 0x2A2C54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2C54u;
label_2a2c54:
    // 0x2a2c54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2c58:
    // 0x2a2c58: 0xc0a49c2  jal         func_292708
label_2a2c5c:
    if (ctx->pc == 0x2A2C5Cu) {
        ctx->pc = 0x2A2C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C58u;
        // 0x2a2c5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C60u;
        goto label_2a2c60;
    }
    ctx->pc = 0x2A2C58u;
    SET_GPR_U32(ctx, 31, 0x2A2C60u);
    ctx->pc = 0x2A2C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2C58u;
    // 0x2a2c5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x2A2C58u, 0x2A2C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C60u;
label_2a2c60:
    // 0x2a2c60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2c64:
    // 0x2a2c64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a2c68:
    // 0x2a2c68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a2c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a2c6c:
    // 0x2a2c6c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2c6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2c70:
    // 0x2a2c70: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2c74:
    // 0x2a2c74: 0x40f809  jalr        $v0
label_2a2c78:
    if (ctx->pc == 0x2A2C78u) {
        ctx->pc = 0x2A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C74u;
        // 0x2a2c78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C7Cu;
        goto label_2a2c7c;
    }
    ctx->pc = 0x2A2C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2C7Cu);
        ctx->pc = 0x2A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C74u;
        // 0x2a2c78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2C74u, 0x2A2C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2C7Cu;
label_2a2c7c:
    // 0x2a2c7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2c80:
    // 0x2a2c80: 0xc0a49d6  jal         func_292758
label_2a2c84:
    if (ctx->pc == 0x2A2C84u) {
        ctx->pc = 0x2A2C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C80u;
        // 0x2a2c84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C88u;
        goto label_2a2c88;
    }
    ctx->pc = 0x2A2C80u;
    SET_GPR_U32(ctx, 31, 0x2A2C88u);
    ctx->pc = 0x2A2C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2C80u;
    // 0x2a2c84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x2A2C80u, 0x2A2C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C88u;
label_2a2c88:
    // 0x2a2c88: 0x10000103  b           . + 4 + (0x103 << 2)
label_2a2c8c:
    if (ctx->pc == 0x2A2C8Cu) {
        ctx->pc = 0x2A2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C88u;
        // 0x2a2c8c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C90u;
        goto label_2a2c90;
    }
    ctx->pc = 0x2A2C88u;
    {
        const bool branch_taken_0x2a2c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C88u;
        // 0x2a2c8c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c88) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A2C90u;
label_2a2c90:
    // 0x2a2c90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2c94:
    // 0x2a2c94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a2c98:
    // 0x2a2c98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a2c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a2c9c:
    // 0x2a2c9c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2c9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2ca0:
    // 0x2a2ca0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2ca4:
    // 0x2a2ca4: 0x40f809  jalr        $v0
label_2a2ca8:
    if (ctx->pc == 0x2A2CA8u) {
        ctx->pc = 0x2A2CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CA4u;
        // 0x2a2ca8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CACu;
        goto label_2a2cac;
    }
    ctx->pc = 0x2A2CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2CACu);
        ctx->pc = 0x2A2CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CA4u;
        // 0x2a2ca8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2CA4u, 0x2A2CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2CACu;
label_2a2cac:
    // 0x2a2cac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2cb0:
    // 0x2a2cb0: 0xc0a49c2  jal         func_292708
label_2a2cb4:
    if (ctx->pc == 0x2A2CB4u) {
        ctx->pc = 0x2A2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CB0u;
        // 0x2a2cb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CB8u;
        goto label_2a2cb8;
    }
    ctx->pc = 0x2A2CB0u;
    SET_GPR_U32(ctx, 31, 0x2A2CB8u);
    ctx->pc = 0x2A2CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2CB0u;
    // 0x2a2cb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x2A2CB0u, 0x2A2CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2CB8u;
label_2a2cb8:
    // 0x2a2cb8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2cbc:
    // 0x2a2cbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a2cc0:
    // 0x2a2cc0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a2cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a2cc4:
    // 0x2a2cc4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2cc8:
    // 0x2a2cc8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2ccc:
    // 0x2a2ccc: 0x40f809  jalr        $v0
label_2a2cd0:
    if (ctx->pc == 0x2A2CD0u) {
        ctx->pc = 0x2A2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CCCu;
        // 0x2a2cd0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CD4u;
        goto label_2a2cd4;
    }
    ctx->pc = 0x2A2CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2CD4u);
        ctx->pc = 0x2A2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CCCu;
        // 0x2a2cd0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2CCCu, 0x2A2CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2CD4u;
label_2a2cd4:
    // 0x2a2cd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2cd8:
    // 0x2a2cd8: 0xc0a49d6  jal         func_292758
label_2a2cdc:
    if (ctx->pc == 0x2A2CDCu) {
        ctx->pc = 0x2A2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CD8u;
        // 0x2a2cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CE0u;
        goto label_2a2ce0;
    }
    ctx->pc = 0x2A2CD8u;
    SET_GPR_U32(ctx, 31, 0x2A2CE0u);
    ctx->pc = 0x2A2CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2CD8u;
    // 0x2a2cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x2A2CD8u, 0x2A2CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2CE0u;
label_2a2ce0:
    // 0x2a2ce0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2ce4:
    // 0x2a2ce4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2a2ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a2ce8:
    // 0x2a2ce8: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2a2ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2a2cec:
    // 0x2a2cec: 0x100000eb  b           . + 4 + (0xEB << 2)
label_2a2cf0:
    if (ctx->pc == 0x2A2CF0u) {
        ctx->pc = 0x2A2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CECu;
        // 0x2a2cf0: 0xa6430024  sh          $v1, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CF4u;
        goto label_2a2cf4;
    }
    ctx->pc = 0x2A2CECu;
    {
        const bool branch_taken_0x2a2cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CECu;
        // 0x2a2cf0: 0xa6430024  sh          $v1, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2cec) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A2CF4u;
label_2a2cf4:
    // 0x2a2cf4: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x2a2cf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
label_2a2cf8:
    // 0x2a2cf8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2a2cfc:
    if (ctx->pc == 0x2A2CFCu) {
        ctx->pc = 0x2A2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CF8u;
        // 0x2a2cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D00u;
        goto label_2a2d00;
    }
    ctx->pc = 0x2A2CF8u;
    {
        const bool branch_taken_0x2a2cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CF8u;
        // 0x2a2cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2cf8) {
            ctx->pc = 0x2A2D10u;
            goto label_2a2d10;
        }
    }
    ctx->pc = 0x2A2D00u;
label_2a2d00:
    // 0x2a2d00: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_2a2d04:
    if (ctx->pc == 0x2A2D04u) {
        ctx->pc = 0x2A2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D00u;
        // 0x2a2d04: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D08u;
        goto label_2a2d08;
    }
    ctx->pc = 0x2A2D00u;
    {
        const bool branch_taken_0x2a2d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D00u;
        // 0x2a2d04: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d00) {
            ctx->pc = 0x2A2D6Cu;
            goto label_2a2d6c;
        }
    }
    ctx->pc = 0x2A2D08u;
label_2a2d08:
    // 0x2a2d08: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_2a2d0c:
    if (ctx->pc == 0x2A2D0Cu) {
        ctx->pc = 0x2A2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D08u;
        // 0x2a2d0c: 0xa6420024  sh          $v0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D10u;
        goto label_2a2d10;
    }
    ctx->pc = 0x2A2D08u;
    {
        const bool branch_taken_0x2a2d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D08u;
        // 0x2a2d0c: 0xa6420024  sh          $v0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d08) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A2D10u;
label_2a2d10:
    // 0x2a2d10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2d14:
    // 0x2a2d14: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2d14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2d18:
    // 0x2a2d18: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2d1c:
    // 0x2a2d1c: 0x40f809  jalr        $v0
label_2a2d20:
    if (ctx->pc == 0x2A2D20u) {
        ctx->pc = 0x2A2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D1Cu;
        // 0x2a2d20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D24u;
        goto label_2a2d24;
    }
    ctx->pc = 0x2A2D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2D24u);
        ctx->pc = 0x2A2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D1Cu;
        // 0x2a2d20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2D1Cu, 0x2A2D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2D24u;
label_2a2d24:
    // 0x2a2d24: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a2d24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a2d28:
    // 0x2a2d28: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a2d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a2d2c:
    // 0x2a2d2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a2d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d30:
    // 0x2a2d30: 0x26100bc8  addiu       $s0, $s0, 0xBC8
    ctx->pc = 0x2a2d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3016));
label_2a2d34:
    // 0x2a2d34: 0xc0cd4e4  jal         func_335390
label_2a2d38:
    if (ctx->pc == 0x2A2D38u) {
        ctx->pc = 0x2A2D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D34u;
        // 0x2a2d38: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D3Cu;
        goto label_2a2d3c;
    }
    ctx->pc = 0x2A2D34u;
    SET_GPR_U32(ctx, 31, 0x2A2D3Cu);
    ctx->pc = 0x2A2D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2D34u;
    // 0x2a2d38: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A2D34u, 0x2A2D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D3Cu;
label_2a2d3c:
    // 0x2a2d3c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2a2d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2a2d40:
    // 0x2a2d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d44:
    // 0x2a2d44: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x2a2d44u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a2d48:
    // 0x2a2d48: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_2a2d4c:
    if (ctx->pc == 0x2A2D4Cu) {
        ctx->pc = 0x2A2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D48u;
        // 0x2a2d4c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D50u;
        goto label_2a2d50;
    }
    ctx->pc = 0x2A2D48u;
    {
        const bool branch_taken_0x2a2d48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d48) {
            ctx->pc = 0x2A2D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2D48u;
            // 0x2a2d4c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2D50u;
            goto label_2a2d50;
        }
    }
    ctx->pc = 0x2A2D50u;
label_2a2d50:
    // 0x2a2d50: 0x1810  mfhi        $v1
    ctx->pc = 0x2a2d50u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2a2d54:
    // 0x2a2d54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a2d58:
    // 0x2a2d58: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2a2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2a2d5c:
    // 0x2a2d5c: 0xc08e150  jal         func_238540
label_2a2d60:
    if (ctx->pc == 0x2A2D60u) {
        ctx->pc = 0x2A2D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D5Cu;
        // 0x2a2d60: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D64u;
        goto label_2a2d64;
    }
    ctx->pc = 0x2A2D5Cu;
    SET_GPR_U32(ctx, 31, 0x2A2D64u);
    ctx->pc = 0x2A2D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2D5Cu;
    // 0x2a2d60: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x2A2D5Cu, 0x2A2D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D64u;
label_2a2d64:
    // 0x2a2d64: 0x100000cc  b           . + 4 + (0xCC << 2)
label_2a2d68:
    if (ctx->pc == 0x2A2D68u) {
        ctx->pc = 0x2A2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D64u;
        // 0x2a2d68: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D6Cu;
        goto label_2a2d6c;
    }
    ctx->pc = 0x2A2D64u;
    {
        const bool branch_taken_0x2a2d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D64u;
        // 0x2a2d68: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d64) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A2D6Cu;
label_2a2d6c:
    // 0x2a2d6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2d70:
    // 0x2a2d70: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2d70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2d74:
    // 0x2a2d74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2d78:
    // 0x2a2d78: 0x40f809  jalr        $v0
label_2a2d7c:
    if (ctx->pc == 0x2A2D7Cu) {
        ctx->pc = 0x2A2D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D78u;
        // 0x2a2d7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D80u;
        goto label_2a2d80;
    }
    ctx->pc = 0x2A2D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2D80u);
        ctx->pc = 0x2A2D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D78u;
        // 0x2a2d7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2D78u, 0x2A2D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2D80u;
label_2a2d80:
    // 0x2a2d80: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a2d80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a2d84:
    // 0x2a2d84: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a2d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a2d88:
    // 0x2a2d88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a2d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d8c:
    // 0x2a2d8c: 0x26100bc0  addiu       $s0, $s0, 0xBC0
    ctx->pc = 0x2a2d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3008));
label_2a2d90:
    // 0x2a2d90: 0xc0cd4e4  jal         func_335390
label_2a2d94:
    if (ctx->pc == 0x2A2D94u) {
        ctx->pc = 0x2A2D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D90u;
        // 0x2a2d94: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D98u;
        goto label_2a2d98;
    }
    ctx->pc = 0x2A2D90u;
    SET_GPR_U32(ctx, 31, 0x2A2D98u);
    ctx->pc = 0x2A2D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2D90u;
    // 0x2a2d94: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A2D90u, 0x2A2D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D98u;
label_2a2d98:
    // 0x2a2d98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a2d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a2d9c:
    // 0x2a2d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2da0:
    // 0x2a2da0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a2da4:
    // 0x2a2da4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2a2da8:
    // 0x2a2da8: 0xc08e150  jal         func_238540
label_2a2dac:
    if (ctx->pc == 0x2A2DACu) {
        ctx->pc = 0x2A2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DA8u;
        // 0x2a2dac: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DB0u;
        goto label_2a2db0;
    }
    ctx->pc = 0x2A2DA8u;
    SET_GPR_U32(ctx, 31, 0x2A2DB0u);
    ctx->pc = 0x2A2DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2DA8u;
    // 0x2a2dac: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x2A2DA8u, 0x2A2DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2DB0u;
label_2a2db0:
    // 0x2a2db0: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_2a2db4:
    if (ctx->pc == 0x2A2DB4u) {
        ctx->pc = 0x2A2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DB0u;
        // 0x2a2db4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DB8u;
        goto label_2a2db8;
    }
    ctx->pc = 0x2A2DB0u;
    {
        const bool branch_taken_0x2a2db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DB0u;
        // 0x2a2db4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2db0) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A2DB8u;
label_2a2db8:
    // 0x2a2db8: 0x52600017  beql        $s3, $zero, . + 4 + (0x17 << 2)
label_2a2dbc:
    if (ctx->pc == 0x2A2DBCu) {
        ctx->pc = 0x2A2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DB8u;
        // 0x2a2dbc: 0x8e450034  lw          $a1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DC0u;
        goto label_2a2dc0;
    }
    ctx->pc = 0x2A2DB8u;
    {
        const bool branch_taken_0x2a2db8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2db8) {
            ctx->pc = 0x2A2DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2DB8u;
            // 0x2a2dbc: 0x8e450034  lw          $a1, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2E18u;
            goto label_2a2e18;
        }
    }
    ctx->pc = 0x2A2DC0u;
label_2a2dc0:
    // 0x2a2dc0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2dc4:
    // 0x2a2dc4: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a2dc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a2dc8:
    // 0x2a2dc8: 0x5c600013  bgtzl       $v1, . + 4 + (0x13 << 2)
label_2a2dcc:
    if (ctx->pc == 0x2A2DCCu) {
        ctx->pc = 0x2A2DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DC8u;
        // 0x2a2dcc: 0x8e450034  lw          $a1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DD0u;
        goto label_2a2dd0;
    }
    ctx->pc = 0x2A2DC8u;
    {
        const bool branch_taken_0x2a2dc8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2a2dc8) {
            ctx->pc = 0x2A2DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2DC8u;
            // 0x2a2dcc: 0x8e450034  lw          $a1, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2E18u;
            goto label_2a2e18;
        }
    }
    ctx->pc = 0x2A2DD0u;
label_2a2dd0:
    // 0x2a2dd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2dd4:
    // 0x2a2dd4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2dd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2dd8:
    // 0x2a2dd8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2ddc:
    // 0x2a2ddc: 0x40f809  jalr        $v0
label_2a2de0:
    if (ctx->pc == 0x2A2DE0u) {
        ctx->pc = 0x2A2DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DDCu;
        // 0x2a2de0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DE4u;
        goto label_2a2de4;
    }
    ctx->pc = 0x2A2DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2DE4u);
        ctx->pc = 0x2A2DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DDCu;
        // 0x2a2de0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2DDCu, 0x2A2DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2DE4u;
label_2a2de4:
    // 0x2a2de4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a2de8:
    // 0x2a2de8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a2de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2dec:
    // 0x2a2dec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2decu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2df0:
    // 0x2a2df0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2df4:
    // 0x2a2df4: 0x40f809  jalr        $v0
label_2a2df8:
    if (ctx->pc == 0x2A2DF8u) {
        ctx->pc = 0x2A2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DF4u;
        // 0x2a2df8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DFCu;
        goto label_2a2dfc;
    }
    ctx->pc = 0x2A2DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2DFCu);
        ctx->pc = 0x2A2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DF4u;
        // 0x2a2df8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2DF4u, 0x2A2DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2DFCu;
label_2a2dfc:
    // 0x2a2dfc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a2dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a2e00:
    // 0x2a2e00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a2e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a2e04:
    // 0x2a2e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2e08:
    // 0x2a2e08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a2e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2e0c:
    // 0x2a2e0c: 0xc0bf832  jal         func_2FE0C8
label_2a2e10:
    if (ctx->pc == 0x2A2E10u) {
        ctx->pc = 0x2A2E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E0Cu;
        // 0x2a2e10: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E14u;
        goto label_2a2e14;
    }
    ctx->pc = 0x2A2E0Cu;
    SET_GPR_U32(ctx, 31, 0x2A2E14u);
    ctx->pc = 0x2A2E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E0Cu;
    // 0x2a2e10: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0C8u, 0x2A2E0Cu, 0x2A2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E14u;
label_2a2e14:
    // 0x2a2e14: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x2a2e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2a2e18:
    // 0x2a2e18: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_2a2e1c:
    if (ctx->pc == 0x2A2E1Cu) {
        ctx->pc = 0x2A2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E18u;
        // 0x2a2e1c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E20u;
        goto label_2a2e20;
    }
    ctx->pc = 0x2A2E18u;
    {
        const bool branch_taken_0x2a2e18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E18u;
        // 0x2a2e1c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e18) {
            ctx->pc = 0x2A2E38u;
            goto label_2a2e38;
        }
    }
    ctx->pc = 0x2A2E20u;
label_2a2e20:
    // 0x2a2e20: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x2a2e20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
label_2a2e24:
    // 0x2a2e24: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x2a2e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2a2e28:
    // 0x2a2e28: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2a2e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a2e2c:
    // 0x2a2e2c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2a2e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a2e30:
    // 0x2a2e30: 0x1000008e  b           . + 4 + (0x8E << 2)
label_2a2e34:
    if (ctx->pc == 0x2A2E34u) {
        ctx->pc = 0x2A2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E30u;
        // 0x2a2e34: 0x8ca20048  lw          $v0, 0x48($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E38u;
        goto label_2a2e38;
    }
    ctx->pc = 0x2A2E30u;
    {
        const bool branch_taken_0x2a2e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E30u;
        // 0x2a2e34: 0x8ca20048  lw          $v0, 0x48($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e30) {
            ctx->pc = 0x2A306Cu;
            goto label_2a306c;
        }
    }
    ctx->pc = 0x2A2E38u;
label_2a2e38:
    // 0x2a2e38: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2a2e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a2e3c:
    // 0x2a2e3c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2a2e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a2e40:
    // 0x2a2e40: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2a2e40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a2e44:
    // 0x2a2e44: 0x10600095  beqz        $v1, . + 4 + (0x95 << 2)
label_2a2e48:
    if (ctx->pc == 0x2A2E48u) {
        ctx->pc = 0x2A2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E44u;
        // 0x2a2e48: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E4Cu;
        goto label_2a2e4c;
    }
    ctx->pc = 0x2A2E44u;
    {
        const bool branch_taken_0x2a2e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E44u;
        // 0x2a2e48: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e44) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A2E4Cu;
label_2a2e4c:
    // 0x2a2e4c: 0x10000093  b           . + 4 + (0x93 << 2)
label_2a2e50:
    if (ctx->pc == 0x2A2E50u) {
        ctx->pc = 0x2A2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E4Cu;
        // 0x2a2e50: 0xa6420024  sh          $v0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E54u;
        goto label_2a2e54;
    }
    ctx->pc = 0x2A2E4Cu;
    {
        const bool branch_taken_0x2a2e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E4Cu;
        // 0x2a2e50: 0xa6420024  sh          $v0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e4c) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A2E54u;
label_2a2e54:
    // 0x2a2e54: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2e58:
    // 0x2a2e58: 0xc089bfc  jal         func_226FF0
label_2a2e5c:
    if (ctx->pc == 0x2A2E5Cu) {
        ctx->pc = 0x2A2E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E58u;
        // 0x2a2e5c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E60u;
        goto label_2a2e60;
    }
    ctx->pc = 0x2A2E58u;
    SET_GPR_U32(ctx, 31, 0x2A2E60u);
    ctx->pc = 0x2A2E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E58u;
    // 0x2a2e5c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2A2E58u, 0x2A2E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E60u;
label_2a2e60:
    // 0x2a2e60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2a2e64:
    if (ctx->pc == 0x2A2E64u) {
        ctx->pc = 0x2A2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E60u;
        // 0x2a2e64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E68u;
        goto label_2a2e68;
    }
    ctx->pc = 0x2A2E60u;
    {
        const bool branch_taken_0x2a2e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E60u;
        // 0x2a2e64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e60) {
            ctx->pc = 0x2A2E8Cu;
            goto label_2a2e8c;
        }
    }
    ctx->pc = 0x2A2E68u;
label_2a2e68:
    // 0x2a2e68: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a2e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2e6c:
    // 0x2a2e6c: 0xc0a33f8  jal         func_28CFE0
label_2a2e70:
    if (ctx->pc == 0x2A2E70u) {
        ctx->pc = 0x2A2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E6Cu;
        // 0x2a2e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E74u;
        goto label_2a2e74;
    }
    ctx->pc = 0x2A2E6Cu;
    SET_GPR_U32(ctx, 31, 0x2A2E74u);
    ctx->pc = 0x2A2E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E6Cu;
    // 0x2a2e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2A2E6Cu, 0x2A2E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E74u;
label_2a2e74:
    // 0x2a2e74: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2e78:
    // 0x2a2e78: 0xc0874fa  jal         func_21D3E8
label_2a2e7c:
    if (ctx->pc == 0x2A2E7Cu) {
        ctx->pc = 0x2A2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E78u;
        // 0x2a2e7c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E80u;
        goto label_2a2e80;
    }
    ctx->pc = 0x2A2E78u;
    SET_GPR_U32(ctx, 31, 0x2A2E80u);
    ctx->pc = 0x2A2E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E78u;
    // 0x2a2e7c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2A2E78u, 0x2A2E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E80u;
label_2a2e80:
    // 0x2a2e80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2e84:
    // 0x2a2e84: 0xc051fbc  jal         func_147EF0
label_2a2e88:
    if (ctx->pc == 0x2A2E88u) {
        ctx->pc = 0x2A2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E84u;
        // 0x2a2e88: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E8Cu;
        goto label_2a2e8c;
    }
    ctx->pc = 0x2A2E84u;
    SET_GPR_U32(ctx, 31, 0x2A2E8Cu);
    ctx->pc = 0x2A2E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E84u;
    // 0x2a2e88: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2A2E84u, 0x2A2E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E8Cu;
label_2a2e8c:
    // 0x2a2e8c: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x2a2e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
label_2a2e90:
    // 0x2a2e90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a2e94:
    // 0x2a2e94: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x2a2e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2a2e98:
    // 0x2a2e98: 0x8c46b734  lw          $a2, -0x48CC($v0)
    ctx->pc = 0x2a2e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a2e9c:
    // 0x2a2e9c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2a2e9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a2ea0:
    // 0x2a2ea0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2a2ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a2ea4:
    // 0x2a2ea4: 0x8cc20048  lw          $v0, 0x48($a2)
    ctx->pc = 0x2a2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
label_2a2ea8:
    // 0x2a2ea8: 0x10000070  b           . + 4 + (0x70 << 2)
label_2a2eac:
    if (ctx->pc == 0x2A2EACu) {
        ctx->pc = 0x2A2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EA8u;
        // 0x2a2eac: 0xa6450024  sh          $a1, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2EB0u;
        goto label_2a2eb0;
    }
    ctx->pc = 0x2A2EA8u;
    {
        const bool branch_taken_0x2a2ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EA8u;
        // 0x2a2eac: 0xa6450024  sh          $a1, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ea8) {
            ctx->pc = 0x2A306Cu;
            goto label_2a306c;
        }
    }
    ctx->pc = 0x2A2EB0u;
label_2a2eb0:
    // 0x2a2eb0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a2eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a2eb4:
    // 0x2a2eb4: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2a2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2a2eb8:
    // 0x2a2eb8: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2a2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a2ebc:
    // 0x2a2ebc: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a2ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a2ec0:
    // 0x2a2ec0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2a2ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a2ec4:
    // 0x2a2ec4: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_2a2ec8:
    if (ctx->pc == 0x2A2EC8u) {
        ctx->pc = 0x2A2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EC4u;
        // 0x2a2ec8: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2ECCu;
        goto label_2a2ecc;
    }
    ctx->pc = 0x2A2EC4u;
    {
        const bool branch_taken_0x2a2ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EC4u;
        // 0x2a2ec8: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ec4) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A2ECCu;
label_2a2ecc:
    // 0x2a2ecc: 0x9642003c  lhu         $v0, 0x3C($s2)
    ctx->pc = 0x2a2eccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_2a2ed0:
    // 0x2a2ed0: 0xa6430024  sh          $v1, 0x24($s2)
    ctx->pc = 0x2a2ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 3));
label_2a2ed4:
    // 0x2a2ed4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a2ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a2ed8:
    // 0x2a2ed8: 0x10000070  b           . + 4 + (0x70 << 2)
label_2a2edc:
    if (ctx->pc == 0x2A2EDCu) {
        ctx->pc = 0x2A2EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2ED8u;
        // 0x2a2edc: 0xa642003c  sh          $v0, 0x3C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 60), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2EE0u;
        goto label_2a2ee0;
    }
    ctx->pc = 0x2A2ED8u;
    {
        const bool branch_taken_0x2a2ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2ED8u;
        // 0x2a2edc: 0xa642003c  sh          $v0, 0x3C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 60), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ed8) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A2EE0u;
label_2a2ee0:
    // 0x2a2ee0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2ee4:
    // 0x2a2ee4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a2ee8:
    // 0x2a2ee8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a2ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a2eec:
    // 0x2a2eec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2eecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2ef0:
    // 0x2a2ef0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2ef4:
    // 0x2a2ef4: 0x40f809  jalr        $v0
label_2a2ef8:
    if (ctx->pc == 0x2A2EF8u) {
        ctx->pc = 0x2A2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EF4u;
        // 0x2a2ef8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2EFCu;
        goto label_2a2efc;
    }
    ctx->pc = 0x2A2EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2EFCu);
        ctx->pc = 0x2A2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EF4u;
        // 0x2a2ef8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2EF4u, 0x2A2EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2EFCu;
label_2a2efc:
    // 0x2a2efc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2f00:
    // 0x2a2f00: 0xc0a49c2  jal         func_292708
label_2a2f04:
    if (ctx->pc == 0x2A2F04u) {
        ctx->pc = 0x2A2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F00u;
        // 0x2a2f04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F08u;
        goto label_2a2f08;
    }
    ctx->pc = 0x2A2F00u;
    SET_GPR_U32(ctx, 31, 0x2A2F08u);
    ctx->pc = 0x2A2F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F00u;
    // 0x2a2f04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292708u, 0x2A2F00u, 0x2A2F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F08u;
label_2a2f08:
    // 0x2a2f08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a2f0c:
    // 0x2a2f0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a2f10:
    // 0x2a2f10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a2f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a2f14:
    // 0x2a2f14: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a2f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a2f18:
    // 0x2a2f18: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a2f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a2f1c:
    // 0x2a2f1c: 0x40f809  jalr        $v0
label_2a2f20:
    if (ctx->pc == 0x2A2F20u) {
        ctx->pc = 0x2A2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F1Cu;
        // 0x2a2f20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F24u;
        goto label_2a2f24;
    }
    ctx->pc = 0x2A2F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2F24u);
        ctx->pc = 0x2A2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F1Cu;
        // 0x2a2f20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2F1Cu, 0x2A2F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2F24u;
label_2a2f24:
    // 0x2a2f24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2f28:
    // 0x2a2f28: 0xc0a49d6  jal         func_292758
label_2a2f2c:
    if (ctx->pc == 0x2A2F2Cu) {
        ctx->pc = 0x2A2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F28u;
        // 0x2a2f2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F30u;
        goto label_2a2f30;
    }
    ctx->pc = 0x2A2F28u;
    SET_GPR_U32(ctx, 31, 0x2A2F30u);
    ctx->pc = 0x2A2F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F28u;
    // 0x2a2f2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292758u, 0x2A2F28u, 0x2A2F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F30u;
label_2a2f30:
    // 0x2a2f30: 0x10000059  b           . + 4 + (0x59 << 2)
label_2a2f34:
    if (ctx->pc == 0x2A2F34u) {
        ctx->pc = 0x2A2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F30u;
        // 0x2a2f34: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F38u;
        goto label_2a2f38;
    }
    ctx->pc = 0x2A2F30u;
    {
        const bool branch_taken_0x2a2f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F30u;
        // 0x2a2f34: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f30) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A2F38u;
label_2a2f38:
    // 0x2a2f38: 0xc0a36c8  jal         func_28DB20
label_2a2f3c:
    if (ctx->pc == 0x2A2F3Cu) {
        ctx->pc = 0x2A2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F38u;
        // 0x2a2f3c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F40u;
        goto label_2a2f40;
    }
    ctx->pc = 0x2A2F38u;
    SET_GPR_U32(ctx, 31, 0x2A2F40u);
    ctx->pc = 0x2A2F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F38u;
    // 0x2a2f3c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2A2F38u, 0x2A2F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F40u;
label_2a2f40:
    // 0x2a2f40: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2a2f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2a2f44:
    // 0x2a2f44: 0x240500b5  addiu       $a1, $zero, 0xB5
    ctx->pc = 0x2a2f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
label_2a2f48:
    // 0x2a2f48: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x2a2f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2a2f4c:
    // 0x2a2f4c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a2f50:
    // 0x2a2f50: 0xa6450024  sh          $a1, 0x24($s2)
    ctx->pc = 0x2a2f50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 5));
label_2a2f54:
    // 0x2a2f54: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x2a2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
label_2a2f58:
    // 0x2a2f58: 0x10000050  b           . + 4 + (0x50 << 2)
label_2a2f5c:
    if (ctx->pc == 0x2A2F5Cu) {
        ctx->pc = 0x2A2F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F58u;
        // 0x2a2f5c: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F60u;
        goto label_2a2f60;
    }
    ctx->pc = 0x2A2F58u;
    {
        const bool branch_taken_0x2a2f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F58u;
        // 0x2a2f5c: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f58) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A2F60u;
label_2a2f60:
    // 0x2a2f60: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2a2f60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2a2f64:
    // 0x2a2f64: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2a2f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2a2f68:
    // 0x2a2f68: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2a2f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2a2f6c:
    // 0x2a2f6c: 0x24a52bb8  addiu       $a1, $a1, 0x2BB8
    ctx->pc = 0x2a2f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11192));
label_2a2f70:
    // 0x2a2f70: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a2f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a2f74:
    // 0x2a2f74: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2a2f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2a2f78:
    // 0x2a2f78: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2a2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2a2f7c:
    // 0x2a2f7c: 0x40f809  jalr        $v0
label_2a2f80:
    if (ctx->pc == 0x2A2F80u) {
        ctx->pc = 0x2A2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F7Cu;
        // 0x2a2f80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F84u;
        goto label_2a2f84;
    }
    ctx->pc = 0x2A2F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2F84u);
        ctx->pc = 0x2A2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F7Cu;
        // 0x2a2f80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2F7Cu, 0x2A2F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2F84u;
label_2a2f84:
    // 0x2a2f84: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_2a2f88:
    if (ctx->pc == 0x2A2F88u) {
        ctx->pc = 0x2A2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F84u;
        // 0x2a2f88: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2F8Cu;
        goto label_2a2f8c;
    }
    ctx->pc = 0x2A2F84u;
    {
        const bool branch_taken_0x2a2f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2F84u;
        // 0x2a2f88: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2f84) {
            ctx->pc = 0x2A3094u;
            goto label_2a3094;
        }
    }
    ctx->pc = 0x2A2F8Cu;
label_2a2f8c:
    // 0x2a2f8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2f90:
    // 0x2a2f90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a2f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2f94:
    // 0x2a2f94: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2a2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2a2f98:
    // 0x2a2f98: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2a2f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2a2f9c:
    // 0x2a2f9c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2a2f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2a2fa0:
    // 0x2a2fa0: 0x60f809  jalr        $v1
label_2a2fa4:
    if (ctx->pc == 0x2A2FA4u) {
        ctx->pc = 0x2A2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FA0u;
        // 0x2a2fa4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FA8u;
        goto label_2a2fa8;
    }
    ctx->pc = 0x2A2FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A2FA8u);
        ctx->pc = 0x2A2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FA0u;
        // 0x2a2fa4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2FA0u, 0x2A2FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2FA8u;
label_2a2fa8:
    // 0x2a2fa8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2a2fac:
    if (ctx->pc == 0x2A2FACu) {
        ctx->pc = 0x2A2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FA8u;
        // 0x2a2fac: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FB0u;
        goto label_2a2fb0;
    }
    ctx->pc = 0x2A2FA8u;
    {
        const bool branch_taken_0x2a2fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FA8u;
        // 0x2a2fac: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2fa8) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A2FB0u;
label_2a2fb0:
    // 0x2a2fb0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a2fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a2fb4:
    // 0x2a2fb4: 0xc0cd4e4  jal         func_335390
label_2a2fb8:
    if (ctx->pc == 0x2A2FB8u) {
        ctx->pc = 0x2A2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FB4u;
        // 0x2a2fb8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FBCu;
        goto label_2a2fbc;
    }
    ctx->pc = 0x2A2FB4u;
    SET_GPR_U32(ctx, 31, 0x2A2FBCu);
    ctx->pc = 0x2A2FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2FB4u;
    // 0x2a2fb8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A2FB4u, 0x2A2FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2FBCu;
label_2a2fbc:
    // 0x2a2fbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a2fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a2fc0:
    // 0x2a2fc0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_2a2fc4:
    if (ctx->pc == 0x2A2FC4u) {
        ctx->pc = 0x2A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FC0u;
        // 0x2a2fc4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FC8u;
        goto label_2a2fc8;
    }
    ctx->pc = 0x2A2FC0u;
    {
        const bool branch_taken_0x2a2fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FC0u;
        // 0x2a2fc4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2fc0) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A2FC8u;
label_2a2fc8:
    // 0x2a2fc8: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2a2fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2a2fcc:
    // 0x2a2fcc: 0xc0a7e74  jal         func_29F9D0
label_2a2fd0:
    if (ctx->pc == 0x2A2FD0u) {
        ctx->pc = 0x2A2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FCCu;
        // 0x2a2fd0: 0x86450026  lh          $a1, 0x26($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2FD4u;
        goto label_2a2fd4;
    }
    ctx->pc = 0x2A2FCCu;
    SET_GPR_U32(ctx, 31, 0x2A2FD4u);
    ctx->pc = 0x2A2FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2FCCu;
    // 0x2a2fd0: 0x86450026  lh          $a1, 0x26($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F9D0u, 0x2A2FCCu, 0x2A2FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2FD4u;
label_2a2fd4:
    // 0x2a2fd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a2fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a2fd8:
    // 0x2a2fd8: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2a2fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2a2fdc:
    // 0x2a2fdc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2a2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a2fe0:
    // 0x2a2fe0: 0xa6420028  sh          $v0, 0x28($s2)
    ctx->pc = 0x2a2fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
label_2a2fe4:
    // 0x2a2fe4: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x2a2fe4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
label_2a2fe8:
    // 0x2a2fe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a2fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2a2fec:
    // 0x2a2fec: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2a2fecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2a2ff0:
    // 0x2a2ff0: 0xa6420024  sh          $v0, 0x24($s2)
    ctx->pc = 0x2a2ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
label_2a2ff4:
    // 0x2a2ff4: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x2a2ff4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2a2ff8:
    // 0x2a2ff8: 0x10000026  b           . + 4 + (0x26 << 2)
label_2a2ffc:
    if (ctx->pc == 0x2A2FFCu) {
        ctx->pc = 0x2A2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FF8u;
        // 0x2a2ffc: 0xa6440026  sh          $a0, 0x26($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3000u;
        goto label_2a3000;
    }
    ctx->pc = 0x2A2FF8u;
    {
        const bool branch_taken_0x2a2ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2FF8u;
        // 0x2a2ffc: 0xa6440026  sh          $a0, 0x26($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ff8) {
            ctx->pc = 0x2A3094u;
            goto label_2a3094;
        }
    }
    ctx->pc = 0x2A3000u;
label_2a3000:
    // 0x2a3000: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x2a3000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
label_2a3004:
    // 0x2a3004: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2a3008:
    if (ctx->pc == 0x2A3008u) {
        ctx->pc = 0x2A3008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3004u;
        // 0x2a3008: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A300Cu;
        goto label_2a300c;
    }
    ctx->pc = 0x2A3004u;
    {
        const bool branch_taken_0x2a3004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3004u;
        // 0x2a3008: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3004) {
            ctx->pc = 0x2A301Cu;
            goto label_2a301c;
        }
    }
    ctx->pc = 0x2A300Cu;
label_2a300c:
    // 0x2a300c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2a3010:
    if (ctx->pc == 0x2A3010u) {
        ctx->pc = 0x2A3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A300Cu;
        // 0x2a3010: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3014u;
        goto label_2a3014;
    }
    ctx->pc = 0x2A300Cu;
    {
        const bool branch_taken_0x2a300c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A300Cu;
        // 0x2a3010: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a300c) {
            ctx->pc = 0x2A3034u;
            goto label_2a3034;
        }
    }
    ctx->pc = 0x2A3014u;
label_2a3014:
    // 0x2a3014: 0x10000021  b           . + 4 + (0x21 << 2)
label_2a3018:
    if (ctx->pc == 0x2A3018u) {
        ctx->pc = 0x2A3018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3014u;
        // 0x2a3018: 0xa6420024  sh          $v0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A301Cu;
        goto label_2a301c;
    }
    ctx->pc = 0x2A3014u;
    {
        const bool branch_taken_0x2a3014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3014u;
        // 0x2a3018: 0xa6420024  sh          $v0, 0x24($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3014) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A301Cu;
label_2a301c:
    // 0x2a301c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a301cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a3020:
    // 0x2a3020: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a3020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a3024:
    // 0x2a3024: 0xc094d7c  jal         func_2535F0
label_2a3028:
    if (ctx->pc == 0x2A3028u) {
        ctx->pc = 0x2A3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3024u;
        // 0x2a3028: 0x24060198  addiu       $a2, $zero, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A302Cu;
        goto label_2a302c;
    }
    ctx->pc = 0x2A3024u;
    SET_GPR_U32(ctx, 31, 0x2A302Cu);
    ctx->pc = 0x2A3028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3024u;
    // 0x2a3028: 0x24060198  addiu       $a2, $zero, 0x198 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2A3024u, 0x2A302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A302Cu;
label_2a302c:
    // 0x2a302c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2a3030:
    if (ctx->pc == 0x2A3030u) {
        ctx->pc = 0x2A3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A302Cu;
        // 0x2a3030: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3034u;
        goto label_2a3034;
    }
    ctx->pc = 0x2A302Cu;
    {
        const bool branch_taken_0x2a302c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A302Cu;
        // 0x2a3030: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a302c) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A3034u;
label_2a3034:
    // 0x2a3034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a3038:
    // 0x2a3038: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a3038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a303c:
    // 0x2a303c: 0xc094d7c  jal         func_2535F0
label_2a3040:
    if (ctx->pc == 0x2A3040u) {
        ctx->pc = 0x2A3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A303Cu;
        // 0x2a3040: 0x24060203  addiu       $a2, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3044u;
        goto label_2a3044;
    }
    ctx->pc = 0x2A303Cu;
    SET_GPR_U32(ctx, 31, 0x2A3044u);
    ctx->pc = 0x2A3040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A303Cu;
    // 0x2a3040: 0x24060203  addiu       $a2, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2A303Cu, 0x2A3044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3044u;
label_2a3044:
    // 0x2a3044: 0x10000014  b           . + 4 + (0x14 << 2)
label_2a3048:
    if (ctx->pc == 0x2A3048u) {
        ctx->pc = 0x2A3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3044u;
        // 0x2a3048: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A304Cu;
        goto label_2a304c;
    }
    ctx->pc = 0x2A3044u;
    {
        const bool branch_taken_0x2a3044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3044u;
        // 0x2a3048: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3044) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A304Cu;
label_2a304c:
    // 0x2a304c: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x2a304cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
label_2a3050:
    // 0x2a3050: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a3050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a3054:
    // 0x2a3054: 0x8ca4b734  lw          $a0, -0x48CC($a1)
    ctx->pc = 0x2a3054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a3058:
    // 0x2a3058: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x2a3058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2a305c:
    // 0x2a305c: 0x240600c7  addiu       $a2, $zero, 0xC7
    ctx->pc = 0x2a305cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
label_2a3060:
    // 0x2a3060: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2a3060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a3064:
    // 0x2a3064: 0xa6460024  sh          $a2, 0x24($s2)
    ctx->pc = 0x2a3064u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 6));
label_2a3068:
    // 0x2a3068: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2a3068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a306c:
    // 0x2a306c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a3070:
    // 0x2a3070: 0x1000000a  b           . + 4 + (0xA << 2)
label_2a3074:
    if (ctx->pc == 0x2A3074u) {
        ctx->pc = 0x2A3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3070u;
        // 0x2a3074: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3078u;
        goto label_2a3078;
    }
    ctx->pc = 0x2A3070u;
    {
        const bool branch_taken_0x2a3070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3070u;
        // 0x2a3074: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3070) {
            ctx->pc = 0x2A309Cu;
            return;
        }
    }
    ctx->pc = 0x2A3078u;
label_2a3078:
    // 0x2a3078: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a3078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a307c:
    // 0x2a307c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2a307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2a3080:
    // 0x2a3080: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2a3080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a3084:
    // 0x2a3084: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a3084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a3088:
    // 0x2a3088: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2a3088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2a308c:
    // 0x2a308c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a3090:
    if (ctx->pc == 0x2A3090u) {
        ctx->pc = 0x2A3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A308Cu;
        // 0x2a3090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3094u;
        goto label_2a3094;
    }
    ctx->pc = 0x2A308Cu;
    {
        const bool branch_taken_0x2a308c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A308Cu;
        // 0x2a3090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a308c) {
            ctx->pc = 0x2A30A0u;
            return;
        }
    }
    ctx->pc = 0x2A3094u;
label_2a3094:
    // 0x2a3094: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2a3094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a3098:
    // 0x2a3098: 0xa6420024  sh          $v0, 0x24($s2)
    ctx->pc = 0x2a3098u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2a309cu;
}
