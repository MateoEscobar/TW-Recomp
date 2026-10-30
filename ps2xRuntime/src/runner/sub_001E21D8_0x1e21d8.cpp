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

// Function: sub_001E21D8
// Address: 0x1e21d8 - 0x1e2e20
void sub_001E21D8_0x1e21d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E21D8_0x1e21d8");
#endif

    switch (ctx->pc) {
        case 0x1e21d8u: goto label_1e21d8;
        case 0x1e21dcu: goto label_1e21dc;
        case 0x1e21e0u: goto label_1e21e0;
        case 0x1e21e4u: goto label_1e21e4;
        case 0x1e21e8u: goto label_1e21e8;
        case 0x1e21ecu: goto label_1e21ec;
        case 0x1e21f0u: goto label_1e21f0;
        case 0x1e21f4u: goto label_1e21f4;
        case 0x1e21f8u: goto label_1e21f8;
        case 0x1e21fcu: goto label_1e21fc;
        case 0x1e2200u: goto label_1e2200;
        case 0x1e2204u: goto label_1e2204;
        case 0x1e2208u: goto label_1e2208;
        case 0x1e220cu: goto label_1e220c;
        case 0x1e2210u: goto label_1e2210;
        case 0x1e2214u: goto label_1e2214;
        case 0x1e2218u: goto label_1e2218;
        case 0x1e221cu: goto label_1e221c;
        case 0x1e2220u: goto label_1e2220;
        case 0x1e2224u: goto label_1e2224;
        case 0x1e2228u: goto label_1e2228;
        case 0x1e222cu: goto label_1e222c;
        case 0x1e2230u: goto label_1e2230;
        case 0x1e2234u: goto label_1e2234;
        case 0x1e2238u: goto label_1e2238;
        case 0x1e223cu: goto label_1e223c;
        case 0x1e2240u: goto label_1e2240;
        case 0x1e2244u: goto label_1e2244;
        case 0x1e2248u: goto label_1e2248;
        case 0x1e224cu: goto label_1e224c;
        case 0x1e2250u: goto label_1e2250;
        case 0x1e2254u: goto label_1e2254;
        case 0x1e2258u: goto label_1e2258;
        case 0x1e225cu: goto label_1e225c;
        case 0x1e2260u: goto label_1e2260;
        case 0x1e2264u: goto label_1e2264;
        case 0x1e2268u: goto label_1e2268;
        case 0x1e226cu: goto label_1e226c;
        case 0x1e2270u: goto label_1e2270;
        case 0x1e2274u: goto label_1e2274;
        case 0x1e2278u: goto label_1e2278;
        case 0x1e227cu: goto label_1e227c;
        case 0x1e2280u: goto label_1e2280;
        case 0x1e2284u: goto label_1e2284;
        case 0x1e2288u: goto label_1e2288;
        case 0x1e228cu: goto label_1e228c;
        case 0x1e2290u: goto label_1e2290;
        case 0x1e2294u: goto label_1e2294;
        case 0x1e2298u: goto label_1e2298;
        case 0x1e229cu: goto label_1e229c;
        case 0x1e22a0u: goto label_1e22a0;
        case 0x1e22a4u: goto label_1e22a4;
        case 0x1e22a8u: goto label_1e22a8;
        case 0x1e22acu: goto label_1e22ac;
        case 0x1e22b0u: goto label_1e22b0;
        case 0x1e22b4u: goto label_1e22b4;
        case 0x1e22b8u: goto label_1e22b8;
        case 0x1e22bcu: goto label_1e22bc;
        case 0x1e22c0u: goto label_1e22c0;
        case 0x1e22c4u: goto label_1e22c4;
        case 0x1e22c8u: goto label_1e22c8;
        case 0x1e22ccu: goto label_1e22cc;
        case 0x1e22d0u: goto label_1e22d0;
        case 0x1e22d4u: goto label_1e22d4;
        case 0x1e22d8u: goto label_1e22d8;
        case 0x1e22dcu: goto label_1e22dc;
        case 0x1e22e0u: goto label_1e22e0;
        case 0x1e22e4u: goto label_1e22e4;
        case 0x1e22e8u: goto label_1e22e8;
        case 0x1e22ecu: goto label_1e22ec;
        case 0x1e22f0u: goto label_1e22f0;
        case 0x1e22f4u: goto label_1e22f4;
        case 0x1e22f8u: goto label_1e22f8;
        case 0x1e22fcu: goto label_1e22fc;
        case 0x1e2300u: goto label_1e2300;
        case 0x1e2304u: goto label_1e2304;
        case 0x1e2308u: goto label_1e2308;
        case 0x1e230cu: goto label_1e230c;
        case 0x1e2310u: goto label_1e2310;
        case 0x1e2314u: goto label_1e2314;
        case 0x1e2318u: goto label_1e2318;
        case 0x1e231cu: goto label_1e231c;
        case 0x1e2320u: goto label_1e2320;
        case 0x1e2324u: goto label_1e2324;
        case 0x1e2328u: goto label_1e2328;
        case 0x1e232cu: goto label_1e232c;
        case 0x1e2330u: goto label_1e2330;
        case 0x1e2334u: goto label_1e2334;
        case 0x1e2338u: goto label_1e2338;
        case 0x1e233cu: goto label_1e233c;
        case 0x1e2340u: goto label_1e2340;
        case 0x1e2344u: goto label_1e2344;
        case 0x1e2348u: goto label_1e2348;
        case 0x1e234cu: goto label_1e234c;
        case 0x1e2350u: goto label_1e2350;
        case 0x1e2354u: goto label_1e2354;
        case 0x1e2358u: goto label_1e2358;
        case 0x1e235cu: goto label_1e235c;
        case 0x1e2360u: goto label_1e2360;
        case 0x1e2364u: goto label_1e2364;
        case 0x1e2368u: goto label_1e2368;
        case 0x1e236cu: goto label_1e236c;
        case 0x1e2370u: goto label_1e2370;
        case 0x1e2374u: goto label_1e2374;
        case 0x1e2378u: goto label_1e2378;
        case 0x1e237cu: goto label_1e237c;
        case 0x1e2380u: goto label_1e2380;
        case 0x1e2384u: goto label_1e2384;
        case 0x1e2388u: goto label_1e2388;
        case 0x1e238cu: goto label_1e238c;
        case 0x1e2390u: goto label_1e2390;
        case 0x1e2394u: goto label_1e2394;
        case 0x1e2398u: goto label_1e2398;
        case 0x1e239cu: goto label_1e239c;
        case 0x1e23a0u: goto label_1e23a0;
        case 0x1e23a4u: goto label_1e23a4;
        case 0x1e23a8u: goto label_1e23a8;
        case 0x1e23acu: goto label_1e23ac;
        case 0x1e23b0u: goto label_1e23b0;
        case 0x1e23b4u: goto label_1e23b4;
        case 0x1e23b8u: goto label_1e23b8;
        case 0x1e23bcu: goto label_1e23bc;
        case 0x1e23c0u: goto label_1e23c0;
        case 0x1e23c4u: goto label_1e23c4;
        case 0x1e23c8u: goto label_1e23c8;
        case 0x1e23ccu: goto label_1e23cc;
        case 0x1e23d0u: goto label_1e23d0;
        case 0x1e23d4u: goto label_1e23d4;
        case 0x1e23d8u: goto label_1e23d8;
        case 0x1e23dcu: goto label_1e23dc;
        case 0x1e23e0u: goto label_1e23e0;
        case 0x1e23e4u: goto label_1e23e4;
        case 0x1e23e8u: goto label_1e23e8;
        case 0x1e23ecu: goto label_1e23ec;
        case 0x1e23f0u: goto label_1e23f0;
        case 0x1e23f4u: goto label_1e23f4;
        case 0x1e23f8u: goto label_1e23f8;
        case 0x1e23fcu: goto label_1e23fc;
        case 0x1e2400u: goto label_1e2400;
        case 0x1e2404u: goto label_1e2404;
        case 0x1e2408u: goto label_1e2408;
        case 0x1e240cu: goto label_1e240c;
        case 0x1e2410u: goto label_1e2410;
        case 0x1e2414u: goto label_1e2414;
        case 0x1e2418u: goto label_1e2418;
        case 0x1e241cu: goto label_1e241c;
        case 0x1e2420u: goto label_1e2420;
        case 0x1e2424u: goto label_1e2424;
        case 0x1e2428u: goto label_1e2428;
        case 0x1e242cu: goto label_1e242c;
        case 0x1e2430u: goto label_1e2430;
        case 0x1e2434u: goto label_1e2434;
        case 0x1e2438u: goto label_1e2438;
        case 0x1e243cu: goto label_1e243c;
        case 0x1e2440u: goto label_1e2440;
        case 0x1e2444u: goto label_1e2444;
        case 0x1e2448u: goto label_1e2448;
        case 0x1e244cu: goto label_1e244c;
        case 0x1e2450u: goto label_1e2450;
        case 0x1e2454u: goto label_1e2454;
        case 0x1e2458u: goto label_1e2458;
        case 0x1e245cu: goto label_1e245c;
        case 0x1e2460u: goto label_1e2460;
        case 0x1e2464u: goto label_1e2464;
        case 0x1e2468u: goto label_1e2468;
        case 0x1e246cu: goto label_1e246c;
        case 0x1e2470u: goto label_1e2470;
        case 0x1e2474u: goto label_1e2474;
        case 0x1e2478u: goto label_1e2478;
        case 0x1e247cu: goto label_1e247c;
        case 0x1e2480u: goto label_1e2480;
        case 0x1e2484u: goto label_1e2484;
        case 0x1e2488u: goto label_1e2488;
        case 0x1e248cu: goto label_1e248c;
        case 0x1e2490u: goto label_1e2490;
        case 0x1e2494u: goto label_1e2494;
        case 0x1e2498u: goto label_1e2498;
        case 0x1e249cu: goto label_1e249c;
        case 0x1e24a0u: goto label_1e24a0;
        case 0x1e24a4u: goto label_1e24a4;
        case 0x1e24a8u: goto label_1e24a8;
        case 0x1e24acu: goto label_1e24ac;
        case 0x1e24b0u: goto label_1e24b0;
        case 0x1e24b4u: goto label_1e24b4;
        case 0x1e24b8u: goto label_1e24b8;
        case 0x1e24bcu: goto label_1e24bc;
        case 0x1e24c0u: goto label_1e24c0;
        case 0x1e24c4u: goto label_1e24c4;
        case 0x1e24c8u: goto label_1e24c8;
        case 0x1e24ccu: goto label_1e24cc;
        case 0x1e24d0u: goto label_1e24d0;
        case 0x1e24d4u: goto label_1e24d4;
        case 0x1e24d8u: goto label_1e24d8;
        case 0x1e24dcu: goto label_1e24dc;
        case 0x1e24e0u: goto label_1e24e0;
        case 0x1e24e4u: goto label_1e24e4;
        case 0x1e24e8u: goto label_1e24e8;
        case 0x1e24ecu: goto label_1e24ec;
        case 0x1e24f0u: goto label_1e24f0;
        case 0x1e24f4u: goto label_1e24f4;
        case 0x1e24f8u: goto label_1e24f8;
        case 0x1e24fcu: goto label_1e24fc;
        case 0x1e2500u: goto label_1e2500;
        case 0x1e2504u: goto label_1e2504;
        case 0x1e2508u: goto label_1e2508;
        case 0x1e250cu: goto label_1e250c;
        case 0x1e2510u: goto label_1e2510;
        case 0x1e2514u: goto label_1e2514;
        case 0x1e2518u: goto label_1e2518;
        case 0x1e251cu: goto label_1e251c;
        case 0x1e2520u: goto label_1e2520;
        case 0x1e2524u: goto label_1e2524;
        case 0x1e2528u: goto label_1e2528;
        case 0x1e252cu: goto label_1e252c;
        case 0x1e2530u: goto label_1e2530;
        case 0x1e2534u: goto label_1e2534;
        case 0x1e2538u: goto label_1e2538;
        case 0x1e253cu: goto label_1e253c;
        case 0x1e2540u: goto label_1e2540;
        case 0x1e2544u: goto label_1e2544;
        case 0x1e2548u: goto label_1e2548;
        case 0x1e254cu: goto label_1e254c;
        case 0x1e2550u: goto label_1e2550;
        case 0x1e2554u: goto label_1e2554;
        case 0x1e2558u: goto label_1e2558;
        case 0x1e255cu: goto label_1e255c;
        case 0x1e2560u: goto label_1e2560;
        case 0x1e2564u: goto label_1e2564;
        case 0x1e2568u: goto label_1e2568;
        case 0x1e256cu: goto label_1e256c;
        case 0x1e2570u: goto label_1e2570;
        case 0x1e2574u: goto label_1e2574;
        case 0x1e2578u: goto label_1e2578;
        case 0x1e257cu: goto label_1e257c;
        case 0x1e2580u: goto label_1e2580;
        case 0x1e2584u: goto label_1e2584;
        case 0x1e2588u: goto label_1e2588;
        case 0x1e258cu: goto label_1e258c;
        case 0x1e2590u: goto label_1e2590;
        case 0x1e2594u: goto label_1e2594;
        case 0x1e2598u: goto label_1e2598;
        case 0x1e259cu: goto label_1e259c;
        case 0x1e25a0u: goto label_1e25a0;
        case 0x1e25a4u: goto label_1e25a4;
        case 0x1e25a8u: goto label_1e25a8;
        case 0x1e25acu: goto label_1e25ac;
        case 0x1e25b0u: goto label_1e25b0;
        case 0x1e25b4u: goto label_1e25b4;
        case 0x1e25b8u: goto label_1e25b8;
        case 0x1e25bcu: goto label_1e25bc;
        case 0x1e25c0u: goto label_1e25c0;
        case 0x1e25c4u: goto label_1e25c4;
        case 0x1e25c8u: goto label_1e25c8;
        case 0x1e25ccu: goto label_1e25cc;
        case 0x1e25d0u: goto label_1e25d0;
        case 0x1e25d4u: goto label_1e25d4;
        case 0x1e25d8u: goto label_1e25d8;
        case 0x1e25dcu: goto label_1e25dc;
        case 0x1e25e0u: goto label_1e25e0;
        case 0x1e25e4u: goto label_1e25e4;
        case 0x1e25e8u: goto label_1e25e8;
        case 0x1e25ecu: goto label_1e25ec;
        case 0x1e25f0u: goto label_1e25f0;
        case 0x1e25f4u: goto label_1e25f4;
        case 0x1e25f8u: goto label_1e25f8;
        case 0x1e25fcu: goto label_1e25fc;
        case 0x1e2600u: goto label_1e2600;
        case 0x1e2604u: goto label_1e2604;
        case 0x1e2608u: goto label_1e2608;
        case 0x1e260cu: goto label_1e260c;
        case 0x1e2610u: goto label_1e2610;
        case 0x1e2614u: goto label_1e2614;
        case 0x1e2618u: goto label_1e2618;
        case 0x1e261cu: goto label_1e261c;
        case 0x1e2620u: goto label_1e2620;
        case 0x1e2624u: goto label_1e2624;
        case 0x1e2628u: goto label_1e2628;
        case 0x1e262cu: goto label_1e262c;
        case 0x1e2630u: goto label_1e2630;
        case 0x1e2634u: goto label_1e2634;
        case 0x1e2638u: goto label_1e2638;
        case 0x1e263cu: goto label_1e263c;
        case 0x1e2640u: goto label_1e2640;
        case 0x1e2644u: goto label_1e2644;
        case 0x1e2648u: goto label_1e2648;
        case 0x1e264cu: goto label_1e264c;
        case 0x1e2650u: goto label_1e2650;
        case 0x1e2654u: goto label_1e2654;
        case 0x1e2658u: goto label_1e2658;
        case 0x1e265cu: goto label_1e265c;
        case 0x1e2660u: goto label_1e2660;
        case 0x1e2664u: goto label_1e2664;
        case 0x1e2668u: goto label_1e2668;
        case 0x1e266cu: goto label_1e266c;
        case 0x1e2670u: goto label_1e2670;
        case 0x1e2674u: goto label_1e2674;
        case 0x1e2678u: goto label_1e2678;
        case 0x1e267cu: goto label_1e267c;
        case 0x1e2680u: goto label_1e2680;
        case 0x1e2684u: goto label_1e2684;
        case 0x1e2688u: goto label_1e2688;
        case 0x1e268cu: goto label_1e268c;
        case 0x1e2690u: goto label_1e2690;
        case 0x1e2694u: goto label_1e2694;
        case 0x1e2698u: goto label_1e2698;
        case 0x1e269cu: goto label_1e269c;
        case 0x1e26a0u: goto label_1e26a0;
        case 0x1e26a4u: goto label_1e26a4;
        case 0x1e26a8u: goto label_1e26a8;
        case 0x1e26acu: goto label_1e26ac;
        case 0x1e26b0u: goto label_1e26b0;
        case 0x1e26b4u: goto label_1e26b4;
        case 0x1e26b8u: goto label_1e26b8;
        case 0x1e26bcu: goto label_1e26bc;
        case 0x1e26c0u: goto label_1e26c0;
        case 0x1e26c4u: goto label_1e26c4;
        case 0x1e26c8u: goto label_1e26c8;
        case 0x1e26ccu: goto label_1e26cc;
        case 0x1e26d0u: goto label_1e26d0;
        case 0x1e26d4u: goto label_1e26d4;
        case 0x1e26d8u: goto label_1e26d8;
        case 0x1e26dcu: goto label_1e26dc;
        case 0x1e26e0u: goto label_1e26e0;
        case 0x1e26e4u: goto label_1e26e4;
        case 0x1e26e8u: goto label_1e26e8;
        case 0x1e26ecu: goto label_1e26ec;
        case 0x1e26f0u: goto label_1e26f0;
        case 0x1e26f4u: goto label_1e26f4;
        case 0x1e26f8u: goto label_1e26f8;
        case 0x1e26fcu: goto label_1e26fc;
        case 0x1e2700u: goto label_1e2700;
        case 0x1e2704u: goto label_1e2704;
        case 0x1e2708u: goto label_1e2708;
        case 0x1e270cu: goto label_1e270c;
        case 0x1e2710u: goto label_1e2710;
        case 0x1e2714u: goto label_1e2714;
        case 0x1e2718u: goto label_1e2718;
        case 0x1e271cu: goto label_1e271c;
        case 0x1e2720u: goto label_1e2720;
        case 0x1e2724u: goto label_1e2724;
        case 0x1e2728u: goto label_1e2728;
        case 0x1e272cu: goto label_1e272c;
        case 0x1e2730u: goto label_1e2730;
        case 0x1e2734u: goto label_1e2734;
        case 0x1e2738u: goto label_1e2738;
        case 0x1e273cu: goto label_1e273c;
        case 0x1e2740u: goto label_1e2740;
        case 0x1e2744u: goto label_1e2744;
        case 0x1e2748u: goto label_1e2748;
        case 0x1e274cu: goto label_1e274c;
        case 0x1e2750u: goto label_1e2750;
        case 0x1e2754u: goto label_1e2754;
        case 0x1e2758u: goto label_1e2758;
        case 0x1e275cu: goto label_1e275c;
        case 0x1e2760u: goto label_1e2760;
        case 0x1e2764u: goto label_1e2764;
        case 0x1e2768u: goto label_1e2768;
        case 0x1e276cu: goto label_1e276c;
        case 0x1e2770u: goto label_1e2770;
        case 0x1e2774u: goto label_1e2774;
        case 0x1e2778u: goto label_1e2778;
        case 0x1e277cu: goto label_1e277c;
        case 0x1e2780u: goto label_1e2780;
        case 0x1e2784u: goto label_1e2784;
        case 0x1e2788u: goto label_1e2788;
        case 0x1e278cu: goto label_1e278c;
        case 0x1e2790u: goto label_1e2790;
        case 0x1e2794u: goto label_1e2794;
        case 0x1e2798u: goto label_1e2798;
        case 0x1e279cu: goto label_1e279c;
        case 0x1e27a0u: goto label_1e27a0;
        case 0x1e27a4u: goto label_1e27a4;
        case 0x1e27a8u: goto label_1e27a8;
        case 0x1e27acu: goto label_1e27ac;
        case 0x1e27b0u: goto label_1e27b0;
        case 0x1e27b4u: goto label_1e27b4;
        case 0x1e27b8u: goto label_1e27b8;
        case 0x1e27bcu: goto label_1e27bc;
        case 0x1e27c0u: goto label_1e27c0;
        case 0x1e27c4u: goto label_1e27c4;
        case 0x1e27c8u: goto label_1e27c8;
        case 0x1e27ccu: goto label_1e27cc;
        case 0x1e27d0u: goto label_1e27d0;
        case 0x1e27d4u: goto label_1e27d4;
        case 0x1e27d8u: goto label_1e27d8;
        case 0x1e27dcu: goto label_1e27dc;
        case 0x1e27e0u: goto label_1e27e0;
        case 0x1e27e4u: goto label_1e27e4;
        case 0x1e27e8u: goto label_1e27e8;
        case 0x1e27ecu: goto label_1e27ec;
        case 0x1e27f0u: goto label_1e27f0;
        case 0x1e27f4u: goto label_1e27f4;
        case 0x1e27f8u: goto label_1e27f8;
        case 0x1e27fcu: goto label_1e27fc;
        case 0x1e2800u: goto label_1e2800;
        case 0x1e2804u: goto label_1e2804;
        case 0x1e2808u: goto label_1e2808;
        case 0x1e280cu: goto label_1e280c;
        case 0x1e2810u: goto label_1e2810;
        case 0x1e2814u: goto label_1e2814;
        case 0x1e2818u: goto label_1e2818;
        case 0x1e281cu: goto label_1e281c;
        case 0x1e2820u: goto label_1e2820;
        case 0x1e2824u: goto label_1e2824;
        case 0x1e2828u: goto label_1e2828;
        case 0x1e282cu: goto label_1e282c;
        case 0x1e2830u: goto label_1e2830;
        case 0x1e2834u: goto label_1e2834;
        case 0x1e2838u: goto label_1e2838;
        case 0x1e283cu: goto label_1e283c;
        case 0x1e2840u: goto label_1e2840;
        case 0x1e2844u: goto label_1e2844;
        case 0x1e2848u: goto label_1e2848;
        case 0x1e284cu: goto label_1e284c;
        case 0x1e2850u: goto label_1e2850;
        case 0x1e2854u: goto label_1e2854;
        case 0x1e2858u: goto label_1e2858;
        case 0x1e285cu: goto label_1e285c;
        case 0x1e2860u: goto label_1e2860;
        case 0x1e2864u: goto label_1e2864;
        case 0x1e2868u: goto label_1e2868;
        case 0x1e286cu: goto label_1e286c;
        case 0x1e2870u: goto label_1e2870;
        case 0x1e2874u: goto label_1e2874;
        case 0x1e2878u: goto label_1e2878;
        case 0x1e287cu: goto label_1e287c;
        case 0x1e2880u: goto label_1e2880;
        case 0x1e2884u: goto label_1e2884;
        case 0x1e2888u: goto label_1e2888;
        case 0x1e288cu: goto label_1e288c;
        case 0x1e2890u: goto label_1e2890;
        case 0x1e2894u: goto label_1e2894;
        case 0x1e2898u: goto label_1e2898;
        case 0x1e289cu: goto label_1e289c;
        case 0x1e28a0u: goto label_1e28a0;
        case 0x1e28a4u: goto label_1e28a4;
        case 0x1e28a8u: goto label_1e28a8;
        case 0x1e28acu: goto label_1e28ac;
        case 0x1e28b0u: goto label_1e28b0;
        case 0x1e28b4u: goto label_1e28b4;
        case 0x1e28b8u: goto label_1e28b8;
        case 0x1e28bcu: goto label_1e28bc;
        case 0x1e28c0u: goto label_1e28c0;
        case 0x1e28c4u: goto label_1e28c4;
        case 0x1e28c8u: goto label_1e28c8;
        case 0x1e28ccu: goto label_1e28cc;
        case 0x1e28d0u: goto label_1e28d0;
        case 0x1e28d4u: goto label_1e28d4;
        case 0x1e28d8u: goto label_1e28d8;
        case 0x1e28dcu: goto label_1e28dc;
        case 0x1e28e0u: goto label_1e28e0;
        case 0x1e28e4u: goto label_1e28e4;
        case 0x1e28e8u: goto label_1e28e8;
        case 0x1e28ecu: goto label_1e28ec;
        case 0x1e28f0u: goto label_1e28f0;
        case 0x1e28f4u: goto label_1e28f4;
        case 0x1e28f8u: goto label_1e28f8;
        case 0x1e28fcu: goto label_1e28fc;
        case 0x1e2900u: goto label_1e2900;
        case 0x1e2904u: goto label_1e2904;
        case 0x1e2908u: goto label_1e2908;
        case 0x1e290cu: goto label_1e290c;
        case 0x1e2910u: goto label_1e2910;
        case 0x1e2914u: goto label_1e2914;
        case 0x1e2918u: goto label_1e2918;
        case 0x1e291cu: goto label_1e291c;
        case 0x1e2920u: goto label_1e2920;
        case 0x1e2924u: goto label_1e2924;
        case 0x1e2928u: goto label_1e2928;
        case 0x1e292cu: goto label_1e292c;
        case 0x1e2930u: goto label_1e2930;
        case 0x1e2934u: goto label_1e2934;
        case 0x1e2938u: goto label_1e2938;
        case 0x1e293cu: goto label_1e293c;
        case 0x1e2940u: goto label_1e2940;
        case 0x1e2944u: goto label_1e2944;
        case 0x1e2948u: goto label_1e2948;
        case 0x1e294cu: goto label_1e294c;
        case 0x1e2950u: goto label_1e2950;
        case 0x1e2954u: goto label_1e2954;
        case 0x1e2958u: goto label_1e2958;
        case 0x1e295cu: goto label_1e295c;
        case 0x1e2960u: goto label_1e2960;
        case 0x1e2964u: goto label_1e2964;
        case 0x1e2968u: goto label_1e2968;
        case 0x1e296cu: goto label_1e296c;
        case 0x1e2970u: goto label_1e2970;
        case 0x1e2974u: goto label_1e2974;
        case 0x1e2978u: goto label_1e2978;
        case 0x1e297cu: goto label_1e297c;
        case 0x1e2980u: goto label_1e2980;
        case 0x1e2984u: goto label_1e2984;
        case 0x1e2988u: goto label_1e2988;
        case 0x1e298cu: goto label_1e298c;
        case 0x1e2990u: goto label_1e2990;
        case 0x1e2994u: goto label_1e2994;
        case 0x1e2998u: goto label_1e2998;
        case 0x1e299cu: goto label_1e299c;
        case 0x1e29a0u: goto label_1e29a0;
        case 0x1e29a4u: goto label_1e29a4;
        case 0x1e29a8u: goto label_1e29a8;
        case 0x1e29acu: goto label_1e29ac;
        case 0x1e29b0u: goto label_1e29b0;
        case 0x1e29b4u: goto label_1e29b4;
        case 0x1e29b8u: goto label_1e29b8;
        case 0x1e29bcu: goto label_1e29bc;
        case 0x1e29c0u: goto label_1e29c0;
        case 0x1e29c4u: goto label_1e29c4;
        case 0x1e29c8u: goto label_1e29c8;
        case 0x1e29ccu: goto label_1e29cc;
        case 0x1e29d0u: goto label_1e29d0;
        case 0x1e29d4u: goto label_1e29d4;
        case 0x1e29d8u: goto label_1e29d8;
        case 0x1e29dcu: goto label_1e29dc;
        case 0x1e29e0u: goto label_1e29e0;
        case 0x1e29e4u: goto label_1e29e4;
        case 0x1e29e8u: goto label_1e29e8;
        case 0x1e29ecu: goto label_1e29ec;
        case 0x1e29f0u: goto label_1e29f0;
        case 0x1e29f4u: goto label_1e29f4;
        case 0x1e29f8u: goto label_1e29f8;
        case 0x1e29fcu: goto label_1e29fc;
        case 0x1e2a00u: goto label_1e2a00;
        case 0x1e2a04u: goto label_1e2a04;
        case 0x1e2a08u: goto label_1e2a08;
        case 0x1e2a0cu: goto label_1e2a0c;
        case 0x1e2a10u: goto label_1e2a10;
        case 0x1e2a14u: goto label_1e2a14;
        case 0x1e2a18u: goto label_1e2a18;
        case 0x1e2a1cu: goto label_1e2a1c;
        case 0x1e2a20u: goto label_1e2a20;
        case 0x1e2a24u: goto label_1e2a24;
        case 0x1e2a28u: goto label_1e2a28;
        case 0x1e2a2cu: goto label_1e2a2c;
        case 0x1e2a30u: goto label_1e2a30;
        case 0x1e2a34u: goto label_1e2a34;
        case 0x1e2a38u: goto label_1e2a38;
        case 0x1e2a3cu: goto label_1e2a3c;
        case 0x1e2a40u: goto label_1e2a40;
        case 0x1e2a44u: goto label_1e2a44;
        case 0x1e2a48u: goto label_1e2a48;
        case 0x1e2a4cu: goto label_1e2a4c;
        case 0x1e2a50u: goto label_1e2a50;
        case 0x1e2a54u: goto label_1e2a54;
        case 0x1e2a58u: goto label_1e2a58;
        case 0x1e2a5cu: goto label_1e2a5c;
        case 0x1e2a60u: goto label_1e2a60;
        case 0x1e2a64u: goto label_1e2a64;
        case 0x1e2a68u: goto label_1e2a68;
        case 0x1e2a6cu: goto label_1e2a6c;
        case 0x1e2a70u: goto label_1e2a70;
        case 0x1e2a74u: goto label_1e2a74;
        case 0x1e2a78u: goto label_1e2a78;
        case 0x1e2a7cu: goto label_1e2a7c;
        case 0x1e2a80u: goto label_1e2a80;
        case 0x1e2a84u: goto label_1e2a84;
        case 0x1e2a88u: goto label_1e2a88;
        case 0x1e2a8cu: goto label_1e2a8c;
        case 0x1e2a90u: goto label_1e2a90;
        case 0x1e2a94u: goto label_1e2a94;
        case 0x1e2a98u: goto label_1e2a98;
        case 0x1e2a9cu: goto label_1e2a9c;
        case 0x1e2aa0u: goto label_1e2aa0;
        case 0x1e2aa4u: goto label_1e2aa4;
        case 0x1e2aa8u: goto label_1e2aa8;
        case 0x1e2aacu: goto label_1e2aac;
        case 0x1e2ab0u: goto label_1e2ab0;
        case 0x1e2ab4u: goto label_1e2ab4;
        case 0x1e2ab8u: goto label_1e2ab8;
        case 0x1e2abcu: goto label_1e2abc;
        case 0x1e2ac0u: goto label_1e2ac0;
        case 0x1e2ac4u: goto label_1e2ac4;
        case 0x1e2ac8u: goto label_1e2ac8;
        case 0x1e2accu: goto label_1e2acc;
        case 0x1e2ad0u: goto label_1e2ad0;
        case 0x1e2ad4u: goto label_1e2ad4;
        case 0x1e2ad8u: goto label_1e2ad8;
        case 0x1e2adcu: goto label_1e2adc;
        case 0x1e2ae0u: goto label_1e2ae0;
        case 0x1e2ae4u: goto label_1e2ae4;
        case 0x1e2ae8u: goto label_1e2ae8;
        case 0x1e2aecu: goto label_1e2aec;
        case 0x1e2af0u: goto label_1e2af0;
        case 0x1e2af4u: goto label_1e2af4;
        case 0x1e2af8u: goto label_1e2af8;
        case 0x1e2afcu: goto label_1e2afc;
        case 0x1e2b00u: goto label_1e2b00;
        case 0x1e2b04u: goto label_1e2b04;
        case 0x1e2b08u: goto label_1e2b08;
        case 0x1e2b0cu: goto label_1e2b0c;
        case 0x1e2b10u: goto label_1e2b10;
        case 0x1e2b14u: goto label_1e2b14;
        case 0x1e2b18u: goto label_1e2b18;
        case 0x1e2b1cu: goto label_1e2b1c;
        case 0x1e2b20u: goto label_1e2b20;
        case 0x1e2b24u: goto label_1e2b24;
        case 0x1e2b28u: goto label_1e2b28;
        case 0x1e2b2cu: goto label_1e2b2c;
        case 0x1e2b30u: goto label_1e2b30;
        case 0x1e2b34u: goto label_1e2b34;
        case 0x1e2b38u: goto label_1e2b38;
        case 0x1e2b3cu: goto label_1e2b3c;
        case 0x1e2b40u: goto label_1e2b40;
        case 0x1e2b44u: goto label_1e2b44;
        case 0x1e2b48u: goto label_1e2b48;
        case 0x1e2b4cu: goto label_1e2b4c;
        case 0x1e2b50u: goto label_1e2b50;
        case 0x1e2b54u: goto label_1e2b54;
        case 0x1e2b58u: goto label_1e2b58;
        case 0x1e2b5cu: goto label_1e2b5c;
        case 0x1e2b60u: goto label_1e2b60;
        case 0x1e2b64u: goto label_1e2b64;
        case 0x1e2b68u: goto label_1e2b68;
        case 0x1e2b6cu: goto label_1e2b6c;
        case 0x1e2b70u: goto label_1e2b70;
        case 0x1e2b74u: goto label_1e2b74;
        case 0x1e2b78u: goto label_1e2b78;
        case 0x1e2b7cu: goto label_1e2b7c;
        case 0x1e2b80u: goto label_1e2b80;
        case 0x1e2b84u: goto label_1e2b84;
        case 0x1e2b88u: goto label_1e2b88;
        case 0x1e2b8cu: goto label_1e2b8c;
        case 0x1e2b90u: goto label_1e2b90;
        case 0x1e2b94u: goto label_1e2b94;
        case 0x1e2b98u: goto label_1e2b98;
        case 0x1e2b9cu: goto label_1e2b9c;
        case 0x1e2ba0u: goto label_1e2ba0;
        case 0x1e2ba4u: goto label_1e2ba4;
        case 0x1e2ba8u: goto label_1e2ba8;
        case 0x1e2bacu: goto label_1e2bac;
        case 0x1e2bb0u: goto label_1e2bb0;
        case 0x1e2bb4u: goto label_1e2bb4;
        case 0x1e2bb8u: goto label_1e2bb8;
        case 0x1e2bbcu: goto label_1e2bbc;
        case 0x1e2bc0u: goto label_1e2bc0;
        case 0x1e2bc4u: goto label_1e2bc4;
        case 0x1e2bc8u: goto label_1e2bc8;
        case 0x1e2bccu: goto label_1e2bcc;
        case 0x1e2bd0u: goto label_1e2bd0;
        case 0x1e2bd4u: goto label_1e2bd4;
        case 0x1e2bd8u: goto label_1e2bd8;
        case 0x1e2bdcu: goto label_1e2bdc;
        case 0x1e2be0u: goto label_1e2be0;
        case 0x1e2be4u: goto label_1e2be4;
        case 0x1e2be8u: goto label_1e2be8;
        case 0x1e2becu: goto label_1e2bec;
        case 0x1e2bf0u: goto label_1e2bf0;
        case 0x1e2bf4u: goto label_1e2bf4;
        case 0x1e2bf8u: goto label_1e2bf8;
        case 0x1e2bfcu: goto label_1e2bfc;
        case 0x1e2c00u: goto label_1e2c00;
        case 0x1e2c04u: goto label_1e2c04;
        case 0x1e2c08u: goto label_1e2c08;
        case 0x1e2c0cu: goto label_1e2c0c;
        case 0x1e2c10u: goto label_1e2c10;
        case 0x1e2c14u: goto label_1e2c14;
        case 0x1e2c18u: goto label_1e2c18;
        case 0x1e2c1cu: goto label_1e2c1c;
        case 0x1e2c20u: goto label_1e2c20;
        case 0x1e2c24u: goto label_1e2c24;
        case 0x1e2c28u: goto label_1e2c28;
        case 0x1e2c2cu: goto label_1e2c2c;
        case 0x1e2c30u: goto label_1e2c30;
        case 0x1e2c34u: goto label_1e2c34;
        case 0x1e2c38u: goto label_1e2c38;
        case 0x1e2c3cu: goto label_1e2c3c;
        case 0x1e2c40u: goto label_1e2c40;
        case 0x1e2c44u: goto label_1e2c44;
        case 0x1e2c48u: goto label_1e2c48;
        case 0x1e2c4cu: goto label_1e2c4c;
        case 0x1e2c50u: goto label_1e2c50;
        case 0x1e2c54u: goto label_1e2c54;
        case 0x1e2c58u: goto label_1e2c58;
        case 0x1e2c5cu: goto label_1e2c5c;
        case 0x1e2c60u: goto label_1e2c60;
        case 0x1e2c64u: goto label_1e2c64;
        case 0x1e2c68u: goto label_1e2c68;
        case 0x1e2c6cu: goto label_1e2c6c;
        case 0x1e2c70u: goto label_1e2c70;
        case 0x1e2c74u: goto label_1e2c74;
        case 0x1e2c78u: goto label_1e2c78;
        case 0x1e2c7cu: goto label_1e2c7c;
        case 0x1e2c80u: goto label_1e2c80;
        case 0x1e2c84u: goto label_1e2c84;
        case 0x1e2c88u: goto label_1e2c88;
        case 0x1e2c8cu: goto label_1e2c8c;
        case 0x1e2c90u: goto label_1e2c90;
        case 0x1e2c94u: goto label_1e2c94;
        case 0x1e2c98u: goto label_1e2c98;
        case 0x1e2c9cu: goto label_1e2c9c;
        case 0x1e2ca0u: goto label_1e2ca0;
        case 0x1e2ca4u: goto label_1e2ca4;
        case 0x1e2ca8u: goto label_1e2ca8;
        case 0x1e2cacu: goto label_1e2cac;
        case 0x1e2cb0u: goto label_1e2cb0;
        case 0x1e2cb4u: goto label_1e2cb4;
        case 0x1e2cb8u: goto label_1e2cb8;
        case 0x1e2cbcu: goto label_1e2cbc;
        case 0x1e2cc0u: goto label_1e2cc0;
        case 0x1e2cc4u: goto label_1e2cc4;
        case 0x1e2cc8u: goto label_1e2cc8;
        case 0x1e2cccu: goto label_1e2ccc;
        case 0x1e2cd0u: goto label_1e2cd0;
        case 0x1e2cd4u: goto label_1e2cd4;
        case 0x1e2cd8u: goto label_1e2cd8;
        case 0x1e2cdcu: goto label_1e2cdc;
        case 0x1e2ce0u: goto label_1e2ce0;
        case 0x1e2ce4u: goto label_1e2ce4;
        case 0x1e2ce8u: goto label_1e2ce8;
        case 0x1e2cecu: goto label_1e2cec;
        case 0x1e2cf0u: goto label_1e2cf0;
        case 0x1e2cf4u: goto label_1e2cf4;
        case 0x1e2cf8u: goto label_1e2cf8;
        case 0x1e2cfcu: goto label_1e2cfc;
        case 0x1e2d00u: goto label_1e2d00;
        case 0x1e2d04u: goto label_1e2d04;
        case 0x1e2d08u: goto label_1e2d08;
        case 0x1e2d0cu: goto label_1e2d0c;
        case 0x1e2d10u: goto label_1e2d10;
        case 0x1e2d14u: goto label_1e2d14;
        case 0x1e2d18u: goto label_1e2d18;
        case 0x1e2d1cu: goto label_1e2d1c;
        case 0x1e2d20u: goto label_1e2d20;
        case 0x1e2d24u: goto label_1e2d24;
        case 0x1e2d28u: goto label_1e2d28;
        case 0x1e2d2cu: goto label_1e2d2c;
        case 0x1e2d30u: goto label_1e2d30;
        case 0x1e2d34u: goto label_1e2d34;
        case 0x1e2d38u: goto label_1e2d38;
        case 0x1e2d3cu: goto label_1e2d3c;
        case 0x1e2d40u: goto label_1e2d40;
        case 0x1e2d44u: goto label_1e2d44;
        case 0x1e2d48u: goto label_1e2d48;
        case 0x1e2d4cu: goto label_1e2d4c;
        case 0x1e2d50u: goto label_1e2d50;
        case 0x1e2d54u: goto label_1e2d54;
        case 0x1e2d58u: goto label_1e2d58;
        case 0x1e2d5cu: goto label_1e2d5c;
        case 0x1e2d60u: goto label_1e2d60;
        case 0x1e2d64u: goto label_1e2d64;
        case 0x1e2d68u: goto label_1e2d68;
        case 0x1e2d6cu: goto label_1e2d6c;
        case 0x1e2d70u: goto label_1e2d70;
        case 0x1e2d74u: goto label_1e2d74;
        case 0x1e2d78u: goto label_1e2d78;
        case 0x1e2d7cu: goto label_1e2d7c;
        case 0x1e2d80u: goto label_1e2d80;
        case 0x1e2d84u: goto label_1e2d84;
        case 0x1e2d88u: goto label_1e2d88;
        case 0x1e2d8cu: goto label_1e2d8c;
        case 0x1e2d90u: goto label_1e2d90;
        case 0x1e2d94u: goto label_1e2d94;
        case 0x1e2d98u: goto label_1e2d98;
        case 0x1e2d9cu: goto label_1e2d9c;
        case 0x1e2da0u: goto label_1e2da0;
        case 0x1e2da4u: goto label_1e2da4;
        case 0x1e2da8u: goto label_1e2da8;
        case 0x1e2dacu: goto label_1e2dac;
        case 0x1e2db0u: goto label_1e2db0;
        case 0x1e2db4u: goto label_1e2db4;
        case 0x1e2db8u: goto label_1e2db8;
        case 0x1e2dbcu: goto label_1e2dbc;
        case 0x1e2dc0u: goto label_1e2dc0;
        case 0x1e2dc4u: goto label_1e2dc4;
        case 0x1e2dc8u: goto label_1e2dc8;
        case 0x1e2dccu: goto label_1e2dcc;
        case 0x1e2dd0u: goto label_1e2dd0;
        case 0x1e2dd4u: goto label_1e2dd4;
        case 0x1e2dd8u: goto label_1e2dd8;
        case 0x1e2ddcu: goto label_1e2ddc;
        case 0x1e2de0u: goto label_1e2de0;
        case 0x1e2de4u: goto label_1e2de4;
        case 0x1e2de8u: goto label_1e2de8;
        case 0x1e2decu: goto label_1e2dec;
        case 0x1e2df0u: goto label_1e2df0;
        case 0x1e2df4u: goto label_1e2df4;
        case 0x1e2df8u: goto label_1e2df8;
        case 0x1e2dfcu: goto label_1e2dfc;
        case 0x1e2e00u: goto label_1e2e00;
        case 0x1e2e04u: goto label_1e2e04;
        case 0x1e2e08u: goto label_1e2e08;
        case 0x1e2e0cu: goto label_1e2e0c;
        case 0x1e2e10u: goto label_1e2e10;
        case 0x1e2e14u: goto label_1e2e14;
        case 0x1e2e18u: goto label_1e2e18;
        case 0x1e2e1cu: goto label_1e2e1c;
        default: break;
    }

    ctx->pc = 0x1e21d8u;

label_1e21d8:
    // 0x1e21d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e21d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1e21dc:
    // 0x1e21dc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1e21dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1e21e0:
    // 0x1e21e0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1e21e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1e21e4:
    // 0x1e21e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e21e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e21e8:
    // 0x1e21e8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1e21e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1e21ec:
    // 0x1e21ec: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1e21ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1e21f0:
    // 0x1e21f0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e21f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1e21f4:
    // 0x1e21f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e21f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e21f8:
    // 0x1e21f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e21f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e21fc:
    // 0x1e21fc: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1e21fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1e2200:
    // 0x1e2200: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e2200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e2204:
    // 0x1e2204: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1e2204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1e2208:
    // 0x1e2208: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1e2208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1e220c:
    // 0x1e220c: 0x40f809  jalr        $v0
label_1e2210:
    if (ctx->pc == 0x1E2210u) {
        ctx->pc = 0x1E2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E220Cu;
        // 0x1e2210: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2214u;
        goto label_1e2214;
    }
    ctx->pc = 0x1E220Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2214u);
        ctx->pc = 0x1E2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E220Cu;
        // 0x1e2210: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E220Cu, 0x1E2214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2214u;
label_1e2214:
    // 0x1e2214: 0x104002f7  beqz        $v0, . + 4 + (0x2F7 << 2)
label_1e2218:
    if (ctx->pc == 0x1E2218u) {
        ctx->pc = 0x1E2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2214u;
        // 0x1e2218: 0x26430094  addiu       $v1, $s2, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E221Cu;
        goto label_1e221c;
    }
    ctx->pc = 0x1E2214u;
    {
        const bool branch_taken_0x1e2214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2214u;
        // 0x1e2218: 0x26430094  addiu       $v1, $s2, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2214) {
            ctx->pc = 0x1E2DF4u;
            goto label_1e2df4;
        }
    }
    ctx->pc = 0x1E221Cu;
label_1e221c:
    // 0x1e221c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1e221cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e2220:
    // 0x1e2220: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e2220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e2224:
    // 0x1e2224: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1e2224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e2228:
    // 0x1e2228: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e2228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e222c:
    // 0x1e222c: 0x104002f1  beqz        $v0, . + 4 + (0x2F1 << 2)
label_1e2230:
    if (ctx->pc == 0x1E2230u) {
        ctx->pc = 0x1E2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E222Cu;
        // 0x1e2230: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2234u;
        goto label_1e2234;
    }
    ctx->pc = 0x1E222Cu;
    {
        const bool branch_taken_0x1e222c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E222Cu;
        // 0x1e2230: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e222c) {
            ctx->pc = 0x1E2DF4u;
            goto label_1e2df4;
        }
    }
    ctx->pc = 0x1E2234u;
label_1e2234:
    // 0x1e2234: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x1e2234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_1e2238:
    // 0x1e2238: 0x8e4300e4  lw          $v1, 0xE4($s2)
    ctx->pc = 0x1e2238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_1e223c:
    // 0x1e223c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e223cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e2240:
    // 0x1e2240: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e2240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e2244:
    // 0x1e2244: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1e2248:
    if (ctx->pc == 0x1E2248u) {
        ctx->pc = 0x1E2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2244u;
        // 0x1e2248: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E224Cu;
        goto label_1e224c;
    }
    ctx->pc = 0x1E2244u;
    {
        const bool branch_taken_0x1e2244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2244u;
        // 0x1e2248: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2244) {
            ctx->pc = 0x1E2298u;
            goto label_1e2298;
        }
    }
    ctx->pc = 0x1E224Cu;
label_1e224c:
    // 0x1e224c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2250:
    // 0x1e2250: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x1e2250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_1e2254:
    // 0x1e2254: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x1e2254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_1e2258:
    // 0x1e2258: 0x40f809  jalr        $v0
label_1e225c:
    if (ctx->pc == 0x1E225Cu) {
        ctx->pc = 0x1E225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2258u;
        // 0x1e225c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2260u;
        goto label_1e2260;
    }
    ctx->pc = 0x1E2258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2260u);
        ctx->pc = 0x1E225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2258u;
        // 0x1e225c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2258u, 0x1E2260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2260u;
label_1e2260:
    // 0x1e2260: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1e2264:
    if (ctx->pc == 0x1E2264u) {
        ctx->pc = 0x1E2264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2260u;
        // 0x1e2264: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2268u;
        goto label_1e2268;
    }
    ctx->pc = 0x1E2260u;
    {
        const bool branch_taken_0x1e2260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2260) {
            ctx->pc = 0x1E2264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2260u;
            // 0x1e2264: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E229Cu;
            goto label_1e229c;
        }
    }
    ctx->pc = 0x1E2268u;
label_1e2268:
    // 0x1e2268: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e2268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e226c:
    // 0x1e226c: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x1e226cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_1e2270:
    // 0x1e2270: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x1e2270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_1e2274:
    // 0x1e2274: 0x40f809  jalr        $v0
label_1e2278:
    if (ctx->pc == 0x1E2278u) {
        ctx->pc = 0x1E2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2274u;
        // 0x1e2278: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E227Cu;
        goto label_1e227c;
    }
    ctx->pc = 0x1E2274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E227Cu);
        ctx->pc = 0x1E2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2274u;
        // 0x1e2278: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2274u, 0x1E227Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E227Cu;
label_1e227c:
    // 0x1e227c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e227cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2280:
    // 0x1e2280: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1e2280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1e2284:
    // 0x1e2284: 0x8c6500a4  lw          $a1, 0xA4($v1)
    ctx->pc = 0x1e2284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1e2288:
    // 0x1e2288: 0xa0f809  jalr        $a1
label_1e228c:
    if (ctx->pc == 0x1E228Cu) {
        ctx->pc = 0x1E228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2288u;
        // 0x1e228c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2290u;
        goto label_1e2290;
    }
    ctx->pc = 0x1E2288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1E2290u);
        ctx->pc = 0x1E228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2288u;
        // 0x1e228c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2288u, 0x1E2290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2290u;
label_1e2290:
    // 0x1e2290: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_1e2294:
    if (ctx->pc == 0x1E2294u) {
        ctx->pc = 0x1E2294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2290u;
        // 0x1e2294: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2298u;
        goto label_1e2298;
    }
    ctx->pc = 0x1E2290u;
    {
        const bool branch_taken_0x1e2290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2290) {
            ctx->pc = 0x1E2294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2290u;
            // 0x1e2294: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2338u;
            goto label_1e2338;
        }
    }
    ctx->pc = 0x1E2298u;
label_1e2298:
    // 0x1e2298: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e2298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e229c:
    // 0x1e229c: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1e229cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1e22a0:
    // 0x1e22a0: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1e22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1e22a4:
    // 0x1e22a4: 0x40f809  jalr        $v0
label_1e22a8:
    if (ctx->pc == 0x1E22A8u) {
        ctx->pc = 0x1E22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22A4u;
        // 0x1e22a8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E22ACu;
        goto label_1e22ac;
    }
    ctx->pc = 0x1E22A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E22ACu);
        ctx->pc = 0x1E22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22A4u;
        // 0x1e22a8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E22A4u, 0x1E22ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E22ACu;
label_1e22ac:
    // 0x1e22ac: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_1e22b0:
    if (ctx->pc == 0x1E22B0u) {
        ctx->pc = 0x1E22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22ACu;
        // 0x1e22b0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E22B4u;
        goto label_1e22b4;
    }
    ctx->pc = 0x1E22ACu;
    {
        const bool branch_taken_0x1e22ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e22ac) {
            ctx->pc = 0x1E22B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E22ACu;
            // 0x1e22b0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2338u;
            goto label_1e2338;
        }
    }
    ctx->pc = 0x1E22B4u;
label_1e22b4:
    // 0x1e22b4: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x1e22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_1e22b8:
    // 0x1e22b8: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_1e22bc:
    if (ctx->pc == 0x1E22BCu) {
        ctx->pc = 0x1E22BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22B8u;
        // 0x1e22bc: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E22C0u;
        goto label_1e22c0;
    }
    ctx->pc = 0x1E22B8u;
    {
        const bool branch_taken_0x1e22b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e22b8) {
            ctx->pc = 0x1E22BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E22B8u;
            // 0x1e22bc: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2338u;
            goto label_1e2338;
        }
    }
    ctx->pc = 0x1E22C0u;
label_1e22c0:
    // 0x1e22c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e22c4:
    // 0x1e22c4: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1e22c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1e22c8:
    // 0x1e22c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e22c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e22cc:
    // 0x1e22cc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e22ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e22d0:
    // 0x1e22d0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e22d4:
    // 0x1e22d4: 0x40f809  jalr        $v0
label_1e22d8:
    if (ctx->pc == 0x1E22D8u) {
        ctx->pc = 0x1E22D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22D4u;
        // 0x1e22d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E22DCu;
        goto label_1e22dc;
    }
    ctx->pc = 0x1E22D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E22DCu);
        ctx->pc = 0x1E22D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22D4u;
        // 0x1e22d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E22D4u, 0x1E22DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E22DCu;
label_1e22dc:
    // 0x1e22dc: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x1e22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_1e22e0:
    // 0x1e22e0: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1e22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_1e22e4:
    // 0x1e22e4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1e22e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e22e8:
    // 0x1e22e8: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_1e22ec:
    if (ctx->pc == 0x1E22ECu) {
        ctx->pc = 0x1E22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22E8u;
        // 0x1e22ec: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E22F0u;
        goto label_1e22f0;
    }
    ctx->pc = 0x1E22E8u;
    {
        const bool branch_taken_0x1e22e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e22e8) {
            ctx->pc = 0x1E22ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E22E8u;
            // 0x1e22ec: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2338u;
            goto label_1e2338;
        }
    }
    ctx->pc = 0x1E22F0u;
label_1e22f0:
    // 0x1e22f0: 0xc05181e  jal         func_146078
label_1e22f4:
    if (ctx->pc == 0x1E22F4u) {
        ctx->pc = 0x1E22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22F0u;
        // 0x1e22f4: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E22F8u;
        goto label_1e22f8;
    }
    ctx->pc = 0x1E22F0u;
    SET_GPR_U32(ctx, 31, 0x1E22F8u);
    ctx->pc = 0x1E22F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E22F0u;
    // 0x1e22f4: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x1E22F0u, 0x1E22F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E22F8u;
label_1e22f8:
    // 0x1e22f8: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x1e22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_1e22fc:
    // 0x1e22fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e2300:
    if (ctx->pc == 0x1E2300u) {
        ctx->pc = 0x1E2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22FCu;
        // 0x1e2300: 0x26500060  addiu       $s0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2304u;
        goto label_1e2304;
    }
    ctx->pc = 0x1E22FCu;
    {
        const bool branch_taken_0x1e22fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22FCu;
        // 0x1e2300: 0x26500060  addiu       $s0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e22fc) {
            ctx->pc = 0x1E2318u;
            goto label_1e2318;
        }
    }
    ctx->pc = 0x1E2304u;
label_1e2304:
    // 0x1e2304: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x1e2304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_1e2308:
    // 0x1e2308: 0xc07a546  jal         func_1E9518
label_1e230c:
    if (ctx->pc == 0x1E230Cu) {
        ctx->pc = 0x1E230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2308u;
        // 0x1e230c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2310u;
        goto label_1e2310;
    }
    ctx->pc = 0x1E2308u;
    SET_GPR_U32(ctx, 31, 0x1E2310u);
    ctx->pc = 0x1E230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2308u;
    // 0x1e230c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9518u, 0x1E2308u, 0x1E2310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2310u;
label_1e2310:
    // 0x1e2310: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e2314:
    if (ctx->pc == 0x1E2314u) {
        ctx->pc = 0x1E2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2310u;
        // 0x1e2314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2318u;
        goto label_1e2318;
    }
    ctx->pc = 0x1E2310u;
    {
        const bool branch_taken_0x1e2310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2310u;
        // 0x1e2314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2310) {
            ctx->pc = 0x1E2328u;
            goto label_1e2328;
        }
    }
    ctx->pc = 0x1E2318u;
label_1e2318:
    // 0x1e2318: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x1e2318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_1e231c:
    // 0x1e231c: 0xc07a4f0  jal         func_1E93C0
label_1e2320:
    if (ctx->pc == 0x1E2320u) {
        ctx->pc = 0x1E2320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E231Cu;
        // 0x1e2320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2324u;
        goto label_1e2324;
    }
    ctx->pc = 0x1E231Cu;
    SET_GPR_U32(ctx, 31, 0x1E2324u);
    ctx->pc = 0x1E2320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E231Cu;
    // 0x1e2320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93C0u, 0x1E231Cu, 0x1E2324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2324u;
label_1e2324:
    // 0x1e2324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2328:
    // 0x1e2328: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1e2328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1e232c:
    // 0x1e232c: 0xc07a51a  jal         func_1E9468
label_1e2330:
    if (ctx->pc == 0x1E2330u) {
        ctx->pc = 0x1E2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E232Cu;
        // 0x1e2330: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2334u;
        goto label_1e2334;
    }
    ctx->pc = 0x1E232Cu;
    SET_GPR_U32(ctx, 31, 0x1E2334u);
    ctx->pc = 0x1E2330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E232Cu;
    // 0x1e2330: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9468u, 0x1E232Cu, 0x1E2334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2334u;
label_1e2334:
    // 0x1e2334: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1e2334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1e2338:
    // 0x1e2338: 0x104002ae  beqz        $v0, . + 4 + (0x2AE << 2)
label_1e233c:
    if (ctx->pc == 0x1E233Cu) {
        ctx->pc = 0x1E233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2338u;
        // 0x1e233c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2340u;
        goto label_1e2340;
    }
    ctx->pc = 0x1E2338u;
    {
        const bool branch_taken_0x1e2338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2338u;
        // 0x1e233c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2338) {
            ctx->pc = 0x1E2DF4u;
            goto label_1e2df4;
        }
    }
    ctx->pc = 0x1E2340u;
label_1e2340:
    // 0x1e2340: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x1e2340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_1e2344:
    // 0x1e2344: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
label_1e2348:
    if (ctx->pc == 0x1E2348u) {
        ctx->pc = 0x1E2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2344u;
        // 0x1e2348: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E234Cu;
        goto label_1e234c;
    }
    ctx->pc = 0x1E2344u;
    {
        const bool branch_taken_0x1e2344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2344u;
        // 0x1e2348: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2344) {
            ctx->pc = 0x1E2418u;
            goto label_1e2418;
        }
    }
    ctx->pc = 0x1E234Cu;
label_1e234c:
    // 0x1e234c: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x1e234cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2350:
    // 0x1e2350: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1e2350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1e2354:
    // 0x1e2354: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1e2354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1e2358:
    // 0x1e2358: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1e2358u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e235c:
    // 0x1e235c: 0x8e4600ac  lw          $a2, 0xAC($s2)
    ctx->pc = 0x1e235cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e2360:
    // 0x1e2360: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1e2360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1e2364:
    // 0x1e2364: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1e2364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e2368:
    // 0x1e2368: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x1e2368u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e236c:
    // 0x1e236c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1e236cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1e2370:
    // 0x1e2370: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e2370u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e2374:
    // 0x1e2374: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1e2374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e2378:
    // 0x1e2378: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e2378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1e237c:
    // 0x1e237c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1e237cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e2380:
    // 0x1e2380: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e2380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2384:
    // 0x1e2384: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1e2384u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1e2388:
    // 0x1e2388: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1e2388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e238c:
    // 0x1e238c: 0x84c400b0  lh          $a0, 0xB0($a2)
    ctx->pc = 0x1e238cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 176)));
label_1e2390:
    // 0x1e2390: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e2390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e2394:
    // 0x1e2394: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e2394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1e2398:
    // 0x1e2398: 0x8cc200b4  lw          $v0, 0xB4($a2)
    ctx->pc = 0x1e2398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
label_1e239c:
    // 0x1e239c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1e239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1e23a0:
    // 0x1e23a0: 0x40f809  jalr        $v0
label_1e23a4:
    if (ctx->pc == 0x1E23A4u) {
        ctx->pc = 0x1E23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23A0u;
        // 0x1e23a4: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E23A8u;
        goto label_1e23a8;
    }
    ctx->pc = 0x1E23A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E23A8u);
        ctx->pc = 0x1E23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23A0u;
        // 0x1e23a4: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E23A0u, 0x1E23A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E23A8u;
label_1e23a8:
    // 0x1e23a8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1e23a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e23ac:
    // 0x1e23ac: 0x0  nop
    ctx->pc = 0x1e23acu;
    // NOP
label_1e23b0:
    // 0x1e23b0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_1e23b4:
    if (ctx->pc == 0x1E23B4u) {
        ctx->pc = 0x1E23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23B0u;
        // 0x1e23b4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E23B8u;
        goto label_1e23b8;
    }
    ctx->pc = 0x1E23B0u;
    {
        const bool branch_taken_0x1e23b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e23b0) {
            ctx->pc = 0x1E23B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E23B0u;
            // 0x1e23b4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E23D8u;
            goto label_1e23d8;
        }
    }
    ctx->pc = 0x1E23B8u;
label_1e23b8:
    // 0x1e23b8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e23b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e23bc:
    // 0x1e23bc: 0xc64c00c8  lwc1        $f12, 0xC8($s2)
    ctx->pc = 0x1e23bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e23c0:
    // 0x1e23c0: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x1e23c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1e23c4:
    // 0x1e23c4: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x1e23c4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_1e23c8:
    // 0x1e23c8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x1e23c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1e23cc:
    // 0x1e23cc: 0x40f809  jalr        $v0
label_1e23d0:
    if (ctx->pc == 0x1E23D0u) {
        ctx->pc = 0x1E23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23CCu;
        // 0x1e23d0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E23D4u;
        goto label_1e23d4;
    }
    ctx->pc = 0x1E23CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E23D4u);
        ctx->pc = 0x1E23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23CCu;
        // 0x1e23d0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E23CCu, 0x1E23D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E23D4u;
label_1e23d4:
    // 0x1e23d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e23d8:
    // 0x1e23d8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1e23d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1e23dc:
    // 0x1e23dc: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1e23dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1e23e0:
    // 0x1e23e0: 0x60f809  jalr        $v1
label_1e23e4:
    if (ctx->pc == 0x1E23E4u) {
        ctx->pc = 0x1E23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23E0u;
        // 0x1e23e4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E23E8u;
        goto label_1e23e8;
    }
    ctx->pc = 0x1E23E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E23E8u);
        ctx->pc = 0x1E23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23E0u;
        // 0x1e23e4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E23E0u, 0x1E23E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E23E8u;
label_1e23e8:
    // 0x1e23e8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1e23e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e23ec:
    // 0x1e23ec: 0x0  nop
    ctx->pc = 0x1e23ecu;
    // NOP
label_1e23f0:
    // 0x1e23f0: 0x45020047  bc1fl       . + 4 + (0x47 << 2)
label_1e23f4:
    if (ctx->pc == 0x1E23F4u) {
        ctx->pc = 0x1E23F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23F0u;
        // 0x1e23f4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E23F8u;
        goto label_1e23f8;
    }
    ctx->pc = 0x1E23F0u;
    {
        const bool branch_taken_0x1e23f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e23f0) {
            ctx->pc = 0x1E23F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E23F0u;
            // 0x1e23f4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2510u;
            goto label_1e2510;
        }
    }
    ctx->pc = 0x1E23F8u;
label_1e23f8:
    // 0x1e23f8: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1e23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e23fc:
    // 0x1e23fc: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x1e23fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e2400:
    // 0x1e2400: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e2404:
    // 0x1e2404: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x1e2404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
label_1e2408:
    // 0x1e2408: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e2408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1e240c:
    // 0x1e240c: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x1e240cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
label_1e2410:
    // 0x1e2410: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1e2414:
    if (ctx->pc == 0x1E2414u) {
        ctx->pc = 0x1E2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2410u;
        // 0x1e2414: 0xae4300ac  sw          $v1, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2418u;
        goto label_1e2418;
    }
    ctx->pc = 0x1E2410u;
    {
        const bool branch_taken_0x1e2410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2410u;
        // 0x1e2414: 0xae4300ac  sw          $v1, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2410) {
            ctx->pc = 0x1E250Cu;
            goto label_1e250c;
        }
    }
    ctx->pc = 0x1E2418u;
label_1e2418:
    // 0x1e2418: 0x1462004d  bne         $v1, $v0, . + 4 + (0x4D << 2)
label_1e241c:
    if (ctx->pc == 0x1E241Cu) {
        ctx->pc = 0x1E241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2418u;
        // 0x1e241c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2420u;
        goto label_1e2420;
    }
    ctx->pc = 0x1E2418u;
    {
        const bool branch_taken_0x1e2418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2418u;
        // 0x1e241c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2418) {
            ctx->pc = 0x1E2550u;
            goto label_1e2550;
        }
    }
    ctx->pc = 0x1E2420u;
label_1e2420:
    // 0x1e2420: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x1e2420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2424:
    // 0x1e2424: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1e2424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1e2428:
    // 0x1e2428: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1e2428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1e242c:
    // 0x1e242c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1e242cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e2430:
    // 0x1e2430: 0x8e4600ac  lw          $a2, 0xAC($s2)
    ctx->pc = 0x1e2430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e2434:
    // 0x1e2434: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1e2434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1e2438:
    // 0x1e2438: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1e2438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e243c:
    // 0x1e243c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x1e243cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2440:
    // 0x1e2440: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1e2440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1e2444:
    // 0x1e2444: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e2444u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e2448:
    // 0x1e2448: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1e2448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e244c:
    // 0x1e244c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e244cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1e2450:
    // 0x1e2450: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1e2450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e2454:
    // 0x1e2454: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e2454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2458:
    // 0x1e2458: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1e2458u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1e245c:
    // 0x1e245c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1e245cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e2460:
    // 0x1e2460: 0x84c400b0  lh          $a0, 0xB0($a2)
    ctx->pc = 0x1e2460u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 176)));
label_1e2464:
    // 0x1e2464: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e2464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e2468:
    // 0x1e2468: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e2468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1e246c:
    // 0x1e246c: 0x8cc200b4  lw          $v0, 0xB4($a2)
    ctx->pc = 0x1e246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
label_1e2470:
    // 0x1e2470: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1e2470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1e2474:
    // 0x1e2474: 0x40f809  jalr        $v0
label_1e2478:
    if (ctx->pc == 0x1E2478u) {
        ctx->pc = 0x1E2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2474u;
        // 0x1e2478: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E247Cu;
        goto label_1e247c;
    }
    ctx->pc = 0x1E2474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E247Cu);
        ctx->pc = 0x1E2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2474u;
        // 0x1e2478: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2474u, 0x1E247Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E247Cu;
label_1e247c:
    // 0x1e247c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1e247cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e2480:
    // 0x1e2480: 0x0  nop
    ctx->pc = 0x1e2480u;
    // NOP
label_1e2484:
    // 0x1e2484: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_1e2488:
    if (ctx->pc == 0x1E2488u) {
        ctx->pc = 0x1E2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2484u;
        // 0x1e2488: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E248Cu;
        goto label_1e248c;
    }
    ctx->pc = 0x1E2484u;
    {
        const bool branch_taken_0x1e2484 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2484) {
            ctx->pc = 0x1E2488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2484u;
            // 0x1e2488: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E24ACu;
            goto label_1e24ac;
        }
    }
    ctx->pc = 0x1E248Cu;
label_1e248c:
    // 0x1e248c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e2490:
    // 0x1e2490: 0xc64c00c8  lwc1        $f12, 0xC8($s2)
    ctx->pc = 0x1e2490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e2494:
    // 0x1e2494: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x1e2494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1e2498:
    // 0x1e2498: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x1e2498u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_1e249c:
    // 0x1e249c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x1e249cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1e24a0:
    // 0x1e24a0: 0x40f809  jalr        $v0
label_1e24a4:
    if (ctx->pc == 0x1E24A4u) {
        ctx->pc = 0x1E24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24A0u;
        // 0x1e24a4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24A8u;
        goto label_1e24a8;
    }
    ctx->pc = 0x1E24A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E24A8u);
        ctx->pc = 0x1E24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24A0u;
        // 0x1e24a4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E24A0u, 0x1E24A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E24A8u;
label_1e24a8:
    // 0x1e24a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e24a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e24ac:
    // 0x1e24ac: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1e24acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1e24b0:
    // 0x1e24b0: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1e24b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1e24b4:
    // 0x1e24b4: 0x60f809  jalr        $v1
label_1e24b8:
    if (ctx->pc == 0x1E24B8u) {
        ctx->pc = 0x1E24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24B4u;
        // 0x1e24b8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24BCu;
        goto label_1e24bc;
    }
    ctx->pc = 0x1E24B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E24BCu);
        ctx->pc = 0x1E24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24B4u;
        // 0x1e24b8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E24B4u, 0x1E24BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E24BCu;
label_1e24bc:
    // 0x1e24bc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1e24bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e24c0:
    // 0x1e24c0: 0x0  nop
    ctx->pc = 0x1e24c0u;
    // NOP
label_1e24c4:
    // 0x1e24c4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1e24c8:
    if (ctx->pc == 0x1E24C8u) {
        ctx->pc = 0x1E24CCu;
        goto label_1e24cc;
    }
    ctx->pc = 0x1E24C4u;
    {
        const bool branch_taken_0x1e24c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e24c4) {
            ctx->pc = 0x1E24E8u;
            goto label_1e24e8;
        }
    }
    ctx->pc = 0x1E24CCu;
label_1e24cc:
    // 0x1e24cc: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1e24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e24d0:
    // 0x1e24d0: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x1e24d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e24d4:
    // 0x1e24d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e24d8:
    // 0x1e24d8: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x1e24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
label_1e24dc:
    // 0x1e24dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e24dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1e24e0:
    // 0x1e24e0: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x1e24e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
label_1e24e4:
    // 0x1e24e4: 0xae4300ac  sw          $v1, 0xAC($s2)
    ctx->pc = 0x1e24e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
label_1e24e8:
    // 0x1e24e8: 0x52800081  beql        $s4, $zero, . + 4 + (0x81 << 2)
label_1e24ec:
    if (ctx->pc == 0x1E24ECu) {
        ctx->pc = 0x1E24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24E8u;
        // 0x1e24ec: 0x7a430020  lq          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24F0u;
        goto label_1e24f0;
    }
    ctx->pc = 0x1E24E8u;
    {
        const bool branch_taken_0x1e24e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e24e8) {
            ctx->pc = 0x1E24ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E24E8u;
            // 0x1e24ec: 0x7a430020  lq          $v1, 0x20($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E26F0u;
            goto label_1e26f0;
        }
    }
    ctx->pc = 0x1E24F0u;
label_1e24f0:
    // 0x1e24f0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1e24f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e24f4:
    // 0x1e24f4: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1e24f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1e24f8:
    // 0x1e24f8: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1e24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1e24fc:
    // 0x1e24fc: 0x40f809  jalr        $v0
label_1e2500:
    if (ctx->pc == 0x1E2500u) {
        ctx->pc = 0x1E2500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24FCu;
        // 0x1e2500: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2504u;
        goto label_1e2504;
    }
    ctx->pc = 0x1E24FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2504u);
        ctx->pc = 0x1E2500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24FCu;
        // 0x1e2500: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E24FCu, 0x1E2504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2504u;
label_1e2504:
    // 0x1e2504: 0x5440007a  bnel        $v0, $zero, . + 4 + (0x7A << 2)
label_1e2508:
    if (ctx->pc == 0x1E2508u) {
        ctx->pc = 0x1E2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2504u;
        // 0x1e2508: 0x7a430020  lq          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E250Cu;
        goto label_1e250c;
    }
    ctx->pc = 0x1E2504u;
    {
        const bool branch_taken_0x1e2504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2504) {
            ctx->pc = 0x1E2508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2504u;
            // 0x1e2508: 0x7a430020  lq          $v1, 0x20($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E26F0u;
            goto label_1e26f0;
        }
    }
    ctx->pc = 0x1E250Cu;
label_1e250c:
    // 0x1e250c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e2510:
    // 0x1e2510: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x1e2510u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e2514:
    // 0x1e2514: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1e2514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1e2518:
    // 0x1e2518: 0x863000a8  lh          $s0, 0xA8($s1)
    ctx->pc = 0x1e2518u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 168)));
label_1e251c:
    // 0x1e251c: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1e251cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1e2520:
    // 0x1e2520: 0x263100a8  addiu       $s1, $s1, 0xA8
    ctx->pc = 0x1e2520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_1e2524:
    // 0x1e2524: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1e2524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1e2528:
    // 0x1e2528: 0x60f809  jalr        $v1
label_1e252c:
    if (ctx->pc == 0x1E252Cu) {
        ctx->pc = 0x1E252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2528u;
        // 0x1e252c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2530u;
        goto label_1e2530;
    }
    ctx->pc = 0x1E2528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2530u);
        ctx->pc = 0x1E252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2528u;
        // 0x1e252c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2528u, 0x1E2530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2530u;
label_1e2530:
    // 0x1e2530: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e2530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e2534:
    // 0x1e2534: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e2534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e2538:
    // 0x1e2538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e253c:
    // 0x1e253c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e2540:
    // 0x1e2540: 0x40f809  jalr        $v0
label_1e2544:
    if (ctx->pc == 0x1E2544u) {
        ctx->pc = 0x1E2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2540u;
        // 0x1e2544: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2548u;
        goto label_1e2548;
    }
    ctx->pc = 0x1E2540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2548u);
        ctx->pc = 0x1E2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2540u;
        // 0x1e2544: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2540u, 0x1E2548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2548u;
label_1e2548:
    // 0x1e2548: 0x10000069  b           . + 4 + (0x69 << 2)
label_1e254c:
    if (ctx->pc == 0x1E254Cu) {
        ctx->pc = 0x1E254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2548u;
        // 0x1e254c: 0x7a430020  lq          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2550u;
        goto label_1e2550;
    }
    ctx->pc = 0x1E2548u;
    {
        const bool branch_taken_0x1e2548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2548u;
        // 0x1e254c: 0x7a430020  lq          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2548) {
            ctx->pc = 0x1E26F0u;
            goto label_1e26f0;
        }
    }
    ctx->pc = 0x1E2550u;
label_1e2550:
    // 0x1e2550: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
label_1e2554:
    if (ctx->pc == 0x1E2554u) {
        ctx->pc = 0x1E2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2550u;
        // 0x1e2554: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2558u;
        goto label_1e2558;
    }
    ctx->pc = 0x1E2550u;
    {
        const bool branch_taken_0x1e2550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2550u;
        // 0x1e2554: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2550) {
            ctx->pc = 0x1E2654u;
            goto label_1e2654;
        }
    }
    ctx->pc = 0x1E2558u;
label_1e2558:
    // 0x1e2558: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x1e2558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e255c:
    // 0x1e255c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1e255cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1e2560:
    // 0x1e2560: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1e2560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1e2564:
    // 0x1e2564: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1e2564u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e2568:
    // 0x1e2568: 0x8e4600ac  lw          $a2, 0xAC($s2)
    ctx->pc = 0x1e2568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e256c:
    // 0x1e256c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1e256cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1e2570:
    // 0x1e2570: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1e2570u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e2574:
    // 0x1e2574: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x1e2574u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2578:
    // 0x1e2578: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1e2578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1e257c:
    // 0x1e257c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e257cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e2580:
    // 0x1e2580: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1e2580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e2584:
    // 0x1e2584: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e2584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1e2588:
    // 0x1e2588: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1e2588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e258c:
    // 0x1e258c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e258cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2590:
    // 0x1e2590: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1e2590u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1e2594:
    // 0x1e2594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e2594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e2598:
    // 0x1e2598: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e2598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e259c:
    // 0x1e259c: 0x84c400b0  lh          $a0, 0xB0($a2)
    ctx->pc = 0x1e259cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 176)));
label_1e25a0:
    // 0x1e25a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e25a4:
    // 0x1e25a4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e25a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1e25a8:
    // 0x1e25a8: 0x8cc200b4  lw          $v0, 0xB4($a2)
    ctx->pc = 0x1e25a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
label_1e25ac:
    // 0x1e25ac: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1e25acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1e25b0:
    // 0x1e25b0: 0x40f809  jalr        $v0
label_1e25b4:
    if (ctx->pc == 0x1E25B4u) {
        ctx->pc = 0x1E25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25B0u;
        // 0x1e25b4: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25B8u;
        goto label_1e25b8;
    }
    ctx->pc = 0x1E25B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E25B8u);
        ctx->pc = 0x1E25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25B0u;
        // 0x1e25b4: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E25B0u, 0x1E25B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E25B8u;
label_1e25b8:
    // 0x1e25b8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1e25b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e25bc:
    // 0x1e25bc: 0x0  nop
    ctx->pc = 0x1e25bcu;
    // NOP
label_1e25c0:
    // 0x1e25c0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_1e25c4:
    if (ctx->pc == 0x1E25C4u) {
        ctx->pc = 0x1E25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25C0u;
        // 0x1e25c4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25C8u;
        goto label_1e25c8;
    }
    ctx->pc = 0x1E25C0u;
    {
        const bool branch_taken_0x1e25c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e25c0) {
            ctx->pc = 0x1E25C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E25C0u;
            // 0x1e25c4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E25E8u;
            goto label_1e25e8;
        }
    }
    ctx->pc = 0x1E25C8u;
label_1e25c8:
    // 0x1e25c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e25cc:
    // 0x1e25cc: 0xc64c00c8  lwc1        $f12, 0xC8($s2)
    ctx->pc = 0x1e25ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e25d0:
    // 0x1e25d0: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x1e25d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1e25d4:
    // 0x1e25d4: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x1e25d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_1e25d8:
    // 0x1e25d8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x1e25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1e25dc:
    // 0x1e25dc: 0x40f809  jalr        $v0
label_1e25e0:
    if (ctx->pc == 0x1E25E0u) {
        ctx->pc = 0x1E25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25DCu;
        // 0x1e25e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25E4u;
        goto label_1e25e4;
    }
    ctx->pc = 0x1E25DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E25E4u);
        ctx->pc = 0x1E25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25DCu;
        // 0x1e25e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E25DCu, 0x1E25E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E25E4u;
label_1e25e4:
    // 0x1e25e4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e25e8:
    // 0x1e25e8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1e25e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1e25ec:
    // 0x1e25ec: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1e25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1e25f0:
    // 0x1e25f0: 0x60f809  jalr        $v1
label_1e25f4:
    if (ctx->pc == 0x1E25F4u) {
        ctx->pc = 0x1E25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25F0u;
        // 0x1e25f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25F8u;
        goto label_1e25f8;
    }
    ctx->pc = 0x1E25F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E25F8u);
        ctx->pc = 0x1E25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25F0u;
        // 0x1e25f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E25F0u, 0x1E25F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E25F8u;
label_1e25f8:
    // 0x1e25f8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1e25f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e25fc:
    // 0x1e25fc: 0x0  nop
    ctx->pc = 0x1e25fcu;
    // NOP
label_1e2600:
    // 0x1e2600: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_1e2604:
    if (ctx->pc == 0x1E2604u) {
        ctx->pc = 0x1E2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2600u;
        // 0x1e2604: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2608u;
        goto label_1e2608;
    }
    ctx->pc = 0x1E2600u;
    {
        const bool branch_taken_0x1e2600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2600) {
            ctx->pc = 0x1E2604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2600u;
            // 0x1e2604: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E261Cu;
            goto label_1e261c;
        }
    }
    ctx->pc = 0x1E2608u;
label_1e2608:
    // 0x1e2608: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x1e2608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e260c:
    // 0x1e260c: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x1e260cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
label_1e2610:
    // 0x1e2610: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e2610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e2614:
    // 0x1e2614: 0xae4200ac  sw          $v0, 0xAC($s2)
    ctx->pc = 0x1e2614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
label_1e2618:
    // 0x1e2618: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e2618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e261c:
    // 0x1e261c: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x1e261cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e2620:
    // 0x1e2620: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1e2620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1e2624:
    // 0x1e2624: 0x861100a8  lh          $s1, 0xA8($s0)
    ctx->pc = 0x1e2624u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
label_1e2628:
    // 0x1e2628: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1e2628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1e262c:
    // 0x1e262c: 0x261000a8  addiu       $s0, $s0, 0xA8
    ctx->pc = 0x1e262cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
label_1e2630:
    // 0x1e2630: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x1e2630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1e2634:
    // 0x1e2634: 0x60f809  jalr        $v1
label_1e2638:
    if (ctx->pc == 0x1E2638u) {
        ctx->pc = 0x1E2638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2634u;
        // 0x1e2638: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E263Cu;
        goto label_1e263c;
    }
    ctx->pc = 0x1E2634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E263Cu);
        ctx->pc = 0x1E2638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2634u;
        // 0x1e2638: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2634u, 0x1E263Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E263Cu;
label_1e263c:
    // 0x1e263c: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x1e263cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1e2640:
    // 0x1e2640: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e2640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e2644:
    // 0x1e2644: 0x40f809  jalr        $v0
label_1e2648:
    if (ctx->pc == 0x1E2648u) {
        ctx->pc = 0x1E2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2644u;
        // 0x1e2648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E264Cu;
        goto label_1e264c;
    }
    ctx->pc = 0x1E2644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E264Cu);
        ctx->pc = 0x1E2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2644u;
        // 0x1e2648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2644u, 0x1E264Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E264Cu;
label_1e264c:
    // 0x1e264c: 0x10000028  b           . + 4 + (0x28 << 2)
label_1e2650:
    if (ctx->pc == 0x1E2650u) {
        ctx->pc = 0x1E2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E264Cu;
        // 0x1e2650: 0x7a430020  lq          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2654u;
        goto label_1e2654;
    }
    ctx->pc = 0x1E264Cu;
    {
        const bool branch_taken_0x1e264c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E264Cu;
        // 0x1e2650: 0x7a430020  lq          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e264c) {
            ctx->pc = 0x1E26F0u;
            goto label_1e26f0;
        }
    }
    ctx->pc = 0x1E2654u;
label_1e2654:
    // 0x1e2654: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
label_1e2658:
    if (ctx->pc == 0x1E2658u) {
        ctx->pc = 0x1E2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2654u;
        // 0x1e2658: 0x7a430020  lq          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E265Cu;
        goto label_1e265c;
    }
    ctx->pc = 0x1E2654u;
    {
        const bool branch_taken_0x1e2654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2654) {
            ctx->pc = 0x1E2658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2654u;
            // 0x1e2658: 0x7a430020  lq          $v1, 0x20($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E26F0u;
            goto label_1e26f0;
        }
    }
    ctx->pc = 0x1E265Cu;
label_1e265c:
    // 0x1e265c: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1e265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2660:
    // 0x1e2660: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1e2660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1e2664:
    // 0x1e2664: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e2668:
    // 0x1e2668: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e2668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e266c:
    // 0x1e266c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e266cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e2670:
    // 0x1e2670: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e2670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e2674:
    // 0x1e2674: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1e2674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e2678:
    // 0x1e2678: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e2678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e267c:
    // 0x1e267c: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1e267cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1e2680:
    // 0x1e2680: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1e2680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1e2684:
    // 0x1e2684: 0x60f809  jalr        $v1
label_1e2688:
    if (ctx->pc == 0x1E2688u) {
        ctx->pc = 0x1E2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2684u;
        // 0x1e2688: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E268Cu;
        goto label_1e268c;
    }
    ctx->pc = 0x1E2684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E268Cu);
        ctx->pc = 0x1E2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2684u;
        // 0x1e2688: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2684u, 0x1E268Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E268Cu;
label_1e268c:
    // 0x1e268c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1e268cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e2690:
    // 0x1e2690: 0x0  nop
    ctx->pc = 0x1e2690u;
    // NOP
label_1e2694:
    // 0x1e2694: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_1e2698:
    if (ctx->pc == 0x1E2698u) {
        ctx->pc = 0x1E2698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2694u;
        // 0x1e2698: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E269Cu;
        goto label_1e269c;
    }
    ctx->pc = 0x1E2694u;
    {
        const bool branch_taken_0x1e2694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2694) {
            ctx->pc = 0x1E2698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2694u;
            // 0x1e2698: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E26BCu;
            goto label_1e26bc;
        }
    }
    ctx->pc = 0x1E269Cu;
label_1e269c:
    // 0x1e269c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e269cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e26a0:
    // 0x1e26a0: 0xc64c00c8  lwc1        $f12, 0xC8($s2)
    ctx->pc = 0x1e26a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e26a4:
    // 0x1e26a4: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x1e26a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1e26a8:
    // 0x1e26a8: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x1e26a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_1e26ac:
    // 0x1e26ac: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x1e26acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1e26b0:
    // 0x1e26b0: 0x40f809  jalr        $v0
label_1e26b4:
    if (ctx->pc == 0x1E26B4u) {
        ctx->pc = 0x1E26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26B0u;
        // 0x1e26b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E26B8u;
        goto label_1e26b8;
    }
    ctx->pc = 0x1E26B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E26B8u);
        ctx->pc = 0x1E26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26B0u;
        // 0x1e26b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E26B0u, 0x1E26B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E26B8u;
label_1e26b8:
    // 0x1e26b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e26bc:
    // 0x1e26bc: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1e26bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1e26c0:
    // 0x1e26c0: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1e26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1e26c4:
    // 0x1e26c4: 0x60f809  jalr        $v1
label_1e26c8:
    if (ctx->pc == 0x1E26C8u) {
        ctx->pc = 0x1E26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26C4u;
        // 0x1e26c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E26CCu;
        goto label_1e26cc;
    }
    ctx->pc = 0x1E26C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E26CCu);
        ctx->pc = 0x1E26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26C4u;
        // 0x1e26c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E26C4u, 0x1E26CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E26CCu;
label_1e26cc:
    // 0x1e26cc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1e26ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e26d0:
    // 0x1e26d0: 0x0  nop
    ctx->pc = 0x1e26d0u;
    // NOP
label_1e26d4:
    // 0x1e26d4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_1e26d8:
    if (ctx->pc == 0x1E26D8u) {
        ctx->pc = 0x1E26D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26D4u;
        // 0x1e26d8: 0x7a430020  lq          $v1, 0x20($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E26DCu;
        goto label_1e26dc;
    }
    ctx->pc = 0x1E26D4u;
    {
        const bool branch_taken_0x1e26d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e26d4) {
            ctx->pc = 0x1E26D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E26D4u;
            // 0x1e26d8: 0x7a430020  lq          $v1, 0x20($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E26F0u;
            goto label_1e26f0;
        }
    }
    ctx->pc = 0x1E26DCu;
label_1e26dc:
    // 0x1e26dc: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x1e26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e26e0:
    // 0x1e26e0: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x1e26e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
label_1e26e4:
    // 0x1e26e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e26e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e26e8:
    // 0x1e26e8: 0xae4200ac  sw          $v0, 0xAC($s2)
    ctx->pc = 0x1e26e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
label_1e26ec:
    // 0x1e26ec: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x1e26ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_1e26f0:
    // 0x1e26f0: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x1e26f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1e26f4:
    // 0x1e26f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e26f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e26f8:
    // 0x1e26f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e26f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e26fc:
    // 0x1e26fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1e2700:
    // 0x1e2700: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e2700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1e2704:
    // 0x1e2704: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1e2704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_1e2708:
    // 0x1e2708: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x1e2708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_1e270c:
    // 0x1e270c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1e270cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1e2710:
    // 0x1e2710: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1e2710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1e2714:
    // 0x1e2714: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1e2714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1e2718:
    // 0x1e2718: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x1e2718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_1e271c:
    // 0x1e271c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1e271cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e2720:
    // 0x1e2720: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1e2724:
    if (ctx->pc == 0x1E2724u) {
        ctx->pc = 0x1E2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2720u;
        // 0x1e2724: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2728u;
        goto label_1e2728;
    }
    ctx->pc = 0x1E2720u;
    {
        const bool branch_taken_0x1e2720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2720) {
            ctx->pc = 0x1E2724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2720u;
            // 0x1e2724: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2744u;
            goto label_1e2744;
        }
    }
    ctx->pc = 0x1E2728u;
label_1e2728:
    // 0x1e2728: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x1e2728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_1e272c:
    // 0x1e272c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e2730:
    if (ctx->pc == 0x1E2730u) {
        ctx->pc = 0x1E2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E272Cu;
        // 0x1e2730: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2734u;
        goto label_1e2734;
    }
    ctx->pc = 0x1E272Cu;
    {
        const bool branch_taken_0x1e272c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E272Cu;
        // 0x1e2730: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e272c) {
            ctx->pc = 0x1E273Cu;
            goto label_1e273c;
        }
    }
    ctx->pc = 0x1E2734u;
label_1e2734:
    // 0x1e2734: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e2738:
    if (ctx->pc == 0x1E2738u) {
        ctx->pc = 0x1E2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2734u;
        // 0x1e2738: 0xae4300ac  sw          $v1, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E273Cu;
        goto label_1e273c;
    }
    ctx->pc = 0x1E2734u;
    {
        const bool branch_taken_0x1e2734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2734u;
        // 0x1e2738: 0xae4300ac  sw          $v1, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2734) {
            ctx->pc = 0x1E2740u;
            goto label_1e2740;
        }
    }
    ctx->pc = 0x1E273Cu;
label_1e273c:
    // 0x1e273c: 0xae4200ac  sw          $v0, 0xAC($s2)
    ctx->pc = 0x1e273cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
label_1e2740:
    // 0x1e2740: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1e2740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1e2744:
    // 0x1e2744: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x1e2744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1e2748:
    // 0x1e2748: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x1e2748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e274c:
    // 0x1e274c: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x1e274cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2750:
    // 0x1e2750: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1e2750u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e2754:
    // 0x1e2754: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e2754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e2758:
    // 0x1e2758: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e2758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e275c:
    // 0x1e275c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1e275cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e2760:
    // 0x1e2760: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1e2764:
    if (ctx->pc == 0x1E2764u) {
        ctx->pc = 0x1E2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2760u;
        // 0x1e2764: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2768u;
        goto label_1e2768;
    }
    ctx->pc = 0x1E2760u;
    {
        const bool branch_taken_0x1e2760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2760u;
        // 0x1e2764: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2760) {
            ctx->pc = 0x1E276Cu;
            goto label_1e276c;
        }
    }
    ctx->pc = 0x1E2768u;
label_1e2768:
    // 0x1e2768: 0xae4200ac  sw          $v0, 0xAC($s2)
    ctx->pc = 0x1e2768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
label_1e276c:
    // 0x1e276c: 0x8e5100a4  lw          $s1, 0xA4($s2)
    ctx->pc = 0x1e276cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2770:
    // 0x1e2770: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x1e2770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e2774:
    // 0x1e2774: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e2774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e2778:
    // 0x1e2778: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e2778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e277c:
    // 0x1e277c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_1e2780:
    if (ctx->pc == 0x1E2780u) {
        ctx->pc = 0x1E2784u;
        goto label_1e2784;
    }
    ctx->pc = 0x1E277Cu;
    {
        const bool branch_taken_0x1e277c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e277c) {
            ctx->pc = 0x1E28D8u;
            goto label_1e28d8;
        }
    }
    ctx->pc = 0x1E2784u;
label_1e2784:
    // 0x1e2784: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1e2784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1e2788:
    // 0x1e2788: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e2788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1e278c:
    // 0x1e278c: 0x8e4400e0  lw          $a0, 0xE0($s2)
    ctx->pc = 0x1e278cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_1e2790:
    // 0x1e2790: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e2794:
    // 0x1e2794: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1e2798:
    if (ctx->pc == 0x1E2798u) {
        ctx->pc = 0x1E2798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2794u;
        // 0x1e2798: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E279Cu;
        goto label_1e279c;
    }
    ctx->pc = 0x1E2794u;
    {
        const bool branch_taken_0x1e2794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2794u;
        // 0x1e2798: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2794) {
            ctx->pc = 0x1E27B8u;
            goto label_1e27b8;
        }
    }
    ctx->pc = 0x1E279Cu;
label_1e279c:
    // 0x1e279c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e27a0:
    // 0x1e27a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e27a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e27a4:
    // 0x1e27a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e27a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e27a8:
    // 0x1e27a8: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1e27a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1e27ac:
    // 0x1e27ac: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1e27acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1e27b0:
    // 0x1e27b0: 0x60f809  jalr        $v1
label_1e27b4:
    if (ctx->pc == 0x1E27B4u) {
        ctx->pc = 0x1E27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27B0u;
        // 0x1e27b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E27B8u;
        goto label_1e27b8;
    }
    ctx->pc = 0x1E27B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E27B8u);
        ctx->pc = 0x1E27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27B0u;
        // 0x1e27b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E27B0u, 0x1E27B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E27B8u;
label_1e27b8:
    // 0x1e27b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e27bc:
    // 0x1e27bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e27bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e27c0:
    // 0x1e27c0: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x1e27c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_1e27c4:
    // 0x1e27c4: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x1e27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_1e27c8:
    // 0x1e27c8: 0x60f809  jalr        $v1
label_1e27cc:
    if (ctx->pc == 0x1E27CCu) {
        ctx->pc = 0x1E27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27C8u;
        // 0x1e27cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E27D0u;
        goto label_1e27d0;
    }
    ctx->pc = 0x1E27C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E27D0u);
        ctx->pc = 0x1E27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27C8u;
        // 0x1e27cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E27C8u, 0x1E27D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E27D0u;
label_1e27d0:
    // 0x1e27d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e27d4:
    // 0x1e27d4: 0x924500fc  lbu         $a1, 0xFC($s2)
    ctx->pc = 0x1e27d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 252)));
label_1e27d8:
    // 0x1e27d8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1e27d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1e27dc:
    // 0x1e27dc: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1e27dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1e27e0:
    // 0x1e27e0: 0x60f809  jalr        $v1
label_1e27e4:
    if (ctx->pc == 0x1E27E4u) {
        ctx->pc = 0x1E27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27E0u;
        // 0x1e27e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E27E8u;
        goto label_1e27e8;
    }
    ctx->pc = 0x1E27E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E27E8u);
        ctx->pc = 0x1E27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27E0u;
        // 0x1e27e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E27E0u, 0x1E27E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E27E8u;
label_1e27e8:
    // 0x1e27e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e27ec:
    // 0x1e27ec: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e27ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1e27f0:
    // 0x1e27f0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1e27f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1e27f4:
    // 0x1e27f4: 0x60f809  jalr        $v1
label_1e27f8:
    if (ctx->pc == 0x1E27F8u) {
        ctx->pc = 0x1E27F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27F4u;
        // 0x1e27f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E27FCu;
        goto label_1e27fc;
    }
    ctx->pc = 0x1E27F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E27FCu);
        ctx->pc = 0x1E27F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27F4u;
        // 0x1e27f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E27F4u, 0x1E27FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E27FCu;
label_1e27fc:
    // 0x1e27fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2800:
    // 0x1e2800: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e2800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e2804:
    // 0x1e2804: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1e2804u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1e2808:
    // 0x1e2808: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1e2808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e280c:
    // 0x1e280c: 0x60f809  jalr        $v1
label_1e2810:
    if (ctx->pc == 0x1E2810u) {
        ctx->pc = 0x1E2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E280Cu;
        // 0x1e2810: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2814u;
        goto label_1e2814;
    }
    ctx->pc = 0x1E280Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2814u);
        ctx->pc = 0x1E2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E280Cu;
        // 0x1e2810: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E280Cu, 0x1E2814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2814u;
label_1e2814:
    // 0x1e2814: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x1e2814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2818:
    // 0x1e2818: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e2818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e281c:
    // 0x1e281c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e281cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e2820:
    // 0x1e2820: 0x0  nop
    ctx->pc = 0x1e2820u;
    // NOP
label_1e2824:
    // 0x1e2824: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e2828:
    if (ctx->pc == 0x1E2828u) {
        ctx->pc = 0x1E2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2824u;
        // 0x1e2828: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E282Cu;
        goto label_1e282c;
    }
    ctx->pc = 0x1E2824u;
    {
        const bool branch_taken_0x1e2824 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2824u;
        // 0x1e2828: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2824) {
            ctx->pc = 0x1E2834u;
            goto label_1e2834;
        }
    }
    ctx->pc = 0x1E282Cu;
label_1e282c:
    // 0x1e282c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e2830:
    if (ctx->pc == 0x1E2830u) {
        ctx->pc = 0x1E2830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E282Cu;
        // 0x1e2830: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2834u;
        goto label_1e2834;
    }
    ctx->pc = 0x1E282Cu;
    {
        const bool branch_taken_0x1e282c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E282Cu;
        // 0x1e2830: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e282c) {
            ctx->pc = 0x1E2850u;
            goto label_1e2850;
        }
    }
    ctx->pc = 0x1E2834u;
label_1e2834:
    // 0x1e2834: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e2834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2838:
    // 0x1e2838: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e2838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e283c:
    // 0x1e283c: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1e283cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1e2840:
    // 0x1e2840: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1e2840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e2844:
    // 0x1e2844: 0x60f809  jalr        $v1
label_1e2848:
    if (ctx->pc == 0x1E2848u) {
        ctx->pc = 0x1E2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2844u;
        // 0x1e2848: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E284Cu;
        goto label_1e284c;
    }
    ctx->pc = 0x1E2844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E284Cu);
        ctx->pc = 0x1E2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2844u;
        // 0x1e2848: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2844u, 0x1E284Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E284Cu;
label_1e284c:
    // 0x1e284c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1e284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e2850:
    // 0x1e2850: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x1e2850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_1e2854:
    // 0x1e2854: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e2854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e2858:
    // 0x1e2858: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e2858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e285c:
    // 0x1e285c: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1e285cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1e2860:
    // 0x1e2860: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1e2860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e2864:
    // 0x1e2864: 0x60f809  jalr        $v1
label_1e2868:
    if (ctx->pc == 0x1E2868u) {
        ctx->pc = 0x1E2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2864u;
        // 0x1e2868: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E286Cu;
        goto label_1e286c;
    }
    ctx->pc = 0x1E2864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E286Cu);
        ctx->pc = 0x1E2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2864u;
        // 0x1e2868: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2864u, 0x1E286Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E286Cu;
label_1e286c:
    // 0x1e286c: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x1e286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2870:
    // 0x1e2870: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1e2870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e2874:
    // 0x1e2874: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x1e2874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e2878:
    // 0x1e2878: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e2878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e287c:
    // 0x1e287c: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x1e287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e2880:
    // 0x1e2880: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x1e2880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2884:
    // 0x1e2884: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1e2884u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1e2888:
    // 0x1e2888: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x1e2888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_1e288c:
    // 0x1e288c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e2890:
    // 0x1e2890: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e2890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e2894:
    // 0x1e2894: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_1e2898:
    if (ctx->pc == 0x1E2898u) {
        ctx->pc = 0x1E2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2894u;
        // 0x1e2898: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E289Cu;
        goto label_1e289c;
    }
    ctx->pc = 0x1E2894u;
    {
        const bool branch_taken_0x1e2894 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2894u;
        // 0x1e2898: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2894) {
            ctx->pc = 0x1E28BCu;
            goto label_1e28bc;
        }
    }
    ctx->pc = 0x1E289Cu;
label_1e289c:
    // 0x1e289c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e28a0:
    // 0x1e28a0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1e28a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1e28a4:
    // 0x1e28a4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1e28a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1e28a8:
    // 0x1e28a8: 0x60f809  jalr        $v1
label_1e28ac:
    if (ctx->pc == 0x1E28ACu) {
        ctx->pc = 0x1E28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28A8u;
        // 0x1e28ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E28B0u;
        goto label_1e28b0;
    }
    ctx->pc = 0x1E28A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E28B0u);
        ctx->pc = 0x1E28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28A8u;
        // 0x1e28ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E28A8u, 0x1E28B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E28B0u;
label_1e28b0:
    // 0x1e28b0: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x1e28b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e28b4:
    // 0x1e28b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e28b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e28b8:
    // 0x1e28b8: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x1e28b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_1e28bc:
    // 0x1e28bc: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x1e28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e28c0:
    // 0x1e28c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e28c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e28c4:
    // 0x1e28c4: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1e28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e28c8:
    // 0x1e28c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e28c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e28cc:
    // 0x1e28cc: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1e28ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e28d0:
    // 0x1e28d0: 0x5460ffad  bnel        $v1, $zero, . + 4 + (-0x53 << 2)
label_1e28d4:
    if (ctx->pc == 0x1E28D4u) {
        ctx->pc = 0x1E28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28D0u;
        // 0x1e28d4: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E28D8u;
        goto label_1e28d8;
    }
    ctx->pc = 0x1E28D0u;
    {
        const bool branch_taken_0x1e28d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e28d0) {
            ctx->pc = 0x1E28D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E28D0u;
            // 0x1e28d4: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2788;
        }
    }
    ctx->pc = 0x1E28D8u;
label_1e28d8:
    // 0x1e28d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1e28dc:
    // 0x1e28dc: 0x8e4300e0  lw          $v1, 0xE0($s2)
    ctx->pc = 0x1e28dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_1e28e0:
    // 0x1e28e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e28e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1e28e4:
    // 0x1e28e4: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_1e28e8:
    if (ctx->pc == 0x1E28E8u) {
        ctx->pc = 0x1E28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28E4u;
        // 0x1e28e8: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E28ECu;
        goto label_1e28ec;
    }
    ctx->pc = 0x1E28E4u;
    {
        const bool branch_taken_0x1e28e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28E4u;
        // 0x1e28e8: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28e4) {
            ctx->pc = 0x1E29CCu;
            goto label_1e29cc;
        }
    }
    ctx->pc = 0x1E28ECu;
label_1e28ec:
    // 0x1e28ec: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1e28ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e28f0:
    // 0x1e28f0: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x1e28f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e28f4:
    // 0x1e28f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e28f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e28f8:
    // 0x1e28f8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1e28fc:
    if (ctx->pc == 0x1E28FCu) {
        ctx->pc = 0x1E28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28F8u;
        // 0x1e28fc: 0xe64000b8  swc1        $f0, 0xB8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2900u;
        goto label_1e2900;
    }
    ctx->pc = 0x1E28F8u;
    {
        const bool branch_taken_0x1e28f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28F8u;
        // 0x1e28fc: 0xe64000b8  swc1        $f0, 0xB8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28f8) {
            ctx->pc = 0x1E29F0u;
            goto label_1e29f0;
        }
    }
    ctx->pc = 0x1E2900u;
label_1e2900:
    // 0x1e2900: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1e2900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e2904:
    // 0x1e2904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2908:
    // 0x1e2908: 0x84650070  lh          $a1, 0x70($v1)
    ctx->pc = 0x1e2908u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1e290c:
    // 0x1e290c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1e290cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1e2910:
    // 0x1e2910: 0x40f809  jalr        $v0
label_1e2914:
    if (ctx->pc == 0x1E2914u) {
        ctx->pc = 0x1E2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2910u;
        // 0x1e2914: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2918u;
        goto label_1e2918;
    }
    ctx->pc = 0x1E2910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2918u);
        ctx->pc = 0x1E2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2910u;
        // 0x1e2914: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2910u, 0x1E2918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2918u;
label_1e2918:
    // 0x1e2918: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1e2918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e291c:
    // 0x1e291c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e291cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e2920:
    // 0x1e2920: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1e2920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e2924:
    // 0x1e2924: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e2924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2928:
    // 0x1e2928: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e292c:
    // 0x1e292c: 0xc65400b8  lwc1        $f20, 0xB8($s2)
    ctx->pc = 0x1e292cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e2930:
    // 0x1e2930: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1e2930u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1e2934:
    // 0x1e2934: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1e2934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e2938:
    // 0x1e2938: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1e2938u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1e293c:
    // 0x1e293c: 0x60f809  jalr        $v1
label_1e2940:
    if (ctx->pc == 0x1E2940u) {
        ctx->pc = 0x1E2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E293Cu;
        // 0x1e2940: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2944u;
        goto label_1e2944;
    }
    ctx->pc = 0x1E293Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2944u);
        ctx->pc = 0x1E2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E293Cu;
        // 0x1e2940: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E293Cu, 0x1E2944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2944u;
label_1e2944:
    // 0x1e2944: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e2944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2948:
    // 0x1e2948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e294c:
    // 0x1e294c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1e294cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e2950:
    // 0x1e2950: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1e2950u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1e2954:
    // 0x1e2954: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1e2954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e2958:
    // 0x1e2958: 0x0  nop
    ctx->pc = 0x1e2958u;
    // NOP
label_1e295c:
    // 0x1e295c: 0x0  nop
    ctx->pc = 0x1e295cu;
    // NOP
label_1e2960:
    // 0x1e2960: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1e2960u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_1e2964:
    // 0x1e2964: 0x60f809  jalr        $v1
label_1e2968:
    if (ctx->pc == 0x1E2968u) {
        ctx->pc = 0x1E2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2964u;
        // 0x1e2968: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E296Cu;
        goto label_1e296c;
    }
    ctx->pc = 0x1E2964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E296Cu);
        ctx->pc = 0x1E2968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2964u;
        // 0x1e2968: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2964u, 0x1E296Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E296Cu;
label_1e296c:
    // 0x1e296c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1e296cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2970:
    // 0x1e2970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2974:
    // 0x1e2974: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1e2974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e2978:
    // 0x1e2978: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e297c:
    // 0x1e297c: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x1e297cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_1e2980:
    // 0x1e2980: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e2980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2984:
    // 0x1e2984: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1e2984u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1e2988:
    // 0x1e2988: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1e2988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e298c:
    // 0x1e298c: 0x60f809  jalr        $v1
label_1e2990:
    if (ctx->pc == 0x1E2990u) {
        ctx->pc = 0x1E2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E298Cu;
        // 0x1e2990: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2994u;
        goto label_1e2994;
    }
    ctx->pc = 0x1E298Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2994u);
        ctx->pc = 0x1E2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E298Cu;
        // 0x1e2990: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E298Cu, 0x1E2994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2994u;
label_1e2994:
    // 0x1e2994: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1e2994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2998:
    // 0x1e2998: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e2998u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e299c:
    // 0x1e299c: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1e299cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e29a0:
    // 0x1e29a0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1e29a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1e29a4:
    // 0x1e29a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e29a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e29a8:
    // 0x1e29a8: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x1e29a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_1e29ac:
    // 0x1e29ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e29acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e29b0:
    // 0x1e29b0: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1e29b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1e29b4:
    // 0x1e29b4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1e29b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1e29b8:
    // 0x1e29b8: 0x60f809  jalr        $v1
label_1e29bc:
    if (ctx->pc == 0x1E29BCu) {
        ctx->pc = 0x1E29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29B8u;
        // 0x1e29bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E29C0u;
        goto label_1e29c0;
    }
    ctx->pc = 0x1E29B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E29C0u);
        ctx->pc = 0x1E29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29B8u;
        // 0x1e29bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E29B8u, 0x1E29C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E29C0u;
label_1e29c0:
    // 0x1e29c0: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1e29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e29c4:
    // 0x1e29c4: 0x10000071  b           . + 4 + (0x71 << 2)
label_1e29c8:
    if (ctx->pc == 0x1E29C8u) {
        ctx->pc = 0x1E29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29C4u;
        // 0x1e29c8: 0x2621023  subu        $v0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E29CCu;
        goto label_1e29cc;
    }
    ctx->pc = 0x1E29C4u;
    {
        const bool branch_taken_0x1e29c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29C4u;
        // 0x1e29c8: 0x2621023  subu        $v0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e29c4) {
            ctx->pc = 0x1E2B8Cu;
            goto label_1e2b8c;
        }
    }
    ctx->pc = 0x1E29CCu;
label_1e29cc:
    // 0x1e29cc: 0xc64100b8  lwc1        $f1, 0xB8($s2)
    ctx->pc = 0x1e29ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e29d0:
    // 0x1e29d0: 0x3c01459c  lui         $at, 0x459C
    ctx->pc = 0x1e29d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17820 << 16));
label_1e29d4:
    // 0x1e29d4: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1e29d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1e29d8:
    // 0x1e29d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e29d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e29dc:
    // 0x1e29dc: 0x0  nop
    ctx->pc = 0x1e29dcu;
    // NOP
label_1e29e0:
    // 0x1e29e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e29e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e29e4:
    // 0x1e29e4: 0x0  nop
    ctx->pc = 0x1e29e4u;
    // NOP
label_1e29e8:
    // 0x1e29e8: 0x45000103  bc1f        . + 4 + (0x103 << 2)
label_1e29ec:
    if (ctx->pc == 0x1E29ECu) {
        ctx->pc = 0x1E29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29E8u;
        // 0x1e29ec: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E29F0u;
        goto label_1e29f0;
    }
    ctx->pc = 0x1E29E8u;
    {
        const bool branch_taken_0x1e29e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29E8u;
        // 0x1e29ec: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e29e8) {
            ctx->pc = 0x1E2DF8u;
            goto label_1e2df8;
        }
    }
    ctx->pc = 0x1E29F0u;
label_1e29f0:
    // 0x1e29f0: 0x8e5300a4  lw          $s3, 0xA4($s2)
    ctx->pc = 0x1e29f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e29f4:
    // 0x1e29f4: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x1e29f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e29f8:
    // 0x1e29f8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e29f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e29fc:
    // 0x1e29fc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1e29fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2a00:
    // 0x1e2a00: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_1e2a04:
    if (ctx->pc == 0x1E2A04u) {
        ctx->pc = 0x1E2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A00u;
        // 0x1e2a04: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A08u;
        goto label_1e2a08;
    }
    ctx->pc = 0x1E2A00u;
    {
        const bool branch_taken_0x1e2a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A00u;
        // 0x1e2a04: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a00) {
            ctx->pc = 0x1E2BB0u;
            goto label_1e2bb0;
        }
    }
    ctx->pc = 0x1E2A08u;
label_1e2a08:
    // 0x1e2a08: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1e2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1e2a0c:
    // 0x1e2a0c: 0x0  nop
    ctx->pc = 0x1e2a0cu;
    // NOP
label_1e2a10:
    // 0x1e2a10: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1e2a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1e2a14:
    // 0x1e2a14: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x1e2a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_1e2a18:
    // 0x1e2a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e2a1c:
    // 0x1e2a1c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1e2a20:
    if (ctx->pc == 0x1E2A20u) {
        ctx->pc = 0x1E2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A1Cu;
        // 0x1e2a20: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A24u;
        goto label_1e2a24;
    }
    ctx->pc = 0x1E2A1Cu;
    {
        const bool branch_taken_0x1e2a1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A1Cu;
        // 0x1e2a20: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a1c) {
            ctx->pc = 0x1E2A40u;
            goto label_1e2a40;
        }
    }
    ctx->pc = 0x1E2A24u;
label_1e2a24:
    // 0x1e2a24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2a28:
    // 0x1e2a28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e2a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e2a2c:
    // 0x1e2a2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e2a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e2a30:
    // 0x1e2a30: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1e2a30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1e2a34:
    // 0x1e2a34: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1e2a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1e2a38:
    // 0x1e2a38: 0x60f809  jalr        $v1
label_1e2a3c:
    if (ctx->pc == 0x1E2A3Cu) {
        ctx->pc = 0x1E2A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A38u;
        // 0x1e2a3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A40u;
        goto label_1e2a40;
    }
    ctx->pc = 0x1E2A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2A40u);
        ctx->pc = 0x1E2A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A38u;
        // 0x1e2a3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2A38u, 0x1E2A40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2A40u;
label_1e2a40:
    // 0x1e2a40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e2a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2a44:
    // 0x1e2a44: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1e2a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e2a48:
    // 0x1e2a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2a4c:
    // 0x1e2a4c: 0x84650070  lh          $a1, 0x70($v1)
    ctx->pc = 0x1e2a4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1e2a50:
    // 0x1e2a50: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1e2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1e2a54:
    // 0x1e2a54: 0x40f809  jalr        $v0
label_1e2a58:
    if (ctx->pc == 0x1E2A58u) {
        ctx->pc = 0x1E2A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A54u;
        // 0x1e2a58: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A5Cu;
        goto label_1e2a5c;
    }
    ctx->pc = 0x1E2A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2A5Cu);
        ctx->pc = 0x1E2A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A54u;
        // 0x1e2a58: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2A54u, 0x1E2A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2A5Cu;
label_1e2a5c:
    // 0x1e2a5c: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1e2a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e2a60:
    // 0x1e2a60: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1e2a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2a64:
    // 0x1e2a64: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x1e2a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e2a68:
    // 0x1e2a68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e2a68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e2a6c:
    // 0x1e2a6c: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1e2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2a70:
    // 0x1e2a70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e2a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e2a74:
    // 0x1e2a74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e2a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1e2a78:
    // 0x1e2a78: 0x16630009  bne         $s3, $v1, . + 4 + (0x9 << 2)
label_1e2a7c:
    if (ctx->pc == 0x1E2A7Cu) {
        ctx->pc = 0x1E2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A78u;
        // 0x1e2a7c: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A80u;
        goto label_1e2a80;
    }
    ctx->pc = 0x1E2A78u;
    {
        const bool branch_taken_0x1e2a78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A78u;
        // 0x1e2a7c: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a78) {
            ctx->pc = 0x1E2AA0u;
            goto label_1e2aa0;
        }
    }
    ctx->pc = 0x1E2A80u;
label_1e2a80:
    // 0x1e2a80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2a84:
    // 0x1e2a84: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1e2a84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1e2a88:
    // 0x1e2a88: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1e2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1e2a8c:
    // 0x1e2a8c: 0x60f809  jalr        $v1
label_1e2a90:
    if (ctx->pc == 0x1E2A90u) {
        ctx->pc = 0x1E2A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A8Cu;
        // 0x1e2a90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A94u;
        goto label_1e2a94;
    }
    ctx->pc = 0x1E2A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2A94u);
        ctx->pc = 0x1E2A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A8Cu;
        // 0x1e2a90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2A8Cu, 0x1E2A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2A94u;
label_1e2a94:
    // 0x1e2a94: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x1e2a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2a98:
    // 0x1e2a98: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e2a98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e2a9c:
    // 0x1e2a9c: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x1e2a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_1e2aa0:
    // 0x1e2aa0: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x1e2aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2aa4:
    // 0x1e2aa4: 0xc64000b8  lwc1        $f0, 0xB8($s2)
    ctx->pc = 0x1e2aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e2aa8:
    // 0x1e2aa8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e2aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e2aac:
    // 0x1e2aac: 0x0  nop
    ctx->pc = 0x1e2aacu;
    // NOP
label_1e2ab0:
    // 0x1e2ab0: 0x45020039  bc1fl       . + 4 + (0x39 << 2)
label_1e2ab4:
    if (ctx->pc == 0x1E2AB4u) {
        ctx->pc = 0x1E2AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AB0u;
        // 0x1e2ab4: 0x8e4300ac  lw          $v1, 0xAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2AB8u;
        goto label_1e2ab8;
    }
    ctx->pc = 0x1E2AB0u;
    {
        const bool branch_taken_0x1e2ab0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2ab0) {
            ctx->pc = 0x1E2AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2AB0u;
            // 0x1e2ab4: 0x8e4300ac  lw          $v1, 0xAC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2B98u;
            goto label_1e2b98;
        }
    }
    ctx->pc = 0x1E2AB8u;
label_1e2ab8:
    // 0x1e2ab8: 0x8e4200e0  lw          $v0, 0xE0($s2)
    ctx->pc = 0x1e2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_1e2abc:
    // 0x1e2abc: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
label_1e2ac0:
    if (ctx->pc == 0x1E2AC0u) {
        ctx->pc = 0x1E2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2ABCu;
        // 0x1e2ac0: 0x8e4200a4  lw          $v0, 0xA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2AC4u;
        goto label_1e2ac4;
    }
    ctx->pc = 0x1E2ABCu;
    {
        const bool branch_taken_0x1e2abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2abc) {
            ctx->pc = 0x1E2AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2ABCu;
            // 0x1e2ac0: 0x8e4200a4  lw          $v0, 0xA4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2B64u;
            goto label_1e2b64;
        }
    }
    ctx->pc = 0x1E2AC4u;
label_1e2ac4:
    // 0x1e2ac4: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x1e2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_1e2ac8:
    // 0x1e2ac8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1e2acc:
    if (ctx->pc == 0x1E2ACCu) {
        ctx->pc = 0x1E2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AC8u;
        // 0x1e2acc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2AD0u;
        goto label_1e2ad0;
    }
    ctx->pc = 0x1E2AC8u;
    {
        const bool branch_taken_0x1e2ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AC8u;
        // 0x1e2acc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ac8) {
            ctx->pc = 0x1E2B30u;
            goto label_1e2b30;
        }
    }
    ctx->pc = 0x1E2AD0u;
label_1e2ad0:
    // 0x1e2ad0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1e2ad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1e2ad4:
    // 0x1e2ad4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1e2ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1e2ad8:
    // 0x1e2ad8: 0x60f809  jalr        $v1
label_1e2adc:
    if (ctx->pc == 0x1E2ADCu) {
        ctx->pc = 0x1E2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AD8u;
        // 0x1e2adc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2AE0u;
        goto label_1e2ae0;
    }
    ctx->pc = 0x1E2AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2AE0u);
        ctx->pc = 0x1E2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AD8u;
        // 0x1e2adc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2AD8u, 0x1E2AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2AE0u;
label_1e2ae0:
    // 0x1e2ae0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1e2ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2ae4:
    // 0x1e2ae4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e2ae4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e2ae8:
    // 0x1e2ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2aec:
    // 0x1e2aec: 0x84c50070  lh          $a1, 0x70($a2)
    ctx->pc = 0x1e2aecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_1e2af0:
    // 0x1e2af0: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x1e2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_1e2af4:
    // 0x1e2af4: 0x40f809  jalr        $v0
label_1e2af8:
    if (ctx->pc == 0x1E2AF8u) {
        ctx->pc = 0x1E2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AF4u;
        // 0x1e2af8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2AFCu;
        goto label_1e2afc;
    }
    ctx->pc = 0x1E2AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2AFCu);
        ctx->pc = 0x1E2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AF4u;
        // 0x1e2af8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2AF4u, 0x1E2AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2AFCu;
label_1e2afc:
    // 0x1e2afc: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1e2afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e2b00:
    // 0x1e2b00: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1e2b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2b04:
    // 0x1e2b04: 0xc64200b8  lwc1        $f2, 0xB8($s2)
    ctx->pc = 0x1e2b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e2b08:
    // 0x1e2b08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2b08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e2b0c:
    // 0x1e2b0c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1e2b0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1e2b10:
    // 0x1e2b10: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1e2b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e2b14:
    // 0x1e2b14: 0x0  nop
    ctx->pc = 0x1e2b14u;
    // NOP
label_1e2b18:
    // 0x1e2b18: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1e2b1c:
    if (ctx->pc == 0x1E2B1Cu) {
        ctx->pc = 0x1E2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B18u;
        // 0x1e2b1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B20u;
        goto label_1e2b20;
    }
    ctx->pc = 0x1E2B18u;
    {
        const bool branch_taken_0x1e2b18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B18u;
        // 0x1e2b1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b18) {
            ctx->pc = 0x1E2B24u;
            goto label_1e2b24;
        }
    }
    ctx->pc = 0x1E2B20u;
label_1e2b20:
    // 0x1e2b20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e2b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2b24:
    // 0x1e2b24: 0x5440ff76  bnel        $v0, $zero, . + 4 + (-0x8A << 2)
label_1e2b28:
    if (ctx->pc == 0x1E2B28u) {
        ctx->pc = 0x1E2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B24u;
        // 0x1e2b28: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B2Cu;
        goto label_1e2b2c;
    }
    ctx->pc = 0x1E2B24u;
    {
        const bool branch_taken_0x1e2b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b24) {
            ctx->pc = 0x1E2B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2B24u;
            // 0x1e2b28: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2900;
        }
    }
    ctx->pc = 0x1E2B2Cu;
label_1e2b2c:
    // 0x1e2b2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e2b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2b30:
    // 0x1e2b30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e2b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e2b34:
    // 0x1e2b34: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1e2b34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1e2b38:
    // 0x1e2b38: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1e2b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e2b3c:
    // 0x1e2b3c: 0x60f809  jalr        $v1
label_1e2b40:
    if (ctx->pc == 0x1E2B40u) {
        ctx->pc = 0x1E2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B3Cu;
        // 0x1e2b40: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B44u;
        goto label_1e2b44;
    }
    ctx->pc = 0x1E2B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2B44u);
        ctx->pc = 0x1E2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B3Cu;
        // 0x1e2b40: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2B3Cu, 0x1E2B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2B44u;
label_1e2b44:
    // 0x1e2b44: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1e2b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2b48:
    // 0x1e2b48: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1e2b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e2b4c:
    // 0x1e2b4c: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1e2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2b50:
    // 0x1e2b50: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2b50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e2b54:
    // 0x1e2b54: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1e2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1e2b58:
    // 0x1e2b58: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x1e2b58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_1e2b5c:
    // 0x1e2b5c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1e2b60:
    if (ctx->pc == 0x1E2B60u) {
        ctx->pc = 0x1E2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B5Cu;
        // 0x1e2b60: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B64u;
        goto label_1e2b64;
    }
    ctx->pc = 0x1E2B5Cu;
    {
        const bool branch_taken_0x1e2b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B5Cu;
        // 0x1e2b60: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b5c) {
            ctx->pc = 0x1E2BB0u;
            goto label_1e2bb0;
        }
    }
    ctx->pc = 0x1E2B64u;
label_1e2b64:
    // 0x1e2b64: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1e2b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1e2b68:
    // 0x1e2b68: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x1e2b68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_1e2b6c:
    // 0x1e2b6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e2b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2b70:
    // 0x1e2b70: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1e2b70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1e2b74:
    // 0x1e2b74: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1e2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1e2b78:
    // 0x1e2b78: 0x40f809  jalr        $v0
label_1e2b7c:
    if (ctx->pc == 0x1E2B7Cu) {
        ctx->pc = 0x1E2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B78u;
        // 0x1e2b7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B80u;
        goto label_1e2b80;
    }
    ctx->pc = 0x1E2B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2B80u);
        ctx->pc = 0x1E2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B78u;
        // 0x1e2b7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2B78u, 0x1E2B80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2B80u;
label_1e2b80:
    // 0x1e2b80: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1e2b84:
    if (ctx->pc == 0x1E2B84u) {
        ctx->pc = 0x1E2B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B80u;
        // 0x1e2b84: 0x8e5300b4  lw          $s3, 0xB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B88u;
        goto label_1e2b88;
    }
    ctx->pc = 0x1E2B80u;
    {
        const bool branch_taken_0x1e2b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b80) {
            ctx->pc = 0x1E2B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2B80u;
            // 0x1e2b84: 0x8e5300b4  lw          $s3, 0xB4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2BB4u;
            goto label_1e2bb4;
        }
    }
    ctx->pc = 0x1E2B88u;
label_1e2b88:
    // 0x1e2b88: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x1e2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_1e2b8c:
    // 0x1e2b8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e2b90:
    // 0x1e2b90: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e2b94:
    if (ctx->pc == 0x1E2B94u) {
        ctx->pc = 0x1E2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B90u;
        // 0x1e2b94: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B98u;
        goto label_1e2b98;
    }
    ctx->pc = 0x1E2B90u;
    {
        const bool branch_taken_0x1e2b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B90u;
        // 0x1e2b94: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b90) {
            ctx->pc = 0x1E2BB0u;
            goto label_1e2bb0;
        }
    }
    ctx->pc = 0x1E2B98u;
label_1e2b98:
    // 0x1e2b98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e2b98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e2b9c:
    // 0x1e2b9c: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1e2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2ba0:
    // 0x1e2ba0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e2ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e2ba4:
    // 0x1e2ba4: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1e2ba4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e2ba8:
    // 0x1e2ba8: 0x5460ff99  bnel        $v1, $zero, . + 4 + (-0x67 << 2)
label_1e2bac:
    if (ctx->pc == 0x1E2BACu) {
        ctx->pc = 0x1E2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BA8u;
        // 0x1e2bac: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2BB0u;
        goto label_1e2bb0;
    }
    ctx->pc = 0x1E2BA8u;
    {
        const bool branch_taken_0x1e2ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ba8) {
            ctx->pc = 0x1E2BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2BA8u;
            // 0x1e2bac: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2a10;
        }
    }
    ctx->pc = 0x1E2BB0u;
label_1e2bb0:
    // 0x1e2bb0: 0x8e5300b4  lw          $s3, 0xB4($s2)
    ctx->pc = 0x1e2bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_1e2bb4:
    // 0x1e2bb4: 0x8e4400ac  lw          $a0, 0xAC($s2)
    ctx->pc = 0x1e2bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e2bb8:
    // 0x1e2bb8: 0x8e5100a4  lw          $s1, 0xA4($s2)
    ctx->pc = 0x1e2bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2bbc:
    // 0x1e2bbc: 0x93182b  sltu        $v1, $a0, $s3
    ctx->pc = 0x1e2bbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1e2bc0:
    // 0x1e2bc0: 0x83980b  movn        $s3, $a0, $v1
    ctx->pc = 0x1e2bc0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_1e2bc4:
    // 0x1e2bc4: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1e2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1e2bc8:
    // 0x1e2bc8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e2bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2bcc:
    // 0x1e2bcc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1e2bd0:
    if (ctx->pc == 0x1E2BD0u) {
        ctx->pc = 0x1E2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BCCu;
        // 0x1e2bd0: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2BD4u;
        goto label_1e2bd4;
    }
    ctx->pc = 0x1E2BCCu;
    {
        const bool branch_taken_0x1e2bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BCCu;
        // 0x1e2bd0: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2bcc) {
            ctx->pc = 0x1E2C54u;
            goto label_1e2c54;
        }
    }
    ctx->pc = 0x1E2BD4u;
label_1e2bd4:
    // 0x1e2bd4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1e2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1e2bd8:
    // 0x1e2bd8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e2bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1e2bdc:
    // 0x1e2bdc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e2bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e2be0:
    // 0x1e2be0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e2be4:
    // 0x1e2be4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e2be4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2be8:
    // 0x1e2be8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e2be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2bec:
    // 0x1e2bec: 0x84650070  lh          $a1, 0x70($v1)
    ctx->pc = 0x1e2becu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1e2bf0:
    // 0x1e2bf0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1e2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1e2bf4:
    // 0x1e2bf4: 0x40f809  jalr        $v0
label_1e2bf8:
    if (ctx->pc == 0x1E2BF8u) {
        ctx->pc = 0x1E2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BF4u;
        // 0x1e2bf8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2BFCu;
        goto label_1e2bfc;
    }
    ctx->pc = 0x1E2BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2BFCu);
        ctx->pc = 0x1E2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BF4u;
        // 0x1e2bf8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2BF4u, 0x1E2BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2BFCu;
label_1e2bfc:
    // 0x1e2bfc: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1e2bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e2c00:
    // 0x1e2c00: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1e2c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2c04:
    // 0x1e2c04: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1e2c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2c08:
    // 0x1e2c08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e2c08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e2c0c:
    // 0x1e2c0c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1e2c10:
    // 0x1e2c10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e2c14:
    // 0x1e2c14: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_1e2c18:
    if (ctx->pc == 0x1E2C18u) {
        ctx->pc = 0x1E2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C14u;
        // 0x1e2c18: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C1Cu;
        goto label_1e2c1c;
    }
    ctx->pc = 0x1E2C14u;
    {
        const bool branch_taken_0x1e2c14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C14u;
        // 0x1e2c18: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c14) {
            ctx->pc = 0x1E2C3Cu;
            goto label_1e2c3c;
        }
    }
    ctx->pc = 0x1E2C1Cu;
label_1e2c1c:
    // 0x1e2c1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2c20:
    // 0x1e2c20: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1e2c20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1e2c24:
    // 0x1e2c24: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1e2c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1e2c28:
    // 0x1e2c28: 0x60f809  jalr        $v1
label_1e2c2c:
    if (ctx->pc == 0x1E2C2Cu) {
        ctx->pc = 0x1E2C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C28u;
        // 0x1e2c2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C30u;
        goto label_1e2c30;
    }
    ctx->pc = 0x1E2C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2C30u);
        ctx->pc = 0x1E2C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C28u;
        // 0x1e2c2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2C28u, 0x1E2C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2C30u;
label_1e2c30:
    // 0x1e2c30: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x1e2c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2c34:
    // 0x1e2c34: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e2c34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e2c38:
    // 0x1e2c38: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x1e2c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_1e2c3c:
    // 0x1e2c3c: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1e2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2c40:
    // 0x1e2c40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e2c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e2c44:
    // 0x1e2c44: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1e2c48:
    // 0x1e2c48: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e2c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2c4c:
    // 0x1e2c4c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
label_1e2c50:
    if (ctx->pc == 0x1E2C50u) {
        ctx->pc = 0x1E2C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C4Cu;
        // 0x1e2c50: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C54u;
        goto label_1e2c54;
    }
    ctx->pc = 0x1E2C4Cu;
    {
        const bool branch_taken_0x1e2c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2c4c) {
            ctx->pc = 0x1E2C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2C4Cu;
            // 0x1e2c50: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2bd8;
        }
    }
    ctx->pc = 0x1E2C54u;
label_1e2c54:
    // 0x1e2c54: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x1e2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_1e2c58:
    // 0x1e2c58: 0x54400067  bnel        $v0, $zero, . + 4 + (0x67 << 2)
label_1e2c5c:
    if (ctx->pc == 0x1E2C5Cu) {
        ctx->pc = 0x1E2C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C58u;
        // 0x1e2c5c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C60u;
        goto label_1e2c60;
    }
    ctx->pc = 0x1E2C58u;
    {
        const bool branch_taken_0x1e2c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2c58) {
            ctx->pc = 0x1E2C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2C58u;
            // 0x1e2c5c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2DF8u;
            goto label_1e2df8;
        }
    }
    ctx->pc = 0x1E2C60u;
label_1e2c60:
    // 0x1e2c60: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1e2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2c64:
    // 0x1e2c64: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1e2c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e2c68:
    // 0x1e2c68: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1e2c6c:
    if (ctx->pc == 0x1E2C6Cu) {
        ctx->pc = 0x1E2C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C68u;
        // 0x1e2c6c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C70u;
        goto label_1e2c70;
    }
    ctx->pc = 0x1E2C68u;
    {
        const bool branch_taken_0x1e2c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C68u;
        // 0x1e2c6c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c68) {
            ctx->pc = 0x1E2CF8u;
            goto label_1e2cf8;
        }
    }
    ctx->pc = 0x1E2C70u;
label_1e2c70:
    // 0x1e2c70: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1e2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1e2c74:
    // 0x1e2c74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e2c78:
    // 0x1e2c78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e2c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e2c7c:
    // 0x1e2c7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e2c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e2c80:
    // 0x1e2c80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e2c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e2c84:
    // 0x1e2c84: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1e2c84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e2c88:
    // 0x1e2c88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2c8c:
    // 0x1e2c8c: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1e2c8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1e2c90:
    // 0x1e2c90: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1e2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1e2c94:
    // 0x1e2c94: 0x60f809  jalr        $v1
label_1e2c98:
    if (ctx->pc == 0x1E2C98u) {
        ctx->pc = 0x1E2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C94u;
        // 0x1e2c98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C9Cu;
        goto label_1e2c9c;
    }
    ctx->pc = 0x1E2C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2C9Cu);
        ctx->pc = 0x1E2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C94u;
        // 0x1e2c98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2C94u, 0x1E2C9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2C9Cu;
label_1e2c9c:
    // 0x1e2c9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2ca0:
    // 0x1e2ca0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e2ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1e2ca4:
    // 0x1e2ca4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1e2ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1e2ca8:
    // 0x1e2ca8: 0x60f809  jalr        $v1
label_1e2cac:
    if (ctx->pc == 0x1E2CACu) {
        ctx->pc = 0x1E2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CA8u;
        // 0x1e2cac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2CB0u;
        goto label_1e2cb0;
    }
    ctx->pc = 0x1E2CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2CB0u);
        ctx->pc = 0x1E2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CA8u;
        // 0x1e2cac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2CA8u, 0x1E2CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2CB0u;
label_1e2cb0:
    // 0x1e2cb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2cb4:
    // 0x1e2cb4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e2cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e2cb8:
    // 0x1e2cb8: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1e2cb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1e2cbc:
    // 0x1e2cbc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1e2cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e2cc0:
    // 0x1e2cc0: 0x60f809  jalr        $v1
label_1e2cc4:
    if (ctx->pc == 0x1E2CC4u) {
        ctx->pc = 0x1E2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CC0u;
        // 0x1e2cc4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2CC8u;
        goto label_1e2cc8;
    }
    ctx->pc = 0x1E2CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2CC8u);
        ctx->pc = 0x1E2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CC0u;
        // 0x1e2cc4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2CC0u, 0x1E2CC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2CC8u;
label_1e2cc8:
    // 0x1e2cc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2ccc:
    // 0x1e2ccc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e2cccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e2cd0:
    // 0x1e2cd0: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1e2cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e2cd4:
    // 0x1e2cd4: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1e2cd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1e2cd8:
    // 0x1e2cd8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1e2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1e2cdc:
    // 0x1e2cdc: 0x60f809  jalr        $v1
label_1e2ce0:
    if (ctx->pc == 0x1E2CE0u) {
        ctx->pc = 0x1E2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CDCu;
        // 0x1e2ce0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2CE4u;
        goto label_1e2ce4;
    }
    ctx->pc = 0x1E2CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2CE4u);
        ctx->pc = 0x1E2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CDCu;
        // 0x1e2ce0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2CDCu, 0x1E2CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2CE4u;
label_1e2ce4:
    // 0x1e2ce4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e2ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2ce8:
    // 0x1e2ce8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e2ce8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1e2cec:
    // 0x1e2cec: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1e2cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1e2cf0:
    // 0x1e2cf0: 0x60f809  jalr        $v1
label_1e2cf4:
    if (ctx->pc == 0x1E2CF4u) {
        ctx->pc = 0x1E2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CF0u;
        // 0x1e2cf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2CF8u;
        goto label_1e2cf8;
    }
    ctx->pc = 0x1E2CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2CF8u);
        ctx->pc = 0x1E2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CF0u;
        // 0x1e2cf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2CF0u, 0x1E2CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2CF8u;
label_1e2cf8:
    // 0x1e2cf8: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x1e2cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e2cfc:
    // 0x1e2cfc: 0xc64100b8  lwc1        $f1, 0xB8($s2)
    ctx->pc = 0x1e2cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2d00:
    // 0x1e2d00: 0x46141000  add.s       $f0, $f2, $f20
    ctx->pc = 0x1e2d00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
label_1e2d04:
    // 0x1e2d04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e2d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e2d08:
    // 0x1e2d08: 0x0  nop
    ctx->pc = 0x1e2d08u;
    // NOP
label_1e2d0c:
    // 0x1e2d0c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_1e2d10:
    if (ctx->pc == 0x1E2D10u) {
        ctx->pc = 0x1E2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D0Cu;
        // 0x1e2d10: 0x8e4200a4  lw          $v0, 0xA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D14u;
        goto label_1e2d14;
    }
    ctx->pc = 0x1E2D0Cu;
    {
        const bool branch_taken_0x1e2d0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2d0c) {
            ctx->pc = 0x1E2D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2D0Cu;
            // 0x1e2d10: 0x8e4200a4  lw          $v0, 0xA4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2D40u;
            goto label_1e2d40;
        }
    }
    ctx->pc = 0x1E2D14u;
label_1e2d14:
    // 0x1e2d14: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x1e2d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2d18:
    // 0x1e2d18: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
label_1e2d1c:
    if (ctx->pc == 0x1E2D1Cu) {
        ctx->pc = 0x1E2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D18u;
        // 0x1e2d1c: 0x8e4200e0  lw          $v0, 0xE0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D20u;
        goto label_1e2d20;
    }
    ctx->pc = 0x1E2D18u;
    {
        const bool branch_taken_0x1e2d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2d18) {
            ctx->pc = 0x1E2D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2D18u;
            // 0x1e2d1c: 0x8e4200e0  lw          $v0, 0xE0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2DA0u;
            goto label_1e2da0;
        }
    }
    ctx->pc = 0x1E2D20u;
label_1e2d20:
    // 0x1e2d20: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x1e2d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_1e2d24:
    // 0x1e2d24: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1e2d24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2d28:
    // 0x1e2d28: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1e2d2c:
    if (ctx->pc == 0x1E2D2Cu) {
        ctx->pc = 0x1E2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D28u;
        // 0x1e2d2c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D30u;
        goto label_1e2d30;
    }
    ctx->pc = 0x1E2D28u;
    {
        const bool branch_taken_0x1e2d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D28u;
        // 0x1e2d2c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d28) {
            ctx->pc = 0x1E2D9Cu;
            goto label_1e2d9c;
        }
    }
    ctx->pc = 0x1E2D30u;
label_1e2d30:
    // 0x1e2d30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e2d34:
    // 0x1e2d34: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x1e2d34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
label_1e2d38:
    // 0x1e2d38: 0x10000018  b           . + 4 + (0x18 << 2)
label_1e2d3c:
    if (ctx->pc == 0x1E2D3Cu) {
        ctx->pc = 0x1E2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D38u;
        // 0x1e2d3c: 0xae4300a4  sw          $v1, 0xA4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D40u;
        goto label_1e2d40;
    }
    ctx->pc = 0x1E2D38u;
    {
        const bool branch_taken_0x1e2d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D38u;
        // 0x1e2d3c: 0xae4300a4  sw          $v1, 0xA4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d38) {
            ctx->pc = 0x1E2D9Cu;
            goto label_1e2d9c;
        }
    }
    ctx->pc = 0x1E2D40u;
label_1e2d40:
    // 0x1e2d40: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x1e2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1e2d44:
    // 0x1e2d44: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x1e2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e2d48:
    // 0x1e2d48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e2d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e2d4c:
    // 0x1e2d4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e2d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1e2d50:
    // 0x1e2d50: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e2d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e2d54:
    // 0x1e2d54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e2d58:
    // 0x1e2d58: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1e2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1e2d5c:
    // 0x1e2d5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e2d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2d60:
    // 0x1e2d60: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1e2d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2d64:
    // 0x1e2d64: 0x50a6000e  beql        $a1, $a2, . + 4 + (0xE << 2)
label_1e2d68:
    if (ctx->pc == 0x1E2D68u) {
        ctx->pc = 0x1E2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D64u;
        // 0x1e2d68: 0x8e4200e0  lw          $v0, 0xE0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D6Cu;
        goto label_1e2d6c;
    }
    ctx->pc = 0x1E2D64u;
    {
        const bool branch_taken_0x1e2d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1e2d64) {
            ctx->pc = 0x1E2D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2D64u;
            // 0x1e2d68: 0x8e4200e0  lw          $v0, 0xE0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2DA0u;
            goto label_1e2da0;
        }
    }
    ctx->pc = 0x1E2D6Cu;
label_1e2d6c:
    // 0x1e2d6c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1e2d6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e2d70:
    // 0x1e2d70: 0x0  nop
    ctx->pc = 0x1e2d70u;
    // NOP
label_1e2d74:
    // 0x1e2d74: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_1e2d78:
    if (ctx->pc == 0x1E2D78u) {
        ctx->pc = 0x1E2D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D74u;
        // 0x1e2d78: 0x8e4200e0  lw          $v0, 0xE0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D7Cu;
        goto label_1e2d7c;
    }
    ctx->pc = 0x1E2D74u;
    {
        const bool branch_taken_0x1e2d74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2d74) {
            ctx->pc = 0x1E2D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2D74u;
            // 0x1e2d78: 0x8e4200e0  lw          $v0, 0xE0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2DA0u;
            goto label_1e2da0;
        }
    }
    ctx->pc = 0x1E2D7Cu;
label_1e2d7c:
    // 0x1e2d7c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1e2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e2d80:
    // 0x1e2d80: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1e2d80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1e2d84:
    // 0x1e2d84: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1e2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1e2d88:
    // 0x1e2d88: 0x40f809  jalr        $v0
label_1e2d8c:
    if (ctx->pc == 0x1E2D8Cu) {
        ctx->pc = 0x1E2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D88u;
        // 0x1e2d8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D90u;
        goto label_1e2d90;
    }
    ctx->pc = 0x1E2D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2D90u);
        ctx->pc = 0x1E2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D88u;
        // 0x1e2d8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2D88u, 0x1E2D90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2D90u;
label_1e2d90:
    // 0x1e2d90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1e2d94:
    if (ctx->pc == 0x1E2D94u) {
        ctx->pc = 0x1E2D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D90u;
        // 0x1e2d94: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D98u;
        goto label_1e2d98;
    }
    ctx->pc = 0x1E2D90u;
    {
        const bool branch_taken_0x1e2d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D90u;
        // 0x1e2d94: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d90) {
            ctx->pc = 0x1E2D9Cu;
            goto label_1e2d9c;
        }
    }
    ctx->pc = 0x1E2D98u;
label_1e2d98:
    // 0x1e2d98: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x1e2d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
label_1e2d9c:
    // 0x1e2d9c: 0x8e4200e0  lw          $v0, 0xE0($s2)
    ctx->pc = 0x1e2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_1e2da0:
    // 0x1e2da0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1e2da4:
    if (ctx->pc == 0x1E2DA4u) {
        ctx->pc = 0x1E2DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DA0u;
        // 0x1e2da4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2DA8u;
        goto label_1e2da8;
    }
    ctx->pc = 0x1E2DA0u;
    {
        const bool branch_taken_0x1e2da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DA0u;
        // 0x1e2da4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2da0) {
            ctx->pc = 0x1E2DF8u;
            goto label_1e2df8;
        }
    }
    ctx->pc = 0x1E2DA8u;
label_1e2da8:
    // 0x1e2da8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e2dac:
    // 0x1e2dac: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1e2dacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1e2db0:
    // 0x1e2db0: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1e2db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1e2db4:
    // 0x1e2db4: 0x60f809  jalr        $v1
label_1e2db8:
    if (ctx->pc == 0x1E2DB8u) {
        ctx->pc = 0x1E2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DB4u;
        // 0x1e2db8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2DBCu;
        goto label_1e2dbc;
    }
    ctx->pc = 0x1E2DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E2DBCu);
        ctx->pc = 0x1E2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DB4u;
        // 0x1e2db8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2DB4u, 0x1E2DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2DBCu;
label_1e2dbc:
    // 0x1e2dbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e2dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e2dc0:
    // 0x1e2dc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e2dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e2dc4:
    // 0x1e2dc4: 0x0  nop
    ctx->pc = 0x1e2dc4u;
    // NOP
label_1e2dc8:
    // 0x1e2dc8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e2dc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e2dcc:
    // 0x1e2dcc: 0x0  nop
    ctx->pc = 0x1e2dccu;
    // NOP
label_1e2dd0:
    // 0x1e2dd0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1e2dd4:
    if (ctx->pc == 0x1E2DD4u) {
        ctx->pc = 0x1E2DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DD0u;
        // 0x1e2dd4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2DD8u;
        goto label_1e2dd8;
    }
    ctx->pc = 0x1E2DD0u;
    {
        const bool branch_taken_0x1e2dd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DD0u;
        // 0x1e2dd4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2dd0) {
            ctx->pc = 0x1E2DF8u;
            goto label_1e2df8;
        }
    }
    ctx->pc = 0x1E2DD8u;
label_1e2dd8:
    // 0x1e2dd8: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1e2dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e2ddc:
    // 0x1e2ddc: 0x3c013be5  lui         $at, 0x3BE5
    ctx->pc = 0x1e2ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15333 << 16));
label_1e2de0:
    // 0x1e2de0: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1e2de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
label_1e2de4:
    // 0x1e2de4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e2de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e2de8:
    // 0x1e2de8: 0x0  nop
    ctx->pc = 0x1e2de8u;
    // NOP
label_1e2dec:
    // 0x1e2dec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e2decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e2df0:
    // 0x1e2df0: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x1e2df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_1e2df4:
    // 0x1e2df4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1e2df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e2df8:
    // 0x1e2df8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1e2df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e2dfc:
    // 0x1e2dfc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1e2dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e2e00:
    // 0x1e2e00: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1e2e00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e2e04:
    // 0x1e2e04: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1e2e04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e2e08:
    // 0x1e2e08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e2e08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e2e0c:
    // 0x1e2e0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e2e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2e10:
    // 0x1e2e10: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1e2e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e2e14:
    // 0x1e2e14: 0x3e00008  jr          $ra
label_1e2e18:
    if (ctx->pc == 0x1E2E18u) {
        ctx->pc = 0x1E2E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E14u;
        // 0x1e2e18: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E1Cu;
        goto label_1e2e1c;
    }
    ctx->pc = 0x1E2E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E14u;
        // 0x1e2e18: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2E1Cu;
label_1e2e1c:
    // 0x1e2e1c: 0x0  nop
    ctx->pc = 0x1e2e1cu;
    // NOP
    ctx->pc = 0x1e2e20u;
}
